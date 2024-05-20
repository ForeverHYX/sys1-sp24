// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_static(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTestbench___024root___eval_final(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__stl(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VTestbench___024root___act_sequent__TOP__0(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_stl(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VTestbench___024root___eval_triggers__stl(VTestbench___024root* vlSelf);

VL_ATTR_COLD bool VTestbench___024root___eval_phase__stl(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Testbench__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__do_sub = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
