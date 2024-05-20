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
    CData/*7:0*/ Testbench__DOT__I;
    CData/*2:0*/ Testbench__DOT__S;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__s_logisimNet3;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__s_logisimNet8;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_5__DOT__s_realInput1;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_6__DOT__s_realInput1;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_7__DOT__s_realInput2;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_1__DOT__GATES_8__DOT__s_realInput1;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_2__DOT__s_logisimNet3;
    CData/*0:0*/ Testbench__DOT__dut__DOT__mux4_2__DOT__s_logisimNet8;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
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
