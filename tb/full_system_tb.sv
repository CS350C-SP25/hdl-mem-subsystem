
`timescale 1ns / 1ps

module tb_memory_subsystem;

  // Parameters (match DUT parameters)
  parameter int TAG_WIDTH = 10;
  parameter int A = 3;
  parameter int B = 64;
  parameter int C = 1536;
  parameter int PADDR_BITS = 19;

  // DUT Signals
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

  // Processor Handshaking Outputs
  wire lsu_proc_instr_ready;
  wire lsu_proc_data_ready;

  // Completion Interface Outputs
  wire lsu_completion_valid;
  wire [63:0] lsu_completion_value;
  wire [TAG_WIDTH-1:0] lsu_completion_tag;

  // Instantiate the DUT
  memory_subsystem #(
      .TAG_WIDTH(TAG_WIDTH),
      .A(A),
      .B(B),
      .C(C),
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
      .lsu_completion_tag  (lsu_completion_tag)
  );

  // Clock Generation
  localparam CLK_PERIOD = 10;  // Clock period in ns
  initial begin
    clk = 0;
    forever #(CLK_PERIOD / 2) clk = ~clk;
  end

  // Reset Generation and Initialization
  initial begin
    rst_N = 1'b0;  // Assert reset
    cs_N = 1'b1;  // Chip select inactive during reset
    lsu_proc_instr_valid = 1'b0;
    lsu_proc_instr_tag = '0;
    lsu_proc_instr_is_write = 1'b0;
    lsu_proc_data_valid = 1'b0;
    lsu_proc_data_tag = '0;
    lsu_proc_addr = '0;
    lsu_proc_value = '0;
    #(CLK_PERIOD * 5);  // Hold reset for 5 clock cycles
    rst_N = 1'b1;  // Deassert reset
    cs_N  = 1'b0;  // Activate chip select after reset
    #(CLK_PERIOD);
  end

  // Helper Task for Sending a Transaction
  task send_transaction(input logic is_write, input [TAG_WIDTH-1:0] tag, input [63:0] addr,
                        input [63:0] value);
    // Wait for instruction ready
    wait (lsu_proc_instr_ready);
    @(posedge clk);
    lsu_proc_instr_valid = 1'b1;
    lsu_proc_instr_is_write = is_write;
    lsu_proc_instr_tag = tag;

    // Wait for data ready
    wait (lsu_proc_data_ready);
    @(posedge clk);
    lsu_proc_instr_valid = 1'b0;  // Deassert instr valid after accepted
    lsu_proc_data_valid = 1'b1;
    lsu_proc_data_tag = tag;
    lsu_proc_addr = addr;
    lsu_proc_value = value;
    @(posedge clk);
    lsu_proc_data_valid = 1'b0;
  endtask

  // Helper Task for Waiting for Completion
  task wait_completion(input [TAG_WIDTH-1:0] expected_tag, output logic [63:0] received_value);
    wait (lsu_completion_valid && lsu_completion_tag == expected_tag);
    $display("Completion Received: Tag=%d, Value=0x%h at time %0t", lsu_completion_tag,
             lsu_completion_value, $time);
    received_value = lsu_completion_value;
    @(posedge clk);  // Consume completion signal (assuming it's high for one cycle)
  endtask


  // Stimulus and Checking
  initial begin
    logic [63:0] read_value;
    // Wait for reset to finish
    wait (rst_N === 1'b1);
    @(posedge clk);

    // --- Example Test Sequence ---
    $display("Starting test sequence at time %0t", $time);

    // Test Case 1: Simple Write
    $display("Test Case 1: Simple Write to 0x1000");
    send_transaction(.is_write(1'b1), .tag(10), .addr(64'h1000), .value(64'hDEADBEEFCAFEF00D));
    wait_completion(.expected_tag(10),
                    .received_value(read_value));  // Value is ignored for write completion

    #(CLK_PERIOD * 2);  // Small delay

    // Test Case 2: Simple Read
    $display("Test Case 2: Simple Read from 0x1000");
    send_transaction(.is_write(1'b0), .tag(20), .addr(64'h1000),
                     .value(64'h0));  // Value ignored for reads
    wait_completion(.expected_tag(20), .received_value(read_value));

    // Check read value
    if (read_value == 64'hDEADBEEFCAFEF00D) begin
      $display("Read Value MATCHES expected value.");
    end else begin
      $error("Read Value MISMATCH: Expected 0x%h, Got 0x%h", 64'hDEADBEEFCAFEF00D, read_value);
    end

    #(CLK_PERIOD * 5);  // More delay

    // Test Case 3: Write to a different address
    $display("Test Case 3: Simple Write to 0x2040");
    send_transaction(.is_write(1'b1), .tag(30), .addr(64'h2040), .value(64'h123456789ABCDEF0));
    wait_completion(.expected_tag(30), .received_value(read_value));

    #(CLK_PERIOD * 2);

    // Test Case 4: Read from the second address
    $display("Test Case 4: Simple Read from 0x2040");
    send_transaction(.is_write(1'b0), .tag(40), .addr(64'h2040), .value(64'h0));
    wait_completion(.expected_tag(40), .received_value(read_value));

    // Check read value
    if (read_value == 64'h123456789ABCDEF0) begin
      $display("Read Value MATCHES expected value.");
    end else begin
      $error("Read Value MISMATCH: Expected 0x%h, Got 0x%h", 64'h123456789ABCDEF0, read_value);
    end

    #(CLK_PERIOD * 5);

    // Add more complex test cases here...
    // e.g., back-to-back operations, requests while busy, cache line fills/evictions

    $display("Test sequence finished at time %0t", $time);
    $finish;  // End simulation
  end

  // Optional: Monitor signals
  initial begin
    $dumpfile("memory_subsystem_tb.vcd");  // Define the VCD file name
    $dumpvars(0, tb_memory_subsystem);  // Dump all signals in the testbench and DUT

    $monitor(
        "Time=%0t clk=%b rst_N=%b cs_N=%b | Instr: V=%b Rdy=%b T=%2d Wr=%b | Data: V=%b Rdy=%b T=%2d Addr=%h Val=%h | Comp: V=%b T=%2d Val=%h",
        $time, clk, rst_N, cs_N, lsu_proc_instr_valid, lsu_proc_instr_ready, lsu_proc_instr_tag,
        lsu_proc_instr_is_write, lsu_proc_data_valid, lsu_proc_data_ready, lsu_proc_data_tag,
        lsu_proc_addr, lsu_proc_value, lsu_completion_valid, lsu_completion_tag,
        lsu_completion_value);
  end

endmodule  // tb_memory_subsystem
