// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMultiplier.h for the primary calling header

#include "VMultiplier__pch.h"
#include "VMultiplier___024root.h"

VL_INLINE_OPT void VMultiplier___024root___ico_sequent__TOP__0(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_10;
    IData/*31:0*/ __Vtemp_11;
    IData/*31:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_15;
    IData/*31:0*/ __Vtemp_16;
    IData/*31:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_20;
    IData/*31:0*/ __Vtemp_21;
    IData/*31:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_25;
    IData/*31:0*/ __Vtemp_26;
    IData/*31:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_30;
    IData/*31:0*/ __Vtemp_31;
    IData/*31:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_35;
    IData/*31:0*/ __Vtemp_36;
    IData/*31:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_40;
    IData/*31:0*/ __Vtemp_41;
    IData/*31:0*/ __Vtemp_42;
    VlWide<3>/*95:0*/ __Vtemp_45;
    IData/*31:0*/ __Vtemp_46;
    IData/*31:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_50;
    IData/*31:0*/ __Vtemp_51;
    IData/*31:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_55;
    IData/*31:0*/ __Vtemp_56;
    IData/*31:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_60;
    IData/*31:0*/ __Vtemp_61;
    IData/*31:0*/ __Vtemp_62;
    VlWide<3>/*95:0*/ __Vtemp_65;
    IData/*31:0*/ __Vtemp_66;
    IData/*31:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_70;
    IData/*31:0*/ __Vtemp_71;
    IData/*31:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_75;
    IData/*31:0*/ __Vtemp_76;
    IData/*31:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_80;
    IData/*31:0*/ __Vtemp_81;
    IData/*31:0*/ __Vtemp_82;
    VlWide<3>/*95:0*/ __Vtemp_85;
    IData/*31:0*/ __Vtemp_86;
    IData/*31:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_90;
    IData/*31:0*/ __Vtemp_91;
    IData/*31:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_95;
    IData/*31:0*/ __Vtemp_96;
    IData/*31:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_100;
    IData/*31:0*/ __Vtemp_101;
    IData/*31:0*/ __Vtemp_102;
    VlWide<3>/*95:0*/ __Vtemp_105;
    IData/*31:0*/ __Vtemp_106;
    IData/*31:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_110;
    IData/*31:0*/ __Vtemp_111;
    IData/*31:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_115;
    IData/*31:0*/ __Vtemp_116;
    IData/*31:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_120;
    IData/*31:0*/ __Vtemp_121;
    IData/*31:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_125;
    IData/*31:0*/ __Vtemp_126;
    IData/*31:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_130;
    IData/*31:0*/ __Vtemp_131;
    IData/*31:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_135;
    IData/*31:0*/ __Vtemp_136;
    IData/*31:0*/ __Vtemp_137;
    VlWide<3>/*95:0*/ __Vtemp_140;
    IData/*31:0*/ __Vtemp_141;
    IData/*31:0*/ __Vtemp_142;
    VlWide<3>/*95:0*/ __Vtemp_145;
    IData/*31:0*/ __Vtemp_146;
    IData/*31:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_150;
    IData/*31:0*/ __Vtemp_151;
    IData/*31:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_155;
    IData/*31:0*/ __Vtemp_156;
    IData/*31:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_160;
    // Body
    vlSelf->Multiplier__DOT__acc[0U] = ((IData)((QData)((IData)(vlSelf->B))) 
                                        << 1U);
    vlSelf->Multiplier__DOT__acc[1U] = (((IData)((QData)((IData)(vlSelf->B))) 
                                         >> 0x1fU) 
                                        | ((IData)(
                                                   ((QData)((IData)(vlSelf->B)) 
                                                    >> 0x20U)) 
                                           << 1U));
    vlSelf->Multiplier__DOT__acc[2U] = ((IData)(((QData)((IData)(vlSelf->B)) 
                                                 >> 0x20U)) 
                                        >> 0x1fU);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_1 = (((vlSelf->Multiplier__DOT__acc[2U] 
                       << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                    >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_1 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_2 = (((vlSelf->Multiplier__DOT__acc[2U] 
                       << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                    >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_2 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_5, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_5[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_5[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_5[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_6 = (((vlSelf->Multiplier__DOT__acc[2U] 
                       << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                    >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_6 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_7 = (((vlSelf->Multiplier__DOT__acc[2U] 
                       << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                    >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_7 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_10, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_10[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_10[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_10[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_11 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_11 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_12 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_12 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_15, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_15[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_15[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_15[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_16 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_16 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_17 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_17 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_20, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_20[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_20[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_20[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_21 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_21 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_22 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_22 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_25, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_25[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_25[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_25[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_26 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_26 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_27 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_27 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_30, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_30[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_30[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_30[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_31 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_31 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_32 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_32 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_35, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_35[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_35[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_35[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_36 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_36 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_37 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_37 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_40, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_40[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_40[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_40[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_41 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_41 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_42 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_42 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_45, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_45[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_45[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_45[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_46 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_46 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_47 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_47 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_50, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_50[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_50[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_50[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_51 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_51 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_52 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_52 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_55, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_55[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_55[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_55[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_56 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_56 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_57 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_57 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_60, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_60[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_60[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_60[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_61 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_61 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_62 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_62 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_65, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_65[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_65[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_65[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_66 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_66 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_67 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_67 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_70, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_70[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_70[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_70[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_71 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_71 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_72 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_72 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_75, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_75[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_75[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_75[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_76 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_76 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_77 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_77 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_80, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_80[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_80[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_80[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_81 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_81 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_82 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_82 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_85, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_85[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_85[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_85[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_86 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_86 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_87 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_87 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_90, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_90[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_90[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_90[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_91 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_91 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_92 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_92 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_95, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_95[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_95[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_95[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_96 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_96 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_97 = (((vlSelf->Multiplier__DOT__acc[2U] 
                        << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                     >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_97 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_100, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_100[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_100[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_100[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_101 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_101 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_102 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_102 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_105, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_105[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_105[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_105[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_106 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_106 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_107 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_107 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_110, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_110[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_110[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_110[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_111 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_111 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_112 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_112 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_115, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_115[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_115[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_115[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_116 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_116 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_117 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_117 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_120, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_120[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_120[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_120[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_121 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_121 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_122 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_122 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_125, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_125[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_125[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_125[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_126 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_126 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_127 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_127 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_130, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_130[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_130[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_130[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_131 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_131 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_132 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_132 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_135, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_135[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_135[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_135[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_136 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_136 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_137 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_137 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_140, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_140[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_140[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_140[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_141 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_141 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_142 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_142 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_145, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_145[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_145[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_145[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_146 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_146 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_147 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_147 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_150, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_150[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_150[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_150[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_151 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_151 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_152 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_152 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_155, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_155[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_155[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_155[2U]);
    if ((2U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_156 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) - vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                - vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_156 
                                            >> 0x1fU);
    } else if ((1U == (3U & vlSelf->Multiplier__DOT__acc[0U]))) {
        __Vtemp_157 = (((vlSelf->Multiplier__DOT__acc[2U] 
                         << 0x1fU) | (vlSelf->Multiplier__DOT__acc[1U] 
                                      >> 1U)) + vlSelf->A);
        vlSelf->Multiplier__DOT__acc[1U] = ((1U & vlSelf->Multiplier__DOT__acc[1U]) 
                                            | ((((vlSelf->Multiplier__DOT__acc[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->Multiplier__DOT__acc[1U] 
                                                    >> 1U)) 
                                                + vlSelf->A) 
                                               << 1U));
        vlSelf->Multiplier__DOT__acc[2U] = (__Vtemp_157 
                                            >> 0x1fU);
    }
    VL_SHIFTRS_WWI(65,65,32, __Vtemp_160, vlSelf->Multiplier__DOT__acc, 1U);
    vlSelf->Multiplier__DOT__acc[0U] = __Vtemp_160[0U];
    vlSelf->Multiplier__DOT__acc[1U] = __Vtemp_160[1U];
    vlSelf->Multiplier__DOT__acc[2U] = (1U & __Vtemp_160[2U]);
    vlSelf->P = (((QData)((IData)(vlSelf->Multiplier__DOT__acc[2U])) 
                  << 0x3fU) | (((QData)((IData)(vlSelf->Multiplier__DOT__acc[1U])) 
                                << 0x1fU) | ((QData)((IData)(
                                                             vlSelf->Multiplier__DOT__acc[0U])) 
                                             >> 1U)));
}

void VMultiplier___024root___eval_ico(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMultiplier___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VMultiplier___024root___eval_triggers__ico(VMultiplier___024root* vlSelf);

bool VMultiplier___024root___eval_phase__ico(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMultiplier___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMultiplier___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMultiplier___024root___eval_act(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_act\n"); );
}

void VMultiplier___024root___eval_nba(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_nba\n"); );
}

void VMultiplier___024root___eval_triggers__act(VMultiplier___024root* vlSelf);

bool VMultiplier___024root___eval_phase__act(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMultiplier___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMultiplier___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMultiplier___024root___eval_phase__nba(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMultiplier___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__ico(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__nba(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMultiplier___024root___dump_triggers__act(VMultiplier___024root* vlSelf);
#endif  // VL_DEBUG

void VMultiplier___024root___eval(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VMultiplier___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Multiplier.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMultiplier___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMultiplier___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Multiplier.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMultiplier___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Multiplier.v", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMultiplier___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMultiplier___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMultiplier___024root___eval_debug_assertions(VMultiplier___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMultiplier__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMultiplier___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
