// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_tests__Syms.h"


void Vtb_axi4_ram_tests___024root__trace_chg_0_sub_0(Vtb_axi4_ram_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_tests___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_chg_0\n"); );
    // Init
    Vtb_axi4_ram_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_tests___024root*>(voidSelf);
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi4_ram_tests___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_tests___024root__trace_chg_0_sub_0(Vtb_axi4_ram_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid),8);
        bufp->chgSData(oldp+1,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr),16);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize),3);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst),2);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache),4);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot),3);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+9,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast));
        bufp->chgBit(oldp+12,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+13,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready));
        bufp->chgCData(oldp+14,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid),8);
        bufp->chgSData(oldp+15,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr),16);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize),3);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst),2);
        bufp->chgBit(oldp+19,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock));
        bufp->chgCData(oldp+20,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache),4);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot),3);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_axi4_ram_tests__DOT__force_rst));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_axi4_ram_tests__DOT__errors),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail),32);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_axi4_ram_tests__DOT__last_bid),8);
        bufp->chgIData(oldp+29,(vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata),32);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_axi4_ram_tests__DOT__last_rid),8);
        bufp->chgBit(oldp+31,(vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast));
        bufp->chgCData(oldp+32,(vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp),2);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp),2);
        bufp->chgBit(oldp+34,(vlSelfRef.tb_axi4_ram_tests__DOT__mon_en));
        bufp->chgIData(oldp+35,(vlSelfRef.tb_axi4_ram_tests__DOT__w),32);
        bufp->chgIData(oldp+36,(vlSelfRef.tb_axi4_ram_tests__DOT__bcount),32);
        bufp->chgIData(oldp+37,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DX),32);
        bufp->chgIData(oldp+38,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DY),32);
        bufp->chgIData(oldp+39,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_data),32);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last));
        bufp->chgBit(oldp+41,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__got));
        bufp->chgIData(oldp+42,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__drain),32);
        bufp->chgIData(oldp+44,(vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D1),32);
        bufp->chgIData(oldp+45,(vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D2),32);
        bufp->chgIData(oldp+46,(vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount),32);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cw),32);
        bufp->chgSData(oldp+48,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA),16);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_data),32);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp),2);
        bufp->chgBit(oldp+51,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_last));
        bufp->chgBit(oldp+52,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__got));
        bufp->chgIData(oldp+53,(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw),32);
        bufp->chgSData(oldp+54,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr) 
                                            >> 2U))),14);
        bufp->chgSData(oldp+55,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr) 
                                            >> 2U))),14);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+56,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next));
        bufp->chgCData(oldp+57,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next),2);
        bufp->chgBit(oldp+58,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en));
        bufp->chgBit(oldp+59,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en));
        bufp->chgCData(oldp+60,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next),8);
        bufp->chgSData(oldp+61,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next),16);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next),3);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next),2);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next),8);
        bufp->chgSData(oldp+66,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next),16);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next),3);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next),2);
        bufp->chgBit(oldp+70,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push));
        bufp->chgBit(oldp+71,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop));
        bufp->chgBit(oldp+72,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+73,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+74,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+75,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+76,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next));
        bufp->chgBit(oldp+77,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next));
        bufp->chgCData(oldp+78,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next),2);
        bufp->chgBit(oldp+79,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en));
        bufp->chgCData(oldp+80,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next),8);
        bufp->chgSData(oldp+81,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next),16);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next),3);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next),2);
        bufp->chgCData(oldp+85,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next),8);
        bufp->chgSData(oldp+86,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next),16);
        bufp->chgCData(oldp+87,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next),8);
        bufp->chgCData(oldp+88,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next),3);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next),2);
        bufp->chgBit(oldp+90,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push));
        bufp->chgBit(oldp+91,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+92,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+93,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+94,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+95,(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid),8);
        bufp->chgBit(oldp+96,((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count))));
        bufp->chgBit(oldp+97,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+98,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg),32);
        bufp->chgCData(oldp+100,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+101,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+102,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg));
        bufp->chgCData(oldp+103,(((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count))
                                   ? vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo
                                  [vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_rd_ptr]
                                   : 0U)),8);
        bufp->chgBit(oldp+104,((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count))));
        bufp->chgCData(oldp+105,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgCData(oldp+107,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgBit(oldp+108,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+109,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgBit(oldp+110,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+111,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg));
        bufp->chgBit(oldp+112,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg));
        bufp->chgBit(oldp+113,(vlSelfRef.tb_axi4_ram_tests__DOT__stab_fail));
        bufp->chgBit(oldp+114,(vlSelfRef.tb_axi4_ram_tests__DOT__mon_r_armed));
        bufp->chgBit(oldp+115,(vlSelfRef.tb_axi4_ram_tests__DOT__mon_b_armed));
        bufp->chgIData(oldp+116,(vlSelfRef.tb_axi4_ram_tests__DOT__mon_rdata),32);
        bufp->chgCData(oldp+117,(vlSelfRef.tb_axi4_ram_tests__DOT__mon_bid),8);
        bufp->chgBit(oldp+118,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg));
        bufp->chgCData(oldp+119,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg),2);
        bufp->chgCData(oldp+120,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg),8);
        bufp->chgSData(oldp+121,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+122,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg),8);
        bufp->chgCData(oldp+123,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg),3);
        bufp->chgCData(oldp+124,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+125,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg),8);
        bufp->chgSData(oldp+126,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+127,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg),8);
        bufp->chgCData(oldp+128,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg),3);
        bufp->chgCData(oldp+129,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+130,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo[0]),8);
        bufp->chgCData(oldp+131,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo[1]),8);
        bufp->chgBit(oldp+132,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_wr_ptr));
        bufp->chgBit(oldp+133,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_rd_ptr));
        bufp->chgCData(oldp+134,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count),2);
        bufp->chgCData(oldp+135,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgBit(oldp+136,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+137,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+138,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+139,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+140,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgSData(oldp+141,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+142,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                                             >> 2U))),14);
        bufp->chgBit(oldp+143,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg));
        bufp->chgCData(oldp+144,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg),2);
        bufp->chgBit(oldp+145,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_rd_en));
        bufp->chgCData(oldp+146,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg),8);
        bufp->chgSData(oldp+147,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+148,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg),8);
        bufp->chgCData(oldp+149,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg),3);
        bufp->chgCData(oldp+150,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+151,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg),8);
        bufp->chgSData(oldp+152,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+153,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg),8);
        bufp->chgCData(oldp+154,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg),3);
        bufp->chgCData(oldp+155,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+156,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo[0]),8);
        bufp->chgCData(oldp+157,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo[1]),8);
        bufp->chgBit(oldp+158,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_wr_ptr));
        bufp->chgBit(oldp+159,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_rd_ptr));
        bufp->chgCData(oldp+160,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count),2);
        bufp->chgCData(oldp+161,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+162,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+163,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_reg),8);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_next),8);
        bufp->chgIData(oldp+165,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_reg),32);
        bufp->chgBit(oldp+166,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+167,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+168,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+169,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_next));
        bufp->chgSData(oldp+170,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+171,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                                             >> 2U))),14);
    }
    bufp->chgBit(oldp+172,(vlSelfRef.clk));
    bufp->chgBit(oldp+173,(vlSelfRef.reset));
    bufp->chgBit(oldp+174,(vlSelfRef.done));
    bufp->chgBit(oldp+175,(vlSelfRef.edge_pass));
    bufp->chgBit(oldp+176,(vlSelfRef.corner_pass));
    bufp->chgBit(oldp+177,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst));
    bufp->chgIData(oldp+178,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__i),32);
    bufp->chgIData(oldp+179,(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__j),32);
    bufp->chgIData(oldp+180,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__i),32);
    bufp->chgIData(oldp+181,(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__j),32);
}

void Vtb_axi4_ram_tests___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi4_ram_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_tests___024root*>(voidSelf);
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
