// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axis_fifo.h for the primary calling header

#include "Vtb_axis_fifo__pch.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___eval_static__TOP__tb_axis_fifo\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__in_0_ptr = 0U;
    vlSelfRef.__PVT__out_0_ptr = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_addr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_addr_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg = 1U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_reg = 0ULL;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg = 0ULL;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg = 0U;
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___eval_initial__TOP__tb_axis_fifo\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(false, 32, 1024, 0, std::string{"data.txt"}
                 ,  &(vlSelfRef.__PVT__din_0_rsc_dat_all_reg)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___stl_sequent__TOP__tb_axis_fifo__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.din_0_rsc_dat = vlSelfRef.__PVT__din_0_rsc_dat_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data 
        = ((0x100000000ULL & vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_write_data) 
           | (IData)((IData)(vlSelfRef.__PVT__din_0_rsc_dat_reg)));
    vlSelfRef.dout_0_rsc_vld = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelfRef.dout_0_rsc_dat = (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_data_reg);
    vlSelfRef.din_0_rsc_vld = vlSelfRef.__PVT__din_0_rsc_vld_reg;
    vlSelfRef.din_0_rsc_rdy = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg) 
                               != ((0x18U & ((~ ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg) 
                                                 >> 3U)) 
                                             << 3U)) 
                                   | (7U & (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg))));
    vlSelfRef.__PVT__axis_fifo_inst__DOT__empty = ((IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg) 
                                                   == (IData)(vlSelfRef.__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg));
    vlSelfRef.dout_0_rsc_rdy = vlSelfRef.__PVT__dout_0_rsc_rdy_reg;
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
    vlSelfRef.__PVT__axis_fifo_inst__DOT__store_output = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__read = 0U;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg;
    vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next 
        = vlSelfRef.__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg;
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

VL_ATTR_COLD void Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset(Vtb_axis_fifo_tb_axis_fifo* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axis_fifo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_axis_fifo_tb_axis_fifo___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->din_0_rsc_dat = VL_RAND_RESET_I(32);
    vlSelf->din_0_rsc_rdy = VL_RAND_RESET_I(1);
    vlSelf->din_0_rsc_vld = VL_RAND_RESET_I(1);
    vlSelf->dout_0_rsc_dat = VL_RAND_RESET_I(32);
    vlSelf->dout_0_rsc_rdy = VL_RAND_RESET_I(1);
    vlSelf->dout_0_rsc_vld = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->__PVT__din_0_rsc_dat_all_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__din_0_rsc_dat_reg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__din_0_rsc_vld_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dout_0_rsc_rdy_reg = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(129, vlSelf->__PVT__cycle_count_reg);
    vlSelf->__PVT__in_0_ptr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__out_0_ptr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__f_in_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__f_out_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_addr_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_next = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_addr_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync1_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_ptr_gray_sync2_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync1_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_ptr_gray_sync2_reg = VL_RAND_RESET_I(5);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync1_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync2_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__wr_rst_sync3_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync1_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync2_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_rst_sync3_reg = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__axis_fifo_inst__DOT__mem[__Vi0] = VL_RAND_RESET_Q(33);
    }
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_reg = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_read_data_valid_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__mem_write_data = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_data_reg = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_reg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__rd_axis_vld_next = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__read = VL_RAND_RESET_I(1);
    vlSelf->__PVT__axis_fifo_inst__DOT__store_output = VL_RAND_RESET_I(1);
}
