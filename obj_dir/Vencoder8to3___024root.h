// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vencoder8to3.h for the primary calling header

#ifndef VERILATED_VENCODER8TO3___024ROOT_H_
#define VERILATED_VENCODER8TO3___024ROOT_H_  // guard

#include "verilated.h"


class Vencoder8to3__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vencoder8to3___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,7,0);
    VL_OUT8(out,2,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vencoder8to3__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vencoder8to3___024root(Vencoder8to3__Syms* symsp, const char* v__name);
    ~Vencoder8to3___024root();
    VL_UNCOPYABLE(Vencoder8to3___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
