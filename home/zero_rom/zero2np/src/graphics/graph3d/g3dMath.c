// STATUS: NOT STARTED

#include "g3dMath.h"

float g3dSinf(float f) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 83,
		/* [4] = */ 105,
		/* [5] = */ 110,
		/* [6] = */ 102,
		/* [7] = */ 0
	};
	float fRet;
	
  int iVar1;
  float x;
  
  iVar1 = isnanf(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x4c,__FUNCTION___550,"!isnanf( f )");
    iVar1 = isnanf(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = isinff(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x4d,__FUNCTION___550,"!isinff( f )");
    iVar1 = isinff(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = finitef(f);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x4e,__FUNCTION___550,"finitef( f )");
    iVar1 = finitef(f);
    g3ddbgAssert__FbPCce(iVar1 != 0,&DAT_003f0d00);
  }
  x = sinf(f);
  iVar1 = isnanf(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x52,__FUNCTION___550,"!isnanf( fRet )");
    iVar1 = isnanf(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = isinff(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x53,__FUNCTION___550,"!isinff( fRet )");
    iVar1 = isinff(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = finitef(x);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x54,__FUNCTION___550,"finitef( fRet )");
    iVar1 = finitef(x);
    g3ddbgAssert__FbPCce(iVar1 != 0,s_fRet__f_003f0d08);
  }
  return x;
}

float g3dCosf(float f) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 111,
		/* [5] = */ 115,
		/* [6] = */ 102,
		/* [7] = */ 0
	};
	float fRet;
	
  int iVar1;
  float x;
  
  iVar1 = isnanf(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x61,__FUNCTION___553,"!isnanf( f )");
    iVar1 = isnanf(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = isinff(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x62,__FUNCTION___553,"!isinff( f )");
    iVar1 = isinff(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = finitef(f);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",99,__FUNCTION___553,"finitef( f )");
    iVar1 = finitef(f);
    g3ddbgAssert__FbPCce(iVar1 != 0,&DAT_003f0d00);
  }
  x = cosf(f);
  iVar1 = isnanf(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x67,__FUNCTION___553,"!isnanf( fRet )");
    iVar1 = isnanf(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = isinff(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x68,__FUNCTION___553,"!isinff( fRet )");
    iVar1 = isinff(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = finitef(x);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x69,__FUNCTION___553,"finitef( fRet )");
    iVar1 = finitef(x);
    g3ddbgAssert__FbPCce(iVar1 != 0,s_fRet__f_003f0d08);
  }
  return x;
}

float g3dAtanf(float f) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 65,
		/* [4] = */ 116,
		/* [5] = */ 97,
		/* [6] = */ 110,
		/* [7] = */ 102,
		/* [8] = */ 0
	};
	float fRet;
	
  int iVar1;
  float x;
  
  iVar1 = isnanf(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x74,__FUNCTION___556,"!isnanf( f )");
    iVar1 = isnanf(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = isinff(f);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x75,__FUNCTION___556,"!isinff( f )");
    iVar1 = isinff(f);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = finitef(f);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x76,__FUNCTION___556,"finitef( f )");
    iVar1 = finitef(f);
    g3ddbgAssert__FbPCce(iVar1 != 0,&DAT_003f0d00);
  }
  x = atanf(f);
  iVar1 = isnanf(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x7a,__FUNCTION___556,"!isnanf( fRet )");
    iVar1 = isnanf(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = isinff(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x7b,__FUNCTION___556,"!isinff( fRet )");
    iVar1 = isinff(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = finitef(x);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x7c,__FUNCTION___556,"finitef( fRet )");
    iVar1 = finitef(x);
    g3ddbgAssert__FbPCce(iVar1 != 0,s_fRet__f_003f0d08);
  }
  return x;
}

float g3dAtan2f(float fX, float fY) {
	static char __FUNCTION__[10] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 65,
		/* [4] = */ 116,
		/* [5] = */ 97,
		/* [6] = */ 110,
		/* [7] = */ 50,
		/* [8] = */ 102,
		/* [9] = */ 0
	};
	float fRet;
	
  int iVar1;
  float x;
  
  x = atan2f(fX,fY);
  iVar1 = isnanf(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x89,__FUNCTION___559,"!isnanf( fRet )");
    iVar1 = isnanf(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = isinff(x);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x8a,__FUNCTION___559,"!isinff( fRet )");
    iVar1 = isinff(x);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = finitef(x);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x8b,__FUNCTION___559,"finitef( fRet )");
    iVar1 = finitef(x);
    g3ddbgAssert__FbPCce(iVar1 != 0,s_fRet__f_003f0d08);
  }
  return x;
}

