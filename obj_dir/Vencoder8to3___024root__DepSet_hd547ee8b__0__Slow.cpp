// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder8to3.h for the primary calling header

#include "Vencoder8to3__pch.h"
#include "Vencoder8to3__Syms.h"
#include "Vencoder8to3___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder8to3___024root___dump_triggers__stl(Vencoder8to3___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vencoder8to3___024root___eval_triggers__stl(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vencoder8to3___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
