/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
static const char *ng2 = "D:/pa1038-DO NOT DELETE/aes_128_v3/key_schedule.vhd";

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);


char *work_a_3643414621_3212880686_sub_327260779_3057020925(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t6[16];
    char t11[16];
    char t16[32];
    char t23[16];
    char t30[16];
    char t39[16];
    char t51[16];
    char t62[16];
    char t72[16];
    char t81[16];
    char t91[16];
    char t100[16];
    char t110[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    char *t53;
    int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t63;
    char *t64;
    int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    char *t74;
    char *t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t82;
    char *t83;
    int t84;
    unsigned int t85;
    int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t101;
    char *t102;
    int t103;
    unsigned int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 31;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 31);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 31;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 31);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_2592010699) + 4024);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, t11);
    t18 = (t12 + 64U);
    *((char **)t18) = t11;
    t19 = (t12 + 80U);
    *((unsigned int *)t19) = 32U;
    t20 = (t5 + 4U);
    t21 = (t3 != 0);
    if (t21 == 1)
        goto LAB3;

LAB2:    t22 = (t5 + 12U);
    *((char **)t22) = t6;
    t24 = (t1 + 3048U);
    t25 = *((char **)t24);
    t24 = (t6 + 0U);
    t26 = *((int *)t24);
    t10 = (t26 - 23);
    t27 = (t10 * 1U);
    t28 = (0 + t27);
    t29 = (t3 + t28);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 23;
    t32 = (t31 + 4U);
    *((int *)t32) = 16;
    t32 = (t31 + 8U);
    *((int *)t32) = -1;
    t33 = (16 - 23);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t35 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t29, t30);
    t36 = (t35 - 0);
    t34 = (t36 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t35);
    t37 = (8U * t34);
    t38 = (0 + t37);
    t32 = (t25 + t38);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 7;
    t41 = (t40 + 4U);
    *((int *)t41) = 0;
    t41 = (t40 + 8U);
    *((int *)t41) = -1;
    t42 = (0 - 7);
    t43 = (t42 * -1);
    t43 = (t43 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t43;
    t41 = (t1 + 2928U);
    t44 = *((char **)t41);
    t41 = (t1 + 1512U);
    t45 = *((char **)t41);
    t41 = (t1 + 9308U);
    t46 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t45, t41);
    t47 = (t46 - 0);
    t43 = (t47 * 1);
    xsi_vhdl_check_range_of_index(0, 10, 1, t46);
    t48 = (8U * t43);
    t49 = (0 + t48);
    t50 = (t44 + t49);
    t52 = (t51 + 0U);
    t53 = (t52 + 0U);
    *((int *)t53) = 7;
    t53 = (t52 + 4U);
    *((int *)t53) = 0;
    t53 = (t52 + 8U);
    *((int *)t53) = -1;
    t54 = (0 - 7);
    t55 = (t54 * -1);
    t55 = (t55 + 1);
    t53 = (t52 + 12U);
    *((unsigned int *)t53) = t55;
    t53 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t23, t32, t39, t50, t51);
    t56 = (t1 + 3048U);
    t57 = *((char **)t56);
    t56 = (t6 + 0U);
    t58 = *((int *)t56);
    t55 = (t58 - 15);
    t59 = (t55 * 1U);
    t60 = (0 + t59);
    t61 = (t3 + t60);
    t63 = (t62 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = 15;
    t64 = (t63 + 4U);
    *((int *)t64) = 8;
    t64 = (t63 + 8U);
    *((int *)t64) = -1;
    t65 = (8 - 15);
    t66 = (t65 * -1);
    t66 = (t66 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t66;
    t67 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t61, t62);
    t68 = (t67 - 0);
    t66 = (t68 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t67);
    t69 = (8U * t66);
    t70 = (0 + t69);
    t64 = (t57 + t70);
    t73 = ((IEEE_P_2592010699) + 4024);
    t71 = xsi_base_array_concat(t71, t72, t73, (char)97, t53, t23, (char)97, t64, t39, (char)101);
    t74 = (t1 + 3048U);
    t75 = *((char **)t74);
    t74 = (t6 + 0U);
    t76 = *((int *)t74);
    t77 = (t76 - 7);
    t78 = (t77 * 1U);
    t79 = (0 + t78);
    t80 = (t3 + t79);
    t82 = (t81 + 0U);
    t83 = (t82 + 0U);
    *((int *)t83) = 7;
    t83 = (t82 + 4U);
    *((int *)t83) = 0;
    t83 = (t82 + 8U);
    *((int *)t83) = -1;
    t84 = (0 - 7);
    t85 = (t84 * -1);
    t85 = (t85 + 1);
    t83 = (t82 + 12U);
    *((unsigned int *)t83) = t85;
    t86 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t80, t81);
    t87 = (t86 - 0);
    t85 = (t87 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t86);
    t88 = (8U * t85);
    t89 = (0 + t88);
    t83 = (t75 + t89);
    t92 = ((IEEE_P_2592010699) + 4024);
    t90 = xsi_base_array_concat(t90, t91, t92, (char)97, t71, t72, (char)97, t83, t39, (char)101);
    t93 = (t1 + 3048U);
    t94 = *((char **)t93);
    t93 = (t6 + 0U);
    t95 = *((int *)t93);
    t96 = (t95 - 31);
    t97 = (t96 * 1U);
    t98 = (0 + t97);
    t99 = (t3 + t98);
    t101 = (t100 + 0U);
    t102 = (t101 + 0U);
    *((int *)t102) = 31;
    t102 = (t101 + 4U);
    *((int *)t102) = 24;
    t102 = (t101 + 8U);
    *((int *)t102) = -1;
    t103 = (24 - 31);
    t104 = (t103 * -1);
    t104 = (t104 + 1);
    t102 = (t101 + 12U);
    *((unsigned int *)t102) = t104;
    t105 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t99, t100);
    t106 = (t105 - 0);
    t104 = (t106 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t105);
    t107 = (8U * t104);
    t108 = (0 + t107);
    t102 = (t94 + t108);
    t111 = ((IEEE_P_2592010699) + 4024);
    t109 = xsi_base_array_concat(t109, t110, t111, (char)97, t90, t91, (char)97, t102, t39, (char)101);
    t112 = (t12 + 56U);
    t113 = *((char **)t112);
    t112 = (t113 + 0);
    t114 = (t23 + 12U);
    t115 = *((unsigned int *)t114);
    t116 = (1U * t115);
    t117 = (t116 + 8U);
    t118 = (t117 + 8U);
    t119 = (t118 + 8U);
    memcpy(t112, t109, t119);
    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t7 = (t11 + 12U);
    t10 = *((unsigned int *)t7);
    t10 = (t10 * 1U);
    t0 = xsi_get_transient_memory(t10);
    memcpy(t0, t8, t10);
    t14 = (t11 + 0U);
    t9 = *((int *)t14);
    t15 = (t11 + 4U);
    t13 = *((int *)t15);
    t17 = (t11 + 8U);
    t26 = *((int *)t17);
    t18 = (t2 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = t9;
    t19 = (t18 + 4U);
    *((int *)t19) = t13;
    t19 = (t18 + 8U);
    *((int *)t19) = t26;
    t33 = (t13 - t9);
    t27 = (t33 * t26);
    t27 = (t27 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t27;

LAB1:    return t0;
LAB3:    *((char **)t20) = t3;
    goto LAB2;

LAB4:;
}

static void work_a_3643414621_3212880686_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char t14[16];
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(90, ng2);

LAB3:    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = (127 - 31);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = work_a_3643414621_3212880686_sub_327260779_3057020925(t0, t2, t3);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = (127 - 127);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 127;
    t16 = (t15 + 4U);
    *((int *)t16) = 96;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t17 = (96 - 127);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t8, t2, t9, t14);
    t19 = (t1 + 12U);
    t18 = *((unsigned int *)t19);
    t20 = (1U * t18);
    t21 = (32U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 5488);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t16, 32U);
    xsi_driver_first_trans_fast(t22);

