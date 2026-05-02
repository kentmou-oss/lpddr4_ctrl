// Minimal DFI Responder for controller verification
// Bypasses PHY and memory model — provides direct read/write responses
`timescale 1ns / 1ps

module dfi_responder #(
    parameter RL = 14,  // Read latency in cycles
    parameter WL = 4    // Write latency in cycles
) (
    input  logic        clk,
    input  logic        rst_n,

    // DFI interface from controller
    input  logic [1:0]  dfi_cs_n,
    input  logic [1:0]  dfi_cke,
    input  logic [9:0]  dfi_ca,
    input  logic        dfi_ck,
    input  logic        dfi_ck_en,
    input  logic [1:0]  dfi_odt,
    input  logic [31:0] dfi_wrdata,
    input  logic        dfi_wrdata_en,
    input  logic        dfi_wrdata_mask,

    output logic [31:0] dfi_rddata,
    output logic        dfi_rddata_en
);
    // Decode CA commands
    logic cmd_valid;
    logic cmd_act_n, cmd_ras_n, cmd_cas_n, cmd_we_n;
    assign cmd_valid = !dfi_ca[9];
    assign cmd_act_n = dfi_ca[5];
    assign cmd_ras_n = dfi_ca[4];
    assign cmd_cas_n = dfi_ca[3];
    assign cmd_we_n  = dfi_ca[2];

    // Simple state machine
    typedef enum logic [3:0] {
        ST_IDLE,
        ST_ACTIVE,
        ST_READ,
        ST_WRITE
    } state_t;
    state_t state, next_state;

    // Timers
    logic [7:0] timer;
    logic [7:0] rd_timer;
    logic [7:0] rd_data_cnt;
    logic [31:0] rd_data_buf;

    // Track bank/row
    logic [1:0]  active_bank;
    logic [13:0] active_row;

    // Simple memory array (small for verification)
    logic [31:0] mem [0:1023];  // 1024 x 32-bit
    logic [7:0] wr_beat_cnt;

    // State register
    always_ff @(posedge clk) begin
        if (!rst_n)
            state <= ST_IDLE;
        else
            state <= next_state;
    end

    // FSM
    always_comb begin
        next_state = state;
        case (state)
            ST_IDLE: begin
                // Detect ACT command: act_n=0, ras_n=0, cas_n=1, we_n=1
                if (cmd_valid && !cmd_act_n && !cmd_ras_n && cmd_cas_n && cmd_we_n)
                    next_state = ST_ACTIVE;
            end

            ST_ACTIVE: begin
                if (timer == 0) begin
                    // After tRCD, check for RD/WR
                    if (cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && cmd_we_n)
                        next_state = ST_READ;
                    else if (cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && !cmd_we_n)
                        next_state = ST_WRITE;
                end
            end

            ST_READ: begin
                if (rd_timer == 0 && rd_data_cnt == 0)
                    next_state = ST_IDLE;
            end

            ST_WRITE: begin
                if (timer == 0)
                    next_state = ST_IDLE;
            end

            default: next_state = ST_IDLE;
        endcase
    end

    // Command processing
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            timer <= 8'h0;
            rd_timer <= 8'h0;
            rd_data_cnt <= 8'h0;
            rd_data_buf <= 32'h0;
            dfi_rddata <= 32'h0;
            dfi_rddata_en <= 1'b0;
            active_bank <= 2'h0;
            active_row <= 14'h0;
            wr_beat_cnt <= 8'h0;
        end else begin
            dfi_rddata_en <= 1'b0;
            dfi_rddata <= 32'h0;

            case (state)
                ST_IDLE: begin
                    if (cmd_valid && !cmd_act_n && !cmd_ras_n && cmd_cas_n && cmd_we_n) begin
                        // Latch bank and row from CA
                        active_bank <= dfi_ca[1:0];
                        active_row <= {dfi_ca[8:7], dfi_ca[6], dfi_ca[4:3], 8'h0};  // simplified
                        timer <= 4;  // tRCD
                    end
                end

                ST_ACTIVE: begin
                    if (timer > 0)
                        timer <= timer - 1;
                    else begin
                        if (cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n) begin
                            // RD or WR detected
                            if (!cmd_we_n) begin
                                // WRITE
                                timer <= 4;  // write recovery
                            end else begin
                                // READ
                                rd_timer <= RL;
                                rd_data_cnt <= 4;  // 4 beats of 32-bit = 128-bit
                            end
                        end
                    end
                end

                ST_READ: begin
                    if (rd_timer > 0) begin
                        rd_timer <= rd_timer - 1;
                    end else if (rd_data_cnt > 0) begin
                        // Return read data beats (sequential addresses)
                        automatic integer addr = {active_bank, active_row, 8'h0} + (4 - rd_data_cnt);
                        if (addr < 1024)
                            dfi_rddata <= mem[addr];
                        else
                            dfi_rddata <= 32'hDEAD_BEEF;
                        dfi_rddata_en <= 1'b1;
                        rd_data_cnt <= rd_data_cnt - 1;
                    end
                end

                ST_WRITE: begin
                    if (dfi_wrdata_en) begin
                        automatic integer addr = {active_bank, active_row, 8'h0} + wr_beat_cnt;
                        if (addr < 1024)
                            mem[addr] <= dfi_wrdata;
                        wr_beat_cnt <= wr_beat_cnt + 1;
                    end
                    if (timer > 0)
                        timer <= timer - 1;
                end
            endcase
        end
    end

endmodule
