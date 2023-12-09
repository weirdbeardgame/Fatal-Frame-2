// STATUS: NOT STARTED

#include "mission_ctl.h"

static int (*MisFunc)(/* parameters unknown */) = NULL;
static int MisClearTime = 0;
static int MisTotalScore = 0;
static int MisBestShot = 0;
static int MisClearType = 0;
static int MisAnimTime = 0;
static void *MisStTexPtr = NULL;
static void *MisEnTexPtr = NULL;
static void *MisEnClearChrTexPtr = NULL;
static void *MisEnScreenPtr = NULL;
static int MisDispID[2];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0150;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f30f8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3100,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void MisSetNextFunc(int (*pFunc)(/* parameters unknown */)) {
  MisFunc = pFunc;
  MisAnimTime = 0;
  return;
}

int MisProc() {
	static char __FUNCTION__[8] = {
		/* [0] = */ 77,
		/* [1] = */ 105,
		/* [2] = */ 115,
		/* [3] = */ 80,
		/* [4] = */ 114,
		/* [5] = */ 111,
		/* [6] = */ 99,
		/* [7] = */ 0
	};
	
  int iVar1;
  
  if (MisFunc == (undefined1 *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("NO_FILE_PTR");
    iVar1 = -1;
  }
  else {
    iVar1 = (*(code *)MisFunc)();
    if (MisAnimTime < 10000) {
      MisAnimTime = MisAnimTime + 1;
    }
  }
  return iVar1;
}

void MisSetScore(int iTotalScore) {
  if (MisBestShot < iTotalScore) {
    MisBestShot = iTotalScore;
  }
  MisTotalScore = MisTotalScore + iTotalScore;
  return;
}

int MisGetRankLast(int iMissionID, int iTime, int iScore, int iShot) {
  int iVar1;
  
  iVar1 = MissionGetType__Fi(iMissionID);
  if (iVar1 == 2) {
    iVar1 = MissionGetRankPoint__Fii(iMissionID,MisTotalScore);
    return iVar1;
  }
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      iVar1 = MissionGetRankPoint__Fii(iMissionID,MisClearTime);
      return iVar1;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = MissionGetRankPoint__Fii(iMissionID,MisBestShot);
    return iVar1;
  }
  return -1;
}

void MisSetClearType(int iType) {
	int iMissionID;
	int iRank;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = MissionGetID__Fv();
  iVar2 = MisDispGetTimerCnt__Fv();
  MisClearTime = iVar2;
  iVar3 = GetPALMode__Fv();
  iVar4 = 0x19;
  if (iVar3 == 0) {
    iVar4 = 0x1e;
  }
  if (iVar4 == 0) {
    trap(7);
  }
  MisClearTime = iVar2 - iVar2 % iVar4;
  if (iType == 0) {
    MisClearType = 1;
  }
  else {
    iVar1 = MisGetRankLast__Fiiii(iVar1,MisClearType,MisTotalScore,MisBestShot);
    MisClearType = 1;
    if (iVar1 != -1) {
      if (iVar1 < 1) {
        MisClearType = 2;
      }
      else {
        MisClearType = 3;
      }
    }
  }
  return;
}

int MisStSubInit() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  MisStTexPtr = SpCmnTexMemLoad__Fi((char)uVar1 + 0x1120);
  MisSetNextFunc__FPFv_i(MisStSubLoadWait__Fv);
  return 0;
}

int MisStSubLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1120,MisStTexPtr);
  if (iVar2 != 0) {
    MisSetNextFunc__FPFv_i(MisStSubExec__Fv);
    iVar2 = 0;
  }
  return iVar2;
}

int MisStSubEnd() {
  MisStTexPtr = SpCmnTexMemReleaseSub__FPv(MisStTexPtr);
  return -1;
}

int MisStSubExec() {
	int iTime;
	
  int iVar1;
  
  iVar1 = MisDispGetTime__Fv();
  MisDispStart__FUcPv(0x80,MisStTexPtr);
  if ((**paddat == 1) && (iVar1 < 0x4b)) {
    MisDispSetTime__Fi(0x4b);
  }
  if (0x5f < iVar1) {
    MisSetNextFunc__FPFv_i(MisStSubEnd__Fv);
  }
  return 0;
}

