// STATUS: NOT STARTED

#include "mission_disp.h"

static int MisDispTimer = 0;
static int MisDispTimerCnt = 0;
static int MisDispTimerSw = 0;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0228;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3168,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3170,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void MisDispSetTime(int iTime) {
  MisDispTimer = iTime;
  return;
}

int MisDispGetTime() {
  return MisDispTimer;
}

void MisDispNum(int iNum, int iKeta, int iOffX, int iOffY, u_char ucAlpha, int iFlg) {
	int i;
	
  int iVar1;
  bool bVar2;
  int off_x;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  off_x = iOffX + iKeta * 0x12 + -0x12;
  do {
    bVar2 = iKeta <= iVar4;
    iVar4 = iVar4 + 1;
    if (bVar2) {
      return;
    }
    iVar1 = iNum / 10;
    iVar3 = off_x + -0x12;
    SpCmnDrawSprite__FiiiUci(iNum % 10 + 0x8e,off_x,iOffY,ucAlpha,0);
    iNum = iVar1;
    off_x = iVar3;
  } while ((iFlg != 0) || (iVar1 != 0));
  return;
}

void MisDispTime(int iHour, int iMin, int iSec, int iOffX, int iOffY, u_char ucAlpha) {
  int iOffY_00;
  
  iOffY_00 = iOffY + 0x81;
  MisDispNum__FiiiiUci(iHour,2,iOffX + 0x15a,iOffY_00,ucAlpha,1);
  MisDispNum__FiiiiUci(iMin,2,iOffX + 399,iOffY_00,ucAlpha,1);
  MisDispNum__FiiiiUci(iSec,2,iOffX + 0x1c4,iOffY_00,ucAlpha,1);
  return;
}

u_char MisDispGetAnimAlpha(ALPHA_ANIM_TBL *pAnimList, int iTime) {
	int i;
	
  ushort uVar1;
  uchar uVar2;
  ALPHA_ANIM_TBL *pAVar3;
  int iVar4;
  
  if ((long)(short)pAnimList->start_time < (long)iTime) {
    iVar4 = 0;
    uVar1 = pAnimList->start_alpha;
    pAVar3 = pAnimList;
    while (uVar1 != 0xffff) {
      pAVar3 = pAVar3 + 1;
      iVar4 = iVar4 + 1;
      uVar1 = pAVar3->start_alpha;
    }
    if ((long)iTime < (long)(short)pAnimList[iVar4 + -1].end_time) {
      uVar2 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi(pAnimList,iTime);
      return uVar2;
    }
    uVar2 = *(uchar *)&pAnimList[iVar4 + -1].end_alpha;
  }
  else {
    uVar2 = *(uchar *)&pAnimList->start_alpha;
  }
  return uVar2;
}

void MisDispTimeInit() {
  MisDispTimerCnt = 0;
  return;
}

int MisDispGetTimerCnt() {
  return MisDispTimerCnt;
}

void MisDispSetFlg(int iFlg) {
  MisDispTimerSw = MisDispTimerSw | iFlg;
  return;
}

void MisDispDeleteFlg(int iFlg) {
  MisDispTimerSw = MisDispTimerSw & ~iFlg;
  return;
}

