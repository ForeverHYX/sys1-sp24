// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ Testbench__DOT__data;
    CData/*0:0*/ Testbench__DOT__point;
    CData/*0:0*/ Testbench__DOT__LE;
    CData/*0:0*/ Testbench__DOT__dut__DOT__ta;
    CData/*0:0*/ Testbench__DOT__dut__DOT__tb;
    CData/*0:0*/ Testbench__DOT__dut__DOT__tc;
    CData/*0:0*/ Testbench__DOT__dut__DOT__td;
    CData/*0:0*/ Testbench__DOT__dut__DOT__te;
    CData/*0:0*/ Testbench__DOT__dut__DOT__tf;
    CData/*0:0*/ Testbench__DOT__dut__DOT__tg;
    CData/*0:0*/ Testbench__DOT__dut__DOT__tp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ Testbench__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
