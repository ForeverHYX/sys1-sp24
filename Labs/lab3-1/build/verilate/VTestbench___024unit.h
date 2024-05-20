// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024UNIT_H_
#define VERILATED_VTESTBENCH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench___024unit(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench___024unit();
    VL_UNCOPYABLE(VTestbench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
