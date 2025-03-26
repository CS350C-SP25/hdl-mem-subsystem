`timescale 1ps / 1ps
module lsu_l1d_actual_tb;

  // Parameters (match the DUT instantiation if needed)
  parameter int TAG_WIDTH = 10;
  parameter int A = 3;
  parameter int B = 64;
  parameter int C = 1536;
  parameter int PADDR_BITS = 19;
  parameter CLK_PERIOD = 10;  // Clock period in ns

  // Testbench Signals
  logic clk;
  logic rst_N;
  logic cs_N;

  // Processor Instruction Interface
  logic lsu_proc_instr_valid;
  logic [TAG_WIDTH-1:0] lsu_proc_instr_tag;
  logic lsu_proc_instr_is_write;

  // Processor Data Interface
  logic lsu_proc_data_valid;
  logic [TAG_WIDTH-1:0] lsu_proc_data_tag;
  logic [63:0] lsu_proc_addr;
  logic [63:0] lsu_proc_value;

  // Processor Handshaking Outputs (Wires connected to DUT outputs)
  logic lsu_proc_instr_ready;
  logic lsu_proc_data_ready;

  // Completion Interface Outputs (Wires connected to DUT outputs)
  logic lsu_completion_valid;
  logic [63:0] lsu_completion_value;
  logic [TAG_WIDTH-1:0] lsu_completion_tag;

  // L1D -> LC Interface Outputs (Wires connected to DUT outputs)
  logic [PADDR_BITS-1:0] l1d_lc_addr_to_lc;
  logic [8*B-1:0] l1d_lc_wdata_to_lc;
  logic l1d_lc_valid_to_lc;
  logic l1d_lc_ready_to_lc;  // L1D ready to accept data from LC
  logic l1d_lc_we_to_lc;

  // LC -> L1D Interface Inputs (Driven by Testbench/LC Model)
  logic lc_l1d_valid_to_l1d;  // LC has valid data/response for L1D
  logic lc_l1d_ready_to_l1d;  // LC ready to accept request from L1D
  logic [PADDR_BITS-1:0] lc_l1d_addr_to_l1d;  // Address associated with LC response
  logic [8*B-1:0] lc_l1d_rdata_to_l1d;  // Read data from LC

  // Test Tracking
  // ... existing code ...
  // Test Tracking
  integer num_tests_passed = 0;
  integer num_tests_failed = 0;
  integer test_case_num = 0;

  // Instantiate the DUT (Device Under Test)
  l1d_lsu_tb #(
      .TAG_WIDTH (TAG_WIDTH),
      .A         (A),
      .B         (B),
      .C         (C),
      .PADDR_BITS(PADDR_BITS)
  ) dut (
      // General Input Signals
      .clk  (clk),
      .rst_N(rst_N),
      .cs_N (cs_N),

      // Processor Instruction Interface
      .lsu_proc_instr_valid(lsu_proc_instr_valid),
      .lsu_proc_instr_tag(lsu_proc_instr_tag),
      .lsu_proc_instr_is_write(lsu_proc_instr_is_write),

      // Processor Data Interface
      .lsu_proc_data_valid(lsu_proc_data_valid),
      .lsu_proc_data_tag(lsu_proc_data_tag),
      .lsu_proc_addr(lsu_proc_addr),
      .lsu_proc_value(lsu_proc_value),

      // Processor Handshaking Outputs
      .lsu_proc_instr_ready(lsu_proc_instr_ready),
      .lsu_proc_data_ready (lsu_proc_data_ready),

      // Completion Interface Outputs
      .lsu_completion_valid(lsu_completion_valid),
      .lsu_completion_value(lsu_completion_value),
      .lsu_completion_tag  (lsu_completion_tag),

      // L1D -> LC Interface Outputs (Connect TB wires)
      .l1d_lc_addr_to_lc (l1d_lc_addr_to_lc),
      .l1d_lc_wdata_to_lc(l1d_lc_wdata_to_lc),
      .l1d_lc_valid_to_lc(l1d_lc_valid_to_lc),
      .l1d_lc_ready_to_lc(l1d_lc_ready_to_lc),
      .l1d_lc_we_to_lc   (l1d_lc_we_to_lc),

      // LC -> L1D Interface Inputs (Connect TB drivers)
      .lc_l1d_valid_to_l1d(lc_l1d_valid_to_l1d),
      .lc_l1d_ready_to_l1d(lc_l1d_ready_to_l1d),
      .lc_l1d_addr_to_l1d (lc_l1d_addr_to_l1d),
      .lc_l1d_rdata_to_l1d(lc_l1d_rdata_to_l1d)
  );

  // Clock Generation
  always #(CLK_PERIOD / 2) clk = ~clk;

  // Reset Task
  task reset_dut;
    $display("[%0t] Resetting DUT...", $time);
    rst_N = 1'b0;
    lsu_proc_instr_valid = 1'b0;
    lsu_proc_data_valid = 1'b0;
    cs_N = 1'b1;  // Chip select disabled during reset
    // Reset LC interface drivers
    lc_l1d_valid_to_l1d = 1'b0;
    lc_l1d_ready_to_l1d = 1'b0;  // Keep low during reset
    lc_l1d_addr_to_l1d = '0;
    lc_l1d_rdata_to_l1d = '0;
    repeat (5) @(posedge clk);
    rst_N = 1'b1;
    cs_N = 1'b0;  // Enable chip select after reset
    // Default LC state after reset: Ready to accept, not sending valid data
    lc_l1d_ready_to_l1d = 1'b1;
    $display("[%0t] DUT Reset Complete.", $time);
  endtask

  // Task to send an instruction
  // ... existing code ...

  // Task to send data (address/value)
  // ... existing code ...

  // Task to wait for a completion signal
  // ... existing code ...

  // Task to check completion signal (basic tag check)
  // ... existing code ...

  // Task to check completion signal (tag and value check)
  // ... existing code ...

  // Task to send an instruction
  task send_instr(input logic [TAG_WIDTH-1:0] tag, input logic is_write);
    @(posedge clk);
    lsu_proc_instr_valid = 1'b1;
    lsu_proc_instr_tag = tag;
    lsu_proc_instr_is_write = is_write;
    wait (lsu_proc_instr_ready);  // Wait for DUT to be ready
    @(posedge clk);
    lsu_proc_instr_valid = 1'b0;  // Deassert valid
    $display("[%0t] Sent instruction: tag=%0d, is_write=%b", $time, tag, is_write);
  endtask

  // Task to send data (address/value)
  task send_data(input logic [TAG_WIDTH-1:0] tag, input logic [63:0] addr,
                 input logic [63:0] value = 64'bx);  // Value optional for reads
    @(posedge clk);
    lsu_proc_data_valid = 1'b1;
    lsu_proc_data_tag = tag;
    lsu_proc_addr = addr;
    lsu_proc_value = value;
    wait (lsu_proc_data_ready);  // Wait for DUT to be ready
    @(posedge clk);
    lsu_proc_data_valid = 1'b0;  // Deassert valid
    $display("[%0t] Sent data: tag=%0d, addr=%h, value=%h", $time, tag, addr, value);
  endtask

  // Task to wait for a completion signal
  task wait_completion(output logic [TAG_WIDTH-1:0] received_tag,
                       output logic [63:0] received_value);
    wait (lsu_completion_valid);
    received_tag   = lsu_completion_tag;
    received_value = lsu_completion_value;
    @(posedge clk);  // Consume the cycle where valid is high
    $display("[%0t] Received completion: tag=%0d, value=%h", $time, received_tag, received_value);
  endtask

  // Task to check completion signal (basic tag check)
  task check_completion_tag(input logic [TAG_WIDTH-1:0] expected_tag);
    logic [TAG_WIDTH-1:0] received_tag;
    logic [63:0] received_value;  // Not checked here
    test_case_num++;
    wait_completion(received_tag, received_value);
    if (received_tag == expected_tag) begin
      $display("[%0t] Test %0d PASSED: Completion tag matched (Expected: %0d, Got: %0d)", $time,
               test_case_num, expected_tag, received_tag);
      num_tests_passed++;
    end else begin
      $error("[%0t] Test %0d FAILED: Completion tag mismatch (Expected: %0d, Got: %0d)", $time,
             test_case_num, expected_tag, received_tag);
      num_tests_failed++;
    end
  endtask

  // Task to check completion signal (tag and value check)
  task check_completion_full(input logic [TAG_WIDTH-1:0] expected_tag,
                             input logic [63:0] expected_value);
    logic [TAG_WIDTH-1:0] received_tag;
    logic [63:0] received_value;
    test_case_num++;
    wait_completion(received_tag, received_value);
    if (received_tag == expected_tag && received_value == expected_value) begin
      $display(
          "[%0t] Test %0d PASSED: Completion tag and value matched (Expected Tag: %0d, Value: %h; Got Tag: %0d, Value: %h)",
          $time, test_case_num, expected_tag, expected_value, received_tag, received_value);
      num_tests_passed++;
    end else if (received_tag != expected_tag) begin
      $error("[%0t] Test %0d FAILED: Completion tag mismatch (Expected: %0d, Got: %0d)", $time,
             test_case_num, expected_tag, received_tag);
      num_tests_failed++;
    end else begin  // Tag matched, value mismatched
      $error("[%0t] Test %0d FAILED: Completion value mismatch (Expected: %h, Got: %h)", $time,
             test_case_num, expected_value, received_value);
      num_tests_failed++;
    end
  endtask


  // Task: Simulate LLC sending data block to L1D
  // This is typically in response to an L1D read miss.
  // Assumes standard valid/ready handshake:
  // - TB drives lc_l1d_valid_to_l1d, lc_l1d_addr_to_l1d, lc_l1d_rdata_to_l1d
  // - DUT drives l1d_lc_ready_to_lc
  // - Transfer occurs on posedge clk when both valid and ready are high.
  // Function to simulate LC data
  task simulate_lc_data(input logic [PADDR_BITS-1:0] addr, input logic [511:0] value);
    wait (l1d_lc_valid_to_lc);
    lc_l1d_ready_to_l1d = 1;
    #2;
    $display("[%0t]  Simulating LC providing data %h for address %h", $time, value, addr);
    lc_l1d_valid_to_l1d = 1'b1;
    lc_l1d_addr_to_l1d  = addr;
    lc_l1d_rdata_to_l1d = value;
    $display("waiting for rweq");
    wait (l1d_lc_ready_to_lc);
    $display("finished req");
    lc_l1d_valid_to_l1d = 1'b0;
  endtask

  //   // Function to check LC request
  //   function void check_lc_request(
  //       input logic we_expected, input logic [PADDR_BITS-1:0] expected_addr, input string test_name);
  //     wait (lc_valid_out);
  //     if (lc_valid_out) begin
  //       $display("  LC request valid detected for address %h", lc_addr_out);
  //       if (lc_we_out == we_expected) begin
  //         if (lc_addr_out == expected_addr)
  //           $display(
  //               "  LC request is a %s request as expected, address matches",
  //               we_expected ? "write" : "read"
  //           );
  //         else
  //           $error(
  //               "  %s FAILED: LC request address is incorrect. Expected %h, got %h",
  //               test_name,
  //               expected_addr,
  //               lc_addr_out
  //           );
  //       end else begin
  //         $error("  %s FAILED: LC request is a %s request, but expected %s", test_name,
  //                lc_we_out ? "write" : "read", we_expected ? "write" : "read");
  //       end
  //     end else begin
  //       $error("  %s FAILED: No LC request observed", test_name);
  //     end
  //   endfunction

  // Task: Simulate LLC receiving a request (read or write-back) from L1D
  // Assumes standard valid/ready handshake:
  // - DUT drives l1d_lc_valid_to_lc, l1d_lc_addr_to_lc, l1d_lc_wdata_to_lc, l1d_lc_we_to_lc
  // - TB drives lc_l1d_ready_to_l1d
  // - Transfer occurs on posedge clk when both valid and ready are high.
  task llc_receive_request_from_l1d(output logic [PADDR_BITS-1:0] received_addr,
                                    output logic [8*B-1:0] received_wdata,
                                    output logic received_we);
    $display("[%0t] TB LLC: Waiting for request from L1D...", $time);
    // Ensure LLC is ready to accept requests
    // Note: lc_l1d_ready_to_l1d is generally kept high after reset in this TB.
    // If the LLC model needed processing time, this ready signal would be managed more dynamically.
    if (!lc_l1d_ready_to_l1d) begin
      $display("[%0t] TB LLC Warning: LLC not ready, setting ready high.", $time);
      lc_l1d_ready_to_l1d = 1'b1;  // Make sure LLC is ready
      @(posedge clk);  // Wait one cycle for signal to propagate if needed
    end

    // Wait for a valid request from L1D while LLC is ready
    wait (l1d_lc_valid_to_lc && lc_l1d_ready_to_l1d);

    // Capture the request details on the clock edge where handshake occurs
    received_addr  = l1d_lc_addr_to_lc;
    received_wdata = l1d_lc_wdata_to_lc;
    received_we    = l1d_lc_we_to_lc;

    @(posedge clk);  // Consume the clock cycle of the handshake

    $display("[%0t] TB LLC: Received request from L1D. Addr: %h, WE: %b, WData: %h", $time,
             received_addr, received_we, received_wdata);

    // Optional: Deassert ready if LLC needs time to process
    // lc_l1d_ready_to_l1d = 1'b0;
    // ... processing delay ...
    // lc_l1d_ready_to_l1d = 1'b1;
    // For this simple TB, we assume LLC is always ready immediately after accepting.

  endtask


  // ==========================================================================
  // TEST CASES START HERE
  // ==========================================================================

  // Task to simplify adding delays
  task delay(int cycles);
    repeat (cycles) @(posedge clk);
  endtask

  logic [PADDR_BITS-1:0] received_lc_addr;
  logic [8*B-1:0] received_lc_wdata;  // Not used for read miss
  logic received_lc_we;
  initial begin
    delay(50);
    // --- Test Case: Basic Write Miss ---
    $display("[%0t] --- Starting Test Case 1: Basic Write Hit ---", $time);
    begin
      logic [TAG_WIDTH-1:0] write_tag = 1;
      logic [63:0] write_addr = 64'h0000_0000_0000_0040;  // Address likely within a cache line
      logic [63:0] write_data = 64'hDEAD_BEEF_CAFE_BABE;

      send_instr(write_tag, 1'b1);  // is_write = true
      $display("instr sent");
      send_data(write_tag, write_addr, write_data);
      $display("data sent");
      simulate_lc_data(write_addr[PADDR_BITS-1:0], 512'h0);
      $display("lc data simulated");
      check_completion_tag(write_tag);  // Simple check: Write completion has no value
      $display("check completion sent");

    end
    $display("[%0t] --- Finished Test Case 1 ---", $time);
    delay(2);

    // --- Test Case: Basic Read Hit (Read back the written value) ---
    $display("[%0t] --- Starting Test Case 2: Basic Read Hit ---", $time);
    begin
      logic [TAG_WIDTH-1:0] read_tag = 2;
      logic [63:0] read_addr = 64'h0000_0000_0000_0040;  // Same address as write
      logic [63:0] expected_data = 64'hDEAD_BEEF_CAFE_BABE;

      send_instr(read_tag, 1'b0);  // is_write = false
      send_data(read_tag, read_addr);
      check_completion_full(read_tag, expected_data);
    end
    $display("[%0t] --- Finished Test Case 2 ---", $time);
    delay(2);

    // --- Test Case: Write and Read Different Address ---
    $display("[%0t] --- Starting Test Case 3: Write/Read Different Address ---", $time);
    begin
      logic [TAG_WIDTH-1:0] write_tag = 3;
      logic [63:0] write_addr = 64'h0000_0000_0000_0080;
      logic [63:0] write_data = 64'h1234_5678_9ABC_DEF0;

      logic [TAG_WIDTH-1:0] read_tag = 4;
      logic [63:0] read_addr = 64'h0000_0000_0000_0080;
      logic [63:0] expected_data = write_data;

      // Write
      send_instr(write_tag, 1'b1);
      send_data(write_tag, write_addr, write_data);
      check_completion_tag(write_tag);
      delay(1);

      // Read
      send_instr(read_tag, 1'b0);
      send_data(read_tag, read_addr);
      check_completion_full(read_tag, expected_data);
    end
    $display("[%0t] --- Finished Test Case 3 ---", $time);
    delay(2);


    // --- Test Case 4: Read Miss Serviced by LC ---
    // Assumes address 0x1000 is not initially cached.
    // Requires the LC mock tasks (`llc_receive_request_from_l1d` and `llc_send_data_to_l1d`)
    $display("[%0t] --- Starting Test Case 4: Read Miss Serviced by LC ---", $time);
    // Variables for LC interaction thread


    begin
      logic [TAG_WIDTH-1:0] req_tag = 10;
      logic [63:0] req_addr = 64'h0000_0000_0000_1000;  // An address likely to miss
      // Physical address expected at LC interface (assuming direct mapping of lower bits)
      logic [PADDR_BITS-1:0] expected_lc_addr = req_addr[PADDR_BITS-1:0];
      // Data block to be returned by LC (size B bytes = 512 bits)
      logic [8*B-1:0] data_from_lc;
      logic [63:0] expected_completion_value = 64'hCAFE_BABE_DEAD_BEEF;

      // Prepare the full data block (fill with pattern, place expected value)
      // Fill with 0xA5 pattern first
      for (int i = 0; i < B; i++) begin
        data_from_lc[i*8+:8] = 8'hA5;
      end
      // Overwrite the first 64 bits (assuming byte address 0 of the line corresponds to 64-bit word)
      data_from_lc[63:0] = expected_completion_value;




      // 1. Initiate Processor Read
      send_instr(req_tag, 1'b0);  // is_write = false
      send_data(req_tag, req_addr);  // Value field ignored for read

      // 2. Fork LC interaction handler (simulates LC behavior)
      fork
        begin : lc_handler_thread
          // 3. Wait for L1D request to LC
          llc_receive_request_from_l1d(received_lc_addr, received_lc_wdata, received_lc_we);

          // 4. Check request details (diagnostic only, doesn't affect pass/fail count)
          if (received_lc_addr == expected_lc_addr && received_lc_we == 1'b0) begin
            $display("[%0t] DIAGNOSTIC: LC received expected read request (Addr: %h, WE: %b)",
                     $time, received_lc_addr, received_lc_we);
            // Add a small delay to simulate LC access time before sending data
            delay(5);
            // 5. Send data block back from LC to L1D
            // llc_send_data_to_l1d(received_lc_addr, data_from_lc);
            $display("[%0t] DIAGNOSTIC: LC sent data block for Addr: %h", $time, received_lc_addr);
          end else begin
            $error(
                "[%0t] DIAGNOSTIC ERROR: LC received incorrect/unexpected request (Expected Addr: %h, WE: 0; Got Addr: %h, WE: %b)",
                $time, expected_lc_addr, received_lc_addr, received_lc_we);
            // If the request is wrong, the main thread's check_completion_full will likely fail or hang.
            // Do not send data back in this error case.
          end
        end
      join_none  // Processor check happens concurrently with LC handling

      // 6. Wait for and check processor completion (should have the value sent by LC)
      // This task increments test_case_num and updates pass/fail counters.
      check_completion_full(req_tag, expected_completion_value);

      // Simple wait to allow the LC handler fork to potentially finish logging messages
      // A more robust mechanism might involve explicit synchronization if needed.
      delay(10);

      // Disable the fork to prevent it from accidentally catching later requests
      // if it somehow didn't complete (e.g., due to an error in llc_send_data_to_l1d)
      // disable lc_handler_thread; // Consider if needed, potential race condition if disabled too early

    end
    $display("[%0t] --- Finished Test Case 4 ---", $time);
    delay(2);


    // --- Test Case 5: Read Hit After LC Fill ---
    // Read the same address again, should now be a hit in L1D.
    $display("[%0t] --- Starting Test Case 5: Read Hit After LC Fill ---", $time);
    begin
      logic [TAG_WIDTH-1:0] read_tag = 11;
      logic [63:0] read_addr = 64'h0000_0000_0000_1000;  // Same address as miss test
      logic [63:0] expected_data = 64'hCAFE_BABE_DEAD_BEEF;  // Same data expected

      send_instr(read_tag, 1'b0);  // is_write = false
      send_data(read_tag, read_addr);
      // Expect completion relatively quickly without LC interaction this time
      check_completion_full(read_tag, expected_data);
    end
    $display("[%0t] --- Finished Test Case 5 ---", $time);
    delay(2);


    // ==========================================================================
    // ADD MORE TEST CASES HERE
    // ==========================================================================


    // Wait a bit for any final operations
    delay(20);

    // --- Test Summary ---
    $display("==========================================");
    $display("Test Summary:");
    $display("Total Tests Run: %0d", test_case_num);
    $display("Tests Passed:    %0d", num_tests_passed);
    $display("Tests Failed:    %0d", num_tests_failed);
    $display("==========================================");

    if (num_tests_failed == 0 && num_tests_passed == test_case_num && test_case_num > 0) begin
      $display("****** ALL TESTS PASSED ******");
    end else begin
      $error("****** SOME TESTS FAILED ******");
    end

    $finish;  // End simulation
  end



  // Main Test Sequence
  initial begin

    // Waveform Dumping
    $dumpfile("lsu_l1d_traces.vcd");
    $dumpvars(0, lsu_l1d_actual_tb);  // Dump all signals in this module and below


    clk = 0;
    rst_N = 0;  // Start in reset
    cs_N = 1;
    lsu_proc_instr_valid = 0;
    lsu_proc_data_valid = 0;
    lsu_proc_instr_tag = '0;
    lsu_proc_instr_is_write = 0;
    lsu_proc_data_tag = '0;
    lsu_proc_addr = '0;
    lsu_proc_value = '0;

    // Initialize LC interface drivers
    lc_l1d_valid_to_l1d = 1'b0;
    lc_l1d_ready_to_l1d = 1'b0;  // Will be set high after reset
    lc_l1d_addr_to_l1d = '0;
    lc_l1d_rdata_to_l1d = '0;


    reset_dut();

    // --- Simple LC interaction monitor (optional, for debugging) ---
    // You can add more sophisticated LC mock logic here if needed
    // For now, it just watches requests from L1D and keeps LC ready.
    // It never sends data back (`lc_l1d_valid_to_l1d` stays 0)
    // which means L1D reads that miss will likely stall waiting for LC data.


    // --- Test Cases ---
    // ... existing test cases ...
    // Note: Read tests (like Test 2 and the read part of Test 3)
    // might now behave differently. If they miss in the L1D, the L1D
    // will issue a request on the l1d_lc_* interface. Since our stub
    // LC doesn't respond with data (lc_l1d_valid_to_l1d = 0), the
    // read operation might stall waiting for the LC response, and
    // the check_completion tasks might hang indefinitely.
    // You would need to add LC response logic for reads to complete after a miss.

    // --- Test Summary ---
    // ... existing code ...

    // $finish;  // End simulation
  end

  always @(posedge clk) begin
    if (l1d_lc_valid_to_lc && lc_l1d_ready_to_l1d) begin
      $display("[%0t] TB: Saw L1D->LC request. Addr: %h, WE: %b", $time, l1d_lc_addr_to_lc,
               l1d_lc_we_to_lc);
      // Add logic here to respond if needed, e.g., setting lc_l1d_valid_to_l1d high after some delay
    end
  end

endmodule
