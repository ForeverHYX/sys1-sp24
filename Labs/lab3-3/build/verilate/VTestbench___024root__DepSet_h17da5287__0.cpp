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
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelf->Testbench__DOT__rst;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__finish__0 
        = vlSelf->Testbench__DOT__finish;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__clk = 0U;
    vlSelf->Testbench__DOT__rst = 1U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__rst = 0U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 1U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 2U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 3U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 4U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 5U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 6U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 7U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 8U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 9U;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xaU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xbU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xcU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xdU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xeU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0xfU;
    vlSelf->Testbench__DOT__start = 1U;
    vlSelf->Testbench__DOT__multiplicand = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    vlSelf->Testbench__DOT__multiplier = VL_RANDOM_SEEDED_II(vlSelf->Testbench__DOT__seed);
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_hfd073472__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge Testbench.finish)", 
                                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                                       24);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x9c4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__i = 0x10U;
    VL_WRITEF("success!!!\n");
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 28, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 
                                           32);
        vlSelf->Testbench__DOT__clk = (1U & (~ (IData)(vlSelf->Testbench__DOT__clk)));
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count 
        = vlSelf->Testbench__DOT__mul__DOT__Count;
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__multiplicand_reg 
        = vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg;
    vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg 
        = vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->Testbench__DOT__error)) {
        VL_WRITEF("fail!!!\n");
        VL_FINISH_MT("/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 71, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    if (vlSelf->Testbench__DOT__rst) {
        vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = 0U;
    } else if ((0U == (IData)(vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg))) {
        vlSelf->Testbench__DOT__finish = 0U;
        if (vlSelf->Testbench__DOT__start) {
            vlSelf->Testbench__DOT__mul__DOT__product_reg[0U] = 0U;
            vlSelf->Testbench__DOT__mul__DOT__product_reg[1U] = 0U;
            vlSelf->Testbench__DOT__mul__DOT__product_reg[2U] = 0U;
            vlSelf->Testbench__DOT__mul__DOT__high_product_temp = 0ULL;
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__multiplicand_reg 
                = vlSelf->Testbench__DOT__multiplicand;
            vlSelf->Testbench__DOT__mul__DOT__product_reg[0U] 
                = (IData)((QData)((IData)(vlSelf->Testbench__DOT__multiplier)));
            vlSelf->Testbench__DOT__mul__DOT__product_reg[1U] 
                = (IData)(((QData)((IData)(vlSelf->Testbench__DOT__multiplier)) 
                           >> 0x20U));
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count = 0U;
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = 1U;
        } else {
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = 0U;
        }
    } else if ((1U == (IData)(vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg))) {
        if ((0x20U == (IData)(vlSelf->Testbench__DOT__mul__DOT__Count))) {
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = 2U;
        } else {
            vlSelf->Testbench__DOT__mul__DOT__high_product_temp 
                = (0x1ffffffffULL & ((1U & vlSelf->Testbench__DOT__mul__DOT__product_reg[0U])
                                      ? ((QData)((IData)(
                                                         vlSelf->Testbench__DOT__mul__DOT__product_reg[1U])) 
                                         + (QData)((IData)(vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg)))
                                      : (QData)((IData)(
                                                        vlSelf->Testbench__DOT__mul__DOT__product_reg[1U]))));
            vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count 
                = (0x7fU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__mul__DOT__Count)));
            __Vtemp_3[0U] = vlSelf->Testbench__DOT__mul__DOT__product_reg[0U];
            __Vtemp_3[1U] = (IData)(vlSelf->Testbench__DOT__mul__DOT__high_product_temp);
            __Vtemp_3[2U] = (IData)((vlSelf->Testbench__DOT__mul__DOT__high_product_temp 
                                     >> 0x20U));
            VL_SHIFTR_WWI(65,65,32, __Vtemp_4, __Vtemp_3, 1U);
            vlSelf->Testbench__DOT__mul__DOT__product_reg[0U] 
                = __Vtemp_4[0U];
            vlSelf->Testbench__DOT__mul__DOT__product_reg[1U] 
                = __Vtemp_4[1U];
            vlSelf->Testbench__DOT__mul__DOT__product_reg[2U] 
                = (1U & __Vtemp_4[2U]);
        }
    } else if ((2U == (IData)(vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg))) {
        vlSelf->Testbench__DOT__product = (((QData)((IData)(
                                                            vlSelf->Testbench__DOT__mul__DOT__product_reg[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->Testbench__DOT__mul__DOT__product_reg[0U])));
        vlSelf->Testbench__DOT__finish = 1U;
        vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg = 0U;
        vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count = 0U;
    }
    vlSelf->Testbench__DOT__mul__DOT__fsm_state_reg 
        = vlSelf->__Vdly__Testbench__DOT__mul__DOT__fsm_state_reg;
    vlSelf->Testbench__DOT__mul__DOT__multiplicand_reg 
        = vlSelf->__Vdly__Testbench__DOT__mul__DOT__multiplicand_reg;
    vlSelf->Testbench__DOT__mul__DOT__Count = vlSelf->__Vdly__Testbench__DOT__mul__DOT__Count;
}

void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    // Body
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfd073472__0.commit("@(posedge Testbench.finish)");
    }
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfd073472__0.resume("@(posedge Testbench.finish)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    VTestbench___024root___timing_commit(vlSelf);
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab3-3/sim/testbench.v", 1, "", "Active region did not converge.");
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