void MisDispTimeProc() {
	int iHour;
	int iMin;
	int iSec;
	
  int iVar1;
  int iHour;
  int iMin;
  int iSec;
  
  iVar1 = CheckIngameMission__Fv();
  if ((iVar1 != 0) && ((MisDispTimerSw & 2U) != 0)) {
    iVar1 = MissionGetID__Fv();
    iVar1 = MissionGetType__Fi(iVar1);
    if (iVar1 == 2) {
      iVar1 = MisGetScore__Fv();
      SpCmnPrintNumber_NK__FiiiiUcUciUcUc(iVar1,6,0x19c,400,'\x15',0x80,0,'\0',0);
      SpCmnPrintMsg_K__Fiiiiiii(0x3c,0x5b,0x208,400,0x15,0x80,0xa0);
    }
    else if (iVar1 < 3) {
      if (iVar1 == 1) {
        MissionGetTimePal__FPiN20i(&iHour,&iMin,&iSec,MisDispTimerCnt);
        MissionDrawTime__FiiiiiUc(iHour,iMin,iSec,0x1a6,400,0x80);
      }
    }
    else if (iVar1 == 3) {
      iVar1 = MisGetShot__Fv();
      SpCmnPrintNumber_NK__FiiiiUcUciUcUc(iVar1,6,0x19c,400,'\x15',0x80,0,'\0',0);
      SpCmnPrintMsg_K__Fiiiiiii(0x3c,0x5b,0x208,400,0x15,0x80,0xa0);
    }
    iVar1 = MissionSetTimePal__Fiii(99,0x3b,0x3b);
    if (MisDispTimerCnt < iVar1) {
      MisDispTimerCnt = MisDispTimerCnt + 1;
    }
  }
  return;
}

void MisDispStartInit() {
  MisDispTimer = 0;
  return;
}

void MisDispStart(u_char ucAlpha, void *pTexPtr) {
	int i;
	u_char ucLAlpha;
	static ALPHA_ANIM_TBL sTAlpha[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 128,
			/* .start_time = */ 15,
			/* .end_time = */ 30
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 30,
			/* .end_time = */ 75
		},
		/* [3] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 75,
			/* .end_time = */ 85
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL sTAlpha2[5] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 0,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 15,
			/* .end_time = */ 30
		},
		/* [2] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 128,
			/* .start_time = */ 30,
			/* .end_time = */ 75
		},
		/* [3] = */ {
			/* .start_alpha = */ 128,
			/* .end_alpha = */ 0,
			/* .start_time = */ 75,
			/* .end_time = */ 95
		},
		/* [4] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static ALPHA_ANIM_TBL sMskAlpha[3] = {
		/* [0] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 64,
			/* .start_time = */ 0,
			/* .end_time = */ 75
		},
		/* [1] = */ {
			/* .start_alpha = */ 64,
			/* .end_alpha = */ 0,
			/* .start_time = */ 75,
			/* .end_time = */ 95
		},
		/* [2] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static SCL_ANIM_TBL sTScale[2][5] = {
		/* [0] = */ {
			/* [0] = */ {
				/* .start_scl = */ 3.f,
				/* .end_scl = */ 1.f,
				/* .start_time = */ 0,
				/* .end_time = */ 15
			},
			/* [1] = */ {
				/* .start_scl = */ 1.f,
				/* .end_scl = */ 1.f,
				/* .start_time = */ 15,
				/* .end_time = */ 75
			},
			/* [2] = */ {
				/* .start_scl = */ 1.f,
				/* .end_scl = */ 2.f,
				/* .start_time = */ 75,
				/* .end_time = */ 85
			},
			/* [3] = */ {
				/* .start_scl = */ -1.f,
				/* .end_scl = */ -1.f,
				/* .start_time = */ -1,
				/* .end_time = */ -1
			},
			/* [4] = */ {
				/* .start_scl = */ 0.f,
				/* .end_scl = */ 0.f,
				/* .start_time = */ 0,
				/* .end_time = */ 0
			}
		},
		/* [1] = */ {
			/* [0] = */ {
				/* .start_scl = */ 1.5f,
				/* .end_scl = */ 1.f,
				/* .start_time = */ 0,
				/* .end_time = */ 15
			},
			/* [1] = */ {
				/* .start_scl = */ 1.f,
				/* .end_scl = */ 1.f,
				/* .start_time = */ 15,
				/* .end_time = */ 75
			},
			/* [2] = */ {
				/* .start_scl = */ 1.f,
				/* .end_scl = */ 2.f,
				/* .start_time = */ 75,
				/* .end_time = */ 85
			},
			/* [3] = */ {
				/* .start_scl = */ -1.f,
				/* .end_scl = */ -1.f,
				/* .start_time = */ -1,
				/* .end_time = */ -1
			},
			/* [4] = */ {
				/* .start_scl = */ 0.f,
				/* .end_scl = */ 0.f,
				/* .start_time = */ 0,
				/* .end_time = */ 0
			}
		}
	};
	int iMsgID;
	float fScale;
	float fX;
	float fY;
	
  uchar uVar1;
  int iMsgLabel;
  SCL_ANIM_TBL *tbl;
  int iVar2;
  float fVar3;
  float fScaleW;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = 1;
  SpCmnStart__FP8SPRT_DAT(mission_tex);
  PK2SendVram__FUiiii((uint)pTexPtr,-1,-1,0);
  fVar6 = 1.0;
  uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)sMskAlpha_1002,MisDispTimer);
  fVar5 = 0.0;
  SpCmnBlackOut__FUc(uVar1);
  uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)sTAlpha_1000,MisDispTimer);
  tbl = (SCL_ANIM_TBL *)sTScale_1003;
  do {
    fScaleW = Anim2D_CalcNowScale__FPC12SCL_ANIM_TBLi(tbl,MisDispTimer);
    fVar3 = (float)(uint)(ushort)mission_tex[94].w * (fScaleW - fVar6) * 0.5;
    fVar4 = (float)(uint)(ushort)mission_tex[94].h * (fScaleW - fVar6) * 0.5;
    if (fVar3 < fVar5) {
      fVar3 = 0.0;
    }
    if (fVar4 < fVar5) {
      fVar4 = 0.0;
    }
    iVar2 = iVar2 + -1;
    SpCmnDrawSpriteScale__FiiiffUci(0x5e,(int)-fVar3,(int)-fVar4,fScaleW,fScaleW,uVar1,0);
    SpCmnDrawSpriteScale__FiiiffUci(0x5f,(int)-fVar3,(int)-fVar4,fScaleW,fScaleW,uVar1,0);
    tbl = tbl + 5;
  } while (-1 < iVar2);
  uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)sTAlpha2_1001,MisDispTimer);
  SpCmnDrawRange__FiiiiUci(0x5e,99,0,0,uVar1,0);
  iVar2 = MissionGetID__Fv();
  iMsgLabel = iVar2 * 3 + 2;
  iVar2 = SpCmnGetCenterX__Fiii(0x3c,iMsgLabel,0x140);
  PrintMsg__Fiiiiiii(0x3c,iMsgLabel,iVar2,0x8f,0x21,(int)(char)uVar1,0xa0);
  if (MisDispTimer < 1000) {
    MisDispTimer = MisDispTimer + 1;
  }
  return;
}

