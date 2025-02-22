import types::*;

module mmu #(
    parameter int PHYS_MEM_SIZE = 18,
    parameter int PAGESIZE = 12,
    parameter int VADDR_SIZE = 48
) (
    input logic clk_in,
    input logic [VADDR_SIZE-1:PAGESIZE] vpn,  // Virtual Page Number
    output logic [PHYS_MEM_SIZE-1:PAGESIZE] pfn,  // Page Frame Number
    output mmu_exception_e mmu_exception_out
);
    // TODO(Nate): The mmu maps a virtual page to a physical page, and also
    // returns exceptions. In reality, the TLB does this, but you interface with
    // the MMU. !!! I should write this !!!
    cache#() ();
endmodule : mmu
