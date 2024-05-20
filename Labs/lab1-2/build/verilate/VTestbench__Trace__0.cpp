// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestbench__Syms.h"


void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestbench___024root__trace_chg_0_sub_0(VTestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->Testbench__DOT__dut__DOT__ta));
        bufp->chgBit(oldp+1,(vlSelf->Testbench__DOT__dut__DOT__tb));
        bufp->chgBit(oldp+2,(vlSelf->Testbench__DOT__dut__DOT__tc));
        bufp->chgBit(oldp+3,(vlSelf->Testbench__DOT__dut__DOT__td));
        bufp->chgBit(oldp+4,(vlSelf->Testbench__DOT__dut__DOT__te));
        bufp->chgBit(oldp+5,(vlSelf->Testbench__DOT__dut__DOT__tf));
        bufp->chgBit(oldp+6,(vlSelf->Testbench__DOT__dut__DOT__tg));
        bufp->chgBit(oldp+7,(vlSelf->Testbench__DOT__dut__DOT__tp));
    }
    bufp->chgCData(oldp+8,(vlSelf->Testbench__DOT__data),4);
    bufp->chgBit(oldp+9,(vlSelf->Testbench__DOT__point));
    bufp->chgBit(oldp+10,(vlSelf->Testbench__DOT__LE));
    bufp->chgIData(oldp+11,(vlSelf->Testbench__DOT__i),32);
}

void VTestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root__trace_cleanup\n"); );
    // Init
    VTestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestbench___024root*>(voidSelf);
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
