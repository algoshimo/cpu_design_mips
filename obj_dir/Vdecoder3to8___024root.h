// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecoder3to8.h for the primary calling header

#ifndef VERILATED_VDECODER3TO8___024ROOT_H_
#define VERILATED_VDECODER3TO8___024ROOT_H_  // guard

#include "verilated.h"


class Vdecoder3to8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdecoder3to8___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,2,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vdecoder3to8__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vdecoder3to8___024root(Vdecoder3to8__Syms* symsp, const char* v__name);
    ~Vdecoder3to8___024root();
    VL_UNCOPYABLE(Vdecoder3to8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
