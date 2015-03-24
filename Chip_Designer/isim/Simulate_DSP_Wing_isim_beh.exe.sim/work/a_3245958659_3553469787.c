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
static const char *ng0 = "D:/MyProjects/Papilio/DesignLabSketchbook/DSP_Wing/Chip_Designer/Simulate_DSP_Wing.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3245958659_3553469787_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    int64 t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    t3 = *((int64 *)t2);
    t4 = (t3 / 2);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t6);
    t1 = (t0 + 9520);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t7;
    xsi_driver_first_trans_delta(t1, 0U, 1, t4);
    t12 = (t0 + 9520);
    xsi_driver_intertial_reject(t12, t4, t4);

LAB2:    t13 = (t0 + 9216);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(65, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9584);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 9232);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_2(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 5976);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 9648);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 5976);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 9648);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}

static void work_a_3245958659_3553469787_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9712);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 39U, 1, 0LL);

LAB2:    t8 = (t0 + 9248);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(90, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9776);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 40U, 1, 0LL);

LAB2:    t8 = (t0 + 9264);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9840);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_delta(t1, 41U, 32U, 0LL);

LAB2:    t7 = (t0 + 9280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (31 - 24);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 9904);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 25U);
    xsi_driver_first_trans_delta(t6, 73U, 25U, 0LL);

LAB2:    t11 = (t0 + 9296);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(93, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 9968);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 98U, 1, 0LL);

LAB2:    t8 = (t0 + 9312);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(94, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10032);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 99U, 1, 0LL);

LAB2:    t8 = (t0 + 9328);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(95, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_delta(t1, 100U, 1, 0LL);

LAB2:    t8 = (t0 + 9344);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(96, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (100 - 33);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 10160);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 9360);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = (1 - 100);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 10224);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 9376);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3245958659_3553469787_p_12(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = (1 * 1LL);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 10288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 32U);
    xsi_driver_first_trans_delta(t2, 0U, 32U, t1);

LAB2:    t8 = (t0 + 9392);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

void work_a_3245958659_3553469787_sub_4087318595_2664788435(char *t0, char *t1, char *t2, char *t3)
{
    char t5[40];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;

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
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 12U);
    *((char **)t15) = t6;
    t16 = (t5 + 20U);
    t17 = (t3 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t5 + 28U);
    *((char **)t18) = t11;
    t19 = (t0 + 10352);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    t7 = (t0 + 10416);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10480);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10544);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 16232U);
    t23 = (t22 + 12U);
    t10 = *((unsigned int *)t23);
    t10 = (t10 * 1U);
    memcpy(t21, t3, t10);
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10608);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 16248U);
    t23 = (t22 + 12U);
    t10 = *((unsigned int *)t23);
    t10 = (t10 * 1U);
    memcpy(t21, t2, t10);
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB9:    t8 = (t1 + 224U);
    t8 = *((char **)t8);
    xsi_wp_set_status(t8, 1);
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 2480U);
    *((unsigned int *)t21) = 1U;
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    getcontext(t24);
    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 2480U);
    t10 = *((unsigned int *)t27);
    if (t10 == 1)
        goto LAB10;

LAB11:    t28 = (t1 + 88U);
    t29 = *((char **)t28);
    t30 = (t29 + 2480U);
    *((unsigned int *)t30) = 3U;

LAB7:
LAB8:    t31 = (t0 + 992U);
    t14 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t31, 0U, 0U);
    if (t14 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t16) = t3;
    goto LAB4;

LAB6:    xsi_remove_dynamic_wait(t1, t7);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t17 = (t14 != (unsigned char)3);
    if (t17 != 0)
        goto LAB12;

LAB14:
LAB13:    t7 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB24:    t8 = (t1 + 224U);
    t8 = *((char **)t8);
    xsi_wp_set_status(t8, 1);
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 2480U);
    *((unsigned int *)t21) = 1U;
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    getcontext(t24);
    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 2480U);
    t10 = *((unsigned int *)t27);
    if (t10 == 1)
        goto LAB25;

LAB26:    t28 = (t1 + 88U);
    t29 = *((char **)t28);
    t30 = (t29 + 2480U);
    *((unsigned int *)t30) = 3U;

LAB22:
LAB23:    t31 = (t0 + 992U);
    t14 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t31, 0U, 0U);
    if (t14 == 1)
        goto LAB21;
    else
        goto LAB24;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB12:    t7 = (t0 + 2272U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB18:    t19 = (t1 + 224U);
    t19 = *((char **)t19);
    xsi_wp_set_status(t19, 1);
    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 2480U);
    *((unsigned int *)t22) = 1U;
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    getcontext(t25);
    t26 = (t1 + 88U);
    t27 = *((char **)t26);
    t28 = (t27 + 2480U);
    t10 = *((unsigned int *)t28);
    if (t10 == 1)
        goto LAB19;

