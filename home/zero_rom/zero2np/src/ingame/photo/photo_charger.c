// STATUS: NOT STARTED

#include "photo_charger.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2f10;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci_50_i_127_((CBlinkVariable<char,50,127> *)s_void__003f37c8);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci_50_i_127_((CBlinkVariable<char,50,127> *)s_char__003f37d0);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t14CBlinkVariable3Zci_50_i_127_((CBlinkVariable<char,50,127> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CPhotoCharger::Work(int bSeFlg) {
  long lVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((bSeFlg != 0) &&
     ((long)(short)(this->mNowWaitCnt).mValue == (long)((short)this->mWaitCnt + -3))) {
                    /* end of inlined section */
    FinderBankPlay__FiiiiP11_SND_3D_SETii(10,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  }
  lVar1 = Work__t13CWaitVariable1Zs(this);
  if (lVar1 != 0) {
    Blink__t14CBlinkVariable3Zci_50_i_127_c(&this->mFlare,0xf);
    this->mReady = 1;
  }
  Work__t14CBlinkVariable3Zci_50_i_127_(&this->mFlare);
  return;
}

void CPhotoCharger::Reset(int iWaitCnt) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  this->mWaitCnt = (ushort)iWaitCnt;
  this->mReady = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mFlare).mValue = '2';
  (this->mFlare).mSpeed = '\0';
  if ((this->mNowWaitCnt).mValue == 0) {
    (this->mNowWaitCnt).mValue = this->mWaitCnt;
  }
  return;
}

int CPhotoCharger::IsReady() {
  return (int)(ushort)this->mReady;
}

void CPhotoCharger::Draw(int fndr_mx, int fndr_my, int iAlpha) {
	DISP_SPRT ds;
	int i;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  DISP_SPRT ds;
  
  uVar1 = this->mWaitCnt;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (uVar1 == 0) {
    trap(7);
  }
  iVar2 = iAlpha * (this->mFlare).mValue;
  iVar3 = (((int)(short)uVar1 - (int)(short)(this->mNowWaitCnt).mValue) * 0x10) / (int)(short)uVar1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0x7f;
  }
                    /* end of inlined section */
  if (0 < iVar3) {
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x27);
      fVar4 = (float)fndr_mx;
      iVar3 = iVar3 + -1;
      ds.zbuf = 0x10a000118;
      fndr_mx = fndr_mx + -5;
      ds.x = ds.x + fVar4;
      ds.alphar = 0x48;
      ds.y = ds.y + (float)fndr_my;
      ds.alpha = (uchar)(iVar2 >> 7);
      DispSprD__FP9DISP_SPRT(&ds);
    } while (iVar3 != 0);
  }
  return;
}

int CWaitVariable<short>::Work() {
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkVariable<char, 50, 127>::Blink(char tTime) {
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

void CBlinkVariable<char, 50, 127>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
