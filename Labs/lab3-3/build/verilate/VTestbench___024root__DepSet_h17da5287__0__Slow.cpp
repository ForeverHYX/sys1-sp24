// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf);

VL_ATTR_COLD void VTestbench___024root___eval_static(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static\n"); );
    // Body
    VTestbench___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTestbench___024root___eval_static__TOP(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->Testbench__DOT__seed = 0x1bf52U;
}

VL_ATTR_COLD void VTestbench___024root___eval_final(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTestbench___024root___eval_settle(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_settle\n"); );
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Testbench.clk or negedge Testbench.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge Testbench.clk or posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge Testbench.finish)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge Testbench.clk or negedge Testbench.rst)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge Testbench.clk or posedge Testbench.rst)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge Testbench.finish)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__multiplicand = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__multiplier = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__low_pro = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->Testbench__DOT__finish = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__error = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__mul__DOT__product_reg);
    vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__mul__DOT__Count = VL_RAND_RESET_I(7);
    vlSelf->Testbench__DOT__mul__DOT__high_product_temp = VL_RAND_RESET_Q(33);
    vlSelf->Testbench__DOT__judge__DOT__multiplicand_reg = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__judge__DOT__multiplier_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__multiplicand_reg = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__finish__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
