// A DIMM (Dual In-Line Memory Module) All input control signals are active low
// A useful link About DRAM:
// Onur Mutlu Lecture: https://www.youtube.com/watch?v=icyliEdf0x0
// https://www.systemverilog.io/design/ddr4-basics/

module ddr4_dimm #(
    // Column-address strobe latency. Delay in cycles between read request and data being ready
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,
    parameter int COL_BITS = 4,
    parameter int BANKS = 8,
    parameter int REFRESH_CYCLE = 5120
) (
    // No need for a reset on a DIMM.
    input logic clk_in,
    input logic cs_N_in,  // chip select. active low
    input logic ras_N_in,  // row address strobe. active low.
    input logic cas_N_in,  // column address strobe. active low.
    input logic we_N_in,  // write enable. active low.
    input logic [$clog2(BANKS)-1:0] bank,
    // There is no ready_in because the LLC should always be ready to receive DRAM input. The DIMM will not block.
    input logic ready_in,  // LLC ready to receive info. Expected that this
    input logic valid_in,  // LLC info is valid
    input logic [ROWS-1:0] addr,  // row / column selector. Must be sent on separate cycles.
    output logic ready_out,  // DRAM is ready to receive info
    output logic valid_out,  // DRAM data is ready for LLC to consume
    output logic [63:0] value  // D
);
    // Process these signals and return the correct data to the LLC
endmodule : ddr4_dimm

// The following modules are provided as suggestions. Change them as you see fit.

module sdram_chip #(
    // x16 DRAM. We can read 16b from the row buffer at once, and need four chips for a full read.
    parameter int BUS_WIDTH = 16,  // bus width per chip.
    parameter int BANKS = 8,  // banks per group
    parameter int ROW_BITS = 8,  // rows per bank
    parameter int COL_BITS = 4  // cols per bank
) ();
    // Have a bank group with multiple banks to increase efficiency
endmodule : sdram_chip

module sdram_bank #(
    parameter int ROW_BITS = 8,  // rows per bank
    parameter int COL_BITS = 4   // cols per bank
) ();
    // Inlcude a sense amplifier (aka row buffer) here
endmodule : sdram_bank
