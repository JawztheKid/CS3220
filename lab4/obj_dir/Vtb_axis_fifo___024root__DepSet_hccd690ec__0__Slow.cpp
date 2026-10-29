// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo___024root.h"

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf);
VL_ATTR_COLD void Vtb_axis_fifo___024root____Vm_traceActivitySetAll(Vtb_axis_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_axis_fifo___024root___eval_static(Vtb_axis_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo((&vlSymsp->TOP__tb_axis_fifo));
    Vtb_axis_fifo___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf);

VL_ATTR_COLD void Vtb_axis_fifo___024root___eval_initial(Vtb_axis_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo((&vlSymsp->TOP__tb_axis_fifo));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axis_fifo___024root___dump_triggers__stl(Vtb_axis_fifo___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axis_fifo___024root___eval_triggers__stl(Vtb_axis_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axis_fifo___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf);

VL_ATTR_COLD void Vtb_axis_fifo___024root___eval_stl(Vtb_axis_fifo___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axis_fifo___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0((&vlSymsp->TOP__tb_axis_fifo));
        Vtb_axis_fifo___024root____Vm_traceActivitySetAll(vlSelf);
    }
}