void MisDispClearInit() {
  MisDispTimer = 0;
  return;
}

void MisDispClear(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex) {
	int i;
	int iMissionID;
	int iStat;
	u_char ucLAlpha;
	u_char ucAAlpha[8];
	static ALPHA_ANIM_TBL sAlDat[2] = {
		/* [0] = */ {
			/* .start_alpha = */ 0,
			/* .end_alpha = */ 128,
			/* .start_time = */ 0,
			/* .end_time = */ 15
		},
		/* [1] = */ {
			/* .start_alpha = */ -1,
			/* .end_alpha = */ -1,
			/* .start_time = */ -1,
			/* .end_time = */ -1
		}
	};
	static int iDatList[5][3] = {
		/* [0] = */ {
			/* [0] = */ 120,
			/* [1] = */ 121,
			/* [2] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 122,
			/* [1] = */ 122,
			/* [2] = */ -10
		},
		/* [2] = */ {
			/* [0] = */ 123,
			/* [1] = */ 125,
			/* [2] = */ -20
		},
		/* [3] = */ {
			/* [0] = */ 134,
			/* [1] = */ 134,
			/* [2] = */ -40
		},
		/* [4] = */ {
			/* [0] = */ -1,
			/* [1] = */ -1,
			/* [2] = */ -1
		}
	};
	int iNowTime;
	
  uchar uVar1;
  int iMissionID;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  uchar ucAAlpha [8];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  void *local_60;
  
  puVar7 = ucAAlpha;
  iVar6 = 0;
  local_64 = iScore;
  local_60 = pMissionTex;
  iMissionID = MissionGetID__Fv();
  uVar2 = MissionGetStat__Fii(iMissionID,0);
  SpCmnStart__FP8SPRT_DAT(mission_tex);
  PK2SendVram__FUiiii((uint)pRsCmnTex,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,ucAlpha,0);
  piVar4 = &iDatList_1011;
  iVar3 = iDatList_1011;
  while (iVar3 != -1) {
    iVar3 = MisDispTimer + piVar4[2];
    if (iVar3 < 1) {
      *puVar7 = '\0';
    }
    else {
      iVar5 = 0xe;
      if (iVar3 < 0xf) {
        iVar5 = iVar3;
      }
      uVar1 = Anim2D_CalcNowAlpha__FPC14ALPHA_ANIM_TBLi((ALPHA_ANIM_TBL *)sAlDat_1010,iVar5);
      iVar3 = (int)(char)uVar1 * (uint)ucAlpha;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x7f;
      }
      uVar1 = (uchar)(iVar3 >> 7);
      if (iVar6 == 3) {
        if ((int)uVar2 < 2) {
          iVar3 = *piVar4;
          goto LAB_002149f0;
        }
      }
      else {
        iVar3 = *piVar4;
LAB_002149f0:
        SpCmnDrawRange__FiiiiUci(iVar3,piVar4[1],0,0,uVar1,0);
      }
      *puVar7 = uVar1;
      if (iVar6 == 1) {
        MisDispNum__FiiiiUci(local_64,6,0x15a,0xb1,uVar1,0);
        iVar3 = 0x9a;
        iVar5 = 0;
LAB_00214af0:
        SpCmnDrawSprite__FiiiUci(iVar3,iVar5,0,uVar1,0);
      }
      else if (iVar6 < 2) {
        if (iVar6 == 0) {
          MissionGetTimePal__FPiN20i(&local_70,&local_6c,&local_68,iTime);
          MisDispTime__FiiiiiUc(local_70,local_6c,local_68,0,0,uVar1);
          SpCmnDrawRange__FiiiiUci(0x98,0x99,0,0,uVar1,0);
        }
      }
      else {
        if (iVar6 == 2) {
          MisDispNum__FiiiiUci(iShot,6,0x15a,0xda,uVar1,0);
          iVar3 = 0x9b;
          iVar5 = 0x12;
          goto LAB_00214af0;
        }
        if (iVar6 == 3) {
          if (uVar2 < 2) {
            iVar3 = MissionGetPrize__Fi(iMissionID);
            MisDispNum__FiiiiUci(iVar3,5,0x143,0x163,uVar1,0);
            SpCmnDrawSprite__FiiiUci(0x86,0,0,uVar1,0);
            SpCmnDrawSprite__FiiiUci(0x9c,0,0,uVar1,0);
          }
          SpCmnDrawSprite__FiiiUci(0x7e,0,0,uVar1,0);
          iVar3 = MisGetRankLast__Fiiii(iMissionID,iTime,local_64,iShot);
          SpCmnDrawSprite__FiiiUci(iVar3 + 0x7f,0,0,uVar1,0);
        }
      }
    }
    piVar4 = piVar4 + 3;
    puVar7 = puVar7 + 1;
    iVar6 = iVar6 + 1;
    iVar3 = *piVar4;
  }
  PK2SendVram__FUiiii((uint)local_60,-1,-1,0);
  iVar6 = 0;
  SpCmnDrawRange__FiiiiUci(0x73,0x77,0,0,ucAlpha,0);
  piVar4 = &iDatList_1011;
  iVar3 = iDatList_1011;
  do {
    if (iVar3 == -1) {
      if (MisDispTimer < 1000) {
        MisDispTimer = MisDispTimer + 1;
      }
      return;
    }
    uVar1 = ucAAlpha[iVar6];
    if (iVar6 == 1) {
      iVar3 = MissionCheckRecord__Fiii(iMissionID,2,local_64);
      if (iVar3 != 0) {
        iVar3 = 0x8c;
LAB_00214cb4:
        SpCmnDrawSprite__FiiiUci(iVar3,0,0,uVar1,0);
      }
    }
    else if (iVar6 < 2) {
      if ((iVar6 == 0) && (iVar3 = MissionCheckRecord__Fiii(iMissionID,1,iTime), iVar3 != 0)) {
        iVar3 = 0x8b;
        goto LAB_00214cb4;
      }
    }
    else if (iVar6 == 2) {
      iVar3 = MissionCheckRecord__Fiii(iMissionID,3,iShot);
      if (iVar3 != 0) {
        iVar3 = 0x8d;
        goto LAB_00214cb4;
      }
    }
    else if ((iVar6 == 3) && ((int)uVar2 < 2)) {
      SpCmnDrawRange__FiiiiUci(0x87,0x8a,0,0,uVar1,0);
    }
    piVar4 = piVar4 + 3;
    iVar3 = *piVar4;
    iVar6 = iVar6 + 1;
  } while( true );
}

