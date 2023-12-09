// STATUS: NOT STARTED

#include "mprec.h"

double __mprec_tens[0] = {
};

double __mprec_bigtens[0] = {
};

double __mprec_tinytens[0] = {
};

_Bigint* _Balloc(_reent *ptr, int k) {
	int x;
	_Bigint *rv;
	
  _Bigint__2_47 **pp_Var1;
  _Bigint__408_44 *p_Var2;
  int iVar3;
  
  pp_Var1 = ptr->_freelist;
  if (pp_Var1 == (_Bigint__2_47 **)0x0) {
    pp_Var1 = (_Bigint__2_47 **)_calloc_r(ptr,4,0x10);
    ptr->_freelist = pp_Var1;
    if (pp_Var1 == (_Bigint__2_47 **)0x0) {
      return (_Bigint__408_44 *)0x0;
    }
  }
  p_Var2 = (_Bigint__408_44 *)pp_Var1[k];
  if (p_Var2 == (_Bigint__408_44 *)0x0) {
    iVar3 = 1 << (k & 0x1fU);
    p_Var2 = (_Bigint__408_44 *)_calloc_r(ptr,1,iVar3 * 4 + 0x14);
    if (p_Var2 == (_Bigint__408_44 *)0x0) {
      return (_Bigint__408_44 *)0x0;
    }
    p_Var2->_k = k;
    p_Var2->_maxwds = iVar3;
  }
  else {
    pp_Var1[k] = (_Bigint__2_47 *)p_Var2->_next;
  }
  p_Var2->_wds = 0;
  p_Var2->_sign = 0;
  return p_Var2;
}

void _Bfree(_reent *ptr, _Bigint *v) {
  _Bigint__2_47 **pp_Var1;
  
  if (v != (_Bigint__408_44 *)0x0) {
    pp_Var1 = ptr->_freelist;
    v->_next = (_Bigint__408_44 *)pp_Var1[v->_k];
    pp_Var1[v->_k] = (_Bigint__2_47 *)v;
  }
  return;
}

_Bigint* _multadd(_reent *ptr, _Bigint *b, int m, int a) {
	int i;
	int wds;
	__ULong *x;
	__ULong y;
	__ULong xi;
	__ULong z;
	_Bigint *b1;
	
  int iVar1;
  _Bigint__408_44 *p_Var2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  
  puVar5 = b->_x;
  iVar6 = 0;
  iVar1 = b->_wds;
  do {
    iVar6 = iVar6 + 1;
    uVar4 = (*puVar5 & 0xffff) * m + a;
    uVar3 = (*puVar5 >> 0x10) * m + (uVar4 >> 0x10);
    a = uVar3 >> 0x10;
    *puVar5 = uVar3 * 0x10000 + (uVar4 & 0xffff);
    puVar5 = puVar5 + 1;
  } while (iVar6 < iVar1);
  p_Var2 = b;
  if (a != 0) {
    if (b->_maxwds <= iVar1) {
      p_Var2 = _Balloc(ptr,b->_k + 1);
      memcpy(&p_Var2->_sign,&b->_sign,(long)(b->_wds * 4 + 8));
      _Bfree(ptr,b);
    }
    p_Var2->_x[iVar1] = a;
    p_Var2->_wds = iVar1 + 1;
  }
  return p_Var2;
}

_Bigint* _s2b(_reent *ptr, char *s, int nd0, int nd, __ULong y9) {
	_Bigint *b;
	int i;
	int k;
	__int32_t y;
	
  char cVar1;
  _Bigint__408_44 *b;
  int k;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = 1;
  iVar4 = (nd + 8) / 9;
  k = 0;
  if (1 < iVar4) {
    do {
      iVar2 = iVar2 << 1;
      k = k + 1;
    } while (iVar2 < iVar4);
  }
  b = _Balloc(ptr,k);
  b->_x[0] = y9;
  iVar4 = 9;
  b->_wds = 1;
  if (nd0 < 10) {
    pcVar3 = s + 10;
  }
  else {
    cVar1 = s[9];
    pcVar3 = s + 9;
    while( true ) {
      iVar4 = iVar4 + 1;
      b = _multadd(ptr,b,10,cVar1 + -0x30);
      if (nd0 <= iVar4) break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 1;
    }
    pcVar3 = pcVar3 + 2;
  }
  if (iVar4 < nd) {
    iVar4 = nd - iVar4;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      iVar4 = iVar4 + -1;
      b = _multadd(ptr,b,10,cVar1 + -0x30);
    } while (iVar4 != 0);
  }
  return b;
}

