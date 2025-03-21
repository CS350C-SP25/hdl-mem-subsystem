// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr4_dimm.h for the primary calling header

#include "Vddr4_dimm__pch.h"
#include "Vddr4_dimm___024root.h"

VL_ATTR_COLD void Vddr4_dimm___024root___eval_static(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vddr4_dimm___024root___eval_initial(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk_in__0 = vlSelfRef.clk_in;
}

VL_ATTR_COLD void Vddr4_dimm___024root___eval_final(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__stl(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vddr4_dimm___024root___eval_phase__stl(Vddr4_dimm___024root* vlSelf);

VL_ATTR_COLD void Vddr4_dimm___024root___eval_settle(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vddr4_dimm___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/ddr4_dimm.sv", 32, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vddr4_dimm___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__stl(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vddr4_dimm___024root___stl_sequent__TOP__0(Vddr4_dimm___024root* vlSelf);
VL_ATTR_COLD void Vddr4_dimm___024root____Vm_traceActivitySetAll(Vddr4_dimm___024root* vlSelf);

VL_ATTR_COLD void Vddr4_dimm___024root___eval_stl(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vddr4_dimm___024root___stl_sequent__TOP__0(vlSelf);
        Vddr4_dimm___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vddr4_dimm___024root___stl_sequent__TOP__0(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__dqs__out;
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__dqs__out = 0;
    SData/*15:0*/ ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__dqs__out;
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__dqs__out = 0;
    SData/*15:0*/ ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__dqs__out;
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__dqs__out = 0;
    SData/*15:0*/ ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__dqs__out;
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__dqs__out = 0;
    SData/*15:0*/ ddr4_dimm__DOT__dqs__en0;
    ddr4_dimm__DOT__dqs__en0 = 0;
    SData/*15:0*/ ddr4_dimm__DOT__dqs__en1;
    ddr4_dimm__DOT__dqs__en1 = 0;
    SData/*15:0*/ ddr4_dimm__DOT__dqs__en2;
    ddr4_dimm__DOT__dqs__en2 = 0;
    SData/*15:0*/ ddr4_dimm__DOT__dqs__en3;
    ddr4_dimm__DOT__dqs__en3 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0;
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0;
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0;
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0 = 0;
    CData/*0:0*/ ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0;
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0 = 0;
    // Body
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [0U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [0U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [1U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [1U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [2U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [2U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [3U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [3U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [4U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [4U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [5U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [5U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [6U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [6U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [7U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [7U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [0U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [0U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [1U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [1U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [2U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [2U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [3U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [3U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [4U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [4U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [5U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [5U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [6U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [6U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [7U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [7U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [0U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [0U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [1U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [1U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [2U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [2U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [3U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [3U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [4U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [4U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [5U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [5U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [6U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [6U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [7U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [7U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [0U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [0U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [0U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [0U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [1U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [1U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [1U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [1U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [2U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [2U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [2U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [2U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [3U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [3U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [3U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [3U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [4U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [4U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [4U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [4U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [5U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [5U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [5U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [5U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [6U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [6U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [6U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [6U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
           [7U].__PVT__mask_buffer);
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[0U]) 
           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
              [7U].__PVT__mask_buffer[0U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[1U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[1U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[1U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[2U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[2U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[2U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer[3U] 
        = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
            [7U].__PVT__mask_buffer[3U]) | (0xffff0000U 
                                            & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                            [7U].__PVT__mask_buffer[3U]));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_idx 
        = ((4U & ((IData)(vlSelfRef.bg_in) << 2U)) 
           | (IData)(vlSelfRef.ba_in));
    vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__command_bits 
        = ((((IData)(vlSelfRef.cs_N_in) << 5U) | ((IData)(vlSelfRef.act_in) 
                                                  << 4U)) 
           | ((0xeU & (vlSelfRef.addr_in >> 0xdU)) 
              | (1U & (vlSelfRef.addr_in >> 0xaU))));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0 
        = ((~ (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write)) 
           & (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    ddr4_dimm__DOT__dqs__en0 = (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0)
                                  ? 0xffffU : 0U) | 
                                (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0)
                                   ? 0xffffU : 0U) 
                                 | (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0)
                                      ? 0xffffU : 0U) 
                                    | (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0)
                                         ? 0xffffU : 0U) 
                                       | (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0)
                                            ? 0xffffU
                                            : 0U) | 
                                          (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0)
                                             ? 0xffffU
                                             : 0U) 
                                           | (((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0)
                                                ? 0xffffU
                                                : 0U) 
                                              | ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0)
                                                  ? 0xffffU
                                                  : 0U))))))));
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__dqs__out 
        = (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0)
               ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read)
               : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0)
                         ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h4f18f8fd_0_0)
                                              ? 0xffffU
                                              : 0U)) 
           | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0)
                  ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read)
                  : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0)
                            ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_hffdc53b7_0_0)
                                                 ? 0xffffU
                                                 : 0U)) 
              | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0)
                     ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read)
                     : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0)
                               ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h18287ab8_0_0)
                                                    ? 0xffffU
                                                    : 0U)) 
                 | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0)
                        ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read)
                        : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0)
                                  ? 0xffffU : 0U)) 
                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc14175fd_0_0)
                         ? 0xffffU : 0U)) | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0)
                                                 ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read)
                                                 : 0U) 
                                               & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0)
                                                   ? 0xffffU
                                                   : 0U)) 
                                              & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h863de8c3_0_0)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0)
                                                    ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read)
                                                    : 0U) 
                                                  & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0)
                                                      ? 0xffffU
                                                      : 0U)) 
                                                 & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hea994ae4_0_0)
                                                     ? 0xffffU
                                                     : 0U)) 
                                                | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0)
                                                       ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read)
                                                       : 0U) 
                                                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_h6f42e1a8_0_0)
                                                        ? 0xffffU
                                                        : 0U)) 
                                                   | ((((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0)
                                                         ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read)
                                                         : 0U) 
                                                       & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0)
                                                           ? 0xffffU
                                                           : 0U)) 
                                                      & ((IData)(ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h2f9bddf6_0_0)
                                                          ? 0xffffU
                                                          : 0U)))))))));
    ddr4_dimm__DOT__dqs__en1 = (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0)
                                  ? 0xffffU : 0U) | 
                                (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0)
                                   ? 0xffffU : 0U) 
                                 | (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0)
                                      ? 0xffffU : 0U) 
                                    | (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0)
                                         ? 0xffffU : 0U) 
                                       | (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0)
                                            ? 0xffffU
                                            : 0U) | 
                                          (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0)
                                             ? 0xffffU
                                             : 0U) 
                                           | (((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0)
                                                ? 0xffffU
                                                : 0U) 
                                              | ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0)
                                                  ? 0xffffU
                                                  : 0U))))))));
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__dqs__out 
        = (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0)
               ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read)
               : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0)
                         ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2ec298be_0_0)
                                              ? 0xffffU
                                              : 0U)) 
           | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0)
                  ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read)
                  : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0)
                            ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_ha1739c51_0_0)
                                                 ? 0xffffU
                                                 : 0U)) 
              | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0)
                     ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read)
                     : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0)
                               ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h920fd176_0_0)
                                                    ? 0xffffU
                                                    : 0U)) 
                 | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0)
                        ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read)
                        : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0)
                                  ? 0xffffU : 0U)) 
                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_h2139832b_0_0)
                         ? 0xffffU : 0U)) | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0)
                                                 ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read)
                                                 : 0U) 
                                               & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0)
                                                   ? 0xffffU
                                                   : 0U)) 
                                              & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h036b3e4f_0_0)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0)
                                                    ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read)
                                                    : 0U) 
                                                  & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0)
                                                      ? 0xffffU
                                                      : 0U)) 
                                                 & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h89591880_0_0)
                                                     ? 0xffffU
                                                     : 0U)) 
                                                | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0)
                                                       ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read)
                                                       : 0U) 
                                                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hc27604b4_0_0)
                                                        ? 0xffffU
                                                        : 0U)) 
                                                   | ((((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0)
                                                         ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read)
                                                         : 0U) 
                                                       & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0)
                                                           ? 0xffffU
                                                           : 0U)) 
                                                      & ((IData)(ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h7b6277a8_0_0)
                                                          ? 0xffffU
                                                          : 0U)))))))));
    ddr4_dimm__DOT__dqs__en2 = (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0)
                                  ? 0xffffU : 0U) | 
                                (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0)
                                   ? 0xffffU : 0U) 
                                 | (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0)
                                      ? 0xffffU : 0U) 
                                    | (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0)
                                         ? 0xffffU : 0U) 
                                       | (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0)
                                            ? 0xffffU
                                            : 0U) | 
                                          (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0)
                                             ? 0xffffU
                                             : 0U) 
                                           | (((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0)
                                                ? 0xffffU
                                                : 0U) 
                                              | ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0)
                                                  ? 0xffffU
                                                  : 0U))))))));
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__dqs__out 
        = (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0)
               ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read)
               : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0)
                         ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h2709c328_0_0)
                                              ? 0xffffU
                                              : 0U)) 
           | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0)
                  ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read)
                  : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0)
                            ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h62ec7f47_0_0)
                                                 ? 0xffffU
                                                 : 0U)) 
              | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0)
                     ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read)
                     : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0)
                               ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_hf936ce60_0_0)
                                                    ? 0xffffU
                                                    : 0U)) 
                 | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0)
                        ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read)
                        : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0)
                                  ? 0xffffU : 0U)) 
                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hc53185e4_0_0)
                         ? 0xffffU : 0U)) | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0)
                                                 ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read)
                                                 : 0U) 
                                               & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0)
                                                   ? 0xffffU
                                                   : 0U)) 
                                              & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h5a938503_0_0)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0)
                                                    ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read)
                                                    : 0U) 
                                                  & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0)
                                                      ? 0xffffU
                                                      : 0U)) 
                                                 & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_h21fc6040_0_0)
                                                     ? 0xffffU
                                                     : 0U)) 
                                                | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0)
                                                       ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read)
                                                       : 0U) 
                                                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hb3020249_0_0)
                                                        ? 0xffffU
                                                        : 0U)) 
                                                   | ((((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0)
                                                         ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read)
                                                         : 0U) 
                                                       & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0)
                                                           ? 0xffffU
                                                           : 0U)) 
                                                      & ((IData)(ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_h65d6a1a6_0_0)
                                                          ? 0xffffU
                                                          : 0U)))))))));
    ddr4_dimm__DOT__dqs__en3 = (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0)
                                  ? 0xffffU : 0U) | 
                                (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0)
                                   ? 0xffffU : 0U) 
                                 | (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0)
                                      ? 0xffffU : 0U) 
                                    | (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0)
                                         ? 0xffffU : 0U) 
                                       | (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0)
                                            ? 0xffffU
                                            : 0U) | 
                                          (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0)
                                             ? 0xffffU
                                             : 0U) 
                                           | (((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0)
                                                ? 0xffffU
                                                : 0U) 
                                              | ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0)
                                                  ? 0xffffU
                                                  : 0U))))))));
    ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__dqs__out 
        = (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0)
               ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read)
               : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0)
                         ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT____VdfgRegularize_h37b74bdb_0_0)
                                              ? 0xffffU
                                              : 0U)) 
           | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0)
                  ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read)
                  : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0)
                            ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT____VdfgRegularize_h672555bb_0_0)
                                                 ? 0xffffU
                                                 : 0U)) 
              | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0)
                     ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read)
                     : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0)
                               ? 0xffffU : 0U)) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT____VdfgRegularize_h89f220b8_0_0)
                                                    ? 0xffffU
                                                    : 0U)) 
                 | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0)
                        ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read)
                        : 0U) & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0)
                                  ? 0xffffU : 0U)) 
                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT____VdfgRegularize_hbb991baf_0_0)
                         ? 0xffffU : 0U)) | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0)
                                                 ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read)
                                                 : 0U) 
                                               & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0)
                                                   ? 0xffffU
                                                   : 0U)) 
                                              & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT____VdfgRegularize_h02fb970b_0_0)
                                                  ? 0xffffU
                                                  : 0U)) 
                                             | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0)
                                                    ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read)
                                                    : 0U) 
                                                  & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0)
                                                      ? 0xffffU
                                                      : 0U)) 
                                                 & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT____VdfgRegularize_hd7a3f398_0_0)
                                                     ? 0xffffU
                                                     : 0U)) 
                                                | (((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0)
                                                       ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read)
                                                       : 0U) 
                                                     & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0)
                                                         ? 0xffffU
                                                         : 0U)) 
                                                    & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT____VdfgRegularize_hf79b407b_0_0)
                                                        ? 0xffffU
                                                        : 0U)) 
                                                   | ((((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0)
                                                         ? (IData)(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read)
                                                         : 0U) 
                                                       & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0)
                                                           ? 0xffffU
                                                           : 0U)) 
                                                      & ((IData)(ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT____VdfgRegularize_heb3bcf5c_0_0)
                                                          ? 0xffffU
                                                          : 0U)))))))));
    vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out4 
        = ((0xffffffffffff0000ULL & vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out4) 
           | (IData)((IData)(ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__dqs__out)));
    vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out5 
        = ((0xffffffff0000ffffULL & vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out5) 
           | ((QData)((IData)(ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__dqs__out)) 
              << 0x10U));
    vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out6 
        = ((0xffff0000ffffffffULL & vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out6) 
           | ((QData)((IData)(ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__dqs__out)) 
              << 0x20U));
    vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out7 
        = ((0xffffffffffffULL & vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out7) 
           | ((QData)((IData)(ddr4_dimm__DOT____Vcelloutt__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__dqs__out)) 
              << 0x30U));
    vlSelfRef.dqs = (((QData)((IData)(ddr4_dimm__DOT__dqs__en0)) 
                      | (((QData)((IData)(ddr4_dimm__DOT__dqs__en1)) 
                          << 0x10U) | (((QData)((IData)(ddr4_dimm__DOT__dqs__en2)) 
                                        << 0x20U) | 
                                       ((QData)((IData)(ddr4_dimm__DOT__dqs__en3)) 
                                        << 0x30U)))) 
                     & ((vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out4 
                         & (QData)((IData)(ddr4_dimm__DOT__dqs__en0))) 
                        | ((vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out5 
                            & ((QData)((IData)(ddr4_dimm__DOT__dqs__en1)) 
                               << 0x10U)) | ((vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out6 
                                              & ((QData)((IData)(ddr4_dimm__DOT__dqs__en2)) 
                                                 << 0x20U)) 
                                             | (vlSelfRef.ddr4_dimm__DOT__dqs__out__strong__out7 
                                                & ((QData)((IData)(ddr4_dimm__DOT__dqs__en3)) 
                                                   << 0x30U))))));
}

