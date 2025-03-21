// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vddr4_dimm.h for the primary calling header

#ifndef VERILATED_VDDR4_DIMM___024UNIT_H_
#define VERILATED_VDDR4_DIMM___024UNIT_H_  // guard

#include "verilated.h"


class Vddr4_dimm__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vddr4_dimm___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vddr4_dimm__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vddr4_dimm___024unit(Vddr4_dimm__Syms* symsp, const char* v__name);
    ~Vddr4_dimm___024unit();
    VL_UNCOPYABLE(Vddr4_dimm___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
