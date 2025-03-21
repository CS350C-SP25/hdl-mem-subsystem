`timescale 1ps / 1ps
import types::*;

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
module l1_data_cache #(
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int PADDR_BITS = 22,
    parameter int MSHR_COUNT = 4
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
    logic valid;
    logic [PADDR_SIZE-1:0] paddr;
    logic [63:0] vaddr;
    logic we;
    logic [63:0] data;
  } mshr_entry_t;

  mshr_entry_t [MSHR_COUNT-1:0] mshr;
  logic [MSHR_COUNT-1:0] mshr_valid;
  logic [MSHR_COUNT-1:0] mshr_matched;

  typedef struct packed {
    logic [PADDR_SIZE-1:0] paddr;
    logic [63:0] data;
  } evict_buffer_t;

  evict_buffer_t [MSHR_COUNT-1:0] evict_buffer;
  logic [$clog2(MSHR_COUNT+1)-1:0] evict_count;
  logic [$clog2(MSHR_COUNT)-1:0] evict_head, evict_tail;

  logic cache_hit, cache_we;
  logic [63:0] cache_addr, cache_wdata, cache_rdata;
  logic cache_valid_in, cache_ready_out;

  cache #(
      .A(A),
      .B(B),
      .C(C),
      .W(64)
  ) cache_inst (
      .rst_N_in(rst_N_in),
      .clk_in(clk_in),
      .cs_in(~cs_N_in),
      .flush_in(flush_in),
      .hc_valid_in(cache_valid_in),
      .hc_ready_in(lsu_ready_in),
      .hc_addr_in(cache_addr),
      .hc_value_in(cache_wdata),
      .hc_we_in(cache_we),
      .lc_valid_out(),
      .lc_ready_out(),
      .lc_addr_out(),
      .lc_value_out(),
      .we_out(),
      .lc_valid_in(1'b0),
      .lc_ready_in(1'b1),
      .lc_addr_in(lc_addr_in),
      .lc_value_in(lc_value_in),
      .hc_valid_out(cache_hit),
      .hc_ready_out(cache_ready_out),
      .hc_we_out(),
      .hc_addr_out(),
      .hc_value_out(cache_rdata)
  );

  always_ff @(posedge clk_in or negedge rst_N_in) begin
    if (!rst_N_in) begin
      mshr_valid <= '0;
      evict_count <= '0;
      evict_head <= '0;
      evict_tail <= '0;
      lsu_valid_out <= '0;
      lc_valid_out <= '0;
      lc_we_out <= '0;
    end else begin
      lsu_valid_out <= '0;
      lc_valid_out  <= '0;

      if (evict_count > 0 && lc_ready_in) begin
        lc_valid_out <= 1'b1;
        lc_we_out <= 1'b1;
        lc_addr_out <= evict_buffer[evict_head].paddr;
        lc_value_out <= evict_buffer[evict_head].data;
        evict_head <= evict_head + 1;
        evict_count <= evict_count - 1;
      end

      if (lc_valid_in && lc_ready_out) begin
        for (int i = 0; i < MSHR_COUNT; i++) begin
          if (mshr_valid[i] && mshr[i].paddr == lc_addr_in) begin
            mshr_valid[i] <= 1'b0;
            lsu_valid_out <= 1'b1;
            lsu_value_out <= lc_value_in;
            lsu_addr_out  <= mshr[i].vaddr;
            if (mshr[i].we) begin
              cache_valid_in <= 1'b1;
              cache_we <= 1'b1;
              cache_addr <= mshr[i].paddr;
              cache_wdata <= mshr[i].data;
            end
          end
        end
      end

      if (lsu_valid_in && lsu_ready_out) begin
        cache_valid_in <= 1'b1;
        cache_addr <= lsu_addr_in;
        cache_we <= lsu_we_in;
        cache_wdata <= lsu_value_in;
        if (cache_hit) begin
          lsu_valid_out <= 1'b1;
          lsu_value_out <= cache_rdata;
        end else begin
          for (int i = 0; i < MSHR_COUNT; i++) begin
            if (!mshr_valid[i]) begin
              mshr_valid[i] <= 1'b1;
              mshr[i].paddr <= lsu_addr_in;
              mshr[i].vaddr <= lsu_addr_in;
              mshr[i].we <= lsu_we_in;
              mshr[i].data <= lsu_value_in;
              lc_valid_out <= 1'b1;
              lc_we_out <= 1'b0;
              lc_addr_out <= lsu_addr_in;
              break;
            end
          end
        end
      end
    end
  end

  assign lsu_ready_out = (lsu_valid_in && cache_hit) || (| ~mshr_valid);
  assign lc_ready_out  = 1'b1;

endmodule : l1_data_cache


module mshr_queue #(
    parameter QUEUE_SIZE = 16,
    type mem_request_t = logic  // default placeholder
) (
    input logic clk_in,
    input logic rst_in,
    input logic enqueue_in,
    input logic dequeue_in,
    input mem_request_t req_in,
    input logic [31:0] cycle_count,
    output mem_request_t req_out,
    output logic empty,
    output logic full
);
  mem_request_t queue[QUEUE_SIZE-1:0];
  mem_request_t next_queue[QUEUE_SIZE-1:0];
  logic [$clog2(QUEUE_SIZE)-1:0] next_head;
  logic [$clog2(QUEUE_SIZE):0] next_size;
  logic [$clog2(QUEUE_SIZE)-1:0] head;
  logic [$clog2(QUEUE_SIZE):0] size;
  always_ff @(posedge clk_in or posedge rst_in) begin
    if (rst_in) begin
      head <= 0;
      size <= 0;
    end else begin
      queue <= next_queue;
      size  <= next_size;
      head  <= next_head;
    end
    // $display("Size %d", size);
  end

  always_comb begin
    next_queue = queue;
    next_size  = size;
    next_head  = head;

    if (enqueue_in && !full) begin
      next_queue[(head+size)%QUEUE_SIZE] = req_in;
      next_size = size + 1;
    end
    if (dequeue_in && !empty) begin
      next_size = size - 1;
      next_head = (head + 4'b1) & {$clog2(QUEUE_SIZE) {1'b1}};  // % QUEUE_SIZE
      // $display("dequeuing \n");
    end
  end
  // Full & Empty Flags
  assign req_out = queue[head];
  assign full = (size == QUEUE_SIZE);
  assign empty = (size == 0);
endmodule : mem_req_queue