int _hi0bits(__ULong x) {
	int k;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((x & 0xffff0000) == 0) {
    iVar2 = 0x10;
    x = x << 0x10;
  }
  if ((x & 0xff000000) == 0) {
    iVar2 = iVar2 + 8;
    x = x << 8;
  }
  if ((x & 0xf0000000) == 0) {
    iVar2 = iVar2 + 4;
    x = x << 4;
  }
  if ((x & 0xc0000000) == 0) {
    iVar2 = iVar2 + 2;
    x = x << 2;
  }
  iVar1 = iVar2;
  if (-1 < (int)x) {
    iVar1 = 0x20;
    if ((x & 0x40000000) != 0) {
      iVar1 = iVar2 + 1;
    }
  }
  return iVar1;
}

int _lo0bits(__ULong *y) {
	int k;
	__ULong x;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *y;
  if ((uVar3 & 7) == 0) {
    iVar2 = 0;
    if ((uVar3 & 0xffff) == 0) {
      iVar2 = 0x10;
      uVar3 = uVar3 >> 0x10;
    }
    if ((uVar3 & 0xff) == 0) {
      iVar2 = iVar2 + 8;
      uVar3 = uVar3 >> 8;
    }
    if ((uVar3 & 0xf) == 0) {
      iVar2 = iVar2 + 4;
      uVar3 = uVar3 >> 4;
    }
    if ((uVar3 & 3) == 0) {
      iVar2 = iVar2 + 2;
      uVar3 = uVar3 >> 2;
    }
    if ((uVar3 & 1) == 0) {
      iVar1 = 0x20;
      if (uVar3 >> 1 != 0) {
        *y = uVar3 >> 1;
        iVar1 = iVar2 + 1;
      }
    }
    else {
      *y = uVar3;
      iVar1 = iVar2;
    }
  }
  else {
    iVar1 = 0;
    if ((uVar3 & 1) == 0) {
      if ((uVar3 & 2) == 0) {
        *y = uVar3 >> 2;
        return 2;
      }
      *y = uVar3 >> 1;
      return 1;
    }
  }
  return iVar1;
}

_Bigint* _i2b(_reent *ptr, int i) {
	_Bigint *b;
	
  _Bigint__408_44 *p_Var1;
  
  p_Var1 = _Balloc(ptr,1);
  p_Var1->_x[0] = i;
  p_Var1->_wds = 1;
  return p_Var1;
}

