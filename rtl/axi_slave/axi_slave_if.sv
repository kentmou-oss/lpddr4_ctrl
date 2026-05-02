// AXI Slave Interface with Full Outstanding Transaction Support
// Supports 32 outstanding reads and 16 outstanding writes
// Implements: skid buffers for AW/AR, write data FIFO, per-ID tracking, FSM
`timescale 1ns / 1ps

module axi_slave_if #(
    parameter AXI_ID = 0,
    parameter MAX_PENDING_READS  = 32,
    parameter MAX_PENDING_WRITES = 16,
    parameter AW_SKID_DEPTH = 4,
    parameter AR_SKID_DEPTH = 4,
    parameter WDATA_FIFO_DEPTH = 8
) (
    input  logic        clk,
    input  logic        rst_n,

    // AXI4 slave port
    input  logic [3:0]  s_axi_awid,
    input  logic [31:0] s_axi_awaddr,
    input  logic [7:0]  s_axi_awlen,
    input  logic [2:0]  s_axi_awsize,
    input  logic [1:0]  s_axi_awburst,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [127:0] s_axi_wdata,
    input  logic [15:0] s_axi_wstrb,
    input  logic        s_axi_wlast,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic [3:0]  s_axi_bid,
    output logic [1:0]  s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,

    input  logic [4:0]  s_axi_arid,
    input  logic [31:0] s_axi_araddr,
    input  logic [7:0]  s_axi_arlen,
    input  logic [2:0]  s_axi_arsize,
    input  logic [1:0]  s_axi_arburst,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [4:0]  s_axi_rid,
    output logic [127:0] s_axi_rdata,
    output logic [1:0]  s_axi_rresp,
    output logic        s_axi_rlast,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,

    // Internal command interface
    output logic        cmd_valid,
    input  logic        cmd_ready,
    output logic [31:0] cmd_addr,
    output logic [7:0]  cmd_len,
    output logic        cmd_wr,
    output logic [127:0] cmd_wdata,
    output logic [15:0] cmd_wstrb,
    output logic [4:0]  cmd_id,

    // Internal read data interface
    input  logic [127:0] resp_rdata,
    input  logic        resp_valid,
    input  logic [4:0]  resp_id,
    output logic        resp_ready
);

    // ============================================
    // Outstanding Counters (per ID tracking)
    // ============================================
    logic [4:0] read_pending_cnt  [MAX_PENDING_READS];
    logic [3:0] write_pending_cnt [MAX_PENDING_WRITES];

    // Full flags based on ID-specific counters
    logic read_full;
    logic write_full;
    assign read_full  = (read_pending_cnt[s_axi_arid]  >= MAX_PENDING_READS - 1);
    assign write_full = (write_pending_cnt[s_axi_awid] >= MAX_PENDING_WRITES - 1);

    // ============================================
    // Skid Buffer for Write Address Channel
    // ============================================
    logic [31:0] aw_skid_addr  [AW_SKID_DEPTH];
    logic [7:0]  aw_skid_len   [AW_SKID_DEPTH];
    logic [3:0]  aw_skid_id    [AW_SKID_DEPTH];
    logic [AW_SKID_DEPTH-1:0] aw_skid_valid;
    logic [$clog2(AW_SKID_DEPTH)-1:0] aw_skid_wr_ptr;
    logic [$clog2(AW_SKID_DEPTH)-1:0] aw_skid_rd_ptr;
    logic aw_skid_full;
    logic aw_skid_empty;

    assign aw_skid_full  = aw_skid_valid[aw_skid_wr_ptr] && (aw_skid_wr_ptr == aw_skid_rd_ptr);
    assign aw_skid_empty = !(|aw_skid_valid);

    // ============================================
    // Skid Buffer for Read Address Channel
    // ============================================
    logic [31:0] ar_skid_addr  [AR_SKID_DEPTH];
    logic [7:0]  ar_skid_len   [AR_SKID_DEPTH];
    logic [4:0]  ar_skid_id    [AR_SKID_DEPTH];
    logic [AR_SKID_DEPTH-1:0] ar_skid_valid;
    logic [$clog2(AR_SKID_DEPTH)-1:0] ar_skid_wr_ptr;
    logic [$clog2(AR_SKID_DEPTH)-1:0] ar_skid_rd_ptr;
    logic ar_skid_full;
    logic ar_skid_empty;

    assign ar_skid_full  = ar_skid_valid[ar_skid_wr_ptr] && (ar_skid_wr_ptr == ar_skid_rd_ptr);
    assign ar_skid_empty = !(|ar_skid_valid);

    // ============================================
    // Write Data FIFO (stores W beats for each AW)
    // ============================================
    logic [127:0] wdata_fifo_data [WDATA_FIFO_DEPTH];
    logic [15:0]  wdata_fifo_strb [WDATA_FIFO_DEPTH];
    logic         wdata_fifo_last [WDATA_FIFO_DEPTH];
    logic [WDATA_FIFO_DEPTH-1:0] wdata_fifo_valid;
    logic [$clog2(WDATA_FIFO_DEPTH)-1:0] wdata_fifo_wr_ptr;
    logic [$clog2(WDATA_FIFO_DEPTH)-1:0] wdata_fifo_rd_ptr;
    logic wdata_fifo_full;
    logic wdata_fifo_empty;

    assign wdata_fifo_full  = wdata_fifo_valid[wdata_fifo_wr_ptr] && (wdata_fifo_wr_ptr == wdata_fifo_rd_ptr);
    assign wdata_fifo_empty = !(|wdata_fifo_valid);

    // ============================================
    // Active Transaction State
    // ============================================
    typedef enum logic [3:0] {
        IDLE           = 4'd0,
        AW_PENDING     = 4'd1,  // AW accepted, waiting for W beats
        W_DATA_COLLECT = 4'd2,  // Collecting W beats
        CMD_SEND       = 4'd3,  // Sending command to controller
        READ_WAIT      = 4'd4,  // Waiting for read data
        READ_RESP      = 4'd5,  // Returning read data
        WRITE_RESP     = 4'd6,  // Returning write response
        AR_PENDING     = 4'd7   // AR accepted, sending to controller
    } state_t;

    state_t state, next_state;

    // Active transaction info
    logic [31:0]  active_addr;
    logic [7:0]   active_len;
    logic [3:0]   active_awid;
    logic [4:0]   active_arid;
    logic         active_is_write;
    logic [7:0]   beat_count;      // Remaining beats
    logic         first_beat;       // First beat indicator

    // Write data staging
    logic [127:0] staged_wdata;
    logic [15:0]  staged_wstrb;
    logic         staged_wlast;
    logic         staged_wvalid;

    // ============================================
    // Response Tracking
    // ============================================
    logic [4:0] pending_resp_id;
    logic        pending_resp_valid;

    // AXI responses
    localparam OKAY   = 2'b00;
    localparam SLVERR = 2'b10;

    // ============================================
    // Outstanding Counter Management
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < MAX_PENDING_READS; i++) begin
                read_pending_cnt[i] <= '0;
            end
        end else begin
            // Read: increment on AR accept, decrement on RVALID&RREADY
            if (s_axi_arvalid && s_axi_arready && !read_full) begin
                read_pending_cnt[s_axi_arid] <= read_pending_cnt[s_axi_arid] + 1'b1;
            end
            if (s_axi_rvalid && s_axi_rready && s_axi_rlast) begin
                read_pending_cnt[s_axi_rid] <= read_pending_cnt[s_axi_rid] - 1'b1;
            end
        end
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < MAX_PENDING_WRITES; i++) begin
                write_pending_cnt[i] <= '0;
            end
        end else begin
            // Write: increment on AW accept, decrement on BVALID&BREADY
            if (s_axi_awvalid && s_axi_awready && !write_full) begin
                write_pending_cnt[s_axi_awid] <= write_pending_cnt[s_axi_awid] + 1'b1;
            end
            if (s_axi_bvalid && s_axi_bready) begin
                write_pending_cnt[s_axi_bid] <= write_pending_cnt[s_axi_bid] - 1'b1;
            end
        end
    end

    // ============================================
    // AW Skid Buffer Management
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            aw_skid_wr_ptr <= '0;
            aw_skid_rd_ptr <= '0;
            for (int i = 0; i < AW_SKID_DEPTH; i++) begin
                aw_skid_valid[i] <= 1'b0;
            end
        end else begin
            // Accept new AW into skid if main path is busy
            if (s_axi_awvalid && s_axi_awready && !aw_skid_full) begin
                aw_skid_addr[aw_skid_wr_ptr]  <= s_axi_awaddr;
                aw_skid_len[aw_skid_wr_ptr]   <= s_axi_awlen;
                aw_skid_id[aw_skid_wr_ptr]    <= s_axi_awid;
                aw_skid_valid[aw_skid_wr_ptr] <= 1'b1;
                aw_skid_wr_ptr <= aw_skid_wr_ptr + 1;
            end

            // Consume from skid when processing
            if ((state == AW_PENDING || state == CMD_SEND) && aw_skid_valid[aw_skid_rd_ptr] && cmd_ready) begin
                aw_skid_valid[aw_skid_rd_ptr] <= 1'b0;
                aw_skid_rd_ptr <= aw_skid_rd_ptr + 1;
            end
        end
    end

    // ============================================
    // AR Skid Buffer Management
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            ar_skid_wr_ptr <= '0;
            ar_skid_rd_ptr <= '0;
            for (int i = 0; i < AR_SKID_DEPTH; i++) begin
                ar_skid_valid[i] <= 1'b0;
            end
        end else begin
            // Accept new AR into skid if main path is busy
            if (s_axi_arvalid && s_axi_arready && !ar_skid_full) begin
                ar_skid_addr[ar_skid_wr_ptr]  <= s_axi_araddr;
                ar_skid_len[ar_skid_wr_ptr]   <= s_axi_arlen;
                ar_skid_id[ar_skid_wr_ptr]    <= s_axi_arid;
                ar_skid_valid[ar_skid_wr_ptr] <= 1'b1;
                ar_skid_wr_ptr <= ar_skid_wr_ptr + 1;
            end

            // Consume from skid when processing
            if ((state == AR_PENDING || state == CMD_SEND) && ar_skid_valid[ar_skid_rd_ptr] && cmd_ready) begin
                ar_skid_valid[ar_skid_rd_ptr] <= 1'b0;
                ar_skid_rd_ptr <= ar_skid_rd_ptr + 1;
            end
        end
    end

    // ============================================
    // Write Data FIFO Management
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            wdata_fifo_wr_ptr <= '0;
            wdata_fifo_rd_ptr <= '0;
            for (int i = 0; i < WDATA_FIFO_DEPTH; i++) begin
                wdata_fifo_valid[i] <= 1'b0;
            end
        end else begin
            // Accept W data when available and not full
            if (s_axi_wvalid && s_axi_wready && !wdata_fifo_full) begin
                wdata_fifo_data[wdata_fifo_wr_ptr] <= s_axi_wdata;
                wdata_fifo_strb[wdata_fifo_wr_ptr] <= s_axi_wstrb;
                wdata_fifo_last[wdata_fifo_wr_ptr] <= s_axi_wlast;
                wdata_fifo_valid[wdata_fifo_wr_ptr] <= 1'b1;
                wdata_fifo_wr_ptr <= wdata_fifo_wr_ptr + 1;
            end

            // Consume W data when sending to controller
            if (cmd_valid && cmd_ready && active_is_write && !wdata_fifo_empty) begin
                wdata_fifo_valid[wdata_fifo_rd_ptr] <= 1'b0;
                wdata_fifo_rd_ptr <= wdata_fifo_rd_ptr + 1;
            end
        end
    end

    // ============================================
    // AXI Ready Signals
    // ============================================
    assign s_axi_awready = !write_full && !aw_skid_full &&
                          (state == IDLE || state == AW_PENDING || state == W_DATA_COLLECT);
    assign s_axi_arready = !read_full && !ar_skid_full &&
                          (state == IDLE || state == AR_PENDING);

    // W ready: accept data when we have an active write and FIFO has space
    assign s_axi_wready = (state == W_DATA_COLLECT) && !wdata_fifo_full;

    // ============================================
    // State Machine
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n)
            state <= IDLE;
        else
            state <= next_state;
    end

    always_comb begin
        next_state = state;
        case (state)
            IDLE: begin
                if (s_axi_awvalid)
                    next_state = AW_PENDING;
                else if (s_axi_arvalid)
                    next_state = AR_PENDING;
                else if (!aw_skid_empty)
                    next_state = AW_PENDING;
                else if (!ar_skid_empty)
                    next_state = AR_PENDING;
            end

            AW_PENDING: begin
                // AW accepted, waiting for W channel
                if (s_axi_wvalid && s_axi_wlast)
                    next_state = CMD_SEND;
                else if (s_axi_wvalid)
                    next_state = W_DATA_COLLECT;
            end

            W_DATA_COLLECT: begin
                // Collecting W beats
                if (s_axi_wvalid && s_axi_wlast)
                    next_state = CMD_SEND;
            end

            CMD_SEND: begin
                if (cmd_ready) begin
                    if (active_is_write)
                        next_state = WRITE_RESP;
                    else
                        next_state = READ_WAIT;
                end
            end

            READ_WAIT: begin
                if (resp_valid)
                    next_state = READ_RESP;
            end

            READ_RESP: begin
                if (s_axi_rvalid && s_axi_rready && s_axi_rlast) begin
                    if (!aw_skid_empty)
                        next_state = AW_PENDING;
                    else if (!ar_skid_empty)
                        next_state = AR_PENDING;
                    else if (s_axi_awvalid)
                        next_state = AW_PENDING;
                    else if (s_axi_arvalid)
                        next_state = AR_PENDING;
                    else
                        next_state = IDLE;
                end
            end

            WRITE_RESP: begin
                if (s_axi_bvalid && s_axi_bready) begin
                    if (!aw_skid_empty)
                        next_state = AW_PENDING;
                    else if (s_axi_awvalid)
                        next_state = AW_PENDING;
                    else if (!ar_skid_empty)
                        next_state = AR_PENDING;
                    else if (s_axi_arvalid)
                        next_state = AR_PENDING;
                    else
                        next_state = IDLE;
                end
            end

            AR_PENDING: begin
                // AR accepted, send directly to controller
                if (cmd_ready)
                    next_state = READ_WAIT;
            end

            default: next_state = IDLE;
        endcase
    end

    // ============================================
    // Active Transaction Latch
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            active_addr      <= '0;
            active_len       <= '0;
            active_awid      <= '0;
            active_arid      <= '0;
            active_is_write  <= 1'b0;
            beat_count       <= '0;
            first_beat       <= 1'b0;
        end else if (state == IDLE || state == AW_PENDING || state == AR_PENDING) begin
            // Latch from skid buffer or direct input
            if (!aw_skid_empty && (state == IDLE || state == AW_PENDING)) begin
                active_addr     <= aw_skid_addr[aw_skid_rd_ptr];
                active_len      <= aw_skid_len[aw_skid_rd_ptr];
                active_awid     <= aw_skid_id[aw_skid_rd_ptr];
                active_is_write <= 1'b1;
                beat_count      <= aw_skid_len[aw_skid_rd_ptr];
                first_beat      <= 1'b1;
            end else if (!ar_skid_empty && (state == IDLE || state == AR_PENDING)) begin
                active_addr     <= ar_skid_addr[ar_skid_rd_ptr];
                active_len      <= ar_skid_len[ar_skid_rd_ptr];
                active_arid     <= ar_skid_id[ar_skid_rd_ptr];
                active_is_write <= 1'b0;
                beat_count      <= ar_skid_len[ar_skid_rd_ptr];
                first_beat      <= 1'b1;
            end else if (s_axi_awvalid && state == IDLE) begin
                active_addr     <= s_axi_awaddr;
                active_len      <= s_axi_awlen;
                active_awid     <= s_axi_awid;
                active_is_write <= 1'b1;
                beat_count      <= s_axi_awlen;
                first_beat      <= 1'b1;
            end else if (s_axi_arvalid && state == IDLE) begin
                active_addr     <= s_axi_araddr;
                active_len      <= s_axi_arlen;
                active_arid     <= s_axi_arid;
                active_is_write <= 1'b0;
                beat_count      <= s_axi_arlen;
                first_beat      <= 1'b1;
            end
        end else if (state == W_DATA_COLLECT && s_axi_wvalid && s_axi_wready) begin
            // Count W beats
            if (beat_count > 0)
                beat_count <= beat_count - 1;
            first_beat <= 1'b0;
        end else if (state == CMD_SEND && cmd_ready) begin
            first_beat <= 1'b0;
        end
    end

    // ============================================
    // Response Tracking
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            pending_resp_id    <= '0;
            pending_resp_valid <= 1'b0;
        end else if (state == CMD_SEND && cmd_ready) begin
            pending_resp_id    <= active_is_write ? {1'b0, active_awid} : active_arid;
            pending_resp_valid <= 1'b1;
        end else if (resp_ready || (state == READ_RESP && s_axi_rvalid && s_axi_rready && s_axi_rlast)) begin
            pending_resp_valid <= 1'b0;
        end
    end

    // ============================================
    // Command Output
    // ============================================
    assign cmd_valid = (state == AW_PENDING && s_axi_wvalid && s_axi_wlast) ||
                       (state == W_DATA_COLLECT && s_axi_wvalid && s_axi_wlast) ||
                       (state == AR_PENDING);
    assign cmd_addr  = active_addr;
    assign cmd_len   = active_len;
    assign cmd_wr    = active_is_write;
    assign cmd_id    = active_is_write ? {1'b0, active_awid} : active_arid;

    // W data from FIFO (for writes)
    assign cmd_wdata = wdata_fifo_data[wdata_fifo_rd_ptr];
    assign cmd_wstrb = wdata_fifo_strb[wdata_fifo_rd_ptr];

    // ============================================
    // AXI Response Outputs
    // ============================================
    assign s_axi_bid    = active_awid;
    assign s_axi_bresp  = OKAY;
    assign s_axi_bvalid = (state == WRITE_RESP);

    assign s_axi_rid    = pending_resp_id;
    assign s_axi_rdata  = resp_rdata;
    assign s_axi_rresp  = OKAY;
    assign s_axi_rlast  = 1'b1;
    assign s_axi_rvalid = (state == READ_RESP) && resp_valid;

    assign resp_ready = (state == READ_WAIT);

endmodule