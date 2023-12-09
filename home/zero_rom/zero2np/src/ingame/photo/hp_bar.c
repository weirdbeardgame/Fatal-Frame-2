// STATUS: NOT STARTED

#include "hp_bar.h"

static float disp_hp_per = 0.f;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b90b0;
	
  g3ddbgAssert__FbPCce(false,str_697);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_void__003f14f8);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_char__003f1500);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void SyncHpBar() {
  disp_hp_per = PlayerGetNowHPPercentage__Fv();
  return;
}

void CHpBar::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	DISP_SPRT ds;
	float rate;
	float hp_per;
	float per;
	
  int iVar1;
  uchar uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  DISP_SPRT ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar1 = iAlpha * (short)(this->mAlpha).mValue;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
                    /* end of inlined section */
  fVar3 = PlayerGetNowHPPercentage__Fv();
  if (fVar3 != disp_hp_per) {
    fVar4 = DAT_003ee428;
    if (ABS(fVar3 - disp_hp_per) <= DAT_003ee428) {
      fVar4 = ABS(fVar3 - disp_hp_per);
    }
    if (disp_hp_per < fVar3) {
      fVar4 = disp_hp_per + fVar4;
    }
    else {
      fVar4 = disp_hp_per - fVar4;
    }
    if (fVar4 <= 1.0) {
      disp_hp_per = 0.0;
      if (0.0 <= fVar4) {
        disp_hp_per = fVar4;
      }
    }
    else {
      disp_hp_per = 1.0;
    }
  }
  fVar6 = (float)fndr_mx;
  fVar5 = (float)fndr_my;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xa6);
  fVar4 = 18.0;
  ds.x = ds.x + fVar6;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar5;
  ds.alphar = 0x44;
  uVar2 = (uchar)(iVar1 >> 7);
  fVar3 = DAT_003ee42c;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xa7);
  fVar3 = fVar6 + fVar3;
  ds.x = ds.x + fVar6;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar5;
  ds.alphar = 0x44;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xa3);
  ds.sch = -fVar4;
  fVar5 = fVar5 + DAT_003ee430;
  ds.alphar = 0x44;
  ds.zbuf = 0x10a000118;
  ds.scw = 1.0;
  ds.csx = fVar3;
  ds.csy = fVar5;
  ds.x = fVar3;
  ds.y = fVar5;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  fVar4 = disp_hp_per * fVar4;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xa4);
  ds.zbuf = 0x10a000118;
  ds.csx = fVar6 + DAT_003ee434;
  ds.alphar = 0x48;
  fVar4 = -fVar4;
  ds.scw = 1.0;
  ds.csy = fVar5;
  ds.x = ds.csx;
  ds.y = fVar5;
  ds.sch = fVar4;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xa5);
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x48;
  ds.scw = 1.0;
  ds.csx = fVar3;
  ds.csy = fVar5;
  ds.x = fVar3;
  ds.y = fVar5;
  ds.sch = fVar4;
  ds.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CHpBar::Work() {
	short int iValue;
	
  long lVar1;
  
  lVar1 = Work__t13CWaitVariable1Zs(&this->mFadeWaitCnt);
  if (lVar1 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mAlpha).mAdd = 0xfffb;
  }
                    /* end of inlined section */
  Work__t12CWrkVariable3Zsi0i_128_(this);
  return;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_697);
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_697);
  return;
}
