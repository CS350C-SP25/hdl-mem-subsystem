/*
 The L1 Data cache is expected to be:
 - PIPT. However the addresses it accepts are virtual, so it must interface with
   the MMU
 - Non-blocking. Meaning a miss should not block the cache from recieving new inputs.
   This will require use of the MSHRs, which store their addresses using CAMs.
 - Write-back. Dirty cache lines should be written back on an eviction.
 It is important to note that a cache line returning from a lower-level cache
 may cause an eviction.
 - Should a cache perform an eviction, it will need to writeback to memory. This
   is different from a regular write, because nothing is expected to be returned from
   DRAM.
 - Evicting can be thought of as a special case of a write which does not return a
   cache line.
 - Storing the instructions tags in the MSHR is necessary. Consider that there
   could be 3 different writes in the LSQ. When returning a write, we
 A fun issue is that the LSU expects a virtual address to be returned to it, but
 this is a PIPT cache. Maybe the MSHRs can help?
 */

// all this module needs to do is keep tracking mshr matching, that's all.
module l1_data_cache #(
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int PADDR_BITS = 22,
    parameter int MSHR_COUNT = 4,
    parameter int TAG_BITS = 10
) (
    input logic clk_in,
    input logic rst_N_in,
    input logic cs_N_in,
    input logic flush_in,
    input logic lsu_valid_in,
    input logic lsu_ready_in,
    input logic [63:0] lsu_addr_in,
    input logic [63:0] lsu_value_in,
    input logic lsu_we_in,
    output logic lsu_valid_out,
    output logic lsu_ready_out,
    output logic [63:0] lsu_addr_out,
    output logic [63:0] lsu_value_out,
    output logic lsu_write_complete_out,
    input logic lc_ready_in,
    input logic lc_valid_in,
    input logic [PADDR_BITS-1:0] lc_addr_in,
    input logic [63:0] lc_value_in,
    output logic lc_valid_out,
    output logic lc_ready_out,
    output logic [PADDR_BITS-1:0] lc_addr_out,
    output logic [63:0] lc_value_out,
    output logic lc_we_out
);

  localparam PADDR_SIZE = PADDR_BITS;
  typedef struct packed {
    logic [PADDR_SIZE-1:0] paddr;  // address
    logic                  we;     // write enable
    logic [63:0]           data;   // if writing data, the store value
    logic [TAG_BITS-1:0]   tag;    // processor tag, not memory addr tag
  } mshr_entry_t;

  mshr_entry_t                  mshr_entries [MSHR_COUNT-1:0];

  // Add enqueue and dequeue signals for each MSHR queue
  logic        [MSHR_COUNT-1:0] mshr_enqueue;
  logic        [MSHR_COUNT-1:0] mshr_dequeue;
  mshr_entry_t [MSHR_COUNT-1:0] mshr_outputs;
  logic        [MSHR_COUNT-1:0] mshr_empty;
  logic        [MSHR_COUNT-1:0] mshr_full;



  typedef enum logic [2:0] {
    IDLE,
    SEND_REQ_LC,
    SEND_RESP_HC,
    CHECK_MSHR,
    BLOCK,
    WAIT_MSHR
  } states;

  states cur_state, next_state;

  reg flush_in_reg;
  reg lsu_valid_in_reg;
  reg lsu_ready_in_reg;
  reg [63:0] lsu_addr_in_reg;
  reg [63:0] lsu_value_in_reg;
  reg lsu_we_in_reg;
  reg lc_ready_in_reg;
  reg lc_valid_in_reg;
  reg [PADDR_BITS-1:0] lc_addr_in_reg;
  reg [63:0] lc_value_in_reg;

  reg lsu_valid_out_reg;
  reg lsu_ready_out_reg;
  reg [63:0] lsu_addr_out_reg;
  reg [63:0] lsu_value_out_reg;
  reg lsu_write_complete_out_reg;
  reg lc_valid_out_reg;
  reg lc_ready_out_reg;
  reg [PADDR_BITS-1:0] lc_addr_out_reg;
  reg [63:0] lc_value_out_reg;
  reg lc_we_out_reg;

  logic lsu_valid_out_comb;
  logic lsu_ready_out_comb;
  logic [63:0] lsu_addr_out_comb;
  logic [63:0] lsu_value_out_comb;
  logic lsu_write_complete_out_comb;
  logic lc_valid_out_comb;
  logic lc_ready_out_comb;
  logic [PADDR_BITS-1:0] lc_addr_out_comb;
  logic [63:0] lc_value_out_comb;
  logic lc_we_out_comb;

  logic [PADDR_BITS-1:0] cur_addr;

  assign cur_addr = lc_valid_in_reg ? lc_addr_in_reg : lsu_addr_in_reg[PADDR_BITS-1:0];


  always_comb begin : l1d_combinational_logic
    lsu_valid_out_comb = 1'b0;
    lsu_ready_out_comb = 1'b0;
    lsu_addr_out_comb = '0;
    lsu_value_out_comb = '0;
    lsu_write_complete_out_comb = 1'b0;
    lc_valid_out_comb = 1'b0;
    lc_ready_out_comb = 1'b0;
    lc_addr_out_comb = '0;
    lc_value_out_comb = '0;
    lc_we_out_comb = 1'b0;

    case (cur_state)
      IDLE: begin
        // Prefer reading from lc first -- prevents race conditions, data going to proc > priority
        if (lc_valid_in_reg) begin
          lc_ready_out_comb = 1;
        end else if (lsu_valid_in_reg) begin
          lsu_ready_out_comb = 1;
        end

        if (lc_valid_in_reg || lsu_valid_in_reg) begin
          next_state = CHECK_MSHR;
        end
      end

      CHECK_MSHR: begin
        // go through every MSHR and check if we already have one
        logic found = 0;
        for (int i = 0; i < MSHR_COUNT; i++) begin
          if (mshr_entries[i].paddr == cur_addr) begin
            found = 1;
          end
        end

        $display("Found");
      end

      default: begin

      end
    endcase

    $monitor("[%0t] Current state is $d", $time, cur_state);
  end

  always @(posedge clk_in) begin
    if (!rst_N_in) begin
      flush_in_reg <= 1'b0;
      lsu_valid_in_reg <= 1'b0;
      lsu_ready_in_reg <= 1'b0;
      lsu_addr_in_reg <= '0;
      lsu_value_in_reg <= '0;
      lsu_we_in_reg <= 1'b0;
      lc_ready_in_reg <= 1'b0;
      lc_valid_in_reg <= 1'b0;
      lc_addr_in_reg <= '0;
      lc_value_in_reg <= '0;

      lsu_valid_out_reg <= 1'b0;
      lsu_ready_out_reg <= 1'b0;
      lsu_addr_out_reg <= '0;
      lsu_value_out_reg <= '0;
      lsu_write_complete_out_reg <= 1'b0;
      lc_valid_out_reg <= 1'b0;
      lc_ready_out_reg <= 1'b0;
      lc_addr_out_reg <= '0;
      lc_value_out_reg <= '0;
      lc_we_out_reg <= 1'b0;
    end else if (!cs_N_in) begin
      if (cur_state == IDLE) begin
        flush_in_reg <= flush_in;
        lsu_valid_in_reg <= lsu_valid_in;
        lsu_ready_in_reg <= lsu_ready_in;
        lsu_addr_in_reg <= lsu_addr_in;
        lsu_value_in_reg <= lsu_value_in;
        lsu_we_in_reg <= lsu_we_in;
        lc_ready_in_reg <= lc_ready_in;
        lc_valid_in_reg <= lc_valid_in;
        lc_addr_in_reg <= lc_addr_in;
        lc_value_in_reg <= lc_value_in;

        lsu_valid_out_reg <= lsu_valid_out;
        lsu_ready_out_reg <= lsu_ready_out;
        lsu_addr_out_reg <= lsu_addr_out;
        lsu_value_out_reg <= lsu_value_out;
        lsu_write_complete_out_reg <= lsu_write_complete_out;
        lc_valid_out_reg <= lc_valid_out;
        lc_ready_out_reg <= lc_ready_out;
        lc_addr_out_reg <= lc_addr_out;
        lc_value_out_reg <= lc_value_out;
        lc_we_out_reg <= lc_we_out;
      end

      lc_ready_out_reg <= lc_ready_out_comb;
      lsu_ready_out_reg <= lc_ready_out_comb;
      cur_state <= next_state;
    end
  end

  /* MSHR QUEUES */
  genvar i;
  generate
    for (i = 0; i < MSHR_COUNT; i++) begin : mshr_queues
      mem_req_queue #(
          .QUEUE_SIZE(16),
          .mem_request_t(mshr_entry_t)
      ) mshr_queue_inst (
          .clk_in(clk_in),
          .rst_in(!rst_N_in),
          .enqueue_in(mshr_enqueue[i]),
          .dequeue_in(mshr_dequeue[i]),
          .req_in(mshr_entries[i]),
          .cycle_count(32'd0),  // dummy input, needs to be connected properly
          .req_out(mshr_outputs[i]),  // dummy output, needs to be connected properly
          .empty(mshr_empty[i]),  // dummy output, needs to be connected properly
          .full(mshr_full[i])  // dummy output, needs to be connected properly
      );
    end
  endgenerate

  assign lsu_valid_out = lsu_valid_out_reg;
  assign lsu_ready_out = lsu_ready_out_reg;
  assign lsu_addr_out = lsu_addr_out_reg;
  assign lsu_value_out = lsu_value_out_reg;
  assign lsu_write_complete_out = lsu_write_complete_out_reg;
  assign lc_valid_out = lc_valid_out_reg;
  assign lc_ready_out = lc_ready_out_reg;
  assign lc_addr_out = lc_addr_out_reg;
  assign lc_value_out = lc_value_out_reg;
  assign lc_we_out = lc_we_out_reg;


endmodule : l1_data_cache
