// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->top__DOT__sum_wire),16);
        bufp->chgSData(oldp+1,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[0]),16);
        bufp->chgSData(oldp+2,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[1]),16);
        bufp->chgSData(oldp+3,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[2]),16);
        bufp->chgSData(oldp+4,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[3]),16);
        bufp->chgSData(oldp+5,(vlSelf->top__DOT____Vcellout__hex2dec_module__dec[4]),16);
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[0]),16);
        bufp->chgSData(oldp+7,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[1]),16);
        bufp->chgSData(oldp+8,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[2]),16);
        bufp->chgSData(oldp+9,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[3]),16);
        bufp->chgSData(oldp+10,(vlSelf->top__DOT__hex2dec_module__DOT__wire_1[4]),16);
        bufp->chgSData(oldp+11,(vlSelf->top__DOT__sum_module__DOT__get_sum),16);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__sum_module__DOT__counter),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__sum_module__DOT__get_n),8);
    }
    bufp->chgBit(oldp+14,(vlSelf->clk_i));
    bufp->chgBit(oldp+15,(vlSelf->rst_ni));
    bufp->chgBit(oldp+16,(vlSelf->start_i));
    bufp->chgCData(oldp+17,(vlSelf->data_i),8);
    bufp->chgCData(oldp+18,(vlSelf->n_i),8);
    bufp->chgBit(oldp+19,(vlSelf->done_o));
    bufp->chgSData(oldp+20,(vlSelf->dec[0]),16);
    bufp->chgSData(oldp+21,(vlSelf->dec[1]),16);
    bufp->chgSData(oldp+22,(vlSelf->dec[2]),16);
    bufp->chgSData(oldp+23,(vlSelf->dec[3]),16);
    bufp->chgSData(oldp+24,(vlSelf->dec[4]),16);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
