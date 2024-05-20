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
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelf->Testbench__DOT__rstn;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__clk = 0U;
    vlSelf->Testbench__DOT__rstn = 0U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x1194ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       14);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__rstn = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       17);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       19);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       21);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       23);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       25);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       27);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       29);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       31);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       33);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__rstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       36);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__rstn = 1U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       39);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       41);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       43);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 1U;
    vlSelf->Testbench__DOT__b = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       45);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__a = 0U;
    vlSelf->Testbench__DOT__b = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                       47);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("success!!!\n");
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 49, "");
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
                                           "/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 
                                           53);
        vlSelf->Testbench__DOT__clk = (1U & (~ (IData)(vlSelf->Testbench__DOT__clk)));
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 128> VTestbench__ConstPool__TABLE_h3c4b45e0_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__Vdly__Testbench__DOT__fsm__DOT__currentState 
        = vlSelf->Testbench__DOT__fsm__DOT__currentState;
    __Vtableidx1 = (((IData)(vlSelf->Testbench__DOT__fsm__DOT__currentState) 
                     << 5U) | (((IData)(vlSelf->Testbench__DOT__b) 
                                << 4U) | (((IData)(vlSelf->Testbench__DOT__a) 
                                           << 3U) | 
                                          (((IData)(vlSelf->Testbench__DOT__state) 
                                            << 1U) 
                                           | (IData)(vlSelf->Testbench__DOT__rstn)))));
    vlSelf->__Vdly__Testbench__DOT__fsm__DOT__currentState 
        = VTestbench__ConstPool__TABLE_h3c4b45e0_0[__Vtableidx1];
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->Testbench__DOT__error)) {
        VL_WRITEF("fail!!! %b %b %b\n",1,vlSelf->Testbench__DOT__a,
                  1,(IData)(vlSelf->Testbench__DOT__b),
                  2,vlSelf->Testbench__DOT__fsm__DOT__currentState);
        VL_FINISH_MT("/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 85, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->Testbench__DOT__fsm__DOT__currentState 
        = vlSelf->__Vdly__Testbench__DOT__fsm__DOT__currentState;
    vlSelf->Testbench__DOT__state = vlSelf->Testbench__DOT__fsm__DOT__currentState;
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
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
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
    VlTriggerVec<4> __VpreTriggered;
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab3-1/../../repo/sys-project/lab3-1/sim/testbench.v", 1, "", "Active region did not converge.");
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
