// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdecoder3to8.h for the primary calling header

#include "Vdecoder3to8__pch.h"
#include "Vdecoder3to8__Syms.h"
#include "Vdecoder3to8___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vdecoder3to8___024root___dump_triggers__stl(Vdecoder3to8___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vdecoder3to8___024root___eval_triggers__stl(Vdecoder3to8___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdecoder3to8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdecoder3to8___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdecoder3to8___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
