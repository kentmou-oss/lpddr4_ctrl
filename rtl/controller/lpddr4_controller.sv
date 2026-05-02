// LPDDR4 Controller - Main controller FSM and command generation
`timescale 1ns / 1ps

module lpddr4_controller (
    input  logic        clk,
    input  logic        rst_n,

    // AXI command input
    input  logic        cmd_valid,
    output logic        cmd_ready,
    input  logic [31:0] cmd_addr,
    input  logic [7:0]  cmd_len,
    input  logic        cmd_wr,
    input  logic [127:0] cmd_wdata,
    input  logic [15:0] cmd_wstrb,
    input  logic [4:0]  cmd_id,  // 5-bit for 32 outstanding reads
    input  logic [1:0]  cmd_port,

    // Response output
    output logic [127:0] resp_rdata,
    output logic [4:0]  resp_id,  // 5-bit for outstanding reads
    output logic        resp_valid,
    input  logic        resp_ready,
    output logic [1:0]  resp_port,
    output logic        resp_is_wr,

    // DFI interface to PHY
    output logic        dfi_cs_n,
    output logic [1:0]  dfi_cke,
    output logic [9:0]  dfi_ca,
    output logic        dfi_ck,
    output logic        dfi_ck_en,
    output logic [1:0]  dfi_odt,
    output logic [31:0] dfi_wrdata,
    output logic        dfi_wrdata_en,
    output logic        dfi_wrdata_mask,
    input  logic [31:0] dfi_rddata,
    input  logic        dfi_rddata_en,

    // Configuration
    input  logic [31:0] cfg_timing,
    input  logic [31:0] cfg_ctrl,

    // Status
    output logic [7:0]  status_state,
    output logic        init_done,
    output logic        training_done,

    // Interrupt
    output logic        intr_cmd_cmplt,
    output logic        intr_err
);
    import lpddr4_pkg::*;

    // Controller states
    typedef enum logic [7:0] {
        CTRL_RESET      = 8'h00,
        CTRL_INIT_WAIT  = 8'h01,
        CTRL_INIT_MR    = 8'h02,
        CTRL_INIT_ZQCAL = 8'h03,
        CTRL_IDLE       = 8'h10,
        CTRL_REFRESH    = 8'h20,
        CTRL_ACTIVATE   = 8'h30,
        CTRL_READ       = 8'h40,
        CTRL_WRITE      = 8'h50,
        CTRL_PRECHARGE  = 8'h60,
        CTRL_MRR        = 8'h70,
        CTRL_MRW        = 8'h80,
        CTRL_TRAINING   = 8'h90,
        CTRL_SREF       = 8'hA0,
        CTRL_PWRDOWN    = 8'hB0
    } ctrl_state_t;

    ctrl_state_t state, next_state;

    // Address decode
    logic [2:0]  bank_addr;
    logic [13:0] row_addr;
    logic [10:0] col_addr;
    logic [1:0]  chip_sel;

    // Row open tracking
    logic [13:0] open_row [4][2];  // [chip][bank]
    logic        row_open [4][2];

    // Command queue
    localparam Q_DEPTH = 8;
    logic [31:0] q_addr     [Q_DEPTH];
    logic [7:0]  q_len      [Q_DEPTH];
    logic        q_wr       [Q_DEPTH];
    logic [127:0] q_wdata   [Q_DEPTH];
    logic [15:0] q_wstrb    [Q_DEPTH];
    logic [4:0]  q_id       [Q_DEPTH];  // 5-bit for outstanding reads
    logic [1:0]  q_port     [Q_DEPTH];
    logic [Q_DEPTH-1:0] q_valid;
    logic [$clog2(Q_DEPTH)-1:0] q_wr_ptr, q_rd_ptr;
    logic q_full, q_empty;

    // Burst counter
    logic [7:0] burst_cnt;
    logic burst_active;

    // Data buffer
    logic [127:0] write_buf;
    logic [127:0] read_buf;
    logic [15:0]  write_strb_buf;

    // Reorder buffer for read responses (32 entries for outstanding reads)
    localparam ROB_DEPTH = 32;
    logic [127:0] rob_rdata   [ROB_DEPTH];
    logic [4:0]  rob_id       [ROB_DEPTH];
    logic [1:0]  rob_port     [ROB_DEPTH];
    logic        rob_valid    [ROB_DEPTH];
    logic [$clog2(ROB_DEPTH)-1:0] rob_head;
    logic [$clog2(ROB_DEPTH)-1:0] rob_tail;
    logic [4:0]  rob_pending_id;  // ID of in-flight read

    // Write response tracking
    logic        wr_resp_pending;
    logic [4:0]  wr_resp_id;
    logic [1:0]  wr_resp_port;

    // Mode registers
    logic [7:0] mr [64];

    // Timing counters
    logic [15:0] timer;
    logic        timer_done;
    logic        timer_start;
    logic [7:0]  init_timer;

    // Refesh timer
    logic [15:0] ref_timer;
    logic        ref_req;
    logic        ref_ack;

    // State machine
    always_ff @(posedge clk) begin
        if (!rst_n)
            state <= CTRL_RESET;
        else
            state <= next_state;
    end

    always_comb begin
        next_state = state;
        case (state)
            CTRL_RESET: begin
                if (rst_n)
                    next_state = CTRL_INIT_WAIT;
            end

            CTRL_INIT_WAIT: begin
                if (init_timer >= 100)  // Simple delay count
                    next_state = CTRL_INIT_MR;
            end

            CTRL_INIT_MR: begin
                if (init_timer >= 200)
                    next_state = CTRL_INIT_ZQCAL;
            end

            CTRL_INIT_ZQCAL: begin
                if (init_timer >= 250)
                    next_state = CTRL_IDLE;
            end

            CTRL_IDLE: begin
                if (ref_req)
                    next_state = CTRL_REFRESH;
                else if (!q_empty && !burst_active)
                    next_state = CTRL_ACTIVATE;
            end

            CTRL_REFRESH: begin
                if (timer_done)
                    next_state = CTRL_IDLE;
            end

            CTRL_ACTIVATE: begin
                if (timer_done) begin
                    if (q_wr[q_rd_ptr])
                        next_state = CTRL_WRITE;
                    else
                        next_state = CTRL_READ;
                end
            end

            CTRL_READ: begin
                // Stay until burst completes; state_d check prevents premature exit
                if (state_d == CTRL_READ && !burst_active)
                    next_state = CTRL_IDLE;
                else
                    next_state = CTRL_READ;
            end

            CTRL_WRITE: begin
                if (state_d == CTRL_WRITE && !burst_active && wr_burst_done)
                    next_state = CTRL_IDLE;
                else
                    next_state = CTRL_WRITE;
            end

            CTRL_PRECHARGE: begin
                if (timer_done)
                    next_state = CTRL_IDLE;
            end

            default: next_state = CTRL_IDLE;
        endcase
    end

    // Timer logic - uses one-shot timer_start to load timer
    logic timer_start_d;
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            timer <= 16'h0;
            timer_done <= 1'b0;
            timer_start_d <= 1'b0;
        end else begin
            // Edge detection: load timer only on rising edge of timer_start
            if (timer_start && !timer_start_d) begin
                timer <= cfg_timing[15:0];
                timer_done <= 1'b0;
            end else if (timer > 0) begin
                timer <= timer - 1;
                timer_done <= (timer == 1);
            end else begin
                timer_done <= 1'b0;
            end
            timer_start_d <= timer_start;
        end
    end

    // Simple init timer counter - counts during all init states
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            init_timer <= 8'h0;
        end else if (state == CTRL_INIT_WAIT || state == CTRL_INIT_MR || state == CTRL_INIT_ZQCAL) begin
            if (init_timer < 8'hFF)
                init_timer <= init_timer + 1;
        end else begin
            init_timer <= 8'h0;
        end
    end

    // Refresh timer (8ms interval for DDR4, simplified for LPDDR4)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            ref_timer <= 16'h0;
            ref_req <= 1'b0;
        end else begin
            if (ref_timer == 16'hFFFF) begin
                ref_req <= 1'b1;
                ref_timer <= 16'h0;
            end else begin
                ref_timer <= ref_timer + 1;
                if (ref_req && !ref_ack)
                    ref_req <= 1'b0;
            end
        end
    end

    // Command queue management
    assign q_full  = (q_wr_ptr == q_rd_ptr) && q_valid[q_wr_ptr];
    assign q_empty = ~|q_valid;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            q_wr_ptr <= '0;
            q_rd_ptr <= '0;
        end else begin
            if (cmd_valid && !q_full) begin
                q_addr[q_wr_ptr]  <= cmd_addr;
                q_len[q_wr_ptr]   <= cmd_len;
                q_wr[q_wr_ptr]    <= cmd_wr;
                q_wdata[q_wr_ptr] <= cmd_wdata;
                q_wstrb[q_wr_ptr] <= cmd_wstrb;
                q_id[q_wr_ptr]    <= cmd_id;
                q_port[q_wr_ptr]  <= cmd_port;
                q_valid[q_wr_ptr] <= 1'b1;
                q_wr_ptr <= q_wr_ptr + 1;
            end

            // Dequeue when write response handled or read data accepted
            if (!q_empty && !burst_active &&
                ((q_wr[q_rd_ptr] && wr_resp_pending && resp_ready) ||
                 (!q_wr[q_rd_ptr] && resp_valid && resp_ready))) begin
                q_valid[q_rd_ptr] <= 1'b0;
                q_rd_ptr <= q_rd_ptr + 1;
            end
        end
    end

    assign cmd_ready = ~q_full;

    // Address decode - use current queue entry
    always_comb begin
        chip_sel = q_addr[q_rd_ptr][27:26];
        bank_addr = {q_addr[q_rd_ptr][22], q_addr[q_rd_ptr][16:15]};  // BA1, BA0
        row_addr  = q_addr[q_rd_ptr][17:4];
        col_addr  = {q_addr[q_rd_ptr][12:3], 3'b0};  // BL16 aligned
    end

    // DFI command generation with proper LPDDR4 CA encoding
    // CA[9]   = 0 for valid command, 1 for NOP
    // CA[8:7] = upper addr bits (row[13:12] for ACT, col[9:8] for RD/WR)
    // CA[6]   = BA[2] (bank address MSB)
    // CA[5:2] = {ACT_n, RAS_n, CAS_n, WE_n} (active-low command bits)
    // CA[1:0] = BA[1:0] (bank address LSBs)
    // Total: 1+2+1+4+2 = 10 bits
    always_comb begin
        dfi_cs_n   = 2'b11;  // Deselect
        dfi_cke    = 2'b11;
        dfi_ca     = 10'h3FF;  // NOP (all ones)
        dfi_ck     = 1'b1;
        dfi_ck_en  = 1'b1;
        dfi_odt    = 2'b00;
        timer_start = 1'b0;
        ref_ack = 1'b0;

        case (state)
            CTRL_INIT_WAIT: begin
                dfi_cs_n = 2'b01;
                dfi_ca = 10'h3FF;  // DES
                timer_start = 1'b1;
            end

            CTRL_INIT_MR: begin
                dfi_cs_n = 2'b00;
                // MRS: valid=0, CA[5:2]=0000
                dfi_ca = {2'b00, 2'b00, 1'b0, 4'b0000, 1'b0};
                timer_start = 1'b1;
            end

            CTRL_INIT_ZQCAL: begin
                dfi_cs_n = 2'b01;
                dfi_ca = {2'b00, 2'b00, 1'b0, 4'b0001, 1'b0};
                timer_start = 1'b1;
            end

            CTRL_REFRESH: begin
                dfi_cs_n = 2'b00;
                // REF: valid=0, CA[5:2]=0001
                dfi_ca = {2'b00, 2'b00, 1'b0, 4'b0001, 1'b0};
                timer_start = 1'b1;
                ref_ack = 1'b1;
            end

            CTRL_ACTIVATE: begin
                dfi_cs_n = ~(1 << chip_sel);
                dfi_cke = 2'b11;
                // ACT: valid=0, addr=row[13:12], BA2, cmd=0011, BA[1:0]
                dfi_ca = {1'b0, row_addr[13:12], bank_addr[2], 4'b0011, bank_addr[1:0]};
                timer_start = 1'b1;
            end

            CTRL_READ: begin
                dfi_cs_n = ~(1 << chip_sel);
                dfi_cke = 2'b11;
                // READ: valid=0, addr=col[9:8], BA2, cmd=1101, BA[1:0]
                dfi_ca = {1'b0, col_addr[9:8], bank_addr[2], 4'b1101, bank_addr[1:0]};
                timer_start = 1'b1;
            end

            CTRL_WRITE: begin
                dfi_cs_n = ~(1 << chip_sel);
                dfi_cke = 2'b11;
                // WRITE: valid=0, addr=col[9:8], BA2, cmd=1100, BA[1:0]
                dfi_ca = {1'b0, col_addr[9:8], bank_addr[2], 4'b1100, bank_addr[1:0]};
                timer_start = 1'b1;
            end

            CTRL_PRECHARGE: begin
                dfi_cs_n = 2'b00;
                // PRE: valid=0, cmd=1010
                dfi_ca = {1'b0, 2'b00, bank_addr[2], 4'b1010, bank_addr[1:0]};
                timer_start = 1'b1;
            end

            default: begin
                dfi_cs_n = 2'b11;
                dfi_cke = 2'b11;
                dfi_ca = 10'h3FF;  // NOP
            end
        endcase
    end

    // Burst handling for writes and reads
    // 128-bit AXI data serialized to 32-bit DFI (4 DFI beats per AXI word)
    logic [7:0] axi_beat_cnt;  // remaining AXI beats (128-bit)
    logic [2:0] dfi_sub_cnt;   // sub-beat within AXI word (0-3, 32-bit each)
    logic       wr_burst_done; // prevent write burst restart after completion

    // Detect state transitions for burst initialization
    logic [7:0] state_d;
    always_ff @(posedge clk) state_d <= state;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            burst_cnt <= 8'h0;
            burst_active <= 1'b0;
            write_buf <= 128'h0;
            write_strb_buf <= 16'h0;
            axi_beat_cnt <= 8'h0;
            dfi_sub_cnt <= 3'h0;
            wr_burst_done <= 1'b0;
            dfi_wrdata_en <= 1'b0;
            dfi_wrdata <= 32'h0;
            read_buf <= 128'h0;
        end else begin
            case (state)
                CTRL_WRITE: begin
                    // Start burst only on first cycle entering WRITE (state != previous state)
                    if (!burst_active && !wr_burst_done) begin
                        axi_beat_cnt <= q_len[q_rd_ptr];
                        write_buf <= q_wdata[q_rd_ptr];
                        write_strb_buf <= q_wstrb[q_rd_ptr];
                        dfi_sub_cnt <= 3'd1;  // beat 0 sent this cycle
                        burst_active <= 1'b1;
                        dfi_wrdata <= q_wdata[q_rd_ptr][31:0];
                        dfi_wrdata_en <= 1'b1;
                    end else if (burst_active) begin
                        if (dfi_sub_cnt < 3'd4) begin
                            // Send next 32-bit sub-beat
                            dfi_wrdata <= write_buf[31:0];
                            dfi_wrdata_en <= 1'b1;
                            write_buf <= {32'h0, write_buf[127:32]};
                            dfi_sub_cnt <= dfi_sub_cnt + 1;
                        end else begin
                            // All 4 sub-beats of current AXI word done
                            dfi_sub_cnt <= 3'd0;
                            if (axi_beat_cnt > 0) begin
                                axi_beat_cnt <= axi_beat_cnt - 1;
                                dfi_sub_cnt <= 3'd1;
                                dfi_wrdata <= write_buf[31:0];
                                dfi_wrdata_en <= 1'b1;
                                write_buf <= {32'h0, write_buf[127:32]};
                            end else begin
                                dfi_wrdata_en <= 1'b0;
                                burst_active <= 1'b0;
                                wr_burst_done <= 1'b1;
                            end
                        end
                    end else begin
                        dfi_wrdata_en <= 1'b0;
                    end
                end

                CTRL_READ: begin
                    // Start read burst on first cycle entering READ
                    if (!burst_active && state_d != CTRL_READ) begin
                        burst_active <= 1'b1;
                        dfi_sub_cnt <= 3'd0;
                        axi_beat_cnt <= q_len[q_rd_ptr];
                    end else if (burst_active) begin
                        if (dfi_rddata_en) begin
                            read_buf <= {dfi_rddata, read_buf[127:32]};
                            dfi_sub_cnt <= dfi_sub_cnt + 1;
                            if (dfi_sub_cnt == 3'd3) begin
                                dfi_sub_cnt <= 3'd0;
                                if (axi_beat_cnt > 0) begin
                                    axi_beat_cnt <= axi_beat_cnt - 1;
                                end else begin
                                    burst_active <= 1'b0;
                                end
                            end
                        end
                    end
                end

                default: begin
                    burst_cnt <= 8'h0;
                    burst_active <= 1'b0;
                    dfi_wrdata_en <= 1'b0;
                    dfi_wrdata <= 32'h0;
                    dfi_sub_cnt <= 3'd0;
                    axi_beat_cnt <= 8'h0;
                    wr_burst_done <= 1'b0;
                end
            endcase
        end
    end

    // Write response handling
    // Detect burst_active falling edge for writes and reads
    logic burst_active_d;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            burst_active_d <= 1'b0;
        end else begin
            burst_active_d <= burst_active;
        end
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            wr_resp_pending <= 1'b0;
            wr_resp_id <= 5'h0;
            wr_resp_port <= 2'h0;
        end else begin
            // Set write response when write burst completes (burst_active 1→0 in WRITE state)
            if (state == CTRL_WRITE && burst_active_d && !burst_active) begin
                wr_resp_pending <= 1'b1;
                wr_resp_id <= q_id[q_rd_ptr];
                wr_resp_port <= q_port[q_rd_ptr];
            end

            // Clear when AXI accepts the response
            if (wr_resp_pending && resp_ready) begin
                wr_resp_pending <= 1'b0;
            end
        end
    end

    // Response output - write response takes priority over read
    always_comb begin
        if (wr_resp_pending) begin
            resp_rdata  = 128'h0;
            resp_id     = wr_resp_id;
            resp_valid  = 1'b1;
            resp_port   = wr_resp_port;
            resp_is_wr  = 1'b1;
        end else begin
            resp_rdata  = rob_rdata[rob_head];
            resp_id     = rob_id[rob_head];
            resp_valid  = rob_valid[rob_head];
            resp_port   = rob_port[rob_head];
            resp_is_wr  = 1'b0;
        end
    end

    // Reorder buffer for reads
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            rob_head <= '0;
            rob_tail <= '0;
            for (int i = 0; i < ROB_DEPTH; i++) begin
                rob_valid[i] <= 1'b0;
            end
        end else begin
            // Push read data into ROB when read burst completes
            if (state == CTRL_READ && burst_active_d && !burst_active) begin
                rob_rdata[rob_tail] <= read_buf;
                rob_id[rob_tail]   <= q_id[q_rd_ptr];
                rob_port[rob_tail] <= q_port[q_rd_ptr];
                rob_valid[rob_tail] <= 1'b1;
                rob_tail <= rob_tail + 1;
            end

            // Pop from ROB when AXI accepts response (only when no write response pending)
            if (!wr_resp_pending && resp_ready && rob_valid[rob_head]) begin
                rob_valid[rob_head] <= 1'b0;
                rob_head <= rob_head + 1;
            end
        end
    end

    // Status outputs
    assign status_state = state;
    assign init_done = (state >= CTRL_IDLE);
    assign intr_cmd_cmplt = ~q_empty && resp_ready;

    // Initialize mode registers
    initial begin
        mr[0]  = 8'h00;  // MR0
        mr[1]  = 8'h00;  // MR1
        mr[2]  = 8'h00;  // MR2 - BL8, WL=4, RL=14
        mr[3]  = 8'h00;  // MR3
        mr[4]  = 8'h00;  // MR4
        mr[5]  = 8'h00;  // MR5
        mr[6]  = 8'h00;  // MR6 - tRP=18, tRCD=18
        mr[10] = 8'h00;  // MR10
        mr[11] = 8'h00;  // MR11
        mr[12] = 8'h00;  // MR12
        mr[13] = 8'h00;  // MR13
        mr[14] = 8'h00;  // MR14
        mr[16] = 8'h00;  // MR16
        mr[17] = 8'h00;  // MR17
        mr[18] = 8'h00;  // MR18
        mr[19] = 8'h00;  // MR19
        mr[20] = 8'h00;  // MR20
        mr[32] = 8'h00;  // MR32
        mr[40] = 8'h00;  // MR40
        mr[41] = 8'h00;  // MR41
    end

endmodule