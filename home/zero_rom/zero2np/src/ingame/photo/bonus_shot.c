// STATUS: NOT STARTED

#include "bonus_shot.h"

struct SHOT_NAME_TEX {
	unsigned char mPreTexNo;
	unsigned char mAfterTexNo;
};

static MyPoint aComboNumPoint[2] = {
	/* [0] = */ {
		/* .x = */ 49
	},
	/* [1] = */ {
		/* .x = */ 118
	}
};

static MyPoint aComboCharPoint[2] = {
	/* [0] = */ {
		/* .x = */ 63
	},
	/* [1] = */ {
		/* .x = */ 49
	}
};

unsigned char CBonusShotOne type_info node[8];

static SHOT_NAME_TEX aShotTexTbl[5][9] = {
	/* [0] = */ {
		/* [0] = */ {
			/* .mPreTexNo = */ 77,
			/* .mAfterTexNo = */ 76
		},
		/* [1] = */ {
			/* .mPreTexNo = */ 74,
			/* .mAfterTexNo = */ 76
		},
		/* [2] = */ {
			/* .mPreTexNo = */ 79,
			/* .mAfterTexNo = */ 76
		},
		/* [3] = */ {
			/* .mPreTexNo = */ 73,
			/* .mAfterTexNo = */ 76
		},
		/* [4] = */ {
			/* .mPreTexNo = */ 78,
			/* .mAfterTexNo = */ 75
		},
		/* [5] = */ {
			/* .mPreTexNo = */ 80,
			/* .mAfterTexNo = */ 76
		},
		/* [6] = */ {
			/* .mPreTexNo = */ 81,
			/* .mAfterTexNo = */ 76
		},
		/* [7] = */ {
			/* .mPreTexNo = */ 80,
			/* .mAfterTexNo = */ 75
		},
		/* [8] = */ {
			/* .mPreTexNo = */ 81,
			/* .mAfterTexNo = */ 75
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* .mPreTexNo = */ 85,
			/* .mAfterTexNo = */ 86
		},
		/* [1] = */ {
			/* .mPreTexNo = */ 85,
			/* .mAfterTexNo = */ 83
		},
		/* [2] = */ {
			/* .mPreTexNo = */ 85,
			/* .mAfterTexNo = */ 88
		},
		/* [3] = */ {
			/* .mPreTexNo = */ 85,
			/* .mAfterTexNo = */ 82
		},
		/* [4] = */ {
			/* .mPreTexNo = */ 84,
			/* .mAfterTexNo = */ 87
		},
		/* [5] = */ {
			/* .mPreTexNo = */ 89,
			/* .mAfterTexNo = */ 85
		},
		/* [6] = */ {
			/* .mPreTexNo = */ 90,
			/* .mAfterTexNo = */ 85
		},
		/* [7] = */ {
			/* .mPreTexNo = */ 84,
			/* .mAfterTexNo = */ 89
		},
		/* [8] = */ {
			/* .mPreTexNo = */ 84,
			/* .mAfterTexNo = */ 90
		}
	},
	/* [2] = */ {
		/* [0] = */ {
			/* .mPreTexNo = */ 95,
			/* .mAfterTexNo = */ 94
		},
		/* [1] = */ {
			/* .mPreTexNo = */ 92,
			/* .mAfterTexNo = */ 94
		},
		/* [2] = */ {
			/* .mPreTexNo = */ 97,
			/* .mAfterTexNo = */ 94
		},
		/* [3] = */ {
			/* .mPreTexNo = */ 91,
			/* .mAfterTexNo = */ 94
		},
		/* [4] = */ {
			/* .mPreTexNo = */ 96,
			/* .mAfterTexNo = */ 93
		},
		/* [5] = */ {
			/* .mPreTexNo = */ 98,
			/* .mAfterTexNo = */ 94
		},
		/* [6] = */ {
			/* .mPreTexNo = */ 99,
			/* .mAfterTexNo = */ 94
		},
		/* [7] = */ {
			/* .mPreTexNo = */ 98,
			/* .mAfterTexNo = */ 93
		},
		/* [8] = */ {
			/* .mPreTexNo = */ 99,
			/* .mAfterTexNo = */ 93
		}
	},
	/* [3] = */ {
		/* [0] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 104
		},
		/* [1] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 101
		},
		/* [2] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 106
		},
		/* [3] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 100
		},
		/* [4] = */ {
			/* .mPreTexNo = */ 105,
			/* .mAfterTexNo = */ 102
		},
		/* [5] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 107
		},
		/* [6] = */ {
			/* .mPreTexNo = */ 103,
			/* .mAfterTexNo = */ 108
		},
		/* [7] = */ {
			/* .mPreTexNo = */ 102,
			/* .mAfterTexNo = */ 107
		},
		/* [8] = */ {
			/* .mPreTexNo = */ 102,
			/* .mAfterTexNo = */ 108
		}
	},
	/* [4] = */ {
		/* [0] = */ {
			/* .mPreTexNo = */ 112,
			/* .mAfterTexNo = */ 113
		},
		/* [1] = */ {
			/* .mPreTexNo = */ 112,
			/* .mAfterTexNo = */ 110
		},
		/* [2] = */ {
			/* .mPreTexNo = */ 112,
			/* .mAfterTexNo = */ 115
		},
		/* [3] = */ {
			/* .mPreTexNo = */ 112,
			/* .mAfterTexNo = */ 109
		},
		/* [4] = */ {
			/* .mPreTexNo = */ 111,
			/* .mAfterTexNo = */ 114
		},
		/* [5] = */ {
			/* .mPreTexNo = */ 116,
			/* .mAfterTexNo = */ 112
		},
		/* [6] = */ {
			/* .mPreTexNo = */ 117,
			/* .mAfterTexNo = */ 112
		},
		/* [7] = */ {
			/* .mPreTexNo = */ 118,
			/* .mAfterTexNo = */ 111
		},
		/* [8] = */ {
			/* .mPreTexNo = */ 119,
			/* .mAfterTexNo = */ 111
		}
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a19a8;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13CBonusShotOne((CWaitVariable<char> *)s_void__003ef530);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13CBonusShotOne((CWaitVariable<char> *)s_char__003ef538);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13CBonusShotOne((CWaitVariable<char> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CBonusShotOne::Init() {
	CWrkVariable<char,0,127> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = '\0';
  (this->mAlpha).mValue = '\0';
  (this->mUnderLineAlpha).mAdd = '\0';
  (this->mUnderLineAlpha).mValue = '\0';
  return;
}

void CBonusShotOne::InReqUnderLine(int iYPos) {
  ushort uVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mXOffset).mTarget = '\n';
  (this->mXOffset).mSpeed = '\0';
  (this->mXOffset).mValue = '\n';
  (this->mAlpha).mAdd = '\0';
  (this->mAlpha).mValue = '\0';
  uVar1 = (ushort)iYPos;
  (this->mYPos).mTarget = uVar1;
  (this->mYPos).mSpeed = 0;
  (this->mYPos).mValue = uVar1;
                    /* end of inlined section */
  this->mYPosSave = uVar1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mUnderLineAlpha).mAdd = '\x0f';
  (this->mUnderLineAlpha).mValue = '\0';
  (this->mUnderLineScale).mAdd = '\x19';
  (this->mUnderLineScale).mValue = '\0';
  return;
}

void CBonusShotOne::InReq() {
  Fade__t13CFadeVariable1Zccc(&this->mXOffset,0,4);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = '\x1f';
  return;
}

void CBonusShotOne::OutReq(int iTargetYPos) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = -0xf;
                    /* end of inlined section */
  Fade__t13CFadeVariable1Zsss(&this->mYPos,(short)iTargetYPos,8);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mUnderLineAlpha).mAdd = -0x1f;
  return;
}

