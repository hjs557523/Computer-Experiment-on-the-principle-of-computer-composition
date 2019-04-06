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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1420689212_init();
    xilinxcorelib_ver_m_00000000001687936702_1862936372_init();
    xilinxcorelib_ver_m_00000000000277421008_0050634287_init();
    xilinxcorelib_ver_m_00000000001603977570_2552104820_init();
    work_m_00000000002489990758_1015039846_init();
    work_m_00000000000570470152_3383896982_init();
    work_m_00000000001149712811_1282137562_init();
    work_m_00000000003035775930_2749254585_init();
    work_m_00000000000086159481_0886308060_init();
    xilinxcorelib_ver_m_00000000002621774987_3805459806_init();
    xilinxcorelib_ver_m_00000000001603977570_0557065841_init();
    work_m_00000000000403262735_1948799799_init();
    work_m_00000000002222444724_3036013123_init();
    work_m_00000000001005710865_1985558087_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001005710865_1985558087");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
