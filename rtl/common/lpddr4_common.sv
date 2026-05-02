// Common utilities for LPDDR4 controller
`timescale 1ns / 1ps

package lpddr4_pkg;
    // LPDDR4 timing constants (DDR-3200, tCK = 0.937ns)
    localparam tCK          = 937;       // ps
    localparam tRPab        = 18;        // ns (precharge all)
    localparam tRCD         = 18;        // ns
    localparam tRRD         = 4;         // ns
    localparam tRFCab       = 130;       // ns
    localparam tRAS         = 42;        // ns
    localparam tWL          = 4;         // clocks
    localparam tRL          = 14;        // clocks
    localparam tDQSCK       = 2500;      // ps
    localparam tRDA         = 5;         // clocks
    localparam tWRA         = 5;         // clocks
    localparam t32us        = 32000;     // ns (stable power)
    localparam tCKE         = 5000;      // ps (CKE min high/low)
    localparam tZQCS        = 360;       // ns (ZQ calibration)
    localparam tZQINTERVAL  = 'hFFFF;    // ZQ interval

    // LPDDR4 commands (DRAM opcode format)
    typedef enum logic [4:0] {
        CMD_DES      = 5'b00000,   // Deselect
        CMD_MRR      = 5'b00001,   // Mode register read
        CMD_MRW      = 5'b00010,   // Mode register write
        CMD_REF      = 5'b00011,   // Refresh
        CMD_PRE      = 5'b00100,   // Precharge
        CMD_PREAB    = 5'b00101,   // Precharge all banks
        CMD_ACT      = 5'b00110,   // Activate
        CMD_READ     = 5'b00111,   // Read
        CMD_READ_AP  = 5'b01000,   // Read with auto precharge
        CMD_WRITE    = 5'b01001,   // Write
        CMD_WRITE_AP = 5'b01010,   // Write with auto precharge
        CMD_NOP      = 5'b01101    // NOP
    } dram_cmd_t;

    // Mode register addresses
    typedef enum logic [6:0] {
        MR0   = 7'h00,
        MR1   = 7'h01,
        MR2   = 7'h02,
        MR3   = 7'h03,
        MR4   = 7'h04,
        MR5   = 7'h05,
        MR6   = 7'h06,
        MR8   = 7'h08,
        MR10  = 7'h0A,
        MR11  = 7'h0B,
        MR12  = 7'h0C,
        MR13  = 7'h0D,
        MR14  = 7'h0E,
        MR16  = 7'h10,
        MR17  = 7'h11,
        MR18  = 7'h12,
        MR19  = 7'h13,
        MR20  = 7'h14,
        MR32  = 7'h20,
        MR40  = 7'h28,
        MR41  = 7'h29
    } mr_addr_t;

    // PHY training states
    typedef enum logic [3:0] {
        TRN_IDLE        = 4'h0,
        TRN_WL_SETUP    = 4'h1,
        TRN_WL_UPDATE   = 4'h2,
        TRN_WL_CHECK    = 4'h3,
        TRN_GATE_SETUP  = 4'h4,
        TRN_GATE_UPDATE = 4'h5,
        TRN_GATE_CHECK  = 4'h6,
        TRN_RD_SETUP    = 4'h7,
        TRN_RD_UPDATE   = 4'h8,
        TRN_RD_CHECK    = 4'h9,
        TRN_WR_SETUP    = 4'hA,
        TRN_WR_UPDATE   = 4'hB,
        TRN_WR_CHECK    = 4'hC,
        TRN_CA_SETUP    = 4'hD,
        TRN_CA_UPDATE   = 4'hE,
        TRN_CA_CHECK    = 4'hF
    } training_state_t;

    // PHY states
    typedef enum logic [2:0] {
        PHY_RESET    = 3'h0,
        PHY_INIT     = 3'h1,
        PHY_LOCK     = 3'h2,
        PHY_TRAIN    = 3'h3,
        PHY_ACTIVE   = 3'h4,
        PHY_SELFREF  = 3'h5,
        PHY_PWRDOWN  = 3'h6
    } phy_state_t;

    // DFI states
    typedef struct packed {
        logic [1:0]  cs_n;
        logic [1:0]  cke;
        logic [9:0]  ca;
        logic        ck;
        logic        ck_en;
        logic        odt;
    } dfi_control_t;

    typedef struct packed {
        logic [31:0]  wrdata;
        logic         wrdata_en;
        logic         wrdata_mask;
        logic [31:0]  rddata;
        logic         rddata_en;
    } dfi_data_t;
endpackage

module lpddr4_crc (
    input  logic [31:0] data_in,
    input  logic        enable,
    input  logic        clk,
    input  logic        rst_n,
    output logic [6:0]  crc_out
);
    // LPDDR4 uses CRC-7 polynomial: x^7 + x^6 + 1 = 0x49
    // This is a simplified CRC for illustration
    logic [6:0] crc_reg;

    always_ff @(posedge clk) begin
        if (!rst_n) begin
            crc_reg <= 7'h0;
        end else if (enable) begin
            for (int i = 0; i < 8; i++) begin
                logic bit_in = data_in[i] ^ crc_reg[6];
                crc_reg[0] <= bit_in;
                crc_reg[1] <= crc_reg[0] ^ bit_in;
                crc_reg[2] <= crc_reg[1];
                crc_reg[3] <= crc_reg[2] ^ bit_in;
                crc_reg[4] <= crc_reg[3];
                crc_reg[5] <= crc_reg[4];
                crc_reg[6] <= crc_reg[5] ^ bit_in;
            end
        end
    end

    assign crc_out = crc_reg;
endmodule

module lpddr4_async_fifo #(
    parameter WIDTH = 32,
    parameter DEPTH = 8
) (
    input  logic             wr_clk,
    input  logic             rd_clk,
    input  logic             rst_n,
    input  logic [WIDTH-1:0] wr_data,
    input  logic             wr_en,
    output logic             full,
    output logic [WIDTH-1:0] rd_data,
    input  logic             rd_en,
    output logic             empty
);
    localparam PTR_WIDTH = $clog2(DEPTH);

    logic [WIDTH-1:0] mem [DEPTH-1:0];
    logic [PTR_WIDTH:0] wr_ptr_gray, rd_ptr_gray;
    logic [PTR_WIDTH:0] wr_ptr_bin, rd_ptr_bin;
    logic [PTR_WIDTH:0] wr_ptr_next, rd_ptr_next;

    // Binary to Gray conversion
    assign wr_ptr_gray = wr_ptr_bin ^ (wr_ptr_bin >> 1);
    assign rd_ptr_gray = rd_ptr_bin ^ (rd_ptr_bin >> 1);

    // Memory write
    always_ff @(posedge wr_clk) begin
        if (!rst_n) begin
            wr_ptr_bin <= '0;
        end else if (wr_en && !full) begin
            mem[wr_ptr_bin[PTR_WIDTH-1:0]] <= wr_data;
            wr_ptr_bin <= wr_ptr_bin + 1;
        end
    end

    // Memory read
    always_ff @(posedge rd_clk) begin
        if (!rst_n) begin
            rd_ptr_bin <= '0;
            rd_data <= '0;
        end else if (rd_en && !empty) begin
            rd_data <= mem[rd_ptr_bin[PTR_WIDTH-1:0]];
            rd_ptr_bin <= rd_ptr_bin + 1;
        end
    end

    // Full/empty detection (cross-clock domain)
    logic [PTR_WIDTH:0] wr_ptr_gray_sync, rd_ptr_gray_sync;
    logic sync_done;

    always_ff @(posedge rd_clk) begin
        if (!rst_n) begin
            wr_ptr_gray_sync <= '0;
            rd_ptr_gray_sync <= rd_ptr_gray;
        end else begin
            wr_ptr_gray_sync <= wr_ptr_gray;
        end
    end

    always_ff @(posedge wr_clk) begin
        if (!rst_n) begin
            rd_ptr_gray_sync <= '0;
        end else begin
            rd_ptr_gray_sync <= rd_ptr_gray;
        end
    end

    assign full  = (wr_ptr_gray[PTR_WIDTH] != rd_ptr_gray_sync[PTR_WIDTH]) &&
                   (wr_ptr_gray[PTR_WIDTH-1:0] == rd_ptr_gray_sync[PTR_WIDTH-1:0]);
    assign empty = (wr_ptr_gray_sync == rd_ptr_gray);
endmodule