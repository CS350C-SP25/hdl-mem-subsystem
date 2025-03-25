// A generic cache. It must consider:
// - returning data on a hit (to higher-level cache)
// - requesting data on a miss (to lower-level cache)
// - passing along returned data to higher-level cache
// - evicting (when a higher-level cache returns data)
// The 'higher-level cache' for L1 is the LSU, and the 'lower-level cache' for
// the LLC is DRAM. Remember that 'lower is slower' when it comes to caches.
// The word size is given as a parameter to greatly increase the reusability of
// this module. For example, this same module can (and will) be re-used for the
// TLB.
// Data returned from a lower-level cache is always considered to be clean.
// We never expect a write to a lower-level cache to return data. Only a read is
// expected to return data. This is because a miss is handled as a read from a
// lower-level cache and then a write.
// This was designed expects a NINE (Non-inclusive non-exclusive) cache inclusion
// policy.
module cache #(
    parameter int A = 3,
    parameter int B = 64,
    parameter int C = 1536,
    parameter int W = 64,  // word size
    parameter int ADDR_BITS = 64
) (
    // Generic Inputs
    input logic rst_N_in,
    input logic clk_in,
    input logic cs_in,  // Chip Select (aka. enable) // always enabled
    input logic flush_in,  // flush cache
    // Inputs from higher-level cache
    input logic hc_valid_in,  // from LSU / prev level cache, basically that it wants a request done
    input logic hc_ready_in,  // from higher / dram level cache, basically that IT is ready to receive output from us
    input logic [ADDR_BITS-1:0] hc_addr_in,  // Input address to read/write
    input logic [W-1:0] hc_value_in,  // Input data on write
    input logic hc_we_in,  // from proc or higher-cache, write enable
    input logic [B*8-1:0] cache_line_in,  // input of cache line -- if this is an eviction from higher cache
    input logic cl_in, // input enabled if this is a cache line write -- should be enabled along with hc_we_in
    // Outputs to lower-level cache (or mem con troller)
    output logic lc_valid_out,  // data is ready, basically that we need to receive data from low-level-cache
    output logic lc_ready_out,  // ready to receive input, basically that WE are ready to receive output from it
    output logic [ADDR_BITS-1:0] lc_addr_out,  // Input address to read/write
    output logic [B*8-1:0] lc_value_out,  // addr or value out
    output logic we_out,  // Write to lower-level cache/dram
    // Inputs from lower-level cache or memory controller (returns data, may evict)
    input logic lc_valid_in,  // from lower-level cache / DRAM controller, basically that it wants to give us data
    input logic lc_ready_in,  // from lower-level cache / DRAM controller, basically that IT is ready to receive input
    input logic [ADDR_BITS-1:0] lc_addr_in,  // Input address to read/write
    input logic [B*8-1:0] lc_value_in,  // Input address to read/write
    // Outputs to higher-level cache (returning a fetched value)
    output logic hc_valid_out,  // from LSU / higher-level cache
    output logic hc_ready_out,  // from LSU / higher-level cache
    output logic hc_we_out,  // from LSU / higher-level cache
    output logic [ADDR_BITS-1:0] hc_addr_out,  // Input address to read/write
    output logic [W-1:0] hc_value_out  // Input address to read/write
);

  localparam int NUM_BLOCKS = C / B;
  localparam int NUM_SETS = NUM_BLOCKS / A;
  localparam int BLOCK_OFFSET_BITS = $clog2(B);
  localparam int SET_INDEX_BITS = $clog2(NUM_SETS);
  localparam int TAG_BITS = ADDR_BITS - SET_INDEX_BITS - BLOCK_OFFSET_BITS;
  localparam int LRU_BITS = A - 1;

  // Input registers
  logic flush_reg;
  logic hc_valid_reg;
  logic hc_ready_reg;
  logic [ADDR_BITS-1:0] hc_addr_reg;
  logic [63:0] hc_value_reg;
  logic hc_we_reg;
  logic lc_valid_reg;
  logic lc_ready_reg;
  logic [ADDR_BITS-1:0] lc_addr_reg;
  logic [B*8-1:0] lc_value_reg;

  // Output registers
  logic lc_valid_out_reg;
  logic lc_ready_out_reg;
  logic [ADDR_BITS-1:0] lc_addr_out_reg;
  logic [63:0] lc_value_out_reg;
  logic we_out_reg;
  logic hc_valid_out_reg;
  logic hc_ready_out_reg;
  logic hc_we_out_reg;
  logic [ADDR_BITS-1:0] hc_addr_out_reg;
  logic [63:0] hc_value_out_reg;


  // Temporary outputs from combinational logic
  logic lc_valid_out_comb;
  logic lc_ready_out_comb;
  logic [ADDR_BITS-1:0] lc_addr_out_comb;
  logic [63:0] lc_value_out_comb;
  logic we_out_comb;
  logic hc_valid_out_comb;
  logic hc_ready_out_comb;
  logic hc_we_out_comb;
  logic [ADDR_BITS-1:0] hc_addr_out_comb;
  logic [63:0] hc_value_out_comb;


  // TODO(L1 Cache Team): Implement a cache like this.

  // Data array    
  typedef logic [B * 8-1:0] cache_line_t;
  typedef cache_line_t cache_data_way_t[NUM_SETS-1:0];
  cache_data_way_t cache_data[A-1:0];

  cache_data_way_t cache_temp[A-1:0];
  cache_data_way_t cache_flushed[A-1:0];

  // Tag Entry
  typedef struct packed {
    logic valid;
    logic dirty;
    logic [TAG_BITS-1:0] tag;
  } tag_entry;

  // Tag Array
  typedef tag_entry tag_way[NUM_SETS-1:0];
  tag_way tag_array[A-1:0];
  tag_way tag_temp[A-1:0];

  logic [TAG_BITS-1:0] hc_tag;
  logic [SET_INDEX_BITS-1:0] hc_set;
  logic [BLOCK_OFFSET_BITS-1:0] hc_offset;

  assign {hc_tag, hc_set, hc_offset} = hc_addr_reg;

  logic [TAG_BITS-1:0] lc_tag;
  logic [SET_INDEX_BITS-1:0] lc_set;
  logic [BLOCK_OFFSET_BITS-1:0] lc_offset;

  assign {lc_tag, lc_set, lc_offset} = lc_addr_reg;

  logic [LRU_BITS-1:0] lru_state[NUM_SETS];
  logic [LRU_BITS-1:0] lru_temp[NUM_SETS];
  logic [LRU_BITS-1:0] plru_way_comb[NUM_SETS];
  logic [LRU_BITS-1:0] plru_way_reg[NUM_SETS];

  logic [LRU_BITS-1:0] plru_bits[NUM_SETS];  // PLRU state bits for each set
  logic [LRU_BITS-1:0] plru_temp[NUM_SETS];  // Temporary PLRU bits for update


  logic hit;
  cache_line_t hit_data;
  cache_line_t hit_data_reg;
  cache_line_t plru_data;
  cache_line_t plru_data_reg;
  logic changed;
  tag_entry hit_tag;
  tag_entry hit_tag_reg;
  tag_entry plru_tag;
  tag_entry plru_tag_reg;
  int changed_way;
  logic flush_complete;
  logic cur_dirty;

  cache_line_t cache_line_in_reg;
  logic cl_in_reg;

  int hit_way_reg;
  logic hit_reg;


  typedef enum logic [3:0] {
    IDLE,  // self explanatory
    LOOKUP,  // check if exists
    SEND_LOWER_CACHE_REQ,  // miss
    WRITE_CACHE,  // write data to cache
    EVICT_BLOCK,  // select block to evict
    EVICT_WAIT,  // wait for LC to be ready for Eviction
    RESPOND_HC,  // send data to HC
    FLUSH_CACHE_STATE  // cache state
  } cache_block_state_t;

  cache_block_state_t cur_state, next_state;

  logic [SET_INDEX_BITS-1:0] cur_set;  // = lc_valid_reg ? lc_set : hc_set;
  logic [TAG_BITS-1:0] cur_tag;  //  = lc_valid_reg ? lc_tag : hc_tag;
  logic [BLOCK_OFFSET_BITS-1:0] cur_offset;  // = lc_valid_reg ? lc_offset : hc_offset;
  logic [63:0] cur_data;  // = lc_valid_reg ? lc_value_reg : hc_value_reg;
  logic cur_hit;

  assign cur_set = lc_valid_reg ? lc_set : hc_set;
  assign cur_tag = lc_valid_reg ? lc_tag : hc_tag;
  assign cur_offset = lc_valid_reg ? lc_offset : hc_offset;
  assign cur_data = hc_value_reg;


  logic hc_valid_comb, hc_ready_comb;
  logic lc_valid_comb, lc_ready_comb;

  logic [LRU_BITS-1:0] plru_state[NUM_SETS];  // PLRU state for each set
  logic burst_evict_done;
  logic burst_evict_index;

  cache_line_t evict_data;
  cache_line_t evict_data_reg;

  logic [A-1:0] victim_way_reg;
  function automatic logic [LRU_BITS-1:0] update_plru(logic [LRU_BITS-1:0] current_plru, int way);
    int depth = $clog2(A);
    logic [LRU_BITS-1:0] new_plru = current_plru;
    int node = 0;
    logic bit_i;
    int temp;

    for (int i = depth - 1; i >= 0; i--) begin
      temp = (way >> i) & 1;
      bit_i = temp[0];
      new_plru[node] = ~bit_i;
      node = 2 * node + 1 + int'(bit_i);
      if (node >= LRU_BITS) break;
    end
    return new_plru;
  endfunction

  function automatic int get_victim_way(logic [LRU_BITS-1:0] plru);
    int   depth = $clog2(A);
    int   node = 0;
    int   victim_way = 0;
    logic dir;

    for (int i = 0; i < depth; i++) begin
      dir = plru[node];
      victim_way = (victim_way << 1) | (dir ? 1 : 0);
      node = 2 * node + 1 + int'(dir);
      if (node >= LRU_BITS) break;
    end
    return victim_way;
  endfunction

  always_comb begin : generic_cache_combinational
    next_state = cur_state;
    cur_hit = hit_reg;
    lc_valid_comb = 0;
    hc_valid_comb = 0;
    hc_ready_comb = 0;
    hc_ready_out = 0;
    lc_ready_comb = 0;
    lc_ready_out = 0;
    // lc_addr_out = 0;
    changed_way = hit_way_reg;
    cache_temp = cache_data;
    cur_dirty = 0;
    tag_temp = tag_array;
    hc_value_out_comb = 0;
    hc_ready_comb = (cur_state == IDLE);
    we_out_comb = 0;
    lc_value_out_comb = 0;
    lc_addr_out_comb = 0;
    evict_data = evict_data_reg;
    hc_addr_out_comb = '0;

    plru_temp = plru_state;

    case (cur_state)
      IDLE: begin
        next_state = (lc_valid_reg || hc_valid_reg) ? LOOKUP : IDLE;  // check hit or miss
        // only 1 direction can be ready at a time
        if (lc_valid_reg) begin
          lc_ready_comb = 1;
          lc_ready_out  = 1;
        end else if (hc_valid_reg) begin
          hc_ready_comb = 1;
          hc_ready_out  = 1;
        end
      end
      LOOKUP: begin
        for (int i = 0; i < A; i++) begin
          if (tag_array[i][cur_set].tag == cur_tag && tag_array[i][cur_set].valid) begin
            cur_hit = 1;
            changed_way = i;
          end
        end

        if (lc_valid_reg || cl_in_reg) begin
          changed_way = get_victim_way(plru_state[cur_set]);
          plru_temp[cur_set] = update_plru(plru_state[cur_set], changed_way);
          next_state = tag_array[changed_way][cur_set].dirty ? EVICT_BLOCK : WRITE_CACHE;
        end else if (cur_hit) begin
          changed_way = get_victim_way(plru_state[cur_set]);

          plru_temp[cur_set] = update_plru(plru_state[cur_set], changed_way);

          if (hc_we_reg) begin
            next_state = WRITE_CACHE;  // write data to cache if this is a write (or response from LLC)
          end else begin
            // this must be a read from HC
            next_state = RESPOND_HC;
          end
        end else begin
          changed_way = get_victim_way(plru_state[cur_set]);
          next_state  = SEND_LOWER_CACHE_REQ;
        end
      end

      SEND_LOWER_CACHE_REQ: begin
        lc_valid_comb = 1;  // set out to one, we are sending request
        lc_addr_out_comb = {hc_tag, hc_set, {BLOCK_OFFSET_BITS{1'b0}}};
        if (~lc_ready_reg) begin
          // not ready, we'll stay in this state until it is
          next_state = cur_state;
        end else begin
          // cache is ready, move to waiting for next req
          next_state = IDLE;
        end
      end


      WRITE_CACHE: begin
        if (cl_in_reg || lc_valid_reg) begin
          cache_temp[hit_way_reg][cur_set] = lc_valid_reg ? lc_value_reg : cache_line_in_reg;
        end else begin
          cache_temp[hit_way_reg][cur_set][cur_offset*8+:W] = cur_data;
        end

        tag_temp[hit_way_reg][cur_set].valid = 1;
        tag_temp[hit_way_reg][cur_set].tag = cur_tag;
        tag_temp[hit_way_reg][cur_set].dirty = (lc_valid_reg) ? 0 : 1; // only dirty if its a write from hc, not lc

        next_state = IDLE;
      end

      EVICT_BLOCK: begin
        lc_valid_comb = 1;
        we_out_comb = 1;  // Indicate write to lower cache
        lc_addr_out_comb = {
          tag_array[hit_way_reg][cur_set].tag, cur_set, {BLOCK_OFFSET_BITS{1'b0}}
        };

        // $display("evicting in the cahce module\n");
        evict_data = cache_data[hit_way_reg][cur_set];
        next_state = EVICT_WAIT;
      end

      // In the EVICT_WAIT state:
      EVICT_WAIT: begin
        if (lc_ready_reg) begin
          // Eviction write accepted, cache needs to write the new data
          next_state = WRITE_CACHE;
        end else begin
          next_state = EVICT_WAIT;
        end
      end

      FLUSH_CACHE_STATE: begin
        cache_temp = cache_flushed;
        next_state = IDLE;
      end

      RESPOND_HC: begin  // send data to HC
        for (int i = 0; i < A; i++) begin
          if (tag_array[i][cur_set].tag == cur_tag && tag_array[i][cur_set].valid) begin
            changed_way = i;
          end
        end

        hc_value_out_comb = cache_data[changed_way][cur_set][cur_offset*8+:64];
        hc_valid_comb = 1;
        hc_addr_out_comb = {cur_tag, cur_set, cur_offset};
        next_state = hc_ready_reg ? IDLE : RESPOND_HC;
      end

      default: next_state = IDLE;
    endcase

    // $monitor("[CACHE] Cache data in 0x%h, Line in reg: 0x%h", lc_value_reg, cache_line_in_reg);
  end : generic_cache_combinational


  always_ff @(posedge clk_in) begin : update_registers_and_state_ff
    if (~rst_N_in) begin
      // input and satate
      flush_reg    <= 1'b0;
      hc_valid_reg <= 1'b0;
      hc_ready_reg <= 1'b0;
      hc_addr_reg  <= '0;
      hc_value_reg <= '0;
      hc_we_reg    <= 1'b0;
      lc_valid_reg <= 1'b0;
      lc_ready_reg <= 1'b0;
      lc_addr_reg  <= '0;
      lc_value_reg <= '0;
      evict_data_reg <= '0;
      cache_line_in_reg <= '0;
      cl_in_reg <= '0;

      for (int i = 0; i < NUM_SETS; i++) begin
        lru_state[i] <= '0;  // no more lru
      end
      for (int i = 0; i < NUM_SETS; i++) begin
        plru_state[i] <= '0;
      end
    end else begin
      lc_ready_reg <= lc_ready_in;
      hc_ready_reg <= hc_ready_in;

      if (next_state == IDLE) begin
        flush_reg    <= flush_in;
        hc_valid_reg <= hc_valid_in;
        hc_addr_reg  <= hc_addr_in;
        hc_value_reg <= hc_value_in;
        hc_we_reg    <= hc_we_in;
        lc_valid_reg <= lc_valid_in;
        lc_addr_reg  <= lc_addr_in;
        lc_value_reg <= lc_value_in;
        {cur_tag, cur_set, cur_offset} = (lc_valid_in) ? lc_addr_in : hc_addr_in;
        cache_line_in_reg <= cache_line_in;
        cl_in_reg <= cl_in;
      end


      cur_state <= next_state;
      // because the ready valid protocol says that the ready signal must be on one cycle AFTER receiving the valid
      // we can simply set both HC and LC to one and instantly update them on a clock edge if there is an conflict in 
      // receiving
      lru_state <= lru_temp;
      plru_state <= plru_temp;
      we_out <= we_out_comb;
      evict_data_reg <= evict_data;
      lc_valid_out <= lc_valid_comb;
      hc_valid_out <= hc_valid_comb;
      lc_addr_out <= lc_addr_out_comb;
      hc_addr_out <= hc_addr_out_comb;
      hc_value_out <= hc_value_out_comb;

      // DEBUG STATEMENTS
      if (cur_state == LOOKUP) begin
        if (lc_valid_reg || cl_in_reg) begin
          $display("[CACHE] considering dirty %b for set 0x%x",
                   tag_array[changed_way][cur_set].dirty, cur_set);
          if (tag_array[changed_way][cur_set].dirty) begin
            $display("[CACHE] we evicted 🌾 at %x", hc_addr_in);
          end
        end else if (!cur_hit) begin
          $display("[CACHE] we missed 🥀 at %x, set 0x%x", hc_addr_in, cur_set);
        end
      end else if (cur_state == RESPOND_HC) begin
        $display("[CACHE] Read value %x for addr %x, returning to higher cache",
                 cache_data[changed_way][cur_set][cur_offset*8+:64], {cur_tag, cur_set, cur_offset
                 });
      end
    end
  end

  assign lc_value_out = evict_data_reg;

  always_ff @(negedge clk_in) begin
    // data will either stay the same or be updated
    cache_data <= cache_temp;
    tag_array <= tag_temp;
    // hc_ready_out <= hc_ready_comb;
    // lc_ready_out <= lc_ready_comb;
    // hc_valid_out <= hc_valid_comb;
    // lc_valid_out <= lc_valid_comb;
    hit_reg <= cur_hit;
    hit_way_reg <= changed_way;

    if (next_state == IDLE) begin
      hit_reg <= 0;
      hit_way_reg <= 0;
    end
  end
endmodule : cache