LAB2:    t27 = (t0 + 5344);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t20, 0);
    goto LAB6;

}

static void work_a_3643414621_3212880686_p_1(char *t0)
{
    char t1[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(91, ng2);

LAB3:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 9436U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = (127 - 95);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 95;
    t11 = (t10 + 4U);
    *((int *)t11) = 64;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (64 - 95);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t4, t9);
    t14 = (t1 + 12U);
    t13 = *((unsigned int *)t14);
    t15 = (1U * t13);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5552);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5360);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void work_a_3643414621_3212880686_p_2(char *t0)
{
    char t1[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(92, ng2);

LAB3:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 9436U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = (127 - 63);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 63;
    t11 = (t10 + 4U);
    *((int *)t11) = 32;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (32 - 63);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t4, t9);
    t14 = (t1 + 12U);
    t13 = *((unsigned int *)t14);
    t15 = (1U * t13);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5616);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5376);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void work_a_3643414621_3212880686_p_3(char *t0)
{
    char t1[16];
    char t9[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(93, ng2);

LAB3:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t2 = (t0 + 9436U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = (127 - 31);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t4 = (t5 + t8);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 31;
    t11 = (t10 + 4U);
    *((int *)t11) = 0;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (0 - 31);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t1, t3, t2, t4, t9);
    t14 = (t1 + 12U);
    t13 = *((unsigned int *)t14);
    t15 = (1U * t13);
    t16 = (32U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 5680);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 32U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t22 = (t0 + 5392);
    *((int *)t22) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t15, 0);
    goto LAB6;

}

static void work_a_3643414621_3212880686_p_4(char *t0)
{
    char t4[16];
    char t10[16];
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(94, ng2);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4024);
    t6 = (t0 + 9436U);
    t7 = (t0 + 9436U);
    t1 = xsi_base_array_concat(t1, t4, t5, (char)97, t2, t6, (char)97, t3, t7, (char)101);
    t8 = (t0 + 2472U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4024);
    t12 = (t0 + 9436U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)97, t1, t4, (char)97, t9, t12, (char)101);
    t13 = (t0 + 2632U);
    t14 = *((char **)t13);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 9436U);
    t13 = xsi_base_array_concat(t13, t15, t16, (char)97, t8, t10, (char)97, t14, t17, (char)101);
    t18 = (32U + 32U);
    t19 = (t18 + 32U);
    t20 = (t19 + 32U);
    t21 = (128U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t22 = (t0 + 5744);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t13, 128U);
    xsi_driver_first_trans_fast_port(t22);

LAB2:    t27 = (t0 + 5408);
    *((int *)t27) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(128U, t20, 0);
    goto LAB6;

}


extern void work_a_3643414621_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643414621_3212880686_p_0,(void *)work_a_3643414621_3212880686_p_1,(void *)work_a_3643414621_3212880686_p_2,(void *)work_a_3643414621_3212880686_p_3,(void *)work_a_3643414621_3212880686_p_4};
	static char *se[] = {(void *)work_a_3643414621_3212880686_sub_327260779_3057020925};
	xsi_register_didat("work_a_3643414621_3212880686", "isim/test_aes_module_isim_beh.exe.sim/work/a_3643414621_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
