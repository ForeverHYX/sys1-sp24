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
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->Testbench__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))) 
                                     | ((IData)(vlSelf->Testbench__DOT__rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0)))));
    vlSelf->__VactTriggered.set(3U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(4U, ((IData)(vlSelf->Testbench__DOT__finish) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__finish__0))));
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelf->Testbench__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__finish__0 
        = vlSelf->Testbench__DOT__finish;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit(IData/*31:0*/ multiplicand, IData/*31:0*/ multiplier, QData/*63:0*/ product, IData/*31:0*/ &mul_judge__Vfuncrtn);

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_mul_judge__0__Vfuncout;
    __Vfunc_mul_judge__0__Vfuncout = 0;
    // Body
    if (vlSelf->Testbench__DOT__rst) {
        vlSelf->Testbench__DOT__judge__DOT__multiplier_reg = 0U;
        vlSelf->Testbench__DOT__judge__DOT__multiplicand_reg = 0U;
    } else if (vlSelf->Testbench__DOT__start) {
        vlSelf->Testbench__DOT__judge__DOT__multiplier_reg 
            = vlSelf->Testbench__DOT__multiplier;
        vlSelf->Testbench__DOT__judge__DOT__multiplicand_reg 
            = vlSelf->Testbench__DOT__multiplicand;
    }
    if (vlSelf->Testbench__DOT__rst) {
        vlSelf->Testbench__DOT__error = 0U;
    } else if (vlSelf->Testbench__DOT__finish) {
        vlSelf->Testbench__DOT__error = (1U != ([&]() {
                    VTestbench___024unit____Vdpiimwrap_mul_judge_TOP____024unit(vlSelf->Testbench__DOT__multiplicand, vlSelf->Testbench__DOT__multiplier, vlSelf->Testbench__DOT__product, __Vfunc_mul_judge__0__Vfuncout);
                }(), __Vfunc_mul_judge__0__Vfuncout));
    }
}
