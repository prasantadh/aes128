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

char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0293901805_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 14737);
    t4 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t14 = (t0 + 3112U);
    t15 = *((char **)t14);
    t14 = (t0 + 8016);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 128U);
    xsi_driver_first_trans_fast(t14);

LAB2:    t20 = (t0 + 7840);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t8 = (t0 + 8016);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 128U);
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 14741);
    t5 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t18 = (t0 + 3112U);
    t19 = *((char **)t18);
    t18 = (t0 + 8080);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 128U);
    xsi_driver_first_trans_fast(t18);

LAB2:    t24 = (t0 + 7856);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 1512U);
    t13 = *((char **)t9);
    t9 = (t0 + 8080);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 128U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB15:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_2(char *t0)
{
    char t16[16];
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
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(135, ng0);
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
LAB3:    t1 = (t0 + 7872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 14745);
    t6 = (t0 + 8144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 8208);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)2);
    if (t11 != 0)
        goto LAB7;

LAB9:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB10;

LAB11:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 14769);
    t3 = 1;
    if (4U == 4U)
        goto LAB39;

LAB40:    t3 = 0;

LAB41:    if (t3 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 12716U);
    t5 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t16, t2, t1, 1);
    t6 = (t0 + 8144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 4U);
    xsi_driver_first_trans_fast(t6);

LAB37:
LAB25:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 8272);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB10:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 14749);
    t11 = 1;
    if (4U == 4U)
        goto LAB15;

LAB16:    t11 = 0;

LAB17:    if (t11 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 12716U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t16, t2, t1, 1);
    t6 = (t0 + 8144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 4U);
    xsi_driver_first_trans_fast(t6);

LAB13:    goto LAB8;

LAB12:    xsi_set_current_line(143, ng0);
    t9 = (t0 + 8208);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 14757);
    t5 = (t0 + 8144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB22:    goto LAB13;

LAB15:    t12 = 0;

LAB18:    if (t12 < 4U)
        goto LAB19;
    else
        goto LAB17;

LAB19:    t7 = (t5 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB16;

LAB20:    t12 = (t12 + 1);
    goto LAB18;

LAB21:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 14753);
    t6 = (t0 + 8144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB22;

LAB24:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 1992U);
    t5 = *((char **)t1);
    t1 = (t0 + 14761);
    t11 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t11 = 0;

LAB32:    if (t11 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 12716U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t16, t2, t1, 1);
    t6 = (t0 + 8144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 4U);
    xsi_driver_first_trans_fast(t6);

LAB28:    goto LAB25;

LAB27:    xsi_set_current_line(155, ng0);
    t9 = (t0 + 14765);
    t13 = (t0 + 8144);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 4U);
    xsi_driver_first_trans_fast(t13);
    goto LAB28;

LAB30:    t12 = 0;

LAB33:    if (t12 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t7 = (t5 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB31;

LAB35:    t12 = (t12 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(161, ng0);
    t8 = (t0 + 14773);
    t10 = (t0 + 8144);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB37;

LAB39:    t12 = 0;

LAB42:    if (t12 < 4U)
        goto LAB43;
    else
        goto LAB41;

LAB43:    t6 = (t2 + t12);
    t7 = (t1 + t12);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB40;

LAB44:    t12 = (t12 + 1);
    goto LAB42;

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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 2792U);
    t11 = *((char **)t10);
    t10 = (t0 + 8336);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 128U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t16 = (t0 + 7888);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t1 = (t0 + 8336);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 128U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(127, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8400);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 7904);
    *((int *)t9) = 1;

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

LAB0:    xsi_set_current_line(129, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8464);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 7920);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0293901805_3212880686_p_6(char *t0)
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

LAB0:    xsi_set_current_line(130, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 8528);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 7936);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0293901805_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0293901805_3212880686_p_0,(void *)work_a_0293901805_3212880686_p_1,(void *)work_a_0293901805_3212880686_p_2,(void *)work_a_0293901805_3212880686_p_3,(void *)work_a_0293901805_3212880686_p_4,(void *)work_a_0293901805_3212880686_p_5,(void *)work_a_0293901805_3212880686_p_6};
	xsi_register_didat("work_a_0293901805_3212880686", "isim/test_aes_module_isim_beh.exe.sim/work/a_0293901805_3212880686.didat");
	xsi_register_executes(pe);
}
