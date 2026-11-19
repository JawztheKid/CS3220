// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsystolic_array.h for the primary calling header

#ifndef VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_
#define VERILATED_VSYSTOLIC_ARRAY___024ROOT_H_  // guard

#include "verilated.h"


class Vsystolic_array__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsystolic_array___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_in,0,0);
        VL_IN8(rst_accumulator_rdy_in,0,0);
        VL_IN8(stream_out_rdy_in_in,0,0);
        CData/*0:0*/ systolic_array__DOT__rst;
        CData/*0:0*/ systolic_array__DOT__rst_accumulator_rdy;
        CData/*0:0*/ systolic_array__DOT__stream_out_rdy;
        CData/*1:0*/ systolic_array__DOT__control_rst_accumulator_rdy;
        CData/*7:0*/ systolic_array__DOT__row_00_01;
        CData/*7:0*/ systolic_array__DOT__row_10_11;
        CData/*7:0*/ systolic_array__DOT__col_00_10;
        CData/*7:0*/ systolic_array__DOT__col_01_11;
        CData/*0:0*/ systolic_array__DOT__rst_00_10;
        CData/*0:0*/ systolic_array__DOT__rst_01_11;
        CData/*0:0*/ systolic_array__DOT__so_00_10;
        CData/*0:0*/ systolic_array__DOT__so_01_11;
        CData/*7:0*/ systolic_array__DOT__psum_00;
        CData/*7:0*/ systolic_array__DOT__psum_01;
        CData/*7:0*/ systolic_array__DOT__psum_10;
        CData/*7:0*/ systolic_array__DOT__psum_11;
        CData/*3:0*/ systolic_array__DOT__ctrl_0__DOT__rst_delay;
        CData/*5:0*/ systolic_array__DOT__ctrl_0__DOT__stream_out_delay;
        CData/*1:0*/ systolic_array__DOT__ctrl_0__DOT__stream_out_rdy_reg;
        CData/*0:0*/ systolic_array__DOT__ctrl_0__DOT__rst_col_chain__BRA__1__KET____DOT__rst_col_reg;
        CData/*7:0*/ systolic_array__DOT__mac_00__DOT__psum_reg;
        CData/*7:0*/ systolic_array__DOT__mac_00__DOT__mult_out;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__multiplier_done;
        CData/*7:0*/ systolic_array__DOT__mac_00__DOT__adder_in_B;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__bypass_en;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__bypass_counter;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__stream_started;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__stream_out_rdy_in_reg;
        CData/*7:0*/ systolic_array__DOT__mac_00__DOT__mul__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__mul__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_00__DOT__add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__mac_00__DOT__add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__row_data_out;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__psum_reg;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__mult_out;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__multiplier_done;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__adder_in_B;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__bypass_en;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__bypass_counter;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__stream_started;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__stream_out_rdy_in_reg;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__mul__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__mul__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_01__DOT__add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__mac_01__DOT__add__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__col_data_out;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__rst_accumulator_out;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__stream_out_rdy_out;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__psum_reg;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__mult_out;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__multiplier_done;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__adder_in_B;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__bypass_en;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__bypass_counter;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__stream_started;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__stream_out_rdy_in_reg;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__mul__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__mul__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_10__DOT__add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__mac_10__DOT__add__DOT__en_reg;
    };
    struct {
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__row_data_out;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__col_data_out;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__rst_accumulator_out;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__stream_out_rdy_out;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__psum_reg;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__mult_out;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__multiplier_done;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__adder_in_B;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__bypass_en;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__bypass_counter;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__stream_started;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__stream_out_rdy_in_reg;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__mul__DOT__mult;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__mul__DOT__en_reg;
        CData/*7:0*/ systolic_array__DOT__mac_11__DOT__add__DOT__add;
        CData/*0:0*/ systolic_array__DOT__mac_11__DOT__add__DOT__en_reg;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(row_data_in_in,15,0);
        VL_IN16(col_data_in_in,15,0);
        VL_OUT16(row_data_out,15,0);
        SData/*15:0*/ systolic_array__DOT__row_data_in;
        SData/*15:0*/ systolic_array__DOT__col_data_in;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_00__DOT__psum;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 2> systolic_array__DOT__mac_00__DOT__mul__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_01__DOT__psum;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 2> systolic_array__DOT__mac_01__DOT__mul__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_10__DOT__psum;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 2> systolic_array__DOT__mac_10__DOT__mul__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_11__DOT__psum;
        VlUnpacked<CData/*7:0*/, 2> systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__mult_delayed;
        VlUnpacked<CData/*0:0*/, 2> systolic_array__DOT__mac_11__DOT__mul__DOT__genblk1__DOT__en_delayed;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsystolic_array__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsystolic_array___024root(Vsystolic_array__Syms* symsp, const char* v__name);
    ~Vsystolic_array___024root();
    VL_UNCOPYABLE(Vsystolic_array___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
