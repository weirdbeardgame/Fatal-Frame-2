// STATUS: NOT STARTED

#include "spirit_gage.h"

struct CMIN_MAX<float> {
	float mMin;
	float mMax;
	
	CMIN_MAX<float>& operator=();
	CMIN_MAX();
	CMIN_MAX();
	float GetWidth();
	float GetByProportion();
	float GetAverage();
};

CMIN_MAX<float> CSpiritGage::aDmgMultipleTbl[3] = {
	/* [0] = */ {
		/* .mMin = */ 0.299999982f,
		/* .mMax = */ 1.f
	},
	/* [1] = */ {
		/* .mMin = */ 1.8f,
		/* .mMax = */ 2.f
	},
	/* [2] = */ {
		/* .mMin = */ 2.f,
		/* .mMax = */ 2.f
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c7c88;
	
  g3ddbgAssert__FbPCce(false,str_694);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zci0i_60_((CWrkVariable<char,0,60> *)s_void__003f4518);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zci0i_60_((CWrkVariable<char,0,60> *)s_char__003f4520);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zci0i_60_((CWrkVariable<char,0,60> *)"unsigned int*");
  }
  return (uint **)0x0;
}

void CSpiritGage::Init() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  this->mPercent = 0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = '\0';
  (this->mAlpha).mValue = '\0';
                    /* end of inlined section */
  this->mFlg = 0;
  return;
}

float CSpiritGage::CalcDamageRate(SHUTTER_CHANCE_STATE SPState) {
	float fRate;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  return _11CSpiritGage_aDmgMultipleTbl[SPState].mMin +
         ((float)this->mPercent / 90.0) *
         (_11CSpiritGage_aDmgMultipleTbl[SPState].mMax -
         _11CSpiritGage_aDmgMultipleTbl[SPState].mMin);
}

