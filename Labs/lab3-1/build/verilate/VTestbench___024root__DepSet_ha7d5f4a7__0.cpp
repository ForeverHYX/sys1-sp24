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
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->Testbench__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
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

void VTestbench___024unit____Vdpiimwrap_fsm_judge_TOP____024unit(IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ rstn, IData/*31:0*/ &fsm_judge__Vfuncrtn);

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_fsm_judge__0__Vfuncout;
    __Vfunc_fsm_judge__0__Vfuncout = 0;
    // Body
    vlSelf->Testbench__DOT__error = (([&]() {
                VTestbench___024unit____Vdpiimwrap_fsm_judge_TOP____024unit(vlSelf->Testbench__DOT__a, (IData)(vlSelf->Testbench__DOT__b), vlSelf->Testbench__DOT__rstn, __Vfunc_fsm_judge__0__Vfuncout);
            }(), __Vfunc_fsm_judge__0__Vfuncout) != (IData)(vlSelf->Testbench__DOT__fsm__DOT__currentState));
}
