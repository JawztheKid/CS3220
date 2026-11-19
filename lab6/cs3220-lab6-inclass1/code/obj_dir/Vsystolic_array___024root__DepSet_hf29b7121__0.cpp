// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"
#include "Vsystolic_array___024root.h"

void Vsystolic_array___024root___eval_act(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsystolic_array___024root___nba_sequent__TOP__0(Vsystolic_array___024root* vlSelf);

void Vsystolic_array___024root___eval_nba(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vsystolic_array___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsystolic_array___024root___nba_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay = 0;
    CData/*5:0*/ __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter = 0;
    CData/*0:0*/ __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v0;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v1;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v1 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 = 0;
    CData/*7:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0;
    CData/*0:0*/ __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 = 0;
    // Body
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter 
        = vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter 
        = vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter 
        = vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter 
        = vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay;
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed
           [0U]);
    __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg));
    __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg));
    __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg));
    __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg));
    __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter)) 
              & (((IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter)) 
              & (((IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter)) 
              & (((IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & ((~ (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter)) 
              & (((IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg) 
                  | (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_en)) 
                 & ((IData)(1U) + (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter)))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((9U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | ((4U & (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                      << 2U) & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                << 1U))) | (2U & ((
                                                   (~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                                                   & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
                                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((7U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | (8U & (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                     << 3U) & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                               << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = ((0xeU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay)) 
           | ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
              & (IData)(vlSelfRef.systolic_array__DOT__rst_accumulator_rdy)));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x39U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((4U & (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                      << 2U) & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                << 1U))) | (2U & ((
                                                   (~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                                                   & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
                                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x27U & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((0x10U & (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                         << 4U) & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                   << 1U))) | (8U & 
                                               (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                                                 << 3U) 
                                                & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                                   << 1U)))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x1fU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | (0x20U & (((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                        << 5U) & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                  << 1U))));
    __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = ((0x3eU & (IData)(__Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay)) 
           | ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
              & (IData)(vlSelfRef.systolic_array__DOT__stream_out_rdy)));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
               & (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__multiplier_done)));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
               & (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__multiplier_done)));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
               & (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__multiplier_done)));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
               & (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__multiplier_done)));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__rst_accumulator_out 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__rst_00_10));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_out_rdy_out 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__so_00_10));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_out_rdy_out 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__so_01_11));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__rst_accumulator_out 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (IData)(vlSelfRef.systolic_array__DOT__rst_01_11));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[0U] 
        = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v0;
    vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[1U] 
        = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed__v1;
    if (vlSelfRef.systolic_array__DOT__rst) {
        __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 = 0U;
        __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__row_data_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__col_data_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__row_data_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__col_data_out = 0U;
        vlSelfRef.systolic_array__DOT__psum_00 = 0U;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
        vlSelfRef.systolic_array__DOT__psum_10 = 0U;
    } else {
        __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1 
            = vlSelfRef.systolic_array__DOT__mac_00__DOT__psum
            [0U];
        __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1 
            = vlSelfRef.systolic_array__DOT__mac_01__DOT__psum
            [0U];
        __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1 
            = vlSelfRef.systolic_array__DOT__mac_10__DOT__psum
            [0U];
        __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v1 
            = vlSelfRef.systolic_array__DOT__mac_11__DOT__psum
            [0U];
        __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1 
            = vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
            [0U];
        __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__mult;
        __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0 
            = vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0 
            = vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0 
            = vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v0 
            = vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add;
        __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__mult;
        __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__mult;
        __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0 
            = vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__mult;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__row_data_out 
            = vlSelfRef.systolic_array__DOT__row_00_01;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__col_data_out 
            = vlSelfRef.systolic_array__DOT__col_00_10;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__row_data_out 
            = vlSelfRef.systolic_array__DOT__row_10_11;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__col_data_out 
            = vlSelfRef.systolic_array__DOT__col_01_11;
        vlSelfRef.systolic_array__DOT__psum_00 = ((IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter)
                                                   ? (IData)(vlSelfRef.systolic_array__DOT__psum_01)
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_started)
                                                    ? (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__psum_reg)
                                                    : 0U));
        vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_00__DOT__bypass_counter;
        vlSelfRef.systolic_array__DOT__psum_10 = ((IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter)
                                                   ? (IData)(vlSelfRef.systolic_array__DOT__psum_11)
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_started)
                                                    ? (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__psum_reg)
                                                    : 0U));
    }
    vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter 
        = __Vdly__systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg 
        = ((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
           && (1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_out_rdy_in_reg 
        = (1U & ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                 & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg)));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_out_rdy_in_reg 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
              >> 1U));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & (IData)(vlSelfRef.systolic_array__DOT__so_00_10));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & (IData)(vlSelfRef.systolic_array__DOT__so_01_11));
    vlSelfRef.systolic_array__DOT__rst_accumulator_rdy 
        = vlSelfRef.rst_accumulator_rdy_in;
    vlSelfRef.systolic_array__DOT__stream_out_rdy = vlSelfRef.stream_out_rdy_in_in;
    vlSelfRef.systolic_array__DOT__rst_00_10 = ((1U 
                                                 & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
                                                && (1U 
                                                    & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                                       >> 3U)));
    vlSelfRef.systolic_array__DOT__rst_01_11 = ((1U 
                                                 & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
                                                && (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelfRef.row_data_out = (((IData)(vlSelfRef.systolic_array__DOT__psum_10) 
                               << 8U) | (IData)(vlSelfRef.systolic_array__DOT__psum_00));
    vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay 
        = __Vdly__systolic_array__DOT__ctrl_0__DOT__rst_delay;
    if (vlSelfRef.systolic_array__DOT__rst) {
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__mult = 0U;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add = 0U;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__mult = 0U;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__mult = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__mult = 0U;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum_reg = 0U;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_started = 0U;
        vlSelfRef.systolic_array__DOT__psum_01 = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum_reg = 0U;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_started = 0U;
        vlSelfRef.systolic_array__DOT__psum_11 = 0U;
    } else {
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__mult 
            = (0xffU & ((0xffU & (IData)(vlSelfRef.systolic_array__DOT__row_data_in)) 
                        * (0xffU & (IData)(vlSelfRef.systolic_array__DOT__col_data_in))));
        vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__mult_out) 
                        + (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__adder_in_B)));
        vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__mult_out) 
                        + (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__adder_in_B)));
        vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__mult_out) 
                        + (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__adder_in_B)));
        vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__mult_out) 
                        + (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__adder_in_B)));
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__mult 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__row_00_01) 
                        * (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__col_data_in) 
                                    >> 8U))));
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__mult 
            = (0xffU & ((0xffU & ((IData)(vlSelfRef.systolic_array__DOT__row_data_in) 
                                  >> 8U)) * (IData)(vlSelfRef.systolic_array__DOT__col_00_10)));
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__mult 
            = (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__row_10_11) 
                        * (IData)(vlSelfRef.systolic_array__DOT__col_01_11)));
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum_reg 
            = vlSelfRef.systolic_array__DOT__mac_00__DOT__psum
            [1U];
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__psum__v1;
        if ((1U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))) {
            vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_started = 1U;
        }
        vlSelfRef.systolic_array__DOT__psum_01 = ((IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_started)
                                                    ? (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__psum_reg)
                                                    : 0U));
        vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter 
            = __Vdly__systolic_array__DOT__mac_01__DOT__bypass_counter;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum_reg 
            = vlSelfRef.systolic_array__DOT__mac_10__DOT__psum
            [1U];
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__psum__v1;
        if (vlSelfRef.systolic_array__DOT__so_00_10) {
            vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_started = 1U;
        }
        vlSelfRef.systolic_array__DOT__psum_11 = ((IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_started)
                                                    ? (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__psum_reg)
                                                    : 0U));
    }
    vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter 
        = __Vdly__systolic_array__DOT__mac_11__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_10__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__rst_00_10)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__adder_in_B 
        = ((8U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay))
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__rst_01_11)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg 
        = (1U & ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                 & (IData)(vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy)));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__so_00_10 = ((1U 
                                                & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
                                               && (1U 
                                                   & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg)));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter;
    if (vlSelfRef.systolic_array__DOT__rst) {
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mult_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mult_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mult_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mult_out = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__row_00_01 = 0U;
        vlSelfRef.systolic_array__DOT__col_00_10 = 0U;
        vlSelfRef.systolic_array__DOT__row_10_11 = 0U;
        vlSelfRef.systolic_array__DOT__col_01_11 = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum_reg = 0U;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_started = 0U;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__psum_reg = 0U;
    } else {
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mult_out 
            = ((IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__multiplier_done)
                ? vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mult_out 
            = ((IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__multiplier_done)
                ? vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mult_out 
            = ((IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__multiplier_done)
                ? vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mult_out 
            = ((IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__multiplier_done)
                ? vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
               [1U] : 0U);
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0U] 
            = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v0;
        vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1U] 
            = __VdlyVal__systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed__v1;
        vlSelfRef.systolic_array__DOT__row_00_01 = 
            (0xffU & (IData)(vlSelfRef.systolic_array__DOT__row_data_in));
        vlSelfRef.systolic_array__DOT__col_00_10 = 
            (0xffU & (IData)(vlSelfRef.systolic_array__DOT__col_data_in));
        vlSelfRef.systolic_array__DOT__row_10_11 = 
            (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__row_data_in) 
                      >> 8U));
        vlSelfRef.systolic_array__DOT__col_01_11 = 
            (0xffU & ((IData)(vlSelfRef.systolic_array__DOT__col_data_in) 
                      >> 8U));
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum_reg 
            = vlSelfRef.systolic_array__DOT__mac_01__DOT__psum
            [0U];
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[0U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v0;
        vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[1U] 
            = __VdlyVal__systolic_array__DOT__mac_01__DOT__psum__v1;
        if ((2U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))) {
            vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_started = 1U;
        }
        vlSelfRef.systolic_array__DOT__mac_11__DOT__psum_reg 
            = vlSelfRef.systolic_array__DOT__mac_11__DOT__psum
            [0U];
    }
    vlSelfRef.systolic_array__DOT__mac_11__DOT__psum[0U] 
        = __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v0;
    vlSelfRef.systolic_array__DOT__mac_11__DOT__psum[1U] 
        = __VdlyVal__systolic_array__DOT__mac_11__DOT__psum__v1;
    vlSelfRef.systolic_array__DOT__row_data_in = vlSelfRef.row_data_in_in;
    vlSelfRef.systolic_array__DOT__col_data_in = vlSelfRef.col_data_in_in;
    vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy 
        = (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
            << 1U) | (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                            >> 3U)));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add));
    if (vlSelfRef.systolic_array__DOT__rst) {
        vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_started = 0U;
    } else if (vlSelfRef.systolic_array__DOT__so_01_11) {
        vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_started = 1U;
    }
    vlSelfRef.systolic_array__DOT__so_01_11 = ((1U 
                                                & (~ (IData)(vlSelfRef.systolic_array__DOT__rst))) 
                                               && (1U 
                                                   & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                                                      >> 1U)));
    vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg 
        = ((IData)(vlSelfRef.systolic_array__DOT__rst)
            ? 0U : (3U & (- (IData)((1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay) 
                                           >> 5U))))));
    vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay 
        = __Vdly__systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
    vlSelfRef.systolic_array__DOT__rst = vlSelfRef.rst_in;
    vlSelfRef.systolic_array__DOT__mac_00__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__mac_01__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__mac_10__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
    vlSelfRef.systolic_array__DOT__mac_11__DOT__multiplier_done 
        = ((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
           & vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed
           [1U]);
}

void Vsystolic_array___024root___eval_triggers__act(Vsystolic_array___024root* vlSelf);

bool Vsystolic_array___024root___eval_phase__act(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsystolic_array___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsystolic_array___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsystolic_array___024root___eval_phase__nba(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsystolic_array___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG

void Vsystolic_array___024root___eval(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_array___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("systolic_array.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vsystolic_array___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("systolic_array.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsystolic_array___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsystolic_array___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsystolic_array___024root___eval_debug_assertions(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_in & 0xfeU))) {
        Verilated::overWidthError("rst_in");}
    if (VL_UNLIKELY((vlSelfRef.rst_accumulator_rdy_in 
                     & 0xfeU))) {
        Verilated::overWidthError("rst_accumulator_rdy_in");}
    if (VL_UNLIKELY((vlSelfRef.stream_out_rdy_in_in 
                     & 0xfeU))) {
        Verilated::overWidthError("stream_out_rdy_in_in");}
}
#endif  // VL_DEBUG
