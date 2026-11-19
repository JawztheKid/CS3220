// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst_tests.h for the primary calling header

#include "Vtb_axi4_ram_burst_tests__pch.h"
#include "Vtb_axi4_ram_burst_tests___024root.h"

VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP(Vtb_axi4_ram_burst_tests___024root* vlSelf);
VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);

void Vtb_axi4_ram_burst_tests___024root___eval_initial(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP(vlSelf);
    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);
VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__1(Vtb_axi4_ram_burst_tests___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__a;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__a = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__bt = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__size;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__size = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__data0 = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__strb = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__data0;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__data0 = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0;
    // Body
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.edge_pass = 0U;
    vlSelfRef.corner_pass = 0U;
    co_await vlSelfRef.__VtrigSched_ha5d2ec66__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reset)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         519);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         520);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         520);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         520);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         520);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         520);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("=========================================================\nPART A: BURST EDGE tests (EXPECT ALL TO PASS)\n=========================================================\n[BE1] INCR burst len=4 round-trip (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__data0 = 0x10000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__base = 0x400U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__1__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__len = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__base = 0x400U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__2__g);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    if (VL_UNLIKELY((5U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        VL_WRITEF_NX("  FAIL: got %0d beats, expected 5\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    } else {
        if (VL_UNLIKELY((0x10000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U]))) {
            VL_WRITEF_NX("  FAIL: beat 0 = 0x%0x expected 0x10000000\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 1U;
        if (VL_UNLIKELY((0x10000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [1U]))) {
            VL_WRITEF_NX("  FAIL: beat 1 = 0x%0x expected 0x10000001\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [1U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 2U;
        if (VL_UNLIKELY((0x10000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [2U]))) {
            VL_WRITEF_NX("  FAIL: beat 2 = 0x%0x expected 0x10000002\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [2U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 3U;
        if (VL_UNLIKELY((0x10000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [3U]))) {
            VL_WRITEF_NX("  FAIL: beat 3 = 0x%0x expected 0x10000003\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [3U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 4U;
        if (VL_UNLIKELY((0x10000004U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [4U]))) {
            VL_WRITEF_NX("  FAIL: beat 4 = 0x%0x expected 0x10000004\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [4U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 5U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: 5 beats in order\n",0);
    }
    VL_WRITEF_NX("[BE2] long INCR burst, 32 beats (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__data0 = 0x20000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len = 0x1fU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__base = 0x500U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__4__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__len = 0x1fU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__base = 0x500U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__5__g);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    if (VL_UNLIKELY((0x20U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        VL_WRITEF_NX("  FAIL: got %0d beats, expected 32\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    } else {
        if (VL_UNLIKELY((0x20000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U]))) {
            VL_WRITEF_NX("  FAIL: beat 0 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 1U;
        if (VL_UNLIKELY((0x20000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [1U]))) {
            VL_WRITEF_NX("  FAIL: beat 1 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [1U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 2U;
        if (VL_UNLIKELY((0x20000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [2U]))) {
            VL_WRITEF_NX("  FAIL: beat 2 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [2U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 3U;
        if (VL_UNLIKELY((0x20000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [3U]))) {
            VL_WRITEF_NX("  FAIL: beat 3 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [3U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 4U;
        if (VL_UNLIKELY((0x20000004U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [4U]))) {
            VL_WRITEF_NX("  FAIL: beat 4 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [4U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 5U;
        if (VL_UNLIKELY((0x20000005U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [5U]))) {
            VL_WRITEF_NX("  FAIL: beat 5 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [5U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 6U;
        if (VL_UNLIKELY((0x20000006U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [6U]))) {
            VL_WRITEF_NX("  FAIL: beat 6 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [6U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 7U;
        if (VL_UNLIKELY((0x20000007U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [7U]))) {
            VL_WRITEF_NX("  FAIL: beat 7 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [7U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 8U;
        if (VL_UNLIKELY((0x20000008U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [8U]))) {
            VL_WRITEF_NX("  FAIL: beat 8 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [8U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 9U;
        if (VL_UNLIKELY((0x20000009U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [9U]))) {
            VL_WRITEF_NX("  FAIL: beat 9 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [9U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xaU;
        if (VL_UNLIKELY((0x2000000aU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xaU]))) {
            VL_WRITEF_NX("  FAIL: beat 10 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xaU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xbU;
        if (VL_UNLIKELY((0x2000000bU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xbU]))) {
            VL_WRITEF_NX("  FAIL: beat 11 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xbU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xcU;
        if (VL_UNLIKELY((0x2000000cU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xcU]))) {
            VL_WRITEF_NX("  FAIL: beat 12 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xcU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xdU;
        if (VL_UNLIKELY((0x2000000dU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xdU]))) {
            VL_WRITEF_NX("  FAIL: beat 13 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xdU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xeU;
        if (VL_UNLIKELY((0x2000000eU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xeU]))) {
            VL_WRITEF_NX("  FAIL: beat 14 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xeU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0xfU;
        if (VL_UNLIKELY((0x2000000fU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xfU]))) {
            VL_WRITEF_NX("  FAIL: beat 15 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0xfU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x10U;
        if (VL_UNLIKELY((0x20000010U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x10U]))) {
            VL_WRITEF_NX("  FAIL: beat 16 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x10U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x11U;
        if (VL_UNLIKELY((0x20000011U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x11U]))) {
            VL_WRITEF_NX("  FAIL: beat 17 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x11U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x12U;
        if (VL_UNLIKELY((0x20000012U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x12U]))) {
            VL_WRITEF_NX("  FAIL: beat 18 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x12U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x13U;
        if (VL_UNLIKELY((0x20000013U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x13U]))) {
            VL_WRITEF_NX("  FAIL: beat 19 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x13U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x14U;
        if (VL_UNLIKELY((0x20000014U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x14U]))) {
            VL_WRITEF_NX("  FAIL: beat 20 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x14U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x15U;
        if (VL_UNLIKELY((0x20000015U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x15U]))) {
            VL_WRITEF_NX("  FAIL: beat 21 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x15U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x16U;
        if (VL_UNLIKELY((0x20000016U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x16U]))) {
            VL_WRITEF_NX("  FAIL: beat 22 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x16U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x17U;
        if (VL_UNLIKELY((0x20000017U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x17U]))) {
            VL_WRITEF_NX("  FAIL: beat 23 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x17U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x18U;
        if (VL_UNLIKELY((0x20000018U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x18U]))) {
            VL_WRITEF_NX("  FAIL: beat 24 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x18U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x19U;
        if (VL_UNLIKELY((0x20000019U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x19U]))) {
            VL_WRITEF_NX("  FAIL: beat 25 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x19U]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1aU;
        if (VL_UNLIKELY((0x2000001aU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1aU]))) {
            VL_WRITEF_NX("  FAIL: beat 26 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1aU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1bU;
        if (VL_UNLIKELY((0x2000001bU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1bU]))) {
            VL_WRITEF_NX("  FAIL: beat 27 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1bU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1cU;
        if (VL_UNLIKELY((0x2000001cU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1cU]))) {
            VL_WRITEF_NX("  FAIL: beat 28 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1cU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1dU;
        if (VL_UNLIKELY((0x2000001dU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1dU]))) {
            VL_WRITEF_NX("  FAIL: beat 29 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1dU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1eU;
        if (VL_UNLIKELY((0x2000001eU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1eU]))) {
            VL_WRITEF_NX("  FAIL: beat 30 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1eU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x1fU;
        if (VL_UNLIKELY((0x2000001fU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1fU]))) {
            VL_WRITEF_NX("  FAIL: beat 31 = 0x%0x\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0x1fU]);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__i = 0x20U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: 32 beats correct\n",0);
    }
    VL_WRITEF_NX("[BE3] narrow burst awsize=1 (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr = 0x600U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__7__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr = 0x604U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__8__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__data0 = 0xaa01U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base = 0x600U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         446);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             450);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AWnarrow 0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         452);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len))) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__a 
            = (0xffffU & ((IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__base) 
                          + VL_SHIFTL_III(16,32,32, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i, 1U)));
        if ((2U & (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__a))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                = (((IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__data0) 
                    + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i) 
                   << 0x10U);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xcU;
        } else {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                = ((IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__data0) 
                   + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 3U;
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 461);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             462);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             465);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_narrow__9__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         466);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr = 0x600U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tlast = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__10__last_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    if (VL_UNLIKELY((0xaa02aa01U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp))) {
        VL_WRITEF_NX("  FAIL: word0 = 0x%0x expected 0xAA02AA01\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr = 0x604U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tlast = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__11__last_out;
    if (VL_UNLIKELY((0xaa04aa03U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp))) {
        VL_WRITEF_NX("  FAIL: word1 = 0x%0x expected 0xAA04AA03\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: narrow beats landed lane-correct\n",0);
    }
    VL_WRITEF_NX("[BE4] unaligned INCR start address (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__data0 = 0x30000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__base = 0x702U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__13__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__len = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__base = 0x700U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__14__g);
    }
    if ((3U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)) {
        VL_WRITEF_NX("  FAIL: got %0d beats, expected 3\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: unaligned burst completed with 3 beats\n",0);
    }
    VL_WRITEF_NX("[BE5] rlast on exactly the final beat (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__data0 = 0x40000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len = 7U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__base = 0x800U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__16__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__len = 7U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__base = 0x800U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         477);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             481);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR 0x%0x\n",0,16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         483);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
            if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
            }
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             490);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__17__g);
    }
    if (VL_UNLIKELY(((8U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                     | (1U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count)))) {
        VL_WRITEF_NX("  FAIL: len=7 gave %0d beats, %0d rlast\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__len = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__base = 0x800U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         477);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             481);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR 0x%0x\n",0,16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         483);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
            if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
            }
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             490);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__18__g);
    }
    if (VL_UNLIKELY(((1U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                     | (1U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count)))) {
        VL_WRITEF_NX("  FAIL: len=0 gave %0d beats, %0d rlast\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__len = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__base = 0x800U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         477);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             481);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR 0x%0x\n",0,16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         483);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
            if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
            }
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             490);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst_count__19__g);
    }
    if (VL_UNLIKELY(((2U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                     | (1U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count)))) {
        VL_WRITEF_NX("  FAIL: len=1 gave %0d beats, %0d rlast\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rlast_count);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: one rlast, on the last beat, at every length\n",0);
    }
    VL_WRITEF_NX("[BE6] partial wstrb across a burst (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__data = 0xffffffffU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr = 0x900U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__21__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__data = 0xffffffffU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr = 0x904U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__22__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__strb = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__data0 = 0x1234U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__size = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__base = 0x900U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         419);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__size;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             423);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AWcfg 0x%0x\n",0,16,
                     __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         425);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
            = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__strb;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 428);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             429);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             432);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst_cfg__23__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         433);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr = 0x900U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tlast = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__24__last_out;
    if (VL_UNLIKELY((0xffff1234U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp))) {
        VL_WRITEF_NX("  FAIL: word0 = 0x%0x expected 0xFFFF1234\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr = 0x904U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__tlast = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__25__last_out;
    if (VL_UNLIKELY((0xffff1235U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp))) {
        VL_WRITEF_NX("  FAIL: word1 = 0x%0x expected 0xFFFF1235\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__tmp);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: masked lanes preserved across the burst\n",0);
    }
    VL_WRITEF_NX("[BE7] back-to-back bursts (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__data0 = 0x50000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__base = 0xa00U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__27__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__data0 = 0x60000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__base = 0xa10U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__28__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__base = 0xa00U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__29__g);
    }
    if (VL_UNLIKELY((((4U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                      | (0x50000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U])) | (0x50000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                   [3U])))) {
        VL_WRITEF_NX("  FAIL: first burst beats=%0d [0]=0x%0x [3]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__base = 0xa10U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__30__g);
    }
    if (VL_UNLIKELY((((4U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                      | (0x60000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                         [0U])) | (0x60000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                   [3U])))) {
        VL_WRITEF_NX("  FAIL: second burst beats=%0d [0]=0x%0x [3]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: both bursts intact\n",0);
    }
    VL_WRITEF_NX("[BE8] burst flush against the 4KB boundary (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__data0 = 0x70000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__base = 0xff0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__32__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__base = 0xff0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__33__g);
    }
    if (VL_UNLIKELY(((4U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                     | (0x70000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                        [3U])))) {
        VL_WRITEF_NX("  FAIL: pre-boundary burst beats=%0d [3]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__data0 = 0x80000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__base = 0x1000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__34__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__base = 0x1000U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__35__g);
    }
    if (VL_UNLIKELY(((4U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                     | (0x80000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                        [0U])))) {
        VL_WRITEF_NX("  FAIL: post-boundary burst beats=%0d [0]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__k = 1U;
    }
    if (VL_LIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__k))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: both sides of the boundary intact\n",0);
    }
    VL_WRITEF_NX("[SUMMARY A] burst edge fails=%0d, infra=%0d\n",0,
                 32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail,
                 32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    if (((0U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail) 
         & (0U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors))) {
        VL_WRITEF_NX("[RESULT A] ALL burst edge tests PASSED\n",0);
        vlSelfRef.edge_pass = 1U;
    } else {
        VL_WRITEF_NX("[RESULT A] burst edge tests FAILED: %0d edge, %0d infra\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__edge_fail,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        vlSelfRef.edge_pass = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("=========================================================\nPART B: BURST CORNER cases (a correct implementation passes all)\n=========================================================\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 1] FIXED burst write addressing, burst type 0\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr = 0x200U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr = 0x204U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr = 0x208U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr = 0x20cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__38__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__data0 = 0x40000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__bt = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__base = 0x200U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__39__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr = 0x200U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__40__last_out;
    if ((0x40000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr = 0x204U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__41__last_out;
    if ((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc = 0U;
    }
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc) {
        VL_WRITEF_NX("  PASS: FIXED write holds address\n",0);
    } else {
        VL_WRITEF_NX("  FAIL: FIXED write walked the address (0x200 should be D3, 0x204 untouched)\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 2] FIXED burst read addressing, burst type 0\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[0U] = 0x50000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [0U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr = 0x240U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[1U] = 0x50000001U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [1U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr = 0x244U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[2U] = 0x50000002U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [2U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr = 0x248U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[3U] = 0x50000003U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [3U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr = 0x24cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__43__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__bt = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__base = 0x240U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__44__g);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc 
        = ((4U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
           & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last));
    if ((vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
         [0U] != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
         [0U])) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 1U;
    if ((vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
         [1U] != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
         [0U])) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 2U;
    if ((vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
         [2U] != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
         [0U])) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 3U;
    if ((vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
         [3U] != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
         [0U])) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__k = 4U;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc) {
        VL_WRITEF_NX("  PASS: FIXED read holds address\n",0);
    } else {
        VL_WRITEF_NX("  FAIL: FIXED read beats=%0d got[%0x %0x %0x %0x] exp all 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [1U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [2U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [0U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 3] WRAP burst read addressing, burst type 2 (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[0U] = 0x60000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [0U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__k = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[1U] = 0x60000001U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [1U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__k = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[2U] = 0x60000002U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [2U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr = 8U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__k = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[3U] = 0x60000003U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [3U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr = 0xcU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__46__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__bt = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__base = 8U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__47__g);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc 
        = ((((((4U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
               & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
              & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                 [0U] == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                 [2U])) & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                           [1U] == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                           [3U])) & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                     [2U] == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                     [0U])) & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                               [3U] 
                                               == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                               [1U]));
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc) {
        VL_WRITEF_NX("  PASS: WRAP read wraps within block\n",0);
    } else {
        VL_WRITEF_NX("  FAIL: WRAP read beats=%0d got[%0x %0x %0x %0x] exp[%0x %0x %0x %0x]\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [1U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [2U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [2U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [3U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [1U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 4] WRAP burst write addressing, burst type 2 (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr = 8U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr = 0xcU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__49__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__data0 = 0x70000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__bt = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__base = 8U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__50__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__51__last_out;
    if ((0x70000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr = 4U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__52__last_out;
    if ((0x70000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr = 8U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__53__last_out;
    if ((0x70000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr = 0xcU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__54__last_out;
    if ((0x70000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc = 0U;
    }
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc) {
        VL_WRITEF_NX("  PASS: WRAP write wraps within block\n",0);
    } else {
        VL_WRITEF_NX("  FAIL: WRAP write did not wrap (0x0000 should hold D2=0x70000002)\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX = 0xaaaa1111U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY = 0x5555eeeeU;
    VL_WRITEF_NX("[BURST 5] R-channel backpressure\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr = 0x40U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__56__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr = 0x44U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__57__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr = 0x40U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__58__last_out;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         789);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr = 0x44U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             793);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         794);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         796);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         796);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         796);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__got = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__1;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__1;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             799);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__w);
    }
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__got = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         801);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             805);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__got)) {
        if ((vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data 
             != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX)) {
            VL_WRITEF_NX("  FAIL: first beat data=0x%0x (expected 0x%0x)\n",0,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data,
                         32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
        } else {
            VL_WRITEF_NX("  PASS: correct data under backpressure\n",0);
        }
    } else {
        VL_WRITEF_NX("  FAIL: never received a read beat\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 6] INCR burst addressing, burst type 1\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0x300U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0x304U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0x308U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0x30cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr = 0x310U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__60__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 5U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__data0 = 0x80000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__base = 0x300U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__61__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[0U] = 0x80000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr = 0x300U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [0U]))) {
        VL_WRITEF_NX("  FAIL: INCR write mem[0x300]=0x%0x exp 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [0U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[1U] = 0x80000001U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr = 0x304U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [1U]))) {
        VL_WRITEF_NX("  FAIL: INCR write mem[0x304]=0x%0x exp 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [1U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[2U] = 0x80000002U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr = 0x308U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [2U]))) {
        VL_WRITEF_NX("  FAIL: INCR write mem[0x308]=0x%0x exp 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [2U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[3U] = 0x80000003U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr = 0x30cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__62__last_out;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [3U]))) {
        VL_WRITEF_NX("  FAIL: INCR write mem[0x30c]=0x%0x exp 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [3U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr = 0x310U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__63__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: INCR write ran past last beat, mem[0x0310]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__base = 0x300U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__64__g);
    }
    if (VL_UNLIKELY((1U & (~ ((((((4U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                                  & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
                                 & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                    [0U] == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                    [0U])) & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                              [1U] 
                                              == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                              [1U])) 
                               & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                  [2U] == vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                  [2U])) & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                                            [3U] == 
                                            vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                                            [3U])))))) {
        VL_WRITEF_NX("  FAIL: INCR read beats=%0d got[%0x %0x %0x %0x] exp[%0x %0x %0x %0x]\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [1U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [2U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat
                     [3U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [0U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [1U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [2U],32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
                     [3U]);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc)) {
        VL_WRITEF_NX("  PASS: INCR walks one word per beat on both channels\n",0);
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         210);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VL_WRITEF_NX("[BURST 7] reserved burst type 3 (liveness only, addressing unspecified)\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr = 0x380U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr = 0x384U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr = 0x388U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr = 0x38cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__66__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 4U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__data0 = 0x90000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__bt = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__base = 0x380U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__67__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__bt = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__base = 0x380U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g)) 
            & VL_GTS_III(32, 0x20U, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat[(0x1fU 
                                                           & vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)] 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             402);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__68__g);
    }
    if (VL_UNLIKELY((1U & (~ ((4U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n) 
                              & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)))))) {
        VL_WRITEF_NX("  FAIL: reserved-type read returned %0d beat(s), rlast=%0b (exp 4 beats + rlast)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n,
                     1,(IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 0U;
    while (VL_LTS_III(32, vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k, vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n)) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__data0 = 0xa0000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__base = 0x380U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         271);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             275);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  (note) burst AW did not complete addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__base);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i = 0U;
    while ((__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i 
            <= (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__data0 
               + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
            = (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i 
               == (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__len));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 280);
            vlSelfRef.__Vm_traceActivity[1U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             281);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__i);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             284);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write_burst__69__w);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         285);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0x380U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    if (VL_UNLIKELY((0xa0000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: slave not usable after reserved burst, mem[0x380]=0x%0x exp 0xa0000000\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0x384U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}
