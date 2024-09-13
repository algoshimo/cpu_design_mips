// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vdecoder3to8__pch.h"
#include "Vdecoder3to8.h"
#include "Vdecoder3to8___024root.h"

// FUNCTIONS
Vdecoder3to8__Syms::~Vdecoder3to8__Syms()
{
}

Vdecoder3to8__Syms::Vdecoder3to8__Syms(VerilatedContext* contextp, const char* namep, Vdecoder3to8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(25);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
