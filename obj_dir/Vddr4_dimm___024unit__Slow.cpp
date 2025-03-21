// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr4_dimm.h for the primary calling header

#include "Vddr4_dimm__pch.h"
#include "Vddr4_dimm__Syms.h"
#include "Vddr4_dimm___024unit.h"

void Vddr4_dimm___024unit___ctor_var_reset(Vddr4_dimm___024unit* vlSelf);

Vddr4_dimm___024unit::Vddr4_dimm___024unit(Vddr4_dimm__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vddr4_dimm___024unit___ctor_var_reset(this);
}

void Vddr4_dimm___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vddr4_dimm___024unit::~Vddr4_dimm___024unit() {
}
