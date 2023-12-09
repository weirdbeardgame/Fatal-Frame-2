// STATUS: NOT STARTED

#include "film_no.h"

static MyPoint aTypeNumPoint[2] = {
	/* [0] = */ {
		/* .x = */ 555
	},
	/* [1] = */ {
		/* .x = */ 507
	}
};

static MyPoint aTypeCharPoint[2] = {
	/* [0] = */ {
		/* .x = */ 547
	},
	/* [1] = */ {
		/* .x = */ 496
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae278;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_70_i_90_i_15_i_40_
              ((CBlinkSwitchVariable<char,70,90,15,40> *)s_void__003f07c8);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_70_i_90_i_15_i_40_
              ((CBlinkSwitchVariable<char,70,90,15,40> *)s_char__003f07d0);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_70_i_90_i_15_i_40_
              ((CBlinkSwitchVariable<char,70,90,15,40> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CFilmNo::Work() {
  Work__t20CBlinkSwitchVariable5Zci_70_i_90_i_15_i_40_(this);
  return;
}

void CFilmNo::Init() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mBlinkAlpha).mValue = '(';
  (this->mBlinkAlpha).field_0x1 = (this->mBlinkAlpha).field_0x1 & 0xfe | 2;
  return;
}

void CFilmNo::BlinkOn() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mBlinkAlpha).field_0x1 = (this->mBlinkAlpha).field_0x1 | 1;
  return;
}

void CFilmNo::BlinkOff() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mBlinkAlpha).field_0x1 = (this->mBlinkAlpha).field_0x1 & 0xfe;
  return;
}

void CFilmNo::Draw(int number, int iFilmTypeNo, int fndr_mx, int fndr_my, int iAlpha) {
	int n;
	
  int alpha;
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  float fVar4;
  DISP_SPRT DStack_200;
  DISP_SPRT DStack_170;
  DISP_SPRT DStack_e0;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  alpha = ((int)(this->mBlinkAlpha).mValue << 7) / 100;
                    /* end of inlined section */
  if (99 < number) {
    number = 99;
  }
  uVar2 = (uchar)alpha;
  if (iFilmTypeNo == 7) {
    fVar4 = (float)fndr_mx;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_200,n_finder_dat + 0x9c);
    DStack_200.x = DStack_200.x + fVar4;
    DStack_200.zbuf = 0x10a000118;
    DStack_200.y = DStack_200.y + (float)fndr_my;
    DStack_200.alpha = uVar2;
    DispSprD__FP9DISP_SPRT(&DStack_200);
    DStack_200.x = DStack_200.x + 13.0;
    DStack_200.y = DStack_200.y + 0.0;
    DispSprD__FP9DISP_SPRT(&DStack_200);
  }
  else {
    fVar4 = (float)fndr_mx;
    SetNumerousDisp__FP8SPRT_DATiiiiifii
              (n_finder_dat + 0x29,number,alpha,0xd,fndr_mx + 0x24d,fndr_my + 0x1d,1.0,0,0);
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_170,n_finder_dat + 0x28);
  DStack_170.x = DStack_170.x + fVar4;
  DStack_170.zbuf = 0x10a000118;
  DStack_170.y = DStack_170.y + (float)fndr_my;
  DStack_170.alpha = uVar2;
  DispSprD__FP9DISP_SPRT(&DStack_170);
  if (iFilmTypeNo == 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_e0,n_finder_dat + 0x9b);
    DStack_e0.zbuf = 0x10a000118;
    uVar1 = GetLanguage__Fv();
    DStack_e0.y = DStack_e0.y + (float)fndr_my;
    DStack_e0.x = (float)(int)(short)aTypeCharPoint[uVar1 == '\x02'].x + fVar4;
    DStack_e0.alpha = uVar2;
    DispSprD__FP9DISP_SPRT(&DStack_e0);
  }
  else {
    uVar2 = GetLanguage__Fv();
    iVar3 = 2;
    if (uVar2 != '\x02') {
      iVar3 = 0;
    }
    SetNumerousDisp__FP8SPRT_DATiiiiifii
              (n_finder_dat + 0x29,iFilmTypeNo,alpha,6,
               *(short *)((int)&aTypeNumPoint[0].x + iVar3) + fndr_mx,fndr_my + 0x22,DAT_003ee284,2,
               0);
  }
  return;
}

void CBlinkSwitchVariable<char, 70, 90, 15, 40>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
