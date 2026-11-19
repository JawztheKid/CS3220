// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_tests.h for the primary calling header

#include "Vtb_axi4_ram_tests__pch.h"
#include "Vtb_axi4_ram_tests__Syms.h"
#include "Vtb_axi4_ram_tests___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___dump_triggers__ico(Vtb_axi4_ram_tests___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram_tests___024root___eval_triggers__ico(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_triggers__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_ram_tests___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___dump_triggers__act(Vtb_axi4_ram_tests___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram_tests___024root___eval_triggers__act(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.reset)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__reset__0)));
    vlSelfRef.__VactTriggered.set(2U, ((~ (IData)(vlSelfRef.clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi4_ram_tests___024root___dump_triggers__act(vlSelf);
    }
#endif
}
