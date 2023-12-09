// STATUS: NOT STARTED

#include "camera_power_up.h"

float CCameraPowerUp::aDistanceTbl[4] = {
	/* [0] = */ 1500.f,
	/* [1] = */ 1800.f,
	/* [2] = */ 2000.f,
	/* [3] = */ 2500.f
};

float CCameraPowerUp::aDmgTbl[4] = {
	/* [0] = */ 1.f,
	/* [1] = */ 1.3f,
	/* [2] = */ 1.5f,
	/* [3] = */ 1.8f
};

float CCameraPowerUp::aRadiusTbl[4] = {
	/* [0] = */ 0.849999964f,
	/* [1] = */ 0.9f,
	/* [2] = */ 1.f,
	/* [3] = */ 1.0999999f
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1c10;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef5e0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef5e8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void CCameraPowerUp::Init() {
	int i;
	
  CVariable<char,0,3> *pCVar1;
  int iVar2;
  
  iVar2 = 9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRadiusGrade).mValue = '\0';
  (this->mSensitiveGrade).mValue = '\0';
                    /* end of inlined section */
  pCVar1 = this->mSubFuncGem + 9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRadiusGem).mValue = '\0';
  (this->mSensiteiveGem).mValue = '\0';
  (this->mAccumGem).mValue = '\0';
  (this->mRadiusGem).mValue = '\0';
  (this->mSensiteiveGem).mValue = '\0';
  (this->mRadiusGrade).mValue = '\0';
  (this->mSensitiveGrade).mValue = '\0';
  do {
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar1->mValue = '\0';
                    /* end of inlined section */
    pCVar1 = pCVar1 + -1;
  } while (-1 < iVar2);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mTemperedRenzFlg).flag_32[0] = 0;
  (this->mCamPartsFlg).flag_32[0] = 0;
  (this->mAdditionFlg).flag_32[0] = 0;
  (this->mCamPartsSetFlg).flag_32[0] = 0;
  return;
}

void CCameraPowerUp::AllRelease() {
	int i;
	
  CVariable<char,0,3> *pCVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mSensiteiveGem).mValue = '\x03';
                    /* end of inlined section */
  iVar2 = 9;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mRadiusGem).mValue = '\x03';
  (this->mAccumGem).mValue = '\x03';
                    /* end of inlined section */
  pCVar1 = this->mSubFuncGem + 9;
  do {
                    /* end of inlined section */
    iVar2 = iVar2 + -1;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    pCVar1->mValue = '\x03';
                    /* end of inlined section */
    pCVar1 = pCVar1 + -1;
  } while (-1 < iVar2);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mTemperedRenzFlg).flag_32[0] = -1;
  (this->mCamPartsFlg).flag_32[0] = -1;
  (this->mAdditionFlg).flag_32[0] = -1;
  (this->mCamPartsSetFlg).flag_32[0] = -1;
  return;
}

float CCameraPowerUp::GetRadiusRate() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  return _14CCameraPowerUp_aRadiusTbl[(this->mRadiusGrade).mValue];
}
