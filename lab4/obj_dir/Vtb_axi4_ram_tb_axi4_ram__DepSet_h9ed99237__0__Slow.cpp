// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram.h for the primary calling header

#include "Vtb_axi4_ram__pch.h"
#include "Vtb_axi4_ram_tb_axi4_ram.h"

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___eval_static__TOP__tb_axi4_ram(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___eval_static__TOP__tb_axi4_ram\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = 1U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = 1U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = 0U;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = 0ULL;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__b_wr_ptr = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__b_rd_ptr = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__b_count = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rresp_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rresp_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = 0U;
}

extern const VlWide<13>/*415:0*/ Vtb_axi4_ram__ConstPool__CONST_h4a511b9d_0;
extern const VlWide<15>/*479:0*/ Vtb_axi4_ram__ConstPool__CONST_hfafb0242_0;

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___eval_initial__TOP__tb_axi4_ram(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___eval_initial__TOP__tb_axi4_ram\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.axi4_tester_inst__DOT____Vxrand_hc7b64f02__0 
        = (0xffffffU & VL_RAND_RESET_ASSIGN_I(24));
    vlSelfRef.axi4_tester_inst__DOT____Vxrand_h8df66b3a__2 
        = (0x3ffU & VL_RAND_RESET_ASSIGN_I(10));
    vlSelfRef.axi4_tester_inst__DOT____Vxrand_h8df66b3a__1 
        = (0x3ffU & VL_RAND_RESET_ASSIGN_I(10));
    vlSelfRef.axi4_tester_inst__DOT____Vxrand_h8df66b3a__0 
        = (0x3ffU & VL_RAND_RESET_ASSIGN_I(10));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm = 1U;
    VL_READMEM_N(true, 10, 1024, 0, VL_CVT_PACK_STR_NW(13, Vtb_axi4_ram__ConstPool__CONST_h4a511b9d_0)
                 ,  &(vlSelfRef.__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(15, Vtb_axi4_ram__ConstPool__CONST_hfafb0242_0)
                 ,  &(vlSelfRef.__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vxrand_h7c493c5f__0 
        = VL_RAND_RESET_ASSIGN_Q(64);
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vxrand_h8df6e539__0 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vxrand_h8df6e539__0 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vxrand_h8df5861d__0 
        = (0xffU & VL_RAND_RESET_ASSIGN_I(8));
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vxrand_h7c493c5f__0 
        = VL_RAND_RESET_ASSIGN_Q(64);
    vlSelfRef.axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vxrand_h8df6e539__0 
        = (3U & VL_RAND_RESET_ASSIGN_I(2));
    vlSelfRef.__PVT__axi_ram_inst__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, vlSelfRef.__PVT__axi_ram_inst__DOT__i)) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__j = vlSelfRef.__PVT__axi_ram_inst__DOT__i;
        while (VL_LTS_III(32, vlSelfRef.__PVT__axi_ram_inst__DOT__j, 
                          ((IData)(0x80U) + vlSelfRef.__PVT__axi_ram_inst__DOT__i))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__mem[(0x3fffU 
                                                     & vlSelfRef.__PVT__axi_ram_inst__DOT__j)] = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__mem_valid[(0x3fffU 
                                                           & vlSelfRef.__PVT__axi_ram_inst__DOT__j)] = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__j = 
                ((IData)(1U) + vlSelfRef.__PVT__axi_ram_inst__DOT__j);
        }
        vlSelfRef.__PVT__axi_ram_inst__DOT__i = ((IData)(0x80U) 
                                                 + vlSelfRef.__PVT__axi_ram_inst__DOT__i);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_axi4_ram__ConstPool__TABLE_h10685092_0;

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___stl_sequent__TOP__tb_axi4_ram__0(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___stl_sequent__TOP__tb_axi4_ram__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 0U;
    vlSelfRef.correct_V_ap_vld = (1U & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                        >> 0x17U));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0 
        = (IData)((0U != (0x300000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
    vlSelfRef.correct_V = vlSelfRef.__PVT__axi4_tester_inst__DOT__storemerge_reg_199;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (0U == (IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                             >> 0x20U))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
           & (IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                      >> 0x3fU)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
               >> 0xcU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
               >> 0xcU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata 
        = (((QData)((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__mem_wr_en = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__mem_rd_en = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata 
        = (((QData)((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg)) 
            << 0x22U) | (((QData)((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rresp_reg)) 
                          << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0 
        = (0x3ffU & ((0x200000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                      ? (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)
                      : ((0x100000U & vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                          ? (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335)
                          : (IData)(vlSelfRef.axi4_tester_inst__DOT____Vxrand_h8df66b3a__1))));
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
            : (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp 
        = ((0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
            ? vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
            : (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
               + VL_SHIFTL_III(32,32,32, ((IData)(1U) 
                                          + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                 & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy))) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg)))) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_next = 1U;
        if (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy) 
             & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_next = 2U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_next 
                = vlSelfRef.__PVT__s_axi_arid;
        }
    }
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__b_push = ((1U 
                                                   == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg)) 
                                                  & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                                                     & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg) 
                                                        & ((0U 
                                                            == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg)) 
                                                           | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy)))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n) 
           & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
              >> 4U));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n) 
           & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg;
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 9U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp) 
           & ((IData)((0U != (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp)));
    vlSelfRef.__PVT__axi_ram_inst__DOT__b_pop = ((0U 
                                                  != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__b_count)) 
                                                 & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
    vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg;
    if (vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg) {
        if (vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg) {
            if ((1U & ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)) 
                       | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n)))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__mem_rd_en = 1U;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = 1U;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rid_next 
                    = vlSelfRef.__PVT__axi_ram_inst__DOT__read_id_reg;
                vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg))) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_burst_reg))) {
                        vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_size_reg))));
                    }
                }
            }
        }
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next 
            = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_reg) 
               && ((1U & (~ ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)) 
                             | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n)))) 
                   || (0U != (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_reg))));
    } else if (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy) 
                & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg))) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next = 1U;
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_count_next 
            = vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf;
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_addr_next 
            = (0xffffU & vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf);
    } else {
        vlSelfRef.__PVT__axi_ram_inst__DOT__read_state_next = 0U;
    }
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 0xcU) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY 
        = (1U & ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                  >> 0x13U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID 
        = ((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
            >> 3U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 
           == vlSelfRef.__PVT__axi4_tester_inst__DOT__test_data_V_q0);
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
               >> 0xcU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect 
        = (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
           == (vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
               >> 0xcU));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x3fU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf) 
                        >> 4U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t)) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data 
        = (1U & (~ ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt) 
           == (0x3fU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf) 
                        >> 4U)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                  & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy 
        = ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg) 
           & (0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelfRef.__PVT__s_axi_awvalid = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy) 
                                      & (0U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext 
        = (0xffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                     ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                     : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext 
        = (0xffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                     ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                     : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
    __Vtableidx5 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h10685092_0
        [__Vtableidx5];
    __Vtableidx7 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h10685092_0
        [__Vtableidx7];
    __Vtableidx3 = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                     << 4U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                                << 3U) | (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID) 
                                           << 2U) | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next 
        = Vtb_axi4_ram__ConstPool__TABLE_h10685092_0
        [__Vtableidx3];
    vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_NS_fsm 
        = (((((((((1U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                  | (2U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                 | (4U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                | (8U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
               | (0x10U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
              | (0x20U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
             | (0x40U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
            | (0x80U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
            ? ((1U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                ? 2U : ((2U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                         ? (((0x400U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i_0_reg_166)) 
                             & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                >> 1U)) ? 0x400U : 4U)
                         : ((4U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                             ? 8U : ((8U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                      ? (((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                           >> 3U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t))
                                          ? 0x10U : 8U)
                                      : ((0x10U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                          ? (((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                               >> 4U) 
                                              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))
                                              ? 0x20U
                                              : 0x10U)
                                          : ((0x20U 
                                              == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                              ? 0x40U
                                              : ((0x40U 
                                                  == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 0x80U
                                                  : 0x100U)))))))
            : (((((((((0x100U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                      | (0x200U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                     | (0x400U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                    | (0x800U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                   | (0x1000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                  | (0x2000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                 | (0x4000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                | (0x8000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
                ? ((0x100U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                    ? 0x200U : ((0x200U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                 ? (((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                      >> 9U) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID))
                                     ? 2U : 0x200U)
                                 : ((0x400U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                     ? (((0x400U == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i1_0_reg_177)) 
                                         & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                            >> 0xaU))
                                         ? 0x200000U
                                         : 0x800U) : 
                                    ((0x800U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                      ? 0x1000U : (
                                                   (0x1000U 
                                                    == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                    ? 
                                                   (((vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                      >> 0xcU) 
                                                     & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t))
                                                     ? 0x2000U
                                                     : 0x1000U)
                                                    : 
                                                   ((0x2000U 
                                                     == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                     ? 0x4000U
                                                     : 
                                                    ((0x4000U 
                                                      == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                      ? 0x8000U
                                                      : 0x10000U)))))))
                : (((((((((0x10000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                          | (0x20000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                         | (0x40000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                        | (0x80000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                       | (0x100000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                      | (0x200000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                     | (0x400000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)) 
                    | (0x800000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm))
                    ? ((0x10000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                        ? 0x20000U : ((0x20000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                       ? 0x40000U : 
                                      ((0x40000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                        ? 0x80000U : 
                                       ((0x80000U == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                         ? ((1U & (
                                                   (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                    >> 0x13U) 
                                                   & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)))
                                             ? 0x100000U
                                             : 0x80000U)
                                         : ((0x100000U 
                                             == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                             ? 0x400U
                                             : ((0x200000U 
                                                 == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                 ? 
                                                (((0x400U 
                                                   == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__i2_0_reg_188)) 
                                                  & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                     >> 0x15U))
                                                  ? 0x800000U
                                                  : 0x400000U)
                                                 : 
                                                ((0x400000U 
                                                  == vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                  ? 
                                                 ((1U 
                                                   & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2)) 
                                                      & (vlSelfRef.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                                         >> 0x16U)))
                                                   ? 0x800000U
                                                   : 0x200000U)
                                                  : 1U)))))))
                    : vlSelfRef.axi4_tester_inst__DOT____Vxrand_hc7b64f02__0)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
            ? (0xfU & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf))
            : 0xfU);
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling) 
           & ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                  & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
              & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                 & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready))));
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg;
    vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
        = vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__b_count)) 
               | (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__b_pop));
        if (((IData)(vlSelfRef.__PVT__s_axi_awvalid) 
             & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_reg))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_next = 2U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_awready_next = 0U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_id_next 
                = vlSelfRef.__PVT__s_axi_awid;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 1U;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
                = vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf;
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
                = (0xffffU & vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf);
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
             & (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))) {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy))))) {
                vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_burst_reg))) {
                    vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.__PVT__axi_ram_inst__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.__PVT__axi_ram_inst__DOT__write_state_next = 0U;
    }
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2 
        = (((IData)((vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                     >> 0x22U)) & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid)) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid)) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst 
        = (((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len) 
            == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt)) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect) 
                        & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect))) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
           & ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
              & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect 
        = ((~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                   & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext 
        = (0xffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop)
                     ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)))
                     : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext 
        = (0xffU & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop)
                     ? ((0xffU == (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr))
                         ? 0U : ((IData)(1U) + (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)))
                     : (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq 
        = (1U & (~ ((~ ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect) 
                        & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect))) 
                    & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling))));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read 
        = ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq) 
           & ((IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid) 
              | (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf)));
    vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read)) 
               & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid))) 
           & (IData)(vlSelfRef.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
}

VL_ATTR_COLD void Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset(Vtb_axi4_ram_tb_axi4_ram* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axi4_ram_tb_axi4_ram___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_awid = VL_RAND_RESET_I(8);
    vlSelf->__PVT__s_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__s_axi_arid = VL_RAND_RESET_I(8);
    vlSelf->correct_V = VL_RAND_RESET_I(1);
    vlSelf->correct_V_ap_vld = VL_RAND_RESET_I(1);
    vlSelf->axi4_tester_inst__DOT____Vxrand_hc7b64f02__0 = VL_RAND_RESET_I(24);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8df66b3a__2 = VL_RAND_RESET_I(10);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8df66b3a__1 = VL_RAND_RESET_I(10);
    vlSelf->axi4_tester_inst__DOT____Vxrand_h8df66b3a__0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_RUSER = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__m_axi_data_in_out_V_BUSER = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__addr_q0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_q0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_CS_fsm = VL_RAND_RESET_I(24);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__reg_213 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_reg_301 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_316 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_1_reg_330 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__zext_ln22_reg_335 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_in_out_V_addr_1_1_reg_351 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_2_reg_359 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__i_0_reg_166 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__i1_0_reg_177 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__i2_0_reg_188 = VL_RAND_RESET_I(11);
    vlSelf->__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_292_p2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__storemerge_reg_199 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__ap_NS_fsm = VL_RAND_RESET_I(24);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__addr_U__DOT__axi4_tester_addr_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(10);
    }
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__test_data_V_U__DOT__axi4_tester_test_data_V_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__calc_data_width__Vstatic__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awaddr_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf = VL_RAND_RESET_I(4);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vxrand_h7c493c5f__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT____Vlvbound_hec89221a__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__mem[__Vi0] = VL_RAND_RESET_Q(36);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__wnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf = VL_RAND_RESET_Q(36);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vxrand_h8df6e539__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT____Vlvbound_h824cdf03__0 = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vxrand_h8df6e539__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT____Vlvbound_h6bc8880f__0 = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vxrand_h8df5861d__0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT____Vlvbound_h61fc8f8e__0 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__calc_data_width__Vstatic__y = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__log2__Vstatic__m = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__araddr_tmp = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf = VL_RAND_RESET_I(10);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt = VL_RAND_RESET_I(20);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_resp_w = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__len_cnt = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__burst_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_burst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vxrand_h7c493c5f__0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT____Vlvbound_hec89221a__0 = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__mem[__Vi0] = VL_RAND_RESET_Q(35);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__wnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf = VL_RAND_RESET_Q(35);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next = VL_RAND_RESET_I(2);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vxrand_h8df6e539__0 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT____Vlvbound_h824cdf03__0 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__axi4_tester_inst__DOT__data_from_mem_V_U__DOT__axi4_tester_data_from_mem_V_ram_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_id_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__read_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_id_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_reg = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__write_addr_next = VL_RAND_RESET_I(16);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__write_burst_next = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__axi_ram_inst__DOT__b_id_fifo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__b_wr_ptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__b_rd_ptr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__b_count = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__b_push = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__b_pop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__b_queued_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__b_hold_id_next = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__axi_ram_inst__DOT__mem_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rresp_pipe_reg = VL_RAND_RESET_I(2);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bid_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_next = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg = VL_RAND_RESET_I(8);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__axi_ram_inst__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__axi_ram_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axi_ram_inst__DOT__j = VL_RAND_RESET_I(32);
}
