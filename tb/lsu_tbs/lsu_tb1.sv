`timescale 1ns/1ps
import types::*;

//=====================================================================
// TESTBENCH FOR load_store_unit
//=====================================================================
module load_store_unit_tb_complex;

  // Parameters
  localparam int QUEUE_DEPTH = 8;
  localparam int TAG_WIDTH   = 4;
  localparam int CLK_PERIOD  = 5;  // 5 ns period (200 MHz)

  // Clock and reset
  logic clk;
  logic rst_N;
  logic cs_N;

  // Processor Instruction Interface
  logic proc_instr_valid;
  logic [TAG_WIDTH-1:0] proc_instr_tag;
  logic proc_instr_is_write;
  logic proc_instr_ready;

  // Processor Data Interface
  logic proc_data_valid;
  logic [TAG_WIDTH-1:0] proc_data_tag;
  logic [63:0] proc_addr;
  logic [63:0] proc_value;
  logic proc_data_ready;

  // L1 Cache (L1D) Interface (inputs to DUT)
  logic l1d_valid_in;
  logic l1d_ready_in;
  logic [63:0] l1d_addr_in;
  logic [63:0] l1d_value_in;
  logic [TAG_WIDTH-1:0] l1d_tag_in;
  logic l1d_write_complete_in;
  logic l1d_tag_complete_in;

  // L1 Cache (L1D) Interface (outputs from DUT)
  logic l1d_valid_out;
  logic l1d_ready_out;
  logic [63:0] l1d_addr_out;
  logic [63:0] l1d_value_out;
  logic l1d_we_out;
  logic l1d_tag_complete_out;

  // Completion Interface (from DUT)
  logic completion_valid;
  logic [63:0] completion_value;
  logic [TAG_WIDTH-1:0] completion_tag;

  // Test tracking variables
  int test_passed = 0;
  int test_failed = 0;
  // Expected completions (each expected tag and value)
  logic [TAG_WIDTH-1:0] expected_completions[$];
  logic [63:0] expected_values[$];
  // Collected completions
  logic [TAG_WIDTH-1:0] completed_tags[$];
  logic [63:0] completed_values[$];

  //-------------------------------------------------------------------------
  // Instantiate the DUT: load_store_unit
  //-------------------------------------------------------------------------
  load_store_unit #(
    .QUEUE_DEPTH(32),
    .TAG_WIDTH(TAG_WIDTH)
  ) dut (
    .clk_in(clk),
    .rst_N_in(rst_N),
    .cs_N_in(cs_N),
    // Processor Instruction Interface
    .proc_instr_valid_in(proc_instr_valid),
    .proc_instr_tag_in(proc_instr_tag),
    .proc_instr_is_write_in(proc_instr_is_write),
    .proc_instr_ready_out(proc_instr_ready),
    // Processor Data Interface
    .proc_data_valid_in(proc_data_valid),
    .proc_data_tag_in(proc_data_tag),
    .proc_addr_in(proc_addr),
    .proc_value_in(proc_value),
    .proc_data_ready_out(proc_data_ready),
    // L1 Cache (L1D) Interface (inputs)
    .l1d_valid_in(l1d_valid_in),
    .l1d_ready_in(l1d_ready_in),
    .l1d_addr_in(l1d_addr_in),
    .l1d_value_in(l1d_value_in),
    .l1d_tag_in(l1d_tag_in),
    .l1d_write_complete_in(l1d_write_complete_in),
    .l1d_tag_complete_in(l1d_tag_complete_in),
    // L1 Cache (L1D) Interface (outputs)
    .l1d_valid_out(l1d_valid_out),
    .l1d_ready_out(l1d_ready_out),
    .l1d_addr_out(l1d_addr_out),
    .l1d_value_out(l1d_value_out),
    .l1d_we_out(l1d_we_out),
    .l1d_tag_complete_out(l1d_tag_complete_out),
    // Completion Interface
    .completion_valid_out(completion_valid),
    .completion_value_out(completion_value),
    .completion_tag_out(completion_tag)
  );

  //-------------------------------------------------------------------------
  // Clock Generation
  //-------------------------------------------------------------------------
  initial begin
    clk = 0;
    forever #(CLK_PERIOD) clk = ~clk;
  end

  //-------------------------------------------------------------------------
  // Reset Task
  //-------------------------------------------------------------------------
  task automatic reset_dut();
    begin
      rst_N = 0;
      cs_N  = 0;
      proc_instr_valid = 0;
      proc_data_valid  = 0;
      l1d_valid_in = 0;
      l1d_ready_in = 1; // start with ready high
      l1d_write_complete_in = 0;
      l1d_tag_complete_in = 0;
      expected_completions.delete();
      expected_values.delete();
      completed_tags.delete();
      completed_values.delete();
      repeat (5) @(posedge clk);
      rst_N = 1;
      cs_N = 1;
      @(posedge clk);
    end
  endtask

  //-------------------------------------------------------------------------
  // Processor-Side Tasks (Driving Instructions & Data)
  //-------------------------------------------------------------------------

  // Issue an instruction (drive proc_instr_valid until proc_instr_ready is seen)
  task automatic issue_instruction(
    input logic [TAG_WIDTH-1:0] tag,
    input logic is_store
  );
    begin
      $display("\n[TB] Attempting to ISSUE %s with tag %h at time %0t",
               (is_store ? "STORE" : "LOAD"), tag, $time);
      proc_instr_tag      = tag;
      proc_instr_is_write = is_store;
      proc_instr_valid    = 1'b1;
      // Wait until DUT asserts ready on a rising clock edge
      while (!proc_instr_ready) begin
        @(posedge clk);
      end
      @(posedge clk);
      proc_instr_valid = 1'b0;
      $display("[TB] ISSUED %s with tag %h at time %0t",
               (is_store ? "STORE" : "LOAD"), tag, $time);
               @(posedge clk);
    end
  endtask

  // Provide address and value data (hold proc_data_valid until proc_data_ready)
  task automatic provide_data(
    input logic [TAG_WIDTH-1:0] tag,
    input logic [63:0] addr,
    input logic [63:0] value = 64'd0
  );
    begin
      $display("[TB] Providing DATA for tag %h: addr=0x%h, value=0x%h at time %0t",
               tag, addr, value, $time);
      proc_data_tag = tag;
      proc_addr     = addr;
      proc_value    = value;
      proc_data_valid = 1'b1;
      while (!proc_data_ready) begin
        @(posedge clk);
      end
      @(posedge clk);
      proc_data_valid = 1'b0;
      @ (posedge clk);
      $display("[TB] DATA provided for tag %h at time %0t", tag, $time);
    end
  endtask

  //-------------------------------------------------------------------------
  // L1D-Side Tasks (Simulate memory responses)
  //-------------------------------------------------------------------------

  // Provide a LOAD response from L1D (hold l1d_valid_in until l1d_ready_out is seen)
  task automatic provide_l1d_response(
    input logic [TAG_WIDTH-1:0] tag,
    input logic [63:0] value
  );
    begin
      $display("[TB] L1D: Providing LOAD response for tag %h with value 0x%h at time %0t",
               tag, value, $time);
      l1d_tag_in          = tag;
      l1d_value_in        = value;
      l1d_tag_complete_in = 1'b1;
      l1d_write_complete_in = 1'b0; // load response
      l1d_valid_in = 1'b1;
      $display("im stuck here");
      while (!l1d_ready_out) begin
        @(posedge clk);
      end; // ? does this signal make sense?
  
      @(posedge clk);
      l1d_valid_in         = 1'b0;
      l1d_tag_complete_in  = 1'b0;
      $display("[TB] L1D: LOAD response accepted for tag %h at time %0t", tag, $time);
      @ (posedge clk);
    end
  endtask

  // Signal a STORE completion from L1D (hold l1d_valid_in until l1d_ready_out is seen)
  task automatic signal_store_complete(
    input logic [TAG_WIDTH-1:0] tag
  );
    begin
      $display("[TB] L1D: Signaling STORE completion for tag %h at time %0t", tag, $time);
      l1d_tag_in           = tag;
      l1d_write_complete_in = 1'b1;
      l1d_tag_complete_in   = 1'b1;
      l1d_valid_in = 1'b1;
      while (!l1d_ready_out) begin
        @(posedge clk);
      end
      @(posedge clk);
      l1d_valid_in         = 1'b0;
      l1d_write_complete_in = 1'b0;
      l1d_tag_complete_in   = 1'b0;
      $display("[TB] L1D: STORE completion accepted for tag %h at time %0t", tag, $time);
      @(posedge clk);
    end
  endtask

  //-------------------------------------------------------------------------
  // Completion Monitor and Checker
  //-------------------------------------------------------------------------
  initial begin
    forever begin
      @(posedge clk);
      if (completion_valid) begin
        $display(">>> COMPLETION: tag=%h, value=0x%h at time %0t",
                 completion_tag, completion_value, $time);
        completed_tags.push_back(completion_tag);
        completed_values.push_back(completion_value);
      end
    end
  end

  task automatic wait_for_completions(input int timeout = 200);
    integer cycles_waited = 0;
    int remaining;
    remaining = expected_completions.size();
    while ((remaining > 0) && (cycles_waited < timeout)) begin
      @(posedge clk);
      cycles_waited++;
      for (int i = 0; i < completed_tags.size(); i++) begin
        for (int j = 0; j < expected_completions.size(); j++) begin
          if (completed_tags[i] == expected_completions[j]) begin
            if (completed_values[i] == expected_values[j]) begin
              $display("[TB] PASS: Tag=%h completed correctly with value 0x%h",
                       completed_tags[i], completed_values[i]);
              test_passed++;
            end else begin
              $display("[TB] FAIL: Tag=%h value mismatch (got=0x%h, expected=0x%h)",
                       completed_tags[i], completed_values[i], expected_values[j]);
              test_failed++;
            end
            expected_completions.delete(j);
            expected_values.delete(j);
            remaining--;
            break;
          end
        end
      end
    end
    if (remaining > 0) begin
      $display("[TB] TIMEOUT: Still waiting for %0d completions!", remaining);
      test_failed += remaining;
    end
  endtask

  //-------------------------------------------------------------------------
  // Test Sequence
  //-------------------------------------------------------------------------
  initial begin
    $dumpfile("lsu_test.vcd");
    $dumpvars(0, load_store_unit_tb_complex);
    $display("=== Starting Testbench at time %0t ===", $time);
    
    reset_dut();
    l1d_ready_in = 0;
    // TEST 1: Single STORE Flow
    $display("\n=== TEST 1: Single STORE Flow ===");
    issue_instruction(4'h1, 1'b1);  //  Issue STORE with tag 1
    provide_data(4'h1, 64'hA000, 64'hDEAD_BEEF);
    l1d_ready_in = 0;
    $display("i set ready in to 0 here.");
    repeat (100) @(posedge clk);
    $display("now ready in is 1, so our dispatch should work");
    l1d_ready_in = 1;
    repeat (5) @(posedge clk);
    signal_store_complete(4'h1);
    expected_completions.push_back(4'h1);
    expected_values.push_back(64'h0); // STORE returns 0 completion value
    wait_for_completions();

    // TEST 2: Single LOAD Flow
    $display("\n=== TEST 2: Single LOAD Flow ===");
    reset_dut();
    issue_instruction(4'h2, 1'b0);  // Issue LOAD with tag 2
    provide_data(4'h2, 64'hB000, 64'd0);
    repeat (5) @(posedge clk);
    provide_l1d_response(4'h2, 64'h12345678);
    expected_completions.push_back(4'h2);
    expected_values.push_back(64'h12345678);
    wait_for_completions();


    // Test 3: custom sodais test to understand protocol
    $display("\n=== Test 3: Custom sodais test to understand protocol");
    l1d_ready_in = 0;
    reset_dut();
    issue_instruction(4'h3, 1'b0);
    provide_data(4'h3, 64'hc000, 64'd0);
    repeat (93) @(posedge clk);
    // ready in goes high!
    l1d_ready_in = 1;
    repeat (5) @(posedge clk);
    l1d_ready_in = 0;

    // it goes low ! (begs question, how do we limit to one per ready signal)
    // (rely on it to do that)
    repeat (10) @(posedge clk);
    // now we need to wait, then provide the l1d_response
    provide_l1d_response(4'h3, 64'hbeefcace);
    expected_completions.push_back(4'h3);
    expected_values.push_back(64'hbeefcace);
    wait_for_completions();
    
    $display("\n=== Test Summary ===");
    $display("Tests passed: %0d, Tests failed: %0d", test_passed, test_failed);
    if (test_failed == 0) $display("** ALL TESTS PASSED **");
    else $display("** SOME TESTS FAILED **");

    $finish;
  end

  //-------------------------------------------------------------------------
  // Optional: Randomly toggle L1D readiness to stress handshake
  //-------------------------------------------------------------------------
  // initial begin
  //   fork
  //     forever begin
  //       #2000  l1d_ready_in = 0;
  //       #2  l1d_ready_in = 1;
  //     end
  //   join_none
  // end

  //-------------------------------------------------------------------------
  // Safety Timeout
  //-------------------------------------------------------------------------
  initial begin
    #20000;
    $display("[TB] TIMEOUT: Forcing simulation stop at time %0t", $time);
    $stop;
  end

endmodule
