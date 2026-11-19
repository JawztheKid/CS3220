// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_ram_burst_tests.h for the primary calling header

#include "Vtb_axi4_ram_burst_tests__pch.h"
#include "Vtb_axi4_ram_burst_tests___024root.h"

VlCoroutine Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__1(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len = 0;
    CData/*1:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0;
    CData/*7:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data = 0;
    CData/*3:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0;
    SData/*15:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out = 0;
    CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out = 0;
    IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0;
    // Body
    if (VL_UNLIKELY((0xa0000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: slave not usable after reserved burst, mem[0x384]=0x%0x exp 0xa0000001\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0x388U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    if (VL_UNLIKELY((0xa0000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: slave not usable after reserved burst, mem[0x388]=0x%0x exp 0xa0000002\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__addr = 0x38cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__l 
        = vlSelfRef.__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
    if (VL_UNLIKELY((0xa0000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: slave not usable after reserved burst, mem[0x38c]=0x%0x exp 0xa0000003\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__k = 4U;
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err))) {
        VL_WRITEF_NX("  FAIL: reserved burst type caused %0d channel timeout(s)\n",0,
                     32,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                         - vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc)) {
        VL_WRITEF_NX("  PASS: reserved burst type stays live and leaves the slave usable\n",0);
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[BURST 8] AW intrusion mid-burst: AWREADY must stay low until the write completes\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x400U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x404U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x408U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr = 0x40cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__72__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x480U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x484U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x488U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr = 0x48cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__73__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         300);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr = 0x400U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id = 0x11U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         317);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             321);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__75__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         323);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data = 0xc0000000U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__76__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data = 0xc0000001U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__77__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles = 6U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr = 0x480U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         371);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid = 0xeeU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__cycles)) {
        if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted = 1U;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             377);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__c);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         380);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__78__accepted;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data = 0xc0000002U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__79__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data = 0xc0000003U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__80__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             343);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__w);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got 
        = (0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count));
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got))))) {
        VL_WRITEF_NX("  TIMEOUT: BVALID\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         346);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__81__got;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         306);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted) 
                     | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol)))) {
        VL_WRITEF_NX("  FAIL: slave accepted a second AW (0x0480) while the 0x0400 burst was open\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF_NX("  FAIL: AWREADY was asserted while the write burst still owed beats\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot))))) {
        VL_WRITEF_NX("  FAIL: no BVALID for the interrupted burst\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x400U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x400]=0x%0x exp 0xc0000000 (burst retargeted by the intruding AW)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x404U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x404]=0x%0x exp 0xc0000001 (burst retargeted by the intruding AW)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x408U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x408]=0x%0x exp 0xc0000002 (burst retargeted by the intruding AW)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr = 0x40cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__83__last_out;
    if (VL_UNLIKELY((0xc0000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x40c]=0x%0x exp 0xc0000003 (burst retargeted by the intruding AW)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x480U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x480]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x484U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x484]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x488U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x488]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr = 0x48cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__84__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x48c]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__k = 4U;
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc)) {
        VL_WRITEF_NX("  PASS: AW intrusion rejected, burst landed intact\n",0);
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[BURST 9] read transaction started mid-write-burst\n",0);
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[0U] = 0xd0000000U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [0U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x500U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[1U] = 0xd0000001U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [1U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x504U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[2U] = 0xd0000002U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [2U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x508U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv[3U] = 0xd0000003U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__expv
        [3U];
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr = 0x50cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__86__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x440U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x444U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x448U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr = 0x44cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__87__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         300);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr = 0x440U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id = 0x22U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         317);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             321);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__89__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         323);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data = 0xc1000000U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__90__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data = 0xc1000001U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__91__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base = 0x500U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         390);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             394);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: burst AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__base);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         396);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_n = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g = 0U;
    while ((((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__rbeat_last)) 
             & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g)) 
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
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read_burst__92__g);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data = 0xc1000002U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__93__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data = 0xc1000003U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__94__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w = 0U;
    while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             343);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__w);
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got 
        = (0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count));
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got))))) {
        VL_WRITEF_NX("  TIMEOUT: BVALID\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         346);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait__95__got;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         306);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF_NX("  FAIL: read traffic re-asserted AWREADY while the write burst was open\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol)) {
        VL_WRITEF_NX("  FAIL: a second AW was accepted while the write burst was open\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot))))) {
        VL_WRITEF_NX("  FAIL: no BVALID after the read intrusion\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
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
        VL_WRITEF_NX("  FAIL: mid-write read beats=%0d got[%0x %0x %0x %0x] exp[%0x %0x %0x %0x]\n",0,
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
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x440U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x440]=0x%0x exp 0xc1000000 (write burst disturbed by the read)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x444U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x444]=0x%0x exp 0xc1000001 (write burst disturbed by the read)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x448U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x448]=0x%0x exp 0xc1000002 (write burst disturbed by the read)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr = 0x44cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__97__last_out;
    if (VL_UNLIKELY((0xc1000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x44c]=0x%0x exp 0xc1000003 (write burst disturbed by the read)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__k = 4U;
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc)) {
        VL_WRITEF_NX("  PASS: concurrent read left the open write burst alone\n",0);
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
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         212);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[BURST 10] BREADY withheld: the response must be held, not dropped or overtaken\n",0);
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4c8U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr = 0x4ccU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__99__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x580U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x584U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x588U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr = 0x58cU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__100__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         300);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr = 0x4c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id = 0x33U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         317);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__len;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__bt;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             321);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__aw_issue__102__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         323);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data = 0xc2000000U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__103__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data = 0xc2000001U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__104__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data = 0xc2000002U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__105__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data = 0xc2000003U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb = 0xfU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__last;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             334);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W data=0x%0x\n",0,
                     32,__Vtask_tb_axi4_ram_burst_tests__DOT__w_beat__106__data);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         336);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit = 0x100U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 0U;
    while (((~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got)) 
            & VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__limit))) {
        if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got = 1U;
        } else {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 358);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__w);
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__107__got;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1062);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles = 6U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr = 0x580U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         371);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid = 0xeeU;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c = 0U;
    while (VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c, __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__cycles)) {
        if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted = 1U;
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             377);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__c);
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         380);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__aw_intrude__108__accepted;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit = 0x100U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 0U;
    while (((~ (IData)(__Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got)) 
            & VL_LTS_III(32, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w, __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__limit))) {
        if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))) {
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got = 1U;
        } else {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 358);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__w);
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__b_wait_quiet__109__got;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         1066);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         306);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en = 0U;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen))))) {
        VL_WRITEF_NX("  FAIL: no BVALID after the last beat\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol)) {
        VL_WRITEF_NX("  FAIL: BVALID was withdrawn while BREADY was low, the response is lost\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted) 
                     | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol)))) {
        VL_WRITEF_NX("  FAIL: slave accepted a new AW (0x0580) while the B response was still outstanding\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol)) {
        VL_WRITEF_NX("  FAIL: AWREADY was asserted while the write burst still owed beats\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot))))) {
        VL_WRITEF_NX("  FAIL: no BVALID once BREADY was finally asserted, the write never completed\n",0);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000000U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x4c0]=0x%0x exp 0xc2000000\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c4U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000001U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x4c4]=0x%0x exp 0xc2000001\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4c8U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000002U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x4c8]=0x%0x exp 0xc2000002\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr = 0x4ccU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__111__last_out;
    if (VL_UNLIKELY((0xc2000003U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x4cc]=0x%0x exp 0xc2000003\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x580U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x580]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x584U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x584]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 2U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x588U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x588]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 3U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr = 0x58cU;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__112__last_out;
    if (VL_UNLIKELY((0U != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: mem[0x58c]=0x%0x, beats leaked to the intruder's address\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__k = 4U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb = 0xfU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data = 0xc2ffffffU;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr = 0x5c0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id = 0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         222);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__id;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             226);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AW addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         228);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__data;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__strb;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             230);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: W addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         232);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast = 0U;
    if (__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__wait_b) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w = 0U;
        while (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
                & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w))) {
            co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(negedge clk)", 
                                                                 "tb_axi4_ram_burst_tests.v", 
                                                                 234);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w 
                = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__w);
        }
        if (VL_UNLIKELY((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            VL_WRITEF_NX("  TIMEOUT: B addr=0x%0x\n",0,
                         16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_write__113__addr);
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             236);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr = 0x5c0U;
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         246);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize = 2U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlock = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arcache = 3U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arprot = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 1U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             250);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))))) {
        VL_WRITEF_NX("  TIMEOUT: AR addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         252);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid = 0U;
    __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w = 0U;
    while (((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
            & VL_GTS_III(32, 0x100U, __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w))) {
        co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge clk)", 
                                                             "tb_axi4_ram_burst_tests.v", 
                                                             253);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w 
            = ((IData)(1U) + __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__w);
    }
    if (VL_LIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) {
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    } else {
        VL_WRITEF_NX("  TIMEOUT: RVALID addr=0x%0x\n",0,
                     16,__Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__addr);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
    }
    co_await vlSelfRef.__VtrigSched_h9c630dac__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge clk)", 
                                                         "tb_axi4_ram_burst_tests.v", 
                                                         260);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__data_out;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__l 
        = __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__114__last_out;
    if (VL_UNLIKELY((0xc2ffffffU != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd))) {
        VL_WRITEF_NX("  FAIL: write channel wedged after the stalled response, mem[0x05C0]=0x%0x\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY((vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                     != vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err))) {
        VL_WRITEF_NX("  FAIL: %0d channel timeout(s) caused by the withheld BREADY\n",0,
                     32,(vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
                         - vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err));
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc = 0U;
    }
    if (VL_UNLIKELY(vlSelfRef.tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc)) {
        VL_WRITEF_NX("  PASS: response held until BREADY and never overtaken\n",0);
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail 
            = ((IData)(1U) + vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail);
    }
    VL_WRITEF_NX("[SUMMARY B] burst corner fails=%0d, infra=%0d\n",0,
                 32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail,
                 32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
    if (((0U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail) 
         & (0U == vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors))) {
        VL_WRITEF_NX("[RESULT B] ALL burst corner tests PASSED\n",0);
        vlSelfRef.corner_pass = 1U;
    } else {
        VL_WRITEF_NX("[RESULT B] burst corner tests FAILED: %0d corner(s), %0d infra error(s)\n           (a correct implementation passes all corners)\n",0,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__corner_fail,
                     32,vlSelfRef.tb_axi4_ram_burst_tests__DOT__errors);
        vlSelfRef.corner_pass = 0U;
    }
    VL_WRITEF_NX("=========================================================\n[RESULT] burst edge=%0s  burst corner=%0s\n=========================================================\n",0,
                 32,((IData)(vlSelfRef.edge_pass) ? 0x50415353U
                      : 0x4641494cU),32,((IData)(vlSelfRef.corner_pass)
                                          ? 0x50415353U
                                          : 0x4641494cU));
    vlSelfRef.done = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);

void Vtb_axi4_ram_burst_tests___024root___eval_ico(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst));
}

void Vtb_axi4_ram_burst_tests___024root___eval_triggers__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf);

bool Vtb_axi4_ram_burst_tests___024root___eval_phase__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtb_axi4_ram_burst_tests___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtb_axi4_ram_burst_tests___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);

void Vtb_axi4_ram_burst_tests___024root___eval_act(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst;
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop 
        = ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
           & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                       | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg))) {
                        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg))));
                    }
                }
            }
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) 
               && ((1U & (~ ((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                             | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) 
                   || (0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))));
    } else if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
               | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop));
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
    }
}

void Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);
void Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf);

void Vtb_axi4_ram_burst_tests___024root___eval_nba(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count;
    __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 = 0;
    SData/*13:0*/ __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0;
    __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0 = 0;
    // Body
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0 = 0U;
    __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 = 0U;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 0U;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 0U;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 0U;
    __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__i = 4U;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr)));
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & (0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb)))) {
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0 = 1U;
    }
    __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count 
        = (3U & ((2U == (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push) 
                          << 1U) | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop)))
                  ? ((IData)(1U) + (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))
                  : ((1U == (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push) 
                              << 1U) | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop)))
                      ? ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count) 
                         - (IData)(1U)) : (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count))));
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push) {
        __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr;
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0 = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr 
            = (1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr)));
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb))) {
        __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 
            = (0xffU & vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata);
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 1U))) {
        __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 
            = (0xffU & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                        >> 8U));
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 2U))) {
        __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 
            = (0xffU & (vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
                        >> 0x10U));
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2 = 1U;
    }
    if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en) 
         & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wstrb) 
            >> 3U))) {
        __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 
            = (vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wdata 
               >> 0x18U);
        __VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 
            = (0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                          >> 2U));
        __VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3 = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr = 0U;
        __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg = 0U;
    }
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_watch_en) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding) 
             & (0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol))))) {
                VL_WRITEF_NX("  VIOL: BVALID dropped at t=%0t without a BREADY handshake\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_hold_viol = 1U;
        }
        if ((((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase) 
              & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg)) 
             & (~ (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
                    & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
                   & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))))) {
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol))))) {
                VL_WRITEF_NX("  VIOL: AWREADY asserted at t=%0t with the write burst still owing beats\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9);
            }
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_ready_viol = 1U;
        }
        if (((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
             & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready)))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding = 1U;
        }
        if (((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding = 0U;
        }
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight) {
                if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol))))) {
                    VL_WRITEF_NX("  VIOL: second AW accepted (addr=0x%0x) at t=%0t before the current write returned B\n",0,
                                 16,vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr,
                                 64,VL_TIME_UNITED_Q(1000),
                                 -9);
                }
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_viol_addr 
                    = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__aw_accept_viol = 1U;
            }
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase = 1U;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight = 1U;
        }
        if (((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight = 0U;
        }
        if ((((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
              & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg)) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase = 0U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_inflight = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__wr_data_phase = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__b_outstanding = 0U;
    }
    if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg)) 
               | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg;
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0] 
            = __VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo__v0;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count 
        = __Vdly__tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg)))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next = 1U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg 
            = (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid
               [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                            >> 2U))] ? 0U : 2U);
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
            [(0x3fffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                         >> 2U))];
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg = 0U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg = 0U;
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid__v0] = 1U;
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0]) 
               | (IData)(__VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v0));
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem[__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem
                [__VdlyDim0__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__tb_axi4_ram_burst_tests__DOT__dut__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next;
}

VL_INLINE_OPT void Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___nba_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
    if ((1U & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg)))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arid;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arsize;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arburst;
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop 
        = ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
           & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_bready));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut_rst 
        = ((IData)(vlSelfRef.reset) | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__force_rst));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
    if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 1U;
            if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
                 & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en = 1U;
                if (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                     | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next = 0U;
                }
            }
        }
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push 
        = ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg)) 
           & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
              & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg) 
                 & ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast)))));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 0U;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next 
        = ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg) 
           & (~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)));
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg;
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
        = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
    if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
        if (vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) {
            if ((1U & ((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                       | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en = 1U;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next = 1U;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next 
                    = vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next 
                    = (0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg));
                if ((0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
                        = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg) 
                                    - (IData)(1U)));
                    if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg))) {
                        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
                            = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg) 
                                          + ((IData)(1U) 
                                             << (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg))));
                    }
                }
            }
        }
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next 
            = ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg) 
               && ((1U & (~ ((~ (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg)) 
                             | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_rready)))) 
                   || (0U != (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg))));
    } else if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arvalid) 
                & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 1U;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_arlen;
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next 
            = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_araddr;
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next = 0U;
    }
    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
    if ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next 
            = ((2U > (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count)) 
               | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop));
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awburst;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awid;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awsize;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awlen;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                = vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next = 0U;
        } else {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
        }
    } else if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg))) {
        if (((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wvalid) 
             & (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg))) {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next 
                = (((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                    | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))
                    ? 0U : 1U);
            if ((1U & (~ ((0U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg)) 
                          | (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__s_axi_wlast))))) {
                vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next 
                    = (0xffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg) 
                                - (IData)(1U)));
                if ((1U == (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg))) {
                    vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next 
                        = (0xffffU & ((IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg) 
                                      + ((IData)(1U) 
                                         << (IData)(vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg))));
                }
            }
        } else {
            vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 1U;
        }
    } else {
        vlSelfRef.tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next = 0U;
    }
}

