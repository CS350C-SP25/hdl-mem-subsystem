package types;

    // Load Store Unit operations
    typedef enum {
        LSU_OP_LOAD,   // these reserve space on the queue. from decode. keeps things in order.
        LSU_OP_STORE,  // these reserve space on the queue. from decode. keeps things in order.
        LSU_OP_ADDR,   // addr may come later
        LSU_OP_DATA    // data may come later (used for store)
    } lsu_op_e;

    // The data provided to the LSU from the ALU will depend on the what value is
    // computed. It is defined as a union here for clarity.
    typedef union packed {
        logic [63:0] addr;
        logic [63:0] value;
    } data_t;

    // Memory operations, passed from the LSU to the L1 cache
    typedef enum {
        MEM_OP_LOAD,
        MEM_OP_STORE
    } mem_op_e;

    typedef enum {
        MMU_UNMAPPED,  // memory is not mapped
        MMU_PROTECTED  // permission bits incorrect
    } mmu_exception_e;

endpackage : types
