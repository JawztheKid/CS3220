// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst__Syms.h"


void Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_burst___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_chg_0\n"); );
    // Init
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__j),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+1,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf)),16);
        bufp->chgCData(oldp+2,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf),8);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__s_axi_awvalid));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg));
        bufp->chgIData(oldp+5,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__data_buf),32);
        bufp->chgCData(oldp+6,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__strb_buf),4);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WLAST_Dummy));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+10,(((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))
                                  ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo
                                 [vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr]
                                  : 0U)),8);
        bufp->chgBit(oldp+11,((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_ready));
        bufp->chgSData(oldp+13,((0xffffU & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf)),16);
        bufp->chgCData(oldp+14,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf),8);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy));
        bufp->chgBit(oldp+16,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+17,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+18,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_reg),32);
        bufp->chgCData(oldp+19,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__full_n));
        bufp->chgIData(oldp+23,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf),32);
        bufp->chgIData(oldp+24,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf),32);
        bufp->chgBit(oldp+25,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_reg))));
        bufp->chgBit(oldp+26,(((0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count)) 
                               & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo
                               [vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr])));
        bufp->chgSData(oldp+27,((0x3ffU & ((0x20000U 
                                            & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                            ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)
                                            : ((2U 
                                                & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)
                                                ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)
                                                : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.axi4_tester_inst__DOT____Vxrand_h8df66b3a__1))))),10);
        bufp->chgBit(oldp+28,((IData)((0U != (0x20002U 
                                              & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)))));
        bufp->chgIData(oldp+29,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_q0),32);
        bufp->chgBit(oldp+30,((1U & ((~ vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm) 
                                     | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_reg)))));
        bufp->chgIData(oldp+31,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm),19);
        bufp->chgBit(oldp+32,((1U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm)));
        bufp->chgBit(oldp+33,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 7U)) | 
                                     (0U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count))))));
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 7U))));
        bufp->chgBit(oldp+35,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 8U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)))));
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 8U))));
        bufp->chgBit(oldp+37,((1U & ((~ (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                         >> 3U)) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg)))));
        bufp->chgBit(oldp+38,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 3U))));
        bufp->chgBit(oldp+39,((1U & ((~ ((0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)) 
                                         & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                            >> 0xfU))) 
                                     | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_reg)))));
        bufp->chgBit(oldp+40,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0xfU))));
        bufp->chgBit(oldp+41,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))));
        bufp->chgBit(oldp+42,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID));
        bufp->chgBit(oldp+43,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t));
        bufp->chgBit(oldp+44,(((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                >> 3U) & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n))));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__full_n));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t));
        bufp->chgBit(oldp+48,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
        bufp->chgBit(oldp+49,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY));
        bufp->chgIData(oldp+50,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1)),32);
        bufp->chgCData(oldp+51,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1 
                                               >> 0x20U)))),2);
        bufp->chgBit(oldp+52,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BVALID));
        bufp->chgBit(oldp+53,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BREADY));
        bufp->chgCData(oldp+54,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_BRESP),2);
        bufp->chgSData(oldp+55,((0x7ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138)))),11);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_reg_246),11);
        bufp->chgBit(oldp+57,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 1U))));
        bufp->chgBit(oldp+58,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))));
        bufp->chgIData(oldp+59,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256),32);
        bufp->chgBit(oldp+60,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 2U))));
        bufp->chgSData(oldp+61,((0x7ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))),11);
        bufp->chgSData(oldp+62,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_1_reg_264),11);
        bufp->chgBit(oldp+63,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                               & (0x400U != (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149)))));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_read_reg_269),32);
        bufp->chgBit(oldp+65,((0x400U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln24_reg_274));
        bufp->chgBit(oldp+67,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x11U))));
        bufp->chgSData(oldp+68,((0x7ffU & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161)))),11);
        bufp->chgSData(oldp+69,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_2_reg_278),11);
        bufp->chgSData(oldp+70,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_address0),10);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_ce0));
        bufp->chgBit(oldp+72,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x10U))));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_from_mem_V_q0),32);
        bufp->chgSData(oldp+74,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138),11);
        bufp->chgSData(oldp+75,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149),11);
        bufp->chgBit(oldp+76,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0xeU))));
        bufp->chgSData(oldp+77,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161),11);
        bufp->chgBit(oldp+78,((1U & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_CS_fsm 
                                     >> 0x12U))));
        bufp->chgBit(oldp+79,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__icmp_ln883_fu_237_p2));
        bufp->chgBit(oldp+80,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__storemerge_reg_172));
        bufp->chgQData(oldp+81,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i_0_reg_138))),64);
        bufp->chgQData(oldp+83,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i1_0_reg_149))),64);
        bufp->chgQData(oldp+85,((QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__i2_0_reg_161))),64);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__ap_NS_fsm),19);
        bufp->chgBit(oldp+88,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy));
        bufp->chgBit(oldp+89,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy));
        bufp->chgQData(oldp+90,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p1),64);
        bufp->chgBit(oldp+92,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
        bufp->chgBit(oldp+93,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack));
        bufp->chgQData(oldp+94,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data),64);
        bufp->chgIData(oldp+96,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data)),32);
        bufp->chgIData(oldp+97,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len),32);
        bufp->chgCData(oldp+99,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                  ? (0xfU & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf))
                                  : 0xfU)),8);
        bufp->chgIData(oldp+100,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt))
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__arlen_buf)), 2U)))),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf),32);
        bufp->chgIData(oldp+103,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__align_len 
                                  + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr)),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf),32);
        bufp->chgIData(oldp+105,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt 
                                      << 0xcU))),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_addr_buf),32);
        bufp->chgCData(oldp+107,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)
                                   ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf)
                                   : 3U)),2);
        bufp->chgCData(oldp+108,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf),2);
        bufp->chgCData(oldp+109,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop)
                                   ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_end_buf)
                                   : 3U)),2);
        bufp->chgSData(oldp+110,((0x3ffU & ((IData)(0x3ffU) 
                                            - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                               >> 2U)))),10);
        bufp->chgSData(oldp+111,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf)
                                             : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect)) 
                                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect))
                                                 ? 
                                                ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__start_addr_buf 
                                                  >> 2U))
                                                 : 
                                                (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
        bufp->chgSData(oldp+112,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_len_buf),10);
        bufp->chgSData(oldp+113,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__beat_len_buf),10);
        bufp->chgIData(oldp+114,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__sect_cnt),20);
        bufp->chgCData(oldp+115,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                  << 1U)),2);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r));
        bufp->chgBit(oldp+117,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                                & (0U == (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                                  >> 0x20U))))));
        bufp->chgBit(oldp+118,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid) 
                                & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_data 
                                           >> 0x3fU)))));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg1));
        bufp->chgBit(oldp+121,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__invalid_len_event_reg2));
        bufp->chgBit(oldp+122,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_valid_buf));
        bufp->chgBit(oldp+124,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq_read));
        bufp->chgBit(oldp+125,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_r))) 
                                         & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling))))));
        bufp->chgBit(oldp+126,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ready_for_rreq));
        bufp->chgBit(oldp+127,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rreq_handling));
        bufp->chgBit(oldp+128,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__first_sect));
        bufp->chgBit(oldp+129,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__last_sect));
        bufp->chgBit(oldp+130,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_sect));
        bufp->chgQData(oldp+131,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rresp_rdata),35);
        bufp->chgQData(oldp+133,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf),35);
        bufp->chgIData(oldp+135,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf)),32);
        bufp->chgQData(oldp+136,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rrsp_rdata),34);
        bufp->chgQData(oldp+138,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p1),34);
        bufp->chgCData(oldp+140,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ar2r_rdata),2);
        bufp->chgCData(oldp+141,((3U & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                                >> 0x20U)))),2);
        bufp->chgCData(oldp+142,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__resp_buf),2);
        bufp->chgBit(oldp+143,(((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_buf 
                                         >> 0x22U)) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid))));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__tmp_last_2));
        bufp->chgBit(oldp+145,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__need_rlast));
        bufp->chgBit(oldp+146,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready));
        bufp->chgBit(oldp+147,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__dout_valid));
        bufp->chgBit(oldp+148,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__next_beat));
        bufp->chgBit(oldp+149,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t));
        bufp->chgBit(oldp+150,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t));
        bufp->chgQData(oldp+151,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_buf),35);
        bufp->chgCData(oldp+153,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr),8);
        bufp->chgCData(oldp+154,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__raddr),8);
        bufp->chgCData(oldp+155,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push)
                                            ? ((0xffU 
                                                == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))
                                            : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__waddr)))),8);
        bufp->chgCData(oldp+156,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__rnext),8);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__push));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__pop));
        bufp->chgCData(oldp+159,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__usedw),8);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__empty_n));
        bufp->chgQData(oldp+161,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__q_tmp),35);
        bufp->chgBit(oldp+163,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__buff_rdata__DOT__show_ahead));
        bufp->chgIData(oldp+164,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__data_buf),32);
        bufp->chgBit(oldp+165,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__bus_equal_gen__DOT__ready_for_data));
        bufp->chgCData(oldp+166,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__loop_cnt),6);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__sect_handling));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__last_loop));
        bufp->chgBit(oldp+169,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_reg)) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__ARVALID_Dummy))) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl_ready))));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop));
        bufp->chgBit(oldp+172,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__push) 
                                   & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld))))));
        bufp->chgBit(oldp+173,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__data_vld));
        bufp->chgCData(oldp+174,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__pout),4);
        bufp->chgCData(oldp+175,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[0]),2);
        bufp->chgCData(oldp+176,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[1]),2);
        bufp->chgCData(oldp+177,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[2]),2);
        bufp->chgCData(oldp+178,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[3]),2);
        bufp->chgCData(oldp+179,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[4]),2);
        bufp->chgCData(oldp+180,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[5]),2);
        bufp->chgCData(oldp+181,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[6]),2);
        bufp->chgCData(oldp+182,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[7]),2);
        bufp->chgCData(oldp+183,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[8]),2);
        bufp->chgCData(oldp+184,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[9]),2);
        bufp->chgCData(oldp+185,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[10]),2);
        bufp->chgCData(oldp+186,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[11]),2);
        bufp->chgCData(oldp+187,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[12]),2);
        bufp->chgCData(oldp+188,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[13]),2);
        bufp->chgCData(oldp+189,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__mem[14]),2);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rctl__DOT__i),32);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop));
        bufp->chgBit(oldp+193,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld))))));
        bufp->chgBit(oldp+194,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__data_vld));
        bufp->chgCData(oldp+195,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__pout),3);
        bufp->chgQData(oldp+196,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[0]),64);
        bufp->chgQData(oldp+198,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[1]),64);
        bufp->chgQData(oldp+200,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[2]),64);
        bufp->chgQData(oldp+202,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[3]),64);
        bufp->chgQData(oldp+204,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__mem[4]),64);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__fifo_rreq__DOT__i),32);
        bufp->chgQData(oldp+207,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__data_p2),34);
        bufp->chgBit(oldp+209,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_RREADY))))));
        bufp->chgBit(oldp+210,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rdata_valid_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__s_ready_t))));
        bufp->chgBit(oldp+211,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state))));
        bufp->chgCData(oldp+212,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__state),2);
        bufp->chgCData(oldp+213,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rdata__DOT__next),2);
        bufp->chgQData(oldp+214,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__data_p2),64);
        bufp->chgBit(oldp+216,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs2f_rreq_ack))))));
        bufp->chgBit(oldp+217,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__s_ready_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_ARVALID))));
        bufp->chgBit(oldp+218,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state))));
        bufp->chgCData(oldp+219,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__state),2);
        bufp->chgCData(oldp+220,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__rs_rreq__DOT__next),2);
        bufp->chgQData(oldp+221,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p1),64);
        bufp->chgBit(oldp+223,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
        bufp->chgBit(oldp+224,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack));
        bufp->chgQData(oldp+225,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data),64);
        bufp->chgIData(oldp+227,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data)),32);
        bufp->chgIData(oldp+228,((IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_data 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len),32);
        bufp->chgCData(oldp+230,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__awlen_tmp),8);
        bufp->chgIData(oldp+231,(((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt))
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                      + VL_SHIFTL_III(32,32,32, 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awlen_buf)), 2U)))),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf),32);
        bufp->chgIData(oldp+234,((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__align_len 
                                  + vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr)),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf),32);
        bufp->chgIData(oldp+236,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)
                                   ? vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf
                                   : (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt 
                                      << 0xcU))),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_addr_buf),32);
        bufp->chgCData(oldp+238,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)
                                   ? (3U & vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf)
                                   : 3U)),2);
        bufp->chgCData(oldp+239,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf),2);
        bufp->chgCData(oldp+240,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop)
                                   ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_end_buf)
                                   : 3U)),2);
        bufp->chgSData(oldp+241,((0x3ffU & ((IData)(0x3ffU) 
                                            - (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                               >> 2U)))),10);
        bufp->chgSData(oldp+242,((0x3ffU & (((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                             ? (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf)
                                             : (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect)) 
                                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect))
                                                 ? 
                                                ((IData)(0x3ffU) 
                                                 - 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__start_addr_buf 
                                                  >> 2U))
                                                 : 
                                                (((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect)) 
                                                  & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect))
                                                  ? 
                                                 (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__end_addr_buf 
                                                  >> 2U)
                                                  : 0x3ffU))))),10);
        bufp->chgSData(oldp+243,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_len_buf),10);
        bufp->chgSData(oldp+244,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__beat_len_buf),10);
        bufp->chgCData(oldp+245,(((((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf)) 
                                   << 1U) | (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2))),2);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__sect_cnt),20);
        bufp->chgBit(oldp+247,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__zero_len_event));
        bufp->chgBit(oldp+248,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__negative_len_event));
        bufp->chgBit(oldp+249,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event));
        bufp->chgBit(oldp+250,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg1));
        bufp->chgBit(oldp+251,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2));
        bufp->chgBit(oldp+252,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid));
        bufp->chgBit(oldp+253,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_valid_buf));
        bufp->chgBit(oldp+254,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq_read));
        bufp->chgBit(oldp+255,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__invalid_len_event_reg2)) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))));
        bufp->chgBit(oldp+256,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w));
        bufp->chgBit(oldp+257,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect_buf));
        bufp->chgBit(oldp+258,((1U & (~ ((~ ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop) 
                                             & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_w))) 
                                         & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling))))));
        bufp->chgBit(oldp+259,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__ready_for_wreq));
        bufp->chgBit(oldp+260,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__wreq_handling));
        bufp->chgBit(oldp+261,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__first_sect));
        bufp->chgBit(oldp+262,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__last_sect));
        bufp->chgBit(oldp+263,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_sect));
        bufp->chgQData(oldp+264,((0xf00000000ULL | (QData)((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__test_data_V_load_reg_256)))),36);
        bufp->chgQData(oldp+266,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf),36);
        bufp->chgIData(oldp+268,((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf)),32);
        bufp->chgCData(oldp+269,((0xfU & (IData)((vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_buf 
                                                  >> 0x20U)))),4);
        bufp->chgCData(oldp+270,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__len_cnt),8);
        bufp->chgCData(oldp+271,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_len),8);
        bufp->chgBit(oldp+272,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_data));
        bufp->chgBit(oldp+273,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__burst_valid));
        bufp->chgBit(oldp+274,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready));
        bufp->chgBit(oldp+275,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_burst));
        bufp->chgBit(oldp+276,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__dout_valid));
        bufp->chgCData(oldp+277,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata),2);
        bufp->chgCData(oldp+278,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bresp_tmp),2);
        bufp->chgBit(oldp+279,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__next_resp));
        bufp->chgBit(oldp+280,((1U & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata) 
                                      >> 1U))));
        bufp->chgBit(oldp+281,((1U & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__aw2b_bdata))));
        bufp->chgBit(oldp+282,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready));
        bufp->chgBit(oldp+283,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__need_wrsp));
        bufp->chgBit(oldp+284,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__resp_match));
        bufp->chgQData(oldp+285,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_buf),36);
        bufp->chgCData(oldp+287,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr),8);
        bufp->chgCData(oldp+288,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__raddr),8);
        bufp->chgCData(oldp+289,((0xffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push)
                                            ? ((0xffU 
                                                == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr))
                                                ? 0U
                                                : ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))
                                            : (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__waddr)))),8);
        bufp->chgCData(oldp+290,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__rnext),8);
        bufp->chgBit(oldp+291,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__push));
        bufp->chgBit(oldp+292,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__pop));
        bufp->chgCData(oldp+293,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__usedw),8);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__empty_n));
        bufp->chgQData(oldp+295,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__q_tmp),36);
        bufp->chgBit(oldp+297,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__buff_wdata__DOT__show_ahead));
        bufp->chgBit(oldp+298,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__ready_for_data));
        bufp->chgBit(oldp+299,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push));
        bufp->chgBit(oldp+300,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop));
        bufp->chgBit(oldp+301,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld))))));
        bufp->chgBit(oldp+302,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__data_vld));
        bufp->chgCData(oldp+303,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__pout),3);
        bufp->chgCData(oldp+304,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[0]),8);
        bufp->chgCData(oldp+305,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[1]),8);
        bufp->chgCData(oldp+306,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[2]),8);
        bufp->chgCData(oldp+307,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[3]),8);
        bufp->chgCData(oldp+308,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__mem[4]),8);
        bufp->chgIData(oldp+309,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__bus_equal_gen__DOT__fifo_burst__DOT__i),32);
        bufp->chgCData(oldp+310,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__loop_cnt),6);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__sect_handling));
        bufp->chgBit(oldp+312,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__last_loop));
        bufp->chgBit(oldp+313,(((~ ((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__AWREADY_Dummy)) 
                                    & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__AWVALID_Dummy))) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_burst_ready) 
                                   & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_ready)))));
        bufp->chgBit(oldp+314,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push));
        bufp->chgBit(oldp+315,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop));
        bufp->chgBit(oldp+316,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__push) 
                                   & ((0xdU == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld))))));
        bufp->chgBit(oldp+317,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__data_vld));
        bufp->chgCData(oldp+318,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__pout),4);
        bufp->chgCData(oldp+319,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[0]),2);
        bufp->chgCData(oldp+320,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[1]),2);
        bufp->chgCData(oldp+321,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[2]),2);
        bufp->chgCData(oldp+322,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[3]),2);
        bufp->chgCData(oldp+323,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[4]),2);
        bufp->chgCData(oldp+324,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[5]),2);
        bufp->chgCData(oldp+325,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[6]),2);
        bufp->chgCData(oldp+326,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[7]),2);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[8]),2);
        bufp->chgCData(oldp+328,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[9]),2);
        bufp->chgCData(oldp+329,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[10]),2);
        bufp->chgCData(oldp+330,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[11]),2);
        bufp->chgCData(oldp+331,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[12]),2);
        bufp->chgCData(oldp+332,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[13]),2);
        bufp->chgCData(oldp+333,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__mem[14]),2);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp__DOT__i),32);
        bufp->chgBit(oldp+335,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop));
        bufp->chgBit(oldp+337,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld))))));
        bufp->chgBit(oldp+338,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__data_vld));
        bufp->chgCData(oldp+339,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__pout),3);
        bufp->chgCData(oldp+340,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[0]),2);
        bufp->chgCData(oldp+341,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[1]),2);
        bufp->chgCData(oldp+342,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[2]),2);
        bufp->chgCData(oldp+343,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[3]),2);
        bufp->chgCData(oldp+344,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__mem[4]),2);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_resp_to_user__DOT__i),32);
        bufp->chgBit(oldp+346,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push));
        bufp->chgBit(oldp+347,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop));
        bufp->chgBit(oldp+348,(((~ (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pop)) 
                                & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__push) 
                                   & ((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld))))));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__data_vld));
        bufp->chgCData(oldp+350,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__pout),3);
        bufp->chgQData(oldp+351,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[0]),64);
        bufp->chgQData(oldp+353,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[1]),64);
        bufp->chgQData(oldp+355,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[2]),64);
        bufp->chgQData(oldp+357,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[3]),64);
        bufp->chgQData(oldp+359,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__mem[4]),64);
        bufp->chgIData(oldp+361,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__fifo_wreq__DOT__i),32);
        bufp->chgQData(oldp+362,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__data_p2),64);
        bufp->chgBit(oldp+364,((((2U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                 & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID)) 
                                | (((3U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                    & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack) 
                                       & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))) 
                                   | ((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state)) 
                                      & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs2f_wreq_ack))))));
        bufp->chgBit(oldp+365,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__s_ready_t) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__data_in_out_V_AWVALID))));
        bufp->chgBit(oldp+366,((1U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state))));
        bufp->chgCData(oldp+367,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__state),2);
        bufp->chgCData(oldp+368,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__rs_wreq__DOT__next),2);
        bufp->chgBit(oldp+369,((0U == (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt))));
        bufp->chgBit(oldp+370,(((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__WVALID_Dummy) 
                                & (IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_reg))));
        bufp->chgCData(oldp+371,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__wreq_throttl__DOT__genblk1__DOT__throttl_cnt),8);
        bufp->chgBit(oldp+372,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_reg));
        bufp->chgBit(oldp+373,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_state_next));
        bufp->chgCData(oldp+374,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_reg),2);
        bufp->chgCData(oldp+375,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_state_next),2);
        bufp->chgBit(oldp+376,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_wr_en));
        bufp->chgBit(oldp+377,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__mem_rd_en));
        bufp->chgCData(oldp+378,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_reg),8);
        bufp->chgCData(oldp+379,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_id_next),8);
        bufp->chgSData(oldp+380,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg),16);
        bufp->chgSData(oldp+381,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_next),16);
        bufp->chgCData(oldp+382,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_reg),8);
        bufp->chgCData(oldp+383,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_count_next),8);
        bufp->chgCData(oldp+384,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_reg),3);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_size_next),3);
        bufp->chgCData(oldp+386,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+387,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_burst_next),2);
        bufp->chgCData(oldp+388,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_reg),8);
        bufp->chgCData(oldp+389,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_id_next),8);
        bufp->chgSData(oldp+390,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg),16);
        bufp->chgSData(oldp+391,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_next),16);
        bufp->chgCData(oldp+392,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_reg),8);
        bufp->chgCData(oldp+393,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_count_next),8);
        bufp->chgCData(oldp+394,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_reg),3);
        bufp->chgCData(oldp+395,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_size_next),3);
        bufp->chgCData(oldp+396,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+397,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_burst_next),2);
        bufp->chgCData(oldp+398,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo[0]),8);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_id_fifo[1]),8);
        bufp->chgBit(oldp+400,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_wr_ptr));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_rd_ptr));
        bufp->chgCData(oldp+402,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_count),2);
        bufp->chgBit(oldp+403,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_push));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__b_pop));
        bufp->chgCData(oldp+405,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgBit(oldp+406,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_wready_next));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+409,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+410,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_next));
        bufp->chgCData(oldp+412,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+413,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+414,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgSData(oldp+416,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_write__DOT__could_multi_bursts__DOT__awaddr_buf 
                                             >> 2U))),14);
        bufp->chgSData(oldp+417,((0x3fffU & (vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi4_tester_inst__DOT__axi4_tester_data_in_out_V_m_axi_U__DOT__bus_read__DOT__could_multi_bursts__DOT__araddr_buf 
                                             >> 2U))),14);
        bufp->chgSData(oldp+418,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+419,((0x3fffU & ((IData)(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__write_addr_reg) 
                                             >> 2U))),14);
        bufp->chgIData(oldp+420,(vlSymsp->TOP__tb_axi4_ram_burst.__PVT__axi_ram_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+421,(vlSelfRef.clk));
    bufp->chgBit(oldp+422,(vlSelfRef.reset));
    bufp->chgBit(oldp+423,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V));
    bufp->chgBit(oldp+424,(vlSymsp->TOP__tb_axi4_ram_burst.correct_V_ap_vld));
    bufp->chgBit(oldp+425,((1U & (~ (IData)(vlSelfRef.reset)))));
}

void Vtb_axi4_ram_burst___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
