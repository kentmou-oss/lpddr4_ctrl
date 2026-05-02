// LPDDR4 Testbench
`timescale 1ns / 1ps

module lpddr4_tb;

    // Clock and reset
    logic sys_clk;
    logic sys_rst_n;
    logic pll_lock;
    logic ddr_clk;
    logic ddr_clk_4x;

    // AXI signals
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
    logic [3:0]  s0_axi_arid;
    logic [31:0] s0_axi_araddr;
    logic [7:0]  s0_axi_arlen;
    logic [2:0]  s0_axi_arsize;
    logic [1:0]  s0_axi_arburst;
    logic        s0_axi_arvalid;
    logic        s0_axi_arready;
    logic [3:0]  s0_axi_rid;
    logic [127:0] s0_axi_rdata;
    logic [1:0]  s0_axi_rresp;
    logic        s0_axi_rlast;
    logic        s0_axi_rvalid;
    logic        s0_axi_rready;

    // APB signals
    logic        psel;
    logic        penable;
    logic [7:0]  paddr;
    logic        pwrite;
    logic [31:0] pwdata;
    logic [31:0] prdata;

    // DRAM interface (bidirectional)
    wire [31:0]  ddr_dq;
    wire [3:0]   ddr_dqs;
    wire [3:0]  ddr_dqs_n;
    logic [9:0]  ddr_ca;
    logic [1:0]  ddr_cs_n;
    logic        ddr_ck;
    logic        ddr_ck_n;
    logic [1:0]  ddr_cke;
    logic [1:0]  ddr_odt;
    logic        ddr_reset_n;

    // Status
    logic        init_done;
    logic        training_done;
    logic [7:0]  status;
    logic        intr;

    // Instantiate DUT
    lpddr4_top u_dut (
        .sys_clk           (sys_clk),
        .sys_rst_n         (sys_rst_n),
        .pll_lock          (pll_lock),
        .ddr_clk           (ddr_clk),
        .ddr_clk_4x        (ddr_clk_4x),

        .s0_axi_awid       (s0_axi_awid),
        .s0_axi_awaddr    (s0_axi_awaddr),
        .s0_axi_awlen     (s0_axi_awlen),
        .s0_axi_awsize    (s0_axi_awsize),
        .s0_axi_awburst   (s0_axi_awburst),
        .s0_axi_awvalid   (s0_axi_awvalid),
        .s0_axi_awready   (s0_axi_awready),
        .s0_axi_wdata     (s0_axi_wdata),
        .s0_axi_wstrb     (s0_axi_wstrb),
        .s0_axi_wlast     (s0_axi_wlast),
        .s0_axi_wvalid    (s0_axi_wvalid),
        .s0_axi_wready    (s0_axi_wready),
        .s0_axi_bid       (s0_axi_bid),
        .s0_axi_bresp     (s0_axi_bresp),
        .s0_axi_bvalid    (s0_axi_bvalid),
        .s0_axi_bready    (s0_axi_bready),
        .s0_axi_arid      (s0_axi_arid),
        .s0_axi_araddr    (s0_axi_araddr),
        .s0_axi_arlen     (s0_axi_arlen),
        .s0_axi_arsize    (s0_axi_arsize),
        .s0_axi_arburst   (s0_axi_arburst),
        .s0_axi_arvalid   (s0_axi_arvalid),
        .s0_axi_arready   (s0_axi_arready),
        .s0_axi_rid       (s0_axi_rid),
        .s0_axi_rdata     (s0_axi_rdata),
        .s0_axi_rresp     (s0_axi_rresp),
        .s0_axi_rlast     (s0_axi_rlast),
        .s0_axi_rvalid    (s0_axi_rvalid),
        .s0_axi_rready    (s0_axi_rready),

        .s1_axi_awid       (4'h0),
        .s1_axi_awaddr    (32'h0),
        .s1_axi_awlen     (8'h0),
        .s1_axi_awsize    (3'h0),
        .s1_axi_awburst   (2'h0),
        .s1_axi_awvalid   (1'b0),
        .s1_axi_awready   (),
        .s1_axi_wdata     (128'h0),
        .s1_axi_wstrb     (16'h0),
        .s1_axi_wlast     (1'b0),
        .s1_axi_wvalid    (1'b0),
        .s1_axi_wready    (),
        .s1_axi_bid       (),
        .s1_axi_bresp     (),
        .s1_axi_bvalid    (),
        .s1_axi_bready    (1'b0),
        .s1_axi_arid      (4'h0),
        .s1_axi_araddr    (32'h0),
        .s1_axi_arlen     (8'h0),
        .s1_axi_arsize    (3'h0),
        .s1_axi_arburst   (2'h0),
        .s1_axi_arvalid   (1'b0),
        .s1_axi_arready   (),
        .s1_axi_rid       (),
        .s1_axi_rdata     (),
        .s1_axi_rresp     (),
        .s1_axi_rlast     (),
        .s1_axi_rvalid    (),
        .s1_axi_rready    (1'b0),

        .s2_axi_awid       (4'h0),
        .s2_axi_awaddr    (32'h0),
        .s2_axi_awlen     (8'h0),
        .s2_axi_awsize    (3'h0),
        .s2_axi_awburst   (2'h0),
        .s2_axi_awvalid   (1'b0),
        .s2_axi_awready   (),
        .s2_axi_wdata     (128'h0),
        .s2_axi_wstrb     (16'h0),
        .s2_axi_wlast     (1'b0),
        .s2_axi_wvalid    (1'b0),
        .s2_axi_wready    (),
        .s2_axi_bid       (),
        .s2_axi_bresp     (),
        .s2_axi_bvalid    (),
        .s2_axi_bready    (1'b0),
        .s2_axi_arid      (4'h0),
        .s2_axi_araddr    (32'h0),
        .s2_axi_arlen     (8'h0),
        .s2_axi_arsize    (3'h0),
        .s2_axi_arburst   (2'h0),
        .s2_axi_arvalid   (1'b0),
        .s2_axi_arready   (),
        .s2_axi_rid       (),
        .s2_axi_rdata     (),
        .s2_axi_rresp     (),
        .s2_axi_rlast     (),
        .s2_axi_rvalid    (),
        .s2_axi_rready    (1'b0),

        .s3_axi_awid       (4'h0),
        .s3_axi_awaddr    (32'h0),
        .s3_axi_awlen     (8'h0),
        .s3_axi_awsize    (3'h0),
        .s3_axi_awburst   (2'h0),
        .s3_axi_awvalid   (1'b0),
        .s3_axi_awready   (),
        .s3_axi_wdata     (128'h0),
        .s3_axi_wstrb     (16'h0),
        .s3_axi_wlast     (1'b0),
        .s3_axi_wvalid    (1'b0),
        .s3_axi_wready    (),
        .s3_axi_bid       (),
        .s3_axi_bresp     (),
        .s3_axi_bvalid    (),
        .s3_axi_bready    (1'b0),
        .s3_axi_arid      (4'h0),
        .s3_axi_araddr    (32'h0),
        .s3_axi_arlen     (8'h0),
        .s3_axi_arsize    (3'h0),
        .s3_axi_arburst   (2'h0),
        .s3_axi_arvalid   (1'b0),
        .s3_axi_arready   (),
        .s3_axi_rid       (),
        .s3_axi_rdata     (),
        .s3_axi_rresp     (),
        .s3_axi_rlast     (),
        .s3_axi_rvalid    (),
        .s3_axi_rready    (1'b0),

        .psel              (psel),
        .penable           (penable),
        .paddr             (paddr),
        .pwrite            (pwrite),
        .pwdata            (pwdata),
        .prdata            (prdata),

        .ddr_dq            (ddr_dq),
        .ddr_dqs          (ddr_dqs),
        .ddr_dqs_n        (ddr_dqs_n),
        .ddr_ca           (ddr_ca),
        .ddr_cs_n         (ddr_cs_n),
        .ddr_ck           (ddr_ck),
        .ddr_ck_n         (ddr_ck_n),
        .ddr_cke          (ddr_cke),
        .ddr_odt          (ddr_odt),
        .ddr_reset_n      (ddr_reset_n),

        .init_done        (init_done),
        .training_done    (training_done),
        .status           (status),
        .intr             (intr)
    );

    // Simple DRAM model
    logic [31:0] dram_mem [1024];  // 4KB test memory
    logic [3:0]  dram_dqs_reg;
    logic [31:0] dram_dq_reg;

    assign ddr_dq = (ddr_cs_n[0] == 0) ? dram_dq_reg : 32'hZZZZ_ZZZZ;

    // Clock generation
    initial begin
        sys_clk = 0;
        forever #5 sys_clk = ~sys_clk;  // 100MHz
    end

    initial begin
        ddr_clk = 0;
        forever #2.5 ddr_clk = ~ddr_clk;  // 200MHz DDR = 400MT/s
    end

    initial begin
        ddr_clk_4x = 0;
        forever #0.625 ddr_clk_4x = ~ddr_clk_4x;  // 800MHz
    end

    // Reset sequence
    initial begin
        sys_rst_n = 0;
        pll_lock = 0;
        #100;
        sys_rst_n = 1;
        #50;
        pll_lock = 1;
    end

    // APB write task
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

    // APB read task
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

    // AXI write transaction task
    task axi_write;
        input [31:0] addr;
        input [127:0] data;
        input [7:0] len;
        output logic done;
        begin
            done = 0;
            s0_axi_awvalid = 1;
            s0_axi_awaddr = addr;
            s0_axi_awlen = len;
            s0_axi_awsize = 3'b100;  // 16 bytes
            s0_axi_awburst = 2'b01;  // INCR

            s0_axi_wvalid = 1;
            s0_axi_wdata = data;
            s0_axi_wstrb = 16'hFFFF;
            s0_axi_wlast = 1;

            @(posedge sys_clk);
            while (!s0_axi_awready || !s0_axi_wready) begin
                @(posedge sys_clk);
            end
            @(posedge sys_clk);
            s0_axi_awvalid = 0;
            s0_axi_wvalid = 0;

            // Wait for write response
            @(posedge sys_clk);
            while (!s0_axi_bvalid) begin
                @(posedge sys_clk);
            end
            s0_axi_bready = 1;
            @(posedge sys_clk);
            s0_axi_bready = 0;
            done = 1;
        end
    endtask

    // AXI read transaction task
    task axi_read;
        input [31:0] addr;
        input [7:0] len;
        output [127:0] data;
        output logic done;
        begin
            done = 0;
            s0_axi_arvalid = 1;
            s0_axi_araddr = addr;
            s0_axi_arlen = len;
            s0_axi_arsize = 3'b100;  // 16 bytes
            s0_axi_arburst = 2'b01;  // INCR

            @(posedge sys_clk);
            while (!s0_axi_arready) begin
                @(posedge sys_clk);
            end
            @(posedge sys_clk);
            s0_axi_arvalid = 0;

            // Wait for read response
            for (int i = 0; i <= len; i++) begin
                @(posedge sys_clk);
                while (!s0_axi_rvalid) begin
                    @(posedge sys_clk);
                end
                if (i == 0) data = s0_axi_rdata;
                s0_axi_rready = 1;
                @(posedge sys_clk);
                s0_axi_rready = 0;
            end
            done = 1;
        end
    endtask

    // Main test sequence
    initial begin
        // Initialize
        s0_axi_awvalid = 0;
        s0_axi_wvalid = 0;
        s0_axi_arvalid = 0;
        s0_axi_rready = 0;
        s0_axi_bready = 0;
        psel = 0;
        penable = 0;
        paddr = 0;
        pwrite = 0;
        pwdata = 0;

        // Wait for reset
        wait (sys_rst_n == 1);
        wait (pll_lock == 1);
        #500;

        $display("=== LPDDR4 Controller Test ===");

        // Configure timing for DDR-3200
        apb_write(8'h04, 32'h01031018);  // Timing config
        $display("Configured timing registers");

        // Wait for initialization
        #2000;
        wait (init_done == 1);
        $display("Initialization complete");

        // Write a transaction
        #100;
        begin
            logic done;
            logic [127:0] wdata = 128'hDEAD_BEEF_A5A5_CAFE_1234_5678_9ABC_DEF0;
            axi_write(32'h0000_1000, wdata, 8'h0, done);
            $display("Write transaction completed: %d", done);
        end

        // Read back
        #100;
        begin
            logic done;
            logic [127:0] rdata;
            axi_read(32'h0000_1000, 8'h0, rdata, done);
            $display("Read transaction completed: %d, data: %h", done, rdata);
        end

        #1000;
        $display("=== Test Complete ===");
        $finish;
    end

    // Waveform dump
    initial begin
        $vcdpluson;
    end

endmodule