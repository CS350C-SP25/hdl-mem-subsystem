module last_level_cache #(
    parameter int A = 8,
    parameter int B = 64,
    parameter int C = 16384
) (
    // Regular signals
    input logic rst_N_in,
    input logic cs_N_in,  // chip select, active-low
    input logic clk_in,  // clk input
    // Inputs from l1d
    input logic l1d_ready_in,  // LLC ready to receive info. This may always be ready
    input logic l1d_valid_in,  // LLC info is valid
    input logic [63:0] l1d_addr_in,  // addr or value out depending on miss or hit
    input logic [63:0] l1d_value_in,  // addr or value out depending on miss or hit
    // Inputs from dram
    input logic dram_ready_in,  // DRAM is ready to receive info
    input logic dram_valid_in,  // DRAM data is ready for LLC to consume
    input logic [63:0] dram_value_in,  // Load returned from DRAM
    // Outputs to DRAM
    output logic cs_N_in,  // chip select. active low
    output logic ras_N_in,  // row address strobe. active low.
    output logic cas_N_in,  // column address strobe. active low.
    output logic we_N_in,  // write enable. active low.
    output logic [$clog2(BANKS)-1:0] bank,
    // Outputs to L1D
    output logic hit_out,  // hit or miss
    output data_t data_out,  // addr or value out depending on miss or hit
    output logic ready_out,  // Ready to receive inputs
    output logic l1d_valid  // Outputs are valid
);
    // You may reuse the cache module that the L1D team will work on
    // Your main task will be handling a miss and talking to the DIMM
endmodule : last_level_cache

// You may choose to make this DDR4 controller as a separate module which is
// used by your LLC, or you may choose to delete the below declaration include
// the design in the LLC module.
module ddr4_controller #() ();

endmodule : ddr4_controller
