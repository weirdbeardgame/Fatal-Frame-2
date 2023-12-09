// STATUS: NOT STARTED

#include "ene_life.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a85d0;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_127_((CWrkVariable<short_int,0,127> *)s_void__003f0120);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_127_((CWrkVariable<short_int,0,127> *)s_char__003f0128);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_127_((CWrkVariable<short_int,0,127> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CEneLife::Work() {
  float fVar1;
  float fVar2;
  
  fVar1 = this->now_hp_percent;
  if (fVar1 < this->old_hp_percent) {
    if (fVar1 < this->disp_hp_percent) {
      fVar2 = this->disp_hp_percent - DAT_003ee104;
      this->disp_hp_percent = fVar2;
      if (fVar2 < fVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
        this->disp_hp_percent = fVar1;
        this->red_bar_wait = 0x23;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        (this->mDamageAlpha).mAdd = 10;
      }
    }
    else {
                    /* end of inlined section */
      if (this->red_bar_wait < 1) {
        fVar2 = this->old_hp_percent - DAT_003ee108;
        this->old_hp_percent = fVar2;
        if (fVar2 < fVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
          this->old_hp_percent = fVar1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          (this->mDamageAlpha).mAdd = 0xfff6;
        }
      }
      else {
        this->red_bar_wait = this->red_bar_wait + -1;
      }
    }
  }
  else {
                    /* end of inlined section */
    this->old_hp_percent = fVar1;
    this->red_bar_wait = 0x23;
  }
  Work__t12CWrkVariable3Zsi0i_127_(&this->mDamageAlpha);
  return;
}

void CEneLife::SetDamage(int iDamage) {
  this->mDamage = (ushort)iDamage;
  return;
}

void CEneLife::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	int x;
	int y;
	DISP_SPRT ds;
	
  int iVar1;
  int iVar2;
  uchar uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float scale;
  float fVar7;
  DISP_SPRT DStack_2d0;
  DISP_SPRT DStack_240;
  DISP_SPRT DStack_1b0;
  DISP_SPRT ds;
  
  if (this->ene_hp_len != 0.0) {
    fVar7 = (float)fndr_my;
    fVar6 = (float)fndr_mx;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_2d0,n_finder_dat + 0x34);
    DStack_2d0.x = DStack_2d0.x + fVar6;
    DStack_2d0.test = 0x30003;
    DStack_2d0.y = DStack_2d0.y + fVar7;
    uVar3 = (uchar)iAlpha;
    DStack_2d0.tex1 = 0x161;
    DStack_2d0.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_2d0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_2d0,n_finder_dat + 0x36);
    DStack_2d0.scw = this->ene_hp_len * 14.0;
    DStack_2d0.csx = DStack_2d0.x + fVar6;
    scale = 1.0;
    DStack_2d0.csy = DStack_2d0.y + fVar7;
    DStack_2d0.test = 0x30003;
    DStack_2d0.sch = 1.0;
    DStack_2d0.tex1 = 0x161;
    DStack_2d0.x = DStack_2d0.csx;
    DStack_2d0.y = DStack_2d0.csy;
    DStack_2d0.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_2d0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_2d0,n_finder_dat + 0x35);
    DStack_2d0.test = 0x30003;
    DStack_2d0.y = DStack_2d0.y + fVar7;
    DStack_2d0.tex1 = 0x161;
    DStack_2d0.x = DStack_2d0.x +
                   fVar6 + (float)(uint)(ushort)n_finder_dat[54].w * this->ene_hp_len * 14.0;
    DStack_2d0.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_2d0);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_2d0,n_finder_dat + 0x33);
    DStack_2d0.x = DStack_2d0.x + fVar6;
    DStack_2d0.test = 0x30003;
    DStack_2d0.y = DStack_2d0.y + fVar7;
    DStack_2d0.tex1 = 0x161;
    DStack_2d0.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_2d0);
    iVar1 = n_finder_dat[55].x + fndr_mx;
    iVar2 = n_finder_dat[55].y + fndr_my;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_240,n_finder_dat + 0x37);
    fVar5 = (float)iVar1;
    fVar4 = (float)iVar2;
    DStack_240.r = '`';
    DStack_240.scw = this->old_hp_percent * this->ene_hp_len * 14.0;
    DStack_240.g = '\0';
    DStack_240.b = '\0';
    DStack_240.test = 0x30003;
    DStack_240.tex1 = 0x161;
    DStack_240.csx = fVar5;
    DStack_240.csy = fVar4;
    DStack_240.x = fVar5;
    DStack_240.y = fVar4;
    DStack_240.sch = scale;
    DStack_240.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_240);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&DStack_1b0,n_finder_dat + 0x37);
    DStack_1b0.test = 0x30003;
    DStack_1b0.tex1 = 0x161;
    DStack_1b0.scw = this->disp_hp_percent * this->ene_hp_len * 14.0;
    DStack_1b0.csx = fVar5;
    DStack_1b0.csy = fVar4;
    DStack_1b0.x = fVar5;
    DStack_1b0.y = fVar4;
    DStack_1b0.sch = scale;
    DStack_1b0.alpha = uVar3;
    DispSprD__FP9DISP_SPRT(&DStack_1b0);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar1 = (iAlpha * (short)(this->mDamageAlpha).mValue) / 0x7f;
                    /* end of inlined section */
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x48);
    ds.x = ds.x + fVar6;
    ds.y = ds.y + fVar7;
    ds.zbuf = 0x10a000118;
    ds.alphar = 0x48;
    ds.alpha = (uchar)iVar1;
    DispSprD__FP9DISP_SPRT(&ds);
    SetNumerousDisp__FP8SPRT_DATiiiiifii
              (n_finder_dat + 0x78,(int)(short)this->mDamage,iVar1,0xb,fndr_mx,fndr_my,scale,0,1);
  }
  return;
}

void CEneLife::Decrease(float new_hp_per) {
	CWrkVariable<short int,0,127> *this;
	
  float fVar1;
  
  fVar1 = this->now_hp_percent;
  if (fVar1 != new_hp_per) {
    this->old_hp_percent = fVar1;
    this->now_hp_percent = new_hp_per;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mDamageAlpha).mAdd = 0;
                    /* end of inlined section */
    this->disp_hp_percent = fVar1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mDamageAlpha).mValue = 0;
  }
  return;
}

void CEneLife::Set(float new_hp_per) {
	CWrkVariable<short int,0,127> *this;
	
  if (this->now_hp_percent != new_hp_per) {
    this->now_hp_percent = new_hp_per;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mDamageAlpha).mAdd = 0;
                    /* end of inlined section */
    this->disp_hp_percent = new_hp_per;
    this->old_hp_percent = new_hp_per;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    (this->mDamageAlpha).mValue = 0;
  }
  return;
}

void CEneLife::FrameLenSet(float len) {
  this->ene_hp_len = len;
  return;
}

void CWrkVariable<short, 0, 127>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
