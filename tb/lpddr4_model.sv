// LPDDR4 Behavioral Memory Model
// Supports x32 configuration, 8GB density (typical)
// `timescale 1ns / 1ps

module lpddr4_model #(
    parameter integer COL_BITS = 12,   // Column address bits
    parameter integer ROW_BITS = 16,   // Row address bits
    parameter integer BANK_BITS = 2,    // Bank address bits
    parameter integer CHIP_BITS = 1,    // Chip select bits
    parameter integer DQ_WIDTH = 32,    // Data bus width
    parameter integer DQS_WIDTH = 4,    // DQS width (per byte)
    parameter integer MEM_SIZE = 'h4000_0000  // 16GB for simulation
) (
    input  logic clk,
    input  logic rst_n,

    // DDR interface
    inout  logic [DQ_WIDTH-1:0]  ddr_dq,
    inout  logic [DQS_WIDTH-1:0]   ddr_dqs,
    inout  logic [DQS_WIDTH-1:0]   ddr_dqs_n,
    input  logic [9:0]             ddr_ca,      // Command/address
    input  logic [1:0]              ddr_cs_n,    // Chip select
    input  logic                    ddr_ck,      // Clock
    input  logic                    ddr_ck_n,    // Complementary clock
    input  logic [1:0]              ddr_cke,     // Clock enable
    input  logic [1:0]              ddr_odt,     // On-die termination
    input  logic                    ddr_reset_n,  // Reset

    // Status
    output logic [7:0]              state,
    output logic                    init_done
);

    // ============================================
    // Memory Array
    // ============================================
    // 16GB memory organized as:
    // [chip][bank][row][column]
    localparam NUM_BANKS = 1 << BANK_BITS;  // 4 banks
    localparam NUM_ROWS  = 1 << ROW_BITS;   // 65536 rows
    localparam NUM_COLS  = 1 << (COL_BITS - 3);  // 512 columns (each is 32 bits / 8 = 4 bytes per access)

    // Memory: 2 chips x 4 banks x 65536 rows x 512 columns x 32 bits
    // Use a large distributed RAM
    (* ram_style = "block" *)
    logic [DQ_WIDTH-1:0] mem [0:(1<<CHIP_BITS)*(1<<BANK_BITS)*(1<<ROW_BITS)*(1<<(COL_BITS-3))-1];

    // ============================================
    // Command Encoding (from CA[9:0])
    // ============================================
    // CA[9] = Command valid (0=valid, 1=NOP/deselect)
    // CA[8] = CA parity
    // CA[7] = CKE
    // CA[6] = CS_n
    // CA[5] = ACT_n
    // CA[4] = RAS_n / A16
    // CA[3] = CAS_n / A15
    // CA[2] = WE_n / A14
    // CA[1:0] = BA / A[13:12]

    // Command patterns for decoding (MSB=CA[9])
    localparam CMD_NOP_MASK     = 10'b1000000000;
    localparam CMD_DESEL_MASK   = 10'b1111111111;
    localparam CMD_MRS          = 10'b0011011000;
    localparam CMD_REF          = 10'b0011000000;
    localparam CMD_PRE          = 10'b0011001000;
    localparam CMD_PRE_ALL      = 10'b0011001010;
    localparam CMD_ACT          = 10'b0010100000;
    localparam CMD_READ         = 10'b0011010000;
    localparam CMD_READ_AP      = 10'b0011011000;
    localparam CMD_WRITE        = 10'b0011100000;
    localparam CMD_WRITE_AP     = 10'b0011101000;
    localparam CMD_ZQCAL        = 10'b0011101010;

    // ============================================
    // State Machine
    // ============================================
    typedef enum logic [7:0] {
        STATE_RESET       = 8'h00,
        STATE_INIT_WAIT   = 8'h01,
        STATE_INIT_MRS    = 8'h02,
        STATE_INIT_ZQCAL  = 8'h03,
        STATE_IDLE        = 8'h10,
        STATE_ACTIVE      = 8'h20,  // Row activated
        STATE_READING     = 8'h30,
        STATE_WRITING    = 8'h40,
        STATE_PRECHARGING = 8'h50,
        STATE_REFRESHING  = 8'h60
    } model_state_t;

    model_state_t state_machine, next_state;

    // ============================================
    // Timing Parameters (sys_clk @ 100MHz, tCK=10ns)
    // ============================================
    localparam tCK     = 10;       // Clock period (ns)
    localparam tRCD    = 4;        // RAS to CAS delay (cycles)
    localparam tRP     = 4;        // Precharge to RAS (cycles)
    localparam tRAS    = 10;       // Row active time (cycles)
    localparam tRC     = 15;       // Row cycle time
    localparam tRL     = 14;       // Read latency (cycles)
    localparam tWL     = 4;        // Write latency (cycles)
    localparam tDQSCK  = 3;        // DQS output access
    localparam tRPRE   = 1;        // Read DQS preamble
    localparam tWPRE   = 1;        // Write DQS preamble
    localparam tWTR    = 4;        // Write to read turnaround
    localparam tRTP    = 4;        // Read to precharge
    localparam tCCD    = 4;        // CAS to CAS delay

    // ============================================
    // Bank State
    // ============================================
    logic [ROW_BITS-1:0] open_row [0:NUM_BANKS-1];
    logic open_bank [0:NUM_BANKS-1];

    // ============================================
    // Data Latches
    // ============================================
    logic [DQ_WIDTH-1:0] dq_out;
    logic dq_out_en;
    logic [DQS_WIDTH-1:0] dqs_out;
    logic dqs_out_en;

    // ============================================
    // Command Decoder
    // ============================================
    logic cmd_valid;
    logic cmd_act_n;
    logic cmd_ras_n;
    logic cmd_cas_n;
    logic cmd_we_n;
    logic [1:0] cmd_bank;
    logic [13:0] cmd_addr;

    assign cmd_valid = !ddr_ca[9];
    assign cmd_act_n = ddr_ca[5];
    assign cmd_ras_n = ddr_ca[4];
    assign cmd_cas_n = ddr_ca[3];
    assign cmd_we_n  = ddr_ca[2];
    assign cmd_bank  = ddr_ca[1:0];
    assign cmd_addr  = {ddr_ca[8], ddr_ca[6], ddr_ca[7], ddr_ca[0], ddr_ca[4:3], 4'b0}; // Reconstructed address

    // ============================================
    // State Machine
    // ============================================
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_machine <= STATE_RESET;
        end else begin
            state_machine <= next_state;
        end
    end

    // ============================================
    // DRAM Command Handler
    // ============================================
    logic [7:0] timer;
    logic [15:0] row_addr_reg;
    logic [1:0] bank_addr_reg;

    logic timer_init;
    logic [7:0] timer_load;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            timer <= 0;
            timer_init <= 0;
            timer_load <= 0;
            for (int b = 0; b < NUM_BANKS; b++) begin
                open_bank[b] <= 0;
            end
        end else begin
            timer_init <= 0;
            if (timer_load != 0) begin
                timer <= timer_load;
                timer_load <= 0;
                timer_init <= 1;
            end else if (timer > 0) begin
                timer <= timer - 1;
                timer_init <= 0;
            end

            case (state_machine)
                STATE_RESET: begin
                    if (!timer_init) begin
                        timer_load <= 100/tCK;  // Reset pulse width
                        timer_init <= 1;
                    end
                end

                STATE_INIT_WAIT: begin
                    if (!timer_init && timer == 0) begin
                        timer_load <= 50;  // Wait time after reset
                        timer_init <= 1;
                    end
                end

                STATE_INIT_MRS: begin
                    if (!timer_init && timer == 0) begin
                        timer_load <= 20;  // MRS latency
                        timer_init <= 1;
                    end
                end

                STATE_INIT_ZQCAL: begin
                    if (!timer_init && timer == 0) begin
                        timer_load <= 50;  // ZQ calibration time
                        timer_init <= 1;
                    end
                end

                STATE_IDLE: begin
                    if (cmd_valid && !cmd_act_n && !cmd_ras_n && cmd_cas_n && cmd_we_n) begin
                        // ACTIVATE command
                        row_addr_reg <= cmd_addr[ROW_BITS-1:0];
                        bank_addr_reg <= cmd_bank;
                        open_row[cmd_bank] <= cmd_addr[ROW_BITS-1:0];
                        open_bank[cmd_bank] <= 1;
                        timer <= tRCD;
                    end
                end

                STATE_ACTIVE: begin
                    if (timer > 0) begin
                        // Waiting for tRCD
                    end else if (cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && cmd_we_n) begin
                        // READ command: ACT_n=1, RAS_n=1, CAS_n=0, WE_n=1
                        timer <= tRL + 4;
                        state_machine <= STATE_READING;
                    end else if (cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && !cmd_we_n) begin
                        // WRITE command: ACT_n=1, RAS_n=1, CAS_n=0, WE_n=0
                        timer <= tWL + 4;
                        state_machine <= STATE_WRITING;
                    end else if (cmd_valid && cmd_act_n && !cmd_ras_n && cmd_cas_n && !cmd_we_n) begin
                        // PRECHARGE: ACT_n=1, RAS_n=0, CAS_n=1, WE_n=0
                        open_bank[cmd_bank] <= 0;
                        timer <= tRP;
                        state_machine <= STATE_PRECHARGING;
                    end
                end

                STATE_READING: begin
                    if (timer > 0) timer <= timer - 1;
                end

                STATE_WRITING: begin
                    if (timer > 0) timer <= timer - 1;
                end

                STATE_PRECHARGING, STATE_REFRESHING: begin
                    if (timer > 0) timer <= timer - 1;
                end
            endcase
        end
    end

    // Next state logic
    always_comb begin
        next_state = state_machine;
        case (state_machine)
            STATE_RESET:      next_state = STATE_INIT_WAIT;
            STATE_INIT_WAIT:  if (timer == 0) next_state = STATE_INIT_MRS;
            STATE_INIT_MRS:   if (timer == 0) next_state = STATE_INIT_ZQCAL;
            STATE_INIT_ZQCAL: if (timer == 0) begin
                                next_state = STATE_IDLE;
                              end
            STATE_IDLE: begin
                // Only transition on a valid command
                if (cmd_valid) begin
                    if (!cmd_act_n && !cmd_ras_n && cmd_cas_n && cmd_we_n)
                        next_state = STATE_ACTIVE;  // ACT
                    else
                        next_state = STATE_IDLE;
                end else begin
                    next_state = STATE_IDLE;
                end
            end
            STATE_ACTIVE: begin
                if (timer == 0) next_state = STATE_ACTIVE;
                else next_state = STATE_ACTIVE;
            end
            STATE_READING:    if (timer == 0) next_state = STATE_ACTIVE;
            STATE_WRITING:    if (timer == 0) next_state = STATE_ACTIVE;
            STATE_PRECHARGING: if (timer == 0) next_state = STATE_IDLE;
            STATE_REFRESHING: if (timer == 0) next_state = STATE_IDLE;
            default:          next_state = STATE_IDLE;
        endcase
    end

    // ============================================
    // Data Output (from memory to DQ)
    // ============================================
    logic [31:0] read_data;
    logic [10:0] col_addr;

    always_comb begin
        col_addr = cmd_addr[10:0];  // Column address
    end

    // Memory read — load data as soon as READ command is detected
    always_ff @(posedge clk) begin
        if (state_machine == STATE_ACTIVE && timer == 1 && cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && cmd_we_n) begin
            automatic integer mem_idx = {bank_addr_reg, open_row[bank_addr_reg], col_addr};
            read_data <= mem[mem_idx];
        end
    end

    // Memory write - capture DQ during write state
    logic [DQ_WIDTH-1:0] write_data;
    logic [10:0] write_col_addr;
    always_ff @(posedge clk) begin
        if (state_machine == STATE_WRITING && timer >= 2) begin
            write_data <= ddr_dq;
            write_col_addr <= col_addr;
        end
        if (state_machine == STATE_WRITING && timer == 2) begin
            automatic integer mem_idx = {bank_addr_reg, open_row[bank_addr_reg], write_col_addr};
            mem[mem_idx] <= write_data;
        end
    end

    // DQ output enable — active during READING state
    logic read_pending;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) read_pending <= 1'b0;
        else if (state_machine == STATE_ACTIVE && timer == 1 && cmd_valid && cmd_act_n && cmd_ras_n && !cmd_cas_n && cmd_we_n)
            read_pending <= 1'b1;
        else if (state_machine == STATE_IDLE)
            read_pending <= 1'b0;
    end
    assign dq_out_en = (state_machine == STATE_READING) || read_pending;
    assign dq_out = read_data;

    // ============================================
    // Bidirectional DQ
    // ============================================
    genvar i;
    generate
        for (i = 0; i < DQ_WIDTH; i++) begin : gen_dq
            assign ddr_dq[i] = dq_out_en ? dq_out[i] : 1'bZ;
        end
    endgenerate

    // DQS output (simplified - just toggle with clock)
    assign dqs_out_en = dq_out_en;
    assign ddr_dqs = dqs_out_en ? 4'b1111 : 4'hZ;
    assign ddr_dqs_n = ~ddr_dqs;

    // ============================================
    // Status Output
    // ============================================
    assign state = state_machine;
    assign init_done = (state_machine == STATE_IDLE);

endmodule