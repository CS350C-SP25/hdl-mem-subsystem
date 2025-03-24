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
    output logic l1d_lsu_write_complete_out
);

    // Internal signals for L1D->LLC communication
    logic l1d_lc_valid, l1d_lc_ready;
    logic [PADDR_BITS-1:0] lc_addr_out;
    logic [8*B-1:0] lc_value_out;
    logic lc_we;


    // Internal signals for LLC->L1D communication
    logic lc_l1d_valid, lc_l1d_ready;
    logic [PADDR_BITS-1:0] lc_addr_in;
    logic [8*B-1:0] lc_value_in;
    
    // Test control
    bit test_done;
    int test_count;
    
    // DUT instances
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
        .lc_ready_in(l1d_lc_ready),
        .lc_valid_in(l1d_lc_valid),
        .lc_addr_in(lc_addr_out),
        .lc_value_in(lc_value_out),
        .lc_valid_out(lc_l1d_valid),
        .lc_ready_out(lc_l1d_ready),
        .lc_addr_out(lc_addr_in),
        .lc_value_out(lc_value_in)
    );

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
        .cs_in(1'b1),  // LLC is always enabled in this testbench
        .flush_in(1'b0),  // Flush controlled by testbench
        .hc_valid_in(l1d_lc_valid_out),
        .hc_ready_in(l1d_lc_ready_out),
        .hc_addr_in(l1d_lc_addr_out),
        .hc_value_in(l1d_lc_value_out),
        .hc_we_in(1'b0),  // Write enable controlled by testbench
        .hc_line_in(l1d_lc_value_out),
        .hc_valid_out(llc_hc_valid_out),
        .hc_ready_out(llc_hc_ready_out),
        .hc_addr_out(llc_hc_addr_out),
        .hc_line_out(llc_hc_line_out)
    );

    // Monitor signals for debugging
    always_ff @(posedge clk) begin
        if (l1d_lsu_valid_out) begin
            $display("L1D LSU Valid Out: %b", l1d_lsu_valid_out);
        end
        if (llc_hc_valid_out) begin
            $display("LLC HC Valid Out: %b", llc_hc_valid_out);
        end
    end

endmodule
