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
    input logic [TAG_BITS-1:0] lsu_tag_in,
    input logic lsu_we_in,
    output logic lsu_valid_out,
    output logic lsu_ready_out,
    output logic [63:0] lsu_addr_out,
    output logic [63:0] lsu_value_out,
    output logic lsu_write_complete_out,
    input logic lc_ready_in,
    input logic lc_valid_in,
    input logic [PADDR_BITS-1:0] lc_addr_in,
    input logic [8*B-1:0] lc_value_in,
    output logic lc_valid_out,
    output logic lc_ready_out,
    output logic [PADDR_BITS-1:0] lc_addr_out,
    output logic [8*B-1:0] lc_value_out,
    output logic lc_we_out
);

  localparam PADDR_SIZE = PADDR_BITS;
  typedef struct packed {
    logic [PADDR_SIZE-1:0]                 paddr;           // address
    logic [PADDR_BITS-1:BLOCK_OFFSET_BITS] no_offset_addr;  // address without offset
    logic                                  we;              // write enable
    logic [63:0]                           data;            // if writing data, the store value
    logic [TAG_BITS-1:0]                   tag;             // processor tag, not memory addr tag
    logic                                  valid;
  } mshr_entry_t;

  mshr_entry_t                  mshr_entries [MSHR_COUNT-1:0];

  // Add enqueue and dequeue signals for each MSHR queue
  logic        [MSHR_COUNT-1:0] mshr_enqueue;
  logic        [MSHR_COUNT-1:0] mshr_dequeue;
  mshr_entry_t [MSHR_COUNT-1:0] mshr_outputs;
  logic        [MSHR_COUNT-1:0] mshr_empty;
  logic        [MSHR_COUNT-1:0] mshr_full;



  typedef enum logic [3:0] {
    IDLE,
    SEND_REQ_LC,
    SEND_RESP_HC,
    CHECK_MSHR,
    READ_CACHE,
    WRITE_CACHE,
    WAIT_CACHE,
    WAIT_MSHR,
    FLUSH
  } states;

  states cur_state, next_state;

  reg flush_in_reg;
  reg lsu_valid_in_reg;
  reg lsu_ready_in_reg;
  reg [63:0] lsu_addr_in_reg;
  reg [63:0] lsu_value_in_reg;
  reg [TAG_BITS-1:0] lsu_tag_in_reg;
  reg lsu_we_in_reg;
  reg lc_ready_in_reg;
  reg lc_valid_in_reg;
  reg [PADDR_BITS-1:0] lc_addr_in_reg;
  reg [8*B-1:0] lc_value_in_reg;

  reg lsu_valid_out_reg;
  reg lsu_ready_out_reg;
  reg [63:0] lsu_addr_out_reg;
  reg [63:0] lsu_value_out_reg;
  reg lsu_write_complete_out_reg;
  reg lc_valid_out_reg;
  reg lc_ready_out_reg;
  reg [PADDR_BITS-1:0] lc_addr_out_reg;
  reg [8*B-1:0] lc_value_out_reg;
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

  localparam int BLOCK_OFFSET_BITS = $clog2(B);
  logic [PADDR_BITS-1:0] cur_addr;
  logic [PADDR_BITS-1:BLOCK_OFFSET_BITS] no_offset_addr;

  assign cur_addr = lsu_addr_in_reg[PADDR_BITS-1:0];
  assign no_offset_addr = lsu_addr_in_reg[PADDR_BITS-1:BLOCK_OFFSET_BITS];

  /* MSHR Combinational Variables */
  logic found;
  int   pos;
  logic isFree;
  int   freePos;
  logic needToAdd;

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
    next_state = cur_state;
    needToAdd = 1;

    /* Cache Inputs */
    cache_flush_next = 0;
    cache_hc_valid_next = 0;
    cache_hc_ready_next = 0;
    cache_hc_addr_next = cur_addr;
    cache_hc_value_next = lsu_value_in_reg;
    cache_hc_we_next = lsu_we_in_reg;
    cache_cl_next = 0;
    cache_lc_valid_in_next = 0;
    cache_lc_ready_in_next = 0;
    cache_lc_addr_in_next = lc_addr_in_reg;
    cache_lc_value_in_next = lc_value_in_reg;

    for (int i = 0; i < MSHR_COUNT; i++) begin
      mshr_enqueue[i] = 1'b0;
      mshr_entries[i] = '0;
    end

    found = 0;
    pos = 0;
    isFree = 0;
    freePos = 0;

    case (cur_state)
      IDLE: begin
        // Prefer reading from lc first -- prevents race conditions, data going to proc > priority
        if (lc_valid_in_reg) begin
          lc_ready_out_comb = 1;
        end else if (lsu_valid_in_reg) begin
          lsu_ready_out_comb = 1;
        end

        if (lc_valid_in_reg || lsu_valid_in_reg) begin
          next_state = (lc_valid_in_reg || lsu_we_in_reg) ? WRITE_CACHE : READ_CACHE;
        end
      end

      READ_CACHE: begin
        $display("ATTEMPTING TO READ CACHE DATA");
      end

      WRITE_CACHE: begin
        if (lc_valid_in_reg) begin
          $display("WRITING FROM LC");
          cache_lc_valid_in_next = 1;

        end else begin
          $display("WRITING FROM LSU");
          cache_hc_valid_next = 1;
        end

        next_state = (cache_hc_ready_out_reg || cache_lc_ready_out_reg) ? WAIT_CACHE : cur_state;
      end

      WAIT_CACHE: begin
        if (cache_lc_valid_out_reg) begin
          // Requesting data from lower cache -- this is a MISS, GOTO MISS STATUS HANDLE REGISTERS
          cache_lc_ready_in_next = 1;  // complete transcation
          next_state = CHECK_MSHR;
        end else if (cache_hc_valid_out_reg) begin
          // HIT! We can move to sending data back to the top
          cache_hc_ready_next = 1;  // complete transcation
          lsu_value_out_comb = cache_hc_value_out_reg;
          next_state = SEND_RESP_HC;
        end
      end

      CHECK_MSHR: begin
        // go through every MSHR and check if we already have one
        for (int i = 0; i < MSHR_COUNT; i++) begin
          if (mshr_outputs[i].no_offset_addr == no_offset_addr) begin
            found = 1;
            pos   = i;
          end

          if (!mshr_outputs[i].valid) begin // checks the top of the queue of any mshr, if ts not valid, mshr is free
            isFree  = 1;
            freePos = i;
          end
        end


        // only add if there is no MSHR with the current block address
        if (!found) begin
          // PRIMARY MISS -- let's make a new miss queue
          // add to the MSHR
          if (isFree) begin
            // there is a free MSHR, we will update the queue
            mshr_entries[freePos].valid = 1;
            mshr_entries[freePos].paddr = cur_addr;
            mshr_entries[freePos].we = lsu_we_in_reg;
            mshr_entries[freePos].data = lsu_value_in_reg;
            mshr_entries[freePos].tag = lsu_tag_in_reg;

            mshr_enqueue[freePos] = 1;
          end else begin
            // MSHRs are FULL, need to block
            // TODO: figure out blocking here
          end
        end else begin
          // SECONDARY MISS -- let's add to the miss queue
          if (!mshr_full[pos]) begin
            if (lsu_we_in_reg) begin
              // if this is a write, we will add it to the end of the queue
              // queue is not full, we can add
              mshr_entries[pos].valid = 1;
              mshr_entries[pos].paddr = cur_addr;
              mshr_entries[pos].we = lsu_we_in_reg;
              mshr_entries[pos].data = lsu_value_in_reg;
              mshr_entries[pos].tag = lsu_tag_in_reg;

              mshr_enqueue[pos] = 1;
            end else begin
              // TODO: FWD AND ALSO CHECKING THE ENTIRE QUEUE — HOW? IDK
              // if this is a read, we check if the data being requested is write in MSHR, if it is, we can just fwd
              // if it isn't, then we need to add to the queue as well
              for (int i = 0; i < 16; i++) begin
                if (mshr_queue_full[pos][i].paddr == cur_addr && mshr_queue_full[pos][i].valid && mshr_queue_full[pos][i].we) begin
                  // we have a write, we can simply forward this value!
                  lsu_value_out_comb = mshr_queue_full[pos][i].data;
                  needToAdd = 0;
                end
              end

              if (needToAdd) begin
                // we weren't able to find any writes to the block, lets add a new queue entry
                mshr_entries[pos].valid = 1;
                mshr_entries[pos].paddr = cur_addr;
                mshr_entries[pos].we = lsu_we_in_reg;
                mshr_entries[pos].data = lsu_value_in_reg;
                mshr_entries[pos].tag = lsu_tag_in_reg;

                mshr_enqueue[pos] = 1;
              end
            end

            next_state = IDLE;
          end else begin
            // queue is full, cannot add, block request
            // TODO: FIGURE OUT BLOCKING HERE
          end
        end
      end

      default: begin

      end
    endcase
  end

  always_ff @(posedge clk_in) begin : l1_register_updates
    if (!rst_N_in) begin
      flush_in_reg <= 1'b0;
      lsu_valid_in_reg <= 1'b0;
      lsu_ready_in_reg <= 1'b0;
      lsu_addr_in_reg <= '0;
      lsu_value_in_reg <= '0;
      lsu_tag_in_reg <= '0;
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
      if (next_state == IDLE) begin
        flush_in_reg <= flush_in;
        lsu_valid_in_reg <= lsu_valid_in;
        lsu_ready_in_reg <= lsu_ready_in;
        lsu_addr_in_reg <= lsu_addr_in;
        lsu_value_in_reg <= lsu_value_in;
        lsu_tag_in_reg <= lsu_tag_in;
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

      /* Update Cache Input States */
      cache_flush_reg <= cache_flush_next;
      cache_hc_valid_reg <= cache_hc_valid_next;
      cache_hc_ready_reg <= cache_hc_ready_next;
      cache_hc_addr_reg <= cache_hc_addr_next;
      cache_hc_value_reg <= cache_hc_value_next;
      cache_hc_we_reg <= cache_hc_we_next;
      cache_cache_line_reg <= cache_cache_line_next;
      cache_cl_reg <= cache_cl_next;
      cache_lc_valid_in_reg <= cache_lc_valid_in_next;
      cache_lc_ready_in_reg <= cache_lc_ready_in_next;
      cache_lc_addr_in_reg <= cache_lc_addr_in_next;
      cache_lc_value_in_reg <= cache_lc_value_in_next;
    end
  end

  /* MSHR QUEUES */
  typedef mshr_entry_t mshr_full_t[16-1:0];
  mshr_full_t mshr_queue_full[MSHR_COUNT-1:0];

  genvar i;
  generate
    for (i = 0; i < MSHR_COUNT; i++) begin : mshr_queues
      mshr_queue #(
          .QUEUE_SIZE(16),
          .mem_request_t(mshr_entry_t)
      ) mshr_queue_inst (
          .clk_in(clk_in),
          .rst_in(!rst_N_in),
          .enqueue_in(mshr_enqueue[i]),
          .dequeue_in(mshr_dequeue[i]),
          .req_in(mshr_entries[i]),
          .cycle_count(32'd0),  // dummy input, needs to be connected properly
          .req_out(mshr_outputs[i]),
          .empty(mshr_empty[i]),
          .full(mshr_full[i]),
          .queue_read_only(mshr_queue_full[i])
      );
    end
  endgenerate


  /* Generic Cache Storage  (This cache does NOT send an HC response upon LC response, L1D will need to handle that) */
  // Define registers for inputs
  logic cache_rst_N_reg;
  logic cache_clk_reg;
  logic cache_cs_reg;
  logic cache_flush_reg;
  logic cache_hc_valid_reg;
  logic cache_hc_ready_reg;
  logic [PADDR_BITS-1:0] cache_hc_addr_reg;
  logic [64-1:0] cache_hc_value_reg;
  logic cache_hc_we_reg;
  logic [B*8-1:0] cache_cache_line_reg;
  logic cache_cl_reg;
  logic cache_lc_valid_in_reg;
  logic cache_lc_ready_in_reg;
  logic [PADDR_BITS-1:0] cache_lc_addr_in_reg;
  logic [B*8-1:0] cache_lc_value_in_reg;

  // Define registers for outputs
  logic cache_lc_valid_out_reg;
  logic cache_lc_ready_out_reg;
  logic [PADDR_BITS-1:0] cache_lc_addr_out_reg;
  logic [B*8-1:0] cache_lc_value_out_reg;
  logic cache_we_out_reg;
  logic cache_hc_valid_out_reg;
  logic cache_hc_ready_out_reg;
  logic cache_hc_we_out_reg;
  logic [PADDR_BITS-1:0] cache_hc_addr_out_reg;
  logic [64-1:0] cache_hc_value_out_reg;

  // Define combinational signals for inputs
  logic cache_flush_next;
  logic cache_hc_valid_next;
  logic cache_hc_ready_next;
  logic [PADDR_BITS-1:0] cache_hc_addr_next;
  logic [64-1:0] cache_hc_value_next;
  logic cache_hc_we_next;
  logic [B*8-1:0] cache_cache_line_next;
  logic cache_cl_next;
  logic cache_lc_valid_in_next;
  logic cache_lc_ready_in_next;
  logic [PADDR_BITS-1:0] cache_lc_addr_in_next;
  logic [B*8-1:0] cache_lc_value_in_next;

  cache #(
      .A(A),
      .B(B),
      .C(C),
      .W(64),
      .ADDR_BITS(PADDR_BITS)
  ) cache_module (
      .rst_N_in(rst_N_in),
      .clk_in(clk_in),
      .cs_in(1),
      .flush_in(cache_flush_reg),
      .hc_valid_in(cache_hc_valid_reg),
      .hc_ready_in(cache_hc_ready_reg),
      .hc_addr_in(cache_hc_addr_reg),
      .hc_value_in(cache_hc_value_reg),
      .hc_we_in(cache_hc_we_reg),
      .cache_line_in(cache_cache_line_reg),
      .cl_in(cache_cl_reg),
      .lc_valid_out(cache_lc_valid_out_reg),
      .lc_ready_out(cache_lc_ready_out_reg),
      .lc_addr_out(cache_lc_addr_out_reg),
      .lc_value_out(cache_lc_value_out_reg),
      .we_out(cache_we_out_reg),
      .lc_valid_in(cache_lc_valid_in_reg),
      .lc_ready_in(cache_lc_ready_in_reg),
      .lc_addr_in(cache_lc_addr_in_reg),
      .lc_value_in(cache_lc_value_in_reg),
      .hc_valid_out(cache_hc_valid_out_reg),
      .hc_ready_out(cache_hc_ready_out_reg),
      .hc_we_out(cache_hc_we_out_reg),
      .hc_addr_out(cache_hc_addr_out_reg),
      .hc_value_out(cache_hc_value_out_reg)
  );

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
