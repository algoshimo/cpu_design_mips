// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdecoder3to8__pch.h"

//============================================================
// Constructors

Vdecoder3to8::Vdecoder3to8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdecoder3to8__Syms(contextp(), _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdecoder3to8::Vdecoder3to8(const char* _vcname__)
    : Vdecoder3to8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdecoder3to8::~Vdecoder3to8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdecoder3to8___024root___eval_debug_assertions(Vdecoder3to8___024root* vlSelf);
#endif  // VL_DEBUG
void Vdecoder3to8___024root___eval_static(Vdecoder3to8___024root* vlSelf);
void Vdecoder3to8___024root___eval_initial(Vdecoder3to8___024root* vlSelf);
void Vdecoder3to8___024root___eval_settle(Vdecoder3to8___024root* vlSelf);
void Vdecoder3to8___024root___eval(Vdecoder3to8___024root* vlSelf);

void Vdecoder3to8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdecoder3to8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdecoder3to8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdecoder3to8___024root___eval_static(&(vlSymsp->TOP));
        Vdecoder3to8___024root___eval_initial(&(vlSymsp->TOP));
        Vdecoder3to8___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdecoder3to8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdecoder3to8::eventsPending() { return false; }

uint64_t Vdecoder3to8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdecoder3to8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdecoder3to8___024root___eval_final(Vdecoder3to8___024root* vlSelf);

VL_ATTR_COLD void Vdecoder3to8::final() {
    Vdecoder3to8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdecoder3to8::hierName() const { return vlSymsp->name(); }
const char* Vdecoder3to8::modelName() const { return "Vdecoder3to8"; }
unsigned Vdecoder3to8::threads() const { return 1; }
void Vdecoder3to8::prepareClone() const { contextp()->prepareClone(); }
void Vdecoder3to8::atClone() const {
    contextp()->threadPoolpOnClone();
}
