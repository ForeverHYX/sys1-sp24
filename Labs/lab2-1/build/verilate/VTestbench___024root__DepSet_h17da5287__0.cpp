// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 0xaU;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 1U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 2U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 3U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 4U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 5U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 6U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 7U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 8U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 9U;
    vlSelf->Testbench__DOT__a = VL_RANDOM_I();
    vlSelf->Testbench__DOT__b = VL_RANDOM_I();
    vlSelf->Testbench__DOT__do_sub = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__unnamedblk1__DOT__i = 0xaU;
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 24, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        vlSelf->Testbench__DOT__clk = (1U & (~ (IData)(vlSelf->Testbench__DOT__clk)));
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 
                                           44);
    }
}

VL_INLINE_OPT void VTestbench___024root___act_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b 
        = (vlSelf->Testbench__DOT__b ^ (- (IData)((IData)(vlSelf->Testbench__DOT__do_sub))));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in 
        = (1U & (((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                  & (IData)(vlSelf->Testbench__DOT__do_sub)) 
                 | (vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 1U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 1U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 2U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__2__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 2U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 3U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__3__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 3U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 4U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__4__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 4U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 5U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__5__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 5U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 6U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__6__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 6U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 7U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__7__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 7U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 8U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__8__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 8U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 9U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__9__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 9U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xaU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__10__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xaU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xbU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__11__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xbU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xcU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__12__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xcU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xdU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__13__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xdU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xeU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__14__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xeU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0xfU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__15__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0xfU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x10U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__16__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x10U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x11U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__17__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x11U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x12U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__18__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x12U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x13U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__19__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x13U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x14U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__20__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x14U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x15U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__21__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x15U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x16U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__22__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x16U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x17U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__23__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x17U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x18U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x18U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x19U) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x19U)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x1aU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x1aU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x1bU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x1bU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x1cU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x1cU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x1dU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x1dU)));
    vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in 
        = (1U & ((((vlSelf->Testbench__DOT__a ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                   >> 0x1eU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in)) 
                 | ((vlSelf->Testbench__DOT__a & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                    >> 0x1eU)));
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY((1U & (~ (((1U & (IData)((1ULL 
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
                                              ? ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                 - 
                                                 (0x100000000ULL 
                                                  | (QData)((IData)(vlSelf->Testbench__DOT__b))))
                                              : ((QData)((IData)(vlSelf->Testbench__DOT__a)) 
                                                 + (QData)((IData)(vlSelf->Testbench__DOT__b)))))) 
                                 == ((0x80000000U & 
                                      ((0x80000000U 
                                        & (vlSelf->Testbench__DOT__a 
                                           ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                       ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                          << 0x1fU))) 
                                     | ((0x40000000U 
                                         & ((0xc0000000U 
                                             & (vlSelf->Testbench__DOT__a 
                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                            ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                               << 0x1eU))) 
                                        | ((0x20000000U 
                                            & ((0xe0000000U 
                                                & (vlSelf->Testbench__DOT__a 
                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                               ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
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
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub)))))))))))))))))))))))))))))))))))))))) {
        VL_WRITEF("a=%10#, b=%10#, do_sub=%1#, s=%10#, c=%1#, error, c_out=1, s=0\n",
                  32,vlSelf->Testbench__DOT__a,32,vlSelf->Testbench__DOT__b,
                  1,(IData)(vlSelf->Testbench__DOT__do_sub),
                  32,((0x80000000U & ((0x80000000U 
                                       & (vlSelf->Testbench__DOT__a 
                                          ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                      ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in) 
                                         << 0x1fU))) 
                      | ((0x40000000U & ((0xc0000000U 
                                          & (vlSelf->Testbench__DOT__a 
                                             ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                         ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__30__KET____DOT__adder0__c_in) 
                                            << 0x1eU))) 
                         | ((0x20000000U & ((0xe0000000U 
                                             & (vlSelf->Testbench__DOT__a 
                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                            ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__29__KET____DOT__adder0__c_in) 
                                               << 0x1dU))) 
                            | ((0x10000000U & ((0xf0000000U 
                                                & (vlSelf->Testbench__DOT__a 
                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                               ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__28__KET____DOT__adder0__c_in) 
                                                  << 0x1cU))) 
                               | ((0x8000000U & ((0xf8000000U 
                                                  & (vlSelf->Testbench__DOT__a 
                                                     ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                                 ^ 
                                                 ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__27__KET____DOT__adder0__c_in) 
                                                  << 0x1bU))) 
                                  | ((0x4000000U & 
                                      ((0xfc000000U 
                                        & (vlSelf->Testbench__DOT__a 
                                           ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                       ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__26__KET____DOT__adder0__c_in) 
                                          << 0x1aU))) 
                                     | ((0x2000000U 
                                         & ((0xfe000000U 
                                             & (vlSelf->Testbench__DOT__a 
                                                ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                            ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__25__KET____DOT__adder0__c_in) 
                                               << 0x19U))) 
                                        | ((0x1000000U 
                                            & ((0xff000000U 
                                                & (vlSelf->Testbench__DOT__a 
                                                   ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b)) 
                                               ^ ((IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__24__KET____DOT__adder0__c_in) 
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
                                                                                ^ (IData)(vlSelf->Testbench__DOT__do_sub)))))))))))))))))))))))))))))))))),
                  1,(1U & ((((vlSelf->Testbench__DOT__a 
                              ^ vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                             >> 0x1fU) & (IData)(vlSelf->Testbench__DOT__add_sub__DOT__adders1__DOT____Vcellinp__genblk1__BRA__31__KET____DOT__adder0__c_in)) 
                           | ((vlSelf->Testbench__DOT__a 
                               & vlSelf->Testbench__DOT__add_sub__DOT____Vcellinp__adders1__b) 
                              >> 0x1fU))));
    }
}

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab2-1/sim/testbench.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