_Bigint* _multiply(_reent *ptr, _Bigint *a, _Bigint *b) {
	_Bigint *c;
	int k;
	int wc;
	__ULong carry;
	__ULong y;
	__ULong z;
	__ULong *x;
	__ULong *xa;
	__ULong *xae;
	__ULong *xb;
	__ULong *xbe;
	__ULong *xc;
	__ULong *xc0;
	__ULong z2;
	
  uint uVar1;
  _Bigint__408_44 *p_Var2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  _Bigint__408_44 *p_Var14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  
  iVar18 = b->_wds;
  if (a->_wds < iVar18) {
    iVar15 = a->_wds;
    iVar7 = b->_maxwds;
    p_Var14 = b;
    b = a;
    iVar17 = iVar18;
  }
  else {
    iVar7 = a->_maxwds;
    p_Var14 = a;
    iVar17 = a->_wds;
    iVar15 = iVar18;
  }
  iVar18 = iVar17 + iVar15;
  p_Var2 = _Balloc(ptr,p_Var14->_k + (uint)(iVar7 < iVar18));
  puVar9 = p_Var2->_x;
  if (puVar9 < puVar9 + iVar18) {
    *puVar9 = 0;
    puVar10 = puVar9;
    while (puVar10 = puVar10 + 1, puVar10 < puVar9 + iVar18) {
      *puVar10 = 0;
    }
  }
  puVar12 = b->_x;
  puVar16 = puVar12 + iVar15;
  puVar13 = p_Var14->_x;
  puVar10 = puVar9;
  for (; puVar12 < puVar16; puVar12 = puVar12 + 1) {
    uVar3 = *puVar12;
    uVar5 = uVar3 & 0xffff;
    if (uVar5 != 0) {
      uVar3 = 0;
      puVar8 = puVar10;
      puVar11 = puVar13;
      do {
        uVar6 = *puVar11;
        puVar11 = puVar11 + 1;
        uVar4 = *puVar8;
        uVar3 = (uVar6 & 0xffff) * uVar5 + (uVar4 & 0xffff) + uVar3;
        *(short *)puVar8 = (short)uVar3;
        uVar3 = (uVar6 >> 0x10) * uVar5 + (uVar4 >> 0x10) + (uVar3 >> 0x10);
        *(short *)((int)puVar8 + 2) = (short)uVar3;
        puVar8 = puVar8 + 1;
        uVar3 = uVar3 >> 0x10;
      } while (puVar11 < puVar13 + iVar17);
      *puVar8 = uVar3;
      uVar3 = *puVar12;
    }
    uVar3 = uVar3 >> 0x10;
    if (uVar3 != 0) {
      uVar5 = *puVar10;
      uVar4 = 0;
      puVar8 = puVar10;
      puVar11 = puVar13;
      uVar6 = uVar5;
      do {
        uVar1 = *puVar11;
        puVar11 = puVar11 + 1;
        *(short *)puVar8 = (short)uVar5;
        uVar4 = (uVar1 & 0xffff) * uVar3 + (uVar6 >> 0x10) + uVar4;
        *(short *)((int)puVar8 + 2) = (short)uVar4;
        puVar8 = puVar8 + 1;
        uVar6 = *puVar8;
        uVar5 = (uVar1 >> 0x10) * uVar3 + (uVar6 & 0xffff) + (uVar4 >> 0x10);
        uVar4 = uVar5 >> 0x10;
      } while (puVar11 < puVar13 + iVar17);
      *puVar8 = uVar5;
    }
    puVar10 = puVar10 + 1;
  }
  puVar9 = puVar9 + iVar18;
  while( true ) {
    if (iVar18 < 1) {
      p_Var2->_wds = iVar18;
      return p_Var2;
    }
    puVar9 = puVar9 + -1;
    if (*puVar9 != 0) break;
    iVar18 = iVar18 + -1;
  }
  p_Var2->_wds = iVar18;
  return p_Var2;
}

