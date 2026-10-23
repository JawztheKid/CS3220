// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline.h for the primary calling header

#include "Vpipeline__pch.h"
#include "Vpipeline_pipeline.h"

extern const VlWide<19>/*607:0*/ Vpipeline__ConstPool__CONST_h10028ec9_0;

VL_ATTR_COLD void Vpipeline_pipeline___eval_initial__TOP__pipeline(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___eval_initial__TOP__pipeline\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(19, Vpipeline__ConstPool__CONST_h10028ec9_0)
                 ,  &(vlSelfRef.__PVT__my_FE_stage__DOT__imem)
                 , 0, ~0ULL);
    vlSelfRef.__PVT__my_FE_stage__DOT__BHR = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[1U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[2U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[3U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[4U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[5U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[6U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[7U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[8U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[9U] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xaU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xaU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xaU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xbU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xbU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xbU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xcU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xcU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xcU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xdU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xdU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xdU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xeU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xeU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xeU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TAG[0xfU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_VALID[0xfU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__BTB_TARGET[0xfU] = 0U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = 0x10U;
    vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.__PVT__my_FE_stage__DOT__PHT[(0xffU 
                                                & vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i)] = 3U;
        vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelfRef.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[1U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[2U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[3U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[4U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[5U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[6U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[7U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[8U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[9U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xaU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xbU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xcU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xdU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xeU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0xfU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x10U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x11U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x12U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x13U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x14U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x15U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x16U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x17U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x18U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x19U] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1aU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1bU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1cU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1dU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1eU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__reg_file[0x1fU] = 0U;
    vlSelfRef.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = 0x20U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(19, Vpipeline__ConstPool__CONST_h10028ec9_0)
                 ,  &(vlSelfRef.__PVT__my_MEM_stage__DOT__dmem)
                 , 0, ~0ULL);
}

extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline__ConstPool__TABLE_h8092e0ec_0;
extern const VlUnpacked<CData/*2:0*/, 64> Vpipeline__ConstPool__TABLE_hea4220e4_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_ha880f92c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vpipeline__ConstPool__TABLE_h6e570ecf_0;

VL_ATTR_COLD void Vpipeline_pipeline___stl_sequent__TOP__pipeline__0(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___stl_sequent__TOP__pipeline__0\n"); );
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
    // Body
    vlSelfRef.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE 
        = (0xffU & ((vlSelfRef.__PVT__my_FE_stage__DOT__PC_FE_latch 
                     >> 2U) ^ (IData)(vlSelfRef.__PVT__my_FE_stage__DOT__BHR)));
    if ((1U == (IData)(vlSelfRef.__PVT__my_DE_stage__DOT__ALUOP))) {
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack;
    } else {
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack;
        vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1 
            = vlSelfRef.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack;
    }
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

VL_ATTR_COLD void Vpipeline_pipeline___ctor_var_reset(Vpipeline_pipeline* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vpipeline_pipeline___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__cycle_count = VL_RAND_RESET_I(32);
    vlSelf->__PVT__from_DE_to_FE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__from_AGEX_to_DE = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(137, vlSelf->__PVT__my_FE_stage__DOT__FE_latch);
    vlSelf->__PVT__my_FE_stage__DOT__PC_FE_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__pcnext_FE = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__br_target_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__is_brjmp_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__do_brjmp_AGEX = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FE_stage__DOT__BHR = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TAG[__Vi0] = VL_RAND_RESET_I(26);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_VALID[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__my_FE_stage__DOT__BTB_TARGET[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_FE_stage__DOT__pc_xor_bhr_FE = VL_RAND_RESET_I(8);
    vlSelf->__PVT__my_FE_stage__DOT__num_brjmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__mis_pred = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(249, vlSelf->__PVT__my_DE_stage__DOT__DE_latch);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__my_DE_stage__DOT__reg_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__my_DE_stage__DOT__op_I_DE = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_DE_stage__DOT__type_I_DE = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__type_immediate_DE = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__wr_reg_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs1_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__use_rs2_DE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__OP1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_DE_stage__DOT__OP2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_DE_stage__DOT__ALUOP = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_DE_stage__DOT__CSR_ALU_IN = VL_RAND_RESET_I(3);
    vlSelf->__PVT__my_DE_stage__DOT__is_op1_eALU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_op2_eALU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_op3_eALU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__is_read_stats_eALU = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_DE_stage__DOT__in_use_regs = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(143, vlSelf->__PVT__my_AGEX_stage__DOT__AGEX_latch);
    vlSelf->__PVT__my_AGEX_stage__DOT__aluout_AGEX = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_AGEX_stage__DOT__memaddr_AGEX = VL_RAND_RESET_I(32);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0 = VL_RAND_RESET_I(1);
    vlSelf->my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__my_MEM_stage__DOT__dmem[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(141, vlSelf->__PVT__my_MEM_stage__DOT__MEM_latch);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder = VL_RAND_RESET_Q(51);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z = VL_RAND_RESET_I(32);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m = VL_RAND_RESET_I(24);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e = VL_RAND_RESET_I(10);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(137, vlSelf->__Vdly__my_FE_stage__DOT__FE_latch);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient = VL_RAND_RESET_Q(51);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder = VL_RAND_RESET_Q(51);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend = VL_RAND_RESET_Q(51);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor = VL_RAND_RESET_Q(51);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e = VL_RAND_RESET_I(10);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product = VL_RAND_RESET_Q(48);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb = VL_RAND_RESET_I(1);
    vlSelf->__VdlyVal__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__my_MEM_stage__DOT__dmem__v0 = VL_RAND_RESET_I(14);
    vlSelf->__VdlySet__my_MEM_stage__DOT__dmem__v0 = 0;
}
