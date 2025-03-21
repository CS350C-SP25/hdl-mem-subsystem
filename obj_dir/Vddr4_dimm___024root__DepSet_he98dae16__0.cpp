// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr4_dimm.h for the primary calling header

#include "Vddr4_dimm__pch.h"
#include "Vddr4_dimm__Syms.h"
#include "Vddr4_dimm___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__ico(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG

void Vddr4_dimm___024root___eval_triggers__ico(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vddr4_dimm___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__act(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG

void Vddr4_dimm___024root___eval_triggers__act(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk_in) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.clk_in) 
                                       ^ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vddr4_dimm___024root___dump_triggers__act(vlSelf);
    }
#endif
}
