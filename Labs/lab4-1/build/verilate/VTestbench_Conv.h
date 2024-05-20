// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH_CONV_H_
#define VERILATED_VTESTBENCH_CONV_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "VTestbench_Conv.h"


class VTestbench__Syms;

// UNPACKED STRUCT TYPES
struct VTestbench_data_vector__struct__0 {
    VlUnpacked<QData/*63:0*/, 4> __PVT__data;

    bool operator==(const VTestbench_data_vector__struct__0& rhs) const {
        return __PVT__data == rhs.__PVT__data;
    }
    bool operator!=(const VTestbench_data_vector__struct__0& rhs) const {
        return !(*this == rhs);
    }
};

class alignas(VL_CACHE_LINE_BYTES) VTestbench_Conv final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTestbench_Conv(VTestbench__Syms* symsp, const char* v__name);
    ~VTestbench_Conv();
    VL_UNCOPYABLE(VTestbench_Conv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const VTestbench_data_vector__struct__0& obj);

#endif  // guard
