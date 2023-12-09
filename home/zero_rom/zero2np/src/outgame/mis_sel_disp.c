// STATUS: NOT STARTED

#include "mis_sel_disp.h"

static int MisFadeNew = -1;
static int MisFadeOld = -1;
static int MisFadeCnt = 0;

static void PrintNull_K(int iNum, int iX, int iY, u_char ucColLabel, u_char ucAlpha, int iPri) {
	int i;
	
  if (0 < iNum) {
    do {
      iNum = iNum + -1;
      SpCmnPrintMsg_K__Fiiiiiii(8,3,iX,iY,(uint)ucColLabel,(uint)ucAlpha,iPri);
      iX = iX + 0x10;
    } while (iNum != 0);
  }
  return;
}

static void SpCmnPrintNumber_NK2(int iData, int iNum, int iX, int iY, u_char ucColLabel, u_char ucAlpha, int iPri, u_char ucMsgType, int ucZeroFlg) {
	u_char ucZeroFlg;
	
  if (iData < 0) {
    PrintNull_K__FiiiUcUci(iNum,iX,iY,ucColLabel,ucAlpha,iPri);
    return;
  }
  SpCmnPrintNumber_NK__FiiiiUcUciUcUc
            (iData,iNum,iX,iY,ucColLabel,ucAlpha,iPri,ucMsgType,ucZeroFlg & 0xff);
  return;
}

static void MissionDrawRank(int iRank, int off_x, int iCsr, u_char alpha) {
	static int iSumiY[6] = {
		/* [0] = */ 112,
		/* [1] = */ 147,
		/* [2] = */ 182,
		/* [3] = */ 217,
		/* [4] = */ 252,
		/* [5] = */ 287
	};
	static int iNon[6] = {
		/* [0] = */ 116,
		/* [1] = */ 151,
		/* [2] = */ 186,
		/* [3] = */ 221,
		/* [4] = */ 256,
		/* [5] = */ 291
	};
	
  int iVar1;
  
  if (iRank == -1) {
    PrintNull_K__FiiiUcUci(2,0x20c,*(int *)(iNon_91 + iCsr * 4),'\x15',alpha,0xa0);
    return;
  }
  iVar1 = iCsr * 4;
  if (iRank == 0) {
    SpCmnDrawSprite__FiiiUci(0x3b,off_x,*(int *)(iSumiY_90 + iVar1) + 2,alpha,1);
    SpCmnDrawSprite__FiiiUci(0x3c,off_x,*(int *)(iSumiY_90 + iVar1) + 1,alpha,1);
  }
  else {
    SpCmnDrawSprite__FiiiUci(iRank + 0x3c,off_x,*(int *)(iSumiY_90 + iVar1) + 1,alpha,1);
  }
  if (iRank < 2) {
    SpCmnDrawSprite__FiiiUci(0x39,off_x,*(int *)(iSumiY_90 + iVar1),alpha,1);
  }
  else {
    SpCmnDrawSprite__FiiiUci(0x38,off_x,*(int *)(iSumiY_90 + iVar1),alpha,1);
  }
  return;
}

void MissionDrawTime(int iHour, int iMin, int iSec, int iOffX, int iOffY, u_char ucAlpha) {
  SpCmnPrintNumber_NK2__FiiiiUcUciUcUc(iHour,2,iOffX,iOffY,'\x15',ucAlpha,0,'\0',1);
  SpCmnPrintMsg_K__Fiiiiiii(8,0,iOffX + 0x24,iOffY,0x15,(uint)ucAlpha,0xa0);
  SpCmnPrintNumber_NK2__FiiiiUcUciUcUc(iMin,2,iOffX + 0x32,iOffY,'\x15',ucAlpha,0,'\0',1);
  SpCmnPrintMsg_K__Fiiiiiii(8,0,iOffX + 0x56,iOffY,0x15,(uint)ucAlpha,0xa0);
  SpCmnPrintNumber_NK2__FiiiiUcUciUcUc(iSec,2,iOffX + 100,iOffY,'\x15',ucAlpha,0,'\0',1);
  return;
}

static void MissionDrawClearTime(int iHour, int iMin, int iSec, int iCsr, u_char ucAlpha) {
	static int iPosY[6] = {
		/* [0] = */ 116,
		/* [1] = */ 151,
		/* [2] = */ 186,
		/* [3] = */ 221,
		/* [4] = */ 256,
		/* [5] = */ 291
	};
	
  MissionDrawTime__FiiiiiUc(iHour,iMin,iSec,0x15e,*(int *)(iPosY_98 + iCsr * 4),ucAlpha);
  return;
}

