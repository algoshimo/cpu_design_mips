// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vencoder8to3__pch.h"

//============================================================
// Constructors

Vencoder8to3::Vencoder8to3(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vencoder8to3__Syms(contextp(), _vcname__, this)}
    , in{vlSymsp->TOP.in}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vencoder8to3::Vencoder8to3(const char* _vcname__)
    : Vencoder8to3(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vencoder8to3::~Vencoder8to3() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vencoder8to3___024root___eval_debug_assertions(Vencoder8to3___024root* vlSelf);
#endif  // VL_DEBUG
void Vencoder8to3___024root___eval_static(Vencoder8to3___024root* vlSelf);
void Vencoder8to3___024root___eval_initial(Vencoder8to3___024root* vlSelf);
void Vencoder8to3___024root___eval_settle(Vencoder8to3___024root* vlSelf);
void Vencoder8to3___024root___eval(Vencoder8to3___024root* vlSelf);

void Vencoder8to3::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vencoder8to3::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vencoder8to3___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vencoder8to3___024root___eval_static(&(vlSymsp->TOP));
        Vencoder8to3___024root___eval_initial(&(vlSymsp->TOP));
        Vencoder8to3___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vencoder8to3___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vencoder8to3::eventsPending() { return false; }

uint64_t Vencoder8to3::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vencoder8to3::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vencoder8to3___024root___eval_final(Vencoder8to3___024root* vlSelf);

VL_ATTR_COLD void Vencoder8to3::final() {
    Vencoder8to3___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vencoder8to3::hierName() const { return vlSymsp->name(); }
const char* Vencoder8to3::modelName() const { return "Vencoder8to3"; }
unsigned Vencoder8to3::threads() const { return 1; }
void Vencoder8to3::prepareClone() const { contextp()->prepareClone(); }
void Vencoder8to3::atClone() const {
    contextp()->threadPoolpOnClone();
}
