// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__I0 = 0U;
    vlSelf->Testbench__DOT__I1 = 0U;
    vlSelf->Testbench__DOT__I2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       8);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 0U;
    vlSelf->Testbench__DOT__I1 = 0U;
    vlSelf->Testbench__DOT__I2 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       10);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 0U;
    vlSelf->Testbench__DOT__I1 = 1U;
    vlSelf->Testbench__DOT__I2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       12);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 0U;
    vlSelf->Testbench__DOT__I1 = 1U;
    vlSelf->Testbench__DOT__I2 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       14);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 1U;
    vlSelf->Testbench__DOT__I1 = 0U;
    vlSelf->Testbench__DOT__I2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       16);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 1U;
    vlSelf->Testbench__DOT__I1 = 0U;
    vlSelf->Testbench__DOT__I2 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       18);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 1U;
    vlSelf->Testbench__DOT__I1 = 1U;
    vlSelf->Testbench__DOT__I2 = 0U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       20);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->Testbench__DOT__I0 = 1U;
    vlSelf->Testbench__DOT__I1 = 1U;
    vlSelf->Testbench__DOT__I2 = 1U;
    co_await vlSelf->__VdlySched.delay(0x1f4ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 
                                       22);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 23, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
}

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab0-2/../../repo/sys-project/lab0-2/sim/testbench.v", 1, "", "Active region did not converge.");
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
