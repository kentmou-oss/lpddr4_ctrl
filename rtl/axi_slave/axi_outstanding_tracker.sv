// AXI Outstanding Transaction Tracker
// Tracks pending read/write transactions per ID
// Supports 32 outstanding reads and 16 outstanding writes
`timescale 1ns / 1ps

module axi_outstanding_tracker #(
    parameter NUM_READ_IDS  = 32,
    parameter NUM_WRITE_IDS = 16
) (
    input  logic        clk,
    input  logic        rst_n,

    // Read transaction tracking
    input  logic [4:0]  arid_in,       // Read address ID
    input  logic        arid_valid,    // Read address valid
    input  logic        arid_complete, // Read transaction complete

    // Write transaction tracking
    input  logic [3:0]  awid_in,       // Write address ID
    input  logic        awid_valid,    // Write address valid
    input  logic        awid_complete, // Write transaction complete

    // Status outputs
    output logic        read_full,     // No more read slots available
    output logic        write_full     // No more write slots available
);

    // Outstanding counters - 5 bits to count up to 32
    logic [4:0] read_count  [NUM_READ_IDS];
    logic [4:0] write_count [NUM_WRITE_IDS];

    // Track read outstanding
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < NUM_READ_IDS; i++) begin
                read_count[i] <= '0;
            end
        end else begin
            // Increment on new read transaction
            if (arid_valid && !read_full) begin
                read_count[arid_in] <= read_count[arid_in] + 1'b1;
            end
            // Decrement on read completion
            if (arid_complete) begin
                read_count[arid_in] <= read_count[arid_in] - 1'b1;
            end
        end
    end

    // Track write outstanding
    always_ff @(posedge clk) begin
        if (!rst_n) begin
            for (int i = 0; i < NUM_WRITE_IDS; i++) begin
                write_count[i] <= '0;
            end
        end else begin
            // Increment on new write transaction
            if (awid_valid && !write_full) begin
                write_count[awid_in] <= write_count[awid_in] + 1'b1;
            end
            // Decrement on write completion
            if (awid_complete) begin
                write_count[awid_in] <= write_count[awid_in] - 1'b1;
            end
        end
    end

    // Full signals when any ID reaches max outstanding
    assign read_full  = |(read_count >= (NUM_READ_IDS - 1));
    assign write_full = |(write_count >= (NUM_WRITE_IDS - 1));

endmodule