float g3dAcosf(float f) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 65,
		/* [4] = */ 99,
		/* [5] = */ 111,
		/* [6] = */ 115,
		/* [7] = */ 102,
		/* [8] = */ 0
	};
	float fRet;
	float min;
	
  int iVar1;
  float fVar2;
  
                    /* inlined from g3dMath.h */
  fVar2 = -1.0;
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
                    /* end of inlined section */
                    /* inlined from g3dMath.h */
  if ((-1.0 <= f) && (fVar2 = 1.0, f <= 1.0)) {
    fVar2 = f;
  }
                    /* end of inlined section */
  iVar1 = isnanf(fVar2);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x99,__FUNCTION___562,"!isnanf( f )");
    iVar1 = isnanf(fVar2);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = isinff(fVar2);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x9a,__FUNCTION___562,"!isinff( f )");
    iVar1 = isinff(fVar2);
    g3ddbgAssert__FbPCce(iVar1 == 0,&DAT_003f0d00);
  }
  iVar1 = finitef(fVar2);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x9b,__FUNCTION___562,"finitef( f )");
    iVar1 = finitef(fVar2);
    g3ddbgAssert__FbPCce(iVar1 != 0,&DAT_003f0d00);
  }
  fVar2 = acosf(fVar2);
  iVar1 = isnanf(fVar2);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0x9f,__FUNCTION___562,"!isnanf( fRet )");
    iVar1 = isnanf(fVar2);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = isinff(fVar2);
  if (iVar1 != 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xa0,__FUNCTION___562,"!isinff( fRet )");
    iVar1 = isinff(fVar2);
    g3ddbgAssert__FbPCce(iVar1 == 0,s_fRet__f_003f0d08);
  }
  iVar1 = finitef(fVar2);
  if (iVar1 == 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xa1,__FUNCTION___562,"finitef( fRet )");
    iVar1 = finitef(fVar2);
    g3ddbgAssert__FbPCce(iVar1 != 0,s_fRet__f_003f0d08);
  }
  return fVar2;
}

float g3dLogf2(float fBase, float f) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 103,
		/* [6] = */ 102,
		/* [7] = */ 50,
		/* [8] = */ 0
	};
	
  float fVar1;
  float fVar2;
  
  if (fBase <= 0.0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xae,__FUNCTION___568,"fBase > 0.0f");
    g3ddbgAssert__FbPCce(0.0 < fBase,&DAT_003f0d18);
  }
  if (f <= 0.0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xaf,__FUNCTION___568,"f > 0.0f");
    g3ddbgAssert__FbPCce(0.0 < f,&DAT_003f0d18);
  }
  fVar1 = logf(f);
  fVar2 = logf(fBase);
  return fVar1 / fVar2;
}

int g3dLogi2(int iBase, int i) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 103,
		/* [6] = */ 105,
		/* [7] = */ 50,
		/* [8] = */ 0
	};
	int iRet;
	int iWork;
	
  int iVar1;
  int iVar2;
  
  if (iBase < 2) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xb9,__FUNCTION___571,"iBase > 1");
    g3ddbgAssert__FbPCce(false,&DAT_003f0d18);
  }
  if (i < 0) {
    _SetLineInfo__FPCciT0T0("g3dMath.c",0xba,__FUNCTION___571,s_i_>__0_003f0d20);
    g3ddbgAssert__FbPCce((bool)((byte)~(byte)((uint)i >> 0x18) >> 7),&DAT_003f0d18);
  }
  iVar1 = 1;
  iVar2 = 0;
  while( true ) {
    if (i < iVar1) {
      _SetLineInfo__FPCciT0T0("g3dMath.c",0xc1,__FUNCTION___571,"iWork <= i");
      g3ddbgAssert__FbPCce(false,"iBase : %d, i : %d");
    }
    if (iVar1 == i) break;
    iVar1 = iVar1 * iBase;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