void CBonusShotOne::Work() {
  Work__t13CFadeVariable1Zs(&this->mYPos);
  Work__t13CFadeVariable1Zc(&this->mXOffset);
  Work__t12CWrkVariable3Zci0i_127_(&this->mAlpha);
  Work__t12CWrkVariable3Zci0i_127_(&this->mUnderLineAlpha);
  Work__t12CWrkVariable3Zci0i_100_(&this->mUnderLineScale);
  return;
}

void CBonusShotOne::Draw(int iOffX, int iOffY, int iPreSprtDat, int iAfterSprtDat) {
	DISP_SPRT ds;
	float fXScl;
	
  CFadeVariable<char> *pCVar1;
  float fVar2;
  DISP_SPRT ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar1 = &this->mXOffset;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iPreSprtDat);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.alpha = (this->mAlpha).mValue;
  ds.x = ds.x + (float)(iOffX + pCVar1->mValue);
                    /* end of inlined section */
  ds.zbuf = 0x10a000118;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.y = ds.y + (float)(iOffY + (short)(this->mYPos).mValue);
                    /* end of inlined section */
  ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.y = ds.y + 0.0;
  ds.x = ds.x + (float)(pCVar1->mValue * -2);
                    /* end of inlined section */
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iAfterSprtDat);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.alpha = (this->mAlpha).mValue;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.y = ds.y + (float)(iOffY + (short)(this->mYPos).mValue);
                    /* end of inlined section */
  ds.zbuf = 0x10a000118;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.x = (float)(iOffX + (uint)(ushort)n_finder_dat[iPreSprtDat].w + pCVar1->mValue + 9 +
                n_finder_dat[iPreSprtDat].x);
                    /* end of inlined section */
  ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.y = ds.y + 0.0;
  ds.x = ds.x + (float)(pCVar1->mValue * -2);
                    /* end of inlined section */
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  fVar2 = (float)(int)(this->mUnderLineScale).mValue;
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x82);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.alpha = (this->mUnderLineAlpha).mValue;
  ds.scw = fVar2 / fVar2;
                    /* end of inlined section */
  ds.x = ds.x + (float)iOffX;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + (float)(iOffY + (short)this->mYPosSave);
  ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.sch = 1.0;
  ds.csx = ds.x + (float)(ds.w >> 1);
  ds.csy = ds.y + (float)(ds.h >> 1);
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CBonusShot::Req(int iBaseScore, BONUS_SHOT_SCORE BonusScore, int iWaitTime) {
	int i;
	CVariable<char,0,9> *this;
	char iValue;
	
  ushort *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ulong *puVar7;
  uint *puVar8;
  fixed_array<short_int,9> *pfVar9;
  ulong in_v0;
  char cVar10;
  ulong in_v1;
  ulong uVar11;
  uint in_t0_lo;
  CBonusShotOne *pCVar12;
  int iVar13;
  BONUS_SHOT_SCORE *pBVar14;
  short sVar15;
  undefined auStack_80 [8];
  undefined auStack_78 [8];
  undefined auStack_70 [4];
  ushort local_6c;
  fixed_array<CBonusShotOne,9> *local_60;
  
  iVar13 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  puVar2 = (undefined *)((int)(BonusScore->mScore).field0_0x0.m_aData + 7);
                    /* end of inlined section */
  uVar4 = (uint)puVar2 & 7;
  uVar5 = (uint)BonusScore & 7;
  auStack_80 = (undefined  [8])
               ((*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
                in_v0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)BonusScore - uVar5) >> uVar5 * 8);
  puVar2 = (undefined *)((int)(BonusScore->mScore).field0_0x0.m_aData + 0xf);
  uVar4 = (uint)puVar2 & 7;
  puVar1 = (BonusScore->mScore).field0_0x0.m_aData + 4;
  uVar5 = (uint)puVar1 & 7;
  uVar11 = (*(long *)(puVar2 + -uVar4) << (7 - uVar4) * 8 |
           in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
           *(ulong *)((int)puVar1 - uVar5) >> uVar5 * 8;
  puVar2 = (undefined *)((int)&BonusScore->mSP + 1);
  uVar4 = (uint)puVar2 & 3;
  puVar1 = (BonusScore->mScore).field0_0x0.m_aData + 8;
  uVar5 = (uint)puVar1 & 3;
  uVar4 = (*(int *)(puVar2 + -uVar4) << (3 - uVar4) * 8 | in_t0_lo & 0xffffffffU >> (uVar4 + 1) * 8)
          & -1 << (4 - uVar5) * 8 | *(uint *)((int)puVar1 - uVar5) >> uVar5 * 8;
  uVar6 = BonusScore->mComboNum;
  puVar2 = auStack_80 + 7;
  uVar5 = (uint)puVar2 & 7;
  *(ulong *)(puVar2 + -uVar5) =
       *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 | (ulong)auStack_80 >> (7 - uVar5) * 8;
  puVar2 = auStack_78 + 7;
  uVar5 = (uint)puVar2 & 7;
  *(ulong *)(puVar2 + -uVar5) =
       *(ulong *)(puVar2 + -uVar5) & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
  puVar2 = auStack_70 + 3;
  uVar5 = (uint)puVar2 & 3;
  *(uint *)(puVar2 + -uVar5) =
       *(uint *)(puVar2 + -uVar5) & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
  this->mOldScore = iBaseScore;
  pBVar14 = &this->mBonus;
  this->mNewScore = iBaseScore;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  puVar2 = (undefined *)((int)(this->mBonus).mScore.field0_0x0.m_aData + 7);
                    /* end of inlined section */
  uVar5 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar5);
  *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | (ulong)auStack_80 >> (7 - uVar5) * 8;
  uVar5 = (uint)pBVar14 & 7;
  *(ulong *)((int)pBVar14 - uVar5) =
       (long)auStack_80 << uVar5 * 8 |
       *(ulong *)((int)pBVar14 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar2 = (undefined *)((int)(this->mBonus).mScore.field0_0x0.m_aData + 0xf);
  uVar5 = (uint)puVar2 & 7;
  puVar7 = (ulong *)(puVar2 + -uVar5);
  *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar11 >> (7 - uVar5) * 8;
  puVar1 = (this->mBonus).mScore.field0_0x0.m_aData + 4;
  uVar5 = (uint)puVar1 & 7;
  puVar7 = (ulong *)((int)puVar1 - uVar5);
  *puVar7 = uVar11 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
  puVar2 = (undefined *)((int)&(this->mBonus).mSP + 1);
  uVar5 = (uint)puVar2 & 3;
  puVar8 = (uint *)(puVar2 + -uVar5);
  *puVar8 = *puVar8 & -1 << (uVar5 + 1) * 8 | uVar4 >> (3 - uVar5) * 8;
  puVar1 = (this->mBonus).mScore.field0_0x0.m_aData + 8;
  uVar5 = (uint)puVar1 & 3;
  puVar8 = (uint *)((int)puVar1 - uVar5);
  *puVar8 = *puVar8 & 0xffffffffU >> (4 - uVar5) * 8 | uVar4 << uVar5 * 8;
  (this->mBonus).mComboNum = uVar6;
  local_60 = &this->mAnim;
  this->mOutReqCnt = -1;
  this->mDispNum = '\0';
  this->mReqUnderLineCnt = -1;
  this->mReqUnderLineTimer = '\0';
  this->mInReqCnt = -1;
  this->mInReqTimer = '\0';
  this->mOutReqTimer = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mComboAlpha).mAdd = '\0';
  (this->mComboAlpha).mValue = '\0';
  (this->mFadeOutWaiter).mValue = '\0';
  (this->mNewScoreAlpha).mAdd = '\0';
  (this->mNewScoreAlpha).mValue = '\0';
  (this->mOldScoreAlpha).mAdd = '\0';
  (this->mOldScoreAlpha).mValue = '\0';
  (this->mScorePtsAlpha).mAdd = '\0';
  (this->mScorePtsAlpha).mValue = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  auStack_78 = (undefined  [8])uVar11;
  auStack_70 = (undefined  [4])uVar4;
  local_6c = uVar6;
  do {
    _fixed_array_verifyrange__H1Zs_UiUi_PX01(iVar13,9);
    pfVar9 = &pBVar14->mScore;
    pBVar14 = (BONUS_SHOT_SCORE *)((pBVar14->mScore).field0_0x0.m_aData + 1);
    if ((pfVar9->field0_0x0).m_aData[0] != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      cVar3 = this->mDispNum;
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(cVar3,9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar10 = (char)iVar13;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      pCVar12 = (local_60->field0_0x0).m_aData + cVar3;
      if (cVar10 < '\n') {
        if (cVar10 < '\0') {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Set Value is Illegal");
          (pCVar12->mIndex).mValue = cVar10;
        }
        else {
          (pCVar12->mIndex).mValue = cVar10;
        }
      }
      else {
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
        PrintAssertReal("Set Value is Illegal");
        (pCVar12->mIndex).mValue = cVar10;
      }
                    /* end of inlined section */
      this->mDispNum = this->mDispNum + '\x01';
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  sVar15 = (short)iWaitTime;
  if ((this->mBonus).mComboNum != 0) {
    sVar15 = (short)iWaitTime + 10;
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mTimer).mValue = sVar15 + 0x2a;
  return;
}

void CBonusShot::ReqUnderLineWrk() {
  char cVar1;
  char cVar2;
  
  cVar1 = this->mReqUnderLineCnt;
  cVar2 = this->mReqUnderLineCnt;
  if (-1 < cVar1) {
    if ((this->mReqUnderLineTimer & 3U) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      this->mReqUnderLineCnt = cVar2 + '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(cVar1,9);
      InReqUnderLine__13CBonusShotOnei
                ((((fixed_array<CBonusShotOne,9> *)(&this->mBonus + 1))->field0_0x0).m_aData + cVar1
                 ,(int)this->mReqUnderLineCnt << 4);
      cVar2 = this->mReqUnderLineCnt;
                    /* end of inlined section */
    }
    this->mReqUnderLineTimer = this->mReqUnderLineTimer + '\x01';
    if ((long)this->mDispNum <= (long)(int)cVar2) {
      this->mReqUnderLineCnt = -1;
    }
  }
  return;
}

void CBonusShot::InReqWrk() {
  char cVar1;
  char cVar2;
  
  cVar1 = this->mInReqCnt;
  cVar2 = this->mInReqCnt;
  if (-1 < cVar1) {
    if ((this->mInReqTimer & 3U) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      this->mInReqCnt = cVar2 + '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(cVar1,9);
      InReq__13CBonusShotOne
                ((((fixed_array<CBonusShotOne,9> *)(&this->mBonus + 1))->field0_0x0).m_aData + cVar1
                );
      cVar2 = this->mInReqCnt;
                    /* end of inlined section */
    }
    this->mInReqTimer = this->mInReqTimer + '\x01';
    if ((long)this->mDispNum <= (long)(int)cVar2) {
      this->mInReqCnt = -1;
    }
  }
  return;
}

void CBonusShot::OutReqWrk() {
	char WaitCnt;
	
  char cVar1;
  
  cVar1 = this->mOutReqCnt;
  if (-1 < cVar1) {
    if ((this->mOutReqTimer & 3U) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(cVar1,9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      cVar1 = (((fixed_array<CBonusShotOne,9> *)(&this->mBonus + 1))->field0_0x0).m_aData[cVar1].
              mIndex.mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zs_UiUi_PX01(cVar1,9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      this->mNewScore =
           this->mNewScore + (int)(short)(this->mBonus).mScore.field0_0x0.m_aData[cVar1];
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mNewScoreAlpha).mValue = '\0';
      (this->mNewScoreAlpha).mAdd = '\0';
      (this->mNewScoreAlpha).mAdd = '\f';
      (this->mOldScoreAlpha).mValue = -0x80;
      (this->mOldScoreAlpha).mAdd = '\0';
      (this->mOldScoreAlpha).mAdd = -0xc;
      cVar1 = (this->mFadeOutWaiter).mValue;
      (this->mScorePtsAlpha).mAdd = '\f';
      if (cVar1 == '\0') {
        (this->mFadeOutWaiter).mValue = '(';
      }
                    /* end of inlined section */
      cVar1 = this->mOutReqCnt;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(cVar1,9,&this->mOldScoreAlpha,10);
      OutReq__13CBonusShotOnei
                ((((fixed_array<CBonusShotOne,9> *)(&this->mBonus + 1))->field0_0x0).m_aData + cVar1
                 ,0);
                    /* end of inlined section */
      cVar1 = this->mOutReqCnt + '\x01';
      this->mOutReqCnt = cVar1;
    }
    this->mOutReqTimer = this->mOutReqTimer + '\x01';
    if ((long)this->mDispNum <= (long)(int)cVar1) {
      this->mOutReqCnt = -1;
    }
  }
  return;
}

void CBonusShot::Work() {
	int i;
	char WaitCnt;
	int i;
	int i;
	int i;
	
  char cVar1;
  long lVar2;
  CWaitVariable<short_int> *pCVar3;
  CBonusShotOne *pCVar4;
  int iVar5;
  long lVar6;
  
  ReqUnderLineWrk__10CBonusShot(this);
  InReqWrk__10CBonusShot(this);
  OutReqWrk__10CBonusShot(this);
  pCVar3 = &this->mTimer;
  if ((this->mBonus).mComboNum == 0) {
                    /* end of inlined section */
    lVar2 = Work__t13CWaitVariable1Zs(pCVar3);
    if (lVar2 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (pCVar3->mValue == 0x25) {
                    /* end of inlined section */
        this->mInReqCnt = '\0';
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (pCVar3->mValue == 0x2a) {
          this->mReqUnderLineCnt = '\0';
        }
      }
    }
    else {
      this->mOutReqCnt = '\0';
    }
  }
  else {
    lVar2 = Work__t13CWaitVariable1Zs(pCVar3);
    if (lVar2 == 0) {
      if (pCVar3->mValue == 0x12) {
        cVar1 = -0xf;
      }
      else {
        if (pCVar3->mValue == 0x26) {
                    /* end of inlined section */
          if ('\0' < this->mDispNum) {
            pCVar4 = (CBonusShotOne *)&this->mAnim;
            lVar2 = 0;
            do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
              lVar6 = (long)((int)lVar2 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar2,9);
              InReq__13CBonusShotOne(pCVar4);
                    /* end of inlined section */
              pCVar4 = pCVar4 + 1;
              lVar2 = lVar6;
            } while (lVar6 < this->mDispNum);
          }
          goto LAB_0012cdb0;
        }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (pCVar3->mValue == 0x2a) {
                    /* end of inlined section */
          lVar2 = 0;
          if ('\0' < this->mDispNum) {
            pCVar4 = (CBonusShotOne *)&this->mAnim;
            do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar2,9);
              iVar5 = (int)lVar2;
              lVar2 = (long)(iVar5 + 1);
              InReqUnderLine__13CBonusShotOnei(pCVar4,iVar5 << 4);
                    /* end of inlined section */
              pCVar4 = pCVar4 + 1;
            } while (lVar2 < this->mDispNum);
          }
          goto LAB_0012cdb0;
        }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (pCVar3->mValue != 0x34) goto LAB_0012cdb0;
        cVar1 = '\x0f';
      }
      (this->mComboAlpha).mAdd = cVar1;
    }
    else {
      if ('\0' < this->mDispNum) {
        pCVar4 = (CBonusShotOne *)&this->mAnim;
        lVar2 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar2,9);
          OutReq__13CBonusShotOnei(pCVar4,0);
          lVar6 = (long)((int)lVar2 + 1);
          _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar2,9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          cVar1 = (pCVar4->mIndex).mValue;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          pCVar4 = pCVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zs_UiUi_PX01(cVar1,9);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
          this->mNewScore =
               this->mNewScore + (int)(short)(this->mBonus).mScore.field0_0x0.m_aData[cVar1];
          lVar2 = lVar6;
        } while (lVar6 < this->mDispNum);
      }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      (this->mNewScoreAlpha).mValue = '\0';
      (this->mNewScoreAlpha).mAdd = '\0';
      (this->mNewScoreAlpha).mAdd = '\f';
      (this->mOldScoreAlpha).mValue = -0x80;
      (this->mOldScoreAlpha).mAdd = '\0';
      (this->mOldScoreAlpha).mAdd = -0xc;
      (this->mScorePtsAlpha).mAdd = '\f';
      if ((this->mFadeOutWaiter).mValue == '\0') {
        (this->mFadeOutWaiter).mValue = '\x14';
      }
    }
  }
