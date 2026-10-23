// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline__Syms.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__my_DE_stage__DOT__reg_file__v0;
    __VdlyVal__my_DE_stage__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__my_DE_stage__DOT__reg_file__v0;
    __VdlyDim0__my_DE_stage__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__my_DE_stage__DOT__reg_file__v0;
    __VdlySet__my_DE_stage__DOT__reg_file__v0 = 0;
    // Body
    __VdlySet__my_DE_stage__DOT__reg_file__v0 = 0U;
    if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                       >> 0x25U)))) {
        __VdlyVal__my_DE_stage__DOT__reg_file__v0 = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
        __VdlyDim0__my_DE_stage__DOT__reg_file__v0 
            = (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                >> 0x20U)));
        __VdlySet__my_DE_stage__DOT__reg_file__v0 = 1U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_DE_stage__DOT__OP1 = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__OP2 = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN = 1U;
        vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP = 0U;
    } else if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                              >> 0x25U)))) {
        if ((0x1dU != (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                        >> 0x20U))))) {
            if ((0x1eU == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x20U))))) {
                vlSelfRef.__PVT__my_DE_stage__DOT__OP1 
                    = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
            }
            if ((0x1eU != (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                            >> 0x20U))))) {
                if ((0x1fU == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U))))) {
                    vlSelfRef.__PVT__my_DE_stage__DOT__OP2 
                        = (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE);
                }
            }
        }
        if ((0x1dU == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                        >> 0x20U))))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN 
                = (1U | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN));
            vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP 
                = (0xfU & (IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE));
        } else if ((0x1eU == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U))))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN 
                = (2U | (4U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN)));
        } else if ((0x1fU == (0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                               >> 0x20U))))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN 
                = (4U | (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN));
            vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN 
                = (6U & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN));
        } else {
            vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN = 0U;
        }
    }
    if (__VdlySet__my_DE_stage__DOT__reg_file__v0) {
        vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[__VdlyDim0__my_DE_stage__DOT__reg_file__v0] 
            = __VdlyVal__my_DE_stage__DOT__reg_file__v0;
    }
}

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__1(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__num_brjmp;
    __Vdly__my_FE_stage__DOT__num_brjmp = 0;
    IData/*31:0*/ __Vdly__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__mis_pred = 0;
    IData/*31:0*/ __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0;
    __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 0;
    IData/*25:0*/ __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_TAG__v0;
    __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 0;
    CData/*3:0*/ __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0;
    __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__BTB_VALID__v0;
    __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 0;
    CData/*1:0*/ __VdlyVal__my_FE_stage__DOT__PHT__v0;
    __VdlyVal__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*7:0*/ __VdlyDim0__my_FE_stage__DOT__PHT__v0;
    __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 0;
    CData/*0:0*/ __VdlySet__my_FE_stage__DOT__PHT__v0;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0;
    // Body
    __Vdly__my_FE_stage__DOT__mis_pred = vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred;
    __Vdly__my_FE_stage__DOT__num_brjmp = vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__count 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack;
    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb 
        = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb;
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
    vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__PHT__v0 = 0U;
    __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__cycle_count = 0U;
        __Vdly__my_FE_stage__DOT__mis_pred = 0U;
        __Vdly__my_FE_stage__DOT__num_brjmp = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
        vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs = 0U;
        vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch = 0x200U;
    } else {
        vlSelfRef.__PVT__cycle_count = ((IData)(1U) 
                                        + vlSelfRef.__PVT__cycle_count);
        if (vlSelfRef.__PVT__from_AGEX_to_DE) {
            __Vdly__my_FE_stage__DOT__mis_pred = ((IData)(1U) 
                                                  + vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred);
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] = 0U;
            vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] = 0U;
            vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                = vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX;
        } else {
            if (vlSelfRef.__PVT__from_DE_to_FE) {
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U];
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U];
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U];
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U];
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U];
            } else {
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U] 
                    = (((IData)((((QData)((IData)(((IData)(4U) 
                                                   + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                        << 8U) | (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U] 
                    = (((IData)((((QData)((IData)(((IData)(4U) 
                                                   + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                        >> 0x18U) | ((IData)(((((QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        << 8U) | ((IData)(((((QData)((IData)(
                                                             ((IData)(4U) 
                                                              + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                           >> 0x20U)) 
                                  >> 0x18U));
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                        >> 0x18U) | ((IData)(((((QData)((IData)(
                                                                vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                                                [
                                                                (0x3fffU 
                                                                 & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                    >> 2U))])) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                              >> 0x20U)) 
                                     << 8U));
                vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U] 
                    = (((IData)(((((QData)((IData)(
                                                   vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                                   [
                                                   (0x3fffU 
                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                       >> 2U))])) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                 >> 0x20U)) >> 0x18U) 
                       | ((IData)((0U != vlSelfRef.__PVT__my_FE_stage__DOT__imem
                                   [(0x3fffU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                >> 2U))])) 
                          << 8U));
            }
            if ((1U & (~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)))) {
                vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                    = vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE;
            }
        }
        if (vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            __Vdly__my_FE_stage__DOT__num_brjmp = ((IData)(1U) 
                                                   + vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp);
        }
        if (((~ (IData)(vlSelfRef.__PVT__from_DE_to_FE)) 
             & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                   | (0xffffffffULL & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU)))));
        }
        if ((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                           >> 0x25U)))) {
            vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                = ((~ ((IData)(1U) << (0x1fU & (IData)(
                                                       (vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                        >> 0x20U))))) 
                   & vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs);
        }
    }
    if ((1U & (~ (IData)(vlSymsp->TOP.reset)))) {
        if (vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) {
            vlSelfRef.__PVT__my_FE_stage__DOT__BHR 
                = ((0xfeU & (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)) 
                   | (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
            __VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0 
                = (0xfU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
            __VdlySet__my_FE_stage__DOT__BTB_VALID__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0 
                = (0x3ffffffU & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                  << 2U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0x1eU)));
            __VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0 
                = (0xfU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
            __VdlySet__my_FE_stage__DOT__BTB_TAG__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__PHT__v0 = 
                ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)
                  ? ((2U & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                      [(0xffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                      ? 3U : ((1U & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                               [(0xffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                               ? 2U : 1U)) : ((2U & 
                                               vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                                               [(0xffU 
                                                 & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                               ? ((1U 
                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__PHT
                                                   [
                                                   (0xffU 
                                                    & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])])
                                                   ? 2U
                                                   : 1U)
                                               : 0U));
            __VdlyDim0__my_FE_stage__DOT__PHT__v0 = 
                (0xffU & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U]);
            __VdlySet__my_FE_stage__DOT__PHT__v0 = 1U;
            __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0 
                = vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX;
            __VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0 
                = (0xfU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                           >> 0x1aU));
            __VdlySet__my_FE_stage__DOT__BTB_TARGET__v0 = 1U;
        }
    }
    if ((0x40U & vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])) {
        vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0 
            = ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                << 0x18U) | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                             >> 8U));
        vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0 
            = (0x3fffU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                          >> 0xaU));
        vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0 = 1U;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__mis_pred = __Vdly__my_FE_stage__DOT__mis_pred;
    vlSelfRef.__PVT__my_FE_stage__DOT__num_brjmp = __Vdly__my_FE_stage__DOT__num_brjmp;
    if (__VdlySet__my_FE_stage__DOT__BTB_VALID__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[__VdlyDim0__my_FE_stage__DOT__BTB_VALID__v0] = 1U;
    }
    if (__VdlySet__my_FE_stage__DOT__BTB_TAG__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[__VdlyDim0__my_FE_stage__DOT__BTB_TAG__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_TAG__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__PHT__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[__VdlyDim0__my_FE_stage__DOT__PHT__v0] 
            = __VdlyVal__my_FE_stage__DOT__PHT__v0;
    }
    if (__VdlySet__my_FE_stage__DOT__BTB_TARGET__v0) {
        vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[__VdlyDim0__my_FE_stage__DOT__BTB_TARGET__v0] 
            = __VdlyVal__my_FE_stage__DOT__BTB_TARGET__v0;
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0xffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    vlSelfRef.__PVT__my_FE_stage__DOT__pcnext_FE = 
        (((1U < vlSelfRef.__PVT__my_FE_stage__DOT__PHT
           [vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE]) 
          & ((vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG
              [(0xfU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                        >> 2U))] == (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                     >> 6U)) & vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID
             [(0xfU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                       >> 2U))])) ? vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET
         [(0xfU & (vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                   >> 2U))] : ((IData)(4U) + vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch));
}

extern const VlWide<8>/*255:0*/ Vpipeline__ConstPool__CONST_hea9cc873_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h8092e0ec_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hea4220e4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_ha880f92c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h6e570ecf_0;

VL_INLINE_OPT void Vpipeline_pipeline___nba_sequent__TOP__pipeline__2(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_sequent__TOP__pipeline__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_13;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_13 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_16;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_16 = 0;
    CData/*0:0*/ my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_22;
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_22 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0;
    my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0 = 0;
    IData/*31:0*/ my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0;
    my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0 = 0;
    CData/*0:0*/ my_AGEX_stage__DOT____VdfgRegularize_h3bd3f149_0_0;
    my_AGEX_stage__DOT____VdfgRegularize_h3bd3f149_0_0 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*95:0*/ __Vtemp_17;
    // Body
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] = 0U;
    } else {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                << 6U) | (0x3fU & vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                          [(0x3fffU 
                                            & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                               >> 0xaU))])) 
                          << 0x20U) | (QData)((IData)(
                                                      ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                        << 0x18U) 
                                                       | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                          >> 8U)))))) 
                >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                                        [
                                                        (0x3fffU 
                                                         & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                            >> 0xaU))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                      << 0x18U) 
                                                                     | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                        >> 8U))))) 
                                      >> 0x20U)) << 6U));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
            = (((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                 << 0x1eU) | (0x3fffffc0U & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 2U))) 
               | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem
                                             [(0x3fffU 
                                               & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                  >> 0xaU))])) 
                             << 0x20U) | (QData)((IData)(
                                                         ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                             >> 8U))))) 
                           >> 0x20U)) >> 0x1aU));
    }
    if (vlSelfRef.__VdlySet__my_MEM_stage__DOT__dmem__v0) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__dmem[vlSelfRef.__VdlyDim0__my_MEM_stage__DOT__dmem__v0] 
            = vlSelfRef.__VdlyVal__my_MEM_stage__DOT__dmem__v0;
    }
    __Vtemp_17[0U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                    : 
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U) 
                                                       | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1cU)))])))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | (0x7ffU 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x1cU))))
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xbU) 
                                                                | ((0x7e0U 
                                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 4U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0xfU))))
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                  << 0xcU) 
                                                                 | ((0x800U 
                                                                     & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 4U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0xfU)))))
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (0xfffff000U 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x18U) 
                                                                     | (0xfff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U))))
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                    << 0x14U) 
                                                                   | (((0xff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x11U))) 
                                                                      | (0x7feU 
                                                                         & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U) 
                                                                            | (0xeU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                   : 0U))))))))) 
                       << 0x12U) | ((((((0x1cU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0x1dU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0x1eU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0x1fU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0x20U 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | (0x21U 
                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                       << 0x11U) | 
                                      ((((0x19U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | ((0x1aU 
                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                            | (0x1bU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                        << 0x10U) | 
                                       ((0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        << 0xfU))) 
                                     | (((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         << 0xeU) | 
                                        ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                         << 0xdU))) 
                                    | ((0x1f00U & (
                                                   vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 7U)) 
                                       | (0xffU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U]))));
    __Vtemp_17[1U] = (((IData)((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                    : 
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U) 
                                                       | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1cU)))])))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | (0x7ffU 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x1cU))))
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xbU) 
                                                                | ((0x7e0U 
                                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 4U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0xfU))))
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                  << 0xcU) 
                                                                 | ((0x800U 
                                                                     & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 4U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0xfU)))))
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (0xfffff000U 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x18U) 
                                                                     | (0xfff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U))))
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                    << 0x14U) 
                                                                   | (((0xff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x11U))) 
                                                                      | (0x7feU 
                                                                         & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U) 
                                                                            | (0xeU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                   : 0U))))))))) 
                       >> 0xeU) | ((IData)(((((QData)((IData)(
                                                              ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                                ? 
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))
                                                                 ? vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                                 : vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                                : 
                                                               ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                                 ? 
                                                                (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                                 : 
                                                                vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                [
                                                                (0x1fU 
                                                                 & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU)))])))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                  << 0xbU) 
                                                                 | (0x7ffU 
                                                                    & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 4U) 
                                                                       | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0x1cU))))
                                                                 : 
                                                                ((4U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                   << 0xbU) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                         << 4U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 0xfU))))
                                                                  : 
                                                                 ((5U 
                                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                    << 0xcU) 
                                                                   | ((0x800U 
                                                                       & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 4U)) 
                                                                      | ((0x7e0U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U)) 
                                                                         | (0x1eU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0xfU)))))
                                                                   : 
                                                                  ((3U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                    ? 
                                                                   (0xfffff000U 
                                                                    & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 0x18U) 
                                                                       | (0xfff000U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 8U))))
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                     ? 
                                                                    (((- (IData)(
                                                                                (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                      << 0x14U) 
                                                                     | (((0xff000U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 8U)) 
                                                                         | (0x800U 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 0x11U))) 
                                                                        | (0x7feU 
                                                                           & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               << 4U) 
                                                                              | (0xeU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                     : 0U)))))))) 
                                            >> 0x20U)) 
                                   << 0x12U));
    __Vtemp_17[2U] = ((IData)(((((QData)((IData)(((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                   ? 
                                                  ((1U 
                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))
                                                    ? vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                    : vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                    ? 
                                                   (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                     << 2U) 
                                                    | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                        << 1U) 
                                                       | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                    : 
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                   [
                                                   (0x1fU 
                                                    & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                        << 4U) 
                                                       | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                          >> 0x1cU)))])))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((1U 
                                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | (0x7ffU 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U) 
                                                                     | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0x1cU))))
                                                               : 
                                                              ((4U 
                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xbU) 
                                                                | ((0x7e0U 
                                                                    & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 4U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0xfU))))
                                                                : 
                                                               ((5U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                  << 0xcU) 
                                                                 | ((0x800U 
                                                                     & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                           << 4U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0xfU)))))
                                                                 : 
                                                                ((3U 
                                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (0xfffff000U 
                                                                  & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 0x18U) 
                                                                     | (0xfff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U))))
                                                                  : 
                                                                 ((2U 
                                                                   == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                   ? 
                                                                  (((- (IData)(
                                                                               (1U 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                    << 0x14U) 
                                                                   | (((0xff000U 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)) 
                                                                       | (0x800U 
                                                                          & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                             >> 0x11U))) 
                                                                      | (0x7feU 
                                                                         & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                             << 4U) 
                                                                            | (0xeU 
                                                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                   : 0U)))))))) 
                               >> 0x20U)) >> 0xeU);
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] = 0U;
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] = 0U;
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] = 0U;
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[2U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
        vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
            = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
    } else {
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
            = ((0x3fU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                         >> 2U)) | ((vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                     << 0x1eU) | (0x3fffffc0U 
                                                  & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                     >> 2U))));
        vlSelfRef.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
            = ((0x3fU & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                         >> 2U)) | (0x1fc0U & (vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                               >> 2U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                << 8U) | (0xffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 8U)));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
            = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                >> 0x18U) | ((IData)(((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                      >> 0x20U)) << 8U));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
            = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                  << 0x16U) | (0x3fc000U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                            >> 0xaU))) 
                | (0x3f00U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                              >> 0xaU))) | ((IData)(
                                                    ((((QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                     >> 0x20U)) 
                                            >> 0x18U));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
            = ((0xffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                         >> 0xaU)) | ((0x3f00U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                  >> 0xaU)) 
                                      | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          << 0x16U) 
                                         | (0x3fc000U 
                                            & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                               >> 0xaU)))));
        vlSelfRef.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
            = ((0xffU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                         >> 0xaU)) | ((0x3f00U & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                  >> 0xaU)) 
                                      | (0x4000U & 
                                         (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                          >> 0xaU))));
        if (vlSelfRef.__PVT__from_DE_to_FE) {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[0U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[1U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[2U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[3U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[4U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[5U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[6U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = Vpipeline__ConstPool__CONST_hea9cc873_0[7U];
        } else {
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                = __Vtemp_17[0U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                = __Vtemp_17[1U];
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                = (((IData)((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                          [
                                                          (0x1fU 
                                                           & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                              >> 0x17U))])))) 
                    << 0x12U) | __Vtemp_17[2U]);
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                = ((0xff000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                   << 0x10U)) | (((IData)(
                                                          (((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                             [
                                                                             (0x1fU 
                                                                              & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])))) 
                                                  >> 0xeU) 
                                                 | ((IData)(
                                                            ((((QData)((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelfRef.__PVT__my_DE_stage__DOT__reg_file
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))]))) 
                                                             >> 0x20U)) 
                                                    << 0x12U)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                = (((0xff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                  << 0x10U)) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                     << 0x10U)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                = (((0xff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                  << 0x10U)) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                     << 0x10U)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                = (((0xff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                  << 0x10U)) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                >> 0x10U)) 
                   | (0xff000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     << 0x10U)));
            vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                = (((0xff0000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 0x10U)) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x10U)) 
                   | (0x1000000U & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x10U)));
        }
    }
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[0U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[0U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[1U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[1U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[2U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[2U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[3U];
    vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
        = vlSelfRef.__Vdly__my_FE_stage__DOT__FE_latch[4U];
    vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX 
        = (IData)((0U != (0x30000U & vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U])));
    my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[6U] 
             << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                       >> 0x18U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                      << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                  >> 0x12U)));
    my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         >> 0x12U)) + ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        << 0xeU) | 
                                       (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 0x12U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0 
        = VL_LTS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                           << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       >> 0x12U)), 
                     ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                       << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                   >> 0x12U)));
    vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0 
        = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
             << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                         >> 0x12U)) < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xeU) | 
                                       (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x12U)));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4 
        = (IData)((0x3300U == (0x707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_13 
        = (IData)((0x503300U == (0x707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_22 
        = (IData)(((0x100000U == (0x700000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                   & (0U == (0xfeU & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))));
    my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_16 
        = (IData)((0x501300U == (0x707f00U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])));
    if (((((((((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack) 
                 & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                       >> 1U)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__OP1;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack = 0U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack) 
                 & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                       >> 2U)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__OP2;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack = 0U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m 
                = (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m 
                = (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 3U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a 
                   >> 0x1fU);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e)) 
                  & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e)) 
                    & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z = 0xffc00000U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
            } else if ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z = 0xffc00000U;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s)) 
                       << 0x1fU);
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e)))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e = 0x382U;
                } else {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m 
                        = (0x800000U | vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e)))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e = 0x382U;
                } else {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m 
                        = (0x800000U | vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m);
                }
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 5U;
            } else {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m, 1U));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            if ((0x800000U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 6U;
            } else {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m, 1U));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s) 
                   ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e) 
                                            + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e))));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m)) 
                                        * (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m))));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 7U;
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                = (0xffffffU & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
                                        >> 0x18U)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 8U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard 
                = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
                                 >> 0x17U)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit 
                = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
                                 >> 0x16U)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky 
                = (0U != (0x3fffffU & (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product)));
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
        if ((0x800000U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m)) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 9U;
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e) 
                             - (IData)(1U)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                = ((0xfffffeU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard 
                = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit = 0U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit 
                = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard 
                = (1U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m);
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xaU;
        }
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard) 
             & (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit) 
                 | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky)) 
                | vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m));
            if ((0xffffffU == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e)));
            }
        }
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xbU;
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
            = ((0xff800000U & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z) 
               | (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m));
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0xcU;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
            = ((0x7fffffU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z) 
               | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e))) 
             & (~ (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
                   >> 0x17U)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                = (0x807fffffU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xcU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state))) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb = 1U;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z;
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb) 
             & ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb = 0U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0U;
        }
    }
    if (((((((((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state)) 
               | (1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
              | (2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
             | (3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
            | (4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
           | (5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
          | (6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) 
         | (7U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack) 
                 & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                       >> 1U)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__OP1;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack = 0U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack = 1U;
            if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack) 
                 & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                    & ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                       >> 2U)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b 
                    = vlSelfRef.__PVT__my_DE_stage__DOT__OP2;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack = 0U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m 
                = (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m 
                = (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 3U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e 
                = (0x3ffU & ((0xffU & (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e 
                = (0x3ffU & ((0xffU & (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b 
                                       >> 0x17U)) - (IData)(0x7fU)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a 
                   >> 0x1fU);
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s 
                = (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b 
                   >> 0x1fU);
        } else if ((3U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            if ((((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e)) 
                  & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m)) 
                 | ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e)) 
                    & (0U != vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z = 0xffc00000U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
            } else if (((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e)) 
                        & (0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e)))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z = 0xffc00000U;
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
            } else if ((0x80U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                    = (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s) 
                        ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s)) 
                       << 0x1fU);
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
                if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e))) 
                     & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z = 0xffc00000U;
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
                }
            } else if (((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e))) 
                        & (0U == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m))) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                    = (0x7f800000U | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s) 
                                       ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s)) 
                                      << 0x1fU));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
            } else {
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e)))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e = 0x382U;
                } else {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m 
                        = (0x800000U | vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m);
                }
                if ((0xffffff81U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e)))) {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e = 0x382U;
                } else {
                    vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m 
                        = (0x800000U | vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m);
                }
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 4U;
            }
        } else if ((4U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 5U;
            } else {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m, 1U));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e 
                    = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e) 
                                 - (IData)(1U)));
            }
        } else if ((5U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            if ((0x800000U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 6U;
            } else {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m 
                    = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m, 1U));
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e 
                    = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e) 
                                 - (IData)(1U)));
            }
        } else if ((6U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s) 
                   ^ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e) 
                             - (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient = 0ULL;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder = 0ULL;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__count = 0U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m)), 0x1bU));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor 
                = (QData)((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 7U;
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
                = (0x7ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 8U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
                = ((0x7fffffffffffeULL & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder) 
                   | (IData)((IData)((1U & (IData)(
                                                   (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend 
                                                    >> 0x32U))))));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend 
                = (0x7ffffffffffffULL & VL_SHIFTL_QQI(51,51,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend, 1U));
        }
    } else if ((8U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        if ((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
             >= vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor)) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
                = (0x7ffffffffffffULL & (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
                                         - vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
                = (1ULL | vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient);
        }
        if ((0x31U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 9U;
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 7U;
        }
    } else if ((9U == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
            = (0xffffffU & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
                                    >> 3U)));
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xaU;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard 
            = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
                             >> 2U)));
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit 
            = (1U & (IData)((vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
                             >> 1U)));
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky 
            = (1U & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient) 
                     | (0ULL != vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder)));
    } else if ((0xaU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        if (((~ (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                 >> 0x17U)) & VL_LTS_III(32, 0xffffff82U, 
                                         VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e))))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e) 
                             - (IData)(1U)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                = (0xffffffU & VL_SHIFTL_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                = ((0xfffffeU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard 
                = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit = 0U;
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xbU;
        }
    } else if ((0xbU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        if (VL_GTS_III(32, 0xffffff82U, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e)));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                = (0xffffffU & VL_SHIFTR_III(24,24,32, vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m, 1U));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky 
                = ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky) 
                   | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit));
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit 
                = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard 
                = (1U & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m);
        } else {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xcU;
        }
    } else if ((0xcU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard) 
             & (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit) 
                 | (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky)) 
                | vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                = (0xffffffU & ((IData)(1U) + vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m));
            if ((0xffffffU == vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m)) {
                vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e)));
            }
        }
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xdU;
    } else if ((0xdU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
            = ((0xff800000U & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z) 
               | (0x7fffffU & vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m));
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0xeU;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
            = ((0x7fffffU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z) 
               | (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s) 
                   << 0x1fU) | (0x7f800000U & (((IData)(0x7fU) 
                                                + (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e)) 
                                               << 0x17U))));
        if (((0xffffff82U == VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e))) 
             & (~ (vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
                   >> 0x17U)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                = (0x807fffffU & vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z);
        }
        if (VL_LTS_III(32, 0x7fU, VL_EXTENDS_II(32,10, (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
                = (0x7f800000U | ((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s) 
                                  << 0x1fU));
        }
    } else if ((0xeU == (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state))) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb = 1U;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z;
        if (((IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb) 
             & ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP)) 
                & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__CSR_ALU_IN)))) {
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb = 0U;
            vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0U;
        }
    }
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb = 0U;
        vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = 0U;
    }
    if ((1U & (~ ((((((((1U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U))) 
                        | (2U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                       | (3U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                      | (4U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                     | (5U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                    | (6U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) 
                   | (7U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U)))) 
                  | (8U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0x12U))))))) {
        if ((1U & (~ ((((((((9U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U))) 
                            | (0xaU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))) 
                           | (0xbU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))) 
                          | (0xcU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                               >> 0x12U)))) 
                         | (0xdU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x12U)))) 
                        | (0xeU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))) 
                       | (0xfU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                      | (0x10U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U))))))) {
            if (((((((((0x11U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U))) 
                       | (0x12U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))) 
                      | (0x13U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                     | (0x14U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                    | (0x15U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                   | (0x16U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                  | ((0x19U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U))) 
                     || (0x1bU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U))))) 
                 | (0x17U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))))) {
                if ((0x11U != (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) {
                    if ((0x12U != (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) {
                        if ((0x13U != (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))) {
                            if ((0x14U != (0x3fU & 
                                           (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) {
                                if ((0x15U != (0x3fU 
                                               & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x12U)))) {
                                    if ((0x16U != (0x3fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x12U)))) {
                                        if ((1U & (~ 
                                                   ((0x19U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                         >> 0x12U))) 
                                                    || (0x1bU 
                                                        == 
                                                        (0x3fU 
                                                         & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                            >> 0x12U))))))) {
                                            vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                                                = my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelfRef.__PVT__my_AGEX_stage__DOT__memaddr_AGEX 
                    = ((0x18U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))
                        ? my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0
                        : 0U);
            }
        }
    }
    if (((((((((1U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) | (2U == 
                                               (0x3fU 
                                                & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))) 
              | (3U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 >> 0x12U)))) | (4U 
                                                 == 
                                                 (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U)))) 
            | (5U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x12U)))) | (6U == 
                                               (0x3fU 
                                                & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))) 
          | (7U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             >> 0x12U)))) | (8U == 
                                             (0x3fU 
                                              & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((1U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                               + ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x12U)))
                : ((2U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                    >> 0x12U))) ? (
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       >> 0x12U)) 
                                                   - 
                                                   ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     << 0xeU) 
                                                    | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                       >> 0x12U)))
                    : ((3U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))
                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                             << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x12U)) 
                           & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                               << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           >> 0x12U)))
                        : ((4U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                            ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                 << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                             >> 0x12U)) 
                               | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                   << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               >> 0x12U)))
                            : ((5U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x12U)) 
                                   ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                       << 0xeU) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                   >> 0x12U)))
                                : ((6U == (0x3fU & 
                                           (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                    ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0)
                                        ? 1U : 0U) : 
                                   ((7U == (0x3fU & 
                                            (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                                     ? ((IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0)
                                         ? 1U : 0U)
                                     : VL_SHIFTRS_III(32,32,5, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xeU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x12U)), 
                                                      (0x1fU 
                                                       & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                          >> 0x12U))))))))));
    } else if (((((((((9U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))) 
                      | (0xaU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                     | (0xbU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                    | (0xcU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                   | (0xdU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                  | (0xeU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) 
                 | (0xfU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U)))) 
                | (0x10U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))))) {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((9U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U))) ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                               >> (0x1fU 
                                                   & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                      >> 0x12U)))
                : ((0xaU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))) ? 
                   (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x12U)) << (0x1fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                    >> 0x12U)))
                    : ((0xbU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))
                        ? VL_MULS_III(32, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0xeU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U)), 
                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                        << 0xeU) | 
                                       (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                        >> 0x12U)))
                        : ((0xcU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                              >> 0x12U)))
                            ? my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0
                            : ((0xdU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x12U)))
                                ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                 >> 0x12U)) 
                                   & ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                       << 0xeU) | (
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)))
                                : ((0xeU == (0x3fU 
                                             & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                >> 0x12U)))
                                    ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         << 0xeU) | 
                                        (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                         >> 0x12U)) 
                                       | ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                           << 0xeU) 
                                          | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                             >> 0x12U)))
                                    : ((0xfU == (0x3fU 
                                                 & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                    >> 0x12U)))
                                        ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             << 0xeU) 
                                            | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x12U)) 
                                           ^ ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                               << 0xeU) 
                                              | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                 >> 0x12U)))
                                        : (VL_LTS_III(32, 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                        << 0xeU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          >> 0x12U)), 
                                                      ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        << 0xeU) 
                                                       | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                          >> 0x12U)))
                                            ? 1U : 0U))))))));
    } else if (((((((((0x11U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U))) 
                      | (0x12U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))) 
                     | (0x13U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U)))) 
                    | (0x14U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                          >> 0x12U)))) 
                   | (0x15U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x12U)))) 
                  | (0x16U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U)))) 
                 | ((0x19U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))) 
                    || (0x1bU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U))))) 
                | (0x17U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                      >> 0x12U))))) {
        if ((0x11U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                      << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  >> 0x12U)) < ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                 << 0xeU) 
                                                | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)))
                    ? 1U : 0U);
        } else if ((0x12U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = VL_SHIFTRS_III(32,32,5, ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            << 0xeU) 
                                           | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                              >> 0x12U)), 
                                 (0x1fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                           >> 0x12U)));
        } else if ((0x13U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x12U)) >> (0x1fU 
                                                & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)));
        } else if ((0x14U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                     << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                 >> 0x12U)) << (0x1fU 
                                                & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                                   >> 0x12U)));
        } else if ((0x15U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                    << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                >> 0x12U));
        } else if ((0x16U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U)))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0;
        } else if (((0x19U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))) 
                    || (0x1bU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                           >> 0x12U))))) {
            vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
                = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                    << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                              >> 0x18U));
        }
    } else {
        vlSelfRef.__PVT__my_AGEX_stage__DOT__aluout_AGEX 
            = ((0x18U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x12U))) ? ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x12U))
                : 0U);
    }
    my_AGEX_stage__DOT____VdfgRegularize_h3bd3f149_0_0 
        = ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
            >> 0x11U) & ((0x1cU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                          ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                           >> 0x12U)) 
                             == ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                  << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                              >> 0x12U)))
                          : ((0x1dU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))
                              ? (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x12U)) 
                                 != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0xeU) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x12U)))
                              : ((0x1eU == (0x3fU & 
                                            (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                                  ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0)
                                  : ((0x1fU == (0x3fU 
                                                & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))
                                      ? VL_GTES_III(32, 
                                                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                        >> 0x12U)), 
                                                    ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                        >> 0x12U)))
                                      : ((0x20U == 
                                          (0x3fU & 
                                           (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                          ? (IData)(vlSelfRef.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0)
                                          : ((0x21U 
                                              == (0x3fU 
                                                  & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U))) 
                                             && (((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x12U)) 
                                                 >= 
                                                 ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                     >> 0x12U))))))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE = (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4) 
                                                   & (0U 
                                                      == 
                                                      (0xfeU 
                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                   ? 1U
                                                   : 
                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4) 
                                                    & (0x40U 
                                                       == 
                                                       (0xfeU 
                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                    ? 2U
                                                    : 
                                                   ((IData)(
                                                            ((0x703300U 
                                                              == 
                                                              (0x707f00U 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                             & (0U 
                                                                == 
                                                                (0xfeU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                     ? 3U
                                                     : 
                                                    ((IData)(
                                                             ((0x603300U 
                                                               == 
                                                               (0x707f00U 
                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                              & (0U 
                                                                 == 
                                                                 (0xfeU 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                      ? 4U
                                                      : 
                                                     ((IData)(
                                                              ((0x403300U 
                                                                == 
                                                                (0x707f00U 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                               & (0U 
                                                                  == 
                                                                  (0xfeU 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                       ? 5U
                                                       : 
                                                      ((IData)(
                                                               ((0x203300U 
                                                                 == 
                                                                 (0x707f00U 
                                                                  & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                & (0U 
                                                                   == 
                                                                   (0xfeU 
                                                                    & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                        ? 6U
                                                        : 
                                                       ((IData)(
                                                                ((0x303300U 
                                                                  == 
                                                                  (0x707f00U 
                                                                   & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                 & (0U 
                                                                    == 
                                                                    (0xfeU 
                                                                     & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U]))))
                                                         ? 7U
                                                         : 
                                                        (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_13) 
                                                          & (0x40U 
                                                             == 
                                                             (0xfeU 
                                                              & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                          ? 8U
                                                          : 
                                                         (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_13) 
                                                           & (0U 
                                                              == 
                                                              (0xfeU 
                                                               & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                           ? 9U
                                                           : 
                                                          ((IData)(
                                                                   ((0x3300U 
                                                                     == 
                                                                     (0x7f00U 
                                                                      & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                    & (IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_22)))
                                                            ? 0xaU
                                                            : 
                                                           (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_4) 
                                                             & (2U 
                                                                == 
                                                                (0xfeU 
                                                                 & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                             ? 0xbU
                                                             : 
                                                            ((IData)(
                                                                     (0x1300U 
                                                                      == 
                                                                      (0x707f00U 
                                                                       & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                              ? 0xcU
                                                              : 
                                                             ((IData)(
                                                                      (0x701300U 
                                                                       == 
                                                                       (0x707f00U 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                               ? 0xdU
                                                               : 
                                                              ((IData)(
                                                                       (0x601300U 
                                                                        == 
                                                                        (0x707f00U 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                ? 0xeU
                                                                : 
                                                               ((IData)(
                                                                        (0x401300U 
                                                                         == 
                                                                         (0x707f00U 
                                                                          & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                 ? 0xfU
                                                                 : 
                                                                ((IData)(
                                                                         (0x201300U 
                                                                          == 
                                                                          (0x707f00U 
                                                                           & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((IData)(
                                                                          (0x301300U 
                                                                           == 
                                                                           (0x707f00U 
                                                                            & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                   ? 0x11U
                                                                   : 
                                                                  (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_16) 
                                                                    & (0x40U 
                                                                       == 
                                                                       (0xfeU 
                                                                        & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                    ? 0x12U
                                                                    : 
                                                                   (((IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_16) 
                                                                     & (0U 
                                                                        == 
                                                                        (0xfeU 
                                                                         & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U])))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((IData)(
                                                                             ((0x1300U 
                                                                               == 
                                                                               (0x7f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])) 
                                                                              & (IData)(my_DE_stage__DOT____VdfgRegularize_ha41f8c36_0_22)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((0x37U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                           >> 8U)))
                                                                       ? 0x15U
                                                                       : 
                                                                      ((0x17U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U)))
                                                                        ? 0x16U
                                                                        : 
                                                                       ((IData)(
                                                                                (0x200300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                         ? 0x17U
                                                                         : 
                                                                        ((IData)(
                                                                                (0x202300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                          ? 0x18U
                                                                          : 
                                                                         ((0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                               >> 8U)))
                                                                           ? 0x19U
                                                                           : 
                                                                          ((IData)(
                                                                                (0x6700U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((IData)(
                                                                                (0x6300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((IData)(
                                                                                (0x106300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((IData)(
                                                                                (0x406300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((IData)(
                                                                                (0x506300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((IData)(
                                                                                (0x606300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x706300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x207300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((IData)(
                                                                                (0x107300U 
                                                                                == 
                                                                                (0x707f00U 
                                                                                & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U])))
                                                                                 ? 0x23U
                                                                                 : 0x25U))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__count;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack;
    vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb 
        = vlSelfRef.__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb;
    vlSelfRef.__PVT__my_FE_stage__DOT__do_brjmp_AGEX 
        = (1U & ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3bd3f149_0_0) 
                 | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                    >> 0x10U)));
    vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
        = ((0x19U == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                               >> 0x12U))) ? my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0
            : ((0x1aU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   >> 0x12U))) ? ((
                                                   vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   << 0xeU) 
                                                  | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                     >> 0x12U))
                : ((0x1bU == (0x3fU & (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       >> 0x12U))) ? 
                   (0xfffffffeU & my_AGEX_stage__DOT____VdfgExtracted_he32b7e8b__0)
                    : ((IData)(my_AGEX_stage__DOT____VdfgRegularize_h3bd3f149_0_0)
                        ? my_AGEX_stage__DOT____VdfgExtracted_h556b891d__0
                        : ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                            << 8U) | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                      >> 0x18U))))));
    vlSelfRef.__PVT__my_DE_stage__DOT__wr_reg_DE = 
        (((0x22U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
          | ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
             | ((2U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                | ((3U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   | ((4U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                      | ((5U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                         | ((6U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                            | ((7U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                               | ((8U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                  | ((9U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     | ((0xaU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        | ((0xbU == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                           | ((0xcU 
                                               == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                              | ((0xdU 
                                                  == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                 | ((0xeU 
                                                     == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                    | ((0xfU 
                                                        == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                       | ((0x10U 
                                                           == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                          | ((0x11U 
                                                              == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                             | ((0x12U 
                                                                 == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                | ((0x13U 
                                                                    == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                   | ((0x14U 
                                                                       == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                      | ((0x15U 
                                                                          == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                         | ((0x16U 
                                                                             == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                            | ((0x17U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                               | ((0x19U 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                                | (0x1bU 
                                                                                == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE))))))))))))))))))))))))))) 
         & (0U != (0x1fU & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                            >> 0xfU))));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_read_stats_eALU 
        = ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
           & (0x1aU == (0x1fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x1cU)))));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_op1_eALU 
        = (IData)(((0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   & (0xf0000U == (0xf8000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_op2_eALU 
        = (IData)(((0x17U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
                   & (0xf8000U == (0xf8000U & vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U]))));
    vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU 
        = ((0x18U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE)) 
           & (0x1bU == (0x1fU & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                  << 4U) | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0x1cU)))));
    __Vtableidx1 = vlSelfRef.__PVT__my_DE_stage__DOT__op_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE = 
        Vpipeline__ConstPool__TABLE_h8092e0ec_0[__Vtableidx1];
    vlSelfRef.__PVT__my_DE_stage__DOT__type_immediate_DE 
        = Vpipeline__ConstPool__TABLE_hea4220e4_0[__Vtableidx1];
    vlSelfRef.__PVT__from_AGEX_to_DE = ((IData)(vlSelfRef.__PVT__my_FE_stage__DOT__is_brjmp_AGEX) 
                                        & (vlSelfRef.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                           != ((vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                  >> 0x18U))));
    __Vtableidx2 = vlSelfRef.__PVT__my_DE_stage__DOT__type_I_DE;
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE = 
        Vpipeline__ConstPool__TABLE_ha880f92c_0[__Vtableidx2];
    vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE = 
        Vpipeline__ConstPool__TABLE_h6e570ecf_0[__Vtableidx2];
}
