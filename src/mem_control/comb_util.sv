// Utility combinational logic for mem scheduler

// Address mapping strategy:
// Lower bits: Column address (for row buffer locality)
// Middle bits: Bank/Bank Group (for parallelism)
// Upper bits: Row address
module address_parser #(
    parameter int ROW_BITS = 8,
    parameter int COL_BITS = 4,
    parameter int PADDR_BITS = 19,
    parameter int BANK_GROUPS = 4,
    parameter int BANKS_PER_GROUP = 2
) (
    input  logic [PADDR_BITS-1:0] mem_bus_addr_in,
    output logic [ROW_BITS-1:0] row_out,
    output logic [COL_BITS-1:0] col_out,
    output logic [$clog2(BANK_GROUPS)-1:0] bg_out,     // Bank group id
    output logic [$clog2(BANKS_PER_GROUP)-1:0] ba_out      // Bank id
);
    localparam BANK_BITS = $clog2(BANKS_PER_GROUP);
    localparam BANK_GRP_BITS = $clog2(BANK_GROUPS);
    localparam LOWER_BITS = COL_BITS+BANK_BITS+BANK_GRP_BITS;

    always_comb begin
        col_out = mem_bus_addr_in[COL_BITS-1:0];
        ba_out = mem_bus_addr_in[COL_BITS+BANK_BITS-1:COL_BITS];
        bg_out = mem_bus_addr_in[LOWER_BITS-1:COL_BITS+BANK_BITS];
        row_out = mem_bus_addr_in[LOWER_BITS+ROW_BITS-1:LOWER_BITS];
    end
endmodule