VL_ATTR_COLD void Vddr4_dimm___024root___eval_triggers__stl(Vddr4_dimm___024root* vlSelf);

VL_ATTR_COLD bool Vddr4_dimm___024root___eval_phase__stl(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vddr4_dimm___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vddr4_dimm___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__ico(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___dump_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__act(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk_in)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(edge clk_in)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__nba(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk_in)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(edge clk_in)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vddr4_dimm___024root____Vm_traceActivitySetAll(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vddr4_dimm___024root___ctor_var_reset(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_in = VL_RAND_RESET_I(1);
    vlSelf->rst_N_in = VL_RAND_RESET_I(1);
    vlSelf->cs_N_in = VL_RAND_RESET_I(1);
    vlSelf->cke_in = VL_RAND_RESET_I(1);
    vlSelf->act_in = VL_RAND_RESET_I(1);
    vlSelf->addr_in = VL_RAND_RESET_I(17);
    vlSelf->bg_in = VL_RAND_RESET_I(2);
    vlSelf->ba_in = VL_RAND_RESET_I(2);
    vlSelf->dqm_in = VL_RAND_RESET_Q(64);
    vlSelf->dqs = VL_RAND_RESET_Q(64);
    vlSelf->ddr4_dimm__DOT__dqs__out__strong__out4 = VL_RAND_RESET_Q(64);
    vlSelf->ddr4_dimm__DOT__dqs__out__strong__out5 = VL_RAND_RESET_Q(64);
    vlSelf->ddr4_dimm__DOT__dqs__out__strong__out6 = VL_RAND_RESET_Q(64);
    vlSelf->ddr4_dimm__DOT__dqs__out__strong__out7 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__row_idx = VL_RAND_RESET_I(8);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__col_idx = VL_RAND_RESET_I(4);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command_set = VL_RAND_RESET_I(1);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command = 0;
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__write_buffer = VL_RAND_RESET_I(16);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__mask_buffer = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__write_buffer);
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__mask_buffer);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count = VL_RAND_RESET_I(32);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_idx = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__command_bits = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__row_idx = VL_RAND_RESET_I(8);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__col_idx = VL_RAND_RESET_I(4);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command_set = VL_RAND_RESET_I(1);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command = 0;
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__write_buffer = VL_RAND_RESET_I(16);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__mask_buffer = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__write_buffer);
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__mask_buffer);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__row_idx = VL_RAND_RESET_I(8);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__col_idx = VL_RAND_RESET_I(4);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command_set = VL_RAND_RESET_I(1);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command = 0;
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__write_buffer = VL_RAND_RESET_I(16);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__mask_buffer = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__write_buffer);
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__mask_buffer);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__row_idx = VL_RAND_RESET_I(8);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__col_idx = VL_RAND_RESET_I(4);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command_set = VL_RAND_RESET_I(1);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__command = 0;
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__write_buffer = VL_RAND_RESET_I(16);
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs[__Vi0].__PVT__mask_buffer = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__write_buffer);
        VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers[__Vi0].__PVT__mask_buffer);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer);
    VL_RAND_RESET_W(128, vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 16; ++__Vi1) {
            vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row = VL_RAND_RESET_I(8);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val = VL_RAND_RESET_I(3);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read = VL_RAND_RESET_I(16);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write = VL_RAND_RESET_I(1);
    vlSelf->ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v0 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = VL_RAND_RESET_I(8);
    vlSelf->__VdlySet__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v1 = 0;
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v2 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v3 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v8 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v9 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v10 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v11 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v12 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v13 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v14 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyVal__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(16);
    vlSelf->__VdlyDim1__ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__bank__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__clk_in__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
