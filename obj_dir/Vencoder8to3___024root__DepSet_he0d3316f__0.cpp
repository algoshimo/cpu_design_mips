// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vencoder8to3.h for the primary calling header

#include "Vencoder8to3__pch.h"
#include "Vencoder8to3___024root.h"

void Vencoder8to3___024root___ico_sequent__TOP__0(Vencoder8to3___024root* vlSelf);

void Vencoder8to3___024root___eval_ico(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vencoder8to3___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vencoder8to3___024root___ico_sequent__TOP__0(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->out = ((1U & (IData)(vlSelf->in)) ? 0U : 
                   ((2U & (IData)(vlSelf->in)) ? 1U
                     : ((4U & (IData)(vlSelf->in)) ? 2U
                         : ((8U & (IData)(vlSelf->in))
                             ? 3U : ((0x10U & (IData)(vlSelf->in))
                                      ? 4U : ((0x20U 
                                               & (IData)(vlSelf->in))
                                               ? 5U
                                               : ((0x40U 
                                                   & (IData)(vlSelf->in))
                                                   ? 6U
                                                   : 7U)))))));
}

void Vencoder8to3___024root___eval_triggers__ico(Vencoder8to3___024root* vlSelf);

bool Vencoder8to3___024root___eval_phase__ico(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vencoder8to3___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vencoder8to3___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vencoder8to3___024root___eval_act(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_act\n"); );
}

void Vencoder8to3___024root___eval_nba(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_nba\n"); );
}

void Vencoder8to3___024root___eval_triggers__act(Vencoder8to3___024root* vlSelf);

bool Vencoder8to3___024root___eval_phase__act(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vencoder8to3___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vencoder8to3___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vencoder8to3___024root___eval_phase__nba(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vencoder8to3___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder8to3___024root___dump_triggers__ico(Vencoder8to3___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder8to3___024root___dump_triggers__nba(Vencoder8to3___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vencoder8to3___024root___dump_triggers__act(Vencoder8to3___024root* vlSelf);
#endif  // VL_DEBUG

void Vencoder8to3___024root___eval(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vencoder8to3___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("src/encoder8to3.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vencoder8to3___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vencoder8to3___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("src/encoder8to3.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vencoder8to3___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("src/encoder8to3.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vencoder8to3___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vencoder8to3___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vencoder8to3___024root___eval_debug_assertions(Vencoder8to3___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vencoder8to3__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vencoder8to3___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
