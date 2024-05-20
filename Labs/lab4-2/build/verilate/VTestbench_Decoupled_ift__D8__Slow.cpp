// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Decoupled_ift__D8.h"
#include "VTestbench__Syms.h"

void VTestbench_Decoupled_ift__D8___ctor_var_reset(VTestbench_Decoupled_ift__D8* vlSelf);

VTestbench_Decoupled_ift__D8::VTestbench_Decoupled_ift__D8(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench_Decoupled_ift__D8___ctor_var_reset(this);
}

void VTestbench_Decoupled_ift__D8::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestbench_Decoupled_ift__D8::~VTestbench_Decoupled_ift__D8() {
}
