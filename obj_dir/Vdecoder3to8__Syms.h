// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECODER3TO8__SYMS_H_
#define VERILATED_VDECODER3TO8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdecoder3to8.h"

// INCLUDE MODULE CLASSES
#include "Vdecoder3to8___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vdecoder3to8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdecoder3to8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdecoder3to8___024root         TOP;

    // CONSTRUCTORS
    Vdecoder3to8__Syms(VerilatedContext* contextp, const char* namep, Vdecoder3to8* modelp);
    ~Vdecoder3to8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
