// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo__Syms.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_INLINE_OPT void Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___nba_sequent__TOP__tb_axis_fifo__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*128:0*/ __Vdly__cycle_count_reg;
    VL_ZERO_W(129, __Vdly__cycle_count_reg);
    QData/*32:0*/ __VdlyVal__axis_fifo_inst__DOT__mem__v0;
    __VdlyVal__axis_fifo_inst__DOT__mem__v0 = 0;
    CData/*3:0*/ __VdlyDim0__axis_fifo_inst__DOT__mem__v0;
    __VdlyDim0__axis_fifo_inst__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__axis_fifo_inst__DOT__mem__v0;
    __VdlySet__axis_fifo_inst__DOT__mem__v0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_4;
    VlWide<5>/*159:0*/ __Vtemp_5;
    VlWide<5>/*159:0*/ __Vtemp_6;
    // Body
    if (VL_UNLIKELY(((0x20U == vlSelfRef.__PVT__in_0_ptr) 
                     & (0x20U == vlSelfRef.__PVT__out_0_ptr)))) {
        VL_STOP_MT("tb_axis_fifo.v", 119, "");
    }
    __Vdly__cycle_count_reg[0U] = vlSelfRef.__PVT__cycle_count_reg[0U];
    __Vdly__cycle_count_reg[1U] = vlSelfRef.__PVT__cycle_count_reg[1U];
    __Vdly__cycle_count_reg[2U] = vlSelfRef.__PVT__cycle_count_reg[2U];
    __Vdly__cycle_count_reg[3U] = vlSelfRef.__PVT__cycle_count_reg[3U];
    __Vdly__cycle_count_reg[4U] = vlSelfRef.__PVT__cycle_count_reg[4U];
    __VdlySet__axis_fifo_inst__DOT__mem__v0 = 0U;
    if (vlSymsp->TOP.reset) {
        vlSelfRef.__PVT__din_0_rsc_dat_reg = 0U;
        vlSelfRef.__PVT__in_0_ptr = 0U;
        vlSelfRef.__PVT__out_0_ptr = 0U;
    } else {
        if ((0x400U == vlSelfRef.__PVT__in_0_ptr)) {
            vlSelfRef.__PVT__in_0_ptr = 0x400U;
        } else if (((IData)(vlSelfRef.din_0_rsc_rdy) 
                    & (IData)(vlSelfRef.__PVT__din_0_rsc_vld_reg))) {
            vlSelfRef.__PVT__in_0_ptr = ((IData)(1U) 
                                         + vlSelfRef.__PVT__in_0_ptr);
            vlSelfRef.__PVT__din_0_rsc_dat_reg = vlSelfRef.__PVT__din_0_rsc_dat_all_reg
                [(0x3ffU & vlSelfRef.__PVT__in_0_ptr)];
        } else {
            vlSelfRef.__PVT__din_0_rsc_dat_reg = vlSelfRef.__PVT__din_0_rsc_dat_all_reg
                [(0x3ffU & vlSelfRef.__PVT__in_0_ptr)];
        }
        vlSelfRef.__PVT__out_0_ptr = ((0x400U == vlSelfRef.__PVT__out_0_ptr)
                                       ? 0x400U : (
                                                   ((IData)(vlSelfRef.dout_0_rsc_vld) 
                                                    & (IData)(vlSelfRef.__PVT__dout_0_rsc_rdy_reg))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + vlSelfRef.__PVT__out_0_ptr)
                                                    : vlSelfRef.__PVT__out_0_ptr));
    }
    __Vtemp_4[0U] = 1U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    __Vtemp_4[3U] = 0U;
    __Vtemp_4[4U] = 0U;
    VL_ADD_W(5, __Vtemp_5, __Vtemp_4, vlSelfRef.__PVT__cycle_count_reg);
    __Vdly__cycle_count_reg[0U] = __Vtemp_5[0U];
    __Vdly__cycle_count_reg[1U] = __Vtemp_5[1U];
    __Vdly__cycle_count_reg[2U] = __Vtemp_5[2U];
    __Vdly__cycle_count_reg[3U] = __Vtemp_5[3U];
    __Vdly__cycle_count_reg[4U] = (1U & __Vtemp_5[4U]);
    if (vlSelfRef.__PVT__axis_fifo_inst__DOT__write) {
        __VdlyVal__axis_fifo_inst__DOT__mem__v0 = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data;
        __VdlyDim0__axis_fifo_inst__DOT__mem__v0 = 
            (0xfU & (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_addr_reg));
        __VdlySet__axis_fifo_inst__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_reg;
    }
    vlSelfRef.din_0_rsc_dat = vlSelfRef.__PVT__din_0_rsc_dat_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg))) 
           && (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next));
    if (vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg = 0U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = 0U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = 0U;
    } else {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    }
    if (vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg = 0U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = 0U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = 0U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg = 0U;
    } else {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next;
    }
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg 
        = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg)
            ? 0U : (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg))) 
           && (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data 
        = ((0x100000000ULL & vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data) 
           | (IData)((IData)(vlSelfRef.__PVT__din_0_rsc_dat_reg)));
    vlSelfRef.__PVT__din_0_rsc_vld_reg = ((0x400U != vlSelfRef.__PVT__in_0_ptr) 
                                          & (~ (IData)(vlSymsp->TOP.reset)));
    __Vtemp_6[0U] = 0x200U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0U;
    __Vtemp_6[3U] = 0U;
    __Vtemp_6[4U] = 0U;
    vlSelfRef.__PVT__dout_0_rsc_rdy_reg = (((0x400U 
                                             != vlSelfRef.__PVT__out_0_ptr) 
                                            & (~ (IData)(vlSymsp->TOP.reset))) 
                                           & VL_LTE_W(5, __Vtemp_6, vlSelfRef.__PVT__cycle_count_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_addr_reg 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next;
    vlSelfRef.dout_0_rsc_dat = (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg);
    if (vlSelfRef.__PVT__axis_fifo_inst__DOT__read) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_reg 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem
            [(0xfU & (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_addr_reg))];
    }
    vlSelfRef.__PVT__cycle_count_reg[0U] = __Vdly__cycle_count_reg[0U];
    vlSelfRef.__PVT__cycle_count_reg[1U] = __Vdly__cycle_count_reg[1U];
    vlSelfRef.__PVT__cycle_count_reg[2U] = __Vdly__cycle_count_reg[2U];
    vlSelfRef.__PVT__cycle_count_reg[3U] = __Vdly__cycle_count_reg[3U];
    vlSelfRef.__PVT__cycle_count_reg[4U] = __Vdly__cycle_count_reg[4U];
    vlSelfRef.dout_0_rsc_vld = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    if (__VdlySet__axis_fifo_inst__DOT__mem__v0) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__mem[__VdlyDim0__axis_fifo_inst__DOT__mem__v0] 
            = __VdlyVal__axis_fifo_inst__DOT__mem__v0;
    }
    vlSelfRef.din_0_rsc_vld = vlSelfRef.__PVT__din_0_rsc_vld_reg;
    vlSelfRef.dout_0_rsc_rdy = vlSelfRef.__PVT__dout_0_rsc_rdy_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_addr_reg 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelfRef.din_0_rsc_rdy = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg) 
                               != ((0x18U & ((~ ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                                                 >> 3U)) 
                                             << 3U)) 
                                   | (7U & (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg))));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg 
        = ((IData)(vlSymsp->TOP.reset) || (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__empty = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg) 
                                                   == (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg 
        = ((IData)(vlSymsp->TOP.reset) || (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__write = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg;
    if (((IData)(vlSelfRef.din_0_rsc_rdy) & (IData)(vlSelfRef.din_0_rsc_vld))) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__write = 1U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg)));
        vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next 
            = (0x1fU & ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next) 
                        ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_next), 1U)));
    }
    vlSelfRef.__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    if ((1U & ((IData)(vlSelfRef.dout_0_rsc_rdy) | 
               (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg))))) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output = 1U;
        vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
            = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__empty)))) {
            vlSelfRef.__PVT__axis_fifo_inst__DOT__read = 1U;
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg)));
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                            ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next), 1U)));
            vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 1U;
        } else {
            vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 0U;
        }
    }
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg 
        = ((IData)(vlSymsp->TOP.reset) || ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg) 
                                           | (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg)));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg 
        = ((IData)(vlSymsp->TOP.reset) || ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg) 
                                           | (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg)));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg 
        = vlSymsp->TOP.reset;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg 
        = vlSymsp->TOP.reset;
}