_Bigint* _pow5mult(_reent *ptr, _Bigint *b, int k) {
	_Bigint *b1;
	_Bigint *p5;
	_Bigint *p51;
	int i;
	static int p05[3] = {
		/* [0] = */ 5,
		/* [1] = */ 25,
		/* [2] = */ 125
	};
	
  uint uVar1;
  _Bigint__2_47 *p_Var2;
  _Bigint__408_44 *p_Var3;
  _Bigint__408_44 *b_00;
  uint uVar4;
  
  if ((k & 3U) != 0) {
    b = _multadd(ptr,b,*(int *)(&DAT_003ed08c + (k & 3U) * 4),0);
  }
  uVar4 = k >> 2;
  if (uVar4 != 0) {
    p_Var2 = ptr->_p5s;
    if (ptr->_p5s == (_Bigint__2_47 *)0x0) {
      p_Var2 = (_Bigint__2_47 *)_i2b(ptr,0x271);
      ptr->_p5s = p_Var2;
      ((_Bigint__408_44 *)p_Var2)->_next = (_Bigint__408_44 *)0x0;
    }
    while( true ) {
      b_00 = (_Bigint__408_44 *)p_Var2;
      uVar1 = uVar4 & 1;
      uVar4 = (int)uVar4 >> 1;
      if (uVar1 != 0) {
        p_Var3 = _multiply(ptr,b,b_00);
        _Bfree(ptr,b);
        b = p_Var3;
      }
      if (uVar4 == 0) break;
      p_Var2 = (_Bigint__2_47 *)b_00->_next;
      if (b_00->_next == (_Bigint__408_44 *)0x0) {
        p_Var2 = (_Bigint__2_47 *)_multiply(ptr,b_00,b_00);
        b_00->_next = (_Bigint__408_44 *)p_Var2;
        ((_Bigint__408_44 *)p_Var2)->_next = (_Bigint__408_44 *)0x0;
      }
    }
  }
  return b;
}

_Bigint* _lshift(_reent *ptr, _Bigint *b, int k) {
	int i;
	int k1;
	int n;
	int n1;
	_Bigint *b1;
	__ULong *x;
	__ULong *x1;
	__ULong *xe;
	__ULong z;
	
  _Bigint__408_44 *p_Var1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int k_00;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = k >> 5;
  iVar2 = iVar9 + b->_wds;
  iVar10 = iVar2 + 1;
  k_00 = b->_k;
  for (iVar5 = b->_maxwds; iVar5 < iVar10; iVar5 = iVar5 << 1) {
    k_00 = k_00 + 1;
  }
  p_Var1 = _Balloc(ptr,k_00);
  puVar7 = p_Var1->_x;
  if (0 < iVar9) {
    do {
      iVar9 = iVar9 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    } while (iVar9 != 0);
  }
  puVar4 = b->_x;
  uVar8 = k & 0x1f;
  puVar6 = puVar4 + b->_wds;
  if (uVar8 == 0) {
    do {
      uVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar7 = uVar8;
      puVar7 = puVar7 + 1;
    } while (puVar4 < puVar6);
  }
  else {
    uVar3 = 0;
    do {
      *puVar7 = *puVar4 << uVar8 | uVar3;
      puVar7 = puVar7 + 1;
      uVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 >> (0x20 - uVar8 & 0x1f);
    } while (puVar4 < puVar6);
    *puVar7 = uVar3;
    if (uVar3 != 0) {
      iVar10 = iVar2 + 2;
    }
  }
  p_Var1->_wds = iVar10 + -1;
  _Bfree(ptr,b);
  return p_Var1;
}

int __mcmp(_Bigint *a, _Bigint *b) {
	__ULong *xa;
	__ULong *xa0;
	__ULong *xb;
	__ULong *xb0;
	int i;
	int j;
	
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  
  iVar2 = b->_wds;
  iVar1 = a->_wds - iVar2;
  if (iVar1 == 0) {
    puVar3 = a->_x + iVar2;
    puVar4 = b->_x + iVar2;
    do {
      puVar3 = puVar3 + -1;
      puVar4 = puVar4 + -1;
      iVar2 = -1;
      if (*puVar4 <= *puVar3) {
        iVar2 = 1;
      }
      if (*puVar3 != *puVar4) {
        return iVar2;
      }
    } while (a->_x < puVar3);
    iVar1 = 0;
  }
  return iVar1;
}

