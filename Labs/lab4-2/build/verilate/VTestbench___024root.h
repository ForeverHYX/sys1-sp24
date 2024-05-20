// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VTestbench_Decoupled_ift__D8;


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    VTestbench_Decoupled_ift__D8* __PVT__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_tdata;
    VTestbench_Decoupled_ift__D8* __PVT__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_rdata;
    VTestbench_Decoupled_ift__D8* __PVT__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__uart_txd;
    VTestbench_Decoupled_ift__D8* __PVT__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__uart_rxd;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Testbench__DOT__clk;
        CData/*0:0*/ Testbench__DOT__rstn;
        CData/*0:0*/ Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk;
        CData/*0:0*/ Testbench__DOT__judge__DOT__baud_clk;
        CData/*0:0*/ Testbench__DOT__rxd;
        CData/*0:0*/ Testbench__DOT__txd;
        CData/*0:0*/ Testbench__DOT__error;
        CData/*2:0*/ Testbench__DOT__judge__DOT__baud_cnt;
        CData/*1:0*/ Testbench__DOT__judge__DOT__rdata_state_reg;
        CData/*2:0*/ Testbench__DOT__judge__DOT__rwork_cnt;
        CData/*7:0*/ Testbench__DOT__judge__DOT__rdata;
        CData/*1:0*/ Testbench__DOT__judge__DOT__tdata_state_reg;
        CData/*2:0*/ Testbench__DOT__judge__DOT__twork_cnt;
        CData/*7:0*/ Testbench__DOT__judge__DOT__tdata;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__empty;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__full;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_ready;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_shift;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellinp__receiver__RxD_clear;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_endofpacket;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_state;
        CData/*1:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_sync;
        CData/*1:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__Filter_cnt;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__RxD_bit;
        CData/*2:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__OversamplingCnt;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__sampleNow;
        CData/*5:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__GapCnt;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__empty;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__full;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_buffer;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__out_data_valid;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__empty_tmp;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_tmp;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray;
        CData/*3:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_tmp;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid;
        CData/*7:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid;
        CData/*0:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__debug;
        CData/*1:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg;
        CData/*0:0*/ __Vdlyvset__Testbench__DOT__clk_div__v0;
        CData/*0:0*/ __Vdlyvset__Testbench__DOT__clk_div__v1;
        CData/*1:0*/ __Vdly__Testbench__DOT__judge__DOT__tdata_state_reg;
        CData/*2:0*/ __Vdly__Testbench__DOT__judge__DOT__twork_cnt;
        CData/*7:0*/ __Vdly__Testbench__DOT__judge__DOT__tdata;
        CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr;
        CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr;
        CData/*7:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata;
    };
    struct {
        CData/*0:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__rdata_valid;
        CData/*1:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__state_reg;
        CData/*7:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata;
        CData/*0:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_loop__DOT__tdata_valid;
        CData/*3:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__TxD_state;
        CData/*0:0*/ __Vdly__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT____Vcellout__receiver__RxD_data_ready;
        CData/*2:0*/ __Vdlyvdim0__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
        CData/*7:0*/ __Vdlyvval__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
        CData/*0:0*/ __Vdlyvset__Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__rstn__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__judge__DOT__baud_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT____Vcellinp__genblk1__DOT__loop_test__core_clk__0;
        CData/*0:0*/ __VactContinue;
        SData/*12:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__transmit__DOT__transmitter__DOT__tickgen__DOT__Acc;
        SData/*12:0*/ Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__receiver__DOT__receiver__DOT__tickgen__DOT__Acc;
        IData/*31:0*/ Testbench__DOT__clk_div;
        IData/*31:0*/ Testbench__DOT__judge__DOT__rdata_cnt;
        IData/*31:0*/ Testbench__DOT__judge__DOT__next_rdata;
        IData/*31:0*/ Testbench__DOT__judge__DOT__tdata_cnt;
        IData/*31:0*/ __Vdlyvval__Testbench__DOT__clk_div__v0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 8> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo;
        VlUnpacked<CData/*3:0*/, 2> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d;
        VlUnpacked<CData/*3:0*/, 2> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__tfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d;
        VlUnpacked<CData/*7:0*/, 8> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__fifo;
        VlUnpacked<CData/*3:0*/, 2> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__rptr_gray_d;
        VlUnpacked<CData/*3:0*/, 2> Testbench__DOT__genblk1__DOT__loop_test__DOT__uart_unit__DOT__rfifo__DOT__fifo__DOT__genblk1__DOT__fifo__DOT__wptr_gray_d;
        VlUnpacked<CData/*0:0*/, 11> __Vm_traceActivity;
    };
    VlQueue<CData/*7:0*/> Testbench__DOT__judge__DOT__tdataQueue;
    VlQueue<CData/*7:0*/> Testbench__DOT__judge__DOT__rdataQueue;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h4be1af84__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench___024root(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench___024root();
    VL_UNCOPYABLE(VTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
