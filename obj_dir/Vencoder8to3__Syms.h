// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VENCODER8TO3__SYMS_H_
#define VERILATED_VENCODER8TO3__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vencoder8to3.h"

// INCLUDE MODULE CLASSES
#include "Vencoder8to3___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vencoder8to3__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vencoder8to3* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vencoder8to3___024root         TOP;

    // CONSTRUCTORS
    Vencoder8to3__Syms(VerilatedContext* contextp, const char* namep, Vencoder8to3* modelp);
    ~Vencoder8to3__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
