// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__2(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelf->Testbench__DOT__rstn;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0 
        = vlSelf->Testbench__DOT__judge__DOT__baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0 
        = vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x7d0ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                       15);
    vlSelf->Testbench__DOT__rstn = 0U;
    co_await vlSelf->__VdlySched.delay(0x1388ULL, nullptr, 
                                       "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                       17);
    vlSelf->Testbench__DOT__rstn = 1U;
    co_await vlSelf->__VdlySched.delay(0xf4240ULL, 
                                       nullptr, "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                       19);
    VL_WRITEF("success!!!\n");
    VL_FINISH_MT("/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 21, "");
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1f4ULL, 
                                           nullptr, 
                                           "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                           11);
        vlSelf->Testbench__DOT__clk = (1U & (~ (IData)(vlSelf->Testbench__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VtrigSched_h4be1af84__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge Testbench.clk or negedge Testbench.rstn)", 
                                                           "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                                           25);
        if (vlSelf->Testbench__DOT__rstn) {
            co_await vlSelf->__VdlySched.delay(0xc8ULL, 
                                               nullptr, 
                                               "/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 
                                               29);
            vlSelf->__Vdlyvval__Testbench__DOT__clk_div__v0 
                = ((IData)(1U) + vlSelf->Testbench__DOT__clk_div);
            vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v0 = 1U;
        } else {
            vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v1 = 1U;
        }
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 64> VTestbench__ConstPool__TABLE_hb720a1f8_0;
extern const VlUnpacked<CData/*3:0*/, 64> VTestbench__ConstPool__TABLE_heecb5492_0;
extern const VlUnpacked<CData/*1:0*/, 32> VTestbench__ConstPool__TABLE_h670db273_0;
extern const VlUnpacked<CData/*1:0*/, 32> VTestbench__ConstPool__TABLE_h69cb3b12_0;
extern const VlUnpacked<CData/*0:0*/, 32> VTestbench__ConstPool__TABLE_h89cf4bd1_0;

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v;
    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v = 0;
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift = 0;
    SData/*12:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync = 0;
    CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state = 0;
    CData/*5:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = 0;
    SData/*12:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc = 0;
    // Body
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    vlSelf->__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0U;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = (0x1fffU & ((IData)(0xccdU) + (0xfffU & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))));
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = ((0U != (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))
            ? (0x1fffU & ((IData)(0x19aU) + (0xfffU 
                                             & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))))
            : 0x19aU);
    if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt 
            = ((0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))
                ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt))));
    }
    if ((0U != (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt = 0U;
    } else if ((IData)((((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                         >> 0xcU) & (~ ((5U >= (7U 
                                                & ((IData)(1U) 
                                                   + 
                                                   ([&]() {
                                            __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v = 8U;
                                            __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout = 0U;
                                            while (
                                                   (0U 
                                                    != 
                                                    VL_SHIFTR_III(32,32,32, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__v, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout))) {
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout 
                                                    = 
                                                    ((IData)(1U) 
                                                     + __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout);
                                            }
                                        }(), __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__0__Vfuncout)))) 
                                        && (1U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt) 
                                                  >> 
                                                  (7U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ([&]() {
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v = 8U;
                                                __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout = 0U;
                                                while (
                                                       (0U 
                                                        != 
                                                        VL_SHIFTR_III(32,32,32, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__v, __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout))) {
                                                    __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout 
                                                        = 
                                                        ((IData)(1U) 
                                                         + __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout);
                                                }
                                            }(), __Vfunc_Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__log2__1__Vfuncout)))))))))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
            = (0x3fU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt)));
    }
    if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
            = ((2U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync) 
                      << 1U)) | (IData)(vlSelf->Testbench__DOT__rxd));
    }
    if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
         & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))) {
        vlSelf->__Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data;
        vlSelf->__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 1U;
        vlSelf->__Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = (7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr));
    }
    if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
         & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state) 
            >> 3U))) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data 
            = (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit) 
                << 7U) | (0x7fU & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data) 
                                   >> 1U)));
    }
    __Vtableidx2 = (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit) 
                     << 5U) | (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
                                << 4U) | (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state)));
    if (VTestbench__ConstPool__TABLE_hb720a1f8_0[__Vtableidx2]) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
            = VTestbench__ConstPool__TABLE_heecb5492_0
            [__Vtableidx2];
    }
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear)) 
           & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
              | (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow) 
                  & (2U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state))) 
                 & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit))));
    if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready) 
         & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
    } else if ((IData)((((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state) 
                         >> 3U) & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc) 
                                   >> 0xcU)))) {
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
            = (0xffU & VL_SHIFTR_III(8,8,32, (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift), 1U));
    }
    if ((8U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((4U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((2U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                    if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 2U;
                    }
                } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xfU;
                }
            } else if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xeU;
                }
            } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xdU;
            }
        } else if ((2U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
                if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xcU;
                }
            } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xbU;
            }
        } else if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0xaU;
            }
        } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 9U;
        }
    } else if ((4U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((2U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 8U;
        }
    } else if ((2U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
            if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
            }
        } else if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
        }
    } else if ((1U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state))) {
        if ((0x1000U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 0U;
        }
    } else if (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid) {
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state = 4U;
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_endofpacket 
        = (IData)((((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                    >> 0xcU) & (0x1fU == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt))));
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
    __Vtableidx1 = (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt) 
                     << 3U) | (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync) 
                                << 1U) | (1U & ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
                                                >> 0xcU))));
    if ((1U & VTestbench__ConstPool__TABLE_h670db273_0
         [__Vtableidx1])) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt 
            = VTestbench__ConstPool__TABLE_h69cb3b12_0
            [__Vtableidx1];
    }
    if ((2U & VTestbench__ConstPool__TABLE_h670db273_0
         [__Vtableidx1])) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit 
            = VTestbench__ConstPool__TABLE_h89cf4bd1_0
            [__Vtableidx1];
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow 
        = (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc) 
            >> 0xcU) & (3U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt)));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vdly__Testbench__DOT__judge__DOT__baud_cnt;
    __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0;
    CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0;
    // Body
    __Vdly__Testbench__DOT__judge__DOT__baud_cnt = vlSelf->Testbench__DOT__judge__DOT__baud_cnt;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0U;
    __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    if (vlSelf->Testbench__DOT__rstn) {
        if ((4U == (IData)(vlSelf->Testbench__DOT__judge__DOT__baud_cnt))) {
            vlSelf->Testbench__DOT__judge__DOT__baud_clk 
                = (1U & (~ (IData)(vlSelf->Testbench__DOT__judge__DOT__baud_clk)));
            __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0U;
        } else {
            __Vdly__Testbench__DOT__judge__DOT__baud_cnt 
                = (7U & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__judge__DOT__baud_cnt)));
        }
        if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
             & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)))) {
            vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
        }
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 1U;
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
            [0U];
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 1U;
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
            [0U];
        if ((1U & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)))))) {
            __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
            vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer 
                = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo
                [(7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))];
        }
        if (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp) {
            if (((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty)) 
                 & (0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)))) {
                vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
            }
        } else {
            vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 1U;
        }
    } else {
        vlSelf->Testbench__DOT__judge__DOT__baud_clk = 0U;
        __Vdly__Testbench__DOT__judge__DOT__baud_cnt = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = 0U;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 1U;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 1U;
        __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
    }
    vlSelf->Testbench__DOT__judge__DOT__baud_cnt = __Vdly__Testbench__DOT__judge__DOT__baud_cnt;
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] = 0U;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] = 0U;
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*7:0*/ __Vdly__Testbench__DOT__judge__DOT__rdata;
    __Vdly__Testbench__DOT__judge__DOT__rdata = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg;
    __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0;
    CData/*2:0*/ __Vdly__Testbench__DOT__judge__DOT__rwork_cnt;
    __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = 0;
    // Body
    __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = vlSelf->Testbench__DOT__judge__DOT__rwork_cnt;
    __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg 
        = vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg;
    __Vdly__Testbench__DOT__judge__DOT__rdata = vlSelf->Testbench__DOT__judge__DOT__rdata;
    if (vlSelf->Testbench__DOT__rstn) {
        if (VL_UNLIKELY((0U == (IData)(vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg)))) {
            vlSelf->Testbench__DOT__judge__DOT__next_rdata 
                = VL_RANDOM_I();
            vlSelf->Testbench__DOT__judge__DOT__rdata_cnt 
                = ((IData)(1U) + vlSelf->Testbench__DOT__judge__DOT__rdata_cnt);
            __Vdly__Testbench__DOT__judge__DOT__rdata 
                = (0xffU & vlSelf->Testbench__DOT__judge__DOT__next_rdata);
            vlSelf->Testbench__DOT__rxd = 0U;
            __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 1U;
            __Vdly__Testbench__DOT__judge__DOT__rwork_cnt = 7U;
            vlSelf->Testbench__DOT__judge__DOT__rdataQueue.push_back(
                                                                     (0xffU 
                                                                      & vlSelf->Testbench__DOT__judge__DOT__next_rdata));
            VL_WRITEF("receive data %x\n",8,(0xffU 
                                             & vlSelf->Testbench__DOT__judge__DOT__next_rdata));
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg))) {
            __Vdly__Testbench__DOT__judge__DOT__rdata 
                = (0x7fU & ((IData)(vlSelf->Testbench__DOT__judge__DOT__rdata) 
                            >> 1U));
            __Vdly__Testbench__DOT__judge__DOT__rwork_cnt 
                = (7U & ((IData)(vlSelf->Testbench__DOT__judge__DOT__rwork_cnt) 
                         - (IData)(1U)));
            vlSelf->Testbench__DOT__rxd = (1U & (IData)(vlSelf->Testbench__DOT__judge__DOT__rdata));
            if ((0U == (IData)(vlSelf->Testbench__DOT__judge__DOT__rwork_cnt))) {
                __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 2U;
            }
        } else {
            vlSelf->Testbench__DOT__rxd = 1U;
            __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0U;
        }
    } else {
        __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg = 0U;
        vlSelf->Testbench__DOT__rxd = 1U;
    }
    vlSelf->Testbench__DOT__judge__DOT__rdata = __Vdly__Testbench__DOT__judge__DOT__rdata;
    vlSelf->Testbench__DOT__judge__DOT__rdata_state_reg 
        = __Vdly__Testbench__DOT__judge__DOT__rdata_state_reg;
    vlSelf->Testbench__DOT__judge__DOT__rwork_cnt = __Vdly__Testbench__DOT__judge__DOT__rwork_cnt;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata 
        = vlSelf->Testbench__DOT__judge__DOT__tdata;
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__twork_cnt 
        = vlSelf->Testbench__DOT__judge__DOT__twork_cnt;
    vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg 
        = vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__4(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->Testbench__DOT__error)) {
        VL_WRITEF("fail!!!\n");
        VL_FINISH_MT("/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 104, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__7(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__7\n"); );
    // Body
    if (vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v0) {
        vlSelf->Testbench__DOT__clk_div = vlSelf->__Vdlyvval__Testbench__DOT__clk_div__v0;
        vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v0 = 0U;
    }
    if (vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v1) {
        vlSelf->Testbench__DOT__clk_div = 0U;
        vlSelf->__Vdlyvset__Testbench__DOT__clk_div__v1 = 0U;
    }
    vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk 
        = (1U & (vlSelf->Testbench__DOT__clk_div >> 2U));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__8(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready 
        = (0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__9(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__9\n"); );
    // Body
    if (vlSelf->Testbench__DOT__rstn) {
        if ((0U == (IData)(vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg))) {
            if ((1U & (~ (IData)(vlSelf->Testbench__DOT__txd)))) {
                vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 1U;
                vlSelf->__Vdly__Testbench__DOT__judge__DOT__twork_cnt = 7U;
            }
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg))) {
            vlSelf->__Vdly__Testbench__DOT__judge__DOT__twork_cnt 
                = (7U & ((IData)(vlSelf->Testbench__DOT__judge__DOT__twork_cnt) 
                         - (IData)(1U)));
            vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata 
                = (((IData)(vlSelf->Testbench__DOT__txd) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->Testbench__DOT__judge__DOT__tdata) 
                                       >> 1U)));
            if ((0U == (IData)(vlSelf->Testbench__DOT__judge__DOT__twork_cnt))) {
                vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 2U;
            }
        } else if (VL_UNLIKELY((2U == (IData)(vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg)))) {
            vlSelf->Testbench__DOT__judge__DOT__tdataQueue.push_back(vlSelf->Testbench__DOT__judge__DOT__tdata);
            vlSelf->Testbench__DOT__judge__DOT__tdata_cnt 
                = ((IData)(1U) + vlSelf->Testbench__DOT__judge__DOT__tdata_cnt);
            vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
            vlSelf->Testbench__DOT__error = (vlSelf->Testbench__DOT__judge__DOT__tdataQueue.pop_front() 
                                             != vlSelf->Testbench__DOT__judge__DOT__rdataQueue.pop_front());
            VL_WRITEF("transmit data %x\n",8,vlSelf->Testbench__DOT__judge__DOT__tdata);
        } else {
            vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
        }
    } else {
        vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata = 0U;
        vlSelf->Testbench__DOT__error = 0U;
        vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg = 0U;
    }
    vlSelf->Testbench__DOT__judge__DOT__tdata_state_reg 
        = vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata_state_reg;
    vlSelf->Testbench__DOT__judge__DOT__twork_cnt = vlSelf->__Vdly__Testbench__DOT__judge__DOT__twork_cnt;
    vlSelf->Testbench__DOT__judge__DOT__tdata = vlSelf->__Vdly__Testbench__DOT__judge__DOT__tdata;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__10(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__10\n"); );
    // Body
    if (vlSelf->Testbench__DOT__rstn) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
    } else {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = 0U;
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__12(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__12\n"); );
    // Body
    vlSelf->Testbench__DOT__txd = (1U & ((4U > (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state)) 
                                         | (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state) 
                                             >> 3U) 
                                            & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift))));
    if (vlSelf->__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[vlSelf->__Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0] 
            = vlSelf->__Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_comb__TOP__0(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear 
        = ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready) 
           & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full)));
}

void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__11(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    // Body
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x41ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h4be1af84__0.commit("@(posedge Testbench.clk or negedge Testbench.rstn)");
    }
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h4be1af84__0.resume("@(posedge Testbench.clk or negedge Testbench.rstn)");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<9> __VpreTriggered;
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
            VL_FATAL_MT("/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 2, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/forever/sys1-sp24/src/lab4-2/../../repo/sys-project/lab4-2/sim/testbench.sv", 2, "", "Active region did not converge.");
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
