// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22050243_Mem.h for the primary calling header

#include "Vysyx_22050243_Mem___024root.h"
#include "Vysyx_22050243_Mem__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void MEM_pmem_write(long long waddr, long long wdata, char wmask, svBit w_en);

VL_INLINE_OPT void Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask, CData/*0:0*/ w_en) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_write_TOP\n"); );
    // Body
    long long waddr__Vcvt;
    for (size_t waddr__Vidx = 0; waddr__Vidx < 1; ++waddr__Vidx) waddr__Vcvt = waddr;
    long long wdata__Vcvt;
    for (size_t wdata__Vidx = 0; wdata__Vidx < 1; ++wdata__Vidx) wdata__Vcvt = wdata;
    char wmask__Vcvt;
    for (size_t wmask__Vidx = 0; wmask__Vidx < 1; ++wmask__Vidx) wmask__Vcvt = wmask;
    svBit w_en__Vcvt;
    for (size_t w_en__Vidx = 0; w_en__Vidx < 1; ++w_en__Vidx) w_en__Vcvt = w_en;
    MEM_pmem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt, w_en__Vcvt);
}

extern "C" void MEM_pmem_read(long long raddr, long long* rdata, svBit r_en);

VL_INLINE_OPT void Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ r_en) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    svBit r_en__Vcvt;
    for (size_t r_en__Vidx = 0; r_en__Vidx < 1; ++r_en__Vidx) r_en__Vcvt = r_en;
    MEM_pmem_read(raddr__Vcvt, &rdata__Vcvt, r_en__Vcvt);
    rdata = rdata__Vcvt;
}

VL_INLINE_OPT void Vysyx_22050243_Mem___024root___combo__TOP__1(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___combo__TOP__1\n"); );
    // Body
    Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_read_TOP(vlSelf->data_addr, vlSelf->__Vtask_ysyx_22050243_Mem__DOT__MEM_pmem_read__1__rdata, (IData)(vlSelf->data_r_en));
    vlSelf->data_r = vlSelf->__Vtask_ysyx_22050243_Mem__DOT__MEM_pmem_read__1__rdata;
    VL_WRITEF("o_data_r = %x\n",64,vlSelf->data_r);
}

VL_INLINE_OPT void Vysyx_22050243_Mem___024root___sequent__TOP__3(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___sequent__TOP__3\n"); );
    // Body
    Vysyx_22050243_Mem___024root____Vdpiimwrap_ysyx_22050243_Mem__DOT__MEM_pmem_write_TOP(vlSelf->data_addr, vlSelf->data_w, (IData)(vlSelf->data_wmask), vlSelf->data_w_en);
}

void Vysyx_22050243_Mem___024root___eval(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___eval\n"); );
    // Body
    Vysyx_22050243_Mem___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vysyx_22050243_Mem___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vysyx_22050243_Mem___024root___change_request_1(Vysyx_22050243_Mem___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22050243_Mem___024root___change_request(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___change_request\n"); );
    // Body
    return (Vysyx_22050243_Mem___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22050243_Mem___024root___change_request_1(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22050243_Mem___024root___eval_debug_assertions(Vysyx_22050243_Mem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22050243_Mem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22050243_Mem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->data_w_en & 0xfeU))) {
        Verilated::overWidthError("data_w_en");}
    if (VL_UNLIKELY((vlSelf->data_r_en & 0xfeU))) {
        Verilated::overWidthError("data_r_en");}
}
#endif  // VL_DEBUG
