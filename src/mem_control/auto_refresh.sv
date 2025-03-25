module auto_refresh #(
    parameter int BANK_GROUPS = 2,
    parameter int BANKS_PER_GROUP = 4,
    parameter int ROW_BITS = 8,
    parameter int ACTIVATION_LATENCY = 8,
    parameter int PRECHARGE_LATENCY = 5, 
    parameter int REFRESH_LATENCY = ACTIVATION_LATENCY + PRECHARGE_LATENCY,
    parameter int BANKS = BANK_GROUPS * BANKS_PER_GROUP,
    parameter int REFRESH_INTERVAL = 64_000_000
) (
    input logic clk_in,
    input logic rst_in,
    output logic [$clog2(BANK_GROUPS)-1:0] bank_group_out,
    output logic [$clog2(BANKS_PER_GROUP)-1:0] bank_out,
    output logic [ROW_BITS-1:0] row_out,
    output logic valid_out
);
    // Derived parameters
    localparam BANK_BITS = $clog2(BANKS_PER_GROUP);
    localparam BANK_GRP_BITS = $clog2(BANK_GROUPS);
    localparam REFRESH_COUNTER_WIDTH = $clog2(REFRESH_INTERVAL);

    // State variables
    logic [REFRESH_COUNTER_WIDTH-1:0] refresh_counter;
    logic [ROW_BITS-1:0] current_row;
    logic [BANK_BITS-1:0] current_bank;
    logic [BANK_GRP_BITS-1:0] current_bank_group;
    logic refresh_in_progress;
    logic [3:0] refresh_stage;

    // Refresh state machine
    always_ff @(posedge clk_in or posedge rst_in) begin
        if (rst_in) begin
            // Reset all state
            refresh_counter <= '0;
            current_row <= '0;
            current_bank <= '0;
            current_bank_group <= '0;
            refresh_in_progress <= '0;
            refresh_stage <= '0;
        end else begin
            // Increment refresh counter
            if (refresh_counter == {(REFRESH_INTERVAL - 1)}[$clog2(REFRESH_INTERVAL)-1:0]) begin
                refresh_counter <= '0;
                refresh_in_progress <= 1'b1;
                current_row <= '0;
                current_bank <= '0;
                current_bank_group <= '0;
            end else begin
                refresh_counter <= refresh_counter + 1;
            end

            // Refresh sequence management
            if (refresh_in_progress) begin
                refresh_stage <= refresh_stage + 1;

                // Cycle through all banks and rows
                if (refresh_stage == 4'hF) begin  // Last stage of refresh
                    if (current_row == {ROW_BITS{1'b1}}) begin
                        if (current_bank_group == {(BANK_GROUPS - 1)}[$clog2(BANK_GROUPS)-1:0]) begin
                            refresh_in_progress <= 1'b0;
                            refresh_stage <= '0;
                        end else begin
                            current_bank_group <= current_bank_group + 1;
                            current_bank <= '0;
                            current_row <= '0;
                        end
                    end else if (current_bank == {(BANKS_PER_GROUP - 1)}[$clog2(BANKS_PER_GROUP)-1:0]) begin
                        current_bank <= '0;
                        current_row <= current_row + 1;
                    end else begin
                        current_bank <= current_bank + 1;
                    end
                end
            end
        end
    end

    // Output generation
    always_comb begin
        valid_out = refresh_in_progress && (refresh_stage < 4'hC);
        row_out = current_row;
        bank_out = current_bank;
        bank_group_out = current_bank_group;
    end

endmodule: auto_refresh