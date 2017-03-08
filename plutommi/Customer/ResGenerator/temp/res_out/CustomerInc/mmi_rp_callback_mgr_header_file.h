/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   mmi_rp_callback_mgr_header_file.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Callback manager send's id is defined in these header files. And this file is generated by XML resgen
 *
 * Author:
 * -------
 *   03 13 2011 yan.liang
 *
 *******************************************************************************/
#ifndef MMI_CALLBACK_APP_HEADER_H
#define MMI_CALLBACK_APP_HEADER_H
/* !!!Only cb mgr could include this header file!!! */
#ifndef MMI_CB_MGR_C
#error "This header file only could be included by cb mananger!"
#endif
#ifdef MMI_CB_MGR_UT
 #include "mmi_cb_test_app_gprot.h"
#endif
#include "mmi_rp_srv_alarm_def.h"
#include "mmi_rp_app_bluetooth_def.h"
#include "mmi_rp_srv_btsco_def.h"
#include "mmi_rp_srv_calllog_def.h"
#include "mmi_rp_srv_callset_def.h"
#include "mmi_rp_srv_cnmgr_def.h"
#include "mmi_rp_srv_datetime_def.h"
#include "mmi_rp_srv_dtcnt_def.h"
#include "mmi_rp_srv_gcall_def.h"
#include "mmi_rp_app_uiframework_def.h"
#include "mmi_rp_app_idle_def.h"
#include "mmi_rp_srv_mdi_def.h"
#include "mmi_rp_srv_nw_name_def.h"
#include "mmi_rp_srv_prof_def.h"
#include "mmi_rp_srv_reminder_def.h"
#include "mmi_rp_srv_safe_mode_def.h"
#include "mmi_rp_app_scr_locker_def.h"
#include "mmi_rp_srv_sms_def.h"
#include "mmi_rp_srv_ss_def.h"
#include "mmi_rp_app_threedo_def.h"
#include "mmi_rp_app_usbsrv_def.h"
#include "AppMgrSrvGprot.h"
#include "BootupAppGprot.h"
#include "BootupSrvGprot.h"
#include "GlobalResDef.h"
#include "UcmSrvGprot.h"
#include "GpioSrvGprot.h"
#include "NwUsabSrvGprot.h"
#include "CbmSrvGprot.h"
#include "CbmSrvIprot.h"
#include "CharBatSrvGprot.h"
#include "CphsSrvGprot.h"
#include "PhnsetDlCalDataGprot.h"
#include "FileMgrSrvGProt.h"
#include "FileMgrSrvIProt.h"
#include "GeneralSettingSrvGprot.h"
#include "ModeSwitchSrvGprot.h"
#include "NwInfoSrvGprot.h"
#include "PhbSrvGprot.h"
#include "RestoreSrvGprot.h"
#include "SatSrvGprot.h"
#include "ScreenRotationGprot.h"
#include "ShutdownSrvGprot.h"
#include "SimCtrlSrvGprot.h"
#include "PhoneSetupGprots.h"
#endif

