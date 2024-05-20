// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_DECOUPLED_IFT__D8_H_
#define VERILATED_VTESTBENCH_DECOUPLED_IFT__D8_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTestbench_Decoupled_ift__D8 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ data;
    CData/*0:0*/ valid;
    CData/*0:0*/ ready;
    CData/*0:0*/ __Vdly__ready;

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench_Decoupled_ift__D8(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench_Decoupled_ift__D8();
    VL_UNCOPYABLE(VTestbench_Decoupled_ift__D8);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTestbench_Decoupled_ift__D8* obj);

#endif  // guard
