// LPDDR4 Top Level Module - Integration of controller and PHY
`timescale 1ns / 1ps

module lpddr4_top #(
    parameter NUM_AXI_PORTS = 4,
    parameter AXI_ADDR_WIDTH = 32,
    parameter AXI_DATA_WIDTH = 128,
    parameter DQ_WIDTH = 32,
    parameter DQS_WIDTH = 4,
    parameter CA_WIDTH = 10,
    parameter CS_WIDTH = 2
) (
    input  logic        sys_clk,
    input  logic        sys_rst_n,

    // Clock inputs
    input  logic        pll_lock,
    input  logic        ddr_clk,       // DDR clock (2x sys_clk typical)
    input  logic        ddr_clk_4x,    // 4x DDR clock for PHY serialization

    // AXI4 slave ports
    input  logic [3:0]  s0_axi_awid,
    input  logic [31:0] s0_axi_awaddr,
    input  logic [7:0]  s0_axi_awlen,
    input  logic [2:0]  s0_axi_awsize,
    input  logic [1:0]  s0_axi_awburst,
    input  logic        s0_axi_awvalid,
    output logic        s0_axi_awready,
    input  logic [127:0] s0_axi_wdata,
    input  logic [15:0] s0_axi_wstrb,
    input  logic        s0_axi_wlast,
    input  logic        s0_axi_wvalid,
    output logic        s0_axi_wready,
    output logic [3:0]  s0_axi_bid,
    output logic [1:0]  s0_axi_bresp,
    output logic        s0_axi_bvalid,
    input  logic        s0_axi_bready,
    input  logic [4:0]  s0_axi_arid,  // 5-bit for 32 outstanding reads
    input  logic [31:0] s0_axi_araddr,
    input  logic [7:0]  s0_axi_arlen,
    input  logic [2:0]  s0_axi_arsize,
    input  logic [1:0]  s0_axi_arburst,
    input  logic        s0_axi_arvalid,
    output logic        s0_axi_arready,
    output logic [4:0]  s0_axi_rid,  // 5-bit for 32 outstanding reads
    output logic [127:0] s0_axi_rdata,
    output logic [1:0]  s0_axi_rresp,
    output logic        s0_axi_rlast,
    output logic        s0_axi_rvalid,
    input  logic        s0_axi_rready,

    input  logic [3:0]  s1_axi_awid,
    input  logic [31:0] s1_axi_awaddr,
    input  logic [7:0]  s1_axi_awlen,
    input  logic [2:0]  s1_axi_awsize,
    input  logic [1:0]  s1_axi_awburst,
    input  logic        s1_axi_awvalid,
    output logic        s1_axi_awready,
    input  logic [127:0] s1_axi_wdata,
    input  logic [15:0] s1_axi_wstrb,
    input  logic        s1_axi_wlast,
    input  logic        s1_axi_wvalid,
    output logic        s1_axi_wready,
    output logic [3:0]  s1_axi_bid,
    output logic [1:0]  s1_axi_bresp,
    output logic        s1_axi_bvalid,
    input  logic        s1_axi_bready,
    input  logic [4:0]  s1_axi_arid,  // 5-bit for 32 outstanding reads
    input  logic [31:0] s1_axi_araddr,
    input  logic [7:0]  s1_axi_arlen,
    input  logic [2:0]  s1_axi_arsize,
    input  logic [1:0]  s1_axi_arburst,
    input  logic        s1_axi_arvalid,
    output logic        s1_axi_arready,
    output logic [4:0]  s1_axi_rid,  // 5-bit for 32 outstanding reads
    output logic [127:0] s1_axi_rdata,
    output logic [1:0]  s1_axi_rresp,
    output logic        s1_axi_rlast,
    output logic        s1_axi_rvalid,
    input  logic        s1_axi_rready,

    input  logic [3:0]  s2_axi_awid,
    input  logic [31:0] s2_axi_awaddr,
    input  logic [7:0]  s2_axi_awlen,
    input  logic [2:0]  s2_axi_awsize,
    input  logic [1:0]  s2_axi_awburst,
    input  logic        s2_axi_awvalid,
    output logic        s2_axi_awready,
    input  logic [127:0] s2_axi_wdata,
    input  logic [15:0] s2_axi_wstrb,
    input  logic        s2_axi_wlast,
    input  logic        s2_axi_wvalid,
    output logic        s2_axi_wready,
    output logic [3:0]  s2_axi_bid,
    output logic [1:0]  s2_axi_bresp,
    output logic        s2_axi_bvalid,
    input  logic        s2_axi_bready,
    input  logic [4:0]  s2_axi_arid,  // 5-bit for 32 outstanding reads
    input  logic [31:0] s2_axi_araddr,
    input  logic [7:0]  s2_axi_arlen,
    input  logic [2:0]  s2_axi_arsize,
    input  logic [1:0]  s2_axi_arburst,
    input  logic        s2_axi_arvalid,
    output logic        s2_axi_arready,
    output logic [4:0]  s2_axi_rid,  // 5-bit for 32 outstanding reads
    output logic [127:0] s2_axi_rdata,
    output logic [1:0]  s2_axi_rresp,
    output logic        s2_axi_rlast,
    output logic        s2_axi_rvalid,
    input  logic        s2_axi_rready,

    input  logic [3:0]  s3_axi_awid,
    input  logic [31:0] s3_axi_awaddr,
    input  logic [7:0]  s3_axi_awlen,
    input  logic [2:0]  s3_axi_awsize,
    input  logic [1:0]  s3_axi_awburst,
    input  logic        s3_axi_awvalid,
    output logic        s3_axi_awready,
    input  logic [127:0] s3_axi_wdata,
    input  logic [15:0] s3_axi_wstrb,
    input  logic        s3_axi_wlast,
    input  logic        s3_axi_wvalid,
    output logic        s3_axi_wready,
    output logic [3:0]  s3_axi_bid,
    output logic [1:0]  s3_axi_bresp,
    output logic        s3_axi_bvalid,
    input  logic        s3_axi_bready,
    input  logic [4:0]  s3_axi_arid,  // 5-bit for 32 outstanding reads
    input  logic [31:0] s3_axi_araddr,
    input  logic [7:0]  s3_axi_arlen,
    input  logic [2:0]  s3_axi_arsize,
    input  logic [1:0]  s3_axi_arburst,
    input  logic        s3_axi_arvalid,
    output logic        s3_axi_arready,
    output logic [4:0]  s3_axi_rid,  // 5-bit for 32 outstanding reads
    output logic [127:0] s3_axi_rdata,
    output logic [1:0]  s3_axi_rresp,
    output logic        s3_axi_rlast,
    output logic        s3_axi_rvalid,
    input  logic        s3_axi_rready,

    // APB configuration interface
    input  logic        psel,
    input  logic        penable,
    input  logic [7:0]   paddr,
    input  logic        pwrite,
    input  logic [31:0] pwdata,
    output logic [31:0] prdata,

    // LPDDR4 SDRAM interface
    inout  wire [31:0]  ddr_dq,
    inout  wire [3:0]   ddr_dqs,
    inout  wire [3:0]   ddr_dqs_n,
    output logic [9:0]  ddr_ca,
    output logic [1:0]  ddr_cs_n,
    output logic        ddr_ck,
    output logic        ddr_ck_n,
    output logic [1:0]  ddr_cke,
    output logic [1:0]  ddr_odt,
    output logic        ddr_reset_n,

    // Status and interrupts
    output logic        init_done,
    output logic        training_done,
    output logic [7:0]  status,
    output logic        intr
);

    // Internal clocks
    logic clk;
    logic clk_4x;

    // Reset
    logic rst_n;
    logic ddr_rst_n;

    // Internal DFI signals
    logic [1:0]  dfi_cs_n;
    logic [1:0]  dfi_cke;
    logic [9:0]  dfi_ca;
    logic        dfi_ck;
    logic        dfi_ck_en;
    logic [1:0]  dfi_odt;
    logic [31:0] dfi_wrdata;
    logic        dfi_wrdata_en;
    logic        dfi_wrdata_mask;
    logic [31:0] dfi_rddata;
    logic        dfi_rddata_en;

    // Command bus from crossbar
    logic        cmd_valid;
    logic        cmd_ready;
    logic [31:0] cmd_addr;
    logic [7:0]  cmd_len;
    logic        cmd_wr;
    logic [127:0] cmd_wdata;
    logic [15:0] cmd_wstrb;
    logic [4:0]  cmd_id;  // 5-bit for 32 outstanding reads
    logic [1:0]  cmd_port;

    // Response bus to crossbar
    logic [127:0] resp_rdata;
    logic [4:0]  resp_id;  // 5-bit for 32 outstanding reads
    logic        resp_valid;
    logic        resp_ready;
    logic [1:0]  resp_port;

    // Configuration registers
    logic [31:0] cfg_ctrl;
    logic [31:0] cfg_timing;
    logic [31:0] cfg_phy;
    logic [31:0] cfg_training;

    // Training signals
    logic        training_start;
    logic [3:0]  training_type;
    logic [7:0]  training_status;
    logic        training_done_int;
    logic        training_fail;
    logic [7:0]  wl_delay;
    logic [7:0]  gate_delay;
    logic [7:0]  rd_delay;
    logic [7:0]  wr_delay;
    logic [7:0]  ca_delay;

    // Clock assignment
    assign clk = sys_clk;
    assign clk_4x = ddr_clk_4x;
    assign rst_n = sys_rst_n && pll_lock;

    // APB register access
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            cfg_ctrl     <= 32'h0;
            cfg_timing   <= 32'h0103_1018;  // Default DDR-3200
            cfg_phy      <= 32'h0;
            cfg_training <= 32'h0;
        end else if (psel && penable && pwrite) begin
            case (paddr[7:2])
                6'h00: cfg_ctrl     <= pwdata;
                6'h01: cfg_timing   <= pwdata;
                6'h02: cfg_phy      <= pwdata;
                6'h03: cfg_training <= pwdata;
            endcase
        end
    end

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            prdata <= 32'h0;
        end else if (psel && !pwrite) begin
            case (paddr[7:2])
                6'h00: prdata <= cfg_ctrl;
                6'h01: prdata <= cfg_timing;
                6'h02: prdata <= cfg_phy;
                6'h03: prdata <= cfg_training;
                6'h04: prdata <= {24'h0, status};
                6'h05: prdata <= {23'h0, training_done_int, training_fail, training_status};
                default: prdata <= 32'h0;
            endcase
        end
    end

    // Training trigger
    assign training_start = cfg_training[0];
    assign training_type  = cfg_training[3:1];

    // AXI Crossbar instantiation
    axi_crossbar u_crossbar (
        .clk                (clk),
        .rst_n              (rst_n),

        // Port 0
        .m0_axi_awid        (s0_axi_awid),
        .m0_axi_awaddr     (s0_axi_awaddr),
        .m0_axi_awlen      (s0_axi_awlen),
        .m0_axi_awsize     (s0_axi_awsize),
        .m0_axi_awburst    (s0_axi_awburst),
        .m0_axi_awvalid    (s0_axi_awvalid),
        .m0_axi_awready    (s0_axi_awready),
        .m0_axi_wdata      (s0_axi_wdata),
        .m0_axi_wstrb      (s0_axi_wstrb),
        .m0_axi_wlast      (s0_axi_wlast),
        .m0_axi_wvalid     (s0_axi_wvalid),
        .m0_axi_wready     (s0_axi_wready),
        .m0_axi_bid        (s0_axi_bid),
        .m0_axi_bresp      (s0_axi_bresp),
        .m0_axi_bvalid     (s0_axi_bvalid),
        .m0_axi_bready     (s0_axi_bready),
        .m0_axi_arid       (s0_axi_arid),
        .m0_axi_araddr     (s0_axi_araddr),
        .m0_axi_arlen      (s0_axi_arlen),
        .m0_axi_arsize     (s0_axi_arsize),
        .m0_axi_arburst    (s0_axi_arburst),
        .m0_axi_arvalid    (s0_axi_arvalid),
        .m0_axi_arready    (s0_axi_arready),
        .m0_axi_rid        (s0_axi_rid),
        .m0_axi_rdata      (s0_axi_rdata),
        .m0_axi_rresp      (s0_axi_rresp),
        .m0_axi_rlast      (s0_axi_rlast),
        .m0_axi_rvalid     (s0_axi_rvalid),
        .m0_axi_rready     (s0_axi_rready),

        // Port 1
        .m1_axi_awid        (s1_axi_awid),
        .m1_axi_awaddr     (s1_axi_awaddr),
        .m1_axi_awlen      (s1_axi_awlen),
        .m1_axi_awsize     (s1_axi_awsize),
        .m1_axi_awburst    (s1_axi_awburst),
        .m1_axi_awvalid    (s1_axi_awvalid),
        .m1_axi_awready    (s1_axi_awready),
        .m1_axi_wdata      (s1_axi_wdata),
        .m1_axi_wstrb      (s1_axi_wstrb),
        .m1_axi_wlast      (s1_axi_wlast),
        .m1_axi_wvalid     (s1_axi_wvalid),
        .m1_axi_wready     (s1_axi_wready),
        .m1_axi_bid        (s1_axi_bid),
        .m1_axi_bresp      (s1_axi_bresp),
        .m1_axi_bvalid     (s1_axi_bvalid),
        .m1_axi_bready     (s1_axi_bready),
        .m1_axi_arid       (s1_axi_arid),
        .m1_axi_araddr     (s1_axi_araddr),
        .m1_axi_arlen      (s1_axi_arlen),
        .m1_axi_arsize     (s1_axi_arsize),
        .m1_axi_arburst    (s1_axi_arburst),
        .m1_axi_arvalid    (s1_axi_arvalid),
        .m1_axi_arready    (s1_axi_arready),
        .m1_axi_rid        (s1_axi_rid),
        .m1_axi_rdata      (s1_axi_rdata),
        .m1_axi_rresp      (s1_axi_rresp),
        .m1_axi_rlast      (s1_axi_rlast),
        .m1_axi_rvalid     (s1_axi_rvalid),
        .m1_axi_rready     (s1_axi_rready),

        // Port 2
        .m2_axi_awid        (s2_axi_awid),
        .m2_axi_awaddr     (s2_axi_awaddr),
        .m2_axi_awlen      (s2_axi_awlen),
        .m2_axi_awsize     (s2_axi_awsize),
        .m2_axi_awburst    (s2_axi_awburst),
        .m2_axi_awvalid    (s2_axi_awvalid),
        .m2_axi_awready    (s2_axi_awready),
        .m2_axi_wdata      (s2_axi_wdata),
        .m2_axi_wstrb      (s2_axi_wstrb),
        .m2_axi_wlast      (s2_axi_wlast),
        .m2_axi_wvalid     (s2_axi_wvalid),
        .m2_axi_wready     (s2_axi_wready),
        .m2_axi_bid        (s2_axi_bid),
        .m2_axi_bresp      (s2_axi_bresp),
        .m2_axi_bvalid     (s2_axi_bvalid),
        .m2_axi_bready     (s2_axi_bready),
        .m2_axi_arid       (s2_axi_arid),
        .m2_axi_araddr     (s2_axi_araddr),
        .m2_axi_arlen      (s2_axi_arlen),
        .m2_axi_arsize     (s2_axi_arsize),
        .m2_axi_arburst    (s2_axi_arburst),
        .m2_axi_arvalid    (s2_axi_arvalid),
        .m2_axi_arready    (s2_axi_arready),
        .m2_axi_rid        (s2_axi_rid),
        .m2_axi_rdata      (s2_axi_rdata),
        .m2_axi_rresp      (s2_axi_rresp),
        .m2_axi_rlast      (s2_axi_rlast),
        .m2_axi_rvalid     (s2_axi_rvalid),
        .m2_axi_rready     (s2_axi_rready),

        // Port 3
        .m3_axi_awid        (s3_axi_awid),
        .m3_axi_awaddr     (s3_axi_awaddr),
        .m3_axi_awlen      (s3_axi_awlen),
        .m3_axi_awsize     (s3_axi_awsize),
        .m3_axi_awburst    (s3_axi_awburst),
        .m3_axi_awvalid    (s3_axi_awvalid),
        .m3_axi_awready    (s3_axi_awready),
        .m3_axi_wdata      (s3_axi_wdata),
        .m3_axi_wstrb      (s3_axi_wstrb),
        .m3_axi_wlast      (s3_axi_wlast),
        .m3_axi_wvalid     (s3_axi_wvalid),
        .m3_axi_wready     (s3_axi_wready),
        .m3_axi_bid        (s3_axi_bid),
        .m3_axi_bresp      (s3_axi_bresp),
        .m3_axi_bvalid     (s3_axi_bvalid),
        .m3_axi_bready     (s3_axi_bready),
        .m3_axi_arid       (s3_axi_arid),
        .m3_axi_araddr     (s3_axi_araddr),
        .m3_axi_arlen      (s3_axi_arlen),
        .m3_axi_arsize     (s3_axi_arsize),
        .m3_axi_arburst    (s3_axi_arburst),
        .m3_axi_arvalid    (s3_axi_arvalid),
        .m3_axi_arready    (s3_axi_arready),
        .m3_axi_rid        (s3_axi_rid),
        .m3_axi_rdata      (s3_axi_rdata),
        .m3_axi_rresp      (s3_axi_rresp),
        .m3_axi_rlast      (s3_axi_rlast),
        .m3_axi_rvalid     (s3_axi_rvalid),
        .m3_axi_rready     (s3_axi_rready),

        // Unified command interface
        .cmd_valid         (cmd_valid),
        .cmd_ready         (cmd_ready),
        .cmd_addr          (cmd_addr),
        .cmd_len           (cmd_len),
        .cmd_wr            (cmd_wr),
        .cmd_wdata         (cmd_wdata),
        .cmd_wstrb         (cmd_wstrb),
        .cmd_id            (cmd_id),
        .cmd_port          (cmd_port),

        // Response interface
        .resp_rdata        (resp_rdata),
        .resp_id           (resp_id),
        .resp_valid        (resp_valid),
        .resp_ready        (resp_ready),
        .resp_port         (resp_port)
    );

    // LPDDR4 Controller instantiation
    lpddr4_controller u_controller (
        .clk               (clk),
        .rst_n             (rst_n),

        .cmd_valid         (cmd_valid),
        .cmd_ready         (cmd_ready),
        .cmd_addr          (cmd_addr),
        .cmd_len           (cmd_len),
        .cmd_wr            (cmd_wr),
        .cmd_wdata         (cmd_wdata),
        .cmd_wstrb         (cmd_wstrb),
        .cmd_id            (cmd_id),
        .cmd_port          (cmd_port),

        .resp_rdata        (resp_rdata),
        .resp_id           (resp_id),
        .resp_valid        (resp_valid),
        .resp_ready        (resp_ready),

        .dfi_cs_n          (dfi_cs_n),
        .dfi_cke           (dfi_cke),
        .dfi_ca            (dfi_ca),
        .dfi_ck            (dfi_ck),
        .dfi_ck_en         (dfi_ck_en),
        .dfi_odt           (dfi_odt),
        .dfi_wrdata        (dfi_wrdata),
        .dfi_wrdata_en     (dfi_wrdata_en),
        .dfi_wrdata_mask   (dfi_wrdata_mask),
        .dfi_rddata        (dfi_rddata),
        .dfi_rddata_en     (dfi_rddata_en),

        .cfg_timing        (cfg_timing),
        .cfg_ctrl          (cfg_ctrl),

        .status_state      (status),
        .init_done         (init_done),
        .training_done     (training_done_int),

        .intr_cmd_cmplt    (),
        .intr_err          ()
    );

    // LPDDR4 PHY instantiation
    lpddr4_phy u_phy (
        .clk               (clk),
        .clk_4x            (clk_4x),
        .rst_n             (rst_n),

        .dfi_cs_n          (dfi_cs_n),
        .dfi_cke           (dfi_cke),
        .dfi_ca            (dfi_ca),
        .dfi_ck            (dfi_ck),
        .dfi_ck_en         (dfi_ck_en),
        .dfi_odt           (dfi_odt),
        .dfi_wrdata        (dfi_wrdata),
        .dfi_wrdata_en     (dfi_wrdata_en),
        .dfi_wrdata_mask   (dfi_wrdata_mask),

        .dfi_rddata        (dfi_rddata),
        .dfi_rddata_en     (dfi_rddata_en),

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

        .cfg_phy           (cfg_phy[15:0]),
        .cfg_wl            (wl_delay),
        .cfg_rl            (rd_delay),

        .training_en       (training_start),
        .training_type     (training_type),
        .training_status   (training_status),
        .training_done     (training_done)
    );

    // Status outputs
    assign training_done = training_done_int;
    assign intr = training_fail || init_done;

endmodule