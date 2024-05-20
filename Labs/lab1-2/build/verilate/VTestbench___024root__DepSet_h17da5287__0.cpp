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
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->Testbench__DOT__LE = 1U;
    vlSelf->Testbench__DOT__point = 1U;
    vlSelf->Testbench__DOT__data = 9U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       13);
    vlSelf->Testbench__DOT__LE = 0U;
    vlSelf->Testbench__DOT__data = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 1U;
    vlSelf->Testbench__DOT__data = 1U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 2U;
    vlSelf->Testbench__DOT__data = 2U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 3U;
    vlSelf->Testbench__DOT__data = 3U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 4U;
    vlSelf->Testbench__DOT__data = 4U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 5U;
    vlSelf->Testbench__DOT__data = 5U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 6U;
    vlSelf->Testbench__DOT__data = 6U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 7U;
    vlSelf->Testbench__DOT__data = 7U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       17);
    vlSelf->Testbench__DOT__i = 8U;
    vlSelf->Testbench__DOT__point = 0U;
    vlSelf->Testbench__DOT__data = 8U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 9U;
    vlSelf->Testbench__DOT__data = 9U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xaU;
    vlSelf->Testbench__DOT__data = 0xaU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xbU;
    vlSelf->Testbench__DOT__data = 0xbU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xcU;
    vlSelf->Testbench__DOT__data = 0xcU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xdU;
    vlSelf->Testbench__DOT__data = 0xdU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xeU;
    vlSelf->Testbench__DOT__data = 0xeU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0xfU;
    vlSelf->Testbench__DOT__data = 0xfU;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 
                                       22);
    vlSelf->Testbench__DOT__i = 0x10U;
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 24, "");
}

extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h4a902885_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h99d97868_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h6231bdbc_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_hc91e74cf_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h8e0cea0e_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_hd8d6f3b0_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_h08e808a5_0;
extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_hb99eceb0_0;

VL_INLINE_OPT void VTestbench___024root___act_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->Testbench__DOT__point) 
                     << 5U) | (((IData)(vlSelf->Testbench__DOT__data) 
                                << 1U) | (IData)(vlSelf->Testbench__DOT__LE)));
    vlSelf->Testbench__DOT__dut__DOT__ta = VTestbench__ConstPool__TABLE_h4a902885_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__tb = VTestbench__ConstPool__TABLE_h99d97868_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__tc = VTestbench__ConstPool__TABLE_h6231bdbc_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__td = VTestbench__ConstPool__TABLE_hc91e74cf_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__te = VTestbench__ConstPool__TABLE_h8e0cea0e_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__tf = VTestbench__ConstPool__TABLE_hd8d6f3b0_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__tg = VTestbench__ConstPool__TABLE_h08e808a5_0
        [__Vtableidx1];
    vlSelf->Testbench__DOT__dut__DOT__tp = VTestbench__ConstPool__TABLE_hb99eceb0_0
        [__Vtableidx1];
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 1, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab1-2/../../repo/sys-project/lab1-2/sim/testbench.v", 1, "", "Active region did not converge.");
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
