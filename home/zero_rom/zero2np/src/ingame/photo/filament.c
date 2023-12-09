// STATUS: NOT STARTED

#include "filament.h"

struct CBlinkSwitchVariable<char,90,118,6,90> {
private:
	char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,118,6,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,90,112,11,90> {
private:
	char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,112,11,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,90,116,13,90> {
private:
	char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,90,116,13,90>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

struct CBlinkSwitchVariable<char,75,112,17,75> {
private:
	char mValue;
	unsigned char mOn : 1;
	unsigned char mUp : 1;
	
public:
	CBlinkSwitchVariable<char,75,112,17,75>& operator=();
	CBlinkSwitchVariable();
	CBlinkSwitchVariable();
	void Init();
	void BlinkOn();
	void BlinkOff();
	int IsOn();
	void Work();
	char Get();
	void Set();
	char GetMax();
	char GetMin();
	char GetInitVal();
};

CBlinkSwitchVariable<char,90,118,6,90> mBlinkAlphaCore1 = {
	/* .mValue = */ 0,
	/* .mOn = */ BITFIELD,
	/* .mUp = */ BITFIELD
};

CBlinkSwitchVariable<char,90,112,11,90> mBlinkAlphaCore2 = {
	/* .mValue = */ 0,
	/* .mOn = */ BITFIELD,
	/* .mUp = */ BITFIELD
};

CBlinkSwitchVariable<char,90,116,13,90> mBlinkAlphaWhole1 = {
	/* .mValue = */ 0,
	/* .mOn = */ BITFIELD,
	/* .mUp = */ BITFIELD
};

CBlinkSwitchVariable<char,75,112,17,75> mBlinkAlphaWhole2 = {
	/* .mValue = */ 0,
	/* .mOn = */ BITFIELD,
	/* .mUp = */ BITFIELD
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3adc88;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_75_i_112_i_17_i_75_
              ((CBlinkSwitchVariable<char,75,112,17,75> *)s_void__003f0720);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_75_i_112_i_17_i_75_
              ((CBlinkSwitchVariable<char,75,112,17,75> *)s_char__003f0728);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t20CBlinkSwitchVariable5Zci_75_i_112_i_17_i_75_
              ((CBlinkSwitchVariable<char,75,112,17,75> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CFilament::RTModeOn(int type, int time) {
  return;
}

void CFilament::RTModeOff() {
  return;
}

void CFilament::SetSave(MC_SAVE_DATA *save) {
  save->addr = (uchar *)&this->mLockCnt;
  save->size = 4;
  return;
}

void CFilament::Init() {
  memset(this,0,0x14);
  memset(&this->fillament_wrk,0,0x14);
  this->mLockCnt = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlp).mValue = 0x80;
  (this->mMasterAlp).mAdd = 0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  mBlinkAlphaWhole1.mValue = 'Z';
  mBlinkAlphaCore1._1_1_ = mBlinkAlphaCore1._1_1_ | 3;
  mBlinkAlphaCore2._1_1_ = mBlinkAlphaCore2._1_1_ | 3;
  mBlinkAlphaWhole1._1_1_ = mBlinkAlphaWhole1._1_1_ | 3;
  mBlinkAlphaWhole2.mValue = 'K';
  mBlinkAlphaWhole2._1_1_ = mBlinkAlphaWhole2._1_1_ | 3;
  mBlinkAlphaCore1.mValue = 'Z';
                    /* end of inlined section */
  mBlinkAlphaCore2.mValue = 'Z';
  FrameReset__9CFilament(this);
  *(uint *)&this->field_0x34 = *(uint *)&this->field_0x34 & 0xfffffffe;
  return;
}

void CFilament::FrameReset() {
  this->mHintRate = 0.0;
  this->mBattleRate = 0.0;
  this->mAutoRate = 0.0;
  return;
}

void CFilament::DrawLock() {
  this->mLockCnt = this->mLockCnt + 1;
  return;
}

void CFilament::DrawUnlock() {
  this->mLockCnt = this->mLockCnt + -1;
  return;
}

void CFilament::FadeIn() {
	short int iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlp).mAdd = 0x10;
  return;
}

void CFilament::FadeOut() {
	short int iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mMasterAlp).mAdd = 0xfff0;
  return;
}

void CFilament::SetBattle(float fRate) {
  this->mBattleRate = fRate;
  return;
}

void CFilament::SetHint(float fRate) {
  this->mHintRate = fRate;
  return;
}

void CFilament::SetAuto(float fRate) {
  this->mAutoRate = fRate;
  return;
}

void CFilament::Work() {
  Work__t12CWrkVariable3Zsi0i_128_(&this->mMasterAlp);
  Work__t20CBlinkSwitchVariable5Zci_90_i_118_i6i_90_(0x3f0758);
  Work__t20CBlinkSwitchVariable5Zci_90_i_112_i_11_i_90_(0x3f0760);
  Work__t20CBlinkSwitchVariable5Zci_90_i_116_i_13_i_90_(0x3f0768);
  Work__t20CBlinkSwitchVariable5Zci_75_i_112_i_17_i_75_(0x3f0770);
  return;
}

void CFilament::Draw(int off_x, int off_y, int iAlpha, int bFlip) {
	int g;
	int b;
	int iWholePK2;
	int iCorePK2;
	DISP_SPRT ds;
	
  uchar uVar1;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  DISP_SPRT ds;
  
  iVar3 = 0xa1;
  iVar4 = 0xa2;
  if (this->mLockCnt == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar5 = (short)(this->mMasterAlp).mValue * iAlpha;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0x7f;
    }
                    /* end of inlined section */
    if ((*(uint *)&this->field_0x34 & 1) == 0) {
      if (this->mBattleRate == 0.0) {
        if (this->mAutoRate == 0.0) {
          if (this->mHintRate == 0.0) {
            this->mRate = 0.0;
          }
          else {
            this->mRate = this->mHintRate;
            iVar4 = 0xa0;
            iVar3 = 0x9f;
          }
        }
        else {
          this->mRate = this->mAutoRate;
          iVar4 = 0xa0;
          iVar3 = 0x9f;
        }
      }
      else {
        this->mRate = this->mBattleRate;
      }
      uVar2 = 0x80;
      uVar1 = 0x80;
    }
    else {
      uVar2 = 0xff;
      uVar1 = '\0';
      this->mRate = (this->fillament_wrk).bright / 100.0;
    }
    fVar9 = (float)off_x;
    fVar8 = (float)off_y;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0x9e);
    fVar7 = ds.x + fVar9;
    ds.alphar = 0x44;
    fVar6 = ds.y + fVar8;
    ds.zbuf = 0x10a000118;
    ds.alpha = (uchar)(iVar5 >> 7);
    if (bFlip != 0) {
      ds.att = ds.att | 2;
      ds.rot = -90.0;
      ds.crx = fVar7;
      ds.cry = fVar6;
    }
    ds.x = fVar7;
    ds.y = fVar6;
    DispSprD__FP9DISP_SPRT(&ds);
    iVar5 = (int)((float)(iVar5 >> 7) * this->mRate);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iVar3);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = iVar5 * (mBlinkAlphaCore1.mValue + 0x73);
                    /* end of inlined section */
    ds.x = ds.x + fVar9;
    ds.zbuf = 0x10a000118;
    ds.y = ds.y + fVar8;
    ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.r = 0x80;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = (iVar3 >> 8) * (mBlinkAlphaCore2.mValue + 0x73);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
                    /* end of inlined section */
    ds.alpha = (uchar)((uint)iVar3 >> 8);
    if (bFlip != 0) {
      ds.att = ds.att | 2;
      ds.rot = -90.0;
      ds.crx = fVar7;
      ds.cry = fVar6;
    }
    ds.g = uVar2;
    ds.b = uVar1;
    DispSprD__FP9DISP_SPRT(&ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iVar4);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar5 = iVar5 * (mBlinkAlphaWhole1.mValue + 0x73);
                    /* end of inlined section */
    ds.x = ds.x + fVar9;
    ds.zbuf = 0x10a000118;
    ds.y = ds.y + fVar8;
    ds.alphar = 0x48;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xff;
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
    ds.r = 0x80;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar3 = (iVar5 >> 8) * (mBlinkAlphaWhole2.mValue + 0x73);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
                    /* end of inlined section */
    ds.alpha = (uchar)((uint)iVar3 >> 8);
    if (bFlip != 0) {
      ds.att = ds.att | 2;
      ds.rot = -90.0;
      ds.crx = fVar7;
      ds.cry = fVar6;
    }
    ds.g = uVar2;
    ds.b = uVar1;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkSwitchVariable<char, 90, 118, 6, 90>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkSwitchVariable<char, 90, 112, 11, 90>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkSwitchVariable<char, 90, 116, 13, 90>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

void CBlinkSwitchVariable<char, 75, 112, 17, 75>::Work() {
	int iValue;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}
