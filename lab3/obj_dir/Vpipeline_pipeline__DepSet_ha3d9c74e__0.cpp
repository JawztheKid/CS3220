// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline_pipeline.h"

VL_INLINE_OPT void Vpipeline_pipeline___nba_comb__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___nba_comb__TOP__pipeline__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))) {
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb;
    } else {
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb;
    }
    vlSelfRef.__PVT__from_DE_to_FE = ((((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                                        & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                           >> (0x1fU 
                                               & (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x17U)))) 
                                       | ((IData)(vlSelfRef.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                          & (vlSelfRef.__PVT__my_DE_stage__DOT__in_use_regs 
                                             >> (0x1fU 
                                                 & ((vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U) 
                                                    | (vlSelfRef.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0x1cU)))))) 
                                      | ((IData)(vlSelfRef.__PVT__from_AGEX_to_DE) 
                                         | (((~ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)) 
                                             & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op1_eALU)) 
                                            | (((~ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2)) 
                                                & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op2_eALU)) 
                                               | ((~ (IData)(vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid)) 
                                                  & (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__is_op3_eALU))))));
}
