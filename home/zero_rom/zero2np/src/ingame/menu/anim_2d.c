// STATUS: NOT STARTED

#include "anim_2d.h"

float Anim2D_CalcNowPos(POS_ANIM_TBL *tbl, int timer) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 78,
		/* [12] = */ 111,
		/* [13] = */ 119,
		/* [14] = */ 80,
		/* [15] = */ 111,
		/* [16] = */ 115,
		/* [17] = */ 0
	};
	int i;
	float pos;
	int tbl_pos;
	int change_time;
	
  ushort uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  POS_ANIM_TBL *pPVar5;
  float fVar6;
  
  lVar2 = (long)timer;
  iVar3 = 0;
  if ((long)(short)tbl->start_time == -1) goto LAB_0012af04;
  if (lVar2 < (short)tbl->start_time) {
    iVar3 = 1;
  }
  else {
    if (lVar2 < (short)tbl->end_time) {
      iVar4 = 0;
      goto LAB_0012af4c;
    }
    iVar3 = 1;
  }
  while (iVar4 = -1, iVar3 < 100) {
    if ((long)(short)tbl[iVar3].start_time == -1) {
LAB_0012af04:
      iVar3 = iVar3 + 1;
    }
    else if (lVar2 < (short)tbl[iVar3].start_time) {
      iVar3 = iVar3 + 1;
    }
    else {
      iVar4 = iVar3;
      if (lVar2 < (short)tbl[iVar3].end_time) break;
      iVar3 = iVar3 + 1;
    }
  }
LAB_0012af4c:
  if (iVar4 == -1) {
    fVar6 = 0.0;
  }
  else {
    pPVar5 = tbl + iVar4;
    iVar3 = (int)(short)pPVar5->end_time - (int)(short)pPVar5->start_time;
    uVar1 = pPVar5->start_time;
    if (iVar3 == 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("POS TBL Warning!! %s");
      uVar1 = pPVar5->start_time;
    }
    fVar6 = Anim2D_CalcPosAnim__Fffiii
                      (pPVar5->start_pos,pPVar5->end_pos,pPVar5->anim_label,iVar3,
                       timer - (short)uVar1);
  }
  return fVar6;
}

float Anim2D_CalcNowScale(SCL_ANIM_TBL *tbl, int timer) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 78,
		/* [12] = */ 111,
		/* [13] = */ 119,
		/* [14] = */ 83,
		/* [15] = */ 99,
		/* [16] = */ 97,
		/* [17] = */ 108,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	int i;
	float scale;
	int tbl_pos;
	float change_scl;
	float change_time;
	
  ushort uVar1;
  SCL_ANIM_TBL *pSVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  pSVar2 = tbl;
  iVar3 = 0;
  do {
    iVar4 = iVar3;
    if ((((long)(short)pSVar2->start_time != -1) && ((long)(short)pSVar2->start_time <= (long)timer)
        ) && ((long)timer < (long)(short)pSVar2->end_time)) break;
    iVar3 = iVar4 + 1;
    iVar4 = -1;
    pSVar2 = pSVar2 + 1;
  } while (iVar3 < 100);
  if (iVar4 == -1) {
    fVar5 = 1.0;
  }
  else {
    pSVar2 = tbl + iVar4;
    uVar1 = pSVar2->start_time;
    fVar7 = (float)((int)(short)pSVar2->end_time - (int)(short)pSVar2->start_time);
    fVar5 = pSVar2->start_scl;
    fVar6 = pSVar2->end_scl - fVar5;
    if (fVar7 == 0.0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("SCALE TBL Warning!! %s");
      fVar5 = pSVar2->start_scl;
      uVar1 = pSVar2->start_time;
    }
    fVar5 = fVar5 + (fVar6 * (float)(timer - (short)uVar1)) / fVar7;
  }
  return fVar5;
}

u_char Anim2D_CalcNowAlpha(ALPHA_ANIM_TBL *tbl, int timer) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 78,
		/* [12] = */ 111,
		/* [13] = */ 119,
		/* [14] = */ 65,
		/* [15] = */ 108,
		/* [16] = */ 112,
		/* [17] = */ 104,
		/* [18] = */ 97,
		/* [19] = */ 0
	};
	int i;
	u_char alpha;
	int tbl_pos;
	int change_time;
	
  ushort uVar1;
  uchar uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ALPHA_ANIM_TBL *pAVar6;
  
  lVar3 = (long)timer;
  iVar4 = 0;
  if ((long)(short)tbl->start_time == -1) goto LAB_0012b184;
  if (lVar3 < (short)tbl->start_time) {
    iVar4 = 1;
  }
  else {
    if (lVar3 < (short)tbl->end_time) {
      iVar5 = 0;
      goto LAB_0012b1cc;
    }
    iVar4 = 1;
  }
  while (iVar5 = -1, iVar4 < 100) {
    if ((long)(short)tbl[iVar4].start_time == -1) {
LAB_0012b184:
      iVar4 = iVar4 + 1;
    }
    else if (lVar3 < (short)tbl[iVar4].start_time) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar5 = iVar4;
      if (lVar3 < (short)tbl[iVar4].end_time) break;
      iVar4 = iVar4 + 1;
    }
  }
LAB_0012b1cc:
  if (iVar5 == -1) {
    uVar2 = 0x80;
  }
  else {
    pAVar6 = tbl + iVar5;
    iVar4 = (int)(short)pAVar6->end_time - (int)(short)pAVar6->start_time;
    uVar1 = pAVar6->start_time;
    if (iVar4 == 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("ALPHA TBL Warning!! %s");
      uVar1 = pAVar6->start_time;
    }
    uVar2 = Anim2D_CalcAlphaAnim__FUcUcii
                      (*(uchar *)&pAVar6->start_alpha,*(uchar *)&pAVar6->end_alpha,iVar4,
                       timer - (short)uVar1);
  }
  return uVar2;
}

