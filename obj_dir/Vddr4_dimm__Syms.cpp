// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vddr4_dimm__pch.h"
#include "Vddr4_dimm.h"
#include "Vddr4_dimm___024root.h"
#include "Vddr4_dimm___024unit.h"

// FUNCTIONS
Vddr4_dimm__Syms::~Vddr4_dimm__Syms()
{
}

Vddr4_dimm__Syms::Vddr4_dimm__Syms(VerilatedContext* contextp, const char* namep, Vddr4_dimm* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(1497);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
