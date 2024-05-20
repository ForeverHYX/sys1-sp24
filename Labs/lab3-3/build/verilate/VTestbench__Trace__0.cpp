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
        bufp->chgBit(oldp+0,(vlSelf->Testbench__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->Testbench__DOT__multiplicand),32);
        bufp->chgIData(oldp+2,(vlSelf->Testbench__DOT__multiplier),32);
        bufp->chgBit(oldp+3,(vlSelf->Testbench__DOT__start));
        bufp->chgIData(oldp+4,(vlSelf->Testbench__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelf->Testbench__DOT__seed),32);
        bufp->chgBit(oldp+6,((1U & (~ (IData)(vlSelf->Testbench__DOT__rst)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+7,(vlSelf->Testbench__DOT__error));
        bufp->chgIData(oldp+8,(vlSelf->Testbench__DOT__judge__DOT__multiplicand_reg),32);
        bufp->chgIData(oldp+9,(vlSelf->Testbench__DOT__judge__DOT__multiplier_reg),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgQData(oldp+10,(vlSelf->Testbench__DOT__product),64);
        bufp->chgBit(oldp+12,(vlSelf->Testbench__DOT__finish));
        bufp->chgIData(oldp+13,(vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg),32);
        bufp->chgWData(oldp+14,(vlSelf->Testbench__DOT__mul__DOT__product_reg),65);
        bufp->chgCData(oldp+17,(vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg),2);
        bufp->chgCData(oldp+18,(vlSelf->Testbench__DOT__mul__DOT__Count),7);
        bufp->chgQData(oldp+19,(vlSelf->Testbench__DOT__mul__DOT__high_product_temp),33);
    }
    bufp->chgBit(oldp+21,(vlSelf->Testbench__DOT__clk));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
