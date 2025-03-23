module llc_dimm_tb (
    // Input signals
    input logic clk,
    input logic rst_N,
    
    // Higher-level cache interface inputs
    input logic cs_in,
    input logic flush_in,
    input logic hc_valid_in,
    input logic hc_ready_in,
    input logic [18:0] hc_addr_in,
    input logic [63:0] hc_value_in,
    input logic hc_we_in,
    input logic [511:0] hc_line_in,
    input logic hc_cl_in,
    
    // Higher-level cache interface outputs
    output logic hc_ready_out,
    output logic hc_valid_out,
    output logic [18:0] hc_addr_out,
    output logic [63:0] hc_value_out
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
    
    // Test control
    bit test_done;
    int test_count;
    
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
        .BANK_GROUPS(4),
        .BANKS_PER_GROUP(2)
    ) llc (
        .clk_in(clk),
        .rst_N_in(rst_N),
        .cs_in(cs_in),
        .flush_in(flush_in),
        .hc_valid_in(hc_valid_in),
        .hc_ready_in(hc_ready_in),
        .hc_addr_in(hc_addr_in),
        .hc_value_in(hc_value_in),
        .hc_we_in(hc_we_in),
        .hc_line_in(hc_line_in),
        .hc_cl_in(hc_cl_in),
        .hc_ready_out(hc_ready_out),
        .hc_valid_out(hc_valid_out),
        .hc_addr_out(hc_addr_out),
        .hc_value_out(hc_value_out),
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
        bg = mem_bus_addr_out[13:12];
        ba = {1'b0, mem_bus_addr_out[11]};
        dqm = '0;
    end

    always_ff @(posedge clk) begin
        if (hc_ready_out) begin
            $display("HC_READY_OUT %b", hc_ready_out);
        end
    end
    
    initial begin
        cke = 1'b1;
    end
endmodule