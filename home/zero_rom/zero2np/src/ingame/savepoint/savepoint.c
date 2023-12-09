// STATUS: NOT STARTED

#include "savepoint.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4b40;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3c20,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3c28,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SavePointStartReq() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 83,
		/* [1] = */ 97,
		/* [2] = */ 118,
		/* [3] = */ 101,
		/* [4] = */ 80,
		/* [5] = */ 111,
		/* [6] = */ 105,
		/* [7] = */ 110,
		/* [8] = */ 116,
		/* [9] = */ 83,
		/* [10] = */ 116,
		/* [11] = */ 97,
		/* [12] = */ 114,
		/* [13] = */ 116,
		/* [14] = */ 82,
		/* [15] = */ 101,
		/* [16] = */ 113,
		/* [17] = */ 0
	};
	
  uint uVar1;
  int iVar2;
  
  uVar1 = mem_utilQueryTotalFreeSize__Fv();
  if (0x2b13ff < uVar1) {
    iVar2 = IsEnemyOn__Fv();
    if (iVar2 == 0) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_SAVEPOINT_FADEIN);
      return;
    }
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s");
  }
  return;
}

void SavePointBackGroundLoadReq() {
  SavePointFadeInCtrlInit__Fv();
  SavePointMainBackGroundLoadReq__Fv();
  SavePointTopBackGroundLoadReq__Fv();
  GameDataSaveBackGroundLoadReq__FPFi_PvPFPv_v(mem_utilGetMem__Fi,mem_utilFreeMem__FPv);
  AlbumBackGroundLoadReq__FPFi_PvPFPv_v(mem_utilGetMem__Fi,mem_utilFreeMem__FPv);
  return;
}

void SavePointEnd() {
  SavePointMainMemFree__Fv();
  SavePointTopMemFree__Fv();
  GameDataSaveTexMemFree__Fv();
  AlbumEnd__Fv();
  return;
}

void init_SavePoint_FadeIn() {
  return;
}

GPHASE_ENUM one_SavePoint_FadeIn(GPHASE_ENUM dummy) {
  int iVar1;
  
  PlayerMainCmn__Fi(1);
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  EvDispMain__Fv();
  Graph2dMain__Fv();
  SavePointFadeInMain__Fv();
  SavePointFadeInDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_SavePoint_FadeIn() {
  return;
}

void init_SavePoint_FadeOut() {
  SavePointFadeOutInit__Fv();
  return;
}

GPHASE_ENUM one_SavePoint_FadeOut(GPHASE_ENUM dummy) {
  int iVar1;
  
  PlayerMainCmn__Fi(1);
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  EvDispMain__Fv();
  Graph2dMain__Fv();
  SavePointFadeOutDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_SavePoint_FadeOut() {
  return;
}