LAB20:    t29 = (t1 + 88U);
    t30 = *((char **)t29);
    t31 = (t30 + 2480U);
    *((unsigned int *)t31) = 3U;

LAB16:
LAB17:    t32 = (t0 + 2312U);
    t33 = *((char **)t32);
    t34 = *((unsigned char *)t33);
    t35 = (t34 == (unsigned char)3);
    if (t35 == 1)
        goto LAB15;
    else
        goto LAB18;

LAB15:    xsi_remove_dynamic_wait(t1, t7);
    goto LAB13;

LAB19:    xsi_saveStackAndSuspend(t1);
    goto LAB20;

LAB21:    xsi_remove_dynamic_wait(t1, t7);
    t7 = (t0 + 10352);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10416);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10480);
    t8 = (t7 + 56U);
    t19 = *((char **)t8);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);

LAB1:    return;
LAB25:    xsi_saveStackAndSuspend(t1);
    goto LAB26;

}

void work_a_3245958659_3553469787_sub_1744763273_2664788435(char *t0, char *t1, char *t2, char *t3)
{
    char t5[40];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;

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
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 12U);
    *((char **)t15) = t6;
    t16 = (t5 + 20U);
    *((char **)t16) = t3;
    t17 = (t5 + 28U);
    *((char **)t17) = t11;
    t18 = (t0 + 10352);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    t7 = (t0 + 10416);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10480);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10608);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 16248U);
    t22 = (t21 + 12U);
    t10 = *((unsigned int *)t22);
    t10 = (t10 * 1U);
    memcpy(t20, t2, t10);
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB7:    t8 = (t1 + 224U);
    t8 = *((char **)t8);
    xsi_wp_set_status(t8, 1);
    t18 = (t1 + 88U);
    t19 = *((char **)t18);
    t20 = (t19 + 2480U);
    *((unsigned int *)t20) = 1U;
    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    getcontext(t23);
    t24 = (t1 + 88U);
    t25 = *((char **)t24);
    t26 = (t25 + 2480U);
    t10 = *((unsigned int *)t26);
    if (t10 == 1)
        goto LAB8;

LAB9:    t27 = (t1 + 88U);
    t28 = *((char **)t27);
    t29 = (t28 + 2480U);
    *((unsigned int *)t29) = 3U;

LAB5:
LAB6:    t30 = (t0 + 992U);
    t14 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t30, 0U, 0U);
    if (t14 == 1)
        goto LAB4;
    else
        goto LAB7;

LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB4:    xsi_remove_dynamic_wait(t1, t7);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t14 = *((unsigned char *)t8);
    t31 = (t14 != (unsigned char)3);
    if (t31 != 0)
        goto LAB10;

LAB12:
LAB11:    t7 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB22:    t8 = (t1 + 224U);
    t8 = *((char **)t8);
    xsi_wp_set_status(t8, 1);
    t18 = (t1 + 88U);
    t19 = *((char **)t18);
    t20 = (t19 + 2480U);
    *((unsigned int *)t20) = 1U;
    t21 = (t1 + 88U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    getcontext(t23);
    t24 = (t1 + 88U);
    t25 = *((char **)t24);
    t26 = (t25 + 2480U);
    t10 = *((unsigned int *)t26);
    if (t10 == 1)
        goto LAB23;

LAB24:    t27 = (t1 + 88U);
    t28 = *((char **)t27);
    t29 = (t28 + 2480U);
    *((unsigned int *)t29) = 3U;

LAB20:
LAB21:    t30 = (t0 + 992U);
    t14 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t30, 0U, 0U);
    if (t14 == 1)
        goto LAB19;
    else
        goto LAB22;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

LAB10:    t7 = (t0 + 2272U);
    xsi_add_dynamic_wait(t1, t7, -1, -1);

