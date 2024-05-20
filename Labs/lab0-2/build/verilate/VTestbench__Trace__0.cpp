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
        bufp->chgBit(oldp+0,(vlSelf->Testbench__DOT__I0));
        bufp->chgBit(oldp+1,(vlSelf->Testbench__DOT__I1));
        bufp->chgBit(oldp+2,(vlSelf->Testbench__DOT__I2));
        bufp->chgBit(oldp+3,((((IData)(vlSelf->Testbench__DOT__I0) 
                               & ((~ (IData)(vlSelf->Testbench__DOT__I1)) 
                                  & (~ (IData)(vlSelf->Testbench__DOT__I2)))) 
                              | (((IData)(vlSelf->Testbench__DOT__I1) 
                                  & ((~ (IData)(vlSelf->Testbench__DOT__I0)) 
                                     & (~ (IData)(vlSelf->Testbench__DOT__I2)))) 
                                 | (((IData)(vlSelf->Testbench__DOT__I2) 
                                     & ((~ (IData)(vlSelf->Testbench__DOT__I0)) 
                                        & (~ (IData)(vlSelf->Testbench__DOT__I1)))) 
                                    | ((IData)(vlSelf->Testbench__DOT__I0) 
                                       & ((IData)(vlSelf->Testbench__DOT__I1) 
                                          & (IData)(vlSelf->Testbench__DOT__I2))))))));
        bufp->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->Testbench__DOT__I1)))));
        bufp->chgBit(oldp+5,((1U & (~ (IData)(vlSelf->Testbench__DOT__I2)))));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->Testbench__DOT__I0) 
                              & ((~ (IData)(vlSelf->Testbench__DOT__I1)) 
                                 & (~ (IData)(vlSelf->Testbench__DOT__I2))))));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->Testbench__DOT__I0) 
                              & ((IData)(vlSelf->Testbench__DOT__I1) 
                                 & (IData)(vlSelf->Testbench__DOT__I2)))));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->Testbench__DOT__I2) 
                              & ((~ (IData)(vlSelf->Testbench__DOT__I0)) 
                                 & (~ (IData)(vlSelf->Testbench__DOT__I1))))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->Testbench__DOT__I1) 
                              & ((~ (IData)(vlSelf->Testbench__DOT__I0)) 
                                 & (~ (IData)(vlSelf->Testbench__DOT__I2))))));
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->Testbench__DOT__I0)))));
    }
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
