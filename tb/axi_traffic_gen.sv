// AXI4 Traffic Generator - Generates random read/write transactions
// Supports outstanding transactions, random addresses, and random data
`timescale 1ns / 1ps

module axi_traffic_gen #(
    parameter PORT_ID = 0,
    parameter MAX_OUTSTANDING = 16,
    parameter ADDR_START = 32'h0000_0000,
    parameter ADDR_END   = 32'h1000_0000,  // 256MB region
    parameter SEED = 12345
) (
    input  logic clk,
    input  logic rst_n,
    input  logic enable,

    // AXI4 master interface (write address)
    output logic [3:0]  m_axi_awid,
    output logic [31:0] m_axi_awaddr,
    output logic [7:0]  m_axi_awlen,
    output logic [2:0]  m_axi_awsize,
    output logic [1:0]  m_axi_awburst,
    output logic        m_axi_awvalid,
    input  logic        m_axi_awready,

    // AXI4 master interface (write data)
    output logic [127:0] m_axi_wdata,
    output logic [15:0] m_axi_wstrb,
    output logic        m_axi_wlast,
    output logic        m_axi_wvalid,
    input  logic        m_axi_wready,

    // AXI4 master interface (write response)
    input  logic [3:0]  m_axi_bid,
    input  logic [1:0]  m_axi_bresp,
    input  logic        m_axi_bvalid,
    output logic        m_axi_bready,

    // AXI4 master interface (read address)
    output logic [4:0]  m_axi_arid,
    output logic [31:0] m_axi_araddr,
    output logic [7:0]  m_axi_arlen,
    output logic [2:0]  m_axi_arsize,
    output logic [1:0]  m_axi_arburst,
    output logic        m_axi_arvalid,
    input  logic        m_axi_arready,

    // AXI4 master interface (read data)
    input  logic [4:0]  m_axi_rid,
    input  logic [127:0] m_axi_rdata,
    input  logic [1:0]  m_axi_rresp,
    input  logic        m_axi_rlast,
    input  logic        m_axi_rvalid,
    output logic        m_axi_rready,

    // Statistics
    output logic [31:0] stat_reads,
    output logic [31:0] stat_writes,
    output logic [31:0] stat_read_cmds,
    output logic [31:0] stat_write_cmds
);

    // ============================================
    // FSM States
    // ============================================
    typedef enum logic [3:0] {
        IDLE        = 4'd0,
        WAIT        = 4'd1,
        SEND_WRITE  = 4'd2,
        SEND_WDATA  = 4'd3,
        WAIT_BRESP  = 4'd4,
        SEND_READ   = 4'd5,
        WAIT_RDATA  = 4'd6
    } state_t;

    state_t state, next_state;

    // ============================================
    // LFSR for Random Generation
    // ============================================
    logic [31:0] lfsr;
    logic lfsr_feedback;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            lfsr <= SEED;
        end else if (enable) begin
            lfsr_feedback <= lfsr[31] ^ lfsr[21] ^ lfsr[1] ^ lfsr[0];
            lfsr <= {lfsr[30:0], lfsr_feedback};
        end
    end

    function [31:0] random;
        input [31:0] min_val;
        input [31:0] max_val;
        begin
            random = min_val + (lfsr % (max_val - min_val + 1));
        end
    endfunction

    // ============================================
    // Transaction Tracking
    // ============================================
    logic [31:0] pending_reads;
    logic [31:0] pending_writes;

    assign pending_reads  = stat_read_cmds - stat_reads;
    assign pending_writes = stat_write_cmds - stat_writes;

    // ============================================
    // Transaction Parameters
    // ============================================
    logic [31:0] curr_addr;
    logic [7:0]  curr_len;
    logic [4:0]  curr_arid;
    logic [3:0]  curr_awid;
    logic [127:0] curr_wdata;
    logic is_write;

    // ============================================
    // Statistics
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            stat_reads <= 0;
            stat_writes <= 0;
            stat_read_cmds <= 0;
            stat_write_cmds <= 0;
        end else begin
            // Count completed transactions
            if (m_axi_bvalid && m_axi_bready) begin
                stat_writes <= stat_writes + 1;
            end
            if (m_axi_rvalid && m_axi_rready && m_axi_rlast) begin
                stat_reads <= stat_reads + 1;
            end
            // Count issued commands
            if (m_axi_awvalid && m_axi_awready) begin
                stat_write_cmds <= stat_write_cmds + 1;
            end
            if (m_axi_arvalid && m_axi_arready) begin
                stat_read_cmds <= stat_read_cmds + 1;
            end
        end
    end

    // ============================================
    // Transaction Generation
    // ============================================
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            state <= IDLE;
            curr_addr <= ADDR_START;
            curr_len <= 0;
            curr_arid <= 0;
            curr_awid <= 0;
            curr_wdata <= 0;
            is_write <= 0;
        end else begin
            state <= next_state;

            case (state)
                IDLE: begin
                    // Decide next transaction type
                    is_write <= lfsr[0];  // Random write/read
                    curr_len <= lfsr[3:0];  // 0-15 beats (1-16)

                    // Generate random address (aligned)
                    curr_addr <= {2'b00, random(ADDR_START[31:2], ADDR_END[31:2]), 2'b00};

                    // Random ID
                    curr_arid <= lfsr[4:0];
                    curr_awid <= lfsr[3:0];

                    // Random write data
                    curr_wdata <= {lfsr[127:0], lfsr[31:0]};
                end

                SEND_WDATA: begin
                    if (m_axi_wvalid && m_axi_wready) begin
                        // Generate new data for next beat
                        curr_wdata <= {lfsr[127:0], lfsr[31:0]};
                    end
                end
            endcase
        end
    end

    // ============================================
    // State Machine
    // ============================================
    logic [$clog2(MAX_OUTSTANDING)-1:0] beat_count;

    always_comb begin
        next_state = state;
        case (state)
            IDLE: begin
                if (enable && (pending_writes < MAX_OUTSTANDING[7:0]) && (pending_reads < MAX_OUTSTANDING[7:0])) begin
                    next_state = WAIT;
                end
            end

            WAIT: begin
                next_state = is_write ? SEND_WRITE : SEND_READ;
            end

            SEND_WRITE: begin
                if (m_axi_awvalid && m_axi_awready) begin
                    next_state = SEND_WDATA;
                end
            end

            SEND_WDATA: begin
                if (m_axi_wvalid && m_axi_wready && m_axi_wlast) begin
                    next_state = WAIT_BRESP;
                end
            end

            WAIT_BRESP: begin
                if (m_axi_bvalid && m_axi_bready) begin
                    next_state = IDLE;
                end
            end

            SEND_READ: begin
                if (m_axi_arvalid && m_axi_arready) begin
                    next_state = WAIT_RDATA;
                end
            end

            WAIT_RDATA: begin
                if (m_axi_rvalid && m_axi_rready && m_axi_rlast) begin
                    next_state = IDLE;
                end
            end

            default: next_state = IDLE;
        endcase
    end

    // ============================================
    // AXI Signal Outputs
    // ============================================
    // Write address
    assign m_axi_awid    = curr_awid;
    assign m_axi_awaddr  = curr_addr;
    assign m_axi_awlen   = curr_len;
    assign m_axi_awsize  = 3'b100;  // 16 bytes
    assign m_axi_awburst = 2'b01;   // INCR
    assign m_axi_awvalid = (state == SEND_WRITE);

    // Write data
    assign m_axi_wdata  = curr_wdata;
    assign m_axi_wstrb  = 16'hFFFF;
    assign m_axi_wlast  = (beat_count == curr_len);
    assign m_axi_wvalid = (state == SEND_WDATA);

    // Write response
    assign m_axi_bready = (state == WAIT_BRESP) && m_axi_bvalid;

    // Read address
    assign m_axi_arid    = curr_arid;
    assign m_axi_araddr  = curr_addr;
    assign m_axi_arlen   = curr_len;
    assign m_axi_arsize  = 3'b100;  // 16 bytes
    assign m_axi_arburst = 2'b01;   // INCR
    assign m_axi_arvalid = (state == SEND_READ);

    // Read data
    assign m_axi_rready = (state == WAIT_RDATA);

    // Beat counter for wlast
    always_ff @(posedge clk) begin
        if (!rst_n || state != SEND_WDATA) begin
            beat_count <= 0;
        end else if (m_axi_wvalid && m_axi_wready) begin
            beat_count <= beat_count + 1;
        end
    end

endmodule