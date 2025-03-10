# HDL Implementation for a Memory Subsystem

This is a project undertaken by students taking CS350C, an undergraduate advanced computer architecture course offered by the University of Texas at Austin. 
It attempts to implement a simple memory subsystem at the register transistor level from 
DIMM, SDRAM Controller, L1D Cache, to L/S Unit. 

# DIMM

This implementation uses the DDR4 standard. For simplicity, we do not consider rank of chips on the DIMM. 

# SDRAM Controller

The SDRAM controller roughly implements the FR-FCFS paper. [Rixner 2004]

# ACA DMEM Assignment ideology

This README contains miscellaneous information and documentation about
the lab

## The Valid-Ready Procotol

All modules communicate using this protocol

## Notes in general,

When chip select is inactive, the outputs of a chip are held in a high impedance state, so that other modules connected to the same wires may drive the signal. This is incredibly useful. For each module, we will provide some sample stuff.

## Priority MUXes

All modules that you're implementing with the exception of the DIMM may
face contention from multiple other modules trying to access a finite
number of hardware resources at a time. To manage contention, this particular memory subsystem guaranteed that which is returning from DRAM always take a higher priority than data traveling towards DRAM. This decision was made to prevent deadlock scenarios.

## The purpose of a refresh
Simulating a refresh is only so that we can simulate closing a row for timing analysis
