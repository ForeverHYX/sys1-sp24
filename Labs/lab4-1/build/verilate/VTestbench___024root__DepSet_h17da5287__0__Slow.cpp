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
    vlSelf->__Vm_traceActivity[5U] = 1U;
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
    vlSelf->Testbench__DOT__seed = 0x1d4b42U;
    vlSelf->Testbench__DOT__judge__DOT__dataQueue = 
        VlQueue<QData/*63:0*/>::cons(0ULL, VlQueue<QData/*63:0*/>::cons(0ULL, 
                                                                        VlQueue<QData/*63:0*/>::cons(0ULL, 
                                                                                0ULL)));
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab4-1/sim/testbench.sv", 2, "", "Settle region did not converge.");
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

VL_ATTR_COLD void VTestbench___024root___stl_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[0U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[1U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[2U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[3U].__PVT__valid 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg;
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[0U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[1U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[2U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg[3U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][0U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[0U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][1U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[1U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][2U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[2U];
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[3U][3U] 
        = vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg[3U];
}

VL_ATTR_COLD void VTestbench___024root___eval_stl(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge Testbench.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge Testbench.clk or negedge Testbench.rst)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge Testbench.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge Testbench.out_valid)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge Testbench.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge Testbench.out_valid)\n");
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
    vlSelf->Testbench__DOT__in_data = VL_RAND_RESET_Q(64);
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->Testbench__DOT__kernel.__PVT__data[__Vi1] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Testbench__DOT__in_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__result);
    vlSelf->Testbench__DOT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__seed = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__error = VL_RAND_RESET_I(1);
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        vlSelf->Testbench__DOT__conv_unit__DOT__data.__PVT__data[__Vi1] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Testbench__DOT__conv_unit__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__state_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__data_reg[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->Testbench__DOT__conv_unit__DOT__shift1__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__add_tmp[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1_data[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[__Vi0].__PVT__data);
        vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage1[__Vi0].__PVT__valid = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__data);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__finish_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__Count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__0__KET____DOT__mult1__DOT__high_product_temp);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__finish_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__Count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__1__KET____DOT__mult1__DOT__high_product_temp);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__finish_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__Count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__2__KET____DOT__mult1__DOT__high_product_temp);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__multiplicand_reg = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(129, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__product_reg);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__finish_reg = VL_RAND_RESET_I(1);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__fsm_state_reg = VL_RAND_RESET_I(2);
    vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__Count = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(65, vlSelf->Testbench__DOT__conv_unit__DOT__conv1__DOT__genblk1__BRA__3__KET____DOT__mult1__DOT__high_product_temp);
    vlSelf->Testbench__DOT__judge__DOT__dataQueue.atDefault() = VL_RAND_RESET_Q(64);
    vlSelf->Testbench__DOT__judge__DOT__request = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__mid[__Vi0]);
    }
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__sum);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__simulate_result);
    vlSelf->Testbench__DOT__judge__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->Testbench__DOT__judge__DOT__resultQueue.atDefault().data());
    VL_RAND_RESET_W(128, vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__data);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__vector_stage2.__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__Testbench__DOT__conv_unit__DOT__conv1__DOT__state_reg = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__out_valid__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
