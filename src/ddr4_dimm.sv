// A DIMM (Dual In-Line Memory Module) All input control signals are active low
// This is close to an accurate model of a DDR4 SDRAM DIMM. Some minor
// modifications were made to make it simulatable with hopefully decent
// performance.

// A useful link About DRAM:
// A simple DDR controller: https://www.systemverilog.io/design/ddr4-basics/
// Onur Mutlu Lecture on DRAM: https://www.youtube.com/watch?v=icyliEdf0x0
// The official DRAM spec: https://www.jedec.org/sites/default/files/docs/JESD79-4D.pdf

// Real DDR4 uses a differential clock input. However, there's no real use in
// modeling this for our purposes - differential signals have use with analog
// circuitry, but we're modeling DRAM digitally.

// The WIDTH parameter is the width of a read of a single dram chip. It can be
// 16,8, or 4. Each chip typically serves a different range of the data bus
// (data bus is a part of the memory bus). The number of banks groups in a DDR4
// chip is determined by its width.

// Though the number of address wires (for rows or columns) are fixed for DDR4
// DRAM, in this assignment in this assignment, we will use a parameterizable
// number of rows/columns, so that we don't need to use too much memory while
// simulating (or synthesizing). The number of wires remains the same, but some
// will go unused.

// An SDRAM DIMM has no valid/ready information. Data is expected exactly
// CAS_LATENCY cycles after it is activated.

// DRAM does not wait or stall.
module ddr4_dimm #(
    parameter int CAS_LATENCY = 22,  // latency in cycles to get a response from DRAM
    parameter int ACTIVATION_LATENCY = 8,  // latency in cycles to activate row buffer
    parameter int PRECHARGE_LATENCY = 5,  // latency in cycles to precharge (clear row buffer)
    parameter int ROW_BITS = 8,  // log2(ROWS)
    parameter int COL_BITS = 4,  // log2(COLS)
    parameter int WIDTH = 16,
    parameter int REFRESH_CYCLE = 5120
) (
    // Generic
    input logic clk_in,
    input logic rst_N_in,  // reset FSMs
    input logic cs_N_in,  // chip select. active low
    // SDRAM specific inputs from memory bus
    input logic cke_in,  // Clock enable
    // note: addr_in[16:15:14] = { ras_n_in, cas_n_in, we_n_in }
    input logic act_in,  // Activate dram inputs
    input logic [16:0] addr_in,  // row/col. Needs two cycles.
    input logic [1:0] bg_in,  // Bank group id
    input logic [1:0] ba_in,  // Bank id
    input logic [63:0] dqm_in,  // Data mask in. Set to one to block masks
    // InOut with SDRAM controller
    inout logic [63:0] dqs  // Data ins / outs (from all dram chips)
);
    // Process these signals and return the correct data to the LLC
endmodule : ddr4_dimm

// The following modules are provided as suggestions. Change them as you see fit.

module ddr4_sdram_chip #(
    // x16 DRAM. We can read 16b from the row buffer at once, and need four chips for a full read.
    parameter int WIDTH = 16,  // bus width per chip.
    parameter int BANKS = 8,  // banks per group
    parameter int ROW_BITS = 8,  // rows per bank
    parameter int COL_BITS = 4  // cols per bank
) (
    // Generic
    input logic clk_in,
    input logic rst_N_in,  // reset FSMs
    input logic cs_N_in,  // chip select. active low
    // SDRAM specific inputs from memory bus
    input logic cke_in,  // Clock enable
    // note: addr_in[16:15:14] = { ras_n_in, cas_n_in, we_n_in }
    input logic act_in,  // Activate dram inputs
    input logic [16:0] addr_in,  // row/col. Needs two cycles.
    input logic [1:0] bg_in,  // Bank group id
    input logic [1:0] ba_in,  // Bank id
    input logic [WIDTH-1:0] dqm_in,  // Data mask in. Set to one to block masks
    input logic ready_in,  // LLC ready to receive info. Expected that this
    input logic valid_in,  // LLC info is valid
    // InOut with SDRAM controller
    inout logic [WIDTH-1:0] dqs  // Data in / out
);
    // Have a bank group with multiple banks to increase efficiency
endmodule : ddr4_sdram_chip

module sdram_bank #(
    parameter int ROW_BITS = 8,  // rows per bank
    parameter int COL_BITS = 4   // cols per bank
) ();
    // Inlcude a sense amplifier (aka row buffer) here
endmodule : sdram_bank
