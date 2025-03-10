module sdram_bank_state #(
    parameter ROW_WIDTH = 14, // Number of bits to address rows (e.g., 14 bits for 16k rows)
    parameter NUM_GROUPS = 2, // Number of bank groups
    parameter BANKS_PER_GROUP = 2, // Number of banks per group
    parameter BANKS = NUM_GROUPS * BANKS_PER_GROUP, // Total number of banks
    parameter ACTIVATION_LATENCY = 8,
    parameter PRECHARGE_LATENCY = 5,
    type bank_row_t = logic
)(
    input logic clk,               // Clock
    input logic rst,               // Reset
    input logic [BANKS-1:0] precharge,    // Precharge signal for each bank (1: precharge, 0: no precharge)
    input logic [BANKS-1:0] activate,     // Activate signal for each bank (1: activate, 0: no activate)
    input bank_row_t row_address, // Row address to activate
    output bank_row_t [BANKS-1:0] active_row_out,  // Active row for a selected bank
    output logic [BANKS-1:0] ready_to_access, // Bank ready to access (not in precharge)
    output logic [BANKS-1:0] active_bank,      // Bank currently active (activated but not precharged)
    output logic [BANKS-1:0] blocked          // Bank is blocked (precharging)
);

    // States for each bank
    bank_row_t [BANKS-1:0] active_row;  // Active row address for each bank
    logic [BANKS-1:0] active; // Active flag for each bank
    logic [BANKS-1:0] ready; // Ready flag for each bank (not in precharge)
    logic [BANKS-1:0] blocked_reg; // Internal flag for blocked banks (precharging)
    logic [BANKS-1:0] [31:0] cycle_count; // Cycle count for each bank

    // Handle bank state updates on each clock cycle
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            // Reset all states to initial values
            active <= {BANKS{1'b0}};
            ready <= {BANKS{1'b1}}; // All banks are initially ready (not in precharge)
            blocked_reg <= {BANKS{1'b0}}; // No banks are blocked initially
            cycle_count <= {BANKS{32'b0}}; // Initialize cycle counts to 0
        end else begin
            // For each bank, handle precharge, activation, and data request
            for (int i = 0; i < BANKS; i++) begin
                if (blocked_reg[i]) begin
                    // If the bank is blocked (precharging), check if latency is expired
                    if (cycle_count[i] == 0) begin
                        // Unblock the bank after the latency period has passed
                        blocked_reg[i] <= 0;
                        ready[i] <= 1; // Bank is now ready
                    end else begin
                        // Keep the bank blocked and increment the cycle count
                        cycle_count[i] <= cycle_count[i] - 1;
                    end
                end else if (precharge[i]) begin
                    // Precharge operation: block the bank and reset cycle count
                    blocked_reg[i] <= 1;
                    cycle_count[i] <= PRECHARGE_LATENCY; // Start counting cycles for precharge latency
                    active[i] <= 0;
                    ready[i] <= 0; // Bank is not ready during precharge
                end else if (activate[i]) begin
                    // Activate operation: store the row address and mark the bank as active
                    active_row[i] <= row_address;
                    blocked_reg[i] <= 1;
                    cycle_count[i] <= ACTIVATION_LATENCY;
                    active[i] <= 1; // Bank is active
                    ready[i] <= 0;  // Bank is not ready during activation
                end
            end
        end
    end

    // Outputs for each bank and group
    assign active_row_out = active_row; // Example output, can modify based on the active bank/group selection
    assign ready_to_access = ready;        // Ready to access signals for each bank
    assign active_bank = active;          // Active bank signals
    assign blocked = blocked_reg;         // Output the blocked state for each bank

endmodule