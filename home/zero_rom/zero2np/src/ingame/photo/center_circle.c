// STATUS: NOT STARTED

#include "center_circle.h"

unsigned char CCenterCircle::aRgb[4][3] = {
	/* [0] = */ {
		/* [0] = */ 188,
		/* [1] = */ 140,
		/* [2] = */ 61
	},
	/* [1] = */ {
		/* [0] = */ 212,
		/* [1] = */ 21,
		/* [2] = */ 3
	},
	/* [2] = */ {
		/* [0] = */ 12,
		/* [1] = */ 129,
		/* [2] = */ 213
	},
	/* [3] = */ {
		/* [0] = */ 12,
		/* [1] = */ 129,
		/* [2] = */ 213
	}
};

char CCenterCircle::aMainAlpha[4] = {
	/* [0] = */ 40,
	/* [1] = */ 75,
	/* [2] = */ 100,
	/* [3] = */ 100
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1f70;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Zccc((CFadeVariable<char> *)s_void__003ef600,(char)_max,(char)v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Zccc((CFadeVariable<char> *)s_char__003ef608,(char)_max,(char)v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Fade__t13CFadeVariable1Zccc((CFadeVariable<char> *)"unsigned int*",(char)_max,(char)v);
  }
  return (uint **)0x0;
}

void CCenterCircle::Init() {
	int iWidth;
	int i;
	CFadeVariable<char> *this;
	
  uchar uVar1;
  char cVar2;
  uint uVar3;
  CCenterCircle *pCVar4;
  uint uVar5;
  int iVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  uVar5 = 0;
  iVar6 = 3;
  pCVar4 = this;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    uVar3 = uVar5;
    if ((int)uVar5 < 0) {
      uVar3 = uVar5 + 3;
    }
                    /* end of inlined section */
    iVar6 = iVar6 + -1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar4->maScale[0].mAdd = '\0';
    pCVar4->maScale[0].mValue = (char)(uVar3 >> 2);
                    /* end of inlined section */
    uVar5 = uVar5 + 100;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar4->maScale[0].mAdd = '\x02';
                    /* end of inlined section */
    pCVar4 = (CCenterCircle *)(pCVar4->maScale + 1);
  } while (-1 < iVar6);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRippleAlpha).mAdd = 0;
  (this->mRippleAlpha).mValue = 0;
  uVar1 = _13CCenterCircle_aRgb[0][0];
  (this->mR).mSpeed = 0;
  (this->mR).mTarget = (ushort)uVar1;
  (this->mR).mValue = (ushort)uVar1;
  uVar1 = _13CCenterCircle_aRgb[0][1];
  (this->mG).mSpeed = 0;
  (this->mG).mTarget = (ushort)uVar1;
  (this->mG).mValue = (ushort)uVar1;
  uVar1 = _13CCenterCircle_aRgb[0][2];
  (this->mB).mSpeed = 0;
  (this->mB).mTarget = (ushort)uVar1;
  (this->mB).mValue = (ushort)uVar1;
  cVar2 = _13CCenterCircle_aMainAlpha[0];
  (this->mMainAlpha).mSpeed = '\0';
  (this->mMainAlpha).mTarget = cVar2;
  (this->mMainAlpha).mValue = cVar2;
  return;
}

void CCenterCircle::FrameReset() {
  return;
}

void CCenterCircle::SetMode(int iMode) {
  return;
}

void CCenterCircle::SetHintFlg(int flg) {
  *(uint *)&(this->mMainAlpha).mTarget =
       *(uint *)&(this->mMainAlpha).mTarget & 0xfffffeff | (flg & 1U) << 8;
  return;
}

void CCenterCircle::SetAutoFlg(int flg) {
  *(uint *)&(this->mMainAlpha).mTarget =
       *(uint *)&(this->mMainAlpha).mTarget & 0xfffffdff | (flg & 1U) << 9;
  return;
}

void CCenterCircle::SetBattleFlg(int flg) {
  *(uint *)&(this->mMainAlpha).mTarget =
       *(uint *)&(this->mMainAlpha).mTarget & 0xfffffbff | (flg & 1U) << 10;
  return;
}

void CCenterCircle::SetEneCatchFlg(int flg) {
  *(uint *)&(this->mMainAlpha).mTarget =
       *(uint *)&(this->mMainAlpha).mTarget & 0xfffff7ff | (flg & 1U) << 0xb;
  return;
}

