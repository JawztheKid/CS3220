// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_axi4_ram_burst_tests__Syms.h"


void Vtb_axi4_ram_burst_tests___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi4_ram_burst_tests___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_chg_0\n"); );
    // Init
    Vtb_axi4_ram_burst_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst_tests___024root*>(voidSelf);
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_axi4_ram_burst_tests___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi4_ram_burst_tests___024root__trace_chg_0_sub_0(Vtb_axi4_ram_burst_tests___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__k),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__i),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp),32);
        bufp->chgBit(oldp+5,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__tlast));
        bufp->chgIData(oldp+6,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__k),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd),32);
        bufp->chgBit(oldp+8,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__l));
        bufp->chgBit(oldp+9,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc));
        bufp->chgIData(oldp+10,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k),32);
        bufp->chgBit(oldp+11,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc));
        bufp->chgIData(oldp+12,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__k),32);
        bufp->chgBit(oldp+13,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc));
        bufp->chgIData(oldp+14,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__k),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd),32);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__l));
        bufp->chgBit(oldp+17,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc));
        bufp->chgIData(oldp+18,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__rd),32);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last));
        bufp->chgBit(oldp+23,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__got));
        bufp->chgBit(oldp+24,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__l));
        bufp->chgIData(oldp+25,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd),32);
        bufp->chgBit(oldp+29,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l));
        bufp->chgBit(oldp+30,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc));
        bufp->chgIData(oldp+31,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgCData(oldp+32,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid),8);
        bufp->chgSData(oldp+33,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr),16);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize),3);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst),2);
        bufp->chgBit(oldp+37,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock));
        bufp->chgCData(oldp+38,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache),4);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot),3);
        bufp->chgBit(oldp+40,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+41,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+43,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast));
        bufp->chgBit(oldp+44,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+45,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready));
        bufp->chgCData(oldp+46,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid),8);
        bufp->chgSData(oldp+47,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr),16);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize),3);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst),2);
        bufp->chgBit(oldp+51,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock));
        bufp->chgCData(oldp+52,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache),4);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot),3);
        bufp->chgBit(oldp+54,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+55,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready));
        bufp->chgBit(oldp+56,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst));
        bufp->chgIData(oldp+57,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors),32);
        bufp->chgIData(oldp+58,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail),32);
        bufp->chgBit(oldp+59,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en));
        bufp->chgIData(oldp+60,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[0]),32);
        bufp->chgIData(oldp+61,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[1]),32);
        bufp->chgIData(oldp+62,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[2]),32);
        bufp->chgIData(oldp+63,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[3]),32);
        bufp->chgIData(oldp+64,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[4]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[5]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[6]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[7]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[8]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[9]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[10]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[11]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[12]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[13]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[14]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[15]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[16]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[17]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[18]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[19]),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[20]),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[21]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[22]),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[23]),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[24]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[25]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[26]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[27]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[28]),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[29]),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[30]),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[31]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n),32);
        bufp->chgBit(oldp+93,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last));
        bufp->chgIData(oldp+94,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[0]),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[1]),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[2]),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[3]),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[4]),32);
        bufp->chgIData(oldp+99,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[5]),32);
        bufp->chgIData(oldp+100,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[6]),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[7]),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[8]),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[9]),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[10]),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[11]),32);
        bufp->chgIData(oldp+106,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[12]),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[13]),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[14]),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[15]),32);
        bufp->chgIData(oldp+110,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[16]),32);
        bufp->chgIData(oldp+111,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[17]),32);
        bufp->chgIData(oldp+112,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[18]),32);
        bufp->chgIData(oldp+113,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[19]),32);
        bufp->chgIData(oldp+114,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[20]),32);
        bufp->chgIData(oldp+115,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[21]),32);
        bufp->chgIData(oldp+116,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[22]),32);
        bufp->chgIData(oldp+117,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[23]),32);
        bufp->chgIData(oldp+118,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[24]),32);
        bufp->chgIData(oldp+119,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[25]),32);
        bufp->chgIData(oldp+120,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[26]),32);
        bufp->chgIData(oldp+121,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[27]),32);
        bufp->chgIData(oldp+122,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[28]),32);
        bufp->chgIData(oldp+123,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[29]),32);
        bufp->chgIData(oldp+124,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[30]),32);
        bufp->chgIData(oldp+125,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[31]),32);
        bufp->chgIData(oldp+126,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k),32);
        bufp->chgIData(oldp+127,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd),32);
        bufp->chgBit(oldp+128,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__l));
        bufp->chgBit(oldp+129,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc));
        bufp->chgSData(oldp+130,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+131,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr) 
                                             >> 2U))),14);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+132,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k),32);
        bufp->chgIData(oldp+133,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd),32);
        bufp->chgBit(oldp+134,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l));
        bufp->chgBit(oldp+135,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc));
        bufp->chgBit(oldp+136,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted));
        bufp->chgBit(oldp+137,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot));
        bufp->chgBit(oldp+138,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen));
        bufp->chgIData(oldp+139,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err),32);
        bufp->chgIData(oldp+140,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k),32);
        bufp->chgIData(oldp+141,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd),32);
        bufp->chgBit(oldp+142,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l));
        bufp->chgBit(oldp+143,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc));
        bufp->chgBit(oldp+144,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted));
        bufp->chgBit(oldp+145,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot));
        bufp->chgIData(oldp+146,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k),32);
        bufp->chgIData(oldp+147,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd),32);
        bufp->chgBit(oldp+148,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__l));
        bufp->chgBit(oldp+149,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc));
        bufp->chgBit(oldp+150,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U] 
                     | vlSelfRef.__Vm_traceActivity
                     [5U]))) {
        bufp->chgBit(oldp+151,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next));
        bufp->chgCData(oldp+152,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next),2);
        bufp->chgBit(oldp+153,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en));
        bufp->chgBit(oldp+154,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en));
        bufp->chgCData(oldp+155,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next),8);
        bufp->chgSData(oldp+156,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next),16);
        bufp->chgCData(oldp+157,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next),8);
        bufp->chgCData(oldp+158,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next),3);
        bufp->chgCData(oldp+159,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next),2);
        bufp->chgCData(oldp+160,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next),8);
        bufp->chgSData(oldp+161,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next),16);
        bufp->chgCData(oldp+162,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next),8);
        bufp->chgCData(oldp+163,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next),3);
        bufp->chgCData(oldp+164,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next),2);
        bufp->chgBit(oldp+165,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push));
        bufp->chgBit(oldp+166,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop));
        bufp->chgBit(oldp+167,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next));
        bufp->chgBit(oldp+168,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next));
        bufp->chgCData(oldp+169,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next),8);
        bufp->chgBit(oldp+170,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next));
        bufp->chgBit(oldp+171,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next));
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+172,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg));
        bufp->chgBit(oldp+173,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg));
        bufp->chgCData(oldp+174,(((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))
                                   ? vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo
                                  [vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr]
                                   : 0U)),8);
        bufp->chgBit(oldp+175,((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))));
        bufp->chgBit(oldp+176,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg));
        bufp->chgCData(oldp+177,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg),8);
        bufp->chgIData(oldp+178,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg),32);
        bufp->chgCData(oldp+179,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg),2);
        bufp->chgBit(oldp+180,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg));
        bufp->chgBit(oldp+181,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg));
        bufp->chgBit(oldp+182,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg));
        bufp->chgCData(oldp+183,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg),2);
        bufp->chgCData(oldp+184,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg),8);
        bufp->chgSData(oldp+185,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg),16);
        bufp->chgCData(oldp+186,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg),8);
        bufp->chgCData(oldp+187,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg),3);
        bufp->chgCData(oldp+188,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg),2);
        bufp->chgCData(oldp+189,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg),8);
        bufp->chgSData(oldp+190,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg),16);
        bufp->chgCData(oldp+191,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg),8);
        bufp->chgCData(oldp+192,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg),3);
        bufp->chgCData(oldp+193,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg),2);
        bufp->chgCData(oldp+194,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo[0]),8);
        bufp->chgCData(oldp+195,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo[1]),8);
        bufp->chgBit(oldp+196,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr));
        bufp->chgBit(oldp+197,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr));
        bufp->chgCData(oldp+198,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count),2);
        bufp->chgCData(oldp+199,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg),2);
        bufp->chgBit(oldp+200,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next));
        bufp->chgCData(oldp+201,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg),8);
        bufp->chgIData(oldp+202,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg),32);
        bufp->chgBit(oldp+203,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg));
        bufp->chgBit(oldp+204,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg));
        bufp->chgSData(oldp+205,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                             >> 2U))),14);
        bufp->chgSData(oldp+206,((0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                             >> 2U))),14);
    }
    bufp->chgBit(oldp+207,(vlSelfRef.clk));
    bufp->chgBit(oldp+208,(vlSelfRef.reset));
    bufp->chgBit(oldp+209,(vlSelfRef.done));
    bufp->chgBit(oldp+210,(vlSelfRef.edge_pass));
    bufp->chgBit(oldp+211,(vlSelfRef.corner_pass));
    bufp->chgBit(oldp+212,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst));
    bufp->chgBit(oldp+213,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight));
    bufp->chgBit(oldp+214,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase));
    bufp->chgBit(oldp+215,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding));
    bufp->chgBit(oldp+216,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol));
    bufp->chgBit(oldp+217,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol));
    bufp->chgBit(oldp+218,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol));
    bufp->chgSData(oldp+219,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr),16);
    bufp->chgIData(oldp+220,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__i),32);
    bufp->chgIData(oldp+221,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__j),32);
}

void Vtb_axi4_ram_burst_tests___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root__trace_cleanup\n"); );
    // Init
    Vtb_axi4_ram_burst_tests___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst_tests___024root*>(voidSelf);
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
