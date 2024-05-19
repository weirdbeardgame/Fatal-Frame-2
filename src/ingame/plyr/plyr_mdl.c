#include "common.h"
#include "plyr_mdl.h"

GAME_COSTUME GameCostume;

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", func_0023E100);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPv_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPc_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _fixed_array_verifyrange__H1ZPUi_UiUi_PX01__193);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlInit__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", plyr_mdlResetReq__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", SetupPlyrMdl__Fiiii);

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

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlyrNeckFrameInit__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", PlyrNeckInit__Fv);

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

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", GetSisterMdlNo__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", SetSisterMdlNo__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", GetSisterAcsNo__Fv);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", SetSisterAcsNo__Fi);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", CostumeSetSave__FP12MC_SAVE_DATA);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", __static_initialization_and_destruction_0__78);

INCLUDE_ASM("asm/nonmatchings/ingame/plyr/plyr_mdl", _GLOBAL__I_g_iMaxPlayerAlpha);
