// to build: .verilator --binary address_parser.sv address_parser_tb.sv
// run: ./obj_dir/Vaddress_parser

module address_parser_tb;
    // Parameters
    localparam ROW_BITS = 8;
    localparam COL_BITS = 4;
    localparam PADDR_BITS = 19;

    // Signals
    logic [PADDR_BITS-1:0] mem_bus_addr_in;
    logic [16:0] addr_out;
    logic [1:0] bg_out;
    logic [1:0] ba_out;

    // Declare verification signals at module level
    logic [COL_BITS-1:0] expected_col;
    logic [1:0] expected_ba;
    logic [1:0] expected_bg;
    logic [ROW_BITS-1:0] expected_row;
    logic [16:0] expected_addr_out;

    // Instantiate DUT
    address_parser #(
        .ROW_BITS(ROW_BITS),
        .COL_BITS(COL_BITS),
        .PADDR_BITS(PADDR_BITS)
    ) dut (
        .mem_bus_addr_in(mem_bus_addr_in),
        .addr_out(addr_out),
        .bg_out(bg_out),
        .ba_out(ba_out)
    );

    // Calculate expected values
    always_comb begin
        expected_col = mem_bus_addr_in[COL_BITS-1:0];
        expected_ba = mem_bus_addr_in[COL_BITS+1:COL_BITS];
        expected_bg = mem_bus_addr_in[COL_BITS+3:COL_BITS+2];
        expected_row = mem_bus_addr_in[PADDR_BITS-1:PADDR_BITS-ROW_BITS];
        expected_addr_out = {{(17-ROW_BITS-COL_BITS){1'b0}}, expected_row, expected_col};
    end

    // Test stimulus
    initial begin
        $display("Starting Address Parser Tests");
        $display("Time | Input Addr | Row-Col Out | Bank Group | Bank");
        $display("---------------------------------------------");

        // Test Case 1: All zeros
        mem_bus_addr_in = '0;
        #1;
        check_output("Test 1: All zeros");

        // Test Case 2: All ones
        mem_bus_addr_in = {PADDR_BITS{1'b1}};
        #1;
        check_output("Test 2: All ones");

        // Test Case 3: Sequential addresses
        for (int i = 0; i < 16; i++) begin
            mem_bus_addr_in = PADDR_BITS'(i);
            #1;
            check_output($sformatf("Test 3.%0d: Sequential %0d", i, i));
        end

        // Test Case 4: Check bank/bank group transitions
        mem_bus_addr_in = 19'h00010;
        #1;
        check_output("Test 4.1: Bank transition");

        mem_bus_addr_in = 19'h00020;
        #1;
        check_output("Test 4.2: Bank group transition");

        mem_bus_addr_in = 19'b0110100111011001101;
        #1;
        check_output("Test 4.3: Random debugging test");

        // Test Case 5: Check row transitions
        mem_bus_addr_in = 19'h10000;
        #1;
        check_output("Test 5: Row transition");



        // Test Case 6: Random addresses
        for (int i = 0; i < 5; i++) begin
            mem_bus_addr_in = PADDR_BITS'($random);
            #1;
            check_output($sformatf("Test 7.%0d: Random", i));
        end

        $display("Tests Complete");
        $finish;
    end

    // Helper task to check and display outputs
    task check_output(string test_name);
        $display("%s", test_name);
        $display("Input:  0x%h", mem_bus_addr_in);
        $display("Output: Row-Col=0x%h, BG=%b, BA=%b", addr_out, bg_out, ba_out);
        
        // Verify bank and bank group outputs
        if (ba_out !== expected_ba) begin
            $display("Bank mismatch in %s: Expected %b, Got %b", test_name, expected_ba, ba_out);
        end
        if (bg_out !== expected_bg) begin
            $display("Bank Group mismatch in %s: Expected %b, Got %b", test_name, expected_bg, bg_out);
        end

        // Verify row and column in addr_out
        if (addr_out !== expected_addr_out) begin
            $display("Row-Col mismatch in %s: Expected %h, Got %h", 
                   test_name, expected_addr_out, addr_out);
        end

        $display("----------------------------------------");
    endtask

endmodule