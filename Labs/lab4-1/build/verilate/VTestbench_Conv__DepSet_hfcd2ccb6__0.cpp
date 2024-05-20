// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench_Conv.h"

std::string VL_TO_STRING(const VTestbench_data_vector__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestbench_Conv::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{data:" + VL_TO_STRING(obj.__PVT__data);
        out += "}";
    return out;
}
