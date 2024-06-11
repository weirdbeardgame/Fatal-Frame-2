#include "common.h"
#include "plyr_mdl.h"
#include "mmanage.h"
#include "ChrSort.h"

PLYR_PLYR_DATA plyr_data;
MDL_REQ_SAVE plyr_mdl_req_save;
GAME_COSTUME GameCostume;

int ltd_mode;
int same_priority_count;
int plyr_neck_no_registered_cnt;

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", func_0023E100);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPv_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPc_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPUi_UiUi_PX01__193);

static void plyr_mdlInit()
{
    plyr_mdl_req_save.Set(GetPlyrMdlNo(), 0, 0xcfd, 16);
    
    PlyrNeckInit();
    plyr_data.InitializeIn();
    
    plyr_data.plyr_init_ok = 0;
    plyr_data.plyr_req_other_mdl = 0;
}

void plyr_mdlResetReq() 
{
    /* s5 21 */ int mdl_no;
    /* s1 17 */ int anm_no;
    /* s2 18 */ int bd_no;
    /* s4 20 */ int smdl_no;
    /* s3 19 */ int iAcsNo;
  
    mdl_no = GetPlyrMdlNo();
    anm_no = plyr_mdl_req_save.mAnmNo;
    bd_no = plyr_mdl_req_save.mBdNo;
    smdl_no = plyr_mdl_req_save.mSmdlNo;
    iAcsNo = GetPlyrAcsNo();

    if (!plyr_data.plyr_req_other_mdl) 
    {
        mmanageReqItemMdl(0);
        mmanageReqItemMdl(1);
        plyr_data.plyr_req_other_mdl = 1;
    }
    
    if (plyr_data.SetupIn(mdl_no, anm_no, bd_no, smdl_no, iAcsNo) && plyr_data.plyr_init_ok) 
    {
        ChrSortDelete(1);
        plyr_data.plyr_init_ok = 0;
    }
}

void SetupPlyrMdl(/* s3 19 */ int mdl_no, /* s1 17 */ int anm_no, /* s2 18 */ int smdl_no, /* s4 20 */ int acs_no) 
{
    plyr_mdl_req_save.mBdNo = 0xcfd;
    plyr_mdl_req_save.mMdlNo = mdl_no;
    plyr_mdl_req_save.mAnmNo = anm_no;
    plyr_mdl_req_save.mSmdlNo = smdl_no;
    if (!plyr_data.plyr_req_other_mdl) 
    {
        mmanageReqItemMdl(0);
        mmanageReqItemMdl(1);
        plyr_data.plyr_req_other_mdl = 1;
    }
    if (plyr_data.SetupIn(mdl_no,anm_no,0xcfd,smdl_no,acs_no) && plyr_data.plyr_init_ok) 
    {
        ChrSortDelete(1);
        plyr_data.plyr_init_ok = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", IsReadyPlyrMdl__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", ReleasePlyrMdl__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", ReqPlayerMim__Fii);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", ReqPlayerMimContinue__Fii);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", StopPlayerMim__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", IsPlayerMimParts__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlSetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", GetPlyrFtype__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", ReqPlayerAnime__FUc);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlayerInterpFlame__FP8ANI_CTRLii);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlMotionWork__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetMATRIX__FPA3_fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", CalcGirlCoord__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerUseDoorLight__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerSetLight__FPCfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _GetEmulationLightdataCreationDataRef__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerCalcAlpha__FPC8ANI_CTRL);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerDrawShadow__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlayerDrawLock__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlayerDrawUnlock__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", DrawGirl__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", LeftHandCtrl__FP13SGDCOORDINATE);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetANI_CTRL__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetShadowANI_CTRL__Fv);

static void PlyrNeckFrameInit()
{
  plyr_neck_now_priority = LTP_MIO_LEAST;
  return;
}

static void PlyrNeckInit(void)
{
  SetPlyrNeckFlg(1);
  ltd_mode = 0;
  pre_priority = LTP_MIO_LEAST;
  same_priority_count = 0;
  plyr_neck_no_registered_cnt = 0;
  PlyrNeckFrameInit();
  return;
}

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlyrNeckRegisterTarget__FP14_LOOK_AT_PARAM25_LOOK_TARGET_PRIORITY_MIO);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", SetPlyrNeckFlg__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlyrNeckMain__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlyrNeckGetParam__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlBankPlay__FiiiiP11_SND_3D_SETii);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlBankIsLoopSnd__Fi);

int GetPlyrMdlNo()
{
    return GameCostume.mPlyrMdlNo;
}

void SetPlyrMdlNo(int iMdlNo)
{
    GameCostume.mPlyrMdlNo = iMdlNo;
    return;
}

int GetPlyrAcsNo()
{
    return GameCostume.mPlyrAcsNo;
}

void SetPlyrAcsNo(int iMdlNo)
{
    GameCostume.mPlyrAcsNo = iMdlNo;
    return;
}

int GetSisterMdlNo(void)
{
    return GameCostume.mSisterMdlNo;
}

void SetSisterMdlNo(int iMdlNo)
{
    GameCostume.mSisterMdlNo = iMdlNo;
    return;
}

int GetSisterAcsNo(void)
{
    return GameCostume.mSisterAcsNo;
}

void SetSisterAcsNo(int iAcsNo)
{
    GameCostume.mSisterAcsNo = iAcsNo;
    return;
}

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", CostumeSetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", __static_initialization_and_destruction_0__78);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _GLOBAL__I_g_iMaxPlayerAlpha);