int MisStInit() {
  MisDispStartInit__Fv();
  StreamAutoPlay(0x9db,0x9da,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
  MisClearTime = 0;
  MisTotalScore = 0;
  MisBestShot = 0;
  MisSetNextFunc__FPFv_i(MisStSubInit__Fv);
  if (MisStTexPtr != (void *)0x0) {
    SpCmnTexMemReleaseSub__FPv(MisStTexPtr);
    MisStTexPtr = (void *)0x0;
  }
  return 0;
}

void MisStTerm() {
  EffectSaeHazSetNoDrawFlg__Fi(0);
  MisStSubEnd__Fv();
  return;
}

void MisCtlSetDisp(int iInDisp, int iOutDisp) {
  MisDispID[1] = iInDisp;
  MisDispID[0] = iOutDisp;
  return;
}

static void MisEnSubAllDisp(int iTime) {
	int i;
	static ALPHA_ANIM_TBL sTAlpha[2][3] = {
		/* [0] = */ {
			/* [0] = */ {
				/* .start_alpha = */ 128,
				/* .end_alpha = */ 0,
				/* .start_time = */ 0,
				/* .end_time = */ 10
			},
			/* [1] = */ {
				/* .start_alpha = */ 0,
				/* .end_alpha = */ 0,
				/* .start_time = */ 10,
				/* .end_time = */ 25
			},
			/* [2] = */ {
				/* .start_alpha = */ -1,
				/* .end_alpha = */ -1,
				/* .start_time = */ -1,
				/* .end_time = */ -1
			}
		},
		/* [1] = */ {
			/* [0] = */ {
				/* .start_alpha = */ 0,
				/* .end_alpha = */ 0,
				/* .start_time = */ 0,
				/* .end_time = */ 10
			},
			/* [1] = */ {
				/* .start_alpha = */ 0,
				/* .end_alpha = */ 128,
				/* .start_time = */ 10,
				/* .end_time = */ 25
			},
			/* [2] = */ {
				/* .start_alpha = */ -1,
				/* .end_alpha = */ -1,
				/* .start_time = */ -1,
				/* .end_time = */ -1
			}
		}
	};
	u_char ucAlpha;
	
  int iVar1;
  uchar ucAlpha;
  int *piVar2;
  int iVar3;
  undefined1 *pAnimList;
  
  piVar2 = MisDispID;
  iVar3 = 1;
  pAnimList = sTAlpha_1012;
  do {
    if (-1 < *piVar2) {
      ucAlpha = MisDispGetAnimAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)pAnimList,iTime);
      iVar1 = *piVar2;
      if (iVar1 == 1) {
        MisDispClear__FUciiiPvT4
                  (ucAlpha,MisClearTime,MisTotalScore,MisBestShot,MisEnTexPtr,MisEnClearChrTexPtr);
      }
      else if (iVar1 < 2) {
        if (iVar1 == 0) {
          MisDispBadEnd__FUciiiPvT4
                    (ucAlpha,MisClearTime,MisTotalScore,MisBestShot,MisEnTexPtr,MisEnClearChrTexPtr)
          ;
        }
      }
      else if (iVar1 == 2) {
        MisDispClearAll__FUciiiPvT4
                  (ucAlpha,MisClearTime,MisTotalScore,MisBestShot,MisEnTexPtr,MisEnClearChrTexPtr);
      }
      else if (iVar1 == 3) {
        MisDispClearAllS__FUciiiPvT4
                  (ucAlpha,MisClearTime,MisTotalScore,MisBestShot,MisEnTexPtr,MisEnClearChrTexPtr);
      }
    }
    iVar3 = iVar3 + -1;
    pAnimList = (undefined1 *)((int)pAnimList + 0x18);
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  return;
}

void* MisGetTexPtr() {
  return MisStTexPtr;
}

int MisGetScore() {
  return MisTotalScore;
}

int MisGetShot() {
  return MisBestShot;
}

static void MisEnRegistData() {
	int iMissionID;
	
  int iMissionID;
  int iVar1;
  
  iMissionID = MissionGetID__Fv();
  iVar1 = MissionSetStat__Fii(iMissionID,MisClearType);
  if (iVar1 == 2) {
    iVar1 = MissionGetPrize__Fi(iMissionID);
    PlayData_ScoreCount__Fi(iVar1);
  }
  MissionSetNewRecord__Fiii(iMissionID,1,MisClearTime);
  MissionSetNewRecord__Fiii(iMissionID,2,MisTotalScore);
  MissionSetNewRecord__Fiii(iMissionID,3,MisBestShot);
  return;
}