_Bigint* __mdiff(_reent *ptr, _Bigint *a, _Bigint *b) {
	_Bigint *c;
	int i;
	int wa;
	int wb;
	__int32_t borrow;
	__int32_t y;
	__ULong *xa;
	__ULong *xae;
	__ULong *xb;
	__ULong *xbe;
	__ULong *xc;
	__int32_t z;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  _Bigint__408_44 *p_Var5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  _Bigint__408_44 *p_Var12;
  
  iVar4 = __mcmp(a,b);
  if (iVar4 == 0) {
    p_Var5 = _Balloc(ptr,0);
    p_Var5->_wds = 1;
    p_Var5->_x[0] = 0;
  }
  else {
    p_Var12 = b;
    if (iVar4 >= 0) {
      p_Var12 = a;
      a = b;
    }
    p_Var5 = _Balloc(ptr,p_Var12->_k);
    puVar9 = p_Var12->_x;
    puVar10 = a->_x;
    p_Var5->_sign = (uint)(iVar4 < 0);
    iVar6 = 0;
    iVar4 = p_Var12->_wds;
    puVar11 = puVar9 + iVar4;
    puVar7 = puVar10 + a->_wds;
    puVar3 = p_Var5->_x;
    do {
      puVar8 = puVar3;
      uVar1 = *puVar9;
      puVar9 = puVar9 + 1;
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
      iVar6 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar6;
      *(short *)puVar8 = (short)iVar6;
      iVar6 = ((uVar1 >> 0x10) - (uVar2 >> 0x10)) + (iVar6 >> 0x10);
      *(short *)((int)puVar8 + 2) = (short)iVar6;
      iVar6 = iVar6 >> 0x10;
      puVar3 = puVar8 + 1;
    } while (puVar10 < puVar7);
    for (; puVar7 = puVar3, puVar9 < puVar11; puVar9 = puVar9 + 1) {
      uVar1 = *puVar9;
      iVar6 = (uVar1 & 0xffff) + iVar6;
      *(short *)puVar7 = (short)iVar6;
      iVar6 = (uVar1 >> 0x10) + (iVar6 >> 0x10);
      *(short *)((int)puVar7 + 2) = (short)iVar6;
      iVar6 = iVar6 >> 0x10;
      puVar3 = puVar7 + 1;
      puVar8 = puVar7;
    }
    if (*puVar8 == 0) {
      do {
        puVar8 = puVar8 + -1;
        iVar4 = iVar4 + -1;
      } while (*puVar8 == 0);
      p_Var5->_wds = iVar4;
    }
    else {
      p_Var5->_wds = iVar4;
    }
  }
  return p_Var5;
}

