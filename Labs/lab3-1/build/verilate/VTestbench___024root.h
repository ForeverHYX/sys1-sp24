// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VTestbench___024unit;


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024root final : public VerilatedModule {
  public:
    // CELLS
    VTestbench___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ Testbench__DOT__clk;
    CData/*0:0*/ Testbench__DOT__rstn;
    CData/*0:0*/ Testbench__DOT__a;
    CData/*0:0*/ Testbench__DOT__b;
    CData/*1:0*/ Testbench__DOT__state;
    CData/*0:0*/ Testbench__DOT__error;
    CData/*1:0*/ Testbench__DOT__fsm__DOT__currentState;
    CData/*1:0*/ __Vdly__Testbench__DOT__fsm__DOT__currentState;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__Testbench__DOT__rstn__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
