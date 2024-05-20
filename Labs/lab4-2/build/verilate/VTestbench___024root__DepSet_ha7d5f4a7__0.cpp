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
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->Testbench__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(1U, ((~ (IData)(vlSelf->Testbench__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0)));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->Testbench__DOT__judge__DOT__baud_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0))) 
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(3U, (((~ (IData)(vlSelf->Testbench__DOT__judge__DOT__baud_clk)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0)) 
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0))) 
                                     | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))));
    vlSelf->__VactTriggered.set(5U, ((IData)(vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0))));
    vlSelf->__VactTriggered.set(6U, ((IData)(vlSelf->Testbench__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))));
    vlSelf->__VactTriggered.set(7U, ((((IData)(vlSelf->Testbench__DOT__clk) 
                                       & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0))) 
                                      | ((~ (IData)(vlSelf->Testbench__DOT__rstn)) 
                                         & (IData)(vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0))) 
                                     | vlSelf->__VdlySched.awaitingCurrentTime()));
    vlSelf->__VactTriggered.set(8U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelf->Testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__rstn__0 
        = vlSelf->Testbench__DOT__rstn;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0 
        = vlSelf->Testbench__DOT__judge__DOT__baud_clk;
    vlSelf->__Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0 
        = vlSelf->Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__5(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0;
    CData/*3:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0;
    // Body
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 0U;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 0U;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
    vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.__Vdly__ready 
        = vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
    vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
        = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
    if (vlSelf->Testbench__DOT__rstn) {
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0 = 1U;
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
            [0U];
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0 = 1U;
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
            [0U];
        if ((1U & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready))))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
        }
        if (((IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid) 
             & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
        }
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray 
            = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
    } else {
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2 = 1U;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2 = 1U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr = 0U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray = 0U;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v0;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v1;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d__v2) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[0U] = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d[1U] = 0U;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v0;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v1;
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d__v2) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[0U] = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d[1U] = 0U;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__6(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0;
    // Body
    __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 0U;
    if (((IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid) 
         & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
        __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.data;
        __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 = 1U;
        __Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0 
            = (7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr));
    }
    if (__Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo[__Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0] 
            = __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__11(VTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__11\n"); );
    // Body
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr), 1U) 
                   ^ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr)));
    if (vlSelf->Testbench__DOT__rstn) {
        if ((0U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg))) {
            vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid = 0U;
            if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid) 
                 & (IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready))) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata 
                    = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid = 1U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 1U;
            }
            vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.__Vdly__ready = 1U;
        } else if ((1U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg))) {
            vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.__Vdly__ready = 0U;
            if (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__debug) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid = 0U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata = 0U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 1U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 2U;
            } else if (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid) {
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata 
                    = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 1U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 2U;
            }
        } else if ((2U == (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg))) {
            if (((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid) 
                 & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full)))) {
                vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.data 
                    = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 0U;
                vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid = 1U;
                vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 0U;
            }
        } else {
            vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp)) 
                   & ((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)) 
                      | (IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready))))) {
            vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer 
                = vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo
                [(7U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr))];
        }
        if (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp) {
            if (((~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty)) 
                 & (IData)(vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready))) {
                vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
            }
        } else {
            vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 1U;
        }
    } else {
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid = 0U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid = 0U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata = 0U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata = 0U;
        vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.__Vdly__ready = 0U;
        vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata.valid = 0U;
        vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer = 0U;
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid = 0U;
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full 
        = (((3U & (~ ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp) 
                      >> 2U))) == (3U & (vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                                         [1U] >> 2U))) 
           & ((3U & (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp)) 
              == (3U & vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d
                  [1U])));
    if ((1U & (~ (IData)(vlSelf->Testbench__DOT__rstn)))) {
        vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__debug = 0U;
    }
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr 
        = vlSelf->__Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp 
        = (0xfU & (VL_SHIFTR_III(4,4,32, (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr), 1U) 
                   ^ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr)));
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp 
        = ((IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp) 
           == vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d
           [1U]);
    vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.ready 
        = vlSymsp->TOP__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata.__Vdly__ready;
    vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty 
        = (1U & (~ (IData)(vlSelf->Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid)));
}
