// tb meant to ensure connection between caches work
module l1d_llc_tb (
    // Input signals
    input logic clk,
    input logic rst_N,

    // L1D cache interface inputs
    input logic l1d_cs_N_in,
    input logic l1d_flush_in,
    input logic l1d_lsu_valid_in,
    input logic l1d_lsu_ready_in,
    input logic [63:0] l1d_lsu_addr_in,
    input logic [63:0] l1d_lsu_value_in,
    input logic [9:0] l1d_lsu_tag_in,
    input logic l1d_lsu_we_in,
    
    // L1D cache interface outputs
    output logic l1d_lsu_valid_out,
    output logic l1d_lsu_ready_out,
    output logic [63:0] l1d_lsu_addr_out,
    output logic [63:0] l1d_lsu_value_out,
    output logic l1d_lsu_write_complete_out,

    // LLC interface inputs
    input logic llc_cs_in,
    input logic llc_flush_in,
    input logic llc_hc_valid_in,
    input logic llc_hc_ready_in,
    input logic [18:0] llc_hc_addr_in,
    input logic [63:0] llc_hc_value_in,
    input logic llc_hc_we_in,
    input logic [511:0] llc_hc_line_in
);

    // Internal signals for L1D-LLC communication
    logic l1d_lc_valid_out, l1d_lc_ready_out;
    logic [18:0] l1d_lc_addr_out;
    logic [511:0] l1d_lc_value_out;
    logic llc_hc_valid_out, llc_hc_ready_out;
    logic [18:0] llc_hc_addr_out;
    logic [511:0] llc_hc_line_out;

    // L1D Cache instantiation
    l1_data_cache #(
        .A(3),
        .B(64),
        .C(1536),
        .PADDR_BITS(19),
        .MSHR_COUNT(4),
        .TAG_BITS(10)
    ) l1d (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_N_in(l1d_cs_N_in),
        .flush_in(l1d_flush_in),
        .lsu_valid_in(l1d_lsu_valid_in),
        .lsu_ready_in(l1d_lsu_ready_in),
        .lsu_addr_in(l1d_lsu_addr_in),
        .lsu_value_in(l1d_lsu_value_in),
        .lsu_tag_in(l1d_lsu_tag_in),
        .lsu_we_in(l1d_lsu_we_in),
        .lsu_valid_out(l1d_lsu_valid_out),
        .lsu_ready_out(l1d_lsu_ready_out),
        .lsu_addr_out(l1d_lsu_addr_out),
        .lsu_value_out(l1d_lsu_value_out),
        .lsu_write_complete_out(l1d_lsu_write_complete_out),
        .lc_ready_in(llc_hc_ready_out),
        .lc_valid_in(llc_hc_valid_out),
        .lc_addr_in(llc_hc_addr_out),
        .lc_value_in(llc_hc_line_out),
        .lc_valid_out(l1d_lc_valid_out),
        .lc_ready_out(l1d_lc_ready_out),
        .lc_addr_out(l1d_lc_addr_out),
        .lc_value_out(l1d_lc_value_out)
    );

    // Last Level Cache instantiation
    last_level_cache #(
        .A(8),
        .B(64),
        .C(16384),
        .PADDR_BITS(19),
        .W(64),
        .CAS_LATENCY(22),
        .ACTIVATION_LATENCY(8),
        .PRECHARGE_LATENCY(5),
        .ROW_BITS(8),
        .COL_BITS(4),
        .BUS_WIDTH(16),
        .BANK_GROUPS(2),
        .BANKS_PER_GROUP(4)
    ) llc (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_in(llc_cs_in),
        .flush_in(llc_flush_in),
        .hc_valid_in(l1d_lc_valid_out),
        .hc_ready_in(l1d_lc_ready_out),
        .hc_addr_in(l1d_lc_addr_out),
        .hc_value_in(l1d_lc_value_out),
        .hc_we_in(1'b0),  // Set based on actual requirements
        .hc_line_in(l1d_lc_value_out),
        .hc_valid_out(llc_hc_valid_out),
        .hc_ready_out(llc_hc_ready_out),
        .hc_addr_out(llc_hc_addr_out),
        .hc_line_out(llc_hc_line_out)
    );

endmodule
