// LPDDR4 Training Sequence Controller
`timescale 1ns / 1ps

module lpddr4_training (
    input  logic        clk,
    input  logic        clk_4x,
    input  logic        rst_n,

    // DFI interface
    input  logic [1:0]  dfi_cs_n,
    input  logic [9:0]  dfi_ca,
    input  logic        dfi_wrdata_en,
    output logic [31:0] dfi_wrdata,

    // Read data
    input  logic [31:0] dfi_rddata,
    input  logic        dfi_rddata_en,

    // Training control
    input  logic        training_start,
    input  logic [3:0]  training_type,
    output logic [7:0]  training_status,
    output logic        training_done,
    output logic        training_fail,

    // Calibrated delays
    output logic [7:0]  wl_delay,     // Write leveling
    output logic [7:0]  gate_delay,    // Read gate
    output logic [7:0]  rd_delay,     // Read data
    output logic [7:0]  wr_delay,     // Write data
    output logic [7:0]  ca_delay      // CA
);
    import lpddr4_pkg::*;

    training_state_t state, next_state;

    // Pattern generators
    logic [31:0] prbs_data;
    logic [31:0] mpr_data;
    logic [31:0] compare_data;

    // Result storage
    logic [7:0]  pass_count;
    logic [7:0]  fail_count;
    logic [7:0]  best_delay;
    logic        best_found;

    // Delay sweep
    logic [7:0]  current_delay;
    logic [7:0]  delay_max;
    logic [7:0]  delay_step;

    // Compare result
    logic        cmp_match;
    logic        cmp_valid;

    // Training patterns
    localparam PATTERN_MPR    = 4'h0;
    localparam PATTERN_WL     = 4'h1;
    localparam PATTERN_GATE   = 4'h2;
    localparam PATTERN_WR     = 4'h3;
    localparam PATTERN_RD     = 4'h4;
    localparam PATTERN_CA     = 4'h5;

    // State machine
    always_ff @(posedge clk) begin
        if (!rst_n)
            state <= TRN_IDLE;
        else
            state <= next_state;
    end

    always_comb begin
        next_state = state;
        case (state)
            TRN_IDLE: begin
                if (training_start)
                    next_state = TRN_WL_SETUP;
            end

            TRN_WL_SETUP: begin
                next_state = TRN_WL_UPDATE;
            end

            TRN_WL_UPDATE: begin
                next_state = TRN_WL_CHECK;
            end

            TRN_WL_CHECK: begin
                if (cmp_valid) begin
                    if (cmp_match && best_found)
                        next_state = TRN_IDLE;
                    else if (current_delay >= delay_max)
                        next_state = TRN_IDLE;
                    else
                        next_state = TRN_WL_UPDATE;
                end
            end

            TRN_GATE_SETUP: begin
                next_state = TRN_GATE_UPDATE;
            end

            TRN_GATE_UPDATE: begin
                next_state = TRN_GATE_CHECK;
            end

            TRN_GATE_CHECK: begin
                if (cmp_valid) begin
                    if (cmp_match && best_found)
                        next_state = TRN_IDLE;
                    else if (current_delay >= delay_max)
                        next_state = TRN_IDLE;
                    else
                        next_state = TRN_GATE_UPDATE;
                end
            end

            TRN_RD_SETUP: begin
                next_state = TRN_RD_UPDATE;
            end

            TRN_RD_UPDATE: begin
                next_state = TRN_RD_CHECK;
            end

            TRN_RD_CHECK: begin
                if (cmp_valid) begin
                    if (cmp_match && best_found)
                        next_state = TRN_IDLE;
                    else if (current_delay >= delay_max)
                        next_state = TRN_IDLE;
                    else
                        next_state = TRN_RD_UPDATE;
                end
            end

            TRN_WR_SETUP: begin
                next_state = TRN_WR_UPDATE;
            end

            TRN_WR_UPDATE: begin
                next_state = TRN_WR_CHECK;
            end

            TRN_WR_CHECK: begin
                if (cmp_valid) begin
                    if (cmp_match && best_found)
                        next_state = TRN_IDLE;
                    else if (current_delay >= delay_max)
                        next_state = TRN_IDLE;
                    else
                        next_state = TRN_WR_UPDATE;
                end
            end

            default: next_state = TRN_IDLE;
        endcase
    end

    // MPR pattern (0101...)
    assign mpr_data = 32'h5555_5555;

    // PRBS generator
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            prbs_data <= 32'hA5A5_A5A5;
        end else begin
            logic feedback = prbs_data[30] ^ prbs_data[0];
            prbs_data <= {feedback, prbs_data[31:1]};
        end
    end

    // Compare logic
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            compare_data <= 32'h0;
            cmp_valid <= 1'b0;
        end else begin
            cmp_valid <= 1'b0;
            if (dfi_rddata_en) begin
                compare_data <= dfi_rddata;
                cmp_valid <= 1'b1;
            end
        end
    end

    always_comb begin
        cmp_match = 1'b0;
        if (cmp_valid) begin
            case (training_type)
                PATTERN_MPR: begin
                    cmp_match = (compare_data == mpr_data);
                end
                PATTERN_WL: begin
                    cmp_match = (compare_data == prbs_data);
                end
                PATTERN_GATE: begin
                    cmp_match = (|compare_data != 1'b0);
                end
                default: begin
                    cmp_match = (compare_data == prbs_data);
                end
            endcase
        end
    end

    // Training control
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            current_delay <= 8'h0;
            delay_max <= 8'hFF;
            pass_count <= 8'h0;
            fail_count <= 8'h0;
            best_delay <= 8'h0;
            best_found <= 1'b0;
            wl_delay <= 8'h20;
            gate_delay <= 8'h20;
            rd_delay <= 8'h20;
            wr_delay <= 8'h20;
            ca_delay <= 8'h20;
        end else begin
            case (state)
                TRN_IDLE: begin
                    current_delay <= 8'h0;
                    pass_count <= 8'h0;
                    fail_count <= 8'h0;
                    best_found <= 1'b0;
                end

                TRN_WL_SETUP,
                TRN_GATE_SETUP,
                TRN_RD_SETUP,
                TRN_WR_SETUP: begin
                    current_delay <= 8'h0;
                end

                TRN_WL_CHECK,
                TRN_GATE_CHECK,
                TRN_RD_CHECK,
                TRN_WR_CHECK: begin
                    if (cmp_valid) begin
                        if (cmp_match) begin
                            pass_count <= pass_count + 1;
                            if (pass_count >= 8'h04 && !best_found) begin
                                best_delay <= current_delay;
                                best_found <= 1'b1;
                            end
                        end else begin
                            fail_count <= fail_count + 1;
                            if (best_found)
                                best_found <= 1'b0;
                        end
                        current_delay <= current_delay + delay_step;
                    end
                end

                default: begin
                    current_delay <= current_delay + delay_step;
                end
            endcase
        end
    end

    // Generate training commands via DFI
    assign dfi_wrdata = prbs_data;

    // Status outputs
    assign training_status = {state, best_found, pass_count[7:4]};
    assign training_done = (state == TRN_IDLE) && training_start;
    assign training_fail = (fail_count > 8'h10);

endmodule