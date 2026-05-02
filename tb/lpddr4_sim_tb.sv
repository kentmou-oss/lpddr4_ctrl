// LPDDR4 Simulation Testbench
// Tests 4 AXI ports with random traffic generators and LPDDR4 model
`timescale 1ns / 1ps

module lpddr4_sim_tb;

    // ============================================
    // Clock and Reset
    // ============================================
    logic sys_clk;
    logic sys_rst_n;
    logic pll_lock;
    logic ddr_clk;
    logic ddr_clk_4x;

    // ============================================
    // AXI Port 0 Signals
    // ============================================
    logic [3:0]  s0_axi_awid;
    logic [31:0] s0_axi_awaddr;
    logic [7:0]  s0_axi_awlen;
    logic [2:0]  s0_axi_awsize;
    logic [1:0]  s0_axi_awburst;
    logic        s0_axi_awvalid;
    logic        s0_axi_awready;
    logic [127:0] s0_axi_wdata;
    logic [15:0] s0_axi_wstrb;
    logic        s0_axi_wlast;
    logic        s0_axi_wvalid;
    logic        s0_axi_wready;
    logic [3:0]  s0_axi_bid;
    logic [1:0]  s0_axi_bresp;
    logic        s0_axi_bvalid;
    logic        s0_axi_bready;
    logic [4:0]  s0_axi_arid;
    logic [31:0] s0_axi_araddr;
    logic [7:0]  s0_axi_arlen;
    logic [2:0]  s0_axi_arsize;
    logic [1:0]  s0_axi_arburst;
    logic        s0_axi_arvalid;
    logic        s0_axi_arready;
    logic [4:0]  s0_axi_rid;
    logic [127:0] s0_axi_rdata;
    logic [1:0]  s0_axi_rresp;
    logic        s0_axi_rlast;
    logic        s0_axi_rvalid;
    logic        s0_axi_rready;

    // ============================================
    // AXI Port 1 Signals
    // ============================================
    logic [3:0]  s1_axi_awid;
    logic [31:0] s1_axi_awaddr;
    logic [7:0]  s1_axi_awlen;
    logic [2:0]  s1_axi_awsize;
    logic [1:0]  s1_axi_awburst;
    logic        s1_axi_awvalid;
    logic        s1_axi_awready;
    logic [127:0] s1_axi_wdata;
    logic [15:0] s1_axi_wstrb;
    logic        s1_axi_wlast;
    logic        s1_axi_wvalid;
    logic        s1_axi_wready;
    logic [3:0]  s1_axi_bid;
    logic [1:0]  s1_axi_bresp;
    logic        s1_axi_bvalid;
    logic        s1_axi_bready;
    logic [4:0]  s1_axi_arid;
    logic [31:0] s1_axi_araddr;
    logic [7:0]  s1_axi_arlen;
    logic [2:0]  s1_axi_arsize;
    logic [1:0]  s1_axi_arburst;
    logic        s1_axi_arvalid;
    logic        s1_axi_arready;
    logic [4:0]  s1_axi_rid;
    logic [127:0] s1_axi_rdata;
    logic [1:0]  s1_axi_rresp;
    logic        s1_axi_rlast;
    logic        s1_axi_rvalid;
    logic        s1_axi_rready;

    // ============================================
    // AXI Port 2 Signals
    // ============================================
    logic [3:0]  s2_axi_awid;
    logic [31:0] s2_axi_awaddr;
    logic [7:0]  s2_axi_awlen;
    logic [2:0]  s2_axi_awsize;
    logic [1:0]  s2_axi_awburst;
    logic        s2_axi_awvalid;
    logic        s2_axi_awready;
    logic [127:0] s2_axi_wdata;
    logic [15:0] s2_axi_wstrb;
    logic        s2_axi_wlast;
    logic        s2_axi_wvalid;
    logic        s2_axi_wready;
    logic [3:0]  s2_axi_bid;
    logic [1:0]  s2_axi_bresp;
    logic        s2_axi_bvalid;
    logic        s2_axi_bready;
    logic [4:0]  s2_axi_arid;
    logic [31:0] s2_axi_araddr;
    logic [7:0]  s2_axi_arlen;
    logic [2:0]  s2_axi_arsize;
    logic [1:0]  s2_axi_arburst;
    logic        s2_axi_arvalid;
    logic        s2_axi_arready;
    logic [4:0]  s2_axi_rid;
    logic [127:0] s2_axi_rdata;
    logic [1:0]  s2_axi_rresp;
    logic        s2_axi_rlast;
    logic        s2_axi_rvalid;
    logic        s2_axi_rready;

    // ============================================
    // AXI Port 3 Signals
    // ============================================
    logic [3:0]  s3_axi_awid;
    logic [31:0] s3_axi_awaddr;
    logic [7:0]  s3_axi_awlen;
    logic [2:0]  s3_axi_awsize;
    logic [1:0]  s3_axi_awburst;
    logic        s3_axi_awvalid;
    logic        s3_axi_awready;
    logic [127:0] s3_axi_wdata;
    logic [15:0] s3_axi_wstrb;
    logic        s3_axi_wlast;
    logic        s3_axi_wvalid;
    logic        s3_axi_wready;
    logic [3:0]  s3_axi_bid;
    logic [1:0]  s3_axi_bresp;
    logic        s3_axi_bvalid;
    logic        s3_axi_bready;
    logic [4:0]  s3_axi_arid;
    logic [31:0] s3_axi_araddr;
    logic [7:0]  s3_axi_arlen;
    logic [2:0]  s3_axi_arsize;
    logic [1:0]  s3_axi_arburst;
    logic        s3_axi_arvalid;
    logic        s3_axi_arready;
    logic [4:0]  s3_axi_rid;
    logic [127:0] s3_axi_rdata;
    logic [1:0]  s3_axi_rresp;
    logic        s3_axi_rlast;
    logic        s3_axi_rvalid;
    logic        s3_axi_rready;

    // ============================================
    // APB Signals
    // ============================================
    logic        psel;
    logic        penable;
    logic [7:0]  paddr;
    logic        pwrite;
    logic [31:0] pwdata;
    logic [31:0] prdata;

    // ============================================
    // DRAM Interface
    // ============================================
    wire [31:0]  ddr_dq;
    wire [3:0]   ddr_dqs;
    wire [3:0]   ddr_dqs_n;
    logic [9:0]   ddr_ca;
    logic [1:0]   ddr_cs_n;
    logic         ddr_ck;
    logic         ddr_ck_n;
    logic [1:0]   ddr_cke;
    logic [1:0]   ddr_odt;
    logic         ddr_reset_n;

    // ============================================
    // Status
    // ============================================
    logic        init_done;
    logic        training_done;
    logic [7:0]  status;
    logic        intr;

    // ============================================
    // Statistics from Traffic Generators
    // ============================================
    logic [31:0] stat_reads [4];
    logic [31:0] stat_writes [4];
    logic [31:0] stat_read_cmds [4];
    logic [31:0] stat_write_cmds [4];

    // ============================================
    // Traffic Generator Enables
    // ============================================
    logic tg_enable;

    // ============================================
    // Instantiate DUT (LPDDR4 Controller + PHY)
    // ============================================
    lpddr4_top #(.BYPASS_PHY(1)) u_dut (
        .sys_clk           (sys_clk),
        .sys_rst_n         (sys_rst_n),
        .pll_lock          (pll_lock),
        .ddr_clk           (ddr_clk),
        .ddr_clk_4x        (ddr_clk_4x),

        // Port 0
        .s0_axi_awid       (s0_axi_awid),
        .s0_axi_awaddr     (s0_axi_awaddr),
        .s0_axi_awlen      (s0_axi_awlen),
        .s0_axi_awsize     (s0_axi_awsize),
        .s0_axi_awburst    (s0_axi_awburst),
        .s0_axi_awvalid    (s0_axi_awvalid),
        .s0_axi_awready    (s0_axi_awready),
        .s0_axi_wdata      (s0_axi_wdata),
        .s0_axi_wstrb      (s0_axi_wstrb),
        .s0_axi_wlast      (s0_axi_wlast),
        .s0_axi_wvalid     (s0_axi_wvalid),
        .s0_axi_wready     (s0_axi_wready),
        .s0_axi_bid        (s0_axi_bid),
        .s0_axi_bresp      (s0_axi_bresp),
        .s0_axi_bvalid     (s0_axi_bvalid),
        .s0_axi_bready     (s0_axi_bready),
        .s0_axi_arid       (s0_axi_arid),
        .s0_axi_araddr     (s0_axi_araddr),
        .s0_axi_arlen      (s0_axi_arlen),
        .s0_axi_arsize     (s0_axi_arsize),
        .s0_axi_arburst    (s0_axi_arburst),
        .s0_axi_arvalid    (s0_axi_arvalid),
        .s0_axi_arready    (s0_axi_arready),
        .s0_axi_rid        (s0_axi_rid),
        .s0_axi_rdata      (s0_axi_rdata),
        .s0_axi_rresp      (s0_axi_rresp),
        .s0_axi_rlast      (s0_axi_rlast),
        .s0_axi_rvalid     (s0_axi_rvalid),
        .s0_axi_rready     (s0_axi_rready),

        // Port 1
        .s1_axi_awid       (s1_axi_awid),
        .s1_axi_awaddr     (s1_axi_awaddr),
        .s1_axi_awlen      (s1_axi_awlen),
        .s1_axi_awsize     (s1_axi_awsize),
        .s1_axi_awburst    (s1_axi_awburst),
        .s1_axi_awvalid    (s1_axi_awvalid),
        .s1_axi_awready    (s1_axi_awready),
        .s1_axi_wdata      (s1_axi_wdata),
        .s1_axi_wstrb      (s1_axi_wstrb),
        .s1_axi_wlast      (s1_axi_wlast),
        .s1_axi_wvalid     (s1_axi_wvalid),
        .s1_axi_wready     (s1_axi_wready),
        .s1_axi_bid        (s1_axi_bid),
        .s1_axi_bresp      (s1_axi_bresp),
        .s1_axi_bvalid     (s1_axi_bvalid),
        .s1_axi_bready     (s1_axi_bready),
        .s1_axi_arid       (s1_axi_arid),
        .s1_axi_araddr     (s1_axi_araddr),
        .s1_axi_arlen      (s1_axi_arlen),
        .s1_axi_arsize     (s1_axi_arsize),
        .s1_axi_arburst    (s1_axi_arburst),
        .s1_axi_arvalid    (s1_axi_arvalid),
        .s1_axi_arready    (s1_axi_arready),
        .s1_axi_rid        (s1_axi_rid),
        .s1_axi_rdata      (s1_axi_rdata),
        .s1_axi_rresp      (s1_axi_rresp),
        .s1_axi_rlast      (s1_axi_rlast),
        .s1_axi_rvalid     (s1_axi_rvalid),
        .s1_axi_rready     (s1_axi_rready),

        // Port 2
        .s2_axi_awid       (s2_axi_awid),
        .s2_axi_awaddr     (s2_axi_awaddr),
        .s2_axi_awlen      (s2_axi_awlen),
        .s2_axi_awsize     (s2_axi_awsize),
        .s2_axi_awburst    (s2_axi_awburst),
        .s2_axi_awvalid    (s2_axi_awvalid),
        .s2_axi_awready    (s2_axi_awready),
        .s2_axi_wdata      (s2_axi_wdata),
        .s2_axi_wstrb      (s2_axi_wstrb),
        .s2_axi_wlast      (s2_axi_wlast),
        .s2_axi_wvalid     (s2_axi_wvalid),
        .s2_axi_wready     (s2_axi_wready),
        .s2_axi_bid        (s2_axi_bid),
        .s2_axi_bresp      (s2_axi_bresp),
        .s2_axi_bvalid     (s2_axi_bvalid),
        .s2_axi_bready     (s2_axi_bready),
        .s2_axi_arid       (s2_axi_arid),
        .s2_axi_araddr     (s2_axi_araddr),
        .s2_axi_arlen      (s2_axi_arlen),
        .s2_axi_arsize     (s2_axi_arsize),
        .s2_axi_arburst    (s2_axi_arburst),
        .s2_axi_arvalid    (s2_axi_arvalid),
        .s2_axi_arready    (s2_axi_arready),
        .s2_axi_rid        (s2_axi_rid),
        .s2_axi_rdata      (s2_axi_rdata),
        .s2_axi_rresp      (s2_axi_rresp),
        .s2_axi_rlast      (s2_axi_rlast),
        .s2_axi_rvalid     (s2_axi_rvalid),
        .s2_axi_rready     (s2_axi_rready),

        // Port 3
        .s3_axi_awid       (s3_axi_awid),
        .s3_axi_awaddr     (s3_axi_awaddr),
        .s3_axi_awlen      (s3_axi_awlen),
        .s3_axi_awsize     (s3_axi_awsize),
        .s3_axi_awburst    (s3_axi_awburst),
        .s3_axi_awvalid    (s3_axi_awvalid),
        .s3_axi_awready    (s3_axi_awready),
        .s3_axi_wdata      (s3_axi_wdata),
        .s3_axi_wstrb      (s3_axi_wstrb),
        .s3_axi_wlast      (s3_axi_wlast),
        .s3_axi_wvalid     (s3_axi_wvalid),
        .s3_axi_wready     (s3_axi_wready),
        .s3_axi_bid        (s3_axi_bid),
        .s3_axi_bresp      (s3_axi_bresp),
        .s3_axi_bvalid     (s3_axi_bvalid),
        .s3_axi_bready     (s3_axi_bready),
        .s3_axi_arid       (s3_axi_arid),
        .s3_axi_araddr     (s3_axi_araddr),
        .s3_axi_arlen      (s3_axi_arlen),
        .s3_axi_arsize     (s3_axi_arsize),
        .s3_axi_arburst    (s3_axi_arburst),
        .s3_axi_arvalid    (s3_axi_arvalid),
        .s3_axi_arready    (s3_axi_arready),
        .s3_axi_rid        (s3_axi_rid),
        .s3_axi_rdata      (s3_axi_rdata),
        .s3_axi_rresp      (s3_axi_rresp),
        .s3_axi_rlast      (s3_axi_rlast),
        .s3_axi_rvalid     (s3_axi_rvalid),
        .s3_axi_rready     (s3_axi_rready),

        // APB
        .psel              (psel),
        .penable           (penable),
        .paddr             (paddr),
        .pwrite            (pwrite),
        .pwdata            (pwdata),
        .prdata            (prdata),

        // DRAM
        .ddr_dq            (ddr_dq),
        .ddr_dqs           (ddr_dqs),
        .ddr_dqs_n         (ddr_dqs_n),
        .ddr_ca            (ddr_ca),
        .ddr_cs_n          (ddr_cs_n),
        .ddr_ck            (ddr_ck),
        .ddr_ck_n          (ddr_ck_n),
        .ddr_cke           (ddr_cke),
        .ddr_odt           (ddr_odt),
        .ddr_reset_n       (ddr_reset_n),

        .init_done         (init_done),
        .training_done     (training_done),
        .status            (status),
        .intr              (intr)
    );

    // ============================================
    // Instantiate LPDDR4 Memory Model
    // ============================================
    logic        mem_init_done;
    logic [7:0]  mem_state;

    // Debug: count cycles
    logic [31:0] ddr_clk_count;
    always @(posedge ddr_clk) begin
        if (!sys_rst_n) ddr_clk_count <= 0;
        else ddr_clk_count <= ddr_clk_count + 1;
    end

    // Instantiate the behavioral memory model
    lpddr4_model u_mem (
        .clk            (sys_clk),
        .rst_n          (sys_rst_n && ddr_reset_n),
        .ddr_dq         (ddr_dq),
        .ddr_dqs        (ddr_dqs),
        .ddr_dqs_n      (ddr_dqs_n),
        .ddr_ca         (ddr_ca),
        .ddr_cs_n       (ddr_cs_n),
        .ddr_ck         (ddr_ck),
        .ddr_ck_n       (ddr_ck_n),
        .ddr_cke        (ddr_cke),
        .ddr_odt        (ddr_odt),
        .ddr_reset_n    (ddr_reset_n),
        .state          (mem_state),
        .init_done      (mem_init_done)
    );

    // Debug monitoring - disabled for now
    /*
    int dbg_count;
    initial dbg_count = 0;
    always @(posedge sys_clk) begin
        if (dbg_count < 3000) begin
            if (dbg_count % 1000 == 0) begin
                $display("DEBUG: t=%0t cmd_valid=%b cmd_ready=%b xbar_state=%h port_req=%b port_grant=%b",
                         $time, u_dut.u_crossbar.cmd_valid, u_dut.u_crossbar.cmd_ready,
                         u_dut.u_crossbar.state, u_dut.u_crossbar.port_req, u_dut.u_crossbar.port_grant);
                $display("TG0: awvalid=%b arvalid=%b pending_rd=%d pending_wr=%d",
                         u_tg_0.m_axi_awvalid, u_tg_0.m_axi_arvalid, u_tg_0.pending_reads, u_tg_0.pending_writes);
            end
            dbg_count = dbg_count + 1;
        end
    end
    */

    // ============================================
    // Instantiate 4 AXI Traffic Generators
    // ============================================
    axi_traffic_gen #(.PORT_ID(0), .ADDR_START(32'h0000_0000), .ADDR_END(32'h1000_0000), .SEED(12345))
    u_tg_0 (
        .clk            (sys_clk),
        .rst_n          (sys_rst_n),
        .enable         (tg_enable && init_done),
        .m_axi_awid     (s0_axi_awid),
        .m_axi_awaddr   (s0_axi_awaddr),
        .m_axi_awlen    (s0_axi_awlen),
        .m_axi_awsize   (s0_axi_awsize),
        .m_axi_awburst  (s0_axi_awburst),
        .m_axi_awvalid  (s0_axi_awvalid),
        .m_axi_awready  (s0_axi_awready),
        .m_axi_wdata    (s0_axi_wdata),
        .m_axi_wstrb    (s0_axi_wstrb),
        .m_axi_wlast    (s0_axi_wlast),
        .m_axi_wvalid   (s0_axi_wvalid),
        .m_axi_wready   (s0_axi_wready),
        .m_axi_bid      (s0_axi_bid),
        .m_axi_bresp    (s0_axi_bresp),
        .m_axi_bvalid   (s0_axi_bvalid),
        .m_axi_bready   (s0_axi_bready),
        .m_axi_arid     (s0_axi_arid),
        .m_axi_araddr   (s0_axi_araddr),
        .m_axi_arlen    (s0_axi_arlen),
        .m_axi_arsize   (s0_axi_arsize),
        .m_axi_arburst  (s0_axi_arburst),
        .m_axi_arvalid  (s0_axi_arvalid),
        .m_axi_arready  (s0_axi_arready),
        .m_axi_rid      (s0_axi_rid),
        .m_axi_rdata    (s0_axi_rdata),
        .m_axi_rresp    (s0_axi_rresp),
        .m_axi_rlast    (s0_axi_rlast),
        .m_axi_rvalid   (s0_axi_rvalid),
        .m_axi_rready   (s0_axi_rready),
        .stat_reads     (stat_reads[0]),
        .stat_writes    (stat_writes[0]),
        .stat_read_cmds (stat_read_cmds[0]),
        .stat_write_cmds(stat_write_cmds[0])
    );

    axi_traffic_gen #(.PORT_ID(1), .ADDR_START(32'h1000_0000), .ADDR_END(32'h2000_0000), .SEED(23456))
    u_tg_1 (
        .clk            (sys_clk),
        .rst_n          (sys_rst_n),
        .enable         (tg_enable && init_done),
        .m_axi_awid     (s1_axi_awid),
        .m_axi_awaddr   (s1_axi_awaddr),
        .m_axi_awlen    (s1_axi_awlen),
        .m_axi_awsize   (s1_axi_awsize),
        .m_axi_awburst  (s1_axi_awburst),
        .m_axi_awvalid  (s1_axi_awvalid),
        .m_axi_awready  (s1_axi_awready),
        .m_axi_wdata    (s1_axi_wdata),
        .m_axi_wstrb    (s1_axi_wstrb),
        .m_axi_wlast    (s1_axi_wlast),
        .m_axi_wvalid   (s1_axi_wvalid),
        .m_axi_wready   (s1_axi_wready),
        .m_axi_bid      (s1_axi_bid),
        .m_axi_bresp    (s1_axi_bresp),
        .m_axi_bvalid   (s1_axi_bvalid),
        .m_axi_bready   (s1_axi_bready),
        .m_axi_arid     (s1_axi_arid),
        .m_axi_araddr   (s1_axi_araddr),
        .m_axi_arlen    (s1_axi_arlen),
        .m_axi_arsize   (s1_axi_arsize),
        .m_axi_arburst  (s1_axi_arburst),
        .m_axi_arvalid  (s1_axi_arvalid),
        .m_axi_arready  (s1_axi_arready),
        .m_axi_rid      (s1_axi_rid),
        .m_axi_rdata    (s1_axi_rdata),
        .m_axi_rresp    (s1_axi_rresp),
        .m_axi_rlast    (s1_axi_rlast),
        .m_axi_rvalid   (s1_axi_rvalid),
        .m_axi_rready   (s1_axi_rready),
        .stat_reads     (stat_reads[1]),
        .stat_writes    (stat_writes[1]),
        .stat_read_cmds (stat_read_cmds[1]),
        .stat_write_cmds(stat_write_cmds[1])
    );

    axi_traffic_gen #(.PORT_ID(2), .ADDR_START(32'h2000_0000), .ADDR_END(32'h3000_0000), .SEED(34567))
    u_tg_2 (
        .clk            (sys_clk),
        .rst_n          (sys_rst_n),
        .enable         (tg_enable && init_done),
        .m_axi_awid     (s2_axi_awid),
        .m_axi_awaddr   (s2_axi_awaddr),
        .m_axi_awlen    (s2_axi_awlen),
        .m_axi_awsize   (s2_axi_awsize),
        .m_axi_awburst  (s2_axi_awburst),
        .m_axi_awvalid  (s2_axi_awvalid),
        .m_axi_awready  (s2_axi_awready),
        .m_axi_wdata    (s2_axi_wdata),
        .m_axi_wstrb    (s2_axi_wstrb),
        .m_axi_wlast    (s2_axi_wlast),
        .m_axi_wvalid   (s2_axi_wvalid),
        .m_axi_wready   (s2_axi_wready),
        .m_axi_bid      (s2_axi_bid),
        .m_axi_bresp    (s2_axi_bresp),
        .m_axi_bvalid   (s2_axi_bvalid),
        .m_axi_bready   (s2_axi_bready),
        .m_axi_arid     (s2_axi_arid),
        .m_axi_araddr   (s2_axi_araddr),
        .m_axi_arlen    (s2_axi_arlen),
        .m_axi_arsize   (s2_axi_arsize),
        .m_axi_arburst  (s2_axi_arburst),
        .m_axi_arvalid  (s2_axi_arvalid),
        .m_axi_arready  (s2_axi_arready),
        .m_axi_rid      (s2_axi_rid),
        .m_axi_rdata    (s2_axi_rdata),
        .m_axi_rresp    (s2_axi_rresp),
        .m_axi_rlast    (s2_axi_rlast),
        .m_axi_rvalid   (s2_axi_rvalid),
        .m_axi_rready   (s2_axi_rready),
        .stat_reads     (stat_reads[2]),
        .stat_writes    (stat_writes[2]),
        .stat_read_cmds (stat_read_cmds[2]),
        .stat_write_cmds(stat_write_cmds[2])
    );

    axi_traffic_gen #(.PORT_ID(3), .ADDR_START(32'h3000_0000), .ADDR_END(32'h4000_0000), .SEED(45678))
    u_tg_3 (
        .clk            (sys_clk),
        .rst_n          (sys_rst_n),
        .enable         (tg_enable && init_done),
        .m_axi_awid     (s3_axi_awid),
        .m_axi_awaddr   (s3_axi_awaddr),
        .m_axi_awlen    (s3_axi_awlen),
        .m_axi_awsize   (s3_axi_awsize),
        .m_axi_awburst  (s3_axi_awburst),
        .m_axi_awvalid  (s3_axi_awvalid),
        .m_axi_awready  (s3_axi_awready),
        .m_axi_wdata    (s3_axi_wdata),
        .m_axi_wstrb    (s3_axi_wstrb),
        .m_axi_wlast    (s3_axi_wlast),
        .m_axi_wvalid   (s3_axi_wvalid),
        .m_axi_wready   (s3_axi_wready),
        .m_axi_bid      (s3_axi_bid),
        .m_axi_bresp    (s3_axi_bresp),
        .m_axi_bvalid   (s3_axi_bvalid),
        .m_axi_bready   (s3_axi_bready),
        .m_axi_arid     (s3_axi_arid),
        .m_axi_araddr   (s3_axi_araddr),
        .m_axi_arlen    (s3_axi_arlen),
        .m_axi_arsize   (s3_axi_arsize),
        .m_axi_arburst  (s3_axi_arburst),
        .m_axi_arvalid  (s3_axi_arvalid),
        .m_axi_arready  (s3_axi_arready),
        .m_axi_rid      (s3_axi_rid),
        .m_axi_rdata    (s3_axi_rdata),
        .m_axi_rresp    (s3_axi_rresp),
        .m_axi_rlast    (s3_axi_rlast),
        .m_axi_rvalid   (s3_axi_rvalid),
        .m_axi_rready   (s3_axi_rready),
        .stat_reads     (stat_reads[3]),
        .stat_writes    (stat_writes[3]),
        .stat_read_cmds (stat_read_cmds[3]),
        .stat_write_cmds(stat_write_cmds[3])
    );

    // ============================================
    // Clock Generation
    // ============================================
    initial begin
        sys_clk = 0;
        forever #5 sys_clk = ~sys_clk;  // 100MHz
    end

    initial begin
        ddr_clk = 0;
        forever #2.5 ddr_clk = ~ddr_clk;  // 200MHz DDR
    end

    initial begin
        ddr_clk_4x = 0;
        forever #0.625 ddr_clk_4x = ~ddr_clk_4x;  // 800MHz
    end

    // ============================================
    // Reset Sequence
    // ============================================
    initial begin
        sys_rst_n = 0;
        pll_lock = 0;
        tg_enable = 0;
        #100;
        sys_rst_n = 1;
        #50;
        pll_lock = 1;
    end

    // ============================================
    // APB Tasks
    // ============================================
    task apb_write;
        input [7:0] addr;
        input [31:0] data;
        begin
            @(posedge sys_clk);
            psel = 1;
            penable = 0;
            paddr = addr;
            pwrite = 1;
            pwdata = data;
            @(posedge sys_clk);
            penable = 1;
            @(posedge sys_clk);
            psel = 0;
            penable = 0;
        end
    endtask

    task apb_read;
        input [7:0] addr;
        output [31:0] data;
        begin
            @(posedge sys_clk);
            psel = 1;
            penable = 0;
            paddr = addr;
            pwrite = 0;
            @(posedge sys_clk);
            penable = 1;
            @(posedge sys_clk);
            data = prdata;
            psel = 0;
            penable = 0;
        end
    endtask

    // ============================================
    // Main Test Sequence
    // ============================================
    initial begin
        psel = 0;
        penable = 0;
        paddr = 0;
        pwrite = 0;
        pwdata = 0;

        wait (sys_rst_n == 1);
        wait (pll_lock == 1);
        #500;

        $display("=== LPDDR4 Controller Simulation Test ===");
        $display("Time: %0t", $time);

        // Configure timing for DDR-3200 (tRCD=18ns, tRP=18ns, tRAS=42ns, tRC=65ns)
        // cfg_timing[15:0] = tRCD in clock cycles (18ns/5ns ≈ 4 cycles)
        apb_write(8'h04, 32'h00000004);  // Lower 16 bits: tRCD=4 cycles

        // Configure PHY delays (WL=4, RL=14 for DDR-3200)
        apb_write(8'h08, {16'h0E08, 8'h0E, 8'h04});  // PHY_CFG: RL=14, WL=4
        $display("Configured timing registers");

        // Wait for initialization or just run for a while
        #20000;
        if (init_done) begin
            $display("Initialization complete at time %0t", $time);
        end else begin
            $display("WARNING: init_done not asserted, running anyway at time %0t", $time);
        end

        // Start traffic generators
        #100;
        tg_enable = 1;
        $display("Traffic generators enabled at time %0t", $time);

        // Run for fixed time - enough to see AXI transactions
        #200000;

        // Debug check
        $display("\n=== AXI Signal Check at time %0t ===", $time);
        $display("DUT: init_done=%b status=%h q_full=%b q_empty=%b resp_valid=%b resp_ready=%b",
                 init_done, status, u_dut.u_controller.q_full, u_dut.u_controller.q_empty,
                 u_dut.u_controller.resp_valid, u_dut.resp_ready);

        // Run more time for transactions
        #100000;

        // Print statistics
        $display("\n=== Traffic Statistics ===");
        for (int i = 0; i < 4; i++) begin
            $display("Port %d: Reads=%d, Writes=%d, ReadCmds=%d, WriteCmds=%d",
                     i, stat_reads[i], stat_writes[i], stat_read_cmds[i], stat_write_cmds[i]);
        end

        tg_enable = 0;
        #1000;

        $display("\n=== Simulation Complete ===");
        $display("Total time: %0t", $time);
        $finish;
    end

    // ============================================
    // VCD Waveform Dump
    // ============================================
    initial begin
        $dumpfile("lpddr4_sim.vcd");
        $dumpvars(0, lpddr4_sim_tb);
    end

endmodule