static void MissionDrawClearPoint(int iPoint, int iCsr, u_char ucAlpha) {
	static int iPosY[6] = {
		/* [0] = */ 116,
		/* [1] = */ 151,
		/* [2] = */ 186,
		/* [3] = */ 221,
		/* [4] = */ 256,
		/* [5] = */ 291
	};
	static int iWakuY[6] = {
		/* [0] = */ 124,
		/* [1] = */ 159,
		/* [2] = */ 194,
		/* [3] = */ 229,
		/* [4] = */ 264,
		/* [5] = */ 299
	};
	
  int iVar1;
  
  iVar1 = iCsr * 4;
  if (iPoint < 0) {
    PrintNull_K__FiiiUcUci(6,0x15e,*(int *)(iPosY_102 + iVar1),'\x15',ucAlpha,0xa0);
  }
  else {
    SpCmnPrintNumber_NK__FiiiiUcUciUcUc
              (iPoint,6,0x15e,*(int *)(iPosY_102 + iVar1),'\x15',ucAlpha,0,'\0',0);
  }
  SpCmnDrawSprite__FiiiUci(0x3a,0,*(int *)(iWakuY_103 + iVar1),ucAlpha,1);
  return;
}

static void MissionDrawTassei(int iRank, int iOffY, u_char ucAlpha) {
	int i;
	int iRid;
	static int iPos[3][3] = {
		/* [0] = */ {
			/* [0] = */ 204,
			/* [1] = */ 214,
			/* [2] = */ 224
		},
		/* [1] = */ {
			/* [0] = */ 273,
			/* [1] = */ 283,
			/* [2] = */ 293
		},
		/* [2] = */ {
			/* [0] = */ 117,
			/* [1] = */ 127,
			/* [2] = */ 137
		}
	};
	int iKurai;
	int iNum;
	
  int iVar1;
  int off_x;
  int iVar2;
  int iVar3;
  int iLabel;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 100;
  iVar7 = 0;
  iVar3 = MissionGetTassei__Fi(iRank);
  if (iRank == 1) {
    iVar7 = 1;
  }
  else if (iRank < 2) {
    if (iRank != 0) {
      return;
    }
  }
  else {
    if (iRank != 5) {
      return;
    }
    iVar7 = 2;
  }
  iVar6 = 2;
  piVar5 = &iPos_107 + iVar7 * 3;
  do {
    iVar1 = iVar3 / iVar4;
    if (iVar4 == 0) {
      trap(7);
    }
    off_x = *piVar5;
    iVar6 = iVar6 + -1;
    piVar5 = piVar5 + 1;
    iLabel = iVar1 + 0x40;
    iVar2 = iVar1 * iVar4;
    if (8 < iVar1 - 1U) {
      iLabel = 0x4a;
    }
    SpCmnDrawSprite__FiiiUci(iLabel,off_x,iOffY,ucAlpha,0);
    iVar4 = iVar4 / 10;
    iVar3 = iVar3 - iVar2;
  } while (-1 < iVar6);
  SpCmnDrawSprite__FiiiUci(iVar7 + 0x4b,0,0,ucAlpha,0);
  return;
}

static void MissionDrawScrollbar(int iTop, u_char ucAlpha) {
	int iList;
	int iMovY[2];
	
  uint uVar1;
  ulong *puVar2;
  int off_y;
  int iMovY [2];
  
  uVar1 = (int)iMovY + 7U & 7;
  puVar2 = (ulong *)(((int)iMovY + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | (ulong)DAT_003f30a8 >> (7 - uVar1) * 8;
  iMovY = DAT_003f30a8;
  SpCmnDrawRange__FiiiiUci(0x36,0x37,0,0,ucAlpha,0);
  off_y = ((iMovY[1] - iMovY[0]) * iTop) / 0x13;
  SpCmnDrawSprite__FiiiUci(0x33,0,off_y,ucAlpha,1);
  SpCmnDrawSprite__FiiiUci(0x34,0,off_y,ucAlpha,1);
  SpCmnDrawSprite__FiiiUci(0x35,0,off_y,ucAlpha,1);
  return;
}

static void MissionDrawCsrOnly(int iLabel, int iOffX, int iOffY, u_char ucAlpha, float fScale) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  SpCmnDrawSprite__FiiiUci(iLabel,iOffX,iOffY,ucAlpha,1);
  SpCmnSetSprite__FP9DISP_SPRTiiiUci(&ds,iLabel + 1,iOffX,iOffY,ucAlpha,1);
  ds.sch = 1.0;
  ds.csx = ds.x;
  ds.csy = ds.y;
  ds.scw = fScale;
  DispSprD__FP9DISP_SPRT(&ds);
  SpCmnDrawSprite__FiiiUci(iLabel + 2,iOffX,iOffY,ucAlpha,1);
  return;
}

void MissionCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(8,8,alpha,0);
  return;
}

