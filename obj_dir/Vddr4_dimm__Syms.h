// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDDR4_DIMM__SYMS_H_
#define VERILATED_VDDR4_DIMM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vddr4_dimm.h"

// INCLUDE MODULE CLASSES
#include "Vddr4_dimm___024root.h"
#include "Vddr4_dimm___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vddr4_dimm__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vddr4_dimm* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vddr4_dimm___024root           TOP;

    // CONSTRUCTORS
    Vddr4_dimm__Syms(VerilatedContext* contextp, const char* namep, Vddr4_dimm* modelp);
    ~Vddr4_dimm__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
