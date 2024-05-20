// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


VL_ATTR_COLD void VTestbench___024root__trace_init_sub__TOP__0(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("Testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"do_sub",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+143,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+141,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"temp1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"temp2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add_sub", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"do_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("adders1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+43,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+5,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+6,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+8,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+11,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+12,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+14,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+15,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+16,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+56,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+17,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+22,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+23,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+24,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+25,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+26,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+27,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+28,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+30,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+31,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+32,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+33,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("adder0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+144,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"c_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"c_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("judge", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"do_sub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+41,0,"c",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"s_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"c_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+39,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestbench___024root__trace_init_top(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_init_top\n"); );
    // Body
    VTestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTestbench___024root__trace_register(VTestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VTestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VTestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VTestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VTestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_const_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+142,(0x20U),32);
    bufp->fullIData(oldp+143,(vlSelf->Testbench__DOT__i),32);
    bufp->fullBit(oldp+144,(1U));
    bufp->fullBit(oldp+145,(0U));
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTestbench___024root__trace_full_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->Testbench__DOT__a),32);
    bufp->fullIData(oldp+2,(vlSelf->Testbench__DOT__b),32);
    bufp->fullBit(oldp+3,(vlSelf->Testbench__DOT__do_sub));
    bufp->fullIData(oldp+4,((- (IData)((IData)(vlSelf->Testbench__DOT__do_sub)))),32);
    bufp->fullBit(oldp+5,((1U & vlSelf->Testbench__DOT__a)));
    bufp->fullBit(oldp+6,((1U & (vlSelf->Testbench__DOT__a 
                                 >> 0xaU))));
    bufp->fullBit(oldp+7,((1U & (vlSelf->Testbench__DOT__a 
                                 >> 0xbU))));
    bufp->fullBit(oldp+8,((1U & (vlSelf->Testbench__DOT__a 
                                 >> 0xcU))));
    bufp->fullBit(oldp+9,((1U & (vlSelf->Testbench__DOT__a 
                                 >> 0xdU))));
    bufp->fullBit(oldp+10,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0xeU))));
    bufp->fullBit(oldp+11,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0xfU))));
    bufp->fullBit(oldp+12,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x10U))));
    bufp->fullBit(oldp+13,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x11U))));
    bufp->fullBit(oldp+14,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x12U))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x13U))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 1U))));
    bufp->fullBit(oldp+17,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x14U))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x15U))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x16U))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x17U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x18U))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x19U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 2U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+29,((vlSelf->Testbench__DOT__a 
                            >> 0x1fU)));
    bufp->fullBit(oldp+30,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 3U))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 4U))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 5U))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 6U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 7U))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 8U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->Testbench__DOT__a 
                                  >> 9U))));
    bufp->fullIData(oldp+37,((IData)((0x1ffffffffULL 
                                      & ((IData)(vlSelf->Testbench__DOT__do_sub)
                                          ? ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                             - (0x100000000ULL 
                                                | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                          : ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                             + (QData)((IData)(vlSelf->Testbench__DOT__b))))))),32);
    bufp->fullBit(oldp+38,((1U & (IData)((1ULL & (((IData)(vlSelf->Testbench__DOT__do_sub)
                                                    ? 
                                                   ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                    - 
                                                    (0x100000000ULL 
                                                     | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                    : 
                                                   ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                    + (QData)((IData)(vlSelf->Testbench__DOT__b)))) 
                                                  >> 0x20U))))));
    bufp->fullIData(oldp+39,(vlSelf->Testbench__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+40,(((0x80000000U & ((0x80000000U 
                                               & (vlSelf->Testbench__DOT__a 
                                                  ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                              ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                 << 0x1fU))) 
                              | ((0x40000000U & ((0xc0000000U 
                                                  & (vlSelf->Testbench__DOT__a 
                                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                 ^ 
                                                 ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                                  << 0x1eU))) 
                                 | ((0x20000000U & 
                                     ((0xe0000000U 
                                       & (vlSelf->Testbench__DOT__a 
                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                      ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                         << 0x1dU))) 
                                    | ((0x10000000U 
                                        & ((0xf0000000U 
                                            & (vlSelf->Testbench__DOT__a 
                                               ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                           ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                              << 0x1cU))) 
                                       | ((0x8000000U 
                                           & ((0xf8000000U 
                                               & (vlSelf->Testbench__DOT__a 
                                                  ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                              ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                 << 0x1bU))) 
                                          | ((0x4000000U 
                                              & ((0xfc000000U 
                                                  & (vlSelf->Testbench__DOT__a 
                                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                 ^ 
                                                 ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                  << 0x1aU))) 
                                             | ((0x2000000U 
                                                 & ((0xfe000000U 
                                                     & (vlSelf->Testbench__DOT__a 
                                                        ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                    ^ 
                                                    ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                     << 0x19U))) 
                                                | ((0x1000000U 
                                                    & ((0xff000000U 
                                                        & (vlSelf->Testbench__DOT__a 
                                                           ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                       ^ 
                                                       ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                        << 0x18U))) 
                                                   | ((0x800000U 
                                                       & ((0xff800000U 
                                                           & (vlSelf->Testbench__DOT__a 
                                                              ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                          ^ 
                                                          ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                           << 0x17U))) 
                                                      | ((0x400000U 
                                                          & ((0xffc00000U 
                                                              & (vlSelf->Testbench__DOT__a 
                                                                 ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                             ^ 
                                                             ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                              << 0x16U))) 
                                                         | ((0x200000U 
                                                             & ((0xffe00000U 
                                                                 & (vlSelf->Testbench__DOT__a 
                                                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                ^ 
                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                 << 0x15U))) 
                                                            | ((0x100000U 
                                                                & ((0xfff00000U 
                                                                    & (vlSelf->Testbench__DOT__a 
                                                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                    << 0x14U))) 
                                                               | ((0x80000U 
                                                                   & ((0xfff80000U 
                                                                       & (vlSelf->Testbench__DOT__a 
                                                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                      ^ 
                                                                      ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                       << 0x13U))) 
                                                                  | ((0x40000U 
                                                                      & ((0xfffc0000U 
                                                                          & (vlSelf->Testbench__DOT__a 
                                                                             ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                         ^ 
                                                                         ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                          << 0x12U))) 
                                                                     | ((0x20000U 
                                                                         & ((0xfffe0000U 
                                                                             & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                            ^ 
                                                                            ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                             << 0x11U))) 
                                                                        | ((0x10000U 
                                                                            & ((0xffff0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                               ^ 
                                                                               ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U))) 
                                                                           | ((0x8000U 
                                                                               & ((0xffff8000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU))) 
                                                                              | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub))))))))))))))))))))))))))))))))))),32);
    bufp->fullBit(oldp+41,((1U & ((((vlSelf->Testbench__DOT__a 
                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                    >> 0x1fU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                  | ((vlSelf->Testbench__DOT__a 
                                      & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                     >> 0x1fU)))));
    bufp->fullBit(oldp+42,((1U & (~ (((1U & (IData)(
                                                    (1ULL 
                                                     & (((IData)(vlSelf->Testbench__DOT__do_sub)
                                                          ? 
                                                         ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                          - 
                                                          (0x100000000ULL 
                                                           | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                          : 
                                                         ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                          + (QData)((IData)(vlSelf->Testbench__DOT__b)))) 
                                                        >> 0x20U)))) 
                                      == (1U & ((((vlSelf->Testbench__DOT__a 
                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                  >> 0x1fU) 
                                                 & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                                | ((vlSelf->Testbench__DOT__a 
                                                    & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                   >> 0x1fU)))) 
                                     & ((IData)((0x1ffffffffULL 
                                                 & ((IData)(vlSelf->Testbench__DOT__do_sub)
                                                     ? 
                                                    ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                     - 
                                                     (0x100000000ULL 
                                                      | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                                     : 
                                                    ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                     + (QData)((IData)(vlSelf->Testbench__DOT__b)))))) 
                                        == ((0x80000000U 
                                             & ((0x80000000U 
                                                 & (vlSelf->Testbench__DOT__a 
                                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                   << 0x1fU))) 
                                            | ((0x40000000U 
                                                & ((0xc0000000U 
                                                    & (vlSelf->Testbench__DOT__a 
                                                       ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                   ^ 
                                                   ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                                    << 0x1eU))) 
                                               | ((0x20000000U 
                                                   & ((0xe0000000U 
                                                       & (vlSelf->Testbench__DOT__a 
                                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                      ^ 
                                                      ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                                       << 0x1dU))) 
                                                  | ((0x10000000U 
                                                      & ((0xf0000000U 
                                                          & (vlSelf->Testbench__DOT__a 
                                                             ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                         ^ 
                                                         ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                          << 0x1cU))) 
                                                     | ((0x8000000U 
                                                         & ((0xf8000000U 
                                                             & (vlSelf->Testbench__DOT__a 
                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                            ^ 
                                                            ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                             << 0x1bU))) 
                                                        | ((0x4000000U 
                                                            & ((0xfc000000U 
                                                                & (vlSelf->Testbench__DOT__a 
                                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                               ^ 
                                                               ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                                << 0x1aU))) 
                                                           | ((0x2000000U 
                                                               & ((0xfe000000U 
                                                                   & (vlSelf->Testbench__DOT__a 
                                                                      ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                  ^ 
                                                                  ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                                   << 0x19U))) 
                                                              | ((0x1000000U 
                                                                  & ((0xff000000U 
                                                                      & (vlSelf->Testbench__DOT__a 
                                                                         ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                     ^ 
                                                                     ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                                      << 0x18U))) 
                                                                 | ((0x800000U 
                                                                     & ((0xff800000U 
                                                                         & (vlSelf->Testbench__DOT__a 
                                                                            ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                        ^ 
                                                                        ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                                         << 0x17U))) 
                                                                    | ((0x400000U 
                                                                        & ((0xffc00000U 
                                                                            & (vlSelf->Testbench__DOT__a 
                                                                               ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                           ^ 
                                                                           ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                                            << 0x16U))) 
                                                                       | ((0x200000U 
                                                                           & ((0xffe00000U 
                                                                               & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                              ^ 
                                                                              ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                               << 0x15U))) 
                                                                          | ((0x100000U 
                                                                              & ((0xfff00000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                                << 0x14U))) 
                                                                             | ((0x80000U 
                                                                                & ((0xfff80000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                                << 0x13U))) 
                                                                                | ((0x40000U 
                                                                                & ((0xfffc0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                                << 0x12U))) 
                                                                                | ((0x20000U 
                                                                                & ((0xfffe0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                                << 0x11U))) 
                                                                                | ((0x10000U 
                                                                                & ((0xffff0000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U))) 
                                                                                | ((0x8000U 
                                                                                & ((0xffff8000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU))) 
                                                                                | ((0x4000U 
                                                                                & ((0xffffc000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & ((0xffffe000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU))) 
                                                                                | ((0x1000U 
                                                                                & ((0xfffff000U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU))) 
                                                                                | ((0x800U 
                                                                                & ((0xfffff800U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU))) 
                                                                                | ((0x400U 
                                                                                & ((0xfffffc00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & ((0xfffffe00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U))) 
                                                                                | ((0x100U 
                                                                                & ((0xffffff00U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U))) 
                                                                                | ((0x80U 
                                                                                & ((0xffffff80U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U))) 
                                                                                | ((0x40U 
                                                                                & ((0xffffffc0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & ((0xffffffe0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U))) 
                                                                                | ((0x10U 
                                                                                & ((0xfffffff0U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U))) 
                                                                                | ((8U 
                                                                                & ((0xfffffff8U 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U))) 
                                                                                | ((4U 
                                                                                & ((0xfffffffcU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & ((0xfffffffeU 
                                                                                & (vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                                                ^ 
                                                                                ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U))) 
                                                                                | (1U 
                                                                                & ((vlSelf->Testbench__DOT__a 
                                                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub))))))))))))))))))))))))))))))))))))))));
    bufp->fullQData(oldp+43,((((QData)((IData)((1U 
                                                & ((((vlSelf->Testbench__DOT__a 
                                                      ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                     >> 0x1fU) 
                                                    & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                                                   | ((vlSelf->Testbench__DOT__a 
                                                       & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                                      >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                                             << 0x1fU) 
                                                            | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                                                << 0x1eU) 
                                                               | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                                                   << 0x1dU) 
                                                                  | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                                      << 0x1cU) 
                                                                     | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                                         << 0x1bU) 
                                                                        | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                                                            << 0x1aU) 
                                                                           | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                                                               << 0x19U) 
                                                                              | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->Testbench__DOT__do_sub)))))))))))))))))))))))))))))))))))),33);
    bufp->fullBit(oldp+45,((1U & ((vlSelf->Testbench__DOT__a 
                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                  ^ (IData)(vlSelf->Testbench__DOT__do_sub)))));
    bufp->fullBit(oldp+46,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xaU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+47,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xbU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+48,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xcU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+49,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xdU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+50,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xeU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+51,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0xfU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+52,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x10U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+53,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x11U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+54,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x12U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+55,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x13U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+56,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 1U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+57,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x14U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+58,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x15U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+59,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x16U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+60,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x17U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+61,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x18U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+62,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x19U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+63,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1aU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+64,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1bU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+65,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1cU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+66,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1dU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+67,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 2U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+68,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1eU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+69,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 0x1fU) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+70,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 3U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+71,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 4U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+72,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 5U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+73,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 6U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+74,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 7U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+75,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 8U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in)))));
    bufp->fullBit(oldp+76,((1U & (((vlSelf->Testbench__DOT__a 
                                    ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                                   >> 9U) ^ (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in)))));
    bufp->fullIData(oldp+77,(vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b),32);
    bufp->fullBit(oldp+78,((1U & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)));
    bufp->fullBit(oldp+79,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+80,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xaU))));
    bufp->fullBit(oldp+81,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+82,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+83,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xbU))));
    bufp->fullBit(oldp+84,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+85,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xcU))));
    bufp->fullBit(oldp+86,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+87,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xdU))));
    bufp->fullBit(oldp+88,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+89,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xeU))));
    bufp->fullBit(oldp+90,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+91,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0xfU))));
    bufp->fullBit(oldp+92,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+93,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0x10U))));
    bufp->fullBit(oldp+94,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+95,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0x11U))));
    bufp->fullBit(oldp+96,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+97,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0x12U))));
    bufp->fullBit(oldp+98,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+99,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+100,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+101,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 1U))));
    bufp->fullBit(oldp+102,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+103,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+104,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+105,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+106,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+107,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+108,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+109,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+110,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+111,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+112,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+113,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+114,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+115,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+116,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+117,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+118,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+119,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+120,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+121,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+122,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+123,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 2U))));
    bufp->fullBit(oldp+124,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+125,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+126,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+127,((vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+128,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 3U))));
    bufp->fullBit(oldp+129,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+130,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 4U))));
    bufp->fullBit(oldp+131,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+132,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 5U))));
    bufp->fullBit(oldp+133,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+134,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 6U))));
    bufp->fullBit(oldp+135,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+136,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 7U))));
    bufp->fullBit(oldp+137,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+138,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 8U))));
    bufp->fullBit(oldp+139,(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in));
    bufp->fullBit(oldp+140,((1U & (vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
                                   >> 9U))));
    bufp->fullBit(oldp+141,(vlSelf->Testbench__DOT__clk));
}
