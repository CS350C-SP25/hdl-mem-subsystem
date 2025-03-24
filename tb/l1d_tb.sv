
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

  initial begin

    $dumpfile("l1_data_cache_tb.vcd");
    $dumpvars(0, l1_data_cache_tb);

    // Initialize inputs
    clk_in = 1'b0;
    rst_N_in = 1'b0;
    cs_N_in = 1'b1;  // Assume active high CS_N
    flush_in = 1'b0;
    lsu_valid_in = 1'b0;
    lsu_ready_in = 1'b1;  // Tie ready high for now
    lsu_addr_in = 64'b0;
    lsu_value_in = 64'b0;
    lsu_we_in = 1'b0;
    lc_ready_in = 1'b1;  // Tie ready high for now
    lc_valid_in = 1'b0;
    lc_addr_in = {PADDR_BITS{1'b0}};
    lc_value_in = 64'b0;
    lsu_ready_out = 1'b1;
    lc_ready_out = 1'b1;

    // Reset sequence
    #10 rst_N_in = 1'b1;
    $display("Reset complete");
    #20;

    // ** Testcases **

    // --- Basic read hit ---
    $display("\n--- Starting Basic read hit test ---");
    // 1. Write a value to an address via LSU
    $display("  1. Writing value %h to address %h via LSU", 64'h12345678, 64'h2000);
    lsu_addr_in = 64'h2000;
    lsu_value_in = 64'h12345678;
    lsu_we_in = 1'b1;  // Write request
    lsu_valid_in = 1'b1;
    wait (lsu_ready_out);
    lsu_valid_in = 1'b0;  // Deassert valid after request
    @(posedge lsu_write_complete_out);  // Wait for write complete
    $display("  Write complete acknowledged by LSU");


    // 2. Read from the same address via LSU and check for hit and correct value
    $display("  2. Reading from address %h via LSU", 64'h2000);
    lsu_addr_in = 64'h2000;
    lsu_we_in = 1'b0;  // Read request
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;  // Deassert valid after request

    // Wait for LSU valid out to indicate cache processing the request
    @(posedge lsu_valid_out);
    #1;  // small delay to ensure signals settle

    // Check for hit and correct value
    if (lsu_valid_out) begin
      $display("  LSU read valid out detected");
      if (lsu_value_out == 64'h12345678) begin
        $display("  Basic read hit test PASSED: Correct value read from cache!");
      end else begin
        $error("  Basic read hit test FAILED: Incorrect value read from cache. Expected %h, got %h",
               64'h12345678, lsu_value_out);
      end
    end else begin
      $error("  Basic read hit test FAILED: LSU read valid out not asserted");
    end


    // --- Basic read miss ---
    $display("\n--- Starting Basic read miss test ---");
    // 1. Read from an address via LSU that is not in cache
    $display("  1. Reading from address %h via LSU (expecting miss)", 64'h1000);
    lsu_addr_in = 64'h1000;
    lsu_we_in = 1'b0;  // Read request
    lsu_valid_in = 1'b1;
    #10;  // Wait a bit
    lsu_valid_in = 1'b0;  // Deassert valid after request

    // Wait for LSU valid out to indicate cache processing the request
    @(posedge lsu_valid_out);
    #1;  // small delay to ensure signals settle

    // 2. Check for miss, observe LC interface requests
    // Assuming miss, LC should request data. Check lc_valid_out and lc_addr_out
    if (lc_valid_out) begin
      $display("  LC request valid detected for address %h", lc_addr_out);
      if (lc_we_out == 1'b0) begin
        $display("  LC request is a read request as expected");
      end else begin
        $error("  LC request is a write request, but expected read for read miss test");
      end

      // 3. Simulate LC providing data, check LSU read hit and correct value
      $display("  3. Simulating LC providing data %h for address %h", 64'hDEADBEEF, lc_addr_out);
      lc_valid_in = 1'b1;
      lc_addr_in  = lc_addr_out;
      lc_value_in = 64'hDEADBEEF;
      #10;  // Wait for LC to provide data

      // Wait for some time for cache to process LC response
      #20;

      lc_valid_in = 1'b0;  // Deassert LC valid

      // Now read again from the same address - should be a hit
      $display("  4. Reading again from address %h via LSU (expecting hit after LC response)",
               64'h1000);
      lsu_addr_in = 64'h1000;
      lsu_we_in = 1'b0;
      lsu_valid_in = 1'b1;
      #10;
      lsu_valid_in = 1'b0;  // Deassert valid after request

      // Wait for LSU valid out again for the read hit
      @(posedge lsu_valid_out);
      #1;  // small delay to ensure signals settle

      // Check for hit and correct value
      if (lsu_valid_out) begin
        $display("  LSU read valid out detected after LC response");
        if (lsu_value_out == 64'hDEADBEEF) begin
          $display("  Read miss test PASSED: Correct value read from cache after LC response!");
        end else begin
          $error(
              "  Read miss test FAILED: Incorrect value read from cache after LC response. Expected %h, got %h",
              64'hDEADBEEF, lsu_value_out);
        end
      end else begin
        $error(
            "  Read miss test FAILED: LSU read valid out not asserted after LC response for second read");
      end

    end else begin
      $error("  Read miss test FAILED: No LC request observed for read miss");
    end

    // --- Basic write hit ---
    // 1. Write a value to an address via LSU
    // 2. Write another value to the same address via LSU
    // 3. Read from the same address via LSU and check for hit and the latest written value
    $display("\n--- Starting Basic write hit test ---");
    // 1. Write a value to an address via LSU
    $display("  1. Writing value %h to address %h via LSU", 64'hAAAA, 64'h3000);
    lsu_addr_in = 64'h3000;
    lsu_value_in = 64'hAAAA;
    lsu_we_in = 1'b1;  // Write request
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;  // Deassert valid after request
    @(posedge lsu_write_complete_out);  // Wait for write complete
    $display("  Write complete acknowledged by LSU");

    // 2. Write another value to the same address via LSU
    $display("  2. Writing another value %h to the same address %h via LSU", 64'hBBBB, 64'h3000);
    lsu_addr_in = 64'h3000;
    lsu_value_in = 64'hBBBB;
    lsu_we_in = 1'b1;  // Write request
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;  // Deassert valid after request
    @(posedge lsu_write_complete_out);  // Wait for write complete
    $display("  Write complete acknowledged by LSU");


    // 3. Read from the same address via LSU and check for hit and the latest written value
    $display("  3. Reading from address %h via LSU", 64'h3000);
    lsu_addr_in = 64'h3000;
    lsu_we_in = 1'b0;  // Read request
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;  // Deassert valid after request

    // Wait for LSU valid out to indicate cache processing the request
    @(posedge lsu_valid_out);
    #1;  // small delay to ensure signals settle

    // Check for hit and correct value
    if (lsu_valid_out) begin
      $display("  LSU read valid out detected");
      if (lsu_value_out == 64'hBBBB) begin
        $display("  Basic write hit test PASSED: Correct latest value read from cache!");
      end else begin
        $error(
            "  Basic write hit test FAILED: Incorrect value read from cache. Expected %h, got %h",
            64'hBBBB, lsu_value_out);
      end
    end else begin
      $error("  Basic write hit test FAILED: LSU read valid out not asserted");
    end


    // --- Basic write miss ---
    // 1. Write to an address via LSU that is not in cache
    // 2. Check for miss, observe LC interface requests (writeback if needed, then write)
    // 3. Simulate LC acknowledging write, check write completion
    $display("\n--- Starting Basic write miss test ---");
    // 1. Write to an address via LSU that is not in cache
    $display("  1. Writing value %h to address %h via LSU (expecting miss)", 64'hC0C0C0C0,
             64'h4000);
    lsu_addr_in = 64'h4000;
    lsu_value_in = 64'hC0C0C0C0;
    lsu_we_in = 1'b1;  // Write request
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;  // Deassert valid after request

    // Wait for LSU valid out to indicate cache processing the request
    @(posedge lsu_valid_out);
    #1;  // small delay to ensure signals settle

    // 2. Check for miss, observe LC interface requests (writeback if needed, then write)
    // Assuming miss, LC should request data. Check lc_valid_out and lc_addr_out
    if (lc_valid_out) begin
      $display("  LC request valid detected for address %h", lc_addr_out);
      if (lc_we_out == 1'b1) begin
        $display("  LC request is a write request as expected");
      end else begin
        $error("  LC request is a read request, but expected write for write miss test");
      end

      // 3. Simulate LC acknowledging write, check write completion
      $display("  3. Simulating LC ready for write acknowledge");
      lc_ready_in = 1'b1;  // Simulate LC ready to accept write
      #10;

      // Wait for LSU write complete out
      @(posedge lsu_write_complete_out);
      $display("  LSU write complete acknowledged");

      $display("  Basic write miss test PASSED: Write miss handled and completed!");

    end else begin
      $error("  Basic write miss test FAILED: No LC request observed for write miss");
    end


    // --- Cache flush ---
    // 1. Fill cache with some data
    // 2. Assert flush_in
    // 3. Check cache is empty after flush
    $display("\n--- Starting Cache Flush test ---");
    // 1. Fill cache with some data (write hit to address 0x5000)
    $display("  1. Filling cache with data at address %h", 64'h5000);
    lsu_addr_in = 64'h5000;
    lsu_value_in = 64'h55AA55AA;
    lsu_we_in = 1'b1;
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;
    @(posedge lsu_write_complete_out);
    $display("  Data written to cache");


    // 2. Assert flush_in
    $display("  2. Asserting flush signal");
    flush_in = 1'b1;
    #10;
    flush_in = 1'b0;
    $display("  Flush signal deasserted");

    // 3. Check cache is empty after flush (try to read the same address, should be a miss)
    $display("  3. Reading from address %h after flush (expecting miss)", 64'h5000);
    lsu_addr_in = 64'h5000;
    lsu_we_in = 1'b0;
    lsu_valid_in = 1'b1;
    #10;
    lsu_valid_in = 1'b0;

    @(posedge lsu_valid_out);  // Wait for LSU to process read request
    #1;

    if (lc_valid_out) begin
      $display(
          "  Cache flush test PASSED: LC request observed after flush, indicating a miss as expected.");
    end else begin
      $error(
          "  Cache flush test FAILED: No LC request observed after flush, cache might not be flushed.");
    end


    // --- MSHR full scenarios ---
    // 1. Send multiple read requests that miss and fill MSHRs
    // 2. Verify handling of MSHR full condition
    $display("\n--- Starting MSHR Full Scenarios test ---");
    $display("  MSHR full scenarios tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify MSHR full handling.");


    // --- Concurrent LSU and LC accesses ---
    // 1. Test concurrent access from LSU and LC interfaces
    // 2. Verify arbitration and correct data handling
    $display("\n--- Starting Concurrent LSU and LC Accesses test ---");
    $display("  Concurrent LSU and LC accesses tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify concurrent access handling.");


    // --- Edge cases and boundary conditions ---
    // 1. Test address boundaries, cache line boundaries, etc.
    // 2. Test with different parameter values (A, B, C, PADDR_BITS, MSHR_COUNT, TAG_BITS)
    $display("\n--- Starting Edge Cases and Boundary Conditions test ---");
    $display(
        "  Edge cases and boundary conditions tests are not implemented in this basic testbench.");
    $display("  Need to add more complex test cases to verify edge case handling.");


    $finish;
  end

endmodule

