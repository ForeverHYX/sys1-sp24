// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/forever/sys1-sp24/src/lab3-2/../../repo/sys-project/lab3-2/sim/judge.v:1:30
    extern void cnt_init(unsigned int init);
    // DPI import at /home/forever/sys1-sp24/src/lab3-2/../../repo/sys-project/lab3-2/sim/judge.v:5:29
    extern int cnt_judge(unsigned int rstn, unsigned int high_rst, unsigned int low_co, unsigned int co, unsigned int cnt, unsigned int base, unsigned int init);

#ifdef __cplusplus
}
#endif

#endif  // guard
