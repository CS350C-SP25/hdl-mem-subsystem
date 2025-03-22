`timescale 1ps / 1ps

module cache_tb;

  // Inputs
  logic         rst_N_in;
  logic         clk_in;
  logic         cs_in;
  logic         flush_in;
  logic         hc_valid_in;
  logic         hc_ready_in;
  logic [ 63:0] hc_addr_in;  // W=64 (default parameter)
  logic [ 63:0] hc_value_in;
  logic         hc_we_in;
  logic         lc_valid_in;
  logic         lc_ready_in;
  logic [ 63:0] lc_addr_in;  // W=64
  logic [511:0] lc_value_in;

  // Outputs
  logic         lc_valid_out;
  logic         lc_ready_out;
  logic [ 63:0] lc_addr_out;
  logic [511:0] lc_value_out;
  logic         we_out;
  logic         hc_valid_out;
  logic         hc_ready_out;
  logic         hc_we_out;
  logic [ 63:0] hc_addr_out;
  logic [ 63:0] hc_value_out;
  logic [511:0] cache_line_in;
  logic         cl_in;

  // Instantiate the cache with default parameters
  cache dut (
      .rst_N_in(rst_N_in),
      .clk_in(clk_in),
      .cs_in(cs_in),
      .flush_in(flush_in),
      .hc_valid_in(hc_valid_in),
      .hc_ready_in(hc_ready_in),
      .hc_addr_in(hc_addr_in),
      .hc_value_in(hc_value_in),
      .hc_we_in(hc_we_in),
      .lc_valid_out(lc_valid_out),
      .lc_ready_out(lc_ready_out),
      .lc_addr_out(lc_addr_out),
      .lc_value_out(lc_value_out),
      .we_out(we_out),
      .lc_valid_in(lc_valid_in),
      .lc_ready_in(lc_ready_in),
      .lc_addr_in(lc_addr_in),
      .lc_value_in(lc_value_in),
      .hc_valid_out(hc_valid_out),
      .hc_ready_out(hc_ready_out),
      .hc_we_out(hc_we_out),
      .hc_addr_out(hc_addr_out),
      .hc_value_out(hc_value_out),
      .cl_in(cl_in),
      .cache_line_in(cache_line_in)
  );

  // Clock generation
  initial begin
    $dumpfile("generic_cache_trace.vcd");
    $dumpvars(0, dut);
    // $monitor("Time=%0t, rst_N_in=%b, hc_valid_in=%b, hc_valid_reg=%b, hc_addr_in=%h", $time,
    //          rst_N_in, hc_valid_in, dut.hc_valid_reg, hc_addr_in);
    // Initialize all inputs
    cs_in = 0;
    flush_in = 0;
    hc_valid_in = 0;
    hc_ready_in = 0;
    hc_we_in = 0;
    hc_addr_in = 0;
    hc_value_in = 0;
    lc_valid_in = 0;
    lc_ready_in = 0;
    lc_addr_in = 0;
    lc_value_in = 0;

    // Reset sequence
    rst_N_in = 0;
    #20;
    rst_N_in = 1;
    #10;

    // Enable cache and set ready signals
    cs_in = 1;
    hc_ready_in = 1;  // Higher-level always ready to receive
    lc_ready_in = 1;  // Lower-level always ready to respond

    // Send read request for address 0
    $display("[%0t] Sending read request for address 0x0", $time);
    hc_addr_in = 64'h00;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x0", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h00;
    lc_value_in = 512'h0123456789ABCDEF;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    // wait (lc_ready_out == 1);s

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h00;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    $display("[%0t] Requesting higher-level data", $time);

    // Wait for higher-level response
    wait (hc_valid_out == 1);
    $display("[%0t] Received higher-level response", $time);

    // Verify returned data
    if (hc_value_out === 64'h0123456789ABCDEF) begin
      $display("TEST PASSED: Correct data received");
    end else begin
      $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'h0123456789ABCDEF, hc_value_out);
    end


    /* ------------- TESTING FOR WAYS ------------- */  // TODO
    // Send read request for address 0
    $display("[%0t] Sending read request for address 0x4000", $time);
    hc_addr_in = 64'h4000;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x4000", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h4000;
    lc_value_in = 512'h0CAD456789AACDEF;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    // wait (lc_ready_out == 1);s

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h4000;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    $display("[%0t] Requesting higher-level data", $time);

    // Wait for higher-level response
    wait (hc_valid_out == 1);
    $display("[%0t] Received higher-level response", $time);

    // Verify returned data
    if (hc_value_out === 64'h0CAD456789AACDEF) begin
      $display("TEST PASSED: Correct data received");
    end else begin
      $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'h0CAD456789AACDEF, hc_value_out);
    end


    // Send read request for address 0
    $display("[%0t] Sending read request for address 0x4000", $time);
    hc_addr_in = 64'h34000;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x4000", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h34000;
    lc_value_in = 512'h0DEADBEEF12345678;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    // wait (lc_ready_out == 1);s

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h34000;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    $display("[%0t] Requesting higher-level data", $time);

    // Wait for higher-level response
    wait (hc_valid_out == 1);
    $display("[%0t] Received higher-level response", $time);

    // Verify returned data
    if (hc_value_out === 64'h0DEADBEEF12345678) begin
      $display("TEST PASSED: Correct data received");
    end else begin
      $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'h0DEADBEEF12345678,
             hc_value_out);
    end


    // Send read request for address 0
    $display("[%0t] Sending read request for address 0x4000", $time);
    hc_addr_in = 64'h44000;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x4000", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h44000;
    lc_value_in = 512'h0CAD456789AACDEF;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    // wait (lc_ready_out == 1);s

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h44000;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    $display("[%0t] Requesting higher-level data", $time);

    // Wait for higher-level response
    wait (hc_valid_out == 1);
    $display("[%0t] Received higher-level response", $time);

    // Verify returned data
    if (hc_value_out === 64'h0CAD456789AACDEF) begin
      $display("TEST PASSED: Correct data received");
    end else begin
      $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'h0CAD456789AACDEF, hc_value_out);
    end


    // Send read request for address 0x44
    $display("[%0t] Sending read request for address 0x44", $time);
    hc_addr_in = 64'h54;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x44", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h54;
    lc_value_in = 512'hDEADBEEFDEADBEEF;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    wait (lc_ready_out == 1);

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h40;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    $display("[%0t] Requesting higher-level data", $time);

    // Wait for higher-level response
    wait (hc_valid_out == 1);
    $display("[%0t] Received higher-level response", $time);

    // Verify returned data
    if (hc_value_out === 64'hDEADBEEFDEADBEEF) begin
      $display("TEST PASSED: Correct data received");
    end else begin
      $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'hDEADBEEFDEADBEEF, hc_value_out);
    end



    // *** Write Test Case ***  
    $display("\n*** [%0t] Starting Write Test Case ***", $time);

    // Send write request to the same address 0x0 with new data
    $display("[%0t] Sending write request for address 0x0 with data 0xFEDCBA9876543210", $time);
    hc_addr_in = 64'h00;
    hc_value_in = 64'hFEDCBA9876543210;
    hc_we_in = 1;
    hc_valid_in = 1;

    // Wait for cache to process write request (might involve eviction if dirty, handled internally)
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;

    // Wait for lower-level cache request (in case of write miss or eviction)

    // wait (lc_valid_out);
    if (lc_valid_out == 1) begin
      $display(
          "[%0t] Cache issued lower-level request for address %h during write (Eviction or Write Miss)",
          $time, lc_addr_out);

      // For simplicity, assume LLC is ready to accept eviction or provide data for write miss
      @(posedge clk_in);
      lc_valid_in = 1;  // If eviction, LLC might need ready/valid handshake, for now assume ready
      lc_addr_in  = lc_addr_out; // Echo address if needed for eviction ack or write miss data provide
      lc_value_in = 512'h0; // Dummy data for LLC ready, if needed. For eviction, LLC wouldn't return data.
      $display("[%0t] Simulating lower-level ready for eviction/write miss handling", $time);

      @(posedge clk_in);
      lc_valid_in = 0;
    end

    @(posedge clk_in);
    $display("[%0t] Write request processed", $time);

    // *** Read-After-Write Test Case ***
    $display("\n*** [%0t] Starting Read-After-Write Test Case (Same Address 0x0) ***", $time);

    // Send read request again to the same address 0x0
    $display("[%0t] Sending read request for address 0x0 (Read-After-Write)", $time);
    hc_addr_in = 64'h00;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request (this should be a cache hit now)
    @(posedge clk_in);
    wait (hc_ready_out);
    hc_valid_in = 0;

    $display("[%0t] Actually sent request", $time);

    // Wait for higher-level response (should be immediate hit)

    wait (hc_valid_out == 1);

    $display("[%0t] Received higher-level response (Read-After-Write)", $time);

    // Verify returned data is the value written
    if (hc_value_out === 64'hFEDCBA9876543210) begin
      $display("[%0t] Read-After-Write TEST PASSED: Correct data received: %h (Value Written)",
               $time, hc_value_out);
      $display("\n*** [%0t] ALL TESTS PASSED ***", $time);
    end else begin
      $error(
          "[%0t] Read-After-Write TEST FAILED: Data mismatch. Expected %h (Value Written), Got %h",
          $time, 64'hFEDCBA9876543210, hc_value_out);
      // $finish;
    end


    // Send read request for address 0
    $display("[%0t] Sending read request for address 0x4000", $time);
    hc_addr_in = 64'h4000;
    hc_we_in = 0;
    hc_valid_in = 1;

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle

    // Wait for lower-level cache request
    wait (lc_valid_out == 1);
    $display("[%0t] Cache issued lower-level request for address 0x4000", $time);

    // Simulate lower-level cache response
    @(posedge clk_in);
    lc_valid_in = 1;
    lc_addr_in  = 64'h4000;
    lc_value_in = 512'h0CAD456789AACDEF;
    $display("[%0t] Sending lower-level response", $time);

    // #100;
    // $finish;
    // wait (lc_ready_out == 1);s

    // Complete response transaction
    @(posedge clk_in);
    lc_valid_in = 0;
    hc_valid_in = 1;
    hc_addr_in  = 64'h4000;

    wait (hc_ready_out == 1);

    // Wait for cache to process request
    @(posedge clk_in);
    #1;
    hc_valid_in = 0;  // Request only needs to be valid for 1 cycle


    // $display("[%0t] Requesting higher-level data", $time);

    // // Wait for higher-level response
    // wait (hc_valid_out == 1);
    // $display("[%0t] Received higher-level response", $time);

    // // Verify returned data
    // if (hc_value_out === 64'h0CAD456789AACDEF) begin
    //   $display("TEST PASSED: Correct data received");
    // end else begin
    //   $error("TEST FAILED: Data mismatch. Expected %h, Got %h", 64'h0CAD456789AACDEF, hc_value_out);
    // end

    #10 $finish;
  end

  // Clock generation
  initial begin
    clk_in = 0;
    forever #5 clk_in = ~clk_in;
  end

endmodule
