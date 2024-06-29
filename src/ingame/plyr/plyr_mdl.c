#include "plyr_mdl.h"

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPv_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPc_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPUi_UiUi_PX01__193);

void plyr_mdlInit()
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

  if (plyr_data.SetupIn(mdl_no, anm_no, bd_no, smdl_no, iAcsNo)
      && plyr_data.plyr_init_ok)
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
  if (plyr_data.SetupIn(mdl_no, anm_no, 0xcfd, smdl_no, acs_no)
      && plyr_data.plyr_init_ok)
  {
    ChrSortDelete(1);
    plyr_data.plyr_init_ok = 0;
  }
}

int IsReadyPlyrMdl()
{
  return plyr_data.IsReady();
}

void ReleasePlyrMdl() 
{
    if (plyr_data.plyr_init_ok != 0) 
    {
        ChrSortDelete(1);
        plyr_data.plyr_init_ok = 0;
    }
    if (plyr_data.plyr_req_other_mdl != 0) 
    {
        mmanageClearItemMdl(0);
        mmanageClearItemMdl(1);
        plyr_data.plyr_req_other_mdl = 0;
    }
    plyr_data.ReleaseIn();
}

void ReqPlayerMim(/* a0 4 */ int no, /* a1 5 */ int rev) 
{
    if (plyr_data.mpAniCtrl != 0x0) 
    {
        mimRequestNum(plyr_data.mpAniCtrl, no, rev);
    }
}

void ReqPlayerMimContinue(int no,int rev) 
{
    if (plyr_data.mpAniCtrl != 0x0) 
    {
        mimRequestNumContinue(plyr_data.mpAniCtrl,no,(u_char)rev);
    }
}

void StopPlayerMim(int no)
{
    if (plyr_data.mpAniCtrl != 0x0) 
    {
        mimStopNum(plyr_data.mpAniCtrl,no);
    }
    return;
}

int IsPlayerMimParts(int no)
{
    return (mimIsUseParts(plyr_data.mpAniCtrl,no) != 0);
}

void plyr_mdlSetSave(MC_SAVE_DATA *data)
{
  data->size = 0x10;
  data->addr = (unsigned char *)&plyr_mdl_req_save;
  return;
}

u_short GetPlyrFtype()
{
  if (plyr_data.mpAniCtrl != 0x0) 
  {
      return plyr_data.mpAniCtrl->ftype;
  }

  return 0;
}
INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", ReqPlayerAnime__FUc);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlayerInterpFlame__FP8ANI_CTRLii);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlMotionWork__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetMATRIX__FPA3_fi);

void CalcGirlCoord(/* a0 4 */ int pause_flg) 
{
	/* s4 20 */ HeaderSection *hs;
	/* s1 17 */ SGDCOORDINATE *cp;
	/* f20 58 */ float grot;

    // Ghidra declared variables
    ANI_CTRL *a1;
    
    if (IsReadyPlyrMdl() != 0) 
    {   
        hs = plyr_data.mpAniCtrl->base_p;
        cp = hs->coordp;
        MrecSetRegBuffID(plyr_wrk.cmn_wrk.floor, plyr_wrk.cmn_wrk.mbox.pos, 0);
        switch (motSetCoord(plyr_data.mpAniCtrl, 0xff, 0)) 
        {
        case 1:
            plyr_wrk.cmn_wrk.st.sta |= 0x2000;
            break;
        case 2:
            plyr_wrk.cmn_wrk.st.sta |= 0x4000;
            break;
        }
        plyr_data.plyr_light_alpha += 10;
        if ((plyr_data.plyr_light_alpha & 0xFF) > 0x80) 
        {
            plyr_data.plyr_light_alpha = 0x80;
        }
        plyr_data.plyr_cam_alpha += 10;
        if ((plyr_data.plyr_cam_alpha & 0xFF) > 0x80) 
        {
            plyr_data.plyr_cam_alpha = -0x80U;
        }
        a1 = plyr_data.mpAniCtrl;
        movGetMoveval(plyr_wrk.spd, plyr_wrk.old_spd, a1, motGetNowFrame(&plyr_data.mpAniCtrl->mot) >> 1, 0);
        mimSetVertex(plyr_data.mpAniCtrl);
        sceVu0UnitMatrix(cp->matCoord);
        cp->matCoord[2][2] = 25.0f;
        cp->matCoord[1][1] = 25.0f;
        cp->matCoord[0][0] = 25.0f;

        grot = plyr_wrk.cmn_wrk.mbox.rot[1] + D_FLT_003EE7F0;
        if (D_FLT_003EE7F0 < grot) 
        {
            grot -= PI;
        }

        sceVu0RotMatrixX(cp->matCoord, cp->matCoord, D_FLT_003EE7F0);
        sceVu0RotMatrixY(cp->matCoord, cp->matCoord, grot);

        /* inlined from g3dxVu0.h */
        SetVec(&cp->matCoord[3], &plyr_wrk.cmn_wrk.mbox.pos);
        cp->matCoord[3][3] = 1.0;
        sgdCalcBoneCoordinate(cp, hs->blocks - 1);
        a1 = plyr_data.mpAniCtrl;
        motLookAtCtrl(a1, PlyrNeckGetParam());
        LeftHandCtrl(cp);
        sgdCalcBoneCoordinate(cp, hs->blocks - 1);
        a1 = plyr_data.mpAniCtrl;
        GetMdlWaistPos(plyr_wrk.bwp,a1, a1->mdl_no);
        GetMdlNeckPos(plyr_wrk.cmn_wrk.headpos, a1,a1->mdl_no);
        GetPlyrAcsLightPos(plyr_wrk.spot_pos,plyr_data.mpAniCtrl);
    }
}


INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerUseDoorLight__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerSetLight__FPCfPC35GRA3DEMULATIONLIGHTDATACREATIONDATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _GetEmulationLightdataCreationDataRef__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerCalcAlpha__FPC8ANI_CTRL);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", playerDrawShadow__Fv);

void PlayerDrawLock(void)
{
  plyr_data.man_data_draw_lock_cnt = plyr_data.man_data_draw_lock_cnt + 1;
  return;
}

void PlayerDrawUnlock(void)
{
  plyr_data.man_data_draw_lock_cnt = plyr_data.man_data_draw_lock_cnt + -1;
  return;
}

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", DrawGirl__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", LeftHandCtrl__FP13SGDCOORDINATE);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetANI_CTRL__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlGetShadowANI_CTRL__Fv);

void PlyrNeckFrameInit()
{
  plyr_neck_now_priority = LTP_MIO_LEAST;
  return;
}

void PlyrNeckInit(void)
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
}

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl",
            CostumeSetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl",
            __static_initialization_and_destruction_0__78);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl",
            _GLOBAL__I_g_iMaxPlayerAlpha);