u_char Anim2D_CalcNowRGB(RGB_ANIM_TBL *tbl, int timer) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 78,
		/* [12] = */ 111,
		/* [13] = */ 119,
		/* [14] = */ 82,
		/* [15] = */ 71,
		/* [16] = */ 66,
		/* [17] = */ 0
	};
	int i;
	u_char rgb;
	int tbl_pos;
	short int change_rgb;
	short int change_time;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  uchar uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  RGB_ANIM_TBL *pRVar8;
  
  lVar5 = (long)timer;
  iVar6 = 0;
  if ((long)(short)tbl->start_time == -1) goto LAB_0012b2b4;
  if (lVar5 < (short)tbl->start_time) {
    iVar6 = 1;
  }
  else {
    if (lVar5 < (short)tbl->end_time) {
      iVar7 = 0;
      goto LAB_0012b2fc;
    }
    iVar6 = 1;
  }
  while (iVar7 = -1, iVar6 < 100) {
    if ((long)(short)tbl[iVar6].start_time == -1) {
LAB_0012b2b4:
      iVar6 = iVar6 + 1;
    }
    else if (lVar5 < (short)tbl[iVar6].start_time) {
      iVar6 = iVar6 + 1;
    }
    else {
      iVar7 = iVar6;
      if (lVar5 < (short)tbl[iVar6].end_time) break;
      iVar6 = iVar6 + 1;
    }
  }
LAB_0012b2fc:
  if (iVar7 == -1) {
    uVar4 = 0x80;
  }
  else {
    pRVar8 = tbl + iVar7;
    uVar1 = pRVar8->start_time;
    uVar2 = pRVar8->end_rgb;
    uVar3 = pRVar8->start_rgb;
    iVar6 = (int)(((uint)pRVar8->end_time - (uint)uVar1) * 0x10000) >> 0x10;
    if (iVar6 == 0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("RGB TBL Warning!! %s");
      uVar1 = pRVar8->start_time;
      trap(7);
    }
    uVar4 = *(char *)&pRVar8->start_rgb +
            (char)((((int)(((uint)uVar2 - (uint)uVar3) * 0x10000) >> 0x10) * (timer - (short)uVar1))
                  / iVar6);
  }
  return uVar4;
}

float Anim2D_CalcNowRot(ROT_ANIM_TBL *tbl, int timer) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 78,
		/* [12] = */ 111,
		/* [13] = */ 119,
		/* [14] = */ 82,
		/* [15] = */ 111,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	int i;
	float rot;
	int tbl_pos;
	float change_rot;
	short int change_time;
	
  ushort uVar1;
  ROT_ANIM_TBL *pRVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  pRVar2 = tbl;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    if ((((long)(short)pRVar2->start_time != -1) && ((long)(short)pRVar2->start_time <= (long)timer)
        ) && ((long)timer < (long)(short)pRVar2->end_time)) break;
    iVar4 = iVar3 + 1;
    iVar3 = -1;
    pRVar2 = pRVar2 + 1;
  } while (iVar4 < 100);
  if (iVar3 == -1) {
    fVar5 = 0.0;
  }
  else {
    pRVar2 = tbl + iVar3;
    uVar1 = pRVar2->start_time;
    fVar5 = pRVar2->start_rot;
    iVar4 = (int)(((uint)pRVar2->end_time - (uint)uVar1) * 0x10000) >> 0x10;
    fVar6 = pRVar2->end_rot - fVar5;
    if (iVar4 == 0) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ROT TBL Error!! %s");
      fVar5 = pRVar2->start_rot;
      uVar1 = pRVar2->start_time;
    }
    fVar5 = fVar5 + (fVar6 * (float)(timer - (short)uVar1)) / (float)iVar4;
  }
  return fVar5;
}

float Anim2D_CalcPosAnim(float start_pos, float end_pos, int calc_label, int anim_time, int timer) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 65,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 109,
		/* [4] = */ 50,
		/* [5] = */ 68,
		/* [6] = */ 95,
		/* [7] = */ 67,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 99,
		/* [11] = */ 80,
		/* [12] = */ 111,
		/* [13] = */ 115,
		/* [14] = */ 65,
		/* [15] = */ 110,
		/* [16] = */ 105,
		/* [17] = */ 109,
		/* [18] = */ 0
	};
	float pos;
	float distance;
	
  float fVar1;
  
  fVar1 = 0.0;
  if (calc_label == 1) {
    anim_time = anim_time * anim_time;
    timer = timer * timer;
code_r0x0012b588:
    fVar1 = start_pos + ((end_pos - start_pos) / (float)anim_time) * (float)timer;
  }
  else {
    if (calc_label < 2) {
      if (calc_label == 0) goto code_r0x0012b588;
    }
    else if (calc_label == 2) {
      return end_pos - ((end_pos - start_pos) / (float)(anim_time * anim_time)) *
                       (float)((timer - anim_time) * (timer - anim_time));
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return fVar1;
}

u_char Anim2D_CalcAlphaAnim(u_char start_alpha, u_char end_alpha, int anim_time, int timer) {
	u_char alpha;
	int change_alpha;
	
  if (anim_time != 0) {
    if (anim_time == 0) {
      trap(7);
    }
    end_alpha = start_alpha +
                (char)((int)(((uint)end_alpha - (uint)start_alpha) * timer) / anim_time);
  }
  return end_alpha;
}
