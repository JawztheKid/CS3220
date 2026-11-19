// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst__Syms.h"


VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_axi4_ram_burst", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__tb_axi4_ram_burst__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"PIPELINE_OUTPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"s_axi_awid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"s_axi_awlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"s_axi_awsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"s_axi_awburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+435,0,"s_axi_awlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"s_axi_awcache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"s_axi_awprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s_axi_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"s_axi_wlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"s_axi_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"s_axi_bid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"s_axi_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+439,0,"s_axi_arid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"s_axi_arlen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"s_axi_arsize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"s_axi_arburst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+435,0,"s_axi_arlock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"s_axi_arcache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"s_axi_arprot",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"s_axi_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"s_axi_rid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"s_axi_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s_axi_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+424,0,"correct_V",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"correct_V_ap_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("axi4_tester_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+440,0,"ap_ST_fsm_state1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+441,0,"ap_ST_fsm_state2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+442,0,"ap_ST_fsm_state3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+443,0,"ap_ST_fsm_state4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+444,0,"ap_ST_fsm_state5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+445,0,"ap_ST_fsm_state6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+446,0,"ap_ST_fsm_state7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+447,0,"ap_ST_fsm_state8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+448,0,"ap_ST_fsm_state9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+449,0,"ap_ST_fsm_state10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+450,0,"ap_ST_fsm_state11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+451,0,"ap_ST_fsm_state12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+452,0,"ap_ST_fsm_state13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+453,0,"ap_ST_fsm_state14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+454,0,"ap_ST_fsm_state15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+455,0,"ap_ST_fsm_state16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+456,0,"ap_ST_fsm_state17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+457,0,"ap_ST_fsm_state18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+458,0,"ap_ST_fsm_state19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_IN_OUT_V_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_IN_OUT_V_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_AWUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_ARUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_WUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_RUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_DATA_IN_OUT_V_BUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_M_AXI_DATA_IN_OUT_V_TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_M_AXI_DATA_IN_OUT_V_USER_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_M_AXI_DATA_IN_OUT_V_PROT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"C_M_AXI_DATA_IN_OUT_V_CACHE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"C_M_AXI_DATA_IN_OUT_V_WSTRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"C_M_AXI_WSTRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"ap_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"ap_rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"m_axi_data_in_out_V_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"m_axi_data_in_out_V_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"m_axi_data_in_out_V_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_AWID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+3,0,"m_axi_data_in_out_V_AWLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"m_axi_data_in_out_V_AWSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"m_axi_data_in_out_V_AWBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"m_axi_data_in_out_V_AWLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"m_axi_data_in_out_V_AWCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"m_axi_data_in_out_V_AWPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"m_axi_data_in_out_V_AWQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"m_axi_data_in_out_V_AWREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_AWUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+9,0,"m_axi_data_in_out_V_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"m_axi_data_in_out_V_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"m_axi_data_in_out_V_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"m_axi_data_in_out_V_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"m_axi_data_in_out_V_WLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_WID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_WUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+16,0,"m_axi_data_in_out_V_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"m_axi_data_in_out_V_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"m_axi_data_in_out_V_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_ARID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+15,0,"m_axi_data_in_out_V_ARLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"m_axi_data_in_out_V_ARSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"m_axi_data_in_out_V_ARBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"m_axi_data_in_out_V_ARLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"m_axi_data_in_out_V_ARCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"m_axi_data_in_out_V_ARPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"m_axi_data_in_out_V_ARQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"m_axi_data_in_out_V_ARREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"m_axi_data_in_out_V_ARUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+22,0,"m_axi_data_in_out_V_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"m_axi_data_in_out_V_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"m_axi_data_in_out_V_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"m_axi_data_in_out_V_RLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"m_axi_data_in_out_V_RID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+463,0,"m_axi_data_in_out_V_RUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+20,0,"m_axi_data_in_out_V_RRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"m_axi_data_in_out_V_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"m_axi_data_in_out_V_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"m_axi_data_in_out_V_BRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+27,0,"m_axi_data_in_out_V_BID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+464,0,"m_axi_data_in_out_V_BUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+424,0,"correct_V",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+425,0,"correct_V_ap_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"ap_rst_n_inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"test_data_V_address0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+29,0,"test_data_V_ce0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"test_data_V_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"data_in_out_V_blk_n_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"ap_CS_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+33,0,"ap_CS_fsm_state1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"data_in_out_V_blk_n_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"ap_CS_fsm_state8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"data_in_out_V_blk_n_AR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"ap_CS_fsm_state9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"data_in_out_V_blk_n_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"ap_CS_fsm_state4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"data_in_out_V_blk_n_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"ap_CS_fsm_state16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"icmp_ln18_fu_202_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+43,0,"data_in_out_V_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"data_in_out_V_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"data_in_out_V_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"data_in_out_V_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"data_in_out_V_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"data_in_out_V_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"data_in_out_V_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"data_in_out_V_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"data_in_out_V_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"data_in_out_V_RLAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"data_in_out_V_RID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+461,0,"data_in_out_V_RUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+52,0,"data_in_out_V_RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+53,0,"data_in_out_V_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"data_in_out_V_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"data_in_out_V_BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+435,0,"data_in_out_V_BID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+461,0,"data_in_out_V_BUSER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+56,0,"i_fu_191_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+57,0,"i_reg_246",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+58,0,"ap_CS_fsm_state2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"icmp_ln13_fu_185_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"test_data_V_load_reg_256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+61,0,"ap_CS_fsm_state3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"i_1_fu_208_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+63,0,"i_1_reg_264",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+64,0,"ap_block_state16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"data_in_out_V_read_reg_269",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"icmp_ln24_fu_219_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+67,0,"icmp_ln24_reg_274",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+68,0,"ap_CS_fsm_state18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"i_2_fu_225_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+70,0,"i_2_reg_278",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+71,0,"data_from_mem_V_address0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+72,0,"data_from_mem_V_ce0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"data_from_mem_V_we0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"data_from_mem_V_q0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"i_0_reg_138",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+76,0,"i1_0_reg_149",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+73,0,"ap_CS_fsm_state17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"ap_CS_fsm_state15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+78,0,"i2_0_reg_161",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+79,0,"ap_CS_fsm_state19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"icmp_ln883_fu_237_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+424,0,"ap_phi_mux_storemerge_phi_fu_176_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+81,0,"storemerge_reg_172",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+82,0,"zext_ln15_fu_197_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+84,0,"zext_ln20_fu_214_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+86,0,"zext_ln26_fu_231_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+88,0,"ap_NS_fsm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("axi4_tester_data_in_out_V_m_axi_U", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+431,0,"CONSERVATIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"NUM_READ_OUTSTANDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"NUM_WRITE_OUTSTANDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"MAX_READ_BURST_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"MAX_WRITE_BURST_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_AWUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_ARUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_WUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_RUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_BUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_USER_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_PROT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"C_CACHE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"USER_MAXREQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"ARESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"ACLK_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"AWID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+24,0,"AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"AWLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"AWSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"AWBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"AWLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"AWCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"AWPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"AWQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"AWREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"AWUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+4,0,"AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"WID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"WLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"WUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+9,0,"WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"BID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+438,0,"BRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+464,0,"BUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+12,0,"BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"ARID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+25,0,"ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ARLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"ARSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"ARBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"ARLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"ARCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"ARPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"ARQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"ARREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"ARUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+16,0,"ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"RID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+19,0,"RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"RRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"RLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"RUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+22,0,"RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"I_AWID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"I_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"I_AWLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"I_AWSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+438,0,"I_AWBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"I_AWLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+462,0,"I_AWCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"I_AWPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"I_AWQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"I_AWREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"I_AWUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+43,0,"I_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"I_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"I_WID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"I_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"I_WLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"I_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"I_WUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+45,0,"I_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"I_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"I_BID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+55,0,"I_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+461,0,"I_BUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+53,0,"I_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"I_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"I_ARID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+467,0,"I_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"I_ARLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"I_ARSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+438,0,"I_ARBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"I_ARLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+462,0,"I_ARCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"I_ARPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"I_ARQOS",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"I_ARREGION",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"I_ARUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+47,0,"I_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"I_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"I_RID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+51,0,"I_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"I_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+435,0,"I_RLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"I_RUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+49,0,"I_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"I_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"AWADDR_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"AWLEN_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+89,0,"AWVALID_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"AWREADY_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"WDATA_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"WSTRB_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"WLAST_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"WVALID_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"WREADY_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bus_read", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+428,0,"NUM_READ_OUTSTANDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"MAX_READ_BURST_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_ARUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_RUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_USER_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_PROT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"C_CACHE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"USER_MAXREQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"ARESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"ACLK_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"ARID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+25,0,"ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"ARLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"ARSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"ARBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"ARLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"ARCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"ARPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"ARQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"ARREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"ARUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+16,0,"ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"RID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+19,0,"RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"RRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"RLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+463,0,"RUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+22,0,"RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"rreq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"rreq_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"rreq_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"rreq_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"rreq_cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"rreq_prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"rreq_qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"rreq_region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"rreq_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+51,0,"rdata_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"rrsp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+49,0,"rdata_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"rdata_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"USER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"USER_DATA_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"USER_ADDR_ALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"BUS_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"BUS_DATA_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"BUS_ADDR_ALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"NUM_READ_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"BOUNDARY_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+472,0,"calc_data_width__Vstatic__y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+473,0,"log2__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+474,0,"log2__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+475,0,"rreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+91,0,"rs2f_rreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+93,0,"rs2f_rreq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"rs2f_rreq_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"fifo_rreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+97,0,"tmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"tmp_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"align_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"arlen_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"araddr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"start_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"end_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"sect_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"sect_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"sect_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+109,0,"sect_end_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+111,0,"start_to_4k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+112,0,"sect_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+113,0,"sect_len_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+114,0,"beat_len_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+115,0,"sect_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+116,0,"ar2r_ardata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+117,0,"fifo_rctl_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"zero_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"negative_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"invalid_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"invalid_len_event_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"invalid_len_event_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"fifo_rreq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"fifo_rreq_valid_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"fifo_rreq_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"fifo_burst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"fifo_resp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"ARVALID_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"ready_for_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"next_rreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"ready_for_rreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"rreq_handling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"first_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"last_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"next_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+132,0,"fifo_rresp_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+134,0,"data_pack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+136,0,"tmp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+137,0,"rs_rrsp_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+139,0,"rdata_data_pack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+478,0,"len_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+141,0,"ar2r_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"tmp_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"resp_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+144,0,"tmp_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"tmp_last_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"need_rlast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"fifo_rctl_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"beat_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"next_beat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+479,0,"burst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"fifo_burst_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+480,0,"next_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"rdata_ack_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"rdata_valid_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("buff_rdata", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+481,0,"MEM_STYLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+483,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"if_full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"if_write_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"if_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+132,0,"if_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+148,0,"if_empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"if_read_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"if_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"if_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+152,0,"q_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+154,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+155,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+156,0,"wnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+157,0,"rnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+158,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+160,0,"usedw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+23,0,"full_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+161,0,"empty_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+162,0,"q_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+164,0,"show_ahead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"dout_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBit(c+148,0,"dout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bus_equal_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"data_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"ready_for_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("could_multi_bursts", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"araddr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"arlen_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"loop_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+168,0,"sect_handling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"last_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"next_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"ready_for_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_rctl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+470,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+171,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+191,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_rreq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+95,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+91,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+192,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+194,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+195,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+197+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+207,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs_rdata", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+487,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+137,0,"s_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+151,0,"s_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"s_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+139,0,"m_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+49,0,"m_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"m_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+139,0,"data_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+208,0,"data_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+210,0,"load_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"load_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"load_p1_from_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"s_ready_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+213,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+214,0,"next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs_rreq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"s_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+47,0,"s_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"s_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+91,0,"m_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+93,0,"m_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"m_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+91,0,"data_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+215,0,"data_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+217,0,"load_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"load_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"load_p1_from_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"s_ready_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+221,0,"next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bus_write", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+428,0,"NUM_WRITE_OUTSTANDING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"MAX_WRITE_BURST_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"C_M_AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_AWUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_WUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"C_M_AXI_BUSER_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_USER_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"C_PROT_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"C_CACHE_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_DW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"USER_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"USER_MAXREQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"ARESET",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"ACLK_EN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"AWID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+24,0,"AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"AWLEN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"AWSIZE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"AWBURST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+438,0,"AWLOCK",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+436,0,"AWCACHE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"AWPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"AWQOS",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"AWREGION",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+461,0,"AWUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+89,0,"AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"WID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+6,0,"WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"WLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+461,0,"WUSER",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+9,0,"WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+27,0,"BID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+438,0,"BRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+464,0,"BUSER",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+12,0,"BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"wreq_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"wreq_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"wreq_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"wreq_length",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"wreq_cache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"wreq_prot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+462,0,"wreq_qos",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+462,0,"wreq_region",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"wreq_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+45,0,"wdata_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"wdata_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+469,0,"wdata_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+435,0,"wdata_user",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+60,0,"wdata_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+53,0,"wrsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"wrsp_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"wrsp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+427,0,"USER_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"USER_DATA_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"USER_ADDR_ALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"BUS_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"BUS_DATA_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"BUS_ADDR_ALIGN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"NUM_WRITE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"TARGET_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"BOUNDARY_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+490,0,"calc_data_width__Vstatic__y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+491,0,"log2__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+492,0,"log2__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declQuad(c+475,0,"wreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"rs2f_wreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+224,0,"rs2f_wreq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"rs2f_wreq_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+226,0,"fifo_wreq_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+228,0,"tmp_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"tmp_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"align_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+231,0,"awlen_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"awaddr_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"start_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"start_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"end_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"end_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"sect_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"sect_addr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"sect_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+240,0,"sect_end_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+241,0,"burst_end",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+242,0,"start_to_4k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+243,0,"sect_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+244,0,"sect_len_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+245,0,"beat_len_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+246,0,"aw2b_awdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+247,0,"sect_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+248,0,"zero_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"negative_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"invalid_len_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"invalid_len_event_reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"invalid_len_event_reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"fifo_wreq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"fifo_wreq_valid_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"fifo_wreq_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"fifo_burst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"fifo_resp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"AWVALID_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+258,0,"last_sect_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"ready_for_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"next_wreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"ready_for_wreq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"wreq_handling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"first_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"last_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"next_sect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+265,0,"fifo_wdata_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+267,0,"data_pack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+269,0,"tmp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"tmp_strb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+271,0,"len_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+272,0,"burst_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+493,0,"beat_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"next_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"burst_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"fifo_burst_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"next_burst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+277,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"WVALID_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"WLAST_Dummy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"aw2b_bdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"bresp_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+280,0,"next_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"last_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"invalid_event",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"fifo_resp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"need_wrsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"resp_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"resp_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("buff_wdata", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+481,0,"MEM_STYLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+494,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"if_full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"if_write_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"if_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+265,0,"if_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+277,0,"if_empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"if_read_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"if_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+267,0,"if_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+286,0,"q_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+288,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+289,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+290,0,"wnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+291,0,"rnext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+292,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+293,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"usedw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+46,0,"full_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"empty_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+296,0,"q_tmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+298,0,"show_ahead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+267,0,"dout_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+277,0,"dout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("bus_equal_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+6,0,"data_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"strb_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+231,0,"tmp_burst_info",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+299,0,"ready_for_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fifo_burst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+430,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+274,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+275,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+272,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+300,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+302,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+304,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+305+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+310,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("could_multi_bursts", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+24,0,"awaddr_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"awlen_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+311,0,"loop_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+312,0,"sect_handling",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"last_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"next_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"ready_for_loop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_resp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+470,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+284,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+283,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+278,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+246,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+315,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 15; ++i) {
        tracep->declBus(c+320+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+335,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_resp_to_user", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+470,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+279,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+336,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+339,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+340,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+346,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("fifo_wreq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"DEPTH_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"sclk_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"empty_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"full_n",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+255,0,"rdreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"wrreq",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+226,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+222,0,"data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+347,0,"push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"full_cond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+350,0,"data_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+351,0,"pout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+352+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+362,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs_wreq", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+486,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"sclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+475,0,"s_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+43,0,"s_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"s_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+222,0,"m_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+224,0,"m_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+225,0,"m_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+488,0,"ZERO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+489,0,"ONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"TWO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+222,0,"data_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+363,0,"data_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+365,0,"load_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"load_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+367,0,"load_p1_from_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"s_ready_t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+368,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+369,0,"next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("wreq_throttl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+431,0,"USED_FIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"FIX_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"USER_MAXREQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"CONSERVATIVE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"AVERAGE_MODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"in_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"in_len",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+89,0,"in_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"out_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"out_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+3,0,"out_len",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"out_req_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"in_req_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"in_strb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"in_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"in_data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"out_data_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"out_strb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"out_last",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"out_data_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"in_data_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+495,0,"log2__Vstatic__n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+496,0,"log2__Vstatic__m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+431,0,"threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+370,0,"req_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+371,0,"handshake",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"load_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"throttl_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_from_mem_V_U", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"AddressRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"address0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+72,0,"ce0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"we0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"q0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("axi4_tester_data_from_mem_V_ram_U", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+72,0,"ce0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"d0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+73,0,"we0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"q0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("test_data_V_U", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"AddressRange",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+423,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"address0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+29,0,"ce0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"q0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("axi4_tester_test_data_V_rom_U", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+498,0,"AWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+497,0,"MEM_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"addr0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+29,0,"ce0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"q0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("axi_ram_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+427,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"PIPELINE_OUTPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+422,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+423,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+432,0,"s_axi_awid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+3,0,"s_axi_awlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"s_axi_awsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"s_axi_awburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+435,0,"s_axi_awlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"s_axi_awcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"s_axi_awprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s_axi_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"s_axi_wlast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"s_axi_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"s_axi_bid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+12,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+439,0,"s_axi_arid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+15,0,"s_axi_arlen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+433,0,"s_axi_arsize",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+434,0,"s_axi_arburst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+435,0,"s_axi_arlock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+436,0,"s_axi_arcache",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+437,0,"s_axi_arprot",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+16,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"s_axi_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"s_axi_rid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+21,0,"s_axi_rlast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"s_axi_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+499,0,"VALID_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"WORD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+430,0,"WORD_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"READ_STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+500,0,"READ_STATE_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+373,0,"read_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+374,0,"read_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+438,0,"WRITE_STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+434,0,"WRITE_STATE_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+375,0,"write_state_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+376,0,"write_state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+377,0,"mem_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"mem_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"read_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+380,0,"read_id_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+381,0,"read_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+382,0,"read_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+383,0,"read_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"read_count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+385,0,"read_size_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+386,0,"read_size_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+387,0,"read_burst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+388,0,"read_burst_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+389,0,"write_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"write_id_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+391,0,"write_addr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+392,0,"write_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+393,0,"write_count_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+394,0,"write_count_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+395,0,"write_size_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+396,0,"write_size_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+397,0,"write_burst_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+398,0,"write_burst_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("b_id_fifo", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+399+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+401,0,"b_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"b_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+403,0,"b_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+404,0,"b_push",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"b_pop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"b_queued_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+501,0,"b_queued_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"b_hold_id_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+503,0,"b_hold_id_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+20,0,"s_axi_rresp_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+406,0,"s_axi_rresp_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+5,0,"s_axi_awready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"s_axi_awready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"s_axi_wready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"s_axi_wready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"s_axi_bid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+504,0,"s_axi_bid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+435,0,"s_axi_bvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"s_axi_bvalid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"s_axi_arready_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"s_axi_arready_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"s_axi_rid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+410,0,"s_axi_rid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"s_axi_rdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"s_axi_rdata_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+21,0,"s_axi_rlast_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"s_axi_rlast_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"s_axi_rvalid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"s_axi_rvalid_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"s_axi_rid_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+414,0,"s_axi_rdata_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+415,0,"s_axi_rlast_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"s_axi_rvalid_pipe_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"s_axi_awaddr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+418,0,"s_axi_araddr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+419,0,"read_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+420,0,"write_addr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+421,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_init_top(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_ram_burst___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram_burst___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_ram_burst___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_register(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_axi4_ram_burst___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_axi4_ram_burst___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_axi4_ram_burst___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_axi4_ram_burst___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_const_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_const_0\n"); );
    // Init
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi4_ram_burst___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_const_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+427,(0x20U),32);
    bufp->fullIData(oldp+428,(0x10U),32);
    bufp->fullIData(oldp+429,(4U),32);
    bufp->fullIData(oldp+430,(8U),32);
    bufp->fullIData(oldp+431,(0U),32);
    bufp->fullCData(oldp+432,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awid),8);
    bufp->fullCData(oldp+433,(2U),3);
    bufp->fullCData(oldp+434,(1U),2);
    bufp->fullBit(oldp+435,(0U));
    bufp->fullCData(oldp+436,(3U),4);
    bufp->fullCData(oldp+437,(0U),3);
    bufp->fullCData(oldp+438,(0U),2);
    bufp->fullCData(oldp+439,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_arid),8);
    bufp->fullIData(oldp+440,(1U),19);
    bufp->fullIData(oldp+441,(2U),19);
    bufp->fullIData(oldp+442,(4U),19);
    bufp->fullIData(oldp+443,(8U),19);
    bufp->fullIData(oldp+444,(0x10U),19);
    bufp->fullIData(oldp+445,(0x20U),19);
    bufp->fullIData(oldp+446,(0x40U),19);
    bufp->fullIData(oldp+447,(0x80U),19);
    bufp->fullIData(oldp+448,(0x100U),19);
    bufp->fullIData(oldp+449,(0x200U),19);
    bufp->fullIData(oldp+450,(0x400U),19);
    bufp->fullIData(oldp+451,(0x800U),19);
    bufp->fullIData(oldp+452,(0x1000U),19);
    bufp->fullIData(oldp+453,(0x2000U),19);
    bufp->fullIData(oldp+454,(0x4000U),19);
    bufp->fullIData(oldp+455,(0x8000U),19);
    bufp->fullIData(oldp+456,(0x10000U),19);
    bufp->fullIData(oldp+457,(0x20000U),19);
    bufp->fullIData(oldp+458,(0x40000U),19);
    bufp->fullIData(oldp+459,(1U),32);
    bufp->fullIData(oldp+460,(3U),32);
    bufp->fullBit(oldp+461,(0U));
    bufp->fullCData(oldp+462,(0U),4);
    bufp->fullBit(oldp+463,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER));
    bufp->fullBit(oldp+464,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER));
    bufp->fullIData(oldp+465,(5U),32);
    bufp->fullBit(oldp+466,(1U));
    bufp->fullIData(oldp+467,(0U),32);
    bufp->fullIData(oldp+468,(0x400U),32);
    bufp->fullCData(oldp+469,(0xfU),4);
    bufp->fullIData(oldp+470,(2U),32);
    bufp->fullSData(oldp+471,(0x3ffU),10);
    bufp->fullIData(oldp+472,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+473,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+474,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m),32);
    bufp->fullQData(oldp+475,(0x40000000000ULL),64);
    bufp->fullBit(oldp+477,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w));
    bufp->fullCData(oldp+478,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt),8);
    bufp->fullBit(oldp+479,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid));
    bufp->fullBit(oldp+480,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst));
    bufp->fullQData(oldp+481,(0x626c6f636bULL),40);
    bufp->fullIData(oldp+483,(0x23U),32);
    bufp->fullIData(oldp+484,(0x100U),32);
    bufp->fullIData(oldp+485,(0xfU),32);
    bufp->fullIData(oldp+486,(0x40U),32);
    bufp->fullIData(oldp+487,(0x22U),32);
    bufp->fullCData(oldp+488,(2U),2);
    bufp->fullCData(oldp+489,(3U),2);
    bufp->fullIData(oldp+490,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y),32);
    bufp->fullIData(oldp+491,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+492,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m),32);
    bufp->fullBit(oldp+493,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid));
    bufp->fullIData(oldp+494,(0x24U),32);
    bufp->fullIData(oldp+495,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n),32);
    bufp->fullIData(oldp+496,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m),32);
    bufp->fullIData(oldp+497,(0x400U),32);
    bufp->fullIData(oldp+498,(0xaU),32);
    bufp->fullIData(oldp+499,(0xeU),32);
    bufp->fullBit(oldp+500,(1U));
    bufp->fullBit(oldp+501,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_queued_next));
    bufp->fullCData(oldp+502,(0U),8);
    bufp->fullCData(oldp+503,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_hold_id_next),8);
    bufp->fullCData(oldp+504,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bid_next),8);
    bufp->fullBit(oldp+505,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_bvalid_next));
    bufp->fullIData(oldp+506,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_next),32);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_full_0\n"); );
    // Init
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_axi4_ram_burst___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_full_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__j),32);
    bufp->fullSData(oldp+2,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awvalid));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
    bufp->fullIData(oldp+6,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullCData(oldp+7,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
    bufp->fullCData(oldp+11,(((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))
                               ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo
                              [vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr]
                               : 0U)),8);
    bufp->fullBit(oldp+12,((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))));
    bufp->fullBit(oldp+13,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
    bufp->fullSData(oldp+14,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
    bufp->fullCData(oldp+15,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
    bufp->fullBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
    bufp->fullBit(oldp+17,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
    bufp->fullCData(oldp+18,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
    bufp->fullCData(oldp+20,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rresp_reg),2);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
    bufp->fullIData(oldp+24,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
    bufp->fullBit(oldp+26,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
    bufp->fullBit(oldp+27,(((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count)) 
                            & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo
                            [vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr])));
    bufp->fullSData(oldp+28,((0x3ffU & ((0x20000U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)
                                         : ((2U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)
                                             : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.axi4_tester_inst__DOT____Vxrand_h8df66b3a__1))))),10);
    bufp->fullBit(oldp+29,((IData)((0U != (0x20002U 
                                           & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
    bufp->fullBit(oldp+31,((1U & ((~ vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                                  | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
    bufp->fullIData(oldp+32,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),19);
    bufp->fullBit(oldp+33,((1U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    bufp->fullBit(oldp+34,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 7U)) | (0U 
                                                 != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))))));
    bufp->fullBit(oldp+35,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 7U))));
    bufp->fullBit(oldp+36,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 8U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
    bufp->fullBit(oldp+37,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 8U))));
    bufp->fullBit(oldp+38,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
    bufp->fullBit(oldp+39,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 3U))));
    bufp->fullBit(oldp+40,((1U & ((~ ((0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)) 
                                      & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 0xfU))) 
                                  | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
    bufp->fullBit(oldp+41,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xfU))));
    bufp->fullBit(oldp+42,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))));
    bufp->fullBit(oldp+43,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    bufp->fullBit(oldp+45,(((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                             >> 3U) & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    bufp->fullBit(oldp+49,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullBit(oldp+50,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY));
    bufp->fullIData(oldp+51,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
    bufp->fullCData(oldp+52,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                            >> 0x20U)))),2);
    bufp->fullBit(oldp+53,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY));
    bufp->fullCData(oldp+55,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
    bufp->fullSData(oldp+56,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)))),11);
    bufp->fullSData(oldp+57,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_reg_246),11);
    bufp->fullBit(oldp+58,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 1U))));
    bufp->fullBit(oldp+59,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))));
    bufp->fullIData(oldp+60,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256),32);
    bufp->fullBit(oldp+61,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 2U))));
    bufp->fullSData(oldp+62,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))),11);
    bufp->fullSData(oldp+63,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_1_reg_264),11);
    bufp->fullBit(oldp+64,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                            & (0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))));
    bufp->fullIData(oldp+65,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_read_reg_269),32);
    bufp->fullBit(oldp+66,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln24_reg_274));
    bufp->fullBit(oldp+68,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x11U))));
    bufp->fullSData(oldp+69,((0x7ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)))),11);
    bufp->fullSData(oldp+70,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_2_reg_278),11);
    bufp->fullSData(oldp+71,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0),10);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0));
    bufp->fullBit(oldp+73,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x10U))));
    bufp->fullIData(oldp+74,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
    bufp->fullSData(oldp+75,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138),11);
    bufp->fullSData(oldp+76,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149),11);
    bufp->fullBit(oldp+77,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0xeU))));
    bufp->fullSData(oldp+78,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161),11);
    bufp->fullBit(oldp+79,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                  >> 0x12U))));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_237_p2));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__storemerge_reg_172));
    bufp->fullQData(oldp+82,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))),64);
    bufp->fullQData(oldp+84,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))),64);
    bufp->fullQData(oldp+86,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))),64);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),19);
    bufp->fullBit(oldp+89,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
    bufp->fullBit(oldp+90,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
    bufp->fullQData(oldp+91,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
    bufp->fullBit(oldp+93,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullBit(oldp+94,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
    bufp->fullQData(oldp+95,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
    bufp->fullIData(oldp+97,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
    bufp->fullIData(oldp+98,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
    bufp->fullCData(oldp+100,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (0xfU & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                                : 0xfU)),8);
    bufp->fullIData(oldp+101,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                   + VL_SHIFTL_III(32,32,32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)))),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+104,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+106,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+108,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+109,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+110,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+111,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+112,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+113,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+114,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
    bufp->fullIData(oldp+115,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
    bufp->fullCData(oldp+116,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                               << 1U)),2);
    bufp->fullBit(oldp+117,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    bufp->fullBit(oldp+118,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                               >> 0x20U))))));
    bufp->fullBit(oldp+119,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                             & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                        >> 0x3fU)))));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read));
    bufp->fullBit(oldp+126,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
    bufp->fullBit(oldp+130,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
    bufp->fullBit(oldp+131,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
    bufp->fullQData(oldp+132,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata),35);
    bufp->fullQData(oldp+134,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
    bufp->fullIData(oldp+136,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
    bufp->fullQData(oldp+137,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata),34);
    bufp->fullQData(oldp+139,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
    bufp->fullCData(oldp+141,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
    bufp->fullCData(oldp+142,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                             >> 0x20U)))),2);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
    bufp->fullBit(oldp+144,(((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                      >> 0x22U)) & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    bufp->fullBit(oldp+149,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    bufp->fullBit(oldp+150,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
    bufp->fullBit(oldp+151,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
    bufp->fullQData(oldp+152,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
    bufp->fullCData(oldp+154,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
    bufp->fullCData(oldp+155,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
    bufp->fullCData(oldp+156,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+157,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
    bufp->fullCData(oldp+160,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
    bufp->fullQData(oldp+162,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
    bufp->fullIData(oldp+165,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
    bufp->fullBit(oldp+166,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullCData(oldp+167,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+168,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+170,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
    bufp->fullBit(oldp+173,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    bufp->fullCData(oldp+175,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
    bufp->fullCData(oldp+176,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
    bufp->fullCData(oldp+177,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
    bufp->fullCData(oldp+178,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
    bufp->fullCData(oldp+179,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
    bufp->fullCData(oldp+180,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
    bufp->fullCData(oldp+181,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
    bufp->fullCData(oldp+182,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
    bufp->fullCData(oldp+183,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
    bufp->fullCData(oldp+184,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
    bufp->fullCData(oldp+185,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
    bufp->fullCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
    bufp->fullCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
    bufp->fullCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
    bufp->fullCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
    bufp->fullCData(oldp+190,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
    bufp->fullBit(oldp+192,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
    bufp->fullBit(oldp+194,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
    bufp->fullBit(oldp+195,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    bufp->fullCData(oldp+196,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
    bufp->fullQData(oldp+197,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+199,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+201,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+203,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+205,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
    bufp->fullQData(oldp+208,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
    bufp->fullBit(oldp+210,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY))))));
    bufp->fullBit(oldp+211,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
    bufp->fullBit(oldp+212,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    bufp->fullCData(oldp+213,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
    bufp->fullCData(oldp+214,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
    bufp->fullQData(oldp+215,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
    bufp->fullBit(oldp+217,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
    bufp->fullBit(oldp+218,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))));
    bufp->fullBit(oldp+219,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    bufp->fullCData(oldp+220,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
    bufp->fullCData(oldp+221,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
    bufp->fullQData(oldp+222,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
    bufp->fullBit(oldp+224,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullBit(oldp+225,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
    bufp->fullQData(oldp+226,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
    bufp->fullIData(oldp+228,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
    bufp->fullIData(oldp+229,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                       >> 0x20U))),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
    bufp->fullCData(oldp+231,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp),8);
    bufp->fullIData(oldp+232,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                   + VL_SHIFTL_III(32,32,32, 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)))),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
    bufp->fullIData(oldp+235,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                               + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
    bufp->fullIData(oldp+237,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                   << 0xcU))),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
    bufp->fullCData(oldp+239,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                : 3U)),2);
    bufp->fullCData(oldp+240,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
    bufp->fullCData(oldp+241,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                : 3U)),2);
    bufp->fullSData(oldp+242,((0x3ffU & ((IData)(0x3ffU) 
                                         - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                            >> 2U)))),10);
    bufp->fullSData(oldp+243,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                          ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                          : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                              ? ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U))
                                              : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
    bufp->fullSData(oldp+244,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
    bufp->fullSData(oldp+245,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
    bufp->fullCData(oldp+246,(((((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
    bufp->fullBit(oldp+248,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
    bufp->fullBit(oldp+251,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
    bufp->fullBit(oldp+252,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
    bufp->fullBit(oldp+253,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read));
    bufp->fullBit(oldp+256,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
    bufp->fullBit(oldp+259,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                          & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
    bufp->fullBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
    bufp->fullQData(oldp+265,((0xf00000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256)))),36);
    bufp->fullQData(oldp+267,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
    bufp->fullIData(oldp+269,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
    bufp->fullCData(oldp+270,((0xfU & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                               >> 0x20U)))),4);
    bufp->fullCData(oldp+271,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
    bufp->fullCData(oldp+272,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
    bufp->fullBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    bufp->fullBit(oldp+274,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
    bufp->fullBit(oldp+275,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
    bufp->fullBit(oldp+276,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst));
    bufp->fullBit(oldp+277,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
    bufp->fullCData(oldp+278,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
    bufp->fullCData(oldp+279,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
    bufp->fullBit(oldp+280,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
    bufp->fullBit(oldp+281,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                   >> 1U))));
    bufp->fullBit(oldp+282,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
    bufp->fullBit(oldp+283,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
    bufp->fullBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
    bufp->fullBit(oldp+285,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    bufp->fullQData(oldp+286,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
    bufp->fullCData(oldp+288,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
    bufp->fullCData(oldp+289,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
    bufp->fullCData(oldp+290,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                         ? ((0xffU 
                                             == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                             ? 0U : 
                                            ((IData)(1U) 
                                             + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                         : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
    bufp->fullCData(oldp+291,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
    bufp->fullBit(oldp+292,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
    bufp->fullBit(oldp+293,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
    bufp->fullCData(oldp+294,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
    bufp->fullQData(oldp+296,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
    bufp->fullBit(oldp+298,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
    bufp->fullBit(oldp+299,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
    bufp->fullBit(oldp+300,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
    bufp->fullBit(oldp+301,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
    bufp->fullBit(oldp+302,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
    bufp->fullBit(oldp+303,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    bufp->fullCData(oldp+304,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
    bufp->fullCData(oldp+305,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
    bufp->fullCData(oldp+306,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
    bufp->fullCData(oldp+307,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
    bufp->fullCData(oldp+308,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
    bufp->fullCData(oldp+309,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
    bufp->fullCData(oldp+311,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
    bufp->fullBit(oldp+312,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
    bufp->fullBit(oldp+314,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
    bufp->fullBit(oldp+315,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
    bufp->fullBit(oldp+316,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
    bufp->fullBit(oldp+317,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                                & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
    bufp->fullBit(oldp+318,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    bufp->fullCData(oldp+319,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
    bufp->fullCData(oldp+320,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
    bufp->fullCData(oldp+321,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
    bufp->fullCData(oldp+322,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
    bufp->fullCData(oldp+324,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
    bufp->fullCData(oldp+325,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
    bufp->fullCData(oldp+326,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
    bufp->fullCData(oldp+327,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
    bufp->fullCData(oldp+329,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
    bufp->fullCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
    bufp->fullCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
    bufp->fullCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
    bufp->fullCData(oldp+334,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
    bufp->fullBit(oldp+336,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
    bufp->fullBit(oldp+338,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    bufp->fullCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
    bufp->fullCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
    bufp->fullCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
    bufp->fullCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
    bufp->fullCData(oldp+344,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
    bufp->fullCData(oldp+345,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
    bufp->fullBit(oldp+347,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
    bufp->fullBit(oldp+349,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                             & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                                & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
    bufp->fullCData(oldp+351,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
    bufp->fullQData(oldp+352,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
    bufp->fullQData(oldp+354,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
    bufp->fullQData(oldp+356,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
    bufp->fullQData(oldp+358,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
    bufp->fullQData(oldp+360,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
    bufp->fullIData(oldp+362,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
    bufp->fullQData(oldp+363,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
    bufp->fullBit(oldp+365,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                              & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID)) 
                             | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))) 
                                | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
    bufp->fullBit(oldp+366,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))));
    bufp->fullBit(oldp+367,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    bufp->fullCData(oldp+368,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
    bufp->fullCData(oldp+369,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
    bufp->fullBit(oldp+370,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
    bufp->fullBit(oldp+371,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
    bufp->fullCData(oldp+372,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
    bufp->fullBit(oldp+373,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_reg));
    bufp->fullBit(oldp+374,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_next));
    bufp->fullCData(oldp+375,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_reg),2);
    bufp->fullCData(oldp+376,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_next),2);
    bufp->fullBit(oldp+377,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_wr_en));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_rd_en));
    bufp->fullCData(oldp+379,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_reg),8);
    bufp->fullCData(oldp+380,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_next),8);
    bufp->fullSData(oldp+381,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
    bufp->fullSData(oldp+382,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_next),16);
    bufp->fullCData(oldp+383,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_reg),8);
    bufp->fullCData(oldp+384,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_next),8);
    bufp->fullCData(oldp+385,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_reg),3);
    bufp->fullCData(oldp+386,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_next),3);
    bufp->fullCData(oldp+387,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
    bufp->fullCData(oldp+388,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_next),2);
    bufp->fullCData(oldp+389,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_reg),8);
    bufp->fullCData(oldp+390,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_next),8);
    bufp->fullSData(oldp+391,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
    bufp->fullSData(oldp+392,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_next),16);
    bufp->fullCData(oldp+393,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_reg),8);
    bufp->fullCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_next),8);
    bufp->fullCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_reg),3);
    bufp->fullCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_next),3);
    bufp->fullCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
    bufp->fullCData(oldp+398,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_next),2);
    bufp->fullCData(oldp+399,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo[0]),8);
    bufp->fullCData(oldp+400,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo[1]),8);
    bufp->fullBit(oldp+401,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_wr_ptr));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr));
    bufp->fullCData(oldp+403,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count),2);
    bufp->fullBit(oldp+404,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_push));
    bufp->fullBit(oldp+405,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_pop));
    bufp->fullCData(oldp+406,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rresp_pipe_reg),2);
    bufp->fullBit(oldp+407,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
    bufp->fullBit(oldp+408,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
    bufp->fullBit(oldp+409,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
    bufp->fullCData(oldp+410,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
    bufp->fullBit(oldp+411,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
    bufp->fullBit(oldp+412,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
    bufp->fullCData(oldp+413,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
    bufp->fullIData(oldp+414,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
    bufp->fullBit(oldp+415,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
    bufp->fullBit(oldp+416,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
    bufp->fullSData(oldp+417,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+418,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                          >> 2U))),14);
    bufp->fullSData(oldp+419,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          >> 2U))),14);
    bufp->fullSData(oldp+420,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                          >> 2U))),14);
    bufp->fullIData(oldp+421,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__i),32);
    bufp->fullBit(oldp+422,(vlSelfRef.clk));
    bufp->fullBit(oldp+423,(vlSelfRef.reset));
    bufp->fullBit(oldp+424,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V));
    bufp->fullBit(oldp+425,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V_ap_vld));
    bufp->fullBit(oldp+426,((1U & (~ (IData)(vlSelfRef.reset)))));
}
