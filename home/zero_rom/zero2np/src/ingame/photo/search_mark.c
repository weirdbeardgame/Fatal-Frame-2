// STATUS: NOT STARTED

#include "search_mark.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c6ad8;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_void__003f4208);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_char__003f4210);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CSearchMark::Init() {
	CWrkVariable<short int,0,128> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = 0;
  (this->mAlpha).mValue = 0;
  return;
}

void CSearchMark::Release() {
  return;
}

void CSearchMark::Work() {
  Work__t12CWrkVariable3Zsi0i_128_(&this->mAlpha);
  return;
}

void CSearchMark::FadeIn() {
	short int iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = 0x14;
  return;
}

void CSearchMark::FadeOut() {
	short int iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = 0xffec;
  return;
}

void CSearchMark::SetRot(float fRot) {
  this->mRot = fRot;
  return;
}

void CSearchMark::Draw(int fndr_mx, int fndr_my, int iAlpha, float fScale) {
	DISP_SPRT ds;
	
  ushort uVar1;
  DISP_SPRT ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  uVar1 = (this->mAlpha).mValue;
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x83);
  ds.crx = (float)(fndr_mx + 0x13f);
  ds.rot = this->mRot;
  ds.x = ds.x + (float)fndr_mx;
  ds.cry = (float)(fndr_my + 0xe1);
  ds.y = ds.y + (float)fndr_my;
  ds.alpha = (uchar)((iAlpha * (short)uVar1) / 0x80);
  ds.zbuf = 0x10a000118;
  ds.alphar = 0x48;
  ds.csx = ds.crx;
  ds.csy = ds.cry;
  ds.scw = fScale;
  ds.sch = fScale;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