int MisCheckClearAll() {
  int iVar1;
  uint uVar2;
  
  iVar1 = MissionGetTassei__Fi(5);
  uVar2 = 0;
  if (iVar1 == 100) {
    iVar1 = ClearFlg_CheckMissionAllClear__Fv();
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2;
}

static int MisCheckClearAllS() {
  int iVar1;
  uint uVar2;
  
  iVar1 = MissionGetTassei__Fi(1);
  uVar2 = 0;
  if (iVar1 == 100) {
    iVar1 = ClearFlg_CheckAllRankS_MissionClear__Fv();
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2;
}

static void MisEnReleaseTexAll() {
  MisEnTexPtr = SpCmnTexMemReleaseSub__FPv(MisEnTexPtr);
  MisEnClearChrTexPtr = SpCmnTexMemReleaseSub__FPv(MisEnClearChrTexPtr);
  MisEnScreenPtr = SpCmnTexMemReleaseSub__FPv(MisEnScreenPtr);
  return;
}

int MisEnSubInit() {
  uchar uVar1;
  
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  uVar1 = GetLanguage__Fv();
  MisEnTexPtr = SpCmnTexMemLoad__Fi((char)uVar1 + 0x1125);
  uVar1 = GetLanguage__Fv();
  MisEnClearChrTexPtr = SpCmnTexMemLoad__Fi((char)uVar1 + 0x1158);
  MisSetNextFunc__FPFv_i(MisEnSubLoadWait__Fv);
  return 0;
}

int MisEnSubLoadWait() {
  uchar uVar1;
  int iVar2;
  
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1125,MisEnTexPtr);
  if (iVar2 != 0) {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1158,MisEnClearChrTexPtr);
    if (iVar2 != 0) {
      StreamAutoAllStop();
      SetVibrate__Fiii(0,0,0);
      IngameLoopSEPause__Fv();
      ReleasePlayer__Fv();
      if (MisClearType < 2) {
        StreamAutoPlay(0x9d9,0x9d8,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
        MisCtlSetDisp__Fii(0,-1);
        MisSetNextFunc__FPFv_i(MisEnSubMiss__Fv);
      }
      else {
        StreamAutoPlay(0x9d7,0x9d6,0xc,0,0,0x3200,0,(_SND_3D_SET *)0x0);
        MisSetNextFunc__FPFv_i(MisEnSubExec__Fv);
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

int MisEnSubEnd() {
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  MisEnReleaseTexAll__Fv();
  return -1;
}

int MisEnSubMiss() {
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  MisEnSubAllDisp__Fi(MisAnimTime);
  if ((*paddat[1] == 1) && (0x1d < MisAnimTime)) {
    MisSetNextFunc__FPFv_i(MisEnSubEnd__Fv);
  }
  return 0;
}

int MisEnSubExec() {
  int iVar1;
  
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  MisDispClear__FUciiiPvT4
            (0x80,MisClearTime,MisTotalScore,MisBestShot,MisEnTexPtr,MisEnClearChrTexPtr);
  if ((*paddat[1] == 1) && (0x3b < MisAnimTime)) {
    MisEnRegistData__Fv();
    iVar1 = MisCheckClearAll__Fv();
    if (iVar1 == 0) {
      iVar1 = MisCheckClearAllS__Fv();
      if (iVar1 == 0) {
        MisSetNextFunc__FPFv_i(MisEnSubEnd__Fv);
      }
      else {
        ClearFlg_AllRankS_MissionClearExe__Fv();
        MisCtlSetDisp__Fii(3,1);
        MisSetNextFunc__FPFv_i(MisEnSubAllClearS__Fv);
      }
    }
    else {
      ClearFlg_MissionAllClearExe__Fv();
      MisCtlSetDisp__Fii(2,1);
      MisSetNextFunc__FPFv_i(MisEnSubAllClear__Fv);
    }
  }
  return 0;
}

int MisEnSubAllClear() {
  int iVar1;
  
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  MisEnSubAllDisp__Fi(MisAnimTime);
  if ((*paddat[1] == 1) && (0x18 < MisAnimTime)) {
    iVar1 = MisCheckClearAllS__Fv();
    if (iVar1 == 0) {
      MisSetNextFunc__FPFv_i(MisEnSubEnd__Fv);
    }
    else {
      ClearFlg_AllRankS_MissionClearExe__Fv();
      MisCtlSetDisp__Fii(3,2);
      MisSetNextFunc__FPFv_i(MisEnSubAllClearS__Fv);
    }
  }
  return 0;
}

int MisEnSubAllClearS() {
  SpCmnDrawScreen__FPvi(MisEnScreenPtr,0x2bc0);
  MisEnSubAllDisp__Fi(MisAnimTime);
  if ((*paddat[1] == 1) && (0x18 < MisAnimTime)) {
    MisSetNextFunc__FPFv_i(MisEnSubEnd__Fv);
  }
  return 0;
}

int MisEnInit() {
  MisDispClearInit__Fv();
  MisSetNextFunc__FPFv_i(MisEnSubInit__Fv);
  MisEnReleaseTexAll__Fv();
  MisEnScreenPtr = SpCmnGetScreen__Fv();
  MisDispID[0] = -1;
  MisDispID[1] = -1;
  return 0;
}

void MisEnTerm() {
  MisEnReleaseTexAll__Fv();
  return;
}