double _ulp(double _x) {
	double_union a;
	__int32_t L;
	
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = ((uint)((ulong)_x >> 0x20) & 0x7ff00000) + 0xfcc00000;
  uVar3 = (long)iVar1 << 0x20;
  if ((long)iVar1 < 1) {
    uVar2 = -iVar1 >> 0x14;
    if ((int)uVar2 < 0x14) {
      uVar3 = (long)(0x80000 >> (uVar2 & 0x1f)) << 0x20;
    }
    else {
      if ((int)(uVar2 - 0x14) < 0x1f) {
        uVar2 = 1 << (~(uVar2 - 0x14) & 0x1f);
      }
      else {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  return uVar3;
}

double _b2d(_Bigint *a, int *e) {
	__ULong *xa;
	__ULong *xa0;
	__ULong w;
	__ULong y;
	__ULong z;
	int k;
	double_union d;
	
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  puVar9 = a->_x;
  iVar1 = a->_wds;
  puVar7 = puVar9 + iVar1 + -1;
  uVar8 = *puVar7;
  iVar2 = _hi0bits(uVar8);
  *e = 0x20 - iVar2;
  if (iVar2 < 0xb) {
    uVar5 = 0;
    uVar3 = ((long)(int)(uVar8 >> (0xbU - iVar2 & 0x1f)) | 0x3ff00000U) << 0x20;
    if (puVar9 < puVar7) {
      uVar5 = puVar9[iVar1 + -2];
    }
    uVar4 = (ulong)(uVar8 << (iVar2 + 0x15U & 0x1f) | uVar5 >> (0xbU - iVar2 & 0x1f));
  }
  else {
    if (puVar9 < puVar7) {
      puVar7 = puVar9 + iVar1 + -2;
      uVar5 = *puVar7;
    }
    else {
      uVar5 = 0;
    }
    uVar6 = iVar2 - 0xb;
    if (uVar6 == 0) {
      uVar3 = ((long)(int)uVar8 | 0x3ff00000U) << 0x20;
      uVar4 = (ulong)uVar5;
    }
    else {
      uVar3 = ((long)(int)(uVar8 << (uVar6 & 0x1f) | uVar5 >> (-uVar6 & 0x1f)) | 0x3ff00000U) <<
              0x20;
      uVar8 = 0;
      if (puVar9 < puVar7) {
        uVar8 = puVar7[-1];
      }
      uVar4 = (ulong)(uVar5 << (uVar6 & 0x1f) | uVar8 >> (-uVar6 & 0x1f));
    }
  }
  return uVar3 | uVar4;
}

_Bigint* _d2b(_reent *ptr, double _d, int *e, int *bits) {
	double_union d;
	_Bigint *b;
	int de;
	int i;
	int k;
	__ULong *x;
	__ULong y;
	__ULong z;
	
  _Bigint__408_44 *p_Var1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  uint y;
  uint z;
  
  p_Var1 = _Balloc(ptr,1);
  uVar4 = _d >> 0x20 & 0x7fffffff;
  z = (uint)((ulong)_d >> 0x20) & 0xfffff;
  uVar7 = (uVar4 << 0x20) >> 0x34;
  puVar6 = p_Var1->_x;
  if (uVar7 != 0) {
    z = z | 0x100000;
  }
  if ((uint)_d == 0) {
    iVar3 = 1;
    iVar5 = _lo0bits(&z);
    uVar2 = iVar5 + 0x20;
    *puVar6 = z;
    p_Var1->_wds = 1;
  }
  else {
    y = (uint)_d;
    uVar2 = _lo0bits(&y);
    if (uVar2 == 0) {
      *puVar6 = y;
    }
    else {
      *puVar6 = y | z << (-uVar2 & 0x1f);
      z = z >> (uVar2 & 0x1f);
    }
    iVar3 = 2;
    if (z == 0) {
      iVar3 = 1;
    }
    p_Var1[1]._next = (_Bigint__408_44 *)z;
    p_Var1->_wds = iVar3;
  }
  if (uVar7 == 0) {
    *e = uVar2 - 0x432;
    iVar5 = _hi0bits(puVar6[iVar3 + -1]);
    iVar5 = iVar3 * 0x20 - iVar5;
  }
  else {
    iVar5 = 0x35 - uVar2;
    *e = ((uint)uVar4 >> 0x14) + uVar2 + -0x433;
  }
  *bits = iVar5;
  return p_Var1;
}

double _ratio(_Bigint *a, _Bigint *b) {
	double_union da;
	double_union db;
	int k;
	int ka;
	int kb;
	
  int iVar1;
  double dVar2;
  double dVar3;
  int ka;
  int kb;
  
  dVar2 = (double)_b2d(a,&ka);
  dVar3 = (double)_b2d(b,&kb);
  iVar1 = (ka - kb) + (a->_wds - b->_wds) * 0x20;
  if (iVar1 < 1) {
    dVar3 = (double)((ulong)dVar3 & 0xffffffff |
                    (long)((int)((ulong)dVar3 >> 0x20) + iVar1 * -0x100000) << 0x20);
  }
  else {
    dVar2 = (double)((ulong)dVar2 & 0xffffffff |
                    (long)((int)((ulong)dVar2 >> 0x20) + iVar1 * 0x100000) << 0x20);
  }
  return (long)(dVar2 / dVar3);
}

double _mprec_log10(int dig) {
	double v;
	
  double dVar1;
  
  dVar1 = 1.0;
  if (dig < 0x18) {
    dVar1 = *(double *)(&__mprec_tens + dig * 8);
  }
  else if (0 < dig) {
    do {
      dig = dig + -1;
      dVar1 = dVar1 * 10.0;
    } while (0 < dig);
  }
  return (long)dVar1;
}
