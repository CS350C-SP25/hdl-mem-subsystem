# HDL Implementation for a Memory Subsystem

This is a project undertaken by students taking CS350C, an undergraduate advanced computer architecture course offered by the University of Texas at Austin.
It attempts to implement a simple memory subsystem at the register transistor level from
DIMM, SDRAM Controller, L1D Cache, to L/S Unit.

## DIMM

This implementation uses the DDR4 standard. For simplicity, we do not consider rank of chips on the DIMM.

- testing DIMM can be done using the verification testbench provided at `verif/dimm_tb2.cpp`
- the testbench can be built using `make dimm` \[TODO: verify this]
- it can be compiled with quartus using `quartus_map --read_settings_files=on --write_settings_files=off mem-subsystem-dimm -c ddr4_dimm`

## Cache Hiearchy

The cache hierarchy only consists of l1d and llc. L1 data cache and last level cache encapsulate a basic cache module.

### Basic Cache Module

The cache is non-blocking. Only the L1D includes MSHRs. To keep design simple, lower caches take in entire cache lines when higher caches evict.

- the cache module can be verified using the testbench provided at `tb/cache_tb.sv`
- the testbench can be built using `make cache`

### Last Level Cache

The last level cache encapsulates a cache and a memory controller that roughly implements the FR-FCFS paper. [Rixner 2004] We ended up removing the SDRAM controller anyways and just including the memory controller in LLC for simplicity.

- testing DIMM and SDRAM Controller integration can be done using the module `tb/llc_dimm_tb.sv`. (it's not actually a testbench, just a wrapper module)
- a comprehensive verification testbench is provided at `verif/llc_dimm_verif.cpp`
- the testbench can be built using `make llc_dimm`

### L1D Cache

- the l1d testbench can be built using `make l1d`

We integrate with the LSU and with the LLC independently. Would like extra credit for that. Additionally, we also
run with the full system integration, though that has limited success. Use `make l1d_lsu` to run the L1d with LSU testbench,
and `make l1d_llc` for the L1d with LLC testbench. Both should function correctly. Note that the ready valid protocol is used.

## Load/Store Unit

I would like extra credit on the integration with neighboring modules, specifically with the L1D$, as seen in `lsu_l1d_actual_tb.sv`, which can be ran with `make l1d_lsu`

You can also run the LSU test cases with `make lsu` from the `lsu_tb1.sv` test bench.

## Extra Credit Features for Grading

Currently working to integrate all the modules. The DIMM and LLC have been fully integrated. LLC and L1D should work together integrated if you connect the right signals. DIMM can be synthesized on quartus.

## ACA DMEM Assignment ideology

This README contains miscellaneous information and documentation about
the lab

### The Valid-Ready Procotol

All modules communicate using this protocol

### Notes in general,

When chip select is inactive, the outputs of a chip are held in a high impedance state, so that other modules connected to the same wires may drive the signal. This is incredibly useful. For each module, we will provide some sample stuff.

### Priority MUXes

All modules that you're implementing with the exception of the DIMM may
face contention from multiple other modules trying to access a finite
number of hardware resources at a time. To manage contention, this particular memory subsystem guaranteed that which is returning from DRAM always take a higher priority than data traveling towards DRAM. This decision was made to prevent deadlock scenarios.

### The purpose of a refresh

Simulating a refresh is only so that we can simulate closing a row for timing analysis
