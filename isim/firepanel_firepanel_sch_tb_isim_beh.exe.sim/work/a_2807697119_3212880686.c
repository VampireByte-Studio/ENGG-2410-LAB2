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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ISE/lab_firepanel_group64/Firepanel_test.vhd";



static void work_a_2807697119_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;

LAB0:    t1 = (t0 + 3264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB16;

LAB17:    t10 = (unsigned char)0;

LAB18:    if (t10 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t8 = (unsigned char)0;

LAB12:    if (t8 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 6040);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB9;

LAB10:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB12;

LAB13:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB15;

LAB16:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB18;

LAB19:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB31;

LAB32:    t10 = (unsigned char)0;

LAB33:    if (t10 == 1)
        goto LAB28;

LAB29:    t9 = (unsigned char)0;

LAB30:    if (t9 == 1)
        goto LAB25;

LAB26:    t8 = (unsigned char)0;

LAB27:    if (t8 == 0)
        goto LAB23;

LAB24:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    t2 = (t0 + 6100);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB24;

LAB25:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB27;

LAB28:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB30;

LAB31:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB33;

LAB34:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB46;

LAB47:    t10 = (unsigned char)0;

LAB48:    if (t10 == 1)
        goto LAB43;

LAB44:    t9 = (unsigned char)0;

LAB45:    if (t9 == 1)
        goto LAB40;

LAB41:    t8 = (unsigned char)0;

LAB42:    if (t8 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t2 = (t0 + 6160);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB39;

LAB40:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB42;

LAB43:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB45;

LAB46:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB48;

LAB49:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB61;

LAB62:    t10 = (unsigned char)0;

LAB63:    if (t10 == 1)
        goto LAB58;

LAB59:    t9 = (unsigned char)0;

LAB60:    if (t9 == 1)
        goto LAB55;

LAB56:    t8 = (unsigned char)0;

LAB57:    if (t8 == 0)
        goto LAB53;

LAB54:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB53:    t2 = (t0 + 6220);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB54;

LAB55:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB57;

LAB58:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB60;

LAB61:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB63;

LAB64:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB76;

LAB77:    t10 = (unsigned char)0;

LAB78:    if (t10 == 1)
        goto LAB73;

LAB74:    t9 = (unsigned char)0;

LAB75:    if (t9 == 1)
        goto LAB70;

LAB71:    t8 = (unsigned char)0;

LAB72:    if (t8 == 0)
        goto LAB68;

LAB69:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3072);
    xsi_process_wait(t2, t7);

LAB81:    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t2 = (t0 + 6280);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB69;

LAB70:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB72;

LAB73:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB75;

LAB76:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB78;

LAB79:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB91;

LAB92:    t10 = (unsigned char)0;

LAB93:    if (t10 == 1)
        goto LAB88;

LAB89:    t9 = (unsigned char)0;

LAB90:    if (t9 == 1)
        goto LAB85;

LAB86:    t8 = (unsigned char)0;

LAB87:    if (t8 == 0)
        goto LAB83;

LAB84:    xsi_set_current_line(124, ng0);

LAB96:    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB80:    goto LAB79;

LAB82:    goto LAB80;

LAB83:    t2 = (t0 + 6340);
    xsi_report(t2, 60U, (unsigned char)2);
    goto LAB84;

LAB85:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB87;

LAB88:    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB90;

LAB91:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB93;

LAB94:    goto LAB2;

LAB95:    goto LAB94;

LAB97:    goto LAB95;

}


extern void work_a_2807697119_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2807697119_3212880686_p_0};
	xsi_register_didat("work_a_2807697119_3212880686", "isim/firepanel_firepanel_sch_tb_isim_beh.exe.sim/work/a_2807697119_3212880686.didat");
	xsi_register_executes(pe);
}
