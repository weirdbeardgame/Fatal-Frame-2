// STATUS: NOT STARTED

#include "damage_disp.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a3850;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci0i_127_((CBlinkVariable<char,0,127> *)s_void__003ef8f0);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci0i_127_((CBlinkVariable<char,0,127> *)s_char__003ef8f8);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci0i_127_((CBlinkVariable<char,0,127> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CDamageDisp::Init() {
	CBlinkVariable<char,0,127> *this;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mWaiter).mValue = 0;
  (this->mOneBlink).mSpeed = '\0';
  (this->mOneBlink).mValue = '\0';
  return;
}

void CDamageDisp::Work() {
  long lVar1;
  
  lVar1 = Work__t13CWaitVariable1Zs();
  if (lVar1 != 0) {
    Blink__t14CBlinkVariable3Zci0i_127_c(&this->mOneBlink,8);
  }
  Work__t14CBlinkVariable3Zci0i_127_(&this->mOneBlink);
  return;
}

void CDamageDisp::Req(int iDamage, int iScore, int iWaitCnt) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((this->mWaiter).mValue == 0) {
    (this->mWaiter).mValue = (ushort)iWaitCnt;
  }
                    /* end of inlined section */
  this->mScore = iScore;
  this->mDamage = (ushort)iDamage;
  return;
}

void CDamageDisp::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	DISP_SPRT ds;
	
  int alpha;
  DISP_SPRT ds;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  alpha = (iAlpha * (this->mOneBlink).mValue) / 0x7f;
                    /* end of inlined section */
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x48);
  ds.alpha = (uchar)alpha;
  ds.x = ds.x + (float)fndr_mx;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + (float)fndr_my;
  ds.alphar = 0x48;
  DispSprD__FP9DISP_SPRT(&ds);
  SetNumerousDisp__FP8SPRT_DATiiiiifii
            (n_finder_dat + 0x78,(int)(short)this->mDamage,alpha,0xb,fndr_mx,fndr_my,1.0,0,1);
  return;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkVariable<char, 0, 127>::Blink(char tTime) {
	static char __FUNCTION__[6] = {
		/* [0] = */ 66,
		/* [1] = */ 108,
		/* [2] = */ 105,
		/* [3] = */ 110,
		/* [4] = */ 107,
		/* [5] = */ 0
	};
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkVariable<char, 0, 127>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
