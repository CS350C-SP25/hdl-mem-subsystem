// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vddr4_dimm.h for the primary calling header

#include "Vddr4_dimm__pch.h"
#include "Vddr4_dimm___024root.h"

void Vddr4_dimm___024root___eval_triggers__act(Vddr4_dimm___024root* vlSelf);
void Vddr4_dimm___024root___eval_act(Vddr4_dimm___024root* vlSelf);

bool Vddr4_dimm___024root___eval_phase__act(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vddr4_dimm___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vddr4_dimm___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vddr4_dimm___024root___eval_nba(Vddr4_dimm___024root* vlSelf);

bool Vddr4_dimm___024root___eval_phase__nba(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vddr4_dimm___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__ico(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG
bool Vddr4_dimm___024root___eval_phase__ico(Vddr4_dimm___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__nba(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vddr4_dimm___024root___dump_triggers__act(Vddr4_dimm___024root* vlSelf);
#endif  // VL_DEBUG

void Vddr4_dimm___024root___eval(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vddr4_dimm___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/ddr4_dimm.sv", 32, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vddr4_dimm___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vddr4_dimm___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/ddr4_dimm.sv", 32, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vddr4_dimm___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/ddr4_dimm.sv", 32, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vddr4_dimm___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vddr4_dimm___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vddr4_dimm___024root___eval_debug_assertions(Vddr4_dimm___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_in & 0xfeU)))) {
        Verilated::overWidthError("clk_in");}
    if (VL_UNLIKELY(((vlSelfRef.rst_N_in & 0xfeU)))) {
        Verilated::overWidthError("rst_N_in");}
    if (VL_UNLIKELY(((vlSelfRef.cs_N_in & 0xfeU)))) {
        Verilated::overWidthError("cs_N_in");}
    if (VL_UNLIKELY(((vlSelfRef.cke_in & 0xfeU)))) {
        Verilated::overWidthError("cke_in");}
    if (VL_UNLIKELY(((vlSelfRef.act_in & 0xfeU)))) {
        Verilated::overWidthError("act_in");}
    if (VL_UNLIKELY(((vlSelfRef.addr_in & 0xfffe0000U)))) {
        Verilated::overWidthError("addr_in");}
    if (VL_UNLIKELY(((vlSelfRef.bg_in & 0xfcU)))) {
        Verilated::overWidthError("bg_in");}
    if (VL_UNLIKELY(((vlSelfRef.ba_in & 0xfcU)))) {
        Verilated::overWidthError("ba_in");}
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu2__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{row_idx:" + VL_TO_STRING(obj.__PVT__row_idx);
        out += ", col_idx:" + VL_TO_STRING(obj.__PVT__col_idx);
        out += ", command_set:" + VL_TO_STRING(obj.__PVT__command_set);
        out += ", command:" + VL_TO_STRING(obj.__PVT__command);
        out += ", write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu3__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu2__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{row_idx:" + VL_TO_STRING(obj.__PVT__row_idx);
        out += ", col_idx:" + VL_TO_STRING(obj.__PVT__col_idx);
        out += ", command_set:" + VL_TO_STRING(obj.__PVT__command_set);
        out += ", command:" + VL_TO_STRING(obj.__PVT__command);
        out += ", write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu3__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu2__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{row_idx:" + VL_TO_STRING(obj.__PVT__row_idx);
        out += ", col_idx:" + VL_TO_STRING(obj.__PVT__col_idx);
        out += ", command_set:" + VL_TO_STRING(obj.__PVT__command_set);
        out += ", command:" + VL_TO_STRING(obj.__PVT__command);
        out += ", write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu3__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu2__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{row_idx:" + VL_TO_STRING(obj.__PVT__row_idx);
        out += ", col_idx:" + VL_TO_STRING(obj.__PVT__col_idx);
        out += ", command_set:" + VL_TO_STRING(obj.__PVT__command_set);
        out += ", command:" + VL_TO_STRING(obj.__PVT__command);
        out += ", write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}

std::string VL_TO_STRING(const Vddr4_dimm_ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____typeimpsu3__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{write_buffer:" + VL_TO_STRING(obj.__PVT__write_buffer);
        out += ", mask_buffer:" + VL_TO_STRING(obj.__PVT__mask_buffer);
        out += "}";
    return out;
}
