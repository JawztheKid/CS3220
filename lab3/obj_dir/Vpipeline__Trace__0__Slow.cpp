// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vpipeline__Syms.h"


VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("pipeline", VerilatedTracePrefixType::SCOPE_MODULE);
    Vpipeline___024root__trace_init_sub__TOP__pipeline__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+61,0,"FE_latch_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 136,0);
    tracep->declArray(c+66,0,"DE_latch_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 248,0);
    tracep->declArray(c+74,0,"AGEX_latch_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 142,0);
    tracep->declArray(c+79,0,"MEM_latch_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 140,0);
    tracep->declBus(c+294,0,"from_DE_to_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+84,0,"from_AGEX_to_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBus(c+345,0,"from_MEM_to_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+346,0,"from_WB_to_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+87,0,"from_AGEX_to_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+345,0,"from_MEM_to_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+88,0,"from_WB_to_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+347,0,"from_MEM_to_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"from_WB_to_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+346,0,"from_WB_to_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+4,0,"from_DE_to_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declQuad(c+49,0,"from_FU_to_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->pushPrefix("my_WB_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("my_AGEX_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+347,0,"from_MEM_to_AGEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"from_WB_to_AGEX",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+66,0,"from_DE_latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 248,0);
    tracep->declArray(c+74,0,"AGEX_latch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 142,0);
    tracep->declArray(c+84,0,"from_AGEX_to_FE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBus(c+87,0,"from_AGEX_to_DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+74,0,"AGEX_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 142,0);
    tracep->declArray(c+90,0,"AGEX_latch_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 142,0);
    tracep->declBit(c+95,0,"valid_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"inst_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"PC_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"pcplus_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"pcnext_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"op_I_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+101,0,"br_cond_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"is_br_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"is_jmp_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rd_mem_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"wr_mem_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+106,0,"wr_reg_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"wregno_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+108,0,"regval1_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"regval2_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"sxt_imm_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"aluout_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"memaddr_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"br_target_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"br_mispred_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"is_brjmp_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"do_brjmp_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"pc_xor_bhr_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("my_DE_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+61,0,"from_FE_latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 136,0);
    tracep->declBus(c+87,0,"from_AGEX_to_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+345,0,"from_MEM_to_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+88,0,"from_WB_to_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+294,0,"from_DE_to_FE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+49,0,"from_FU_to_DE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declArray(c+4,0,"from_DE_to_FU",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+66,0,"DE_latch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 248,0);
    tracep->declArray(c+66,0,"DE_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 248,0);
    tracep->declBit(c+117,0,"valid_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+118,0,"inst_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"PC_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"pcplus_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"pcnext_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"pc_xor_bhr_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+51,0,"DE_latch_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 248,0);
    tracep->declBus(c+123,0,"F3_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+124,0,"F7_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+125,0,"op_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+126,0,"op_I_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+127,0,"type_I_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+128,0,"type_immediate_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+129,0,"sxt_imm_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"wr_reg_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"wregno_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"regval_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+294,0,"pipeline_stall_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"rs1_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+134,0,"rs2_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+135,0,"rd_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+301,0,"rs1_val_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"rs2_val_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"is_br_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"is_jmp_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"rd_mem_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"wr_mem_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"wr_reg_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"use_rs1_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"use_rs2_DE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"OP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"OP2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"OP3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALUOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"CSR_ALU_OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"CSR_ALU_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+143,0,"is_aluop",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"is_op1_eALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"is_op2_eALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"is_op3_eALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"is_read_stats_eALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"is_mailbox_reg_tar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"in_use_regs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+150,0,"has_data_hazards",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"br_mispred_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"not_ready_eALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"rs2_replace_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_FE_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+294,0,"from_DE_to_FE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+84,0,"from_AGEX_to_FE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 74,0);
    tracep->declBus(c+345,0,"from_MEM_to_FE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+346,0,"from_WB_to_FE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+61,0,"FE_latch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 136,0);
    tracep->declArray(c+61,0,"FE_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 136,0);
    tracep->declBit(c+151,0,"valid_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"PC_FE_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+153,0,"inst_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"pcplus_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"pcnext_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+294,0,"stall_pipe_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+156,0,"FE_latch_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 136,0);
    tracep->declBit(c+87,0,"br_mispred_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"br_target_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"is_brjmp_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"do_brjmp_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"pc_xor_bhr_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"PC_AGEX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"BHR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("BTB_TAG", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+162+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 25,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("BTB_VALID", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+178+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("BTB_TARGET", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+194+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+210,0,"pc_xor_bhr_FE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+211,0,"pht_pred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"btb_tag_fetched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+213,0,"btb_valid_fetched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"btb_target_fetched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"num_brjmp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+216,0,"mis_pred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"correct_pred",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_FU_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"from_DE_to_FU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declQuad(c+49,0,"from_FU_to_DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declBus(c+39,0,"OP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"OP2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"OP3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALUOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"CSR_ALU_OUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"CSR_ALU_IN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ALU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"OP1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,0,"OP2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"OP3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"ALUOP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+295,0,"CSR_ALU_OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+42,0,"CSR_ALU_IN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+218,0,"div_input_a_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"div_input_b_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"mult_input_a_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"mult_input_b_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"div_output_z_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"mult_output_z_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"div_input_a_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"div_input_b_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+47,0,"mult_input_a_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"mult_input_b_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"div_output_z_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"mult_output_z_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"ALU_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"ALU_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"ALU_resutls_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"div_output_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"mult_output_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("div0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"input_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"input_a_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"input_a_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"input_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"input_b_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"input_b_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"output_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+222,0,"output_z_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"output_z_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"s_output_z_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"s_output_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"s_input_a_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"s_input_b_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+226,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"get_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"get_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"unpack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+350,0,"special_cases",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+351,0,"normalise_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+352,0,"normalise_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"divide_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,0,"divide_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+355,0,"divide_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"divide_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+357,0,"normalise_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"normalise_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+359,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+360,0,"pack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+361,0,"put_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+227,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+228,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+229,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"a_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+231,0,"b_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+232,0,"z_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+233,0,"a_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+234,0,"b_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+235,0,"z_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+236,0,"a_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"b_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+238,0,"z_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+239,0,"guard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+240,0,"round_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+242,0,"quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+244,0,"divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+246,0,"dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+248,0,"remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+250,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("mult0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"input_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"input_a_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"input_a_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+40,0,"input_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+48,0,"input_b_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"input_b_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"output_z",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,0,"output_z_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"output_z_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"s_output_z_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"s_output_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"s_input_a_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"s_input_b_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+251,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+347,0,"get_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+348,0,"get_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+349,0,"unpack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+350,0,"special_cases",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+351,0,"normalise_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+352,0,"normalise_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+353,0,"multiply_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+354,0,"multiply_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+355,0,"normalise_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+356,0,"normalise_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+357,0,"round",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"pack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+359,0,"put_z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+252,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"a_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+256,0,"b_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+257,0,"z_m",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+258,0,"a_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+259,0,"b_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+260,0,"z_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+261,0,"a_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+262,0,"b_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"z_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+264,0,"guard",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"round_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"sticky",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+267,0,"product",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("my_MEM_stage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+346,0,"from_WB_to_MEM",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declArray(c+74,0,"from_AGEX_latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 142,0);
    tracep->declArray(c+79,0,"MEM_latch_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 140,0);
    tracep->declBus(c+345,0,"from_MEM_to_FE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+345,0,"from_MEM_to_DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+347,0,"from_MEM_to_AGEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+79,0,"MEM_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 140,0);
    tracep->declBit(c+269,0,"valid_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+270,0,"MEM_latch_contents",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 140,0);
    tracep->declBus(c+275,0,"op_I_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+276,0,"inst_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"PC_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"memaddr_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"rd_val_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"aluout_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+281,0,"wr_mem_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"rd_mem_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"wregno_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+284,0,"wr_reg_MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_sub__TOP__pipeline__my_WB_stage__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+299,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+79,0,"from_MEM_latch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 140,0);
    tracep->declBus(c+345,0,"from_WB_to_FE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declQuad(c+88,0,"from_WB_to_DE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBus(c+347,0,"from_WB_to_AGEX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+345,0,"from_WB_to_MEM",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+285,0,"valid_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+286,0,"inst_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"PC_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"op_I_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+289,0,"wr_reg_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+290,0,"wregno_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+291,0,"regval_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"aluout_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"rd_val_WB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("last_WB_value", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+305,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+325,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+327,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+336,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("WB_counters", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+337,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+341,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vpipeline___024root__trace_init_top(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_init_top\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vpipeline___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vpipeline___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vpipeline___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vpipeline___024root__trace_register(Vpipeline___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_register\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vpipeline___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vpipeline___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vpipeline___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vpipeline___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vpipeline___024root__trace_const_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_const_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_const_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_const_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+345,(0U));
    bufp->fullBit(oldp+346,(0U));
    bufp->fullCData(oldp+347,(0U),4);
    bufp->fullCData(oldp+348,(1U),4);
    bufp->fullCData(oldp+349,(2U),4);
    bufp->fullCData(oldp+350,(3U),4);
    bufp->fullCData(oldp+351,(4U),4);
    bufp->fullCData(oldp+352,(5U),4);
    bufp->fullCData(oldp+353,(6U),4);
    bufp->fullCData(oldp+354,(7U),4);
    bufp->fullCData(oldp+355,(8U),4);
    bufp->fullCData(oldp+356,(9U),4);
    bufp->fullCData(oldp+357,(0xaU),4);
    bufp->fullCData(oldp+358,(0xbU),4);
    bufp->fullCData(oldp+359,(0xcU),4);
    bufp->fullCData(oldp+360,(0xdU),4);
    bufp->fullCData(oldp+361,(0xeU),4);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vpipeline___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_0\n"); );
    // Init
    Vpipeline___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vpipeline___024root*>(voidSelf);
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vpipeline___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vpipeline___024root__trace_full_0_sub_0(Vpipeline___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline___024root__trace_full_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_9;
    VlWide<5>/*159:0*/ __Vtemp_15;
    VlWide<5>/*159:0*/ __Vtemp_18;
    VlWide<5>/*159:0*/ __Vtemp_23;
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__unnamedblk2__DOT__i),32);
    __Vtemp_1[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2)))) 
                      << 7U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP) 
                                 << 3U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN)));
    __Vtemp_1[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2)))) 
                      >> 0x19U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2))) 
                                            >> 0x20U)) 
                                   << 7U));
    __Vtemp_1[2U] = ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2))) 
                              >> 0x20U)) >> 0x19U);
    bufp->fullWData(oldp+4,(__Vtemp_1),71);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[0]),32);
    bufp->fullIData(oldp+8,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[1]),32);
    bufp->fullIData(oldp+9,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[2]),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[3]),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[4]),32);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[5]),32);
    bufp->fullIData(oldp+13,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[6]),32);
    bufp->fullIData(oldp+14,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[7]),32);
    bufp->fullIData(oldp+15,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[8]),32);
    bufp->fullIData(oldp+16,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[9]),32);
    bufp->fullIData(oldp+17,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[10]),32);
    bufp->fullIData(oldp+18,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[11]),32);
    bufp->fullIData(oldp+19,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[12]),32);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[13]),32);
    bufp->fullIData(oldp+21,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[14]),32);
    bufp->fullIData(oldp+22,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[15]),32);
    bufp->fullIData(oldp+23,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[16]),32);
    bufp->fullIData(oldp+24,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[17]),32);
    bufp->fullIData(oldp+25,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[18]),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[19]),32);
    bufp->fullIData(oldp+27,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[20]),32);
    bufp->fullIData(oldp+28,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[21]),32);
    bufp->fullIData(oldp+29,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[22]),32);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[23]),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[24]),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[25]),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[26]),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[27]),32);
    bufp->fullIData(oldp+35,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[28]),32);
    bufp->fullIData(oldp+36,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[29]),32);
    bufp->fullIData(oldp+37,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[30]),32);
    bufp->fullIData(oldp+38,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file[31]),32);
    bufp->fullIData(oldp+39,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP1),32);
    bufp->fullIData(oldp+40,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__OP2),32);
    bufp->fullCData(oldp+41,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP),4);
    bufp->fullCData(oldp+42,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN),3);
    bufp->fullBit(oldp+43,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN))));
    bufp->fullBit(oldp+44,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN))));
    bufp->fullBit(oldp+45,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                               >> 1U))));
    bufp->fullBit(oldp+46,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                               >> 2U))));
    bufp->fullBit(oldp+47,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                               >> 1U))));
    bufp->fullBit(oldp+48,(((2U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP)) 
                            & ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__CSR_ALU_IN) 
                               >> 2U))));
    bufp->fullQData(oldp+49,((((QData)((IData)(((1U 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                                 ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                 : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z))) 
                               << 3U) | (QData)((IData)(
                                                        (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                          << 2U) 
                                                         | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                             << 1U) 
                                                            | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1))))))),35);
    __Vtemp_5[0U] = (((IData)((((QData)((IData)(((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                   : 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU)))])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 7U)))) 
                                                               << 0xbU) 
                                                              | (0x7ffU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU))))
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | ((0x7e0U 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U)) 
                                                                  | (0x1fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0xfU))))
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xcU) 
                                                                | ((0x800U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 4U)) 
                                                                      | (0x1eU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU)))))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (0xfffff000U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x18U) 
                                                                    | (0xfff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U))))
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                   << 0x14U) 
                                                                  | (((0xff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U)) 
                                                                      | (0x800U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x11U))) 
                                                                     | (0x7feU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (0xeU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                  : 0U))))))))) 
                      << 0x12U) | ((((((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                       | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                          | ((0x1eU 
                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                             | ((0x1fU 
                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                | ((0x20U 
                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                   | (0x21U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))))) 
                                      << 0x11U) | (
                                                   (((0x19U 
                                                      == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                     | ((0x1aU 
                                                         == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                        | (0x1bU 
                                                           == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))) 
                                                    << 0x10U) 
                                                   | ((0x17U 
                                                       == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                      << 0xfU))) 
                                    | (((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                        << 0xeU) | 
                                       ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE) 
                                        << 0xdU))) 
                                   | ((0x1f00U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 7U)) 
                                      | (0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U]))));
    __Vtemp_5[1U] = (((IData)((((QData)((IData)(((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                   : 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU)))])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 7U)))) 
                                                               << 0xbU) 
                                                              | (0x7ffU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU))))
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | ((0x7e0U 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U)) 
                                                                  | (0x1fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0xfU))))
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xcU) 
                                                                | ((0x800U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 4U)) 
                                                                      | (0x1eU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU)))))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (0xfffff000U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x18U) 
                                                                    | (0xfff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U))))
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                   << 0x14U) 
                                                                  | (((0xff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U)) 
                                                                      | (0x800U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x11U))) 
                                                                     | (0x7feU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (0xeU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                  : 0U))))))))) 
                      >> 0xeU) | ((IData)(((((QData)((IData)(
                                                             ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                               ? 
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                               : 
                                                              ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                                ? 
                                                               (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                                 << 2U) 
                                                                | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                                    << 1U) 
                                                                   | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                                : 
                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                               [
                                                               (0x1fU 
                                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                    << 4U) 
                                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                      >> 0x1cU)))])))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((1U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xbU) 
                                                                | (0x7ffU 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 4U) 
                                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 0x1cU))))
                                                                : 
                                                               ((4U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (((- (IData)(
                                                                             (1U 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                  << 0xbU) 
                                                                 | ((0x7e0U 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                        << 4U)) 
                                                                    | (0x1fU 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 0xfU))))
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                   << 0xcU) 
                                                                  | ((0x800U 
                                                                      & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                         >> 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U)) 
                                                                        | (0x1eU 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0xfU)))))
                                                                  : 
                                                                 ((3U 
                                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                   ? 
                                                                  (0xfffff000U 
                                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                       << 0x18U) 
                                                                      | (0xfff000U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U))))
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                    ? 
                                                                   (((- (IData)(
                                                                                (1U 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                     << 0x14U) 
                                                                    | (((0xff000U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 8U)) 
                                                                        | (0x800U 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                              >> 0x11U))) 
                                                                       | (0x7feU 
                                                                          & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              << 4U) 
                                                                             | (0xeU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                    : 0U)))))))) 
                                           >> 0x20U)) 
                                  << 0x12U));
    __Vtemp_5[2U] = ((IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                                   ? 
                                                  (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                                   : 
                                                  vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                  [
                                                  (0x1fU 
                                                   & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       << 4U) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                         >> 0x1cU)))])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((1U 
                                                              == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                              ? 
                                                             (((- (IData)(
                                                                          (1U 
                                                                           & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                              >> 7U)))) 
                                                               << 0xbU) 
                                                              | (0x7ffU 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 4U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 0x1cU))))
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                               ? 
                                                              (((- (IData)(
                                                                           (1U 
                                                                            & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                               >> 7U)))) 
                                                                << 0xbU) 
                                                               | ((0x7e0U 
                                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                      << 4U)) 
                                                                  | (0x1fU 
                                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                        >> 0xfU))))
                                                               : 
                                                              ((5U 
                                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                 << 0xcU) 
                                                                | ((0x800U 
                                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                       >> 4U)) 
                                                                   | ((0x7e0U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                          << 4U)) 
                                                                      | (0x1eU 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0xfU)))))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                 ? 
                                                                (0xfffff000U 
                                                                 & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                     << 0x18U) 
                                                                    | (0xfff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U))))
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                                  ? 
                                                                 (((- (IData)(
                                                                              (1U 
                                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                                >> 7U)))) 
                                                                   << 0x14U) 
                                                                  | (((0xff000U 
                                                                       & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                          >> 8U)) 
                                                                      | (0x800U 
                                                                         & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                            >> 0x11U))) 
                                                                     | (0x7feU 
                                                                        & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                            << 4U) 
                                                                           | (0xeU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x1cU))))))
                                                                  : 0U)))))))) 
                              >> 0x20U)) >> 0xeU);
    __Vtemp_7[0U] = __Vtemp_5[0U];
    __Vtemp_7[1U] = __Vtemp_5[1U];
    __Vtemp_7[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                            [
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                >> 0x17U))])))) 
                      << 0x12U) | __Vtemp_5[2U]);
    __Vtemp_7[3U] = ((0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                     << 0x10U)) | (
                                                   ((IData)(
                                                            (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                               [
                                                                               (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))])))) 
                                                    >> 0xeU) 
                                                   | ((IData)(
                                                              ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                                                                [
                                                                                (0x1fU 
                                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                                >> 0x17U))]))) 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    __Vtemp_7[4U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                    << 0x10U)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                                  >> 0x10U)) 
                     | (0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                       << 0x10U)));
    __Vtemp_7[5U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                    << 0x10U)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                                  >> 0x10U)) 
                     | (0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                       << 0x10U)));
    __Vtemp_7[6U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                    << 0x10U)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                                  >> 0x10U)) 
                     | (0xff000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                       << 0x10U)));
    __Vtemp_7[7U] = (((0xff0000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                    << 0x10U)) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 0x10U)) 
                     | (0x1000000U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                      << 0x10U)));
    bufp->fullWData(oldp+51,(__Vtemp_7),249);
    bufp->fullIData(oldp+59,(((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU)
                               ? ((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                   ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                   : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)
                               : ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)
                                   ? (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                       << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))
                                   : vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                                  [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                              << 4U) 
                                             | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                >> 0x1cU)))]))),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__pipeline.__PVT__cycle_count),32);
    bufp->fullWData(oldp+61,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch),137);
    bufp->fullWData(oldp+66,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch),249);
    bufp->fullWData(oldp+74,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch),143);
    bufp->fullWData(oldp+79,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch),141);
    __Vtemp_9[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                              << 0x29U) | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                            << 0x28U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                  << 8U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                    >> 0x18U))))))));
    __Vtemp_9[1U] = ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                      << 0xaU) | (IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX)) 
                                            << 0x29U) 
                                           | (((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX)) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U]))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                                     << 8U) 
                                                                    | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                                       >> 0x18U))))))) 
                                          >> 0x20U)));
    __Vtemp_9[2U] = (((IData)(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE) 
                      << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX 
                                  >> 0x16U));
    bufp->fullWData(oldp+84,(__Vtemp_9),75);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__pipeline.__PVT__from_AGEX_to_DE));
    bufp->fullQData(oldp+88,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE),38);
    __Vtemp_15[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                       << 8U) | (0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                          >> 8U)));
    __Vtemp_15[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX)))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp_15[2U] = ((((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                         << 0x16U) | (0x3fc000U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                                   >> 0xaU))) 
                       | (0x3f00U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                     >> 0xaU))) | ((IData)(
                                                           ((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX)) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U));
    __Vtemp_15[3U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                >> 0xaU)) | ((0x3f00U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                 >> 0xaU)) 
                                             | ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 << 0x16U) 
                                                | (0x3fc000U 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                                      >> 0xaU)))));
    __Vtemp_15[4U] = ((0xffU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                >> 0xaU)) | ((0x3f00U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                 >> 0xaU)) 
                                             | (0x4000U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                                   >> 0xaU))));
    bufp->fullWData(oldp+90,(__Vtemp_15),143);
    bufp->fullBit(oldp+95,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                                  >> 0x18U))));
    bufp->fullIData(oldp+96,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[7U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+97,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[6U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+98,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[5U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                                         >> 0x18U))),32);
    bufp->fullIData(oldp+99,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[4U] 
                               << 8U) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                         >> 0x18U))),32);
    bufp->fullCData(oldp+100,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                        >> 0x12U))),6);
    bufp->fullBit(oldp+101,(((0x1cU == (0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                 >> 0x12U)))
                              ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                   << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                               >> 0x12U)) 
                                 == ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                      << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                  >> 0x12U)))
                              : ((0x1dU == (0x3fU & 
                                            (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                             >> 0x12U)))
                                  ? (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                       << 0xeU) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                   >> 0x12U)) 
                                     != ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                          << 0xeU) 
                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x12U)))
                                  : ((0x1eU == (0x3fU 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                   >> 0x12U)))
                                      ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hbd4b694e__0)
                                      : ((0x1fU == 
                                          (0x3fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                            >> 0x12U)))
                                          ? VL_GTES_III(32, 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                          << 0xeU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                            >> 0x12U)), 
                                                        ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                          << 0xeU) 
                                                         | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                            >> 0x12U)))
                                          : ((0x20U 
                                              == (0x3fU 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                     >> 0x12U)))
                                              ? (IData)(vlSymsp->TOP__pipeline.my_AGEX_stage__DOT____VdfgExtracted_hbdd0c81c__0)
                                              : ((0x21U 
                                                  == 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                      >> 0x12U))) 
                                                 && (((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                                       << 0xeU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                         >> 0x12U)) 
                                                     >= 
                                                     ((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                                       << 0xeU) 
                                                      | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                                         >> 0x12U)))))))))));
    bufp->fullBit(oldp+102,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x11U))));
    bufp->fullBit(oldp+103,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0x10U))));
    bufp->fullBit(oldp+104,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xfU))));
    bufp->fullBit(oldp+105,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xeU))));
    bufp->fullBit(oldp+106,((1U & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                   >> 0xdU))));
    bufp->fullCData(oldp+107,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                        >> 8U))),5);
    bufp->fullIData(oldp+108,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[3U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+109,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[2U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+110,(((vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[1U] 
                                << 0xeU) | (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U] 
                                            >> 0x12U))),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__aluout_AGEX),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__memaddr_AGEX),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__br_target_AGEX),32);
    bufp->fullBit(oldp+114,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__is_brjmp_AGEX));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__do_brjmp_AGEX));
    bufp->fullCData(oldp+116,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__DE_latch[0U])),8);
    bufp->fullBit(oldp+117,((1U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                   >> 8U))));
    bufp->fullIData(oldp+118,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+119,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+120,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+121,(((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U] 
                                             >> 8U))),32);
    bufp->fullCData(oldp+122,((0xffU & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[0U])),8);
    bufp->fullCData(oldp+123,((7U & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                     >> 0x14U))),3);
    bufp->fullCData(oldp+124,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                        >> 1U))),7);
    bufp->fullCData(oldp+125,((0x7fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 8U))),7);
    bufp->fullCData(oldp+126,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE),6);
    bufp->fullCData(oldp+127,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_I_DE),4);
    bufp->fullCData(oldp+128,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE),3);
    bufp->fullIData(oldp+129,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                ? (((- (IData)((1U 
                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   >> 7U)))) 
                                    << 0xbU) | (0x7ffU 
                                                & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                    << 4U) 
                                                   | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                      >> 0x1cU))))
                                : ((4U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                       >> 7U)))) 
                                        << 0xbU) | 
                                       ((0x7e0U & (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 4U)) 
                                        | (0x1fU & 
                                           (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                            >> 0xfU))))
                                    : ((5U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                           >> 7U)))) 
                                            << 0xcU) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                  >> 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                     << 4U)) 
                                                 | (0x1eU 
                                                    & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                       >> 0xfU)))))
                                        : ((3U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                            ? (0xfffff000U 
                                               & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                   << 0x18U) 
                                                  | (0xfff000U 
                                                     & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                        >> 8U))))
                                            : ((2U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__type_immediate_DE))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                                   >> 7U)))) 
                                                    << 0x14U) 
                                                   | (((0xff000U 
                                                        & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                           >> 8U)) 
                                                       | (0x800U 
                                                          & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                             >> 0x11U))) 
                                                      | (0x7feU 
                                                         & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                             << 4U) 
                                                            | (0xeU 
                                                               & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                                  >> 0x1cU))))))
                                                : 0U)))))),32);
    bufp->fullBit(oldp+130,((1U & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                           >> 0x25U)))));
    bufp->fullCData(oldp+131,((0x1fU & (IData)((vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE 
                                                >> 0x20U)))),5);
    bufp->fullIData(oldp+132,((IData)(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__from_WB_to_DE)),32);
    bufp->fullCData(oldp+133,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0x17U))),5);
    bufp->fullCData(oldp+134,((0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                         << 4U) | (
                                                   vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU)))),5);
    bufp->fullCData(oldp+135,((0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                        >> 0xfU))),5);
    bufp->fullBit(oldp+136,(((0x1cU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1dU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | ((0x1eU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                   | ((0x1fU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                      | ((0x20U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                         | (0x21U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)))))))));
    bufp->fullBit(oldp+137,(((0x19U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                             | ((0x1aU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                | (0x1bU == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))))));
    bufp->fullBit(oldp+138,((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+139,((0x18U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE))));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__wr_reg_DE));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE));
    bufp->fullBit(oldp+143,((IData)(((0x17U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                     & (0xe8000U == 
                                        (0xf8000U & 
                                         vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U]))))));
    bufp->fullBit(oldp+144,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_eALU));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_eALU));
    bufp->fullBit(oldp+146,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU));
    bufp->fullBit(oldp+147,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU));
    bufp->fullBit(oldp+148,(((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_eALU) 
                             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_eALU) 
                                | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU) 
                                   | ((IData)(((0x17U 
                                                == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__op_I_DE)) 
                                               & (0xe8000U 
                                                  == 
                                                  (0xf8000U 
                                                   & vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U])))) 
                                      | (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_read_stats_eALU)))))));
    bufp->fullIData(oldp+149,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs),32);
    bufp->fullBit(oldp+150,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs1_DE) 
                              & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                 >> (0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                              >> 0x17U)))) 
                             | ((IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__use_rs2_DE) 
                                & (vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__in_use_regs 
                                   >> (0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                                 << 4U) 
                                                | (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                                   >> 0x1cU))))))));
    bufp->fullBit(oldp+151,((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                             [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                          >> 2U))])));
    bufp->fullIData(oldp+152,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch),32);
    bufp->fullIData(oldp+153,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                           >> 2U))]),32);
    bufp->fullIData(oldp+154,(((IData)(4U) + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)),32);
    bufp->fullIData(oldp+155,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE),32);
    __Vtemp_18[0U] = (((IData)((((QData)((IData)(((IData)(4U) 
                                                  + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                       << 8U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE));
    __Vtemp_18[1U] = (((IData)((((QData)((IData)(((IData)(4U) 
                                                  + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE)))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(
                                                               ((IData)(4U) 
                                                                + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp_18[2U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                 [(0x3fffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                       << 8U) | ((IData)(((((QData)((IData)(
                                                            ((IData)(4U) 
                                                             + vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pcnext_FE))) 
                                          >> 0x20U)) 
                                 >> 0x18U));
    __Vtemp_18[3U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                 [(0x3fffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                 << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch)))) 
                       >> 0x18U) | ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                               [
                                                               (0x3fffU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                                   >> 2U))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                             >> 0x20U)) 
                                    << 8U));
    __Vtemp_18[4U] = (((IData)(((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                                  [
                                                  (0x3fffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                                      >> 2U))])) 
                                  << 0x20U) | (QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch))) 
                                >> 0x20U)) >> 0x18U) 
                      | ((IData)((0U != vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__imem
                                  [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                               >> 2U))])) 
                         << 8U));
    bufp->fullWData(oldp+156,(__Vtemp_18),137);
    bufp->fullCData(oldp+161,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BHR),8);
    bufp->fullIData(oldp+162,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[0]),26);
    bufp->fullIData(oldp+163,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[1]),26);
    bufp->fullIData(oldp+164,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[2]),26);
    bufp->fullIData(oldp+165,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[3]),26);
    bufp->fullIData(oldp+166,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[4]),26);
    bufp->fullIData(oldp+167,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[5]),26);
    bufp->fullIData(oldp+168,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[6]),26);
    bufp->fullIData(oldp+169,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[7]),26);
    bufp->fullIData(oldp+170,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[8]),26);
    bufp->fullIData(oldp+171,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[9]),26);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[10]),26);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[11]),26);
    bufp->fullIData(oldp+174,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[12]),26);
    bufp->fullIData(oldp+175,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[13]),26);
    bufp->fullIData(oldp+176,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[14]),26);
    bufp->fullIData(oldp+177,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG[15]),26);
    bufp->fullBit(oldp+178,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[0]));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[1]));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[2]));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[3]));
    bufp->fullBit(oldp+182,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[4]));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[5]));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[6]));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[7]));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[8]));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[9]));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[10]));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[11]));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[12]));
    bufp->fullBit(oldp+191,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[13]));
    bufp->fullBit(oldp+192,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[14]));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID[15]));
    bufp->fullIData(oldp+194,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[0]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[1]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[2]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[3]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[4]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[5]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[6]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[7]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[8]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[9]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[10]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[11]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[12]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[13]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[14]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET[15]),32);
    bufp->fullCData(oldp+210,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE),8);
    bufp->fullBit(oldp+211,((1U < vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PHT
                             [vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__pc_xor_bhr_FE])));
    bufp->fullIData(oldp+212,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TAG
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),26);
    bufp->fullBit(oldp+213,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_VALID
                            [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                      >> 2U))]));
    bufp->fullIData(oldp+214,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__BTB_TARGET
                              [(0xfU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__PC_FE_latch 
                                        >> 2U))]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred),32);
    bufp->fullIData(oldp+217,((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__num_brjmp 
                               - vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__mis_pred)),32);
    bufp->fullBit(oldp+218,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_a_ack));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_input_b_ack));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z_stb));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z_stb));
    bufp->fullIData(oldp+224,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z),32);
    bufp->fullCData(oldp+226,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__state),4);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_m),24);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_m),24);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_m),24);
    bufp->fullSData(oldp+233,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_e),10);
    bufp->fullSData(oldp+234,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_e),10);
    bufp->fullSData(oldp+235,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_e),10);
    bufp->fullBit(oldp+236,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__a_s));
    bufp->fullBit(oldp+237,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__b_s));
    bufp->fullBit(oldp+238,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__z_s));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__guard));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__round_bit));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__sticky));
    bufp->fullQData(oldp+242,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__quotient),51);
    bufp->fullQData(oldp+244,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__divisor),51);
    bufp->fullQData(oldp+246,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__dividend),51);
    bufp->fullQData(oldp+248,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__remainder),51);
    bufp->fullCData(oldp+250,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__count),6);
    bufp->fullCData(oldp+251,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__state),4);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_m),24);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_m),24);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_m),24);
    bufp->fullSData(oldp+258,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_e),10);
    bufp->fullSData(oldp+259,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_e),10);
    bufp->fullSData(oldp+260,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_e),10);
    bufp->fullBit(oldp+261,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__a_s));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__b_s));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__z_s));
    bufp->fullBit(oldp+264,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__guard));
    bufp->fullBit(oldp+265,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__round_bit));
    bufp->fullBit(oldp+266,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__sticky));
    bufp->fullQData(oldp+267,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__product),48);
    bufp->fullBit(oldp+269,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                   >> 0xeU))));
    __Vtemp_23[0U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                 [(0x3fffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 0xaU))])) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                 >> 8U)))))) 
                       << 6U) | (0x3fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U]));
    __Vtemp_23[1U] = (((IData)((((QData)((IData)(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                 [(0x3fffU 
                                                   & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                      >> 0xaU))])) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                               << 0x18U) 
                                                              | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                 >> 8U)))))) 
                       >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                               vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                               [
                                                               (0x3fffU 
                                                                & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                   >> 0xaU))])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                  << 0x18U) 
                                                                 | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                    >> 8U))))) 
                                             >> 0x20U)) 
                                    << 6U));
    __Vtemp_23[2U] = (((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                        << 0x1eU) | (0x3fffffc0U & 
                                     (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                      >> 2U))) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                                                                             [
                                                                             (0x3fffU 
                                                                              & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                >> 0xaU))])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                                                                << 0x18U) 
                                                                               | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                                                                >> 8U))))) 
                                                           >> 0x20U)) 
                                                  >> 0x1aU));
    __Vtemp_23[3U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                >> 2U)) | ((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                            << 0x1eU) 
                                           | (0x3fffffc0U 
                                              & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                                 >> 2U))));
    __Vtemp_23[4U] = ((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                >> 2U)) | (0x1fc0U 
                                           & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                              >> 2U)));
    bufp->fullWData(oldp+270,(__Vtemp_23),141);
    bufp->fullCData(oldp+275,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                        >> 8U))),6);
    bufp->fullIData(oldp+276,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[4U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+277,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[3U] 
                                << 0x12U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                             >> 0xeU))),32);
    bufp->fullIData(oldp+278,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[2U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                             >> 8U))),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__dmem
                              [(0x3fffU & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                           >> 0xaU))]),32);
    bufp->fullIData(oldp+280,(((vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[1U] 
                                << 0x18U) | (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                             >> 8U))),32);
    bufp->fullBit(oldp+281,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 6U))));
    bufp->fullBit(oldp+282,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 7U))));
    bufp->fullCData(oldp+283,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U])),5);
    bufp->fullBit(oldp+284,((1U & (vlSymsp->TOP__pipeline.__PVT__my_AGEX_stage__DOT__AGEX_latch[0U] 
                                   >> 5U))));
    bufp->fullBit(oldp+285,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                   >> 0xcU))));
    bufp->fullIData(oldp+286,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[4U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                             >> 0xcU))),32);
    bufp->fullIData(oldp+287,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[3U] 
                                << 0x14U) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                             >> 0xcU))),32);
    bufp->fullCData(oldp+288,((0x3fU & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                        >> 6U))),6);
    bufp->fullBit(oldp+289,((1U & (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                   >> 5U))));
    bufp->fullCData(oldp+290,((0x1fU & vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U])),5);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__pipeline__my_WB_stage.__PVT__regval_WB),32);
    bufp->fullIData(oldp+292,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[0U] 
                                             >> 6U))),32);
    bufp->fullIData(oldp+293,(((vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[2U] 
                                << 0x1aU) | (vlSymsp->TOP__pipeline.__PVT__my_MEM_stage__DOT__MEM_latch[1U] 
                                             >> 6U))),32);
    bufp->fullBit(oldp+294,(vlSymsp->TOP__pipeline.__PVT__from_DE_to_FE));
    bufp->fullCData(oldp+295,((((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid) 
                                << 2U) | (((IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2) 
                                           << 1U) | (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)))),3);
    bufp->fullBit(oldp+296,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1));
    bufp->fullBit(oldp+297,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2));
    bufp->fullBit(oldp+298,(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid));
    bufp->fullBit(oldp+299,(vlSelfRef.clk));
    bufp->fullBit(oldp+300,(vlSelfRef.reset));
    bufp->fullIData(oldp+301,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                         >> 0x17U))]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__reg_file
                              [(0x1fU & ((vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[4U] 
                                          << 4U) | 
                                         (vlSymsp->TOP__pipeline.__PVT__my_FE_stage__DOT__FE_latch[3U] 
                                          >> 0x1cU)))]),32);
    bufp->fullIData(oldp+303,(((1U == (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__ALUOP))
                                ? vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__div0__DOT__s_output_z
                                : vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__mult0__DOT__s_output_z)),32);
    bufp->fullBit(oldp+304,((((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_1)) 
                              & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op1_eALU)) 
                             | (((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_ready_2)) 
                                 & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op2_eALU)) 
                                | ((~ (IData)(vlSymsp->TOP__pipeline.__PVT__my_FU_stage__DOT__ALU__DOT__ALU_resutls_valid)) 
                                   & (IData)(vlSymsp->TOP__pipeline.__PVT__my_DE_stage__DOT__is_op3_eALU))))));
    bufp->fullIData(oldp+305,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0U]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[1U]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[2U]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[3U]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[4U]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[5U]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[6U]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[7U]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[8U]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[9U]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xaU]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xbU]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xcU]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xdU]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xeU]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0xfU]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x10U]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x11U]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x12U]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x13U]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x14U]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x15U]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x16U]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x17U]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x18U]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x19U]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1aU]),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1bU]),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1cU]),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1dU]),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1eU]),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__pipeline__my_WB_stage.last_WB_value[0x1fU]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[0U]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[1U]),32);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[2U]),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[3U]),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[4U]),32);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[5U]),32);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[6U]),32);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__pipeline__my_WB_stage.WB_counters[7U]),32);
}
