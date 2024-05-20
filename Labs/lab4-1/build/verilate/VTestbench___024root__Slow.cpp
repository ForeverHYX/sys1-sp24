// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench__Syms.h"
#include "VTestbench___024root.h"

void VTestbench___024root___ctor_var_reset(VTestbench___024root* vlSelf);

VTestbench___024root::VTestbench___024root(VTestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTestbench___024root___ctor_var_reset(this);
}

void VTestbench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTestbench___024root::~VTestbench___024root() {
}
