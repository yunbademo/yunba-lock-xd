/*
 * Generated by MTK DrvGen Version 2012.11.07 FP for MT6261NP. Copyright MediaTek Inc. (C) 2012.
 * Sat Mar 18 16:08:25 2017
 * Do Not Modify the File.
 */

/*****************************************************************************
*
* Filename:
* ---------
*    ***.*
*
* Project:
* --------
*   Maui_Software
*
* Description:
* ------------
*  
*
* Author:
* -------
*  dongming.li       Generated By DRV TOOL
*
*============================================================================
****************************************************************************/
#ifndef _PWM_DRV_H
#define _PWM_DRV_H


#define PWM_MAX_NUM  4
#define DCL_NONE   DCL_PWM1
#define DCL_LED_KP   DCL_PWM2
#define DCL_MAIN_LCD_BL   DCL_PWM3
#define DCL_NONE   DCL_PWM4


#define NONE_USE_INTERNAL_SOURCE
#define LED_KP_USE_INTERNAL_SOURCE
#define MAIN_LCD_BL_USE_INTERNAL_SOURCE
#define NONE_USE_INTERNAL_SOURCE

#define PWM1_SOURCE_CLOCK 32768
#define PWM2_SOURCE_CLOCK 32768
#define PWM3_SOURCE_CLOCK 13000000
#define PWM4_SOURCE_CLOCK 32768

#define PWM_1_FREQ_VAL 0
#define PWM_2_FREQ_VAL  32000
#define PWM_3_FREQ_VAL  20000
#define PWM_4_FREQ_VAL 0

#define PWM1_MAX_LEVEL  0
#define PWM2_MAX_LEVEL 2
#define PWM3_MAX_LEVEL 5
#define PWM4_MAX_LEVEL  0

#define PWM_1_DUTY1_VAL 0
#define PWM_1_DUTY2_VAL 0
#define PWM_1_DUTY3_VAL 0
#define PWM_1_DUTY4_VAL 0
#define PWM_1_DUTY5_VAL 0
#define PWM_1_DUTY6_VAL 0
#define PWM_1_DUTY7_VAL 0
#define PWM_1_DUTY8_VAL 0
#define PWM_1_DUTY9_VAL 0
#define PWM_1_DUTY10_VAL 0
#define PWM_1_DUTY11_VAL 0
#define PWM_1_DUTY12_VAL 0
#define PWM_1_DUTY13_VAL 0
#define PWM_1_DUTY14_VAL 0
#define PWM_1_DUTY15_VAL 0
#define PWM_1_DUTY16_VAL 0
#define PWM_1_DUTY17_VAL 0
#define PWM_1_DUTY18_VAL 0
#define PWM_1_DUTY19_VAL 0
#define PWM_1_DUTY20_VAL 0

#define PWM_2_DUTY1_VAL 50
#define PWM_2_DUTY2_VAL 100
#define PWM_2_DUTY3_VAL 0
#define PWM_2_DUTY4_VAL 0
#define PWM_2_DUTY5_VAL 0
#define PWM_2_DUTY6_VAL 0
#define PWM_2_DUTY7_VAL 0
#define PWM_2_DUTY8_VAL 0
#define PWM_2_DUTY9_VAL 0
#define PWM_2_DUTY10_VAL 0
#define PWM_2_DUTY11_VAL 0
#define PWM_2_DUTY12_VAL 0
#define PWM_2_DUTY13_VAL 0
#define PWM_2_DUTY14_VAL 0
#define PWM_2_DUTY15_VAL 0
#define PWM_2_DUTY16_VAL 0
#define PWM_2_DUTY17_VAL 0
#define PWM_2_DUTY18_VAL 0
#define PWM_2_DUTY19_VAL 0
#define PWM_2_DUTY20_VAL 0

#define PWM_3_DUTY1_VAL 20
#define PWM_3_DUTY2_VAL 40
#define PWM_3_DUTY3_VAL 60
#define PWM_3_DUTY4_VAL 80
#define PWM_3_DUTY5_VAL 100
#define PWM_3_DUTY6_VAL 0
#define PWM_3_DUTY7_VAL 0
#define PWM_3_DUTY8_VAL 0
#define PWM_3_DUTY9_VAL 0
#define PWM_3_DUTY10_VAL 0
#define PWM_3_DUTY11_VAL 0
#define PWM_3_DUTY12_VAL 0
#define PWM_3_DUTY13_VAL 0
#define PWM_3_DUTY14_VAL 0
#define PWM_3_DUTY15_VAL 0
#define PWM_3_DUTY16_VAL 0
#define PWM_3_DUTY17_VAL 0
#define PWM_3_DUTY18_VAL 0
#define PWM_3_DUTY19_VAL 0
#define PWM_3_DUTY20_VAL 0

#define PWM_4_DUTY1_VAL 0
#define PWM_4_DUTY2_VAL 0
#define PWM_4_DUTY3_VAL 0
#define PWM_4_DUTY4_VAL 0
#define PWM_4_DUTY5_VAL 0
#define PWM_4_DUTY6_VAL 0
#define PWM_4_DUTY7_VAL 0
#define PWM_4_DUTY8_VAL 0
#define PWM_4_DUTY9_VAL 0
#define PWM_4_DUTY10_VAL 0
#define PWM_4_DUTY11_VAL 0
#define PWM_4_DUTY12_VAL 0
#define PWM_4_DUTY13_VAL 0
#define PWM_4_DUTY14_VAL 0
#define PWM_4_DUTY15_VAL 0
#define PWM_4_DUTY16_VAL 0
#define PWM_4_DUTY17_VAL 0
#define PWM_4_DUTY18_VAL 0
#define PWM_4_DUTY19_VAL 0
#define PWM_4_DUTY20_VAL 0


#define PWM_MAX_LEVEL_ARRAY PWM1_MAX_LEVEL, PWM2_MAX_LEVEL, PWM3_MAX_LEVEL, PWM4_MAX_LEVEL

#define PWM_PDN_ARRAY  (kal_uint32)PDN_PWM, (kal_uint32)PDN_PWM2, (kal_uint32)PDN_PWM3, (kal_uint32)PDN_PWM4

#define PWM_INFO_ARRAY  (kal_uint32*)PWM1_Level_Info, (kal_uint32*)PWM2_Level_Info, (kal_uint32*)PWM3_Level_Info, (kal_uint32*)PWM4_Level_Info

#endif /*_PWM_DRV_H */