static void MissionDrawCsr(int iCnt, u_char ucAlpha) {
	u_char ucRgb;
	static int iPosY[4][6] = {
		/* [0] = */ {
			/* [0] = */ 113,
			/* [1] = */ 148,
			/* [2] = */ 183,
			/* [3] = */ 218,
			/* [4] = */ 253,
			/* [5] = */ 288
		},
		/* [1] = */ {
			/* [0] = */ 95,
			/* [1] = */ 130,
			/* [2] = */ 165,
			/* [3] = */ 200,
			/* [4] = */ 235,
			/* [5] = */ 270
		},
		/* [2] = */ {
			/* [0] = */ 146,
			/* [1] = */ 181,
			/* [2] = */ 216,
			/* [3] = */ 251,
			/* [4] = */ 286,
			/* [5] = */ 321
		},
		/* [3] = */ {
			/* [0] = */ 107,
			/* [1] = */ 142,
			/* [2] = */ 177,
			/* [3] = */ 212,
			/* [4] = */ 247,
			/* [5] = */ 282
		}
	};
	static char iCsrTime = 0;
	int iEndCheck;
	
  int iVar1;
  int iVar2;
  uchar ucRgb;
  
  iVar2 = iCnt * 4;
  iVar1 = MissionCheckEnd__Fv();
  Zero2Anim2D_CsrAnimCtrl__FPcPUc(&iCsrTime_121,&ucRgb);
  ucRgb = (uchar)((uint)ucAlpha * (uint)ucRgb >> 7);
  MissionDrawCsrOnly__FiiiUcf(0x4e,0,*(int *)(iPosY_120 + iVar2 + 0x48),ucAlpha,DAT_003ee5b0);
  MissionDrawCsrOnly__FiiiUcf(0x55,0,*(int *)(iPosY_120 + iVar2),ucAlpha,DAT_003ee5b4);
  if (iVar1 != 1) {
    SpCmnDrawSprite__FiiiUci(0x53,0,*(int *)(iPosY_120 + iVar2 + 0x18),ucAlpha,1);
    SpCmnDrawSprite__FiiiUci(0x51,0,*(int *)(iPosY_120 + iVar2 + 0x18) + -2,ucRgb,1);
  }
  if (iVar1 != 2) {
    SpCmnDrawSprite__FiiiUci(0x54,0,*(int *)(iPosY_120 + iVar2 + 0x30),ucAlpha,1);
    SpCmnDrawSprite__FiiiUci(0x52,0,*(int *)(iPosY_120 + iVar2 + 0x30) + -4,ucRgb,1);
  }
  return;
}

void MissionDrawSelect(void *pMisTexAddr, int iTopID, int iCsr, u_char ucAlpha) {
	int i;
	static int iPosY[6] = {
		/* [0] = */ 116,
		/* [1] = */ 151,
		/* [2] = */ 186,
		/* [3] = */ 221,
		/* [4] = */ 256,
		/* [5] = */ 291
	};
	int iNum;
	int iType;
	int iRank;
	int iHour;
	int iMin;
	int iSec;
	
  int iFrame;
  int iVar1;
  int iVar2;
  int iCsr_00;
  int iMsgID;
  int *piVar3;
  int iHour;
  int iMin;
  int iSec;
  int local_54;
  
  iCsr_00 = 0;
  local_54 = iCsr;
  PK2SendVram__FUiiii((uint)pMisTexAddr,-1,-1,0);
  SpCmnDrawRange__FiiiiUci(0,0x32,0,0,ucAlpha,0);
  MissionCaptionDisp__FiiUc(0,0,ucAlpha);
  MissionDrawTassei__FiiUc(0,0x56,ucAlpha);
  MissionDrawTassei__FiiUc(1,0x56,ucAlpha);
  MissionDrawTassei__FiiUc(5,0x56,ucAlpha);
  MissionDrawScrollbar__FiUc(iTopID,ucAlpha);
  piVar3 = &iPosY_125;
  iMsgID = iTopID * 3;
  iVar2 = iTopID;
  do {
    iFrame = MissionGetScore__Fi(iVar2);
    iVar1 = MissionGetType__Fi(iVar2);
    iVar2 = MissionGetRank3__Fi(iVar2);
    SpCmnPrintMsg_K__Fiiiiiii(0x3c,iMsgID,0xa0,*piVar3,0x15,(uint)ucAlpha,0xa0);
    MissionDrawRank__FiiiUc(iVar2,0,iCsr_00,ucAlpha);
    if (iVar1 == 1) {
      if (iVar2 == -1) {
        iHour = -1;
        iSec = -1;
        iMin = -1;
      }
      else {
        MissionGetTimePal__FPiN20i(&iHour,&iMin,&iSec,iFrame);
      }
      MissionDrawClearTime__FiiiiUc(iHour,iMin,iSec,iCsr_00,ucAlpha);
    }
    else if ((0 < iVar1) && (iVar1 < 4)) {
      if (iVar2 == -1) {
        MissionDrawClearPoint__FiiUc(-1,iCsr_00,ucAlpha);
      }
      else {
        MissionDrawClearPoint__FiiUc(iFrame,iCsr_00,ucAlpha);
      }
    }
    iCsr_00 = iCsr_00 + 1;
    piVar3 = piVar3 + 1;
    iMsgID = iMsgID + 3;
  } while ((iCsr_00 < 6) && (iVar2 = iCsr_00 + iTopID, iCsr_00 < 0x19));
  MissionDrawCsr__FiUc(local_54,ucAlpha);
  return;
}

