// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsystolic_array__Syms.h"


void Vsystolic_array___024root__trace_chg_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsystolic_array___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_0\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsystolic_array___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsystolic_array___024root__trace_chg_0_sub_0(Vsystolic_array___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.systolic_array__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.systolic_array__DOT__rst_accumulator_rdy));
        bufp->chgBit(oldp+2,(vlSelfRef.systolic_array__DOT__stream_out_rdy));
        bufp->chgSData(oldp+3,(vlSelfRef.systolic_array__DOT__row_data_in),16);
        bufp->chgSData(oldp+4,(vlSelfRef.systolic_array__DOT__col_data_in),16);
        bufp->chgCData(oldp+5,((((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg) 
                                 << 1U) | (1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                                 >> 3U)))),2);
        bufp->chgCData(oldp+6,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg),2);
        bufp->chgCData(oldp+7,(vlSelfRef.systolic_array__DOT__row_00_01),8);
        bufp->chgCData(oldp+8,(vlSelfRef.systolic_array__DOT__row_10_11),8);
        bufp->chgCData(oldp+9,(vlSelfRef.systolic_array__DOT__col_00_10),8);
        bufp->chgCData(oldp+10,(vlSelfRef.systolic_array__DOT__col_01_11),8);
        bufp->chgBit(oldp+11,(vlSelfRef.systolic_array__DOT__rst_00_10));
        bufp->chgBit(oldp+12,(vlSelfRef.systolic_array__DOT__rst_01_11));
        bufp->chgBit(oldp+13,(vlSelfRef.systolic_array__DOT__so_00_10));
        bufp->chgBit(oldp+14,(vlSelfRef.systolic_array__DOT__so_01_11));
        bufp->chgCData(oldp+15,(vlSelfRef.systolic_array__DOT__psum_00),8);
        bufp->chgCData(oldp+16,(vlSelfRef.systolic_array__DOT__psum_01),8);
        bufp->chgCData(oldp+17,(vlSelfRef.systolic_array__DOT__psum_10),8);
        bufp->chgCData(oldp+18,(vlSelfRef.systolic_array__DOT__psum_11),8);
        bufp->chgCData(oldp+19,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay),4);
        bufp->chgCData(oldp+20,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_delay),6);
        bufp->chgBit(oldp+21,(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg));
        bufp->chgBit(oldp+22,((1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay) 
                                     >> 3U))));
        bufp->chgBit(oldp+23,((1U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg))));
        bufp->chgCData(oldp+24,((0xffU & (IData)(vlSelfRef.systolic_array__DOT__row_data_in))),8);
        bufp->chgCData(oldp+25,((0xffU & (IData)(vlSelfRef.systolic_array__DOT__col_data_in))),8);
        bufp->chgCData(oldp+26,(vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[0]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.systolic_array__DOT__mac_00__DOT__psum[1]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.systolic_array__DOT__mac_00__DOT__psum_reg),8);
        bufp->chgCData(oldp+29,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mult_out),8);
        bufp->chgCData(oldp+30,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+31,(vlSelfRef.systolic_array__DOT__mac_00__DOT__multiplier_done));
        bufp->chgCData(oldp+32,(((8U & (IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_delay))
                                  ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+33,(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+34,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+35,(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter));
        bufp->chgBit(oldp+36,(vlSelfRef.systolic_array__DOT__mac_00__DOT__bypass_counter));
        bufp->chgBit(oldp+37,(vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_started));
        bufp->chgBit(oldp+38,(vlSelfRef.systolic_array__DOT__mac_00__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+39,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_00__DOT__multiplier_done))));
        bufp->chgBit(oldp+40,(vlSelfRef.systolic_array__DOT__mac_00__DOT__add__DOT__en_reg));
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelfRef.systolic_array__DOT__rst)))));
        bufp->chgCData(oldp+42,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+43,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+44,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+46,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+47,(vlSelfRef.systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg) 
                                     >> 1U))));
        bufp->chgCData(oldp+49,((0xffU & ((IData)(vlSelfRef.systolic_array__DOT__col_data_in) 
                                          >> 8U))),8);
        bufp->chgCData(oldp+50,(vlSelfRef.systolic_array__DOT__mac_01__DOT__row_data_out),8);
        bufp->chgCData(oldp+51,(vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[0]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.systolic_array__DOT__mac_01__DOT__psum[1]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.systolic_array__DOT__mac_01__DOT__psum_reg),8);
        bufp->chgCData(oldp+54,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mult_out),8);
        bufp->chgCData(oldp+55,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+56,(vlSelfRef.systolic_array__DOT__mac_01__DOT__multiplier_done));
        bufp->chgCData(oldp+57,(((IData)(vlSelfRef.systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg)
                                  ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+58,(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+59,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+60,(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter));
        bufp->chgBit(oldp+61,(vlSelfRef.systolic_array__DOT__mac_01__DOT__bypass_counter));
        bufp->chgBit(oldp+62,(vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_started));
        bufp->chgBit(oldp+63,(vlSelfRef.systolic_array__DOT__mac_01__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+64,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_01__DOT__multiplier_done))));
        bufp->chgBit(oldp+65,(vlSelfRef.systolic_array__DOT__mac_01__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+66,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+67,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+68,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+70,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+71,(vlSelfRef.systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgCData(oldp+72,((0xffU & ((IData)(vlSelfRef.systolic_array__DOT__row_data_in) 
                                          >> 8U))),8);
        bufp->chgCData(oldp+73,(vlSelfRef.systolic_array__DOT__mac_10__DOT__col_data_out),8);
        bufp->chgBit(oldp+74,(vlSelfRef.systolic_array__DOT__mac_10__DOT__rst_accumulator_out));
        bufp->chgBit(oldp+75,(vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_out_rdy_out));
        bufp->chgCData(oldp+76,(vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[0]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.systolic_array__DOT__mac_10__DOT__psum[1]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.systolic_array__DOT__mac_10__DOT__psum_reg),8);
        bufp->chgCData(oldp+79,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mult_out),8);
        bufp->chgCData(oldp+80,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                [1U]),8);
        bufp->chgBit(oldp+81,(vlSelfRef.systolic_array__DOT__mac_10__DOT__multiplier_done));
        bufp->chgCData(oldp+82,(((IData)(vlSelfRef.systolic_array__DOT__rst_00_10)
                                  ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+83,(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+84,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+85,(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter));
        bufp->chgBit(oldp+86,(vlSelfRef.systolic_array__DOT__mac_10__DOT__bypass_counter));
        bufp->chgBit(oldp+87,(vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_started));
        bufp->chgBit(oldp+88,(vlSelfRef.systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+89,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                               & (IData)(vlSelfRef.systolic_array__DOT__mac_10__DOT__multiplier_done))));
        bufp->chgBit(oldp+90,(vlSelfRef.systolic_array__DOT__mac_10__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+91,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+92,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+93,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+94,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+95,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+96,(vlSelfRef.systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
        bufp->chgCData(oldp+97,(vlSelfRef.systolic_array__DOT__mac_11__DOT__row_data_out),8);
        bufp->chgCData(oldp+98,(vlSelfRef.systolic_array__DOT__mac_11__DOT__col_data_out),8);
        bufp->chgBit(oldp+99,(vlSelfRef.systolic_array__DOT__mac_11__DOT__rst_accumulator_out));
        bufp->chgBit(oldp+100,(vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_out_rdy_out));
        bufp->chgCData(oldp+101,(vlSelfRef.systolic_array__DOT__mac_11__DOT__psum[0]),8);
        bufp->chgCData(oldp+102,(vlSelfRef.systolic_array__DOT__mac_11__DOT__psum[1]),8);
        bufp->chgCData(oldp+103,(vlSelfRef.systolic_array__DOT__mac_11__DOT__psum_reg),8);
        bufp->chgCData(oldp+104,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mult_out),8);
        bufp->chgCData(oldp+105,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed
                                 [1U]),8);
        bufp->chgBit(oldp+106,(vlSelfRef.systolic_array__DOT__mac_11__DOT__multiplier_done));
        bufp->chgCData(oldp+107,(((IData)(vlSelfRef.systolic_array__DOT__rst_01_11)
                                   ? 0U : (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add))),8);
        bufp->chgCData(oldp+108,(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__add),8);
        bufp->chgBit(oldp+109,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__en_reg))));
        bufp->chgBit(oldp+110,(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter));
        bufp->chgBit(oldp+111,(vlSelfRef.systolic_array__DOT__mac_11__DOT__bypass_counter));
        bufp->chgBit(oldp+112,(vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_started));
        bufp->chgBit(oldp+113,(vlSelfRef.systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg));
        bufp->chgBit(oldp+114,(((~ (IData)(vlSelfRef.systolic_array__DOT__rst)) 
                                & (IData)(vlSelfRef.systolic_array__DOT__mac_11__DOT__multiplier_done))));
        bufp->chgBit(oldp+115,(vlSelfRef.systolic_array__DOT__mac_11__DOT__add__DOT__en_reg));
        bufp->chgCData(oldp+116,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__mult),8);
        bufp->chgBit(oldp+117,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg));
        bufp->chgCData(oldp+118,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[0]),8);
        bufp->chgCData(oldp+119,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed[1]),8);
        bufp->chgBit(oldp+120,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[0]));
        bufp->chgBit(oldp+121,(vlSelfRef.systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed[1]));
    }
    bufp->chgBit(oldp+122,(vlSelfRef.clk));
    bufp->chgBit(oldp+123,(vlSelfRef.rst_in));
    bufp->chgBit(oldp+124,(vlSelfRef.rst_accumulator_rdy_in));
    bufp->chgBit(oldp+125,(vlSelfRef.stream_out_rdy_in_in));
    bufp->chgSData(oldp+126,(vlSelfRef.row_data_in_in),16);
    bufp->chgSData(oldp+127,(vlSelfRef.col_data_in_in),16);
    bufp->chgSData(oldp+128,(vlSelfRef.row_data_out),16);
}

void Vsystolic_array___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsystolic_array___024root__trace_cleanup\n"); );
    // Init
    Vsystolic_array___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsystolic_array___024root*>(voidSelf);
    Vsystolic_array__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
