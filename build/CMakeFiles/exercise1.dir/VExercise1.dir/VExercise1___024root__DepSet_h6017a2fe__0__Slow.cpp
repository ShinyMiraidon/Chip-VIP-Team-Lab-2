// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExercise1.h for the primary calling header

#include "verilated.h"

#include "VExercise1__Syms.h"
#include "VExercise1___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VExercise1___024root___dump_triggers__stl(VExercise1___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VExercise1___024root___eval_triggers__stl(VExercise1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VExercise1___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VExercise1___024root___configure_coverage(VExercise1___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VExercise1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExercise1___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "/Users/michaellippe/Local", 10, 18, ".Exercise1", "v_toggle/Exercise1", "op[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "/Users/michaellippe/Local", 10, 18, ".Exercise1", "v_toggle/Exercise1", "op[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "/Users/michaellippe/Local", 11, 18, ".Exercise1", "v_toggle/Exercise1", "a[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[13]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[14]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "/Users/michaellippe/Local", 12, 18, ".Exercise1", "v_toggle/Exercise1", "b[7]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[0]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[1]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[2]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[21]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[3]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[22]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[4]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[23]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[5]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[24]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[6]", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[25]), first, "/Users/michaellippe/Local", 13, 18, ".Exercise1", "v_toggle/Exercise1", "out[7]", "");
}
