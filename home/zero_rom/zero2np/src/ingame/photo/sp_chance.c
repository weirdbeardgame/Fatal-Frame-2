// STATUS: NOT STARTED

#include "sp_chance.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c7bd8;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_void__003f44d0);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_char__003f44d8);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CSPChance::Init() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mValue = 0;
  *(ushort *)&(this->mAlpha).field_0x2 = *(ushort *)&(this->mAlpha).field_0x2 & 0xfffe | 2;
  (this->mLampAlpha).mAdd = 0;
  (this->mLampAlpha).mValue = 0;
                    /* end of inlined section */
  *(uint *)this = *(uint *)this & 0xfffffffd | 1;
  return;
}

void CSPChance::Release() {
	CSND_BUF_PLAY *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
  SndBufFadeStop((this->mSe).field0_0x0.play_id,1);
  (this->mSe).field0_0x0.play_id = 0x300000;
  return;
}

void CSPChance::Set(int bFlg) {
	CSND_BUF_PLAY *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
  *(uint *)this = *(uint *)this & 0xfffffffd | (bFlg & 1U) << 1;
  if (bFlg == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    SndBufFadeStop((this->mSe).field0_0x0.play_id,1);
    (this->mSe).field0_0x0.play_id = 0x300000;
  }
  return;
}

void CSPChance::SEEnable() {
  *(uint *)this = *(uint *)this | 1;
  return;
}

void CSPChance::SEDisable() {
	CSND_BUF_PLAY *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
                    /* end of inlined section */
  *(uint *)this = *(uint *)this & 0xfffffffe;
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
  SndBufFadeStop((this->mSe).field0_0x0.play_id,1);
  (this->mSe).field0_0x0.play_id = 0x300000;
  return;
}

void CSPChance::Work(int bSeFlg) {
	CSND_BUF_PLAY *this;
	short int iValue;
	
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  
  if ((*(uint *)this & 2) == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    SndBufFadeStop((this->mSe).field0_0x0.play_id,0xf);
    (this->mSe).field0_0x0.play_id = 0x300000;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    uVar3 = 0xfff8;
    uVar1 = *(ushort *)&(this->mAlpha).field_0x2 & 0xfffe;
  }
  else {
    if ((bSeFlg == 0) || ((*(uint *)this & 1) == 0)) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
      SndBufFadeStop((this->mSe).field0_0x0.play_id,1);
      (this->mSe).field0_0x0.play_id = 0x300000;
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
      if ((this->mSe).field0_0x0.play_id == 0x300000) {
                    /* inlined from finder.h */
        iVar2 = FinderBankPlay__FiiiiP11_SND_3D_SETii(0xd,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        (this->mSe).field0_0x0.play_id = iVar2;
      }
    }
    uVar3 = 0x80;
    uVar1 = *(ushort *)&(this->mAlpha).field_0x2 | 1;
  }
  *(ushort *)&(this->mAlpha).field_0x2 = uVar1;
                    /* end of inlined section */
  (this->mLampAlpha).mAdd = uVar3;
  Work__t20CBlinkSwitchVariable5Zsi0i_128_i1i0();
  Work__t12CWrkVariable3Zsi0i_128_(&this->mLampAlpha);
  return;
}

void CSPChance::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	int iDispAlpha;
	DISP_SPRT ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  DISP_SPRT ds;
  
  fVar2 = (float)fndr_my;
  fVar3 = (float)fndr_mx;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x1f);
  ds.x = ds.x + fVar3;
  ds.alphar = 0x44;
  ds.y = ds.y + fVar2;
  ds.zbuf = 0x10a000118;
  ds.alpha = (uchar)iAlpha;
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar1 = iAlpha * (short)(this->mLampAlpha).mValue;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x21);
  ds.x = ds.x + fVar3;
  ds.alpha = (uchar)(iVar1 >> 7);
  ds.y = ds.y + fVar2;
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x48;
  DispSprD__FP9DISP_SPRT(&ds);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar1 = iAlpha * (short)(this->mAlpha).mValue;
                    /* end of inlined section */
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x7f;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ds.x = ds.x + fVar3;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + fVar2;
  ds.alphar = 0x48;
  ds.alpha = (uchar)(iVar1 >> 7);
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CBlinkSwitchVariable<short, 0, 128, 1, 0>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
