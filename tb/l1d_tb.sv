module l1_data_cache_tb;

  // Parameters
  parameter int A = 3;
  parameter int B = 64;
  parameter int C = 1536;
  parameter int PADDR_BITS = 22;
  parameter int MSHR_COUNT = 4;
  parameter int TAG_BITS = 10;

  // Inputs
  reg clk_in;
  reg rst_N_in;
  reg cs_N_in;
  reg flush_in;
  reg lsu_valid_in;
  reg lsu_ready_in;  // Tie to 1 for now or control in testcases
  reg [63:0] lsu_addr_in;
  reg [63:0] lsu_value_in;
  reg lsu_we_in;
  reg lc_ready_in;  // Tie to 1 for now or control in testcases
  reg lc_valid_in;
  reg [PADDR_BITS-1:0] lc_addr_in;
  reg [63:0] lc_value_in;

  // Outputs
  wire lsu_valid_out;
  reg lsu_ready_out;  // Control in testbench
  wire [63:0] lsu_addr_out;
  wire [63:0] lsu_value_out;
  wire lsu_write_complete_out;
  wire lc_valid_out;
  reg lc_ready_out;  // Control in testbench
  wire [PADDR_BITS-1:0] lc_addr_out;
  wire [63:0] lc_value_out;
  wire lc_we_out;

  // Instantiate the device Under Test (dut)
  l1_data_cache #(
      .A(A),
      .B(B),
      .C(C),
      .PADDR_BITS(PADDR_BITS),
      .MSHR_COUNT(MSHR_COUNT),
      .TAG_BITS(TAG_BITS)
  ) dut (
      .clk_in(clk_in),
      .rst_N_in(rst_N_in),
      .cs_N_in(cs_N_in),
      .flush_in(flush_in),
      .lsu_valid_in(lsu_valid_in),
      .lsu_ready_in(lsu_ready_in),
      .lsu_addr_in(lsu_addr_in),
      .lsu_value_in(lsu_value_in),
      .lsu_we_in(lsu_we_in),
      .lsu_valid_out(lsu_valid_out),
      .lsu_ready_out(lsu_ready_out),
      .lsu_addr_out(lsu_addr_out),
      .lsu_value_out(lsu_value_out),
      .lsu_write_complete_out(lsu_write_complete_out),
      .lc_ready_in(lc_ready_in),
      .lc_valid_in(lc_valid_in),
      .lc_addr_in(lc_addr_in),
      .lc_value_in(lc_value_in),
      .lc_valid_out(lc_valid_out),
      .lc_ready_out(lc_ready_out),
      .lc_addr_out(lc_addr_out),
      .lc_value_out(lc_value_out),
      .lc_we_out(lc_we_out)
  );

  // Clock generation
  always #5 clk_in = ~clk_in;

  // Function to initialize inputs
  function void initialize_inputs();
    clk_in = 1'b0;
    rst_N_in = 1'b1;
    cs_N_in = 1'b0;
    flush_in = 1'b0;
    lsu_valid_in = 1'b0;
    lsu_ready_in = 1'b1;
    lsu_addr_in = 64'b0;
    lsu_value_in = 64'b0;
    lsu_we_in = 1'b0;
    lc_ready_in = 1'b1;
    lc_valid_in = 1'b0;
    lc_addr_in = {PADDR_BITS{1'b0}};
    lc_value_in = 64'b0;
    lsu_ready_out = 1'b1;
    lc_ready_out = 1'b1;
  endfunction

  // Function for reset sequence
  function void reset_sequence();
    #10 rst_N_in = 1'b0;
    $display("Reset complete");
    #20;
    rst_N_in = 1'b1;
  endfunction

  // Function to write to LSU
  function void write_to_lsu(input logic [63:0] addr, input logic [63:0] value);
    $display("  Writing value %h to address %h via LSU", value, addr);
    lsu_addr_in = addr;
    lsu_value_in = value;
    lsu_we_in = 1'b1;
    lsu_valid_in = 1'b1;
    wait (lsu_ready_out);
    lsu_valid_in = 1'b0;
    @(posedge lsu_write_complete_out);
    $display("  Write complete acknowledged by LSU");
  endfunction

  // Function to read from LSU
  function void read_from_lsu(input logic [63:0] addr);
    $display("  Reading from address %h via LSU", addr);
    lsu_addr_in = addr;
    lsu_we_in = 1'b0;
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;
  endfunction

  // Function to check LSU read data
  function void check_lsu_read_data(input logic [63:0] expected_value, input string test_name);
    @(posedge lsu_valid_out);
    #1;
    if (lsu_valid_out) begin
      $display("  LSU read valid out detected");
      if (lsu_value_out == expected_value) begin
        $display("  %s PASSED: Correct value read from cache!", test_name);
      end else begin
        $error("  %s FAILED: Incorrect value read from cache. Expected %h, got %h", test_name,
               expected_value, lsu_value_out);
      end
    end else begin
      $error("  %s FAILED: LSU read valid out not asserted", test_name);
    end
  endfunction

  // Function to check LC request
  function void check_lc_request(
      input logic we_expected, input logic [PADDR_BITS-1:0] expected_addr, input string test_name);
    if (lc_valid_out) begin
      $display("  LC request valid detected for address %h", lc_addr_out);
      if (lc_we_out == we_expected) begin
        if (lc_addr_out == expected_addr)
          $display(
              "  LC request is a %s request as expected, address matches",
              we_expected ? "write" : "read"
          );
        else
          $error(
              "  %s FAILED: LC request address is incorrect. Expected %h, got %h",
              test_name,
              expected_addr,
              lc_addr_out
          );
      end else begin
        $error("  %s FAILED: LC request is a %s request, but expected %s", test_name,
               lc_we_out ? "write" : "read", we_expected ? "write" : "read");
      end
    end else begin
      $error("  %s FAILED: No LC request observed", test_name);
    end
  endfunction

  // Function to simulate LC data
  function void simulate_lc_data(input logic [PADDR_BITS-1:0] addr, input logic [63:0] value);
    $display("  Simulating LC providing data %h for address %h", value, addr);
    lc_valid_in = 1'b1;
    lc_addr_in  = addr;
    lc_value_in = value;
    #10;
    lc_valid_in = 1'b0;
  endfunction

  // Function to simulate LC ready for write acknowledge
  function void simulate_lc_ready();
    $display("  Simulating LC ready for write acknowledge");
    lc_ready_in = 1'b1;
    #10;
  endfunction

  // Function to run basic read hit test
  task run_basic_read_hit_test();
    $display("\n--- Starting Basic read hit test ---");
    write_to_lsu(64'h2000, 64'h12345678);
    read_from_lsu(64'h2000);
    check_lsu_read_data(64'h12345678, "Basic read hit test");
  endtask

  // Function to run basic read miss test
  task run_basic_read_miss_test();
    $display("\n--- Starting Basic read miss test ---");
    read_from_lsu(64'h1000);
    check_lc_request(1'b0, {PADDR_BITS{1'b0}},
                     "Basic read miss test");  // Assuming 0 for lc_addr_out in first miss.
    simulate_lc_data(lc_addr_out, 64'hDEADBEEF);
    #20;
    read_from_lsu(64'h1000);
    check_lsu_read_data(64'hDEADBEEF, "Read miss test after LC response");
  endtask

  // Function to run basic write hit test
  task run_basic_write_hit_test();
    $display("\n--- Starting Basic write hit test ---");
    write_to_lsu(64'h3000, 64'hAAAA);
    write_to_lsu(64'h3000, 64'hBBBB);
    read_from_lsu(64'h3000);
    check_lsu_read_data(64'hBBBB, "Basic write hit test");
  endtask

  // Function to run basic write miss test
  task run_basic_write_miss_test();
    $display("\n--- Starting Basic write miss test ---");
    write_to_lsu(64'h4000, 64'hC0C0C0C0);
    check_lc_request(1'b1, {PADDR_BITS{1'b0}},
                     "Basic write miss test");  // Assuming 0 for lc_addr_out in first miss.
    simulate_lc_ready();
    @(posedge lsu_write_complete_out);
    $display("  LSU write complete acknowledged");
    $display("  Basic write miss test PASSED: Write miss handled and completed!");
  endtask

  // Function to run cache flush test
  task run_cache_flush_test();
    $display("\n--- Starting Cache Flush test ---");
    write_to_lsu(64'h5000, 64'h55AA55AA);
    flush_in = 1'b1;
    #10;
    flush_in = 1'b0;
    read_from_lsu(64'h5000);
    check_lc_request(1'b0, {PADDR_BITS{1'b0}}, "Cache flush test");
  endtask

  // Function to run MSHR full test
  task run_mshr_full_test();
    $display("\n--- Starting MSHR Full Scenarios test ---");
    $display("  MSHR full scenarios tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify MSHR full handling.");
  endtask

  // Function to run Concurrent LSU and LC accesses test
  task run_concurrent_access_test();
    $display("\n--- Starting Concurrent LSU and LC Accesses test ---");
    $display("  Concurrent LSU and LC accesses tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify concurrent access handling.");
  endtask

  // Function to run Edge cases and boundary conditions test
  task run_edge_cases_test();
    $display("\n--- Starting Edge Cases and Boundary Conditions test ---");
    $display(
        "  Edge cases and boundary conditions tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify edge case handling.");
  endtask

  initial begin
    $dumpfile("l1_data_cache_tb.vcd");
    $dumpvars(99, l1_data_cache_tb);

    // Initialize and reset
    initialize_inputs();
    reset_sequence();

    // Run test cases
    run_basic_read_hit_test();
    run_basic_read_miss_test();
    run_basic_write_hit_test();
    run_basic_write_miss_test();
    run_cache_flush_test();
    run_mshr_full_test();
    run_concurrent_access_test();
    run_edge_cases_test();

    $finish;
  end

endmodule
