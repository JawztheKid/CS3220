// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsystolic_array.h for the primary calling header

#include "Vsystolic_array__pch.h"
#include "Vsystolic_array___024root.h"

VL_ATTR_COLD void Vsystolic_array___024root___eval_static(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_initial(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_final(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsystolic_array___024root___eval_phase__stl(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_settle(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vsystolic_array___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("systolic_array.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsystolic_array___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__stl(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root___stl_sequent__TOP__0(Vsystolic_array___024root* vlSelf);
VL_ATTR_COLD void Vsystolic_array___024root____Vm_traceActivitySetAll(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD void Vsystolic_array___024root___eval_stl(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsystolic_array___024root___stl_sequent__TOP__0(vlSelf);
        Vsystolic_array___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vsystolic_array___024root___stl_sequent__TOP__0(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter;
    vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_en 
        = vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter;
    vlSelfRef.row_data_out = (((IData)(vlSelfRef.systolic_array__DOT__psum_10) 
                               << 8U) | (IData)(vlSelfRef.systolic_array__DOT__psum_00));
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
    vlSelfRef.systolic_array__DOT__control_rst_accumulator_rdy 
        = (((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
            << 1U) | (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                            >> 3U)));
    vlSelfRef.systolic_array__DOT__mac_00__DOT__adder_in_B 
        = ((8U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay))
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_01__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_10__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__rst_00_10)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add));
    vlSelfRef.systolic_array__DOT__mac_11__DOT__adder_in_B 
        = ((IData)(vlSelfRef.systolic_array__DOT__rst_01_11)
            ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add));
}

VL_ATTR_COLD void Vsystolic_array___024root___eval_triggers__stl(Vsystolic_array___024root* vlSelf);

VL_ATTR_COLD bool Vsystolic_array___024root___eval_phase__stl(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsystolic_array___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsystolic_array___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__act(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsystolic_array___024root___dump_triggers__nba(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsystolic_array___024root____Vm_traceActivitySetAll(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root____Vm_traceActivitySetAll\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vsystolic_array___024root___ctor_var_reset(Vsystolic_array___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_in = VL_RAND_RESET_I(1);
    vlSelf->rst_accumulator_rdy_in = VL_RAND_RESET_I(1);
    vlSelf->stream_out_rdy_in_in = VL_RAND_RESET_I(1);
    vlSelf->row_data_in_in = VL_RAND_RESET_I(16);
    vlSelf->col_data_in_in = VL_RAND_RESET_I(16);
    vlSelf->row_data_out = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__rst_accumulator_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__stream_out_rdy = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__row_data_in = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__col_data_in = VL_RAND_RESET_I(16);
    vlSelf->systolic_array__DOT__control_rst_accumulator_rdy = VL_RAND_RESET_I(2);
    vlSelf->systolic_array__DOT__row_00_01 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__row_10_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__col_00_10 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__col_01_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__rst_00_10 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__rst_01_11 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__so_00_10 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__so_01_11 = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__psum_00 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_01 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_10 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__psum_11 = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_delay = VL_RAND_RESET_I(4);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_delay = VL_RAND_RESET_I(6);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg = VL_RAND_RESET_I(2);
    vlSelf->systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_00__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_00__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__row_data_out = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_01__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_01__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_10__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_10__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__row_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__col_data_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__rst_accumulator_out = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__psum[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__psum_reg = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__mult_out = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__multiplier_done = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__adder_in_B = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_en = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__bypass_counter = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_started = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg = VL_RAND_RESET_I(1);
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__mult = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__add = VL_RAND_RESET_I(8);
    vlSelf->systolic_array__DOT__mac_11__DOT__add__DOT__en_reg = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