void Vtb_axi4_ram_burst_tests___024root___timing_resume(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___timing_resume\n"); );
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

void Vtb_axi4_ram_burst_tests___024root___timing_commit(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___timing_commit\n"); );
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

void Vtb_axi4_ram_burst_tests___024root___eval_triggers__act(Vtb_axi4_ram_burst_tests___024root* vlSelf);

bool Vtb_axi4_ram_burst_tests___024root___eval_phase__act(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_axi4_ram_burst_tests___024root___eval_triggers__act(vlSelf);
    Vtb_axi4_ram_burst_tests___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_axi4_ram_burst_tests___024root___timing_resume(vlSelf);
        Vtb_axi4_ram_burst_tests___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_axi4_ram_burst_tests___024root___eval_phase__nba(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_axi4_ram_burst_tests___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi4_ram_burst_tests___024root___dump_triggers__act(Vtb_axi4_ram_burst_tests___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_axi4_ram_burst_tests___024root___eval(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval\n"); );
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
            Vtb_axi4_ram_burst_tests___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtb_axi4_ram_burst_tests___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_axi4_ram_burst_tests___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_axi4_ram_burst_tests___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_axi4_ram_burst_tests.v", 60, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_axi4_ram_burst_tests___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_axi4_ram_burst_tests___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_axi4_ram_burst_tests___024root___eval_debug_assertions(Vtb_axi4_ram_burst_tests___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_axi4_ram_burst_tests__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_ram_burst_tests___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
