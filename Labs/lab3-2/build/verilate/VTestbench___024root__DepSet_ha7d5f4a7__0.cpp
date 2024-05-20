// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->Testbench__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->Testbench__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelf->Testbench__DOT__rstn;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(IData/*31:0*/ rstn, IData/*31:0*/ high_rst, IData/*31:0*/ low_co, IData/*31:0*/ co, IData/*31:0*/ cnt, IData/*31:0*/ base, IData/*31:0*/ init, IData/*31:0*/ &cnt_judge__Vfuncrtn);

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_cnt_judge__1__Vfuncout;
    __Vfunc_cnt_judge__1__Vfuncout = 0;
    // Body
    if (vlSelf->Testbench__DOT__rstn) {
        vlSelf->Testbench__DOT__error = (1U != ([&]() {
                    VTestbench___024unit____Vdpiimwrap_cnt_judge_TOP____024unit(vlSelf->Testbench__DOT__rstn, (IData)(vlSelf->Testbench__DOT__high_rst), vlSelf->Testbench__DOT__low_co, (IData)(vlSelf->Testbench__DOT__co), 
                                                                                (((IData)(vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_high__cnt) 
                                                                                << 4U) 
                                                                                | (IData)(vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_low__cnt)), 0x18U, 0x10U, __Vfunc_cnt_judge__1__Vfuncout);
                }(), __Vfunc_cnt_judge__1__Vfuncout));
    }
    vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_high__cnt 
        = vlSelf->__Vdly__Testbench__DOT__cnt_24__DOT____Vcellout__cnt_high__cnt;
    vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_low__cnt 
        = vlSelf->__Vdly__Testbench__DOT__cnt_24__DOT____Vcellout__cnt_low__cnt;
    vlSelf->Testbench__DOT__co = ((2U == (IData)(vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_high__cnt)) 
                                  & (3U == (IData)(vlSelf->Testbench__DOT__cnt_24__DOT____Vcellout__cnt_low__cnt)));
}
