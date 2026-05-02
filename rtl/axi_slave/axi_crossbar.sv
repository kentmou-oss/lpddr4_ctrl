// AXI Crossbar - 4:1 multiplexer for AXI slave ports
`timescale 1ns / 1ps

module axi_crossbar (
    input  logic        clk,
    input  logic        rst_n,

    // AXI port 0
    input  logic [3:0]  m0_axi_awid,
    input  logic [31:0] m0_axi_awaddr,
    input  logic [7:0]  m0_axi_awlen,
    input  logic [2:0]  m0_axi_awsize,
    input  logic [1:0]  m0_axi_awburst,
    input  logic        m0_axi_awvalid,
    output logic        m0_axi_awready,
    input  logic [127:0] m0_axi_wdata,
    input  logic [15:0] m0_axi_wstrb,
    input  logic        m0_axi_wlast,
    input  logic        m0_axi_wvalid,
    output logic        m0_axi_wready,
    output logic [3:0]  m0_axi_bid,
    output logic [1:0]  m0_axi_bresp,
    output logic        m0_axi_bvalid,
    input  logic        m0_axi_bready,
    input  logic [4:0]  m0_axi_arid,  // 5-bit for outstanding reads
    input  logic [31:0] m0_axi_araddr,
    input  logic [7:0]  m0_axi_arlen,
    input  logic [2:0]  m0_axi_arsize,
    input  logic [1:0]  m0_axi_arburst,
    input  logic        m0_axi_arvalid,
    output logic        m0_axi_arready,
    output logic [4:0]  m0_axi_rid,  // 5-bit for outstanding reads
    output logic [127:0] m0_axi_rdata,
    output logic [1:0]  m0_axi_rresp,
    output logic        m0_axi_rlast,
    output logic        m0_axi_rvalid,
    input  logic        m0_axi_rready,

    // AXI port 1
    input  logic [3:0]  m1_axi_awid,
    input  logic [31:0] m1_axi_awaddr,
    input  logic [7:0]  m1_axi_awlen,
    input  logic [2:0]  m1_axi_awsize,
    input  logic [1:0]  m1_axi_awburst,
    input  logic        m1_axi_awvalid,
    output logic        m1_axi_awready,
    input  logic [127:0] m1_axi_wdata,
    input  logic [15:0] m1_axi_wstrb,
    input  logic        m1_axi_wlast,
    input  logic        m1_axi_wvalid,
    output logic        m1_axi_wready,
    output logic [3:0]  m1_axi_bid,
    output logic [1:0]  m1_axi_bresp,
    output logic        m1_axi_bvalid,
    input  logic        m1_axi_bready,
    input  logic [4:0]  m1_axi_arid,  // 5-bit for outstanding reads
    input  logic [31:0] m1_axi_araddr,
    input  logic [7:0]  m1_axi_arlen,
    input  logic [2:0]  m1_axi_arsize,
    input  logic [1:0]  m1_axi_arburst,
    input  logic        m1_axi_arvalid,
    output logic        m1_axi_arready,
    output logic [4:0]  m1_axi_rid,  // 5-bit for outstanding reads
    output logic [127:0] m1_axi_rdata,
    output logic [1:0]  m1_axi_rresp,
    output logic        m1_axi_rlast,
    output logic        m1_axi_rvalid,
    input  logic        m1_axi_rready,

    // AXI port 2
    input  logic [3:0]  m2_axi_awid,
    input  logic [31:0] m2_axi_awaddr,
    input  logic [7:0]  m2_axi_awlen,
    input  logic [2:0]  m2_axi_awsize,
    input  logic [1:0]  m2_axi_awburst,
    input  logic        m2_axi_awvalid,
    output logic        m2_axi_awready,
    input  logic [127:0] m2_axi_wdata,
    input  logic [15:0] m2_axi_wstrb,
    input  logic        m2_axi_wlast,
    input  logic        m2_axi_wvalid,
    output logic        m2_axi_wready,
    output logic [3:0]  m2_axi_bid,
    output logic [1:0]  m2_axi_bresp,
    output logic        m2_axi_bvalid,
    input  logic        m2_axi_bready,
    input  logic [4:0]  m2_axi_arid,  // 5-bit for outstanding reads
    input  logic [31:0] m2_axi_araddr,
    input  logic [7:0]  m2_axi_arlen,
    input  logic [2:0]  m2_axi_arsize,
    input  logic [1:0]  m2_axi_arburst,
    input  logic        m2_axi_arvalid,
    output logic        m2_axi_arready,
    output logic [4:0]  m2_axi_rid,  // 5-bit for outstanding reads
    output logic [127:0] m2_axi_rdata,
    output logic [1:0]  m2_axi_rresp,
    output logic        m2_axi_rlast,
    output logic        m2_axi_rvalid,
    input  logic        m2_axi_rready,

    // AXI port 3
    input  logic [3:0]  m3_axi_awid,
    input  logic [31:0] m3_axi_awaddr,
    input  logic [7:0]  m3_axi_awlen,
    input  logic [2:0]  m3_axi_awsize,
    input  logic [1:0]  m3_axi_awburst,
    input  logic        m3_axi_awvalid,
    output logic        m3_axi_awready,
    input  logic [127:0] m3_axi_wdata,
    input  logic [15:0] m3_axi_wstrb,
    input  logic        m3_axi_wlast,
    input  logic        m3_axi_wvalid,
    output logic        m3_axi_wready,
    output logic [3:0]  m3_axi_bid,
    output logic [1:0]  m3_axi_bresp,
    output logic        m3_axi_bvalid,
    input  logic        m3_axi_bready,
    input  logic [4:0]  m3_axi_arid,  // 5-bit for outstanding reads
    input  logic [31:0] m3_axi_araddr,
    input  logic [7:0]  m3_axi_arlen,
    input  logic [2:0]  m3_axi_arsize,
    input  logic [1:0]  m3_axi_arburst,
    input  logic        m3_axi_arvalid,
    output logic        m3_axi_arready,
    output logic [4:0]  m3_axi_rid,  // 5-bit for outstanding reads
    output logic [127:0] m3_axi_rdata,
    output logic [1:0]  m3_axi_rresp,
    output logic        m3_axi_rlast,
    output logic        m3_axi_rvalid,
    input  logic        m3_axi_rready,

    // Unified command interface
    output logic        cmd_valid,
    input  logic        cmd_ready,
    output logic [31:0] cmd_addr,
    output logic [7:0]  cmd_len,
    output logic        cmd_wr,
    output logic [127:0] cmd_wdata,
    output logic [15:0] cmd_wstrb,
    output logic [4:0]  cmd_id,  // 5-bit for outstanding reads
    output logic [1:0]  cmd_port,

    // Read response interface
    input  logic [127:0] resp_rdata,
    input  logic [4:0]  resp_id,  // 5-bit for outstanding reads
    input  logic        resp_valid,
    output logic        resp_ready,
    input  logic [1:0]  resp_port,
    input  logic        resp_is_wr
);
    localparam NUM_PORTS = 4;

    // Port request signals
    logic [NUM_PORTS-1:0] port_req;
    logic [NUM_PORTS-1:0] port_gnt;
    logic [1:0] grant_enc;

    // Arbitration - round robin
    logic [1:0] arb_rr;
    logic [$clog2(NUM_PORTS)-1:0] port_pri;

    // Issue: input is always new
    assign port_req[0] = m0_axi_awvalid | m0_axi_arvalid;
    assign port_req[1] = m1_axi_awvalid | m1_axi_arvalid;
    assign port_req[2] = m2_axi_awvalid | m2_axi_arvalid;
    assign port_req[3] = m3_axi_awvalid | m3_axi_arvalid;

    // Round-robin arbitration
    // Increment only when a command is actually accepted (valid & ready)
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            arb_rr <= 2'b0;
        end else if (cmd_valid && cmd_ready) begin
            arb_rr <= arb_rr + 1;
        end
    end

    // Priority encoder with round-robin (first requesting port in RR order wins)
    logic found;
    always_comb begin
        grant_enc = 2'b00;
        found = 1'b0;
        // Iterate through ports starting from arb_rr
        for (int i = 0; i < NUM_PORTS; i++) begin
            automatic int port_idx = (arb_rr + i) % NUM_PORTS;
            if (port_req[port_idx] && !found) begin
                grant_enc = port_idx[1:0];
                found = 1'b1;
            end
        end
    end

    assign port_gnt = (1 << grant_enc) & port_req;

    // Generate individual port signals
    logic port0_granted, port1_granted, port2_granted, port3_granted;
    assign port0_granted = port_gnt[0];
    assign port1_granted = port_gnt[1];
    assign port2_granted = port_gnt[2];
    assign port3_granted = port_gnt[3];

    assign m0_axi_awready = port0_granted && cmd_ready && m0_axi_awvalid;
    assign m1_axi_awready = port1_granted && cmd_ready && m1_axi_awvalid;
    assign m2_axi_awready = port2_granted && cmd_ready && m2_axi_awvalid;
    assign m3_axi_awready = port3_granted && cmd_ready && m3_axi_awvalid;

    assign m0_axi_arready = port0_granted && cmd_ready && m0_axi_arvalid;
    assign m1_axi_arready = port1_granted && cmd_ready && m1_axi_arvalid;
    assign m2_axi_arready = port2_granted && cmd_ready && m2_axi_arvalid;
    assign m3_axi_arready = port3_granted && cmd_ready && m3_axi_arvalid;

    // W channel ready - accept write data when port is granted and command accepted
    assign m0_axi_wready = port0_granted && cmd_ready && m0_axi_wvalid;
    assign m1_axi_wready = port1_granted && cmd_ready && m1_axi_wvalid;
    assign m2_axi_wready = port2_granted && cmd_ready && m2_axi_wvalid;
    assign m3_axi_wready = port3_granted && cmd_ready && m3_axi_wvalid;

    // Simplified crossbar - single cycle throughput
    // In a real implementation, this would have proper muxing
    always_comb begin
        cmd_valid = |port_req;
        cmd_port  = grant_enc;

        // Default assignments
        cmd_addr  = 32'h0;
        cmd_len   = 8'h0;
        cmd_wr    = 1'b0;
        cmd_wdata = 128'h0;
        cmd_wstrb = 16'h0;
        cmd_id    = 5'h0;

        case (grant_enc)
            2'd0: begin
                if (m0_axi_awvalid) begin
                    cmd_addr  = m0_axi_awaddr;
                    cmd_len   = m0_axi_awlen;
                    cmd_wr    = 1'b1;
                    cmd_wdata = m0_axi_wdata;
                    cmd_wstrb = m0_axi_wstrb;
                    cmd_id    = {1'b0, m0_axi_awid};  // Zero-extend AWID to 5 bits
                end else if (m0_axi_arvalid) begin
                    cmd_addr  = m0_axi_araddr;
                    cmd_len   = m0_axi_arlen;
                    cmd_wr    = 1'b0;
                    cmd_id    = m0_axi_arid;  // Already 5 bits
                end
            end
            2'd1: begin
                if (m1_axi_awvalid) begin
                    cmd_addr  = m1_axi_awaddr;
                    cmd_len   = m1_axi_awlen;
                    cmd_wr    = 1'b1;
                    cmd_wdata = m1_axi_wdata;
                    cmd_wstrb = m1_axi_wstrb;
                    cmd_id    = {1'b0, m1_axi_awid};
                end else if (m1_axi_arvalid) begin
                    cmd_addr  = m1_axi_araddr;
                    cmd_len   = m1_axi_arlen;
                    cmd_wr    = 1'b0;
                    cmd_id    = m1_axi_arid;
                end
            end
            2'd2: begin
                if (m2_axi_awvalid) begin
                    cmd_addr  = m2_axi_awaddr;
                    cmd_len   = m2_axi_awlen;
                    cmd_wr    = 1'b1;
                    cmd_wdata = m2_axi_wdata;
                    cmd_wstrb = m2_axi_wstrb;
                    cmd_id    = {1'b0, m2_axi_awid};
                end else if (m2_axi_arvalid) begin
                    cmd_addr  = m2_axi_araddr;
                    cmd_len   = m2_axi_arlen;
                    cmd_wr    = 1'b0;
                    cmd_id    = m2_axi_arid;
                end
            end
            2'd3: begin
                if (m3_axi_awvalid) begin
                    cmd_addr  = m3_axi_awaddr;
                    cmd_len   = m3_axi_awlen;
                    cmd_wr    = 1'b1;
                    cmd_wdata = m3_axi_wdata;
                    cmd_wstrb = m3_axi_wstrb;
                    cmd_id    = {1'b0, m3_axi_awid};
                end else if (m3_axi_arvalid) begin
                    cmd_addr  = m3_axi_araddr;
                    cmd_len   = m3_axi_arlen;
                    cmd_wr    = 1'b0;
                    cmd_id    = m3_axi_arid;
                end
            end
        endcase
    end

    // Outstanding command tracker (small FIFO, depth 8 matches controller queue)
    localparam TRACK_DEPTH = 8;
    logic [1:0] track_port [TRACK_DEPTH];
    logic       track_wr   [TRACK_DEPTH];
    logic [4:0] track_id   [TRACK_DEPTH];
    logic [TRACK_DEPTH-1:0] track_valid;
    logic [$clog2(TRACK_DEPTH)-1:0] track_wr_ptr;
    logic [$clog2(TRACK_DEPTH)-1:0] track_rd_ptr;
    logic track_full;
    logic track_empty;

    assign track_full  = track_valid[track_wr_ptr] && (track_wr_ptr == track_rd_ptr);
    assign track_empty = !(|track_valid);

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            track_wr_ptr <= '0;
            track_rd_ptr <= '0;
            for (int i = 0; i < TRACK_DEPTH; i++) track_valid[i] <= 1'b0;
        end else begin
            // Push when command is issued
            if (cmd_valid && cmd_ready && !track_full) begin
                track_port[track_wr_ptr] <= grant_enc;
                track_wr[track_wr_ptr]   <= cmd_wr;
                track_id[track_wr_ptr]   <= cmd_id;
                track_valid[track_wr_ptr] <= 1'b1;
                track_wr_ptr <= track_wr_ptr + 1;
            end

            // Pop when response is consumed
            if (resp_valid && resp_ready && !track_empty) begin
                track_valid[track_rd_ptr] <= 1'b0;
                track_rd_ptr <= track_rd_ptr + 1;
            end
        end
    end

    // Response routing - uses controller's resp_port and resp_is_wr directly
    always_comb begin
        resp_ready = 1'b0;
        case (resp_port)
            2'd0: begin
                m0_axi_bid    = 4'h0;
                m0_axi_bresp  = 2'b00;
                m0_axi_bvalid = resp_valid && resp_is_wr;
                m0_axi_rid    = resp_id;
                m0_axi_rdata  = resp_rdata;
                m0_axi_rresp  = 2'b00;
                m0_axi_rlast  = 1'b1;
                m0_axi_rvalid = resp_valid && !resp_is_wr;
                resp_ready    = (m0_axi_bready && m0_axi_bvalid) ||
                               (m0_axi_rready && m0_axi_rvalid);
            end
            2'd1: begin
                m1_axi_bid    = 4'h0;
                m1_axi_bresp  = 2'b00;
                m1_axi_bvalid = resp_valid && resp_is_wr;
                m1_axi_rid    = resp_id;
                m1_axi_rdata  = resp_rdata;
                m1_axi_rresp  = 2'b00;
                m1_axi_rlast  = 1'b1;
                m1_axi_rvalid = resp_valid && !resp_is_wr;
                resp_ready    = (m1_axi_bready && m1_axi_bvalid) ||
                               (m1_axi_rready && m1_axi_rvalid);
            end
            2'd2: begin
                m2_axi_bid    = 4'h0;
                m2_axi_bresp  = 2'b00;
                m2_axi_bvalid = resp_valid && resp_is_wr;
                m2_axi_rid    = resp_id;
                m2_axi_rdata  = resp_rdata;
                m2_axi_rresp  = 2'b00;
                m2_axi_rlast  = 1'b1;
                m2_axi_rvalid = resp_valid && !resp_is_wr;
                resp_ready    = (m2_axi_bready && m2_axi_bvalid) ||
                               (m2_axi_rready && m2_axi_rvalid);
            end
            2'd3: begin
                m3_axi_bid    = 4'h0;
                m3_axi_bresp  = 2'b00;
                m3_axi_bvalid = resp_valid && resp_is_wr;
                m3_axi_rid    = resp_id;
                m3_axi_rdata  = resp_rdata;
                m3_axi_rresp  = 2'b00;
                m3_axi_rlast  = 1'b1;
                m3_axi_rvalid = resp_valid && !resp_is_wr;
                resp_ready    = (m3_axi_bready && m3_axi_bvalid) ||
                               (m3_axi_rready && m3_axi_rvalid);
            end
            default: begin
                m0_axi_bid = 4'h0; m0_axi_bresp = 2'b00; m0_axi_bvalid = 1'b0;
                m0_axi_rid = 5'h0; m0_axi_rdata = 128'h0; m0_axi_rresp = 2'b00; m0_axi_rlast = 1'b1; m0_axi_rvalid = 1'b0;
                m1_axi_bid = 4'h0; m1_axi_bresp = 2'b00; m1_axi_bvalid = 1'b0;
                m1_axi_rid = 5'h0; m1_axi_rdata = 128'h0; m1_axi_rresp = 2'b00; m1_axi_rlast = 1'b1; m1_axi_rvalid = 1'b0;
                m2_axi_bid = 4'h0; m2_axi_bresp = 2'b00; m2_axi_bvalid = 1'b0;
                m2_axi_rid = 5'h0; m2_axi_rdata = 128'h0; m2_axi_rresp = 2'b00; m2_axi_rlast = 1'b1; m2_axi_rvalid = 1'b0;
                m3_axi_bid = 4'h0; m3_axi_bresp = 2'b00; m3_axi_bvalid = 1'b0;
                m3_axi_rid = 5'h0; m3_axi_rdata = 128'h0; m3_axi_rresp = 2'b00; m3_axi_rlast = 1'b1; m3_axi_rvalid = 1'b0;
            end
        endcase
    end

endmodule