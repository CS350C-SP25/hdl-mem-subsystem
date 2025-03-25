/* missing pins:

lc_we_out
hc_cl_in
hc_value_out
mem_bus_ready_in
mem_bus_valid_in
mem_bus_value_io
mem_bus_addr_out
mem_bus_ready_out
mem_bus_valid_out
l1d_lc_valid_out
l1d_lc_ready_out
l1d_lc_addr_out
l1d_lc_value_out
llc_hc_valid_out
llc_hc_ready_out
llc_hc_addr_out
llc_hc_line_out
hc_line_out

THIS MODULE TESTS:
L1D, LLC, DIMM, DDR4

*/

module l1d_llc_tb (
    // Input signals
    input logic clk,
    input logic rst_N,
    input logic cs_in,
    input logic flush_in,
    // L1D LSU interface inputs
    input logic lsu_valid_in,
    input logic lsu_ready_in,
    input logic [63:0] lsu_addr_in,
    input logic [63:0] lsu_value_in,
    input logic [9:0] lsu_tag_in,  // TAG_BITS-1:0
    input logic lsu_we_in,
    // L1D LSU interface outputs
    output logic lsu_valid_out,
    output logic lsu_ready_out,
    output logic [63:0] lsu_addr_out,
    output logic [63:0] lsu_value_out,
    output logic lsu_write_complete_out
);
    
    // Internal signals connecting LLC to DIMM
    logic cs_N;
    logic cke;
    logic act;
    logic [16:0] addr;
    logic [1:0] bg;
    logic [1:0] ba;
    logic [63:0] dqm;
    
    // Memory bus signals (internal between LLC and DIMM)
    logic mem_bus_ready_in;
    logic mem_bus_valid_in;
    logic [63:0] mem_bus_value_io;
    logic [18:0] mem_bus_addr_out;
    logic mem_bus_ready_out;
    logic mem_bus_valid_out;
    logic cs = 1'b1;
    
    // Intermediate signals between L1D and LLC
    logic l1d_lc_valid_out;  // L1D -> LLC valid
    logic l1d_lc_ready_out;  // L1D -> LLC ready
    logic [18:0] l1d_lc_addr_out;  // L1D -> LLC address
    logic [511:0] l1d_lc_value_out;  // L1D -> LLC value (8*B-1:0 = 8*64-1:0)
    logic l1d_lc_we_out;  // L1D -> LLC write enable
    logic llc_hc_cl_out;  // L1D -> LLC cache line valid
    
    logic llc_hc_valid_out;  // LLC -> L1D valid
    logic llc_hc_ready_out;  // LLC -> L1D ready
    logic [18:0] llc_hc_addr_out;  // LLC -> L1D address
    logic [63:0] llc_hc_value_out;  // LLC -> L1D value
    logic [511:0] llc_hc_line_out;  // LLC -> L1D cache line
    
    
    // Test control
    bit test_done;
    int test_count;

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
        .cs_N_in(cs_in),
        .flush_in(flush_in),
        .lsu_valid_in(lsu_valid_in),
        .lsu_ready_in(lsu_ready_in),
        .lsu_addr_in(lsu_addr_in),
        .lsu_value_in(lsu_value_in),
        .lsu_tag_in(lsu_tag_in),
        .lsu_we_in(lsu_we_in),
        .lsu_valid_out(lsu_valid_out),
        .lsu_ready_out(lsu_ready_out),
        .lsu_addr_out(lsu_addr_out),
        .lsu_value_out(lsu_value_out),
        .lsu_write_complete_out(lsu_write_complete_out),
        .lc_ready_in(llc_hc_ready_out),
        .lc_valid_in(llc_hc_valid_out),
        .lc_addr_in(llc_hc_addr_out),
        .lc_value_in(llc_hc_value_out),
        .lc_valid_out(l1d_lc_valid_out),
        .lc_ready_out(l1d_lc_ready_out),
        .lc_addr_out(l1d_lc_addr_out),
        .lc_value_out(l1d_lc_value_out),
        .lc_we_out(l1d_lc_we_out)
    );
    
    // DUT instances
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
        .cs_in(cs_in),
        .flush_in(flush_in),
        .hc_valid_in(l1d_lc_valid_out),
        .hc_ready_in(l1d_lc_ready_out),
        .hc_addr_in(l1d_lc_addr_out),
        .hc_value_in(lsu_value_in),
        .hc_we_in(l1d_lc_we_out),
        .hc_line_in(l1d_lc_value_out),  // Not used in this test
        .hc_cl_in(1'b0),  // Not used in this test
        .hc_ready_out(llc_hc_ready_out),
        .hc_valid_out(llc_hc_valid_out),
        .hc_addr_out(llc_hc_addr_out),
        .hc_value_out(llc_hc_value_out),
        .mem_bus_ready_in(mem_bus_ready_in),
        .mem_bus_valid_in(mem_bus_valid_in),
        .mem_bus_value_io(mem_bus_value_io),
        .mem_bus_addr_out(mem_bus_addr_out),
        .mem_bus_ready_out(mem_bus_ready_out),
        .mem_bus_valid_out(mem_bus_valid_out)
    );
    
    ddr4_dimm #(
        .CAS_LATENCY(22),
        .ACTIVATION_LATENCY(8),
        .PRECHARGE_LATENCY(5),
        .ROW_BITS(8),
        .COL_BITS(4),
        .WIDTH(16),
        .REFRESH_CYCLE(5120)
    ) dimm (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_N_in(cs_N),
        .cke_in(cke),
        .act_in(act),
        .addr_in(addr),
        .bg_in(bg),
        .ba_in(ba),
        .dqm_in(dqm),
        .dqs(mem_bus_value_io)
    );

    always_comb begin
        cs_N = mem_bus_addr_out[18];
        act = mem_bus_addr_out[17];
        addr = mem_bus_addr_out[16:0];
        bg = {1'b0, mem_bus_addr_out[13]};
        ba = mem_bus_addr_out[12:11];
        dqm = '0;
    end

    always_ff @(posedge clk) begin
        if (llc_hc_ready_out) begin
            $display("HC_READY_OUT %b", llc_hc_ready_out);
        end
    end
    
    initial begin
        cke = 1'b1;
    end
endmodule
