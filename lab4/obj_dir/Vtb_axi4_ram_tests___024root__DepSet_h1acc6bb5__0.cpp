// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_tests.h for the primary calling header

#include "Vtb_axi4_ram_tests__pch.h"
#include "Vtb_axi4_ram_tests___024root.h"

VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___eval_initial__TOP(Vtb_axi4_ram_tests___024root* vlSelf);
VlCoroutine Vtb_axi4_ram_tests___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_ram_tests___024root* vlSelf);

void Vtb_axi4_ram_tests___024root___eval_initial(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_ram_tests___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_axi4_ram_tests___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_INLINE_OPT VlCoroutine Vtb_axi4_ram_tests___024root___eval_initial__TOP__Vtiming__0(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__0__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__0__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__0__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__0__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__0__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__2__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__2__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__2__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__2__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__2__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__4__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__4__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__4__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__4__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__6__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__6__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__6__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__6__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__6__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__8__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__8__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__8__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__8__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__8__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__10__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__10__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__10__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__10__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__12__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__12__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__12__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__12__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__12__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__14__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__14__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__14__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__14__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__16__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__16__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__16__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__16__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__16__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__18__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__18__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__18__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__18__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__20__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__20__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__20__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__20__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__20__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__22__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__22__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__22__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__22__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__22__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__24__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__24__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__24__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__24__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__26__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__26__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__26__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__26__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__28__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__28__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__28__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__28__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__28__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__31__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__31__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__31__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__31__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__33__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__33__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__33__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__33__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__33__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__36__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__36__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__36__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__36__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__42__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__42__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__42__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__42__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__42__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__44__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__44__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__44__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__44__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__44__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__46__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__46__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__46__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__46__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__48__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__48__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__48__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__48__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__50__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__50__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__50__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__50__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__50__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__52__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__52__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__52__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__52__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__52__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__54__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__54__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__54__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__54__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__56__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__56__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__56__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__56__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__56__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__58__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__58__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__58__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__58__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__58__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__60__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__60__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__60__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__60__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__62__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__62__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__62__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__62__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__62__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__64__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__64__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__64__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__64__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write__64__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__wait_b = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__strb = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__prot = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__66__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__66__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__66__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__66__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__68__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__68__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read__68__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__68__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__id;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__size;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__size = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__lock;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__lock = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__cache;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__cache = 0;
    CData/*2:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__prot;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__prot = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w = 0;
    // Body
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__force_rst = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__mon_en = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__errors = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail = 0U;
    vlSelfRef.done = 0U;
    vlSelfRef.edge_pass = 0U;
    vlSelfRef.corner_pass = 0U;
    co_await vlSelfRef.__VtrigSched_ha5d2ec66__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge reset)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         380);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630ded__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         381);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("====================================================\nPART A: EDGE / regression tests (EXPECT ALL TO PASS)\n====================================================\n[E1] wstrb byte-lane masking (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__data = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__addr = 0x300U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__0__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__0__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__0__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__0__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__0__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__0__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__1__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__strb = 5U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__data = 0xaabbccddU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__addr = 0x300U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__2__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__2__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__2__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__2__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__2__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__2__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__3__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__4__addr = 0x300U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__4__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__4__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__4__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__5__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xbb00ddU != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0x00BB00DD\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: only strobed lanes updated\n",0);
    }
    VL_WRITEF_NX("[E2] zero-strobe write is a no-op (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__data = 0x12345678U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__addr = 0x304U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__6__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__6__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__6__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__6__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__6__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__6__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__7__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__strb = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__data = 0xffffffffU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__addr = 0x304U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__8__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__8__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__8__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__8__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__8__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__8__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__9__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__10__addr = 0x304U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__10__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__10__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__10__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__11__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x12345678U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0x12345678 (strb=0 must not write)\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: wstrb=0 modified nothing\n",0);
    }
    VL_WRITEF_NX("[E3] ID propagation bid==awid, rid==arid (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__data = 0xcafebabeU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__addr = 0x308U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__12__id = 0x3cU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__12__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__12__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__12__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__12__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__12__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__13__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__14__addr = 0x308U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__14__id = 0x5aU;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__14__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__14__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__15__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((0x3cU != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_bid)))) {
        VL_WRITEF_NX("  FAIL: bid=0x%0x expected 0x3C\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_bid);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else if ((0x5aU != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_rid))) {
        VL_WRITEF_NX("  FAIL: rid=0x%0x expected 0x5A\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_rid);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: bid/rid echoed correctly\n",0);
    }
    VL_WRITEF_NX("[E6] single outstanding B, delayed bready (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__wait_b = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__data = 0x5a5a0006U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__addr = 0x320U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__16__id = 0x77U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__16__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__16__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__16__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__16__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__16__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__17__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             434);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__w = ((IData)(1U) 
                                               + vlSelfRef.tb_axi4_ram_tests__DOT__w);
    }
    if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
        if (VL_UNLIKELY((0x77U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid)))) {
            VL_WRITEF_NX("  FAIL: bid=0x%0x expected 0x77\n",0,
                         8,vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid);
            vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
        } else {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 440);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__bcount = 0U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 1U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 2U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 3U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 4U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 5U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 6U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 7U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 8U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 9U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xaU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xbU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xcU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xdU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xeU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0xfU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x10U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x11U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x12U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x13U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x14U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x15U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x16U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x17U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x18U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x19U;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1aU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1bU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1cU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1dU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1eU;
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__bcount 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
            }
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x1fU;
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 444);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = 0x20U;
            if (VL_UNLIKELY((1U != vlSelfRef.tb_axi4_ram_tests__DOT__bcount))) {
                VL_WRITEF_NX("  FAIL: saw %0d B handshakes, expected 1\n",0,
                             32,vlSelfRef.tb_axi4_ram_tests__DOT__bcount);
                vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
                    = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
            } else {
                __Vtask_tb_axi4_ram_tests__DOT__do_read__18__addr = 0x320U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read__18__id = 0U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__prot = 0U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__cache = 3U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__lock = 0U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__size = 2U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read__18__addr;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__id 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read__18__id;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
                co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge clk)", 
                                                                     "tb_axi4_ram_tests.v", 
                                                                     320);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__id;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__size;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__lock;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__cache;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
                    = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__prot;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w = 0U;
                while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
                        & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w))) {
                    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge clk)", 
                                                                         "tb_axi4_ram_tests.v", 
                                                                         331);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w 
                        = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w);
                }
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
                    VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                                 16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
                }
                co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge clk)", 
                                                                     "tb_axi4_ram_tests.v", 
                                                                     336);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
                __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w = 0U;
                while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                        & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w))) {
                    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                         nullptr, 
                                                                         "@(negedge clk)", 
                                                                         "tb_axi4_ram_tests.v", 
                                                                         341);
                    vlSelfRef.__Vm_traceActivity[2U] = 1U;
                    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w 
                        = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__w);
                }
                if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
                        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
                        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
                        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
                } else {
                    VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                                 16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__19__addr,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                    vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
                        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
                        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
                    vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
                        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
                }
                co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(negedge clk)", 
                                                                     "tb_axi4_ram_tests.v", 
                                                                     355);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
                if ((0x5a5a0006U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
                    VL_WRITEF_NX("  FAIL: data=0x%0x expected 0x5A5A0006\n",0,
                                 32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
                    vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
                        = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
                } else {
                    VL_WRITEF_NX("  PASS: one response, correct bid, data stored\n",0);
                }
            }
        }
    } else {
        VL_WRITEF_NX("  FAIL: BVALID never asserted\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    VL_WRITEF_NX("[E8] read/write channel independence (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__data = 0x44480008U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__addr = 0x330U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__20__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__20__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__20__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__20__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__20__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__20__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__21__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__wait_b = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__data = 0x47470008U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__addr = 0x334U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__22__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__22__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__22__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__22__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__22__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__22__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__23__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__24__addr = 0x330U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__24__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__24__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__24__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__25__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((0x44480008U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata))) {
        VL_WRITEF_NX("  FAIL: read H got 0x%0x expected 0x44480008 (blocked by pending B?)\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             474);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__w = 0U;
        while (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 475);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__w = ((IData)(1U) 
                                                   + vlSelfRef.tb_axi4_ram_tests__DOT__w);
        }
        __Vtask_tb_axi4_ram_tests__DOT__do_read__26__addr = 0x334U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read__26__id = 0U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__prot = 0U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__cache = 3U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__lock = 0U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__size = 2U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read__26__addr;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__id 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read__26__id;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             320);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__id;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__size;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__lock;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__cache;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
            = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__prot;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 331);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w);
        }
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
            VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             336);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w = 0U;
        while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 341);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__w);
        }
        if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
        } else {
            VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__27__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             355);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((0x47470008U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
            VL_WRITEF_NX("  FAIL: read G got 0x%0x expected 0x47470008\n",0,
                         32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
            vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
        } else {
            VL_WRITEF_NX("  PASS: read served while write response pending\n",0);
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    VL_WRITEF_NX("[E9] narrow transfer awsize=0 (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__data = 0xffffffffU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__addr = 0x340U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__28__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__28__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__28__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__28__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__28__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__28__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__29__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__size = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__strb = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__data = 0xa500U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr = 0x341U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__30__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__31__addr = 0x340U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__31__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__31__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__31__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__32__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xffffa5ffU != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0xFFFFA5FF\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: only the addressed lane changed\n",0);
    }
    VL_WRITEF_NX("[E10] unaligned address (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__data = 0x11111111U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__addr = 0x344U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__33__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__33__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__33__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__33__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__33__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__33__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__34__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__size = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__strb = 4U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__data = 0xcc0000U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr = 0x346U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__35__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__36__addr = 0x344U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__36__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__36__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__36__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__37__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x11cc1111U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0x11CC1111\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: unaligned byte hit the right lane\n",0);
    }
    VL_WRITEF_NX("[E11] exclusive access awlock=1 (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__lock = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__data = 0xe0e00001U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr = 0x348U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__id = 0x5aU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__38__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__lock = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr = 0x348U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__id = 0x5aU;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__39__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp)) 
                     | (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp))))) {
        VL_WRITEF_NX("  FAIL: bresp=0x%0x rresp=0x%0x, expected OKAY on both\n",0,
                     2,vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp,
                     2,(IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp));
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else if ((0xe0e00001U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: locked round-trip got 0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: OKAY returned, data round-tripped\n",0);
    }
    VL_WRITEF_NX("[E12] sideband awcache/awprot/arprot (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__prot = 7U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__cache = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__data = 0xcafe0002U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr = 0x34cU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__40__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__prot = 7U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__cache = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr = 0x34cU;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__id = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__41__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0xcafe0002U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0xCAFE0002\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: sideband values ignored as expected\n",0);
    }
    VL_WRITEF_NX("[E13] same-ID ordering (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__data = 0x1111U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__addr = 0x350U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__42__id = 0x33U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__42__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__42__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__42__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__42__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__42__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__43__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY((0x33U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_bid)))) {
        VL_WRITEF_NX("  FAIL: first bid=0x%0x expected 0x33\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_bid);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__data = 0x2222U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__addr = 0x354U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__44__id = 0x33U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__44__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__44__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__44__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__44__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__44__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__45__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if (VL_UNLIKELY((0x33U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_bid)))) {
        VL_WRITEF_NX("  FAIL: second bid=0x%0x expected 0x33\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_bid);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__46__addr = 0x350U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__46__id = 0x33U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__46__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__46__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__47__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0x33U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_rid)) 
                     | (0x1111U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)))) {
        VL_WRITEF_NX("  FAIL: first read rid=0x%0x data=0x%0x\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_rid,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__48__addr = 0x354U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__48__id = 0x33U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__48__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__48__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__49__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (((0x33U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__last_rid)) 
         | (0x2222U != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata))) {
        VL_WRITEF_NX("  FAIL: second read rid=0x%0x data=0x%0x\n",0,
                     8,vlSelfRef.tb_axi4_ram_tests__DOT__last_rid,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: same-ID responses in order\n",0);
    }
    VL_WRITEF_NX("[E14] PIPELINE_OUTPUT=1 round-trip (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__data = 0x9abcdef0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__addr = 0x358U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__50__id = 0x77U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__50__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__50__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__50__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__50__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__50__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__51__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         571);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = 0x77U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr = 0x358U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             575);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__w = ((IData)(1U) 
                                               + vlSelfRef.tb_axi4_ram_tests__DOT__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: pipe AR\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         577);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             578);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__w = ((IData)(1U) 
                                               + vlSelfRef.tb_axi4_ram_tests__DOT__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg)) {
        if ((1U & (((0x9abcdef0U != vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_pipe_reg) 
                    | (0x77U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_pipe_reg))) 
                   | (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_pipe_reg))))) {
            VL_WRITEF_NX("  FAIL: pipe data=0x%0x rid=0x%0x rlast=%0b\n",0,
                         32,vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_pipe_reg,
                         8,(IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_pipe_reg),
                         1,vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_pipe_reg);
            vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
        } else {
            VL_WRITEF_NX("  PASS: registered R path round-trips\n",0);
        }
    } else {
        VL_WRITEF_NX("  FAIL: pipelined R never arrived\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         586);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[E15] payload stability under backpressure (EXPECT PASS)\n",0);
    if (vlSelfRef.tb_axi4_ram_tests__DOT__stab_fail) {
        VL_WRITEF_NX("  FAIL: payload changed while valid was high and ready low\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: R/B payloads held stable while stalled\n",0);
    }
    VL_WRITEF_NX("[E16] memory contents survive reset (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__data = 0x5eed5eedU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__addr = 0x35cU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__52__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__52__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__52__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__52__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__52__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__52__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__53__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         603);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         604);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         604);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         604);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         606);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         606);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         606);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__54__addr = 0x35cU;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__54__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__54__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__54__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__55__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if ((0x5eed5eedU != vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata)) {
        VL_WRITEF_NX("  FAIL: got 0x%0x expected 0x5EED5EED after reset\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata);
        vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail);
    } else {
        VL_WRITEF_NX("  PASS: mem[] outlived reset\n",0);
    }
    VL_WRITEF_NX("[SUMMARY A] edge fails=%0d, infra=%0d\n",0,
                 32,vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail,
                 32,vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    if (((0U == vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail) 
         & (0U == vlSelfRef.tb_axi4_ram_tests__DOT__errors))) {
        VL_WRITEF_NX("[RESULT A] ALL edge tests PASSED\n",0);
        vlSelfRef.edge_pass = 1U;
    } else {
        VL_WRITEF_NX("[RESULT A] edge tests FAILED: %0d edge, %0d infra\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__edge_fail,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.edge_pass = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__mon_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__errors = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         631);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         632);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         632);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         632);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         634);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         634);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         634);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         634);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         634);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    VL_WRITEF_NX("====================================================\nPART B: CORNER cases (a correct implementation passes these too)\n====================================================\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DX = 0xaaaa1111U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DY = 0x5555eeeeU;
    VL_WRITEF_NX("[CORNER 1] R-channel backpressure (EXPECT PASS)\n",0);
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__data 
        = vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DY;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__addr = 0x40U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__56__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__56__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__56__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__56__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__56__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__56__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__57__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__wait_b = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__data 
        = vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DX;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__addr = 0x44U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__58__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__58__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__58__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__58__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__58__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__58__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__59__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__60__addr = 0x40U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__60__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__60__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__60__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__61__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         660);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr = 0x44U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             665);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         666);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         670);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         670);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         670);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__got = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_data 
        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__1;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last 
        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__1;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             675);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cw);
    }
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg) {
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_data 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__got = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         681);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__drain = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__drain))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             686);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__drain 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__drain);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__got)) {
        if ((1U & ((vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_data 
                    != vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DX) 
                   | (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last))))) {
            VL_WRITEF_NX("  FAIL: first beat data=0x%0x last=%0b (expected 0x%0x last=1)\n",0,
                         32,vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_data,
                         1,(IData)(vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__cap_last),
                         32,vlSelfRef.tb_axi4_ram_tests__DOT__corner1__DOT__DX);
            vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
        } else {
            VL_WRITEF_NX("  PASS: single correct beat under backpressure\n",0);
        }
    } else {
        VL_WRITEF_NX("  FAIL: never received a read beat\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D1 = 0xdead0001U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D2 = 0xdead0002U;
    VL_WRITEF_NX("[CORNER 2] delayed bready + 2nd write (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__wait_b = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__data 
        = vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D1;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__addr = 0x100U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__62__id = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__62__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__62__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__62__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__62__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__62__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__63__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__wait_b = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__strb = 0xfU;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__data 
        = vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D2;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__addr = 0x104U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write__64__id = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__wait_b 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__64__wait_b;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__strb 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__64__strb;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__data 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__64__data;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__64__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write__64__id;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         247);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             258);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         263);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__data;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb = __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__strb;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             272);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         277);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__wait_b) {
        __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_tests.v", 
                                                                 284);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__w);
        }
        if (VL_LIKELY((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp = 0U;
        } else {
            VL_WRITEF_NX("  TIMEOUT: BVALID not seen addr=0x%0x t=%0t\n",0,
                         16,__Vtask_tb_axi4_ram_tests__DOT__do_write_cfg__65__addr,
                         64,VL_TIME_UNITED_Q(1000),
                         -9);
            vlSelfRef.tb_axi4_ram_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__0;
            vlSelfRef.tb_axi4_ram_tests__DOT__last_bresp 
                = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__0;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             294);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         722);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cw = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cw)) {
        if (((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             727);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cw 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cw);
    }
    if ((2U != vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount)) {
        VL_WRITEF_NX("  FAIL: saw %0d write responses, expected 2 (B merged)\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__cbcount);
        vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
    } else {
        VL_WRITEF_NX("  PASS: both write responses delivered\n",0);
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__66__addr = 0x100U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__66__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__66__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__66__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__67__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                     != vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D1))) {
        VL_WRITEF_NX("  NOTE: X1 data wrong got=0x%0x exp=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D1);
        vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
    }
    __Vtask_tb_axi4_ram_tests__DOT__do_read__68__addr = 0x104U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read__68__id = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__prot = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__cache = 3U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__lock = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__size = 2U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__68__addr;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__id 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read__68__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         320);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__id;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__size;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__lock;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__cache;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot 
        = __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__prot;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             331);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             341);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,__Vtask_tb_axi4_ram_tests__DOT__do_read_cfg__69__addr,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rid 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df5861d__1;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rlast 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__0;
        vlSelfRef.tb_axi4_ram_tests__DOT__last_rresp 
            = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__1;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         355);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata 
                     != vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D2))) {
        VL_WRITEF_NX("  NOTE: X2 data wrong got=0x%0x exp=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__last_rdata,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__corner2__DOT__D2);
        vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA = 0x800U;
    VL_WRITEF_NX("[CORNER 3] read-before-write not flagged invalid (EXPECT PASS)\n",0);
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         774);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr 
        = vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             779);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR handshake failed addr=0x%0x t=%0t\n",0,
                     16,vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         784);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__got = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_data 
        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df4b479__2;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp 
        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6e539__2;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_last 
        = vlSelfRef.tb_axi4_ram_tests__DOT____Vxrand_h8df6f50b__2;
    vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_tests.v", 
                                                             788);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cw);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_data 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_last 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__got = 1U;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID not seen addr=0x%0x t=%0t\n",0,
                     16,vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA,
                     64,VL_TIME_UNITED_Q(1000),-9);
        vlSelfRef.tb_axi4_ram_tests__DOT__errors = 
            ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_tests.v", 
                                                         798);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__got)) {
        if ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp))) {
            VL_WRITEF_NX("  FAIL: unwritten addr 0x%0x read back OKAY (rresp=0x%0x data=0x%0x); no invalid-data guard\n",0,
                         16,vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__PA,
                         2,(IData)(vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp),
                         32,vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_data);
            vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
        } else {
            VL_WRITEF_NX("  PASS: unwritten read flagged invalid (rresp=0x%0x)\n",0,
                         2,vlSelfRef.tb_axi4_ram_tests__DOT__corner3__DOT__cap_resp);
        }
    } else {
        VL_WRITEF_NX("  FAIL: never received a read beat\n",0);
        vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail);
    }
    VL_WRITEF_NX("[SUMMARY B] corner fails=%0d, infra=%0d\n",0,
                 32,vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail,
                 32,vlSelfRef.tb_axi4_ram_tests__DOT__errors);
    if (((0U == vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail) 
         & (0U == vlSelfRef.tb_axi4_ram_tests__DOT__errors))) {
        VL_WRITEF_NX("[RESULT B] ALL corner tests PASSED\n",0);
        vlSelfRef.corner_pass = 1U;
    } else {
        VL_WRITEF_NX("[RESULT B] corner tests FAILED: %0d corner(s), %0d infra error(s)\n",0,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__corner_fail,
                     32,vlSelfRef.tb_axi4_ram_tests__DOT__errors);
        vlSelfRef.corner_pass = 0U;
    }
    VL_WRITEF_NX("====================================================\n[RESULT] edge=%0s  corner=%0s\n====================================================\n",0,
                 32,((IData)(vlSelfRef.edge_pass) ? 0x50415353U
                      : 0x4641494cU),32,((IData)(vlSelfRef.corner_pass)
                                          ? 0x50415353U
                                          : 0x4641494cU));
    vlSelfRef.done = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_axi4_ram_tests___024root___ico_sequent__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf);

void Vtb_axi4_ram_tests___024root___eval_ico(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb_axi4_ram_tests___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_tests___024root___ico_sequent__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst = ((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__force_rst));
}

void Vtb_axi4_ram_tests___024root___eval_triggers__ico(Vtb_axi4_ram_tests___024root* vlSelf);

bool Vtb_axi4_ram_tests___024root___eval_phase__ico(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_axi4_ram_tests___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_axi4_ram_tests___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_axi4_ram_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf);

void Vtb_axi4_ram_tests___024root___eval_act(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_axi4_ram_tests___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst = ((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__force_rst));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst;
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid;
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) 
               && (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg)));
        if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
            if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg))));
                }
            }
        }
    } else if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop 
        = ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
           & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                       | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg))) {
                        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg))));
                    }
                }
            }
        }
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) 
               && ((1U & (~ ((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                             | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)))) 
                   || (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg))));
    } else if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count)) 
               | (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count)));
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next = 0U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr;
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
               | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop));
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 0U;
    }
}

void Vtb_axi4_ram_tests___024root___nba_sequent__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf);
void Vtb_axi4_ram_tests___024root___nba_comb__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf);

void Vtb_axi4_ram_tests___024root___eval_nba(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_tests___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_tests___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_tests___024root___nba_sequent__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count;
    __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0;
    __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0;
    __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0 = 0;
    // Body
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 = 0U;
    __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 = 0U;
    __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__i = 4U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__i = 4U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_rd_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_rd_ptr)));
    }
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_rd_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_rd_ptr)));
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en) 
         & (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb)))) {
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en) 
         & (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb)))) {
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0 = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count 
        = (3U & ((2U == (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push) 
                          << 1U) | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_pop)))
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count))
                  : ((1U == (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push) 
                              << 1U) | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_pop)))
                      ? ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count) 
                         - (IData)(1U)) : (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count))));
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg;
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_wr_ptr;
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0 = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_wr_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_wr_ptr)));
    }
    __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count 
        = (3U & ((2U == (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push) 
                          << 1U) | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop)))
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count))
                  : ((1U == (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push) 
                              << 1U) | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop)))
                      ? ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count) 
                         - (IData)(1U)) : (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count))));
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg;
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_wr_ptr;
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0 = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_wr_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_wr_ptr)));
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en) 
         & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 
            = (0xffU & vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata);
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 1U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 
            = (0xffU & (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
                        >> 8U));
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 2U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 
            = (0xffU & (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
                        >> 0x10U));
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 3U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 
            = (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
               >> 0x18U);
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en) 
         & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 
            = (0xffU & vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata);
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 1U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 
            = (0xffU & (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
                        >> 8U));
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 2U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 
            = (0xffU & (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
                        >> 0x10U));
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wstrb) 
            >> 3U))) {
        __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 
            = (vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wdata 
               >> 0x18U);
        __VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3 = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_pipe_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_pipe_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_pipe_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_pipe_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next;
    if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg)) 
               | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_pipe_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg;
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0] 
            = __VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_id_fifo__v0;
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0] 
            = __VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo__v0;
    }
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_rd_ptr = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_rd_ptr = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_pop 
        = (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_next;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_rd_en) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rresp_reg 
            = (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid
               [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                            >> 2U))] ? 0U : 2U);
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rdata_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem
            [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                         >> 2U))];
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_next = 0U;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_wr_ptr = 0U;
        __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_wr_ptr = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg)))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_next = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg = 0U;
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg)))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__stab_fail = 0U;
    } else if (vlSelfRef.tb_axi4_ram_tests__DOT__mon_en) {
        if (((((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__mon_r_armed) 
               & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
              & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready))) 
             & (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg 
                != vlSelfRef.tb_axi4_ram_tests__DOT__mon_rdata))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__stab_fail = 1U;
        }
        if (((((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__mon_b_armed) 
               & (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count))) 
              & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready))) 
             & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid) 
                != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__mon_bid)))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__stab_fail = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst)))) {
        if (vlSelfRef.tb_axi4_ram_tests__DOT__mon_en) {
            vlSelfRef.tb_axi4_ram_tests__DOT__mon_bid 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid;
            vlSelfRef.tb_axi4_ram_tests__DOT__mon_rdata 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg;
        }
    }
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rresp_reg 
            = (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_valid
               [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                            >> 2U))] ? 0U : 2U);
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rdata_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem
            [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                         >> 2U))];
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_valid__v0] = 1U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_rd_en = 0U;
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v0));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_next = 0U;
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_valid[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem_valid__v0] = 1U;
    }
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_reg = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__mon_b_armed = 0U;
    } else if (vlSelfRef.tb_axi4_ram_tests__DOT__mon_en) {
        vlSelfRef.tb_axi4_ram_tests__DOT__mon_b_armed 
            = ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
               & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready)));
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count 
        = __Vdly__tb_axi4_ram_tests__DOT__dut__DOT__b_count;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_reg;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
        if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_rd_en = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rvalid_next = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rid_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_rlast_next 
                = (0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg));
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next;
    vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bid = (
                                                   (0U 
                                                    != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count))
                                                    ? 
                                                   vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_id_fifo
                                                   [vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_rd_ptr]
                                                    : 0U);
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_tests__DOT__mon_r_armed = 0U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg = 0U;
    } else {
        if (vlSelfRef.tb_axi4_ram_tests__DOT__mon_en) {
            vlSelfRef.tb_axi4_ram_tests__DOT__mon_r_armed 
                = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
                   & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)));
        }
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg 
            = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next;
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v0));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_tests__DOT__dut__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next;
}

VL_INLINE_OPT void Vtb_axi4_ram_tests___024root___nba_comb__TOP__0(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid;
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arburst;
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count)) 
               | (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__b_count)));
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_awready_next = 0U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr;
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__write_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop 
        = ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
           & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_bready));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_rst = ((IData)(vlSelfRef.reset) 
                                                 | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__force_rst));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) 
               && (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg)));
        if (vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_reg) {
            if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_size_reg))));
                }
            }
        }
    } else if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut_pipe__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)));
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                       | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_id_reg;
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_burst_reg))) {
                        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_size_reg))));
                    }
                }
            }
        }
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_reg) 
               && ((1U & (~ ((~ (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                             | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_rready)))) 
                   || (0U != (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_reg))));
    } else if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_count)) 
               | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__b_pop));
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_awaddr;
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_tests__DOT__dut__DOT__write_state_next = 0U;
    }
}

void Vtb_axi4_ram_tests___024root___timing_resume(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha5d2ec66__0.resume(
                                                   "@(negedge reset)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9c630ded__0.resume(
                                                   "@(posedge clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h9c630dac__0.resume(
                                                   "@(negedge clk)");
    }
}

void Vtb_axi4_ram_tests___024root___timing_commit(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha5d2ec66__0.commit(
                                                   "@(negedge reset)");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9c630ded__0.commit(
                                                   "@(posedge clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h9c630dac__0.commit(
                                                   "@(negedge clk)");
    }
}

void Vtb_axi4_ram_tests___024root___eval_triggers__act(Vtb_axi4_ram_tests___024root* vlSelf);

bool Vtb_axi4_ram_tests___024root___eval_phase__act(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_axi4_ram_tests___024root___eval_triggers__act(vlSelf);
    Vtb_axi4_ram_tests___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_axi4_ram_tests___024root___timing_resume(vlSelf);
        Vtb_axi4_ram_tests___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_axi4_ram_tests___024root___eval_phase__nba(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_axi4_ram_tests___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___dump_triggers__ico(Vtb_axi4_ram_tests___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___dump_triggers__nba(Vtb_axi4_ram_tests___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_tests___024root___dump_triggers__act(Vtb_axi4_ram_tests___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram_tests___024root___eval(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtb_axi4_ram_tests___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_axi4_ram_tests.v", 46, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_axi4_ram_tests___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_axi4_ram_tests___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_axi4_ram_tests.v", 46, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi4_ram_tests___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_axi4_ram_tests.v", 46, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_axi4_ram_tests___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_axi4_ram_tests___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_axi4_ram_tests___024root___eval_debug_assertions(Vtb_axi4_ram_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_tests___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
