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
static const char *ng0 = "D:/pa1038-DO NOT DELETE/aes_128_v3/aes_module.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0293901805_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    int t11;
    int t12;

LAB0:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6800);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)0);
    if (t9 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t3 = (t11 == 0);
    if (t3 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 - 1);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);

LAB25:
LAB19:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 6864);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    t9 = (t11 == 10);
    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB8;

LAB12:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6800);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 6736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 10;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB13;

LAB15:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB16;

LAB18:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    t9 = (t11 == 10);
    if (t9 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 6736);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB22;

LAB24:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 6736);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 10;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

}

static void work_a_0293901805_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2792U);
    t11 = *((char **)t10);
    t10 = (t0 + 6928);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 128U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t16 = (t0 + 6576);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 6928);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 128U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(85, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 4);
    t5 = (t0 + 6992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6592);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7056);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 6608);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(86, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 4);
    t5 = (t0 + 7120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6624);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 6640);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_6(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, t4, 4);
    t5 = (t0 + 7248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);

LAB2:    t10 = (t0 + 6656);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0293901805_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0293901805_3212880686_p_0,(void *)work_a_0293901805_3212880686_p_1,(void *)work_a_0293901805_3212880686_p_2,(void *)work_a_0293901805_3212880686_p_3,(void *)work_a_0293901805_3212880686_p_4,(void *)work_a_0293901805_3212880686_p_5,(void *)work_a_0293901805_3212880686_p_6};
	xsi_register_didat("work_a_0293901805_3212880686", "isim/test_aes_module_isim_beh.exe.sim/work/a_0293901805_3212880686.didat");
	xsi_register_executes(pe);
}
