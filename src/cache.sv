import types::*;

// A cache with nothing else to it.
module cache #(
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int W = 64
) (
    input logic rst_N_in,  // can also serve as a flush
    input logic clk_in,
    input logic cs_in,  // Chip Select (aka. enable)
    input logic valid_in,  // from LSU / prev level cache
    input logic ready_in,  // from higher / dram level cache
    input logic [W-1:0] in_addr,
    output logic valid_out,  // data is ready
    output logic ready_out,
    output logic hit_out,  // hit or miss
    output data_t data_out  // addr or value out
);
    // TODO(L1 Cache Team): Implement a cache like this.
endmodule : cache