void CCenterCircle::Work() {
	int mMode;
	CFadeVariable<short int> *this;
	CFadeVariable<short int> *this;
	CFadeVariable<short int> *this;
	CFadeVariable<char> *this;
	int i;
	
  uint uVar1;
  CCenterCircle *pCVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)&(this->mMainAlpha).mTarget;
  uVar4 = 1;
  if (((uVar1 & 0x800) == 0) && (uVar4 = 2, (uVar1 & 0x300) == 0)) {
    uVar4 = (uint)((uVar1 & 0x400) != 0);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((ushort)_13CCenterCircle_aRgb[uVar4][0] != (this->mR).mTarget) {
    Fade__t13CFadeVariable1Zsss(&this->mR,(ushort)_13CCenterCircle_aRgb[uVar4][0],0xf);
  }
  if ((ushort)_13CCenterCircle_aRgb[uVar4][1] != (this->mG).mTarget) {
    Fade__t13CFadeVariable1Zsss(&this->mG,(ushort)_13CCenterCircle_aRgb[uVar4][1],0xf);
  }
  if ((ushort)_13CCenterCircle_aRgb[uVar4][2] != (this->mB).mTarget) {
    Fade__t13CFadeVariable1Zsss(&this->mB,(ushort)_13CCenterCircle_aRgb[uVar4][2],0xf);
  }
  if (_13CCenterCircle_aMainAlpha[uVar4] != (this->mMainAlpha).mTarget) {
    Fade__t13CFadeVariable1Zccc(&this->mMainAlpha,_13CCenterCircle_aMainAlpha[uVar4],0xf);
  }
                    /* end of inlined section */
  if (uVar4 - 2 < 2) {
    iVar3 = 0x80;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  }
  else {
    iVar3 = -0x80;
  }
  (this->mRippleAlpha).mAdd = (ushort)(iVar3 / 10);
                    /* end of inlined section */
  iVar3 = 3;
  pCVar2 = this;
  do {
    iVar3 = iVar3 + -1;
    LoopWork__t12CWrkVariable3Zci0i_100_(pCVar2);
    pCVar2 = (CCenterCircle *)(pCVar2->maScale + 1);
  } while (-1 < iVar3);
  Work__t13CFadeVariable1Zs(&this->mR);
  Work__t13CFadeVariable1Zs(&this->mG);
  Work__t13CFadeVariable1Zs(&this->mB);
  Work__t13CFadeVariable1Zc(&this->mMainAlpha);
  Work__t12CWrkVariable3Zsi0i_128_(&this->mRippleAlpha);
  return;
}

void CCenterCircle::Draw(int fndr_mx, int fndr_my, int iMasterAlpha, float fMasterScale) {
	DISP_SPRT ds;
	float fScale;
	int j;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  DISP_SPRT ds;
  
  fVar5 = (float)fndr_mx;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x26);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.x = ds.x + fVar5;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.y = ds.y + (float)fndr_my;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.csx = (float)(fndr_mx + 0x13f);
  ds.csy = (float)(fndr_my + 0xe1);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  ds.r = (uchar)(this->mR).mValue;
  ds.g = (uchar)(this->mG).mValue;
  ds.b = (uchar)(this->mB).mValue;
                    /* end of inlined section */
  ds.tex1 = 0x161;
  ds.alpha = (uchar)(((this->mMainAlpha).mValue * iMasterAlpha) / 100);
  ds.scw = fMasterScale;
  ds.sch = fMasterScale;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar1 = (this->mRippleAlpha).mValue;
                    /* end of inlined section */
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar2 = 0;
  while( true ) {
    iVar2 = (int)(&this->maScale[0].mValue)[iVar2];
    fVar4 = ((float)iVar2 / 100.0) * DAT_003ed920 * fMasterScale + fMasterScale;
                    /* end of inlined section */
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x26);
    ds.csx = (float)(fndr_mx + 0x13f);
    ds.csy = (float)(fndr_my + 0xe1);
    ds.x = ds.x + fVar5;
    ds.y = ds.y + (float)fndr_my;
    iVar3 = iVar3 + 1;
    ds.zbuf = 0x10a000118;
    ds.alphar = 0x48;
    ds.alpha = (uchar)((((iMasterAlpha * (short)uVar1) / 0x80) * (100 - iVar2)) / 100);
    ds.r = _13CCenterCircle_aRgb[2][0];
    ds.g = _13CCenterCircle_aRgb[2][1];
    ds.b = _13CCenterCircle_aRgb[2][2];
    ds.tex1 = 0x161;
    ds.scw = fVar4;
    ds.sch = fVar4;
    DispSprD__FP9DISP_SPRT(&ds);
    if (3 < iVar3) break;
    iVar2 = iVar3 * 2;
  }
  return;
}

int CWrkVariable<char, 0, 100>::LoopWork() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CFadeVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CFadeVariable<char>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CFadeVariable<short>::Fade(short int tTarget, short int tTime) {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CFadeVariable<char>::Fade(char tTarget, char tTime) {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