LAB16:    t18 = (t1 + 224U);
    t18 = *((char **)t18);
    xsi_wp_set_status(t18, 1);
    t19 = (t1 + 88U);
    t20 = *((char **)t19);
    t21 = (t20 + 2480U);
    *((unsigned int *)t21) = 1U;
    t22 = (t1 + 88U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    getcontext(t24);
    t25 = (t1 + 88U);
    t26 = *((char **)t25);
    t27 = (t26 + 2480U);
    t10 = *((unsigned int *)t27);
    if (t10 == 1)
        goto LAB17;

LAB18:    t28 = (t1 + 88U);
    t29 = *((char **)t28);
    t30 = (t29 + 2480U);
    *((unsigned int *)t30) = 3U;

LAB14:
LAB15:    t32 = (t0 + 2312U);
    t33 = *((char **)t32);
    t34 = *((unsigned char *)t33);
    t35 = (t34 == (unsigned char)3);
    if (t35 == 1)
        goto LAB13;
    else
        goto LAB16;

LAB13:    xsi_remove_dynamic_wait(t1, t7);
    goto LAB11;

LAB17:    xsi_saveStackAndSuspend(t1);
    goto LAB18;

LAB19:    xsi_remove_dynamic_wait(t1, t7);
    t7 = (t0 + 2792U);
    t8 = *((char **)t7);
    t7 = (t3 + 0);
    t18 = (t0 + 16296U);
    t19 = (t18 + 12U);
    t10 = *((unsigned int *)t19);
    t10 = (t10 * 1U);
    memcpy(t7, t8, t10);
    t7 = (t0 + 10352);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10416);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 10480);
    t8 = (t7 + 56U);
    t18 = *((char **)t8);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);

LAB1:    return;
LAB23:    xsi_saveStackAndSuspend(t1);
    goto LAB24;

}

static void work_a_3245958659_3553469787_p_13(char *t0)
{
    char t7[32];
    char t9[32];
    char t10[32];
    char t11[32];
    char t12[32];
    char t13[32];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    int64 t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 8896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);

LAB6:    t2 = (t0 + 9408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 9408);
    *((int *)t3) = 0;
    xsi_set_current_line(142, ng0);

LAB10:    t2 = (t0 + 9424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 9424);
    *((int *)t3) = 0;
    xsi_set_current_line(143, ng0);

LAB14:    t2 = (t0 + 9440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 9440);
    *((int *)t4) = 0;
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t7, t4, 32U);
    t3 = (t0 + 16929);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t7, t3);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t9, t4, 32U);
    t3 = (t0 + 16961);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t9, t3);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t10, t4, 32U);
    t3 = (t0 + 16993);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t10, t3);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t11, t4, 32U);
    t3 = (t0 + 17025);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t11, t3);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t12, t4, 32U);
    t3 = (t0 + 17057);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t12, t3);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8704);
    t3 = (t0 + 4328U);
    t4 = *((char **)t3);
    memcpy(t13, t4, 32U);
    t3 = (t0 + 17089);
    work_a_3245958659_3553469787_sub_4087318595_2664788435(t0, t2, t13, t3);
    xsi_set_current_line(158, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 992U);
    t5 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t5 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(160, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(164, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);
    t14 = (100 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 10672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t15 = *((char **)t8);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(172, ng0);
    t14 = (1500 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3752U);
    t3 = *((char **)t2);
    t2 = (t0 + 10736);
    t4 = (t2 + 56U);
    t8 = *((char **)t4);
    t15 = (t8 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t3, 18U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(193, ng0);
    t14 = (200 * 1000LL);
    t2 = (t0 + 8704);
    xsi_process_wait(t2, t14);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 17121);
    xsi_report(t2, 8U, (unsigned char)3);
    goto LAB2;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

}


extern void work_a_3245958659_3553469787_init()
{
	static char *pe[] = {(void *)work_a_3245958659_3553469787_p_0,(void *)work_a_3245958659_3553469787_p_1,(void *)work_a_3245958659_3553469787_p_2,(void *)work_a_3245958659_3553469787_p_3,(void *)work_a_3245958659_3553469787_p_4,(void *)work_a_3245958659_3553469787_p_5,(void *)work_a_3245958659_3553469787_p_6,(void *)work_a_3245958659_3553469787_p_7,(void *)work_a_3245958659_3553469787_p_8,(void *)work_a_3245958659_3553469787_p_9,(void *)work_a_3245958659_3553469787_p_10,(void *)work_a_3245958659_3553469787_p_11,(void *)work_a_3245958659_3553469787_p_12,(void *)work_a_3245958659_3553469787_p_13};
	static char *se[] = {(void *)work_a_3245958659_3553469787_sub_4087318595_2664788435,(void *)work_a_3245958659_3553469787_sub_1744763273_2664788435};
	xsi_register_didat("work_a_3245958659_3553469787", "isim/Simulate_DSP_Wing_isim_beh.exe.sim/work/a_3245958659_3553469787.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