LAB_0012cdb0:
  Work__t12CWrkVariable3Zci0i_127_(&this->mComboAlpha);
  if ('\0' < this->mDispNum) {
    pCVar4 = (CBonusShotOne *)&this->mAnim;
    lVar2 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      lVar6 = (long)((int)lVar2 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar2,9);
      Work__13CBonusShotOne(pCVar4);
                    /* end of inlined section */
      pCVar4 = pCVar4 + 1;
      lVar2 = lVar6;
    } while (lVar6 < this->mDispNum);
  }
  Work__t12CWrkVariable3Zci0i_127_(&this->mNewScoreAlpha);
  Work__t12CWrkVariable3Zci0i_127_(&this->mOldScoreAlpha);
  Work__t12CWrkVariable3Zci0i_127_(&this->mScorePtsAlpha);
  lVar2 = Work__t13CWaitVariable1Zc(this);
  if (lVar2 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mNewScoreAlpha).mAdd = -0xc;
    (this->mOldScoreAlpha).mAdd = -0xc;
    (this->mScorePtsAlpha).mAdd = -0xc;
  }
  return;
}

void CBonusShot::Draw(int fndr_mx, int fndr_my) {
	int i;
	float fScale;
	DISP_SPRT ds;
	float fScl;
	
  byte bVar1;
  ushort uVar2;
  uchar uVar3;
  long lVar4;
  int iVar5;
  CWrkVariable<char,0,127> *pCVar6;
  CBonusShotOne *this_00;
  long lVar7;
  float scale;
  float fVar8;
  float fVar9;
  float fVar10;
  DISP_SPRT DStack_190;
  DISP_SPRT ds;
  
  if ('\0' < this->mDispNum) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    lVar4 = 0;
    this_00 = (CBonusShotOne *)&this->mAnim;
    do {
      lVar7 = (long)((int)lVar4 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(lVar4,9);
                    /* end of inlined section */
      uVar3 = GetLanguage__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      bVar1 = aShotTexTbl[(char)uVar3][(this_00->mIndex).mValue].mPreTexNo;
      uVar3 = GetLanguage__Fv();
      Draw__13CBonusShotOneiiii
                (this_00,fndr_mx,fndr_my,(uint)bVar1,
                 (uint)aShotTexTbl[(char)uVar3][(this_00->mIndex).mValue].mAfterTexNo);
                    /* end of inlined section */
      lVar4 = lVar7;
      this_00 = this_00 + 1;
    } while (lVar7 < this->mDispNum);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar5 = (int)(this->mNewScoreAlpha).mValue;
  scale = 1.0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  fVar9 = (float)fndr_mx;
  fVar10 = (float)fndr_my;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  pCVar6 = &this->mComboAlpha;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  SetNumerousDisp__FP8SPRT_DATiiiiifii
            (n_finder_dat + 0x90,this->mNewScore,iVar5,0xe,fndr_mx,fndr_my,
             (1.0 - (float)iVar5 / 127.0) * DAT_003ed910 + 1.0,0,1);
  SetNumerousDisp__FP8SPRT_DATiiiiifii
            (n_finder_dat + 0x90,this->mOldScore,(int)(this->mOldScoreAlpha).mValue,0xe,fndr_mx,
             fndr_my,scale,0,1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_190,n_finder_dat + 0x9a);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  DStack_190.alpha = (this->mScorePtsAlpha).mValue;
                    /* end of inlined section */
  DStack_190.x = DStack_190.x + fVar9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  DStack_190.y = DStack_190.y + fVar10;
  DStack_190.zbuf = 0x10a000118;
  DStack_190.alphar = 0x48;
  DispSprD__FP9DISP_SPRT(&DStack_190);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  uVar2 = (this->mBonus).mComboNum;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  fVar8 = (float)(int)pCVar6->mValue / 127.0;
                    /* end of inlined section */
  if (uVar2 == 1) {
    fVar8 = (scale - fVar8) * DAT_003ed914;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x84);
    ds.x = ds.x + fVar9;
    ds.scw = fVar8 + scale;
    ds.zbuf = 0x10a000118;
    ds.y = ds.y + fVar10;
    ds.alphar = 0x48;
    ds.csx = ds.x + (float)(ds.w >> 1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    ds.alpha = pCVar6->mValue;
                    /* end of inlined section */
    ds.csy = ds.y + (float)(ds.h >> 1);
    ds.sch = ds.scw;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    DispSprD__FP9DISP_SPRT(&ds);
  }
  else if (1 < (short)uVar2) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + (short)uVar2 + 0x85);
    ds.zbuf = 0x10a000118;
    ds.alphar = 0x48;
    uVar3 = GetLanguage__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.y = ds.y + fVar10;
    ds.x = (float)(int)(short)aComboNumPoint[uVar3 == '\x04'].x + fVar9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ((this->mComboAlpha).mAdd < '\x01') {
      lVar4 = 1;
      if (pCVar6->mValue != '\0') {
        lVar4 = 3;
      }
    }
    else {
      lVar4 = 0;
      if (pCVar6->mValue != '\x7f') {
        lVar4 = 2;
      }
    }
    if (lVar4 == 3) {
                    /* end of inlined section */
      ds.sch = 1.0;
      ds.scw = (1.0 - fVar8) * DAT_003ed918 + 1.0;
    }
    else {
      ds.scw = 1.0;
      ds.sch = fVar8;
    }
    ds.csx = ds.x + (float)(ds.w >> 1);
    ds.csy = ds.y + (float)(ds.h >> 1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    ds.alpha = pCVar6->mValue;
                    /* end of inlined section */
                    /* end of inlined section */
    DispSprD__FP9DISP_SPRT(&ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x8f);
    ds.zbuf = 0x10a000118;
    ds.alphar = 0x48;
    uVar3 = GetLanguage__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.y = ds.y + fVar10;
    ds.x = (float)(int)(short)aComboCharPoint[uVar3 == '\x04'].x + fVar9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ((this->mComboAlpha).mAdd < '\x01') {
      iVar5 = 1;
      if (pCVar6->mValue != '\0') {
        iVar5 = 3;
      }
    }
    else {
      iVar5 = 0;
      if (pCVar6->mValue != '\x7f') {
        iVar5 = 2;
      }
    }
    if (iVar5 == 3) {
                    /* end of inlined section */
      ds.sch = 1.0;
      ds.scw = (1.0 - fVar8) * DAT_003ed91c + 1.0;
    }
    else {
      ds.scw = 1.0;
      ds.sch = fVar8;
    }
    ds.csx = ds.x + (float)(ds.w >> 1);
    ds.csy = ds.y + (float)(ds.h >> 1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    ds.alpha = pCVar6->mValue;
                    /* end of inlined section */
                    /* end of inlined section */
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

void CBonusShot::Init() {
	int i;
	
  CBonusShotOne *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (CBonusShotOne *)&this->mAnim;
  this->mDispNum = '\0';
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13CBonusShotOne_UiUi_PX01(iVar1,9);
    Init__13CBonusShotOne(this_00);
                    /* end of inlined section */
    this_00 = this_00 + 1;
    iVar1 = iVar2;
  } while (iVar2 < 9);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mScorePtsAlpha).mAdd = '\0';
  (this->mScorePtsAlpha).mValue = '\0';
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mNewScoreAlpha).mAdd = '\0';
  (this->mNewScoreAlpha).mValue = '\0';
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mOldScoreAlpha).mAdd = '\0';
  (this->mOldScoreAlpha).mValue = '\0';
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mComboAlpha).mAdd = '\0';
  (this->mComboAlpha).mValue = '\0';
                    /* end of inlined section */
  this->mOutReqCnt = -1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mFadeOutWaiter).mValue = '\0';
  (this->mTimer).mValue = 0;
                    /* end of inlined section */
  this->mReqUnderLineCnt = -1;
  this->mInReqCnt = -1;
  return;
}

void CFadeVariable<char>::Fade(char tTarget, char tTime) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

void CFadeVariable<short>::Fade(short int tTarget, short int tTime) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

void CFadeVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

void CFadeVariable<char>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

void CWrkVariable<char, 0, 127>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

void CWrkVariable<char, 0, 100>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

short int* short * _fixed_array_verifyrange<short>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

CBonusShotOne* CBonusShotOne * _fixed_array_verifyrange<CBonusShotOne>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

int CWaitVariable<char>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}

type_info& CBonusShotOne type_info function() {
  g3ddbgAssert__FbPCce(false,str_688);
  return (type_info *)this;
}
