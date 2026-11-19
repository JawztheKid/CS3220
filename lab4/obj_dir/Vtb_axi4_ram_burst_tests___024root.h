// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axi4_ram_burst_tests.h for the primary calling header

#ifndef VERILATED_VTB_AXI4_RAM_BURST_TESTS___024ROOT_H_
#define VERILATED_VTB_AXI4_RAM_BURST_TESTS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_axi4_ram_burst_tests__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi4_ram_burst_tests___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(done,0,0);
        VL_OUT8(edge_pass,0,0);
        VL_OUT8(corner_pass,0,0);
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__1;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT____Vxrand_h8df6f50b__0;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awid;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awlen;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awsize;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awburst;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awlock;
        CData/*3:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awcache;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awprot;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awvalid;
        CData/*3:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_wstrb;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_wlast;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_wvalid;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_bready;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arid;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arlen;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arsize;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arburst;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arlock;
        CData/*3:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arcache;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arprot;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_arvalid;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_rready;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__force_rst;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut_rst;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__aw_watch_en;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__wr_inflight;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__wr_data_phase;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__b_outstanding;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__aw_ready_viol;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__aw_accept_viol;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__b_hold_viol;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__rbeat_last;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__tlast;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc1__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc1__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc2__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc3__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc4__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc4__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_last;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__got;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc6__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc6__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc7__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc7__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__accepted;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__bgot;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc9__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc9__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc9__DOT__bgot;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__l;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__okc;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__accepted;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__bgot;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__bseen;
    };
    struct {
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_state_next;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_reg;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_state_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_wr_en;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_rd_en;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_reg;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_id_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_reg;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_count_next;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_reg;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_size_next;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_reg;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_burst_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_reg;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_id_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_reg;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_count_next;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_reg;
        CData/*2:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_size_next;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_reg;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_burst_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_wr_ptr;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_rd_ptr;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_count;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_push;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_pop;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_queued_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__b_hold_id_next;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_reg;
        CData/*1:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rresp_pipe_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_awready_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_wready_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bid_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_bvalid_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_arready_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_reg;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_next;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_next;
        CData/*7:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rid_pipe_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rlast_pipe_reg;
        CData/*0:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rvalid_pipe_reg;
        CData/*0:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__last_out;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_awaddr;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_araddr;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__aw_viol_addr;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_reg;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__read_addr_next;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_reg;
        SData/*15:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__write_addr_next;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__1;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT____Vxrand_h8df4b479__0;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__s_axi_wdata;
    };
    struct {
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__errors;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__edge_fail;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__corner_fail;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__rbeat_n;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__rlast_count;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__w;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__i;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__tmp;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc1__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc1__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc2__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc3__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc4__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc4__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__DX;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__DY;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__cap_data;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__w;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc5__DOT__drain;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc6__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc6__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc7__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc7__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc7__DOT__pre_err;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc8__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc9__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc9__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__k;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__rd;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__pre_err;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__bc10__DOT__w;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_reg;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_next;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__s_axi_rdata_pipe_reg;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__i;
        IData/*31:0*/ tb_axi4_ram_burst_tests__DOT__dut__DOT__j;
        IData/*31:0*/ __Vtask_tb_axi4_ram_burst_tests__DOT__do_read__70__data_out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> tb_axi4_ram_burst_tests__DOT__rbeat;
        VlUnpacked<IData/*31:0*/, 32> tb_axi4_ram_burst_tests__DOT__expv;
        VlUnpacked<CData/*7:0*/, 2> tb_axi4_ram_burst_tests__DOT__dut__DOT__b_id_fifo;
        VlUnpacked<CData/*0:0*/, 16384> tb_axi4_ram_burst_tests__DOT__dut__DOT__mem_valid;
        VlUnpacked<IData/*31:0*/, 16384> tb_axi4_ram_burst_tests__DOT__dut__DOT__mem;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_ha5d2ec66__0;
    VlTriggerScheduler __VtrigSched_h9c630ded__0;
    VlTriggerScheduler __VtrigSched_h9c630dac__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_axi4_ram_burst_tests__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_axi4_ram_burst_tests___024root(Vtb_axi4_ram_burst_tests__Syms* symsp, const char* v__name);
    ~Vtb_axi4_ram_burst_tests___024root();
    VL_UNCOPYABLE(Vtb_axi4_ram_burst_tests___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
