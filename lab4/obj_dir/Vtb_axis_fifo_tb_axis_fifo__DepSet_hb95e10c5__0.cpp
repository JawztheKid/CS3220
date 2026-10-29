// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_INLINE_OPT void Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___ico_sequent__TOP__tb_axis_fifo__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__axis_fifo_inst__DOT__write = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
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
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg;
    if ((1U & ((IData)(vlSelfRef.dout_0_rsc_rdy) | 
               (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg))))) {
        vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output = 1U;
        if ((1U & (~ (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__empty)))) {
            vlSelfRef.__PVT__axis_fifo_inst__DOT__read = 1U;
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg)));
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next 
                = (0x1fU & ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next) 
                            ^ VL_SHIFTR_III(5,5,32, (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_next), 1U)));
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
                = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
            vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 1U;
        } else {
            vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
                = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
            vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = 0U;
        }
    }
}
