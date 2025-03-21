// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vddr4_dimm__Syms.h"


void Vddr4_dimm___024root__trace_chg_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vddr4_dimm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_chg_0\n"); );
    // Init
    Vddr4_dimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vddr4_dimm___024root*>(voidSelf);
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vddr4_dimm___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vddr4_dimm___024root__trace_chg_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_20;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_32;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_44;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_60;
    VlWide<4>/*127:0*/ __Vtemp_64;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_72;
    VlWide<4>/*127:0*/ __Vtemp_76;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_84;
    VlWide<4>/*127:0*/ __Vtemp_88;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_96;
    VlWide<4>/*127:0*/ __Vtemp_100;
    VlWide<4>/*127:0*/ __Vtemp_104;
    VlWide<4>/*127:0*/ __Vtemp_108;
    VlWide<4>/*127:0*/ __Vtemp_112;
    VlWide<4>/*127:0*/ __Vtemp_116;
    VlWide<4>/*127:0*/ __Vtemp_120;
    VlWide<4>/*127:0*/ __Vtemp_124;
    VlWide<4>/*127:0*/ __Vtemp_128;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+1,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+2,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+3,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+4,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+5,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+6,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+7,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+8,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+9,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+10,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+11,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+12,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+13,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+14,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+15,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+16,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+17,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+18,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+19,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+20,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+21,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+22,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+23,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+24,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+25,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+26,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+27,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+28,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+29,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+30,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+31,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+32,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+33,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+34,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+35,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+36,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+37,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+38,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+39,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+40,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+41,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+42,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+43,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+44,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+45,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+46,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+47,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+48,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+49,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+50,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+51,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+52,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+53,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+54,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+55,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+56,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+57,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+58,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+59,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+60,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+61,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+62,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+63,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+64,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+65,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+66,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+67,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+68,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+69,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+70,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+71,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgIData(oldp+72,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+73,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+74,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+75,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+76,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+77,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+78,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+79,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+80,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+81,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+82,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+83,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+84,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+85,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+86,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+87,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+88,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+89,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+90,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+91,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+92,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+93,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+94,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+95,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+96,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+97,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+98,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+99,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+100,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+101,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+102,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+103,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+104,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+105,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+106,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+107,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+108,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+109,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+110,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+111,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+112,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+113,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+114,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+115,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+116,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+117,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+118,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+119,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+120,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+121,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+122,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+123,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+124,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+125,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+126,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+127,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+128,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+129,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+130,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+131,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+132,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+133,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+134,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+135,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+136,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+137,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+138,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+139,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+140,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+141,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+142,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+143,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+144,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgIData(oldp+145,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+146,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+147,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+148,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+149,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+150,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+151,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+152,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+153,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+154,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+155,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+156,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+157,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+158,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+159,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+160,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+161,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+162,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+163,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+164,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+165,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+166,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+167,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+168,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+169,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+170,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+171,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+172,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+173,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+174,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+175,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+176,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+177,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+178,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+179,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+180,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+181,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+182,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+183,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+184,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+185,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+186,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+187,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+188,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+189,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+190,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+191,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+192,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+193,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+194,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+195,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+196,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+197,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+198,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+199,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+200,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+201,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+202,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+203,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+204,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+205,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+206,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+207,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+208,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+209,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+210,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+211,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+212,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+213,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+214,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+215,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+216,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+217,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgIData(oldp+218,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+219,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+220,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+221,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+222,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+223,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+224,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+225,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+226,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+227,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+228,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+229,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+230,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+231,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+232,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+233,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+234,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+235,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+236,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+237,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+238,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+239,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+240,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+241,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+242,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+243,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+244,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+245,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+246,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+247,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+248,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+249,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+250,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+251,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+252,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+253,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+254,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+255,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+256,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+257,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+258,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+259,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+260,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+261,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+262,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+263,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+264,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+265,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+266,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+267,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+268,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+269,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+270,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+271,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+272,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+273,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+274,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+275,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+276,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+277,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+278,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+279,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+280,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+281,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgBit(oldp+282,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
        bufp->chgBit(oldp+283,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
        bufp->chgBit(oldp+284,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
        bufp->chgBit(oldp+285,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
        bufp->chgBit(oldp+286,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
        bufp->chgIData(oldp+287,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
        bufp->chgBit(oldp+288,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
        bufp->chgCData(oldp+289,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
        bufp->chgBit(oldp+290,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
        bufp->chgIData(oldp+291,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+292,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
        bufp->chgCData(oldp+293,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+294,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+295,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+296,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+297,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+298,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+299,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+300,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+301,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+302,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+303,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+304,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+305,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+306,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+307,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+308,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgIData(oldp+309,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
        bufp->chgCData(oldp+310,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+311,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+312,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+313,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+314,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+315,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+316,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+317,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+318,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+319,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+320,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+321,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+322,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+323,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+324,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+325,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgIData(oldp+326,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
        bufp->chgCData(oldp+327,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+328,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+329,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+330,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+331,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+332,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+333,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+334,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+335,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+336,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+337,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+338,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+339,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+340,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+341,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+342,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgIData(oldp+343,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
        bufp->chgCData(oldp+344,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+345,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+346,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+347,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+348,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+349,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+350,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+351,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+352,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+353,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+354,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+355,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+356,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+357,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
        bufp->chgCData(oldp+358,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
        bufp->chgBit(oldp+359,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgWData(oldp+360,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+364,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+368,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+372,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+376,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+380,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+384,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+388,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+392,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+396,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+400,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+404,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+408,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+412,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+416,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+420,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__mask_buffer),128);
        bufp->chgBit(oldp+424,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+425,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+426,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+427,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+428,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+429,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+430,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+431,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+432,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+433,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+434,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+435,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+436,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+437,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+438,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+439,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgWData(oldp+440,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+444,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+448,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+452,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+456,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+460,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+464,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+468,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+472,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+476,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+480,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+484,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+488,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+492,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+496,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+500,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__mask_buffer),128);
        bufp->chgBit(oldp+504,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+505,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+506,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+507,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+508,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+509,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+510,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+511,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+512,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+513,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+514,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+515,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+516,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+517,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+518,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+519,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgWData(oldp+520,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+524,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+528,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+532,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+536,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+540,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+544,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+548,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+552,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+556,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+560,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+564,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+568,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+572,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+576,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+580,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__mask_buffer),128);
        bufp->chgBit(oldp+584,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+585,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+586,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+587,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+588,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+589,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+590,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+591,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+592,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+593,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+594,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+595,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+596,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+597,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+598,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+599,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgWData(oldp+600,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+604,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [0U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+608,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+612,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [1U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+616,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+620,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [2U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+624,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+628,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [3U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+632,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+636,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [4U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+640,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+644,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [5U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+648,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+652,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [6U].__PVT__mask_buffer),128);
        bufp->chgWData(oldp+656,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__write_buffer),128);
        bufp->chgWData(oldp+660,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                                 [7U].__PVT__mask_buffer),128);
        bufp->chgBit(oldp+664,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+665,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+666,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+667,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+668,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+669,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+670,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+671,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+672,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+673,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+674,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+675,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+676,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+677,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
        bufp->chgBit(oldp+678,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
        bufp->chgSData(oldp+679,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        __Vtemp_4[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [0U].__PVT__write_buffer[0U]) 
                         | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                         [0U].__PVT__write_buffer);
        __Vtemp_4[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [0U].__PVT__write_buffer[1U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[1U]));
        __Vtemp_4[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [0U].__PVT__write_buffer[2U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[2U]));
        __Vtemp_4[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [0U].__PVT__write_buffer[3U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+680,(__Vtemp_4),128);
        bufp->chgSData(oldp+684,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+685,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+686,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+687,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+688,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+689,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+690,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+691,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+692,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+693,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+694,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+695,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+696,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+697,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+698,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+699,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_8[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [1U].__PVT__write_buffer[0U]) 
                         | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                         [1U].__PVT__write_buffer);
        __Vtemp_8[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [1U].__PVT__write_buffer[1U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[1U]));
        __Vtemp_8[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [1U].__PVT__write_buffer[2U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[2U]));
        __Vtemp_8[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                          [1U].__PVT__write_buffer[3U]) 
                         | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+700,(__Vtemp_8),128);
        bufp->chgSData(oldp+704,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+705,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+706,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+707,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+708,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+709,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+710,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+711,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+712,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+713,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+714,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+715,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+716,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+717,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+718,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+719,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_12[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [2U].__PVT__write_buffer);
        __Vtemp_12[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[1U]));
        __Vtemp_12[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[2U]));
        __Vtemp_12[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+720,(__Vtemp_12),128);
        bufp->chgSData(oldp+724,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+725,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+726,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+727,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+728,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+729,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+730,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+731,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+732,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+733,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+734,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+735,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+736,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+737,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+738,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+739,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_16[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [3U].__PVT__write_buffer);
        __Vtemp_16[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[1U]));
        __Vtemp_16[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[2U]));
        __Vtemp_16[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+740,(__Vtemp_16),128);
        bufp->chgSData(oldp+744,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+745,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+746,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+747,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+748,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+749,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+750,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+751,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+752,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+753,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+754,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+755,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+756,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+757,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+758,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+759,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_20[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [4U].__PVT__write_buffer);
        __Vtemp_20[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[1U]));
        __Vtemp_20[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[2U]));
        __Vtemp_20[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+760,(__Vtemp_20),128);
        bufp->chgSData(oldp+764,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+765,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+766,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+767,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+768,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+769,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+770,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+771,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+772,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+773,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+774,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+775,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+776,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+777,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+778,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+779,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_24[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [5U].__PVT__write_buffer);
        __Vtemp_24[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[1U]));
        __Vtemp_24[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[2U]));
        __Vtemp_24[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+780,(__Vtemp_24),128);
        bufp->chgSData(oldp+784,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+785,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+786,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+787,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+788,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+789,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+790,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+791,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+792,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+793,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+794,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+795,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+796,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+797,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+798,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+799,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_28[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [6U].__PVT__write_buffer);
        __Vtemp_28[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[1U]));
        __Vtemp_28[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[2U]));
        __Vtemp_28[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+800,(__Vtemp_28),128);
        bufp->chgSData(oldp+804,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+805,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+806,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+807,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+808,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+809,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+810,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+811,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+812,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+813,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+814,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+815,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+816,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+817,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+818,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+819,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_32[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [7U].__PVT__write_buffer);
        __Vtemp_32[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[1U]));
        __Vtemp_32[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[2U]));
        __Vtemp_32[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+820,(__Vtemp_32),128);
        bufp->chgSData(oldp+824,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+825,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+826,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+827,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+828,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+829,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+830,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+831,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+832,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+833,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+834,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+835,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+836,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+837,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+838,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+839,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_36[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [0U].__PVT__write_buffer);
        __Vtemp_36[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[1U]));
        __Vtemp_36[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[2U]));
        __Vtemp_36[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+840,(__Vtemp_36),128);
        bufp->chgSData(oldp+844,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+845,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+846,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+847,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+848,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+849,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+850,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+851,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+852,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+853,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+854,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+855,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+856,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+857,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+858,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+859,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_40[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [1U].__PVT__write_buffer);
        __Vtemp_40[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[1U]));
        __Vtemp_40[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[2U]));
        __Vtemp_40[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+860,(__Vtemp_40),128);
        bufp->chgSData(oldp+864,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+865,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+866,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+867,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+868,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+869,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+870,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+871,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+872,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+873,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+874,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+875,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+876,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+877,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+878,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+879,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_44[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [2U].__PVT__write_buffer);
        __Vtemp_44[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[1U]));
        __Vtemp_44[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[2U]));
        __Vtemp_44[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+880,(__Vtemp_44),128);
        bufp->chgSData(oldp+884,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+885,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+886,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+887,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+888,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+889,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+890,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+891,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+892,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+893,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+894,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+895,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+896,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+897,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+898,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+899,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_48[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [3U].__PVT__write_buffer);
        __Vtemp_48[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[1U]));
        __Vtemp_48[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[2U]));
        __Vtemp_48[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+900,(__Vtemp_48),128);
        bufp->chgSData(oldp+904,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+905,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+906,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+907,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+908,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+909,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+910,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+911,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+912,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+913,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+914,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+915,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+916,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+917,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+918,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+919,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_52[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [4U].__PVT__write_buffer);
        __Vtemp_52[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[1U]));
        __Vtemp_52[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[2U]));
        __Vtemp_52[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+920,(__Vtemp_52),128);
        bufp->chgSData(oldp+924,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+925,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+926,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+927,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+928,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+929,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+930,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+931,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+932,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+933,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+934,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+935,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+936,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+937,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+938,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+939,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_56[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [5U].__PVT__write_buffer);
        __Vtemp_56[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[1U]));
        __Vtemp_56[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[2U]));
        __Vtemp_56[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+940,(__Vtemp_56),128);
        bufp->chgSData(oldp+944,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+945,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+946,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+947,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+948,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+949,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+950,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+951,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+952,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+953,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+954,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+955,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+956,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+957,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+958,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+959,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_60[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [6U].__PVT__write_buffer);
        __Vtemp_60[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[1U]));
        __Vtemp_60[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[2U]));
        __Vtemp_60[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+960,(__Vtemp_60),128);
        bufp->chgSData(oldp+964,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+965,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+966,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+967,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+968,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+969,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+970,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+971,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+972,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+973,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+974,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+975,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+976,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+977,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+978,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+979,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_64[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [7U].__PVT__write_buffer);
        __Vtemp_64[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[1U]));
        __Vtemp_64[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[2U]));
        __Vtemp_64[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+980,(__Vtemp_64),128);
        bufp->chgSData(oldp+984,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+985,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+986,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+987,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+988,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+989,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+990,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+991,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+992,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+993,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+994,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+995,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+996,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+997,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+998,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+999,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_68[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [0U].__PVT__write_buffer);
        __Vtemp_68[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[1U]));
        __Vtemp_68[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[2U]));
        __Vtemp_68[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [0U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [0U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1000,(__Vtemp_68),128);
        bufp->chgSData(oldp+1004,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1005,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1006,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1007,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1008,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1009,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1010,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1011,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1012,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1013,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1014,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1015,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1016,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1017,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1018,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1019,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_72[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [1U].__PVT__write_buffer);
        __Vtemp_72[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[1U]));
        __Vtemp_72[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[2U]));
        __Vtemp_72[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [1U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [1U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1020,(__Vtemp_72),128);
        bufp->chgSData(oldp+1024,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1025,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1026,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1027,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1028,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1029,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1030,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1031,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1032,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1033,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1034,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1035,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1036,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1037,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1038,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1039,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_76[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [2U].__PVT__write_buffer);
        __Vtemp_76[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[1U]));
        __Vtemp_76[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[2U]));
        __Vtemp_76[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [2U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [2U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1040,(__Vtemp_76),128);
        bufp->chgSData(oldp+1044,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1045,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1046,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1047,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1048,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1049,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1050,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1051,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1052,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1053,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1054,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1055,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1056,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1057,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1058,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1059,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_80[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [3U].__PVT__write_buffer);
        __Vtemp_80[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[1U]));
        __Vtemp_80[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[2U]));
        __Vtemp_80[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [3U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [3U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1060,(__Vtemp_80),128);
        bufp->chgSData(oldp+1064,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1065,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1066,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1067,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1068,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1069,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1070,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1071,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1072,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1073,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1074,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1075,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1076,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1077,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1078,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1079,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_84[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [4U].__PVT__write_buffer);
        __Vtemp_84[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[1U]));
        __Vtemp_84[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[2U]));
        __Vtemp_84[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [4U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [4U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1080,(__Vtemp_84),128);
        bufp->chgSData(oldp+1084,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1085,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1086,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1087,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1088,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1089,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1090,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1091,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1092,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1093,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1094,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1095,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1096,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1097,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1098,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1099,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_88[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [5U].__PVT__write_buffer);
        __Vtemp_88[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[1U]));
        __Vtemp_88[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[2U]));
        __Vtemp_88[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [5U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [5U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1100,(__Vtemp_88),128);
        bufp->chgSData(oldp+1104,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1105,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1106,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1107,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1108,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1109,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1110,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1111,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1112,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1113,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1114,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1115,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1116,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1117,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1118,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1119,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_92[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [6U].__PVT__write_buffer);
        __Vtemp_92[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[1U]));
        __Vtemp_92[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[2U]));
        __Vtemp_92[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [6U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [6U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1120,(__Vtemp_92),128);
        bufp->chgSData(oldp+1124,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1125,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1126,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1127,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1128,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1129,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1130,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1131,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1132,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1133,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1134,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1135,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1136,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1137,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1138,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1139,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_96[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[0U]) 
                          | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                          [7U].__PVT__write_buffer);
        __Vtemp_96[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[1U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[1U]));
        __Vtemp_96[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[2U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[2U]));
        __Vtemp_96[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                           [7U].__PVT__write_buffer[3U]) 
                          | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                             [7U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1140,(__Vtemp_96),128);
        bufp->chgSData(oldp+1144,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1145,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1146,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1147,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1148,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1149,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1150,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1151,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1152,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1153,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1154,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1155,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1156,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1157,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1158,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1159,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_100[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [0U].__PVT__write_buffer);
        __Vtemp_100[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer[1U]));
        __Vtemp_100[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer[2U]));
        __Vtemp_100[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [0U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1160,(__Vtemp_100),128);
        bufp->chgSData(oldp+1164,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1165,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1166,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1167,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1168,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1169,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1170,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1171,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1172,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1173,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1174,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1175,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1176,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1177,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1178,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1179,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_104[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [1U].__PVT__write_buffer);
        __Vtemp_104[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer[1U]));
        __Vtemp_104[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer[2U]));
        __Vtemp_104[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [1U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1180,(__Vtemp_104),128);
        bufp->chgSData(oldp+1184,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1185,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1186,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1187,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1188,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1189,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1190,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1191,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1192,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1193,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1194,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1195,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1196,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1197,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1198,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1199,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_108[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [2U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [2U].__PVT__write_buffer);
        __Vtemp_108[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [2U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer[1U]));
        __Vtemp_108[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [2U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer[2U]));
        __Vtemp_108[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [2U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1200,(__Vtemp_108),128);
        bufp->chgSData(oldp+1204,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1205,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1206,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1207,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1208,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1209,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1210,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1211,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1212,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1213,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1214,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1215,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1216,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1217,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1218,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1219,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_112[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [3U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [3U].__PVT__write_buffer);
        __Vtemp_112[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [3U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer[1U]));
        __Vtemp_112[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [3U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer[2U]));
        __Vtemp_112[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [3U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1220,(__Vtemp_112),128);
        bufp->chgSData(oldp+1224,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1225,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1226,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1227,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1228,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1229,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1230,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1231,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1232,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1233,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1234,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1235,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1236,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1237,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1238,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1239,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_116[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [4U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [4U].__PVT__write_buffer);
        __Vtemp_116[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [4U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer[1U]));
        __Vtemp_116[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [4U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer[2U]));
        __Vtemp_116[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [4U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1240,(__Vtemp_116),128);
        bufp->chgSData(oldp+1244,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1245,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1246,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1247,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1248,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1249,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1250,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1251,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1252,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1253,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1254,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1255,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1256,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1257,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1258,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1259,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_120[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [5U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [5U].__PVT__write_buffer);
        __Vtemp_120[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [5U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer[1U]));
        __Vtemp_120[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [5U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer[2U]));
        __Vtemp_120[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [5U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1260,(__Vtemp_120),128);
        bufp->chgSData(oldp+1264,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1265,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1266,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1267,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1268,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1269,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1270,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1271,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1272,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1273,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1274,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1275,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1276,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1277,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1278,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1279,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_124[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [6U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [6U].__PVT__write_buffer);
        __Vtemp_124[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [6U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer[1U]));
        __Vtemp_124[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [6U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer[2U]));
        __Vtemp_124[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [6U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1280,(__Vtemp_124),128);
        bufp->chgSData(oldp+1284,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1285,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1286,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1287,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1288,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1289,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1290,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1291,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1292,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1293,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1294,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1295,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1296,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1297,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1298,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1299,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
        __Vtemp_128[0U] = ((0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [7U].__PVT__write_buffer[0U]) 
                           | vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                           [7U].__PVT__write_buffer);
        __Vtemp_128[1U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [7U].__PVT__write_buffer[1U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer[1U]));
        __Vtemp_128[2U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [7U].__PVT__write_buffer[2U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer[2U]));
        __Vtemp_128[3U] = ((0xffffU & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                            [7U].__PVT__write_buffer[3U]) 
                           | (0xffff0000U & vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer[3U]));
        bufp->chgWData(oldp+1300,(__Vtemp_128),128);
        bufp->chgSData(oldp+1304,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
        bufp->chgSData(oldp+1305,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
        bufp->chgSData(oldp+1306,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
        bufp->chgSData(oldp+1307,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
        bufp->chgSData(oldp+1308,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
        bufp->chgSData(oldp+1309,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
        bufp->chgSData(oldp+1310,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
        bufp->chgSData(oldp+1311,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
        bufp->chgSData(oldp+1312,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
        bufp->chgSData(oldp+1313,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
        bufp->chgSData(oldp+1314,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
        bufp->chgSData(oldp+1315,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
        bufp->chgSData(oldp+1316,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
        bufp->chgSData(oldp+1317,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
        bufp->chgSData(oldp+1318,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
        bufp->chgSData(oldp+1319,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+1320,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1321,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1322,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgIData(oldp+1323,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgSData(oldp+1324,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1325,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1326,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1327,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1328,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgIData(oldp+1329,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgSData(oldp+1330,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1331,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1332,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1333,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1334,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgIData(oldp+1335,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgSData(oldp+1336,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1337,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1338,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1339,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1340,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgIData(oldp+1341,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgSData(oldp+1342,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1343,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1344,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1345,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1346,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgIData(oldp+1347,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgSData(oldp+1348,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1349,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1350,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1351,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1352,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgIData(oldp+1353,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgSData(oldp+1354,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1355,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1356,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1357,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1358,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgIData(oldp+1359,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgSData(oldp+1360,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1361,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1362,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1363,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1364,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgIData(oldp+1365,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgSData(oldp+1366,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1367,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1368,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1369,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1370,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgBit(oldp+1371,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgCData(oldp+1372,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1373,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1374,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgBit(oldp+1375,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgCData(oldp+1376,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1377,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1378,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgBit(oldp+1379,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgCData(oldp+1380,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1381,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1382,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgBit(oldp+1383,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgCData(oldp+1384,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1385,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1386,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgBit(oldp+1387,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgCData(oldp+1388,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1389,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1390,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgBit(oldp+1391,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgCData(oldp+1392,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1393,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1394,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgBit(oldp+1395,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgCData(oldp+1396,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1397,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1398,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgBit(oldp+1399,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgCData(oldp+1400,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1401,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1402,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgIData(oldp+1403,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgSData(oldp+1404,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1405,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1406,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1407,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1408,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgIData(oldp+1409,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgSData(oldp+1410,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1411,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1412,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1413,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1414,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgIData(oldp+1415,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgSData(oldp+1416,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1417,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1418,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1419,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1420,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgIData(oldp+1421,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgSData(oldp+1422,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1423,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1424,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1425,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1426,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgIData(oldp+1427,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgSData(oldp+1428,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1429,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1430,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1431,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1432,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgIData(oldp+1433,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgSData(oldp+1434,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1435,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1436,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1437,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1438,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgIData(oldp+1439,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgSData(oldp+1440,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1441,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1442,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1443,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1444,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgIData(oldp+1445,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgSData(oldp+1446,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1447,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1448,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1449,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1450,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgBit(oldp+1451,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgCData(oldp+1452,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1453,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1454,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgBit(oldp+1455,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgCData(oldp+1456,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1457,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1458,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgBit(oldp+1459,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgCData(oldp+1460,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1461,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1462,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgBit(oldp+1463,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgCData(oldp+1464,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1465,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1466,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgBit(oldp+1467,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgCData(oldp+1468,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1469,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1470,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgBit(oldp+1471,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgCData(oldp+1472,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1473,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1474,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgBit(oldp+1475,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgCData(oldp+1476,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1477,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1478,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgBit(oldp+1479,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgCData(oldp+1480,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1481,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1482,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgIData(oldp+1483,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgSData(oldp+1484,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1485,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1486,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1487,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1488,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgIData(oldp+1489,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgSData(oldp+1490,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1491,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1492,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1493,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1494,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgIData(oldp+1495,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgSData(oldp+1496,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1497,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1498,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1499,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1500,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgIData(oldp+1501,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgSData(oldp+1502,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1503,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1504,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1505,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1506,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgIData(oldp+1507,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgSData(oldp+1508,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1509,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1510,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1511,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1512,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgIData(oldp+1513,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgSData(oldp+1514,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1515,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1516,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1517,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1518,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgIData(oldp+1519,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgSData(oldp+1520,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1521,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1522,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1523,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1524,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgIData(oldp+1525,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgSData(oldp+1526,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1527,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1528,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1529,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1530,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgBit(oldp+1531,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgCData(oldp+1532,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1533,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1534,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgBit(oldp+1535,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgCData(oldp+1536,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1537,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1538,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgBit(oldp+1539,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgCData(oldp+1540,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1541,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1542,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgBit(oldp+1543,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgCData(oldp+1544,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1545,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1546,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgBit(oldp+1547,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgCData(oldp+1548,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1549,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1550,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgBit(oldp+1551,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgCData(oldp+1552,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1553,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1554,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgBit(oldp+1555,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgCData(oldp+1556,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1557,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1558,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgBit(oldp+1559,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgCData(oldp+1560,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1561,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1562,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgIData(oldp+1563,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgSData(oldp+1564,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1565,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1566,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1567,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1568,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgIData(oldp+1569,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgSData(oldp+1570,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1571,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1572,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1573,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1574,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgIData(oldp+1575,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgSData(oldp+1576,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1577,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1578,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1579,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1580,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgIData(oldp+1581,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgSData(oldp+1582,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1583,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1584,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1585,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1586,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgIData(oldp+1587,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgSData(oldp+1588,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1589,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1590,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1591,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1592,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgIData(oldp+1593,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgSData(oldp+1594,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1595,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1596,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1597,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1598,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgIData(oldp+1599,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgSData(oldp+1600,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1601,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1602,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1603,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgBit(oldp+1604,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
        bufp->chgIData(oldp+1605,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgSData(oldp+1606,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__write_buffer),16);
        bufp->chgSData(oldp+1607,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__mask_buffer),16);
        bufp->chgCData(oldp+1608,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1609,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1610,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [0U].__PVT__command),32);
        bufp->chgBit(oldp+1611,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [0U].__PVT__command_set));
        bufp->chgCData(oldp+1612,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1613,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1614,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [1U].__PVT__command),32);
        bufp->chgBit(oldp+1615,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [1U].__PVT__command_set));
        bufp->chgCData(oldp+1616,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1617,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1618,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [2U].__PVT__command),32);
        bufp->chgBit(oldp+1619,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [2U].__PVT__command_set));
        bufp->chgCData(oldp+1620,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1621,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1622,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [3U].__PVT__command),32);
        bufp->chgBit(oldp+1623,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [3U].__PVT__command_set));
        bufp->chgCData(oldp+1624,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1625,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1626,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [4U].__PVT__command),32);
        bufp->chgBit(oldp+1627,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [4U].__PVT__command_set));
        bufp->chgCData(oldp+1628,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1629,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1630,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [5U].__PVT__command),32);
        bufp->chgBit(oldp+1631,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [5U].__PVT__command_set));
        bufp->chgCData(oldp+1632,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1633,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1634,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [6U].__PVT__command),32);
        bufp->chgBit(oldp+1635,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [6U].__PVT__command_set));
        bufp->chgCData(oldp+1636,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__row_idx),8);
        bufp->chgCData(oldp+1637,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__col_idx),4);
        bufp->chgIData(oldp+1638,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                  [7U].__PVT__command),32);
        bufp->chgBit(oldp+1639,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                                [7U].__PVT__command_set));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgWData(oldp+1640,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1644,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1648,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1652,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1656,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1660,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1664,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1668,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1672,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1676,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1680,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1684,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1688,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1692,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1696,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1700,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1704,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1708,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1712,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1716,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1720,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1724,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1728,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1732,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1736,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1740,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1744,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1748,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1752,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1756,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1760,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
        bufp->chgWData(oldp+1764,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
    }
    bufp->chgBit(oldp+1768,(vlSelfRef.clk_in));
    bufp->chgBit(oldp+1769,(vlSelfRef.rst_N_in));
    bufp->chgBit(oldp+1770,(vlSelfRef.cs_N_in));
    bufp->chgBit(oldp+1771,(vlSelfRef.cke_in));
    bufp->chgBit(oldp+1772,(vlSelfRef.act_in));
    bufp->chgIData(oldp+1773,(vlSelfRef.addr_in),17);
    bufp->chgCData(oldp+1774,(vlSelfRef.bg_in),2);
    bufp->chgCData(oldp+1775,(vlSelfRef.ba_in),2);
    bufp->chgQData(oldp+1776,(vlSelfRef.dqm_in),64);
    bufp->chgQData(oldp+1778,(vlSelfRef.dqs),64);
    bufp->chgSData(oldp+1780,((0xffffU & (IData)(vlSelfRef.dqm_in))),16);
    bufp->chgSData(oldp+1781,((0xffffU & (IData)(vlSelfRef.dqs))),16);
    bufp->chgBit(oldp+1782,((1U & (vlSelfRef.addr_in 
                                   >> 0x10U))));
    bufp->chgBit(oldp+1783,((1U & (vlSelfRef.addr_in 
                                   >> 0xfU))));
    bufp->chgBit(oldp+1784,((1U & (vlSelfRef.addr_in 
                                   >> 0xeU))));
    bufp->chgCData(oldp+1785,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_idx),3);
    bufp->chgCData(oldp+1786,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__command_bits),6);
    bufp->chgSData(oldp+1787,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                  >> 0x10U)))),16);
    bufp->chgSData(oldp+1788,((0xffffU & (IData)((vlSelfRef.dqs 
                                                  >> 0x10U)))),16);
    bufp->chgSData(oldp+1789,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                  >> 0x20U)))),16);
    bufp->chgSData(oldp+1790,((0xffffU & (IData)((vlSelfRef.dqs 
                                                  >> 0x20U)))),16);
    bufp->chgSData(oldp+1791,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                  >> 0x30U)))),16);
    bufp->chgSData(oldp+1792,((0xffffU & (IData)((vlSelfRef.dqs 
                                                  >> 0x30U)))),16);
}

void Vddr4_dimm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_cleanup\n"); );
    // Init
    Vddr4_dimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vddr4_dimm___024root*>(voidSelf);
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