void MissionDrawMiniMenu(void *pOutGameTex, void *pMisTexAddr, int iCsr, u_char ucMstAlpha, float fMove, int iSelCsr, int iFlg) {
	int i;
	DISP_SPRT aDs;
	int iPosID;
	int iPosY[2][6];
	u_char ucAlpha;
	float fCsrScale;
	int iMenuY;
	int iCsrY;
	float fW;
	
  undefined *puVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  DISP_SPRT aDs;
  int iPosY [2] [6];
  
  puVar1 = (undefined *)((int)iPosY + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0120 >> (7 - uVar6) * 8;
  iPosY[0]._0_8_ = DAT_003c0120;
  puVar1 = (undefined *)((int)iPosY + 0xf);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0128 >> (7 - uVar6) * 8;
  iPosY[0]._8_8_ = DAT_003c0128;
  puVar1 = (undefined *)((int)iPosY + 0x17);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0130 >> (7 - uVar6) * 8;
  iPosY[0]._16_8_ = DAT_003c0130;
  puVar1 = (undefined *)((int)iPosY[1] + 7);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0138 >> (7 - uVar6) * 8;
  iPosY[1]._0_8_ = DAT_003c0138;
  puVar1 = (undefined *)((int)iPosY[1] + 0xf);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0140 >> (7 - uVar6) * 8;
  iPosY[1]._8_8_ = DAT_003c0140;
  puVar1 = (undefined *)((int)iPosY[1] + 0x17);
  uVar6 = (uint)puVar1 & 7;
  puVar2 = (ulong *)(puVar1 + -uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c0148 >> (7 - uVar6) * 8;
  iPosY[1]._16_8_ = DAT_003c0148;
  if (fMove < 0.0) {
    fMove = 0.0;
  }
  if (1.0 < fMove) {
    fMove = 1.0;
  }
  PK2SendVram__FUiiii((uint)pOutGameTex,-1,-1,0);
  SpCmnDrawRange__FiiiiUci(0x5b,0x5d,0,0,ucMstAlpha,0);
  fVar9 = DAT_003ee5b8;
  fVar8 = (float)(uint)ucMstAlpha * fMove;
  if (2.147484e+09 <= fVar8) {
    fVar8 = fVar8 - 2.147484e+09;
  }
  if (iFlg == 0) {
    fMove = 1.0;
    ucMstAlpha = (uchar)(int)fVar8;
  }
  iVar4 = 0;
  uVar6 = (uint)(iCsr < 3);
  iVar7 = uVar6 * 2;
  piVar5 = iPosY[uVar6] + 3;
  iVar3 = *piVar5;
  fVar10 = DAT_003ee5bc;
  while( true ) {
    piVar5 = piVar5 + 1;
    fVar11 = 1.0;
    if (iVar4 == iSelCsr) {
      fVar11 = DAT_003ee5c0;
    }
    SpCmnSetSprite__FP9DISP_SPRTiiiUci(&aDs,0x5c,0x1c5,iVar3 + -0x13,ucMstAlpha,0);
    iVar4 = iVar4 + 1;
    aDs.csx = aDs.x;
    aDs.scw = fMove * fVar9 * fVar11;
    aDs.csy = aDs.y;
    aDs.sch = 1.0;
    DispSprD__FP9DISP_SPRT(&aDs);
    SpCmnSetSprite__FP9DISP_SPRTiiiUci(&aDs,0x5c,0x1c5,iVar3 + -0x13,ucMstAlpha,0);
    aDs.csx = aDs.x;
    aDs.scw = fMove * fVar10 * fVar11;
    aDs.csy = aDs.y;
    aDs.sch = 1.0;
    DispSprD__FP9DISP_SPRT(&aDs);
    if (1 < iVar4) break;
    iVar3 = *piVar5;
  }
  uVar6 = (uint)(iCsr < 3);
  if (fMove != 0.0) {
    if ((int)aDs.w < 0) {
      fVar9 = (float)(aDs.w & 1 | aDs.w >> 1);
      fVar9 = fVar9 + fVar9;
    }
    else {
      fVar9 = (float)aDs.w;
    }
    fVar10 = fVar9 * DAT_003ee5c4 * DAT_003ee5c8;
    fVar9 = fVar10 * 0.5;
    DrawCmnSelCsr__FUiffUcfUc
              (0,(fVar9 + DAT_003ee5cc) - fVar9 * fMove,
               (float)(iPosY[(iVar7 + uVar6) * 2 + iSelCsr] + -3),ucMstAlpha,fVar10 * fMove,'\0');
  }
  PK2SendVram__FUiiii((uint)pMisTexAddr,-1,-1,0);
  iVar4 = 0;
  piVar5 = iPosY + (iVar7 + uVar6) * 2;
  iVar3 = *piVar5;
  while( true ) {
    piVar5 = piVar5 + 1;
    iVar7 = iVar4 + 0x59;
    iVar4 = iVar4 + 1;
    SpCmnDrawSprite__FiiiUci(iVar7,0,iVar3,(uchar)(int)fVar8,1);
    if (1 < iVar4) break;
    iVar3 = *piVar5;
  }
  return;
}

int MisFadeSetMsg(int iNewMsg) {
  MisFadeOld = MisFadeNew;
  MisFadeNew = iNewMsg;
  if (MisFadeOld != iNewMsg) {
    MisFadeCnt = 0;
  }
  return (uint)(MisFadeOld != iNewMsg);
}

static void MisFadePrint(int iMsgID, int iX, int iY, u_char ucAlpha) {
	static int iPosX[2] = {
		/* [0] = */ 155,
		/* [1] = */ 362
	};
	
  int iVar1;
  
  if (-1 < iMsgID) {
    if (iMsgID - 0x55U < 2) {
      iVar1 = MissionGetYesNo__Fv();
      DrawCmnSelCsr__FUiffUcfUc
                (0,(float)*(int *)((int)&iPosX_135 + iVar1 * 4),390.0,ucAlpha,0.0,'\0');
      DrawCmnSelYes__FUiffUc(0,153.0,390.0,ucAlpha);
      DrawCmnSelNo__FUiffUc(0,DAT_003ee5d0,390.0,ucAlpha);
    }
    PrintMsg__Fiiiiiii(0x3c,iMsgID,iX,iY,1,(uint)ucAlpha,0xa0);
  }
  return;
}

void MisFadeProc(u_char ucMstAlpha) {
	int iAlpha;
	MSG_WIN_DAT sWinDat;
	DISP_STR sDispStr;
	
  int iVar1;
  MSG_WIN_DAT sWinDat;
  DISP_STR sDispStr;
  
  iVar1 = 0x80;
  if (MisFadeCnt < 10) {
    iVar1 = (MisFadeCnt << 7) / 10;
    MisFadeCnt = MisFadeCnt + 1;
  }
  iVar1 = (int)(iVar1 * (uint)ucMstAlpha) >> 7;
  SetMsgWinDefData__FP11MSG_WIN_DATi(&sWinDat,0x3c);
  sWinDat.h = sWinDat.h + 6.0;
  sWinDat.y = sWinDat.y - 6.0;
  DrawCmnWindow__FUiffffUcUc(0,sWinDat.x,sWinDat.y,sWinDat.w,sWinDat.h,ucMstAlpha,0x80);
  SetMsgDefData__FP8DISP_STRi(&sDispStr,0x3c);
  sDispStr.pos_y = sDispStr.pos_y + -5;
  MisFadePrint__FiiiUc(MisFadeNew,sDispStr.pos_x,sDispStr.pos_y,(uchar)iVar1);
  MisFadePrint__FiiiUc
            (MisFadeOld,sDispStr.pos_x,sDispStr.pos_y,
             (uchar)((int)((0x80 - iVar1) * (uint)ucMstAlpha) >> 7));
  return;
}
