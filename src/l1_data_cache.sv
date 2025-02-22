import types::*;

// The L1 data cache PIPT
module l1_data_cache #(
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int MSHR_COUNT = 4  // Miss Status Handler Registers
) (
    input logic clk_in,
    input logic rst_N_in,
    input logic cs_in,  // Chip Select (aka. enable)
    input logic valid_in,  // from LSU / prev level cache
    input logic lc_ready_in,  // lower level cache is ready (lower is slower)
    input logic lsu_ready_in,  // Even though we never block going down, protocol still used
    input data_t data_in,  // either addr from LSu or value from higher cache
    output logic valid_out,  // data is ready for either lsu or next level cache
    output logic ready_out,  // ready to receive input
    output logic hit_out,  // hit or miss
    output data_t data_out  // addr or value out depending on miss or hit
);
    // Write the cache module
    // You will definitely want to use the MMU to translate virtual to physical addresses
    cache #() l1d_cache ();
endmodule : l1_data_cache