void CSpiritGage::Draw(int fndr_mx, int fndr_my, int iMasterAlpha, float fScale) {
	int iAlpha;
	int iDivNum;
	int iRot;
	DISP_SPRT ds;
	int r;
	int g;
	int b;
	static float ShutterChanceRgb[4] = {
		/* [0] = */ 212.f,
		/* [1] = */ 21.f,
		/* [2] = */ 3.f,
		/* [3] = */ 0.f
	};
	static float NormalRgb[4] = {
		/* [0] = */ 188.f,
		/* [1] = */ 140.f,
		/* [2] = */ 61.f,
		/* [3] = */ 0.f
	};
	float Rgb[4];
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  DISP_SPRT ds;
  float Rgb [4];
  int iDivNum;
  int iRot;
  
  iVar1 = this->mPercent;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  iVar4 = (iVar1 * 0xd) / 100;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar3 = (this->mAlpha).mValue * iMasterAlpha;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x7f;
  }
                    /* end of inlined section */
  iRot = -100;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar2 = iVar4 * -6;
                    /* end of inlined section */
  if (iVar1 < 0x5a) {
    sceVu0CopyVector(Rgb,0x34fe70);
  }
  else {
    sceVu0CopyVector(Rgb,0x34fe60);
  }
  uVar7 = (uchar)(int)Rgb[0];
  uVar8 = (uchar)(int)Rgb[1];
  uVar5 = (uchar)(int)Rgb[2];
  if (iVar4 < 1) {
    fVar13 = (float)fndr_mx;
  }
  else {
    fVar12 = (float)fndr_mx;
    fVar13 = fVar12;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xc);
      fVar11 = (float)iRot;
      fVar9 = (float)(fndr_mx + 0x13f);
      fVar10 = (float)(fndr_my + 0xe1);
      ds.zbuf = 0x10a000118;
      ds.x = ds.x + fVar12;
      ds.y = ds.y + (float)fndr_my;
      iRot = iRot + 0x14;
      ds.alphar = 0x48;
      iVar4 = iVar4 + -1;
      uVar6 = (uchar)(iVar3 >> 7);
      ds.tex1 = 0x161;
      ds.crx = fVar9;
      ds.cry = fVar10;
      ds.csx = fVar9;
      ds.csy = fVar10;
      ds.scw = fScale;
      ds.sch = fScale;
      ds.rot = fVar11;
      ds.r = uVar7;
      ds.g = uVar8;
      ds.b = uVar5;
      ds.alpha = uVar6;
      DispSprD__FP9DISP_SPRT(&ds);
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xd);
      ds.x = ds.x + fVar12;
      ds.y = ds.y + (float)fndr_my;
      ds.zbuf = 0x10a000118;
      ds.alphar = 0x48;
      ds.tex1 = 0x161;
      ds.crx = fVar9;
      ds.cry = fVar10;
      ds.csx = fVar9;
      ds.csy = fVar10;
      ds.scw = fScale;
      ds.sch = fScale;
      ds.rot = fVar11;
      ds.r = uVar7;
      ds.g = uVar8;
      ds.b = uVar5;
      ds.alpha = uVar6;
      DispSprD__FP9DISP_SPRT(&ds);
    } while (iVar4 != 0);
  }
  fVar12 = (float)(fndr_mx + 0x13f);
  fVar9 = (float)(fndr_my + 0xe1);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xc);
  ds.x = ds.x + fVar13;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + (float)fndr_my;
  ds.alphar = 0x48;
  uVar6 = (uchar)(((iVar3 >> 7) * ((iVar1 * 0x4e) / 100 + iVar2)) / 6);
  ds.tex1 = 0x161;
  ds.crx = fVar12;
  ds.cry = fVar9;
  ds.csx = fVar12;
  ds.csy = fVar9;
  ds.scw = fScale;
  ds.sch = fScale;
  ds.rot = (float)iRot;
  ds.r = uVar7;
  ds.g = uVar8;
  ds.b = uVar5;
  ds.alpha = uVar6;
  DispSprD__FP9DISP_SPRT(&ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + 0xd);
  ds.x = ds.x + fVar13;
  ds.zbuf = 0x10a000118;
  ds.y = ds.y + (float)fndr_my;
  ds.alphar = 0x48;
  ds.tex1 = 0x161;
  ds.crx = fVar12;
  ds.cry = fVar9;
  ds.csx = fVar12;
  ds.csy = fVar9;
  ds.scw = fScale;
  ds.sch = fScale;
  ds.rot = (float)iRot;
  ds.r = uVar7;
  ds.g = uVar8;
  ds.b = uVar5;
  ds.alpha = uVar6;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void CSpiritGage::FadeIn() {
	char iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = '\x14';
  return;
}

void CSpiritGage::FadeOut() {
	char iValue;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  (this->mAlpha).mAdd = -0x14;
  return;
}

void CSpiritGage::Work(float fDistanceRate, float fCenterRate, float fAlphaRate, SHUTTER_CHANCE_STATE SPState, int iMinPercent) {
	int iPercent;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  Work__t12CWrkVariable3Zci0i_60_(&this->mAlpha);
  fVar2 = GetClampValF(fDistanceRate,1.0,fVar4);
  fVar3 = GetClampValF(fCenterRate,1.0,fVar4);
  fVar4 = GetClampValF(fAlphaRate,1.0,fVar4);
  iVar1 = (int)(fVar2 * 70.0) + (int)(fVar3 * 15.0) + (int)(fVar4 * 5.0);
  if ((SPState == SHUTTER_CHANCE_NORMAL) ||
     ((SPState != SHUTTER_CHANCE_NONE && (SPState == SHUTTER_CHANCE_SP)))) {
    iVar1 = iVar1 / 10 + 0x5a;
  }
  if (iVar1 == 0) {
    this->mPercent = 0;
  }
  else if (iVar1 < iMinPercent) {
    this->mPercent = iMinPercent;
  }
  else {
    this->mPercent = iVar1;
  }
  return;
}

void CWrkVariable<char, 0, 60>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_694);
  return;
}
