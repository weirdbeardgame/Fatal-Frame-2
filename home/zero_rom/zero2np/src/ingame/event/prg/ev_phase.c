// STATUS: NOT STARTED

#include "ev_phase.h"

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3abe48;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0558,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0560,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void init_EventMsg_Disp() {
  return;
}

void end_EventMsg_Disp() {
  return;
}

GPHASE_ENUM one_EventMsg_Disp(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  photo_datObjMain__Fv();
  PlayerMainCmn__Fi(0);
  PlyrMotionMovement__Fv();
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  Graph2dMain__Fv();
  EvDispMain__Fv();
  EventMain__Fv();
  SubTitleMain__Fi(1);
  ScreenSaverDraw__Fv();
  id = IngameDecideNextPhase__Fv();
  SetNextGPhase__F14GPHASE_ID_ENUM(id);
  return GPHASE_CONTINUE;
}

void init_EventFile_Disp() {
  return;
}

void end_EventFile_Disp() {
  return;
}

GPHASE_ENUM one_EventFile_Disp(GPHASE_ENUM dummy) {
  int iVar1;
  
  photo_datObjMain__Fv();
  PlayerMainCmn__Fi(1);
  SisterMain__Fv();
  AutoEnemyMain__Fv();
  map_bgmMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  EnemyMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  BrightnessAdjustmentFilterDraw__Fv();
  Graph2dMain__Fv();
  EvDispMain__Fv();
  EventMain__Fv();
  SubTitleMain__Fi(1);
  ScreenSaverDraw__Fv();
  return GPHASE_CONTINUE;
}
