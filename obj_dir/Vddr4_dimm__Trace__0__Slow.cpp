// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vddr4_dimm__Syms.h"


VL_ATTR_COLD void Vddr4_dimm___024root__trace_init_sub__TOP__0(Vddr4_dimm___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1777,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1779,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ddr4_dimm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1799,0,"REFRESH_CYCLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1777,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1779,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1800,0,"NUM_CHIPS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_ddr4_sdram_chip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1801,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1781,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1782,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bank_inputs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1321,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1322,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1323,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1324,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1325,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1326,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1327,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1328,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1329,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1330,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1331,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1332,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1333,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1334,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1335,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1336,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1337,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1338,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1339,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1340,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1341,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1342,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1343,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1344,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1345,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1346,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1347,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1348,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1349,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1350,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1351,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1352,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1353,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1354,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1355,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1356,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1357,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1358,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1359,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1360,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1361,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1362,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1363,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1364,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1365,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1366,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1367,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1368,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bank_buffers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+361,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+365,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+369,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+373,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+377,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+381,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+385,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+389,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+393,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+397,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+401,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+405,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+409,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+413,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+417,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+421,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1783,0,"ras_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"cas_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"we_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"burst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1786,0,"bank_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1787,0,"command_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1802,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1369,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1370,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1371,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1372,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+681,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1641,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1803,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+685+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+7,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+426,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+9,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1804,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1373,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1374,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1375,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1376,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+701,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1645,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1805,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+10,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+705+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+16,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+427,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+296,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+17,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+428,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+18,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1806,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1377,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1378,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1379,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1380,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+721,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1649,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1807,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+19,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+725+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+25,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+298,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+430,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+27,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1808,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1381,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1382,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1383,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1384,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+741,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1653,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1809,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+28,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+745+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+34,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+431,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+35,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+432,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+36,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1800,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1385,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1386,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1387,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1388,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+761,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1657,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1810,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+765+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+43,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+433,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+44,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+45,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1811,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1389,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1390,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1391,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1392,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+781,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1661,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1812,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+785+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+52,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+53,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+436,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+54,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1813,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1393,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1394,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1395,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1396,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+801,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1665,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1814,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+805+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+61,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+306,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+62,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+438,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+63,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1802,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1815,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1397,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1398,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1399,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1400,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+821,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1669,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1782,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1816,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+64,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+825+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+70,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+439,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+71,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+440,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+72,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+73,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_ddr4_sdram_chip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1817,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1788,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1789,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bank_inputs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1401,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1402,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1403,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1404,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1405,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1406,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1407,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1408,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1409,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1410,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1411,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1412,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1413,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1414,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1415,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1416,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1417,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1418,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1419,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1420,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1421,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1422,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1423,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1424,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1425,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1426,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1427,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1428,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1429,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1430,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1431,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1432,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1433,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1434,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1435,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1436,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1437,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1438,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1439,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1440,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1441,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1442,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1443,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1444,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1445,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1446,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1447,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1448,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bank_buffers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+441,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+445,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+449,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+453,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+457,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+461,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+465,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+469,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+473,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+477,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+481,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+485,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+489,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+493,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+497,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+501,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1783,0,"ras_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"cas_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"we_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"burst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1786,0,"bank_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1787,0,"command_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1802,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1449,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1450,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1451,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1452,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+841,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1673,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1818,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+74,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+845+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+80,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+311,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+81,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+506,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+82,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1804,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1453,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1454,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1455,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1456,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+861,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1677,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1819,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+83,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+865+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+89,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+90,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+508,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+91,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1806,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1457,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1458,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1459,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1460,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+881,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1681,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1820,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+92,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+97,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+885+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+98,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+510,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+100,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1808,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1461,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1462,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1463,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1464,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+901,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1685,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1821,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+101,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+905+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+107,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+317,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+108,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+512,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+109,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1800,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1465,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1466,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1467,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1468,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+921,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1689,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1822,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+110,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+925+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+116,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+117,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+514,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+118,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1811,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1469,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1470,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1471,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1472,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+941,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1693,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1823,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+119,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+124,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+945+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+125,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+126,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+516,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+127,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1813,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1473,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1474,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1475,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1476,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+961,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1697,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1824,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+128,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+965+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+134,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+135,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+518,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+136,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1804,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1815,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1477,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1478,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1479,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1480,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+981,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1701,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1789,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1825,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+137,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+985+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+143,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+144,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+520,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+145,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+146,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_ddr4_sdram_chip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1826,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1790,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1791,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bank_inputs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1481,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1482,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1483,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1484,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1485,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1486,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1487,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1488,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1489,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1490,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1491,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1492,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1493,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1494,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1495,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1496,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1497,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1498,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1499,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1500,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1501,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1502,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1503,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1504,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1505,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1506,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1507,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1508,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1509,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1510,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1511,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1512,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1513,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1514,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1515,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1516,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1517,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1518,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1519,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1520,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1521,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1522,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1523,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1524,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1525,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1526,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1527,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1528,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bank_buffers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+521,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+525,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+529,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+533,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+537,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+541,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+545,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+549,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+553,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+557,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+561,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+565,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+569,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+573,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+577,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+581,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1783,0,"ras_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"cas_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"we_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+327,0,"burst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1786,0,"bank_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1787,0,"command_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1802,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1529,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1530,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1531,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1532,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1001,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1705,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1827,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+147,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1005+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+153,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+154,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+586,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+155,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1804,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1533,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1534,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1535,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1536,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1021,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1709,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1828,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+157,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+158,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1025+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+162,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+163,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+588,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+164,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1806,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1537,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1538,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1539,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1540,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1041,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1713,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1829,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+165,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1045+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+171,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+589,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+332,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+172,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+590,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+173,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1808,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1541,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1542,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1543,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1544,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1061,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1717,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1830,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+174,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1065+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+180,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+591,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+334,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+181,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+592,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+182,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1800,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1545,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1546,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1547,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1548,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1081,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1721,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1831,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+183,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+188,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1085+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+189,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+336,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+190,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+594,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+191,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1811,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1549,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1550,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1551,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1552,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1101,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1725,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1832,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+192,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+196,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+197,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+198,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+595,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+338,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+199,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+596,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+200,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1813,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1553,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1554,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1555,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1556,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1121,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1729,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1833,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+201,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+206,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1125+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+207,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+208,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+598,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+209,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1806,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1815,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1557,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1558,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1559,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1560,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1141,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1733,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1791,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1834,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+210,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+214,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+215,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1145+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+216,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+599,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+217,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+600,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+218,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+343,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_ddr4_sdram_chip", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1835,0,"id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1771,0,"cs_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1772,0,"cke_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"act_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1774,0,"addr_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+1775,0,"bg_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1776,0,"ba_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1792,0,"dqm_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1793,0,"dqs",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("bank_inputs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1561,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1562,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1563,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1564,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1565,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1566,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1567,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1568,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1569,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1570,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1571,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1572,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1573,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1574,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1575,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1576,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1577,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1578,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1579,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1580,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1581,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1582,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1583,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1584,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1585,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1586,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1587,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1588,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1589,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1590,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1591,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1592,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1593,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1594,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1595,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1596,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1597,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1598,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1599,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1600,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1601,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1602,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1603,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1604,0,"col_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1605,0,"command_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1606,0,"command",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1607,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1608,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bank_buffers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+601,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+605,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+609,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+613,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+617,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+621,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+625,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+629,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+633,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+637,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+641,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+645,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+649,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+653,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declArray(c+657,0,"write_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+661,0,"mask_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1783,0,"ras_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1784,0,"cas_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1785,0,"we_n_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+344,0,"burst_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1786,0,"bank_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1787,0,"command_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1802,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1609,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1610,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1611,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1612,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1161,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1737,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1836,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+220,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1165+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+226,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+665,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+345,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+227,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+666,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+228,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1804,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1613,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1614,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1615,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1616,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1181,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1741,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1837,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+229,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+230,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+231,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+232,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+234,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1185+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+235,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+667,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+236,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+668,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+237,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1806,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1617,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1618,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1619,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1620,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1201,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1745,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1838,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+238,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1205+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+244,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+669,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+349,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+245,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+670,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+246,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1808,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1621,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1622,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1623,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1624,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1221,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1749,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1839,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+247,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1225+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+253,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+254,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+672,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+255,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1800,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1625,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1626,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1627,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1628,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1241,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1753,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1840,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+256,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+261,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1245+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+262,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+353,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+263,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+674,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+264,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1811,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1629,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1630,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1631,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1632,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1261,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1757,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1841,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+265,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+268,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+269,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+270,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1265+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+271,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+272,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+676,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+273,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1813,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1633,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1634,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1635,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1636,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1281,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1761,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1842,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+274,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+278,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+279,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1285+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+280,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+677,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+357,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+281,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+678,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+282,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("chip_bank", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1794,0,"CAS_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ACTIVATION_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1796,0,"PRECHARGE_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"BANKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1795,0,"ROW_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1797,0,"COL_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1798,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1808,0,"chip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1815,0,"bank_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1769,0,"clk_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1770,0,"rst_N_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1637,0,"row_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1638,0,"col_idx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1639,0,"command",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1640,0,"selected",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1301,0,"write_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+1765,0,"mask_buffer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+1793,0,"dqs_out",-1, VerilatedTraceSigDirection::INOUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1843,0,"active_row",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+283,0,"row_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"awaiting_activation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"awaiting_precharge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+286,0,"awaiting_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+287,0,"awaiting_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+288,0,"cycle_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("row_buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1305+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+289,0,"burst_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+359,0,"burst_current_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+290,0,"burst_end_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+680,0,"next_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+291,0,"burst_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+360,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+292,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_init_top(Vddr4_dimm___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vddr4_dimm___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vddr4_dimm___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vddr4_dimm___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vddr4_dimm___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vddr4_dimm___024root__trace_register(Vddr4_dimm___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vddr4_dimm___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vddr4_dimm___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vddr4_dimm___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vddr4_dimm___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_const_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vddr4_dimm___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_const_0\n"); );
    // Init
    Vddr4_dimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vddr4_dimm___024root*>(voidSelf);
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vddr4_dimm___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_const_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1794,(0x16U),32);
    bufp->fullIData(oldp+1795,(8U),32);
    bufp->fullIData(oldp+1796,(5U),32);
    bufp->fullIData(oldp+1797,(4U),32);
    bufp->fullIData(oldp+1798,(0x10U),32);
    bufp->fullIData(oldp+1799,(0x1400U),32);
    bufp->fullIData(oldp+1800,(4U),32);
    bufp->fullIData(oldp+1801,(0U),32);
    bufp->fullIData(oldp+1802,(0U),32);
    bufp->fullCData(oldp+1803,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1804,(1U),32);
    bufp->fullCData(oldp+1805,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1806,(2U),32);
    bufp->fullCData(oldp+1807,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1808,(3U),32);
    bufp->fullCData(oldp+1809,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1810,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1811,(5U),32);
    bufp->fullCData(oldp+1812,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1813,(6U),32);
    bufp->fullCData(oldp+1814,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1815,(7U),32);
    bufp->fullCData(oldp+1816,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1817,(1U),32);
    bufp->fullCData(oldp+1818,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1819,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1820,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1821,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1822,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1823,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1824,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1825,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1826,(2U),32);
    bufp->fullCData(oldp+1827,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1828,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1829,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1830,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1831,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1832,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1833,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1834,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullIData(oldp+1835,(3U),32);
    bufp->fullCData(oldp+1836,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1837,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1838,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1839,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1840,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1841,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1842,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__active_row),8);
    bufp->fullCData(oldp+1843,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__active_row),8);
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_full_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vddr4_dimm___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_full_0\n"); );
    // Init
    Vddr4_dimm___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vddr4_dimm___024root*>(voidSelf);
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vddr4_dimm___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vddr4_dimm___024root__trace_full_0_sub_0(Vddr4_dimm___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vddr4_dimm__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vddr4_dimm___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
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
    bufp->fullBit(oldp+1,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+2,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+3,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+4,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+5,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+6,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+7,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+8,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+9,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+10,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+11,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+12,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+13,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+14,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+15,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+16,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+17,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+18,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+19,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+20,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+21,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+22,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+23,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+24,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+25,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+26,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+27,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+28,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+29,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+30,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+31,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+32,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+33,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+34,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+35,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+36,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+37,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+38,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+39,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+40,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+41,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+42,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+43,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+44,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+45,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+46,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+47,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+48,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+49,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+50,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+51,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+52,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+53,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+54,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+55,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+56,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+57,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+58,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+59,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+60,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+61,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+62,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+63,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+64,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+65,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+66,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+67,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+68,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+69,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+70,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+71,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+72,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullIData(oldp+73,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+74,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+75,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+76,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+77,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+78,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+79,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+80,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+81,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+82,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+83,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+84,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+85,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+86,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+87,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+88,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+89,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+90,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+91,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+92,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+93,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+94,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+95,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+96,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+97,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+98,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+99,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+100,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+101,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+102,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+103,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+104,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+105,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+106,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+107,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+108,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+109,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+110,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+111,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+112,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+113,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+114,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+115,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+116,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+117,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+118,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+119,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+120,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+121,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+122,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+123,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+124,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+125,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+126,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+127,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+128,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+129,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+130,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+131,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+132,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+133,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+134,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+135,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+136,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+137,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+138,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+139,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+140,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+141,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+142,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+143,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+144,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+145,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullIData(oldp+146,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+147,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+148,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+149,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+150,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+151,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+152,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+153,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+154,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+155,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+156,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+157,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+158,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+159,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+160,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+161,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+162,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+163,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+164,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+165,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+166,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+167,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+168,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+169,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+170,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+171,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+172,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+173,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+174,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+175,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+176,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+177,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+178,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+179,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+180,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+181,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+182,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+183,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+184,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+185,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+186,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+187,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+188,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+189,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+190,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+191,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+192,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+193,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+194,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+195,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+196,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+197,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+198,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+199,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+200,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+201,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+202,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+203,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+204,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+205,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+206,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+207,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+208,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+209,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+210,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+211,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+212,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+213,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+214,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+215,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+216,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+217,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+218,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullIData(oldp+219,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+220,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+221,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+222,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+223,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+224,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+225,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+226,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+227,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+228,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+229,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+230,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+231,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+232,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+233,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+234,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+235,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+236,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+237,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+238,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+239,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+240,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+241,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+242,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+243,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+244,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+245,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+246,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+247,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+248,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+249,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+250,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+251,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+252,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+253,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+254,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+255,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+256,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+257,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+258,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+259,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+260,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+261,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+262,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+263,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+264,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+265,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+266,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+267,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+268,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+269,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+270,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+271,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+272,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+273,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+274,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+275,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+276,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+277,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+278,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+279,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+280,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+281,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+282,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullBit(oldp+283,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_active));
    bufp->fullBit(oldp+284,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_activation));
    bufp->fullBit(oldp+285,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_precharge));
    bufp->fullBit(oldp+286,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_read));
    bufp->fullBit(oldp+287,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__awaiting_write));
    bufp->fullIData(oldp+288,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__cycle_counter),32);
    bufp->fullBit(oldp+289,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_enabled));
    bufp->fullCData(oldp+290,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end_val),3);
    bufp->fullBit(oldp+291,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_write));
    bufp->fullIData(oldp+292,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+293,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
    bufp->fullCData(oldp+294,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+295,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+296,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+297,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+298,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+299,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+300,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+301,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+302,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+303,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+304,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+305,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+306,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+307,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+308,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+309,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullIData(oldp+310,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
    bufp->fullCData(oldp+311,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+312,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+313,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+314,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+315,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+316,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+317,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+318,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+319,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+320,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+321,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+322,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+323,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+324,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+325,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+326,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullIData(oldp+327,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
    bufp->fullCData(oldp+328,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+329,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+330,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+331,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+332,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+333,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+334,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+335,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+336,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+337,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+338,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+339,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+340,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+341,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+342,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+343,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullIData(oldp+344,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__burst_count),32);
    bufp->fullCData(oldp+345,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+346,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+347,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+348,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+349,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+350,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+351,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+352,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+353,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+354,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+355,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+356,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+357,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+358,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullCData(oldp+359,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_current_val),3);
    bufp->fullBit(oldp+360,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__burst_end));
    bufp->fullWData(oldp+361,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+365,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+369,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+373,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+377,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+381,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+385,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+389,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+393,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+397,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+401,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+405,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+409,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+413,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+417,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+421,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__mask_buffer),128);
    bufp->fullBit(oldp+425,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+426,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+427,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+428,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+429,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+430,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+431,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+432,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+433,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+434,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+435,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+436,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+437,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+438,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+439,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+440,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullWData(oldp+441,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+445,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+449,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+453,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+457,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+461,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+465,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+469,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+473,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+477,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+481,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+485,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+489,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+493,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+497,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+501,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__mask_buffer),128);
    bufp->fullBit(oldp+505,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+506,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+507,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+508,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+509,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+510,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+511,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+512,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+513,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+514,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+515,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+516,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+517,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+518,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+519,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+520,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullWData(oldp+521,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+525,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+529,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+533,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+537,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+541,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+545,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+549,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+553,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+557,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+561,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+565,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+569,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+573,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+577,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+581,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__mask_buffer),128);
    bufp->fullBit(oldp+585,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+586,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+587,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+588,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+589,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+590,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+591,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+592,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+593,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+594,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+595,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+596,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+597,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+598,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+599,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+600,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullWData(oldp+601,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+605,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [0U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+609,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+613,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [1U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+617,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+621,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [2U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+625,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+629,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [3U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+633,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+637,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [4U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+641,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+645,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [5U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+649,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+653,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [6U].__PVT__mask_buffer),128);
    bufp->fullWData(oldp+657,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__write_buffer),128);
    bufp->fullWData(oldp+661,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_buffers
                              [7U].__PVT__mask_buffer),128);
    bufp->fullBit(oldp+665,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+666,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+667,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+668,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+669,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+670,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+671,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+672,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+673,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+674,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+675,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+676,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+677,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+678,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__next_read),16);
    bufp->fullBit(oldp+679,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__read_ready));
    bufp->fullSData(oldp+680,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__next_read),16);
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
    bufp->fullWData(oldp+681,(__Vtemp_4),128);
    bufp->fullSData(oldp+685,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+686,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+687,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+688,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+689,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+690,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+691,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+692,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+693,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+694,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+695,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+696,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+697,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+698,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+699,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+700,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+701,(__Vtemp_8),128);
    bufp->fullSData(oldp+705,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+706,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+707,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+708,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+709,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+710,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+711,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+712,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+713,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+714,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+715,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+716,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+717,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+718,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+719,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+720,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+721,(__Vtemp_12),128);
    bufp->fullSData(oldp+725,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+726,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+727,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+728,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+729,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+730,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+731,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+732,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+733,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+734,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+735,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+736,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+737,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+738,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+739,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+740,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+741,(__Vtemp_16),128);
    bufp->fullSData(oldp+745,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+746,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+747,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+748,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+749,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+750,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+751,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+752,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+753,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+754,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+755,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+756,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+757,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+758,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+759,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+760,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+761,(__Vtemp_20),128);
    bufp->fullSData(oldp+765,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+766,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+767,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+768,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+769,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+770,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+771,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+772,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+773,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+774,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+775,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+776,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+777,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+778,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+779,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+780,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+781,(__Vtemp_24),128);
    bufp->fullSData(oldp+785,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+786,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+787,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+788,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+789,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+790,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+791,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+792,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+793,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+794,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+795,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+796,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+797,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+798,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+799,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+800,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+801,(__Vtemp_28),128);
    bufp->fullSData(oldp+805,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+806,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+807,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+808,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+809,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+810,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+811,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+812,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+813,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+814,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+815,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+816,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+817,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+818,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+819,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+820,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+821,(__Vtemp_32),128);
    bufp->fullSData(oldp+825,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+826,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+827,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+828,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+829,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+830,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+831,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+832,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+833,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+834,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+835,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+836,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+837,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+838,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+839,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+840,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+841,(__Vtemp_36),128);
    bufp->fullSData(oldp+845,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+846,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+847,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+848,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+849,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+850,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+851,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+852,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+853,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+854,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+855,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+856,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+857,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+858,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+859,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+860,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+861,(__Vtemp_40),128);
    bufp->fullSData(oldp+865,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+866,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+867,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+868,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+869,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+870,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+871,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+872,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+873,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+874,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+875,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+876,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+877,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+878,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+879,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+880,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+881,(__Vtemp_44),128);
    bufp->fullSData(oldp+885,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+886,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+887,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+888,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+889,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+890,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+891,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+892,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+893,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+894,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+895,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+896,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+897,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+898,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+899,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+900,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+901,(__Vtemp_48),128);
    bufp->fullSData(oldp+905,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+906,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+907,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+908,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+909,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+910,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+911,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+912,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+913,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+914,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+915,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+916,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+917,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+918,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+919,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+920,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+921,(__Vtemp_52),128);
    bufp->fullSData(oldp+925,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+926,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+927,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+928,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+929,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+930,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+931,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+932,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+933,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+934,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+935,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+936,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+937,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+938,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+939,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+940,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+941,(__Vtemp_56),128);
    bufp->fullSData(oldp+945,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+946,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+947,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+948,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+949,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+950,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+951,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+952,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+953,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+954,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+955,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+956,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+957,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+958,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+959,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+960,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+961,(__Vtemp_60),128);
    bufp->fullSData(oldp+965,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+966,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+967,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+968,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+969,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+970,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+971,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+972,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+973,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+974,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+975,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+976,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+977,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+978,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+979,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+980,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+981,(__Vtemp_64),128);
    bufp->fullSData(oldp+985,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+986,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+987,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+988,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+989,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+990,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+991,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+992,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+993,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+994,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+995,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+996,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+997,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+998,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+999,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1000,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1001,(__Vtemp_68),128);
    bufp->fullSData(oldp+1005,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1006,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1007,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1008,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1009,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1010,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1011,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1012,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1013,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1014,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1015,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1016,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1017,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1018,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1019,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1020,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1021,(__Vtemp_72),128);
    bufp->fullSData(oldp+1025,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1026,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1027,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1028,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1029,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1030,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1031,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1032,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1033,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1034,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1035,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1036,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1037,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1038,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1039,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1040,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1041,(__Vtemp_76),128);
    bufp->fullSData(oldp+1045,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1046,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1047,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1048,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1049,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1050,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1051,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1052,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1053,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1054,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1055,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1056,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1057,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1058,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1059,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1060,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1061,(__Vtemp_80),128);
    bufp->fullSData(oldp+1065,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1066,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1067,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1068,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1069,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1070,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1071,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1072,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1073,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1074,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1075,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1076,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1077,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1078,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1079,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1080,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1081,(__Vtemp_84),128);
    bufp->fullSData(oldp+1085,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1086,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1087,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1088,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1089,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1090,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1091,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1092,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1093,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1094,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1095,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1096,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1097,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1098,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1099,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1100,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1101,(__Vtemp_88),128);
    bufp->fullSData(oldp+1105,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1106,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1107,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1108,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1109,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1110,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1111,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1112,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1113,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1114,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1115,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1116,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1117,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1118,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1119,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1120,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1121,(__Vtemp_92),128);
    bufp->fullSData(oldp+1125,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1126,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1127,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1128,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1129,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1130,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1131,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1132,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1133,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1134,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1135,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1136,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1137,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1138,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1139,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1140,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1141,(__Vtemp_96),128);
    bufp->fullSData(oldp+1145,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1146,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1147,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1148,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1149,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1150,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1151,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1152,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1153,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1154,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1155,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1156,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1157,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1158,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1159,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1160,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1161,(__Vtemp_100),128);
    bufp->fullSData(oldp+1165,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1166,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1167,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1168,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1169,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1170,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1171,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1172,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1173,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1174,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1175,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1176,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1177,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1178,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1179,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1180,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__0__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1181,(__Vtemp_104),128);
    bufp->fullSData(oldp+1185,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1186,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1187,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1188,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1189,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1190,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1191,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1192,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1193,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1194,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1195,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1196,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1197,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1198,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1199,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1200,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__1__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1201,(__Vtemp_108),128);
    bufp->fullSData(oldp+1205,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1206,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1207,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1208,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1209,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1210,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1211,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1212,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1213,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1214,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1215,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1216,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1217,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1218,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1219,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1220,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__2__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1221,(__Vtemp_112),128);
    bufp->fullSData(oldp+1225,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1226,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1227,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1228,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1229,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1230,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1231,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1232,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1233,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1234,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1235,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1236,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1237,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1238,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1239,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1240,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__3__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1241,(__Vtemp_116),128);
    bufp->fullSData(oldp+1245,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1246,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1247,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1248,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1249,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1250,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1251,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1252,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1253,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1254,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1255,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1256,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1257,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1258,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1259,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1260,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__4__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1261,(__Vtemp_120),128);
    bufp->fullSData(oldp+1265,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1266,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1267,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1268,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1269,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1270,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1271,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1272,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1273,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1274,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1275,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1276,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1277,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1278,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1279,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1280,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__5__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1281,(__Vtemp_124),128);
    bufp->fullSData(oldp+1285,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1286,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1287,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1288,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1289,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1290,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1291,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1292,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1293,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1294,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1295,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1296,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1297,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1298,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1299,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1300,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__6__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
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
    bufp->fullWData(oldp+1301,(__Vtemp_128),128);
    bufp->fullSData(oldp+1305,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[0]),16);
    bufp->fullSData(oldp+1306,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[1]),16);
    bufp->fullSData(oldp+1307,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[2]),16);
    bufp->fullSData(oldp+1308,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[3]),16);
    bufp->fullSData(oldp+1309,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[4]),16);
    bufp->fullSData(oldp+1310,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[5]),16);
    bufp->fullSData(oldp+1311,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[6]),16);
    bufp->fullSData(oldp+1312,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[7]),16);
    bufp->fullSData(oldp+1313,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[8]),16);
    bufp->fullSData(oldp+1314,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[9]),16);
    bufp->fullSData(oldp+1315,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[10]),16);
    bufp->fullSData(oldp+1316,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[11]),16);
    bufp->fullSData(oldp+1317,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[12]),16);
    bufp->fullSData(oldp+1318,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[13]),16);
    bufp->fullSData(oldp+1319,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[14]),16);
    bufp->fullSData(oldp+1320,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__genblk1__BRA__7__KET____DOT__chip_bank__DOT__row_buffer[15]),16);
    bufp->fullCData(oldp+1321,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1322,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1323,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullIData(oldp+1324,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullSData(oldp+1325,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1326,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1327,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1328,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1329,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullIData(oldp+1330,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullSData(oldp+1331,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1332,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1333,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1334,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1335,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullIData(oldp+1336,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullSData(oldp+1337,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1338,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1339,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1340,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1341,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullIData(oldp+1342,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullSData(oldp+1343,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1344,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1345,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1346,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1347,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullIData(oldp+1348,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullSData(oldp+1349,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1350,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1351,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1352,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1353,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullIData(oldp+1354,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullSData(oldp+1355,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1356,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1357,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1358,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1359,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullIData(oldp+1360,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullSData(oldp+1361,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1362,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1363,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1364,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1365,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullIData(oldp+1366,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullSData(oldp+1367,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1368,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1369,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1370,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1371,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullBit(oldp+1372,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullCData(oldp+1373,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1374,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1375,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullBit(oldp+1376,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullCData(oldp+1377,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1378,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1379,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullBit(oldp+1380,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullCData(oldp+1381,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1382,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1383,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullBit(oldp+1384,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullCData(oldp+1385,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1386,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1387,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullBit(oldp+1388,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullCData(oldp+1389,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1390,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1391,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullBit(oldp+1392,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullCData(oldp+1393,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1394,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1395,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullBit(oldp+1396,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullCData(oldp+1397,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1398,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1399,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullBit(oldp+1400,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullCData(oldp+1401,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1402,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1403,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullIData(oldp+1404,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullSData(oldp+1405,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1406,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1407,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1408,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1409,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullIData(oldp+1410,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullSData(oldp+1411,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1412,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1413,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1414,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1415,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullIData(oldp+1416,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullSData(oldp+1417,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1418,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1419,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1420,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1421,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullIData(oldp+1422,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullSData(oldp+1423,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1424,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1425,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1426,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1427,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullIData(oldp+1428,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullSData(oldp+1429,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1430,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1431,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1432,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1433,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullIData(oldp+1434,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullSData(oldp+1435,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1436,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1437,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1438,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1439,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullIData(oldp+1440,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullSData(oldp+1441,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1442,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1443,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1444,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1445,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullIData(oldp+1446,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullSData(oldp+1447,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1448,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1449,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1450,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1451,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullBit(oldp+1452,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullCData(oldp+1453,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1454,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1455,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullBit(oldp+1456,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullCData(oldp+1457,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1458,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1459,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullBit(oldp+1460,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullCData(oldp+1461,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1462,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1463,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullBit(oldp+1464,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullCData(oldp+1465,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1466,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1467,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullBit(oldp+1468,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullCData(oldp+1469,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1470,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1471,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullBit(oldp+1472,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullCData(oldp+1473,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1474,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1475,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullBit(oldp+1476,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullCData(oldp+1477,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1478,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1479,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullBit(oldp+1480,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullCData(oldp+1481,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1482,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1483,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullIData(oldp+1484,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullSData(oldp+1485,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1486,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1487,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1488,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1489,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullIData(oldp+1490,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullSData(oldp+1491,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1492,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1493,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1494,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1495,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullIData(oldp+1496,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullSData(oldp+1497,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1498,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1499,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1500,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1501,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullIData(oldp+1502,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullSData(oldp+1503,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1504,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1505,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1506,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1507,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullIData(oldp+1508,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullSData(oldp+1509,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1510,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1511,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1512,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1513,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullIData(oldp+1514,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullSData(oldp+1515,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1516,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1517,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1518,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1519,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullIData(oldp+1520,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullSData(oldp+1521,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1522,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1523,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1524,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1525,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullIData(oldp+1526,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullSData(oldp+1527,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1528,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1529,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1530,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1531,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullBit(oldp+1532,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullCData(oldp+1533,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1534,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1535,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullBit(oldp+1536,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullCData(oldp+1537,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1538,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1539,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullBit(oldp+1540,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullCData(oldp+1541,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1542,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1543,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullBit(oldp+1544,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullCData(oldp+1545,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1546,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1547,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullBit(oldp+1548,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullCData(oldp+1549,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1550,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1551,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullBit(oldp+1552,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullCData(oldp+1553,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1554,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1555,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullBit(oldp+1556,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullCData(oldp+1557,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1558,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1559,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullBit(oldp+1560,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullCData(oldp+1561,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1562,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1563,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullIData(oldp+1564,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullSData(oldp+1565,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1566,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1567,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1568,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1569,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullIData(oldp+1570,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullSData(oldp+1571,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1572,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1573,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1574,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1575,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullIData(oldp+1576,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullSData(oldp+1577,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1578,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1579,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1580,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1581,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullIData(oldp+1582,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullSData(oldp+1583,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1584,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1585,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1586,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1587,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullIData(oldp+1588,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullSData(oldp+1589,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1590,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1591,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1592,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1593,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullIData(oldp+1594,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullSData(oldp+1595,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1596,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1597,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1598,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1599,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullIData(oldp+1600,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullSData(oldp+1601,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1602,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1603,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1604,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullBit(oldp+1605,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullIData(oldp+1606,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullSData(oldp+1607,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__write_buffer),16);
    bufp->fullSData(oldp+1608,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__mask_buffer),16);
    bufp->fullCData(oldp+1609,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1610,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1611,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [0U].__PVT__command),32);
    bufp->fullBit(oldp+1612,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [0U].__PVT__command_set));
    bufp->fullCData(oldp+1613,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1614,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1615,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [1U].__PVT__command),32);
    bufp->fullBit(oldp+1616,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [1U].__PVT__command_set));
    bufp->fullCData(oldp+1617,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1618,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1619,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [2U].__PVT__command),32);
    bufp->fullBit(oldp+1620,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [2U].__PVT__command_set));
    bufp->fullCData(oldp+1621,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1622,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1623,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [3U].__PVT__command),32);
    bufp->fullBit(oldp+1624,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [3U].__PVT__command_set));
    bufp->fullCData(oldp+1625,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1626,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1627,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [4U].__PVT__command),32);
    bufp->fullBit(oldp+1628,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [4U].__PVT__command_set));
    bufp->fullCData(oldp+1629,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1630,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1631,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [5U].__PVT__command),32);
    bufp->fullBit(oldp+1632,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [5U].__PVT__command_set));
    bufp->fullCData(oldp+1633,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1634,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1635,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [6U].__PVT__command),32);
    bufp->fullBit(oldp+1636,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [6U].__PVT__command_set));
    bufp->fullCData(oldp+1637,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__row_idx),8);
    bufp->fullCData(oldp+1638,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__col_idx),4);
    bufp->fullIData(oldp+1639,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                               [7U].__PVT__command),32);
    bufp->fullBit(oldp+1640,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT__bank_inputs
                             [7U].__PVT__command_set));
    bufp->fullWData(oldp+1641,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1645,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1649,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1653,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1657,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1661,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1665,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1669,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1673,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1677,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1681,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1685,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1689,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1693,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1697,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1701,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__1__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1705,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1709,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1713,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1717,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1721,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1725,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1729,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1733,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__2__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1737,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1741,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1745,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1749,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1753,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1757,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1761,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullWData(oldp+1765,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__3__KET____DOT__u_ddr4_sdram_chip__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__chip_bank__mask_buffer),128);
    bufp->fullBit(oldp+1769,(vlSelfRef.clk_in));
    bufp->fullBit(oldp+1770,(vlSelfRef.rst_N_in));
    bufp->fullBit(oldp+1771,(vlSelfRef.cs_N_in));
    bufp->fullBit(oldp+1772,(vlSelfRef.cke_in));
    bufp->fullBit(oldp+1773,(vlSelfRef.act_in));
    bufp->fullIData(oldp+1774,(vlSelfRef.addr_in),17);
    bufp->fullCData(oldp+1775,(vlSelfRef.bg_in),2);
    bufp->fullCData(oldp+1776,(vlSelfRef.ba_in),2);
    bufp->fullQData(oldp+1777,(vlSelfRef.dqm_in),64);
    bufp->fullQData(oldp+1779,(vlSelfRef.dqs),64);
    bufp->fullSData(oldp+1781,((0xffffU & (IData)(vlSelfRef.dqm_in))),16);
    bufp->fullSData(oldp+1782,((0xffffU & (IData)(vlSelfRef.dqs))),16);
    bufp->fullBit(oldp+1783,((1U & (vlSelfRef.addr_in 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1784,((1U & (vlSelfRef.addr_in 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1785,((1U & (vlSelfRef.addr_in 
                                    >> 0xeU))));
    bufp->fullCData(oldp+1786,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__bank_idx),3);
    bufp->fullCData(oldp+1787,(vlSelfRef.ddr4_dimm__DOT__genblk1__BRA__0__KET____DOT__u_ddr4_sdram_chip__DOT__command_bits),6);
    bufp->fullSData(oldp+1788,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                   >> 0x10U)))),16);
    bufp->fullSData(oldp+1789,((0xffffU & (IData)((vlSelfRef.dqs 
                                                   >> 0x10U)))),16);
    bufp->fullSData(oldp+1790,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                   >> 0x20U)))),16);
    bufp->fullSData(oldp+1791,((0xffffU & (IData)((vlSelfRef.dqs 
                                                   >> 0x20U)))),16);
    bufp->fullSData(oldp+1792,((0xffffU & (IData)((vlSelfRef.dqm_in 
                                                   >> 0x30U)))),16);
    bufp->fullSData(oldp+1793,((0xffffU & (IData)((vlSelfRef.dqs 
                                                   >> 0x30U)))),16);
}