void MisDispClearAll(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex) {
  SpCmnStart__FP8SPRT_DAT(mission_tex);
  PK2SendVram__FUiiii((uint)pMissionTex,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(100,0x65,0,0,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x6d,0x6f,0,0,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x6a,0x6c,0,0,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x70,0x71,0,0xdb,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x70,0x71,0,0x103,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x70,0x71,0,299,ucAlpha,0);
  PrintMsg__Fiiiiiii(0x3c,0x4b,0x8c,0xe6,0x22,(uint)ucAlpha,0xa0);
  PrintMsg__Fiiiiiii(0x3c,0x4c,0x8c,0x10e,0x22,(uint)ucAlpha,0xa0);
  return;
}

void MisDispClearAllS(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex) {
  SpCmnStart__FP8SPRT_DAT(mission_tex);
  PK2SendVram__FUiiii((uint)pMissionTex,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(100,0x69,0,0,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x6d,0x6f,0,0,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x70,0x71,0,0xdb,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x70,0x71,0,0x103,ucAlpha,0);
  PrintMsg__Fiiiiiii(0x3c,0x4b,0x8c,0xe6,0x22,(uint)ucAlpha,0xa0);
  return;
}

void MisDispBadEnd(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex) {
	int iHour;
	int iMin;
	int iSec;
	
  int iHour;
  int iMin;
  int iSec;
  
  SpCmnStart__FP8SPRT_DAT(mission_tex);
  PK2SendVram__FUiiii((uint)pMissionTex,-1,-1,0);
  DrawCmnCapGroup_W__FiiUcUi(0xc,0xc,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0x9d,0xa1,0,0,ucAlpha,0);
  PK2SendVram__FUiiii((uint)pRsCmnTex,-1,-1,0);
  SpCmnDrawRange__FiiiiUci(0xa2,0xa9,0,0,ucAlpha,0);
  MissionGetTimePal__FPiN20i(&iHour,&iMin,&iSec,iTime);
  MisDispTime__FiiiiiUc(iHour,iMin,iSec,0,0,ucAlpha);
  MisDispNum__FiiiiUci(iScore,6,0x15a,0xb1,ucAlpha,0);
  SpCmnDrawRange__FiiiiUci(0xaa,0xac,0,0,ucAlpha,0);
  MisDispNum__FiiiiUci(iShot,6,0x15a,0xda,ucAlpha,0);
  SpCmnDrawSprite__FiiiUci(0xad,0x12,0,ucAlpha,0);
  return;
}
