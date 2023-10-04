// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"start_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+19,"n_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+20,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+21+i*1,"dec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 15,0);
    }
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+15,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"start_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+19,"n_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+20,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+21+i*1,"dec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 15,0);
    }
    tracep->declBus(c+1,"sum_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->pushNamePrefix("hex2dec_module ");
    tracep->declBus(c+1,"hex_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+2+i*1,"dec",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 15,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+7+i*1,"wire_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 15,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sum_module ");
    tracep->declBit(c+16,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"start_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+19,"n_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+20,"done_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1,"sum_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
    tracep->declBus(c+12,"get_sum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
    tracep->declBus(c+13,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,"get_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__sum_wire),16);
    bufp->fullSData(oldp+2,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[0]),16);
    bufp->fullSData(oldp+3,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[1]),16);
    bufp->fullSData(oldp+4,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[2]),16);
    bufp->fullSData(oldp+5,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[3]),16);
    bufp->fullSData(oldp+6,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[4]),16);
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[0]),16);
    bufp->fullSData(oldp+8,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[1]),16);
    bufp->fullSData(oldp+9,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[2]),16);
    bufp->fullSData(oldp+10,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[3]),16);
    bufp->fullSData(oldp+11,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[4]),16);
    bufp->fullSData(oldp+12,(vlSelf->top__DOT__sum_module__DOT__get_sum),16);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__sum_module__DOT__counter),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__sum_module__DOT__get_n),8);
    bufp->fullBit(oldp+15,(vlSelf->clk_i));
    bufp->fullBit(oldp+16,(vlSelf->rst_ni));
    bufp->fullBit(oldp+17,(vlSelf->start_i));
    bufp->fullCData(oldp+18,(vlSelf->data_i),8);
    bufp->fullCData(oldp+19,(vlSelf->n_i),8);
    bufp->fullBit(oldp+20,(vlSelf->done_o));
    bufp->fullSData(oldp+21,(vlSelf->dec[0]),16);
    bufp->fullSData(oldp+22,(vlSelf->dec[1]),16);
    bufp->fullSData(oldp+23,(vlSelf->dec[2]),16);
    bufp->fullSData(oldp+24,(vlSelf->dec[3]),16);
    bufp->fullSData(oldp+25,(vlSelf->dec[4]),16);
}
