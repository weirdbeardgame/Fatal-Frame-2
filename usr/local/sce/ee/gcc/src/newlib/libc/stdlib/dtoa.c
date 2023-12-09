// STATUS: NOT STARTED

#include "dtoa.h"

static int quorem(_Bigint *b, _Bigint *S) {
	int n;
	__int32_t borrow;
	__int32_t y;
	__ULong carry;
	__ULong q;
	__ULong ys;
	__ULong *bx;
	__ULong *bxe;
	__ULong *sx;
	__ULong *sxe;
	__int32_t z;
	__ULong si;
	__ULong zs;
	
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  uint *puVar13;
  
  iVar12 = 0;
  if (S->_wds <= b->_wds) {
    iVar10 = S->_wds + -1;
    puVar9 = S->_x;
    puVar11 = b->_x;
    puVar13 = puVar9 + iVar10;
    puVar7 = puVar11 + iVar10;
    uVar3 = *puVar7;
    iVar12 = (int)uVar3 / (int)(*puVar13 + 1);
    if (*puVar13 + 1 == 0) {
      trap(7);
    }
    iVar4 = 0;
    if (iVar12 != 0) {
      uVar2 = 0;
      puVar8 = puVar9;
      puVar6 = puVar11;
      do {
        uVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar1 = *puVar6;
        uVar2 = (uVar5 & 0xffff) * iVar12 + uVar2;
        uVar5 = (uVar5 >> 0x10) * iVar12 + (uVar2 >> 0x10);
        iVar4 = ((uVar1 & 0xffff) - (uVar2 & 0xffff)) + iVar4;
        *(short *)puVar6 = (short)iVar4;
        iVar4 = ((uVar1 >> 0x10) - (uVar5 & 0xffff)) + (iVar4 >> 0x10);
        uVar2 = uVar5 >> 0x10;
        *(short *)((int)puVar6 + 2) = (short)iVar4;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 >> 0x10;
      } while (puVar8 <= puVar13);
      if (uVar3 == 0) {
        while (puVar7 = puVar7 + -1, puVar11 < puVar7) {
          if (*puVar7 != 0) {
            b->_wds = iVar10;
            goto LAB_002a91cc;
          }
          iVar10 = iVar10 + -1;
        }
        b->_wds = iVar10;
      }
    }
LAB_002a91cc:
    iVar4 = __mcmp(b,S);
    if (-1 < iVar4) {
      iVar12 = iVar12 + 1;
      iVar4 = 0;
      uVar3 = 0;
      puVar7 = puVar11;
      do {
        uVar2 = *puVar9;
        puVar9 = puVar9 + 1;
        uVar5 = *puVar7;
        uVar3 = (uVar2 & 0xffff) + uVar3;
        uVar2 = (uVar2 >> 0x10) + (uVar3 >> 0x10);
        iVar4 = ((uVar5 & 0xffff) - (uVar3 & 0xffff)) + iVar4;
        *(short *)puVar7 = (short)iVar4;
        iVar4 = ((uVar5 >> 0x10) - (uVar2 & 0xffff)) + (iVar4 >> 0x10);
        uVar3 = uVar2 >> 0x10;
        *(short *)((int)puVar7 + 2) = (short)iVar4;
        puVar7 = puVar7 + 1;
        iVar4 = iVar4 >> 0x10;
      } while (puVar9 <= puVar13);
      puVar7 = puVar11 + iVar10;
      if (*puVar7 == 0) {
        while (puVar7 = puVar7 + -1, puVar11 < puVar7) {
          if (*puVar7 != 0) {
            b->_wds = iVar10;
            return iVar12;
          }
          iVar10 = iVar10 + -1;
        }
        b->_wds = iVar10;
      }
    }
  }
  return iVar12;
}

char* _dtoa_r(_reent *ptr, double _d, int mode, int ndigits, int *decpt, int *sign, char **rve) {
	int bbits;
	int b2;
	int b5;
	int be;
	int dig;
	int i;
	int ieps;
	int ilim;
	int ilim0;
	int ilim1;
	int j;
	int j1;
	int k;
	int k0;
	int k_check;
	int leftright;
	int m2;
	int m5;
	int s2;
	int s5;
	int spec_case;
	int try_quick;
	double_union d;
	double_union d2;
	double_union eps;
	__int32_t L;
	int denorm;
	__ULong x;
	_Bigint *b;
	_Bigint *b1;
	_Bigint *delta;
	_Bigint *mlo;
	_Bigint *mhi;
	_Bigint *S;
	double ds;
	char *s;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  _Bigint__408_44 *p_Var6;
  _Bigint__408_44 *p_Var7;
  uint uVar8;
  char cVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double *pdVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  double dVar19;
  ulong uVar20;
  int be;
  int bbits;
  uint local_a8;
  int local_a4;
  int *local_a0;
  _Bigint__408_44 **local_9c;
  int b2;
  int b5;
  int ilim;
  int ilim0;
  int ilim1;
  int k0;
  int k_check;
  int leftright;
  int s2;
  int s5;
  int denorm;
  _Bigint__408_44 *b;
  _Bigint__408_44 *mlo;
  _Bigint__408_44 *mhi;
  _Bigint__408_44 *S;
  _Bigint__408_44 *local_5c;
  
  p_Var6 = (_Bigint__408_44 *)ptr->_result;
  local_a8 = mode;
  local_a4 = ndigits;
  local_a0 = decpt;
  local_9c = (_Bigint__408_44 **)rve;
  if (p_Var6 != (_Bigint__408_44 *)0x0) {
    p_Var6->_k = ptr->_result_k;
    p_Var6->_maxwds = 1 << (ptr->_result_k & 0x1fU);
    _Bfree(ptr,p_Var6);
    ptr->_result = (_Bigint__2_47 *)0x0;
  }
  uVar8 = (uint)((ulong)_d >> 0x20);
  if (_d >> 0x20 < 0) {
    uVar20 = _d >> 0x20 & 0x7fffffff;
    *sign = 1;
    _d = _d & 0xffffffffU | uVar20 << 0x20;
    uVar8 = (uint)uVar20;
  }
  else {
    *sign = 0;
  }
  if ((uVar8 & 0x7ff00000) == 0x7ff00000) {
    *local_a0 = 9999;
    if ((_d & 0xfffffffffffffU) == 0) {
      pcVar18 = "Infinity";
    }
    else {
      pcVar18 = "NaN";
    }
    if (local_9c == (_Bigint__408_44 **)0x0) {
      return pcVar18;
    }
    p_Var6 = (_Bigint__408_44 *)(pcVar18 + 8);
    if (pcVar18[3] == '\0') {
      p_Var6 = (_Bigint__408_44 *)(pcVar18 + 3);
    }
    *local_9c = p_Var6;
    return pcVar18;
  }
  iVar3 = dpcmp(_d,0);
  if (iVar3 == 0) {
    *local_a0 = 1;
    if (local_9c == (_Bigint__408_44 **)0x0) {
      return "0";
    }
    *local_9c = (_Bigint__408_44 *)&DAT_003ed009;
    return "0";
  }
  b = _d2b(ptr,_d,&be,&bbits);
  iVar3 = bbits;
  uVar11 = uVar8 >> 0x14 & 0x7ff;
  if (uVar11 == 0) {
    iVar15 = bbits + be;
    iVar4 = iVar15 + 0x432;
    if (iVar4 < 0x21) {
      uVar8 = (uint)_d << (-iVar4 & 0x1fU);
    }
    else {
      uVar8 = uVar8 << (-iVar4 & 0x1fU) | (uint)_d >> (iVar15 + 0x412U & 0x1f);
    }
    dVar19 = (double)(long)(int)uVar8;
    if ((long)(int)uVar8 < 0) {
      dVar19 = dVar19 + 4294967296.0;
    }
    denorm = 1;
    iVar15 = iVar15 + -1;
    dVar19 = (double)((ulong)dVar19 & 0xffffffff |
                     (long)((int)((ulong)dVar19 >> 0x20) + -0x1f00000) << 0x20);
  }
  else {
    iVar15 = uVar11 - 0x3ff;
    denorm = 0;
    dVar19 = (double)(_d & 0xffffffffU |
                     ((long)(_d & 0xffffffffU | (_d >> 0x20 & 0xfffffU) << 0x20) >> 0x20 |
                     0x3ff00000U) << 0x20);
  }
  dVar19 = (dVar19 - 1.5) * DAT_003ed010 + DAT_003ed018 + (double)(long)iVar15 * DAT_003ed020;
  iVar4 = dptoli((long)dVar19);
  uVar20 = (ulong)iVar4;
  iVar5 = dpcmp((long)dVar19,0);
  if (iVar5 < 0) {
    iVar5 = dpcmp((long)dVar19,(long)(double)uVar20);
    if (iVar5 != 0) {
      uVar20 = (long)(iVar4 + -1);
    }
  }
  k_check = 1;
  if (uVar20 < 0x17) {
    k_check = 0;
    iVar4 = dpcmp(_d,*(long *)(&__mprec_tens + (int)uVar20 * 8));
    if (iVar4 < 0) {
      uVar20 = (long)((int)uVar20 + -1);
    }
  }
  s2 = (iVar3 - iVar15) + -1;
  if (s2 < 0) {
    b2 = -s2;
    s2 = 0;
  }
  else {
    b2 = 0;
  }
  uVar8 = (uint)uVar20;
  if ((long)uVar20 < 0) {
    b5 = -uVar8;
    b2 = b2 - uVar8;
    s5 = 0;
  }
  else {
    b5 = 0;
    s2 = s2 + uVar8;
    s5 = uVar8;
  }
  if (9 < local_a8) {
    local_a8 = 0;
  }
  bVar1 = 5 < (int)local_a8;
  if (bVar1) {
    local_a8 = local_a8 - 4;
  }
  leftright = 1;
  ilim1 = -1;
  ilim = -1;
  uVar16 = (long)iVar15;
  switch(local_a8) {
  case 0:
  case 1:
    uVar16 = 0x12;
    local_a4 = 0;
    break;
  case 2:
    leftright = 0;
  case 4:
    uVar16 = 1;
    if (0 < (long)local_a4) {
      uVar16 = (long)local_a4;
    }
    local_a4 = (int)uVar16;
    ilim = local_a4;
    ilim1 = local_a4;
    break;
  case 3:
    leftright = 0;
  case 5:
    ilim1 = local_a4 + uVar8;
    ilim = ilim1 + 1;
    uVar16 = (long)ilim;
    if ((long)ilim < 1) {
      uVar16 = 1;
    }
  }
  ptr->_result_k = 0;
  iVar3 = 4;
  if (0x17 < uVar16) {
    iVar15 = 0;
    do {
      iVar3 = iVar3 * 2;
      iVar15 = iVar15 + 1;
    } while ((ulong)(long)(iVar3 + 0x14) <= uVar16);
    ptr->_result_k = iVar15;
  }
  p_Var6 = _Balloc(ptr,ptr->_result_k);
  ptr->_result = (_Bigint__2_47 *)p_Var6;
  local_5c = p_Var6;
  if ((0xe < (uint)ilim) || (bVar1)) {
LAB_002a9bf4:
    p_Var6 = local_5c;
    if ((be < 0) || (0xe < (long)uVar20)) {
      bVar1 = (int)local_a8 < 2;
      mlo = (_Bigint__408_44 *)0x0;
      mhi = (_Bigint__408_44 *)0x0;
      iVar3 = b2;
      iVar15 = b5;
      if (leftright != 0) {
        if (bVar1) {
          iVar4 = be + 0x433;
          if (denorm == 0) {
            iVar4 = 0x36 - bbits;
          }
        }
        else {
          iVar4 = ilim + -1;
          iVar15 = b5 - iVar4;
          if (b5 < iVar4) {
            iVar15 = 0;
            iVar4 = iVar4 - b5;
            b5 = b5 + iVar4;
            s5 = s5 + iVar4;
          }
          iVar4 = ilim;
          if (ilim < 0) {
            iVar4 = 0;
            iVar3 = b2 - ilim;
          }
        }
        s2 = s2 + iVar4;
        mhi = _i2b(ptr,1);
        b2 = b2 + iVar4;
      }
      if ((0 < iVar3) && (0 < s2)) {
        iVar4 = s2;
        if (iVar3 < s2) {
          iVar4 = iVar3;
        }
        s2 = s2 - iVar4;
        iVar3 = iVar3 - iVar4;
        b2 = b2 - iVar4;
      }
      if (0 < b5) {
        if (leftright == 0) {
          b = _pow5mult(ptr,b,b5);
        }
        else {
          if (0 < iVar15) {
            mhi = _pow5mult(ptr,mhi,iVar15);
            p_Var7 = _multiply(ptr,mhi,b);
            _Bfree(ptr,b);
            b = p_Var7;
          }
          if (b5 - iVar15 != 0) {
            b = _pow5mult(ptr,b,b5 - iVar15);
          }
        }
      }
      S = _i2b(ptr,1);
      if (0 < s5) {
        S = _pow5mult(ptr,S,s5);
      }
      bVar2 = false;
      if (((bVar1) && ((_d & 0xfffffffffffffU) == 0)) && ((_d >> 0x20 & 0x7ff00000U) != 0)) {
        bVar2 = true;
        b2 = b2 + 1;
        s2 = s2 + 1;
      }
      if (s5 == 0) {
        uVar8 = s2 + 1;
      }
      else {
        iVar15 = _hi0bits(S->_x[S->_wds + -1]);
        uVar8 = s2 - iVar15;
      }
      uVar8 = uVar8 & 0x1f;
      if (uVar8 != 0) {
        uVar8 = 0x20 - uVar8;
      }
      if ((int)uVar8 < 5) {
        if ((int)uVar8 < 4) {
          iVar15 = uVar8 + 0x1c;
          goto LAB_002aa030;
        }
      }
      else {
        iVar15 = uVar8 - 4;
LAB_002aa030:
        s2 = s2 + iVar15;
        b2 = b2 + iVar15;
        iVar3 = iVar3 + iVar15;
      }
      if (0 < b2) {
        b = _lshift(ptr,b,b2);
      }
      if (0 < s2) {
        S = _lshift(ptr,S,s2);
      }
      if ((k_check != 0) && (iVar15 = __mcmp(b,S), iVar15 < 0)) {
        b = _multadd(ptr,b,10,0);
        uVar20 = (ulong)((int)uVar20 + -1);
        if (leftright != 0) {
          mhi = _multadd(ptr,mhi,10,0);
        }
        ilim = ilim1;
      }
      if ((ilim < 1) && (2 < (int)local_a8)) {
        if (-1 < ilim) {
          S = _multadd(ptr,S,5,0);
          iVar3 = __mcmp(b,S);
          if (0 < iVar3) goto LAB_002aa130;
        }
        goto LAB_002aa124;
      }
      iVar15 = 1;
      if (leftright != 0) {
        if (0 < iVar3) {
          mhi = _lshift(ptr,mhi,iVar3);
        }
        mlo = mhi;
        if (bVar2) {
          mhi = _Balloc(ptr,mhi->_k);
          memcpy(&mhi->_sign,&mlo->_sign,(long)(mlo->_wds * 4 + 8));
          mhi = _lshift(ptr,mhi,1);
        }
        iVar3 = 1;
        do {
          iVar15 = quorem(b,S);
          uVar8 = iVar15 + 0x30;
          iVar4 = __mcmp(b,mlo);
          p_Var7 = __mdiff(ptr,S,mhi);
          iVar5 = 1;
          if (p_Var7->_sign == 0) {
            iVar5 = __mcmp(b,p_Var7);
          }
          _Bfree(ptr,p_Var7);
          cVar9 = (char)uVar8;
          if (((iVar5 == 0) && (local_a8 == 0)) && ((_d & 1U) == 0)) {
            if (uVar8 != 0x39) {
              *(char *)&p_Var6->_next = cVar9 + (0 < iVar4);
              goto LAB_002aa490;
            }
LAB_002aa368:
            *(undefined *)&p_Var6->_next = 0x39;
            p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
            goto LAB_002aa438;
          }
          if ((iVar4 < 0) || (((iVar4 == 0 && (local_a8 == 0)) && ((_d & 1U) == 0)))) {
            if (iVar5 < 1) {
              *(char *)&p_Var6->_next = cVar9;
              goto LAB_002aa490;
            }
            b = _lshift(ptr,b,1);
            iVar3 = __mcmp(b,S);
            if (iVar3 < 1) {
              if (iVar3 != 0) {
                *(char *)&p_Var6->_next = cVar9;
                goto LAB_002aa490;
              }
              if ((uVar8 & 1) == 0) {
                *(char *)&p_Var6->_next = cVar9;
                goto LAB_002aa490;
              }
            }
            if (iVar15 + 0x31 == 0x3a) goto LAB_002aa368;
            *(char *)&p_Var6->_next = (char)(iVar15 + 0x31);
            goto LAB_002aa490;
          }
          if (0 < iVar5) {
            if (uVar8 == 0x39) goto LAB_002aa368;
            *(char *)&p_Var6->_next = cVar9 + '\x01';
            goto LAB_002aa490;
          }
          *(char *)&p_Var6->_next = cVar9;
          p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
          if (iVar3 == ilim) goto LAB_002aa3dc;
          b = _multadd(ptr,b,10,0);
          if (mlo == mhi) {
            mlo = _multadd(ptr,mhi,10,0);
            mhi = mlo;
          }
          else {
            mlo = _multadd(ptr,mlo,10,0);
            mhi = _multadd(ptr,mhi,10,0);
          }
          iVar3 = iVar3 + 1;
        } while( true );
      }
      while( true ) {
        iVar3 = quorem(b,S);
        uVar8 = iVar3 + 0x30;
        *(char *)&p_Var6->_next = (char)uVar8;
        p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
        if (ilim <= iVar15) break;
        b = _multadd(ptr,b,10,0);
        iVar15 = iVar15 + 1;
      }
LAB_002aa3dc:
      b = _lshift(ptr,b,1);
      iVar3 = __mcmp(b,S);
      if (iVar3 < 1) {
        if (iVar3 == 0) {
          if ((uVar8 & 1) != 0) goto LAB_002aa438;
          p_Var6 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3);
        }
        else {
          p_Var6 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3);
        }
        for (; *(char *)&p_Var6->_next == '0'; p_Var6 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3))
        {
        }
LAB_002aa490:
        p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
      }
      else {
LAB_002aa438:
        do {
          p_Var6 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3);
          if (*(char *)&p_Var6->_next != '9') {
            *(char *)&p_Var6->_next = *(char *)&p_Var6->_next + '\x01';
            goto LAB_002aa490;
          }
        } while (p_Var6 != local_5c);
        uVar20 = (ulong)((int)uVar20 + 1);
        *(undefined *)&local_5c->_next = 0x31;
        p_Var6 = (_Bigint__408_44 *)((int)&local_5c->_next + 1);
      }
    }
    else {
      dVar19 = *(double *)(&__mprec_tens + (int)uVar20 * 8);
      iVar3 = 1;
      if ((-1 < local_a4) || (0 < ilim)) {
        do {
          iVar15 = dptoli((long)((double)_d / dVar19));
          dVar13 = (double)_d - (double)(long)iVar15 * dVar19;
          *(char *)&p_Var6->_next = (char)iVar15 + '0';
          p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
          if (iVar3 == ilim) {
            iVar3 = dpcmp((long)(dVar13 + dVar13),(long)dVar19);
            p_Var7 = p_Var6;
            if ((0 < iVar3) ||
               ((iVar3 = dpcmp((long)(dVar13 + dVar13),(long)dVar19), iVar3 == 0 &&
                (((long)iVar15 & 1U) != 0)))) goto LAB_002a9d28;
            break;
          }
          _d = (long)(dVar13 * 10.0);
          iVar15 = dpcmp(_d,0);
          iVar3 = iVar3 + 1;
        } while (iVar15 != 0);
        goto LAB_002aa4d4;
      }
      mhi = (_Bigint__408_44 *)0x0;
      S = (_Bigint__408_44 *)0x0;
      if ((ilim < 0) || (iVar3 = dpcmp(_d,(long)(dVar19 * 5.0)), iVar3 < 1)) goto LAB_002aa124;
LAB_002aa130:
      uVar20 = (ulong)((int)uVar20 + 1);
      p_Var6 = (_Bigint__408_44 *)((int)&local_5c->_next + 1);
      *(undefined *)&local_5c->_next = 0x31;
    }
  }
  else {
    ilim0 = ilim;
    lVar17 = 2;
    if ((long)uVar20 < 1) {
      uVar11 = -uVar8;
      dVar19 = (double)_d;
      if (uVar11 != 0) {
        uVar12 = (int)uVar11 >> 4;
        dVar19 = *(double *)(&__mprec_tens + (uVar11 & 0xf) * 8) * (double)_d;
        if (uVar12 != 0) {
          pdVar14 = (double *)&__mprec_bigtens;
          do {
            uVar11 = uVar12 & 1;
            uVar12 = (int)uVar12 >> 1;
            if (uVar11 != 0) {
              lVar17 = (long)((int)lVar17 + 1);
              dVar19 = *pdVar14 * dVar19;
            }
            pdVar14 = pdVar14 + 1;
          } while (uVar12 != 0);
        }
      }
    }
    else {
      uVar11 = (int)uVar8 >> 4;
      dVar13 = *(double *)(&__mprec_tens + (uVar8 & 0xf) * 8);
      dVar19 = (double)_d;
      if ((uVar11 & 0x10) != 0) {
        uVar11 = uVar11 & 0xf;
        lVar17 = 3;
        dVar19 = (double)_d / DAT_003ed188;
      }
      if (uVar11 != 0) {
        pdVar14 = (double *)&__mprec_bigtens;
        do {
          uVar12 = uVar11 & 1;
          uVar11 = (int)uVar11 >> 1;
          if (uVar12 != 0) {
            lVar17 = (long)((int)lVar17 + 1);
            dVar13 = dVar13 * *pdVar14;
          }
          pdVar14 = pdVar14 + 1;
        } while (uVar11 != 0);
      }
      dVar19 = dVar19 / dVar13;
    }
    k0 = uVar8;
    if (((k_check != 0) && (iVar3 = dpcmp((long)dVar19,0x3ff0000000000000), iVar3 < 0)) &&
       (0 < ilim)) {
      if (0 < ilim1) {
        uVar20 = (ulong)(int)(uVar8 - 1);
        ilim = ilim1;
        lVar17 = (long)((int)lVar17 + 1);
        dVar19 = dVar19 * 10.0;
        goto LAB_002a9918;
      }
LAB_002a9be0:
      uVar20 = (ulong)k0;
      ilim = ilim0;
      goto LAB_002a9bf4;
    }
LAB_002a9918:
    dVar13 = (double)lVar17 * dVar19 + 7.0;
    dVar13 = (double)((ulong)dVar13 & 0xffffffff |
                     (long)((int)((ulong)dVar13 >> 0x20) + -0x3400000) << 0x20);
    if (ilim != 0) {
      if (leftright != 0) {
        iVar3 = 0;
        dVar13 = 0.5 / *(double *)(p05_0 + ilim * 8 + 8) - dVar13;
        while( true ) {
          iVar15 = dptoli((long)dVar19);
          dVar19 = dVar19 - (double)(long)iVar15;
          *(char *)&p_Var6->_next = (char)iVar15 + '0';
          p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
          iVar15 = dpcmp((long)dVar19,(long)dVar13);
          if (iVar15 < 0) break;
          iVar15 = dpcmp((long)(1.0 - dVar19),(long)dVar13);
          p_Var7 = p_Var6;
          if (iVar15 < 0) goto LAB_002a9d28;
          iVar3 = iVar3 + 1;
          if (ilim <= iVar3) goto LAB_002a9be0;
          dVar13 = dVar13 * 10.0;
          dVar19 = dVar19 * 10.0;
        }
        goto LAB_002aa4d4;
      }
      dVar10 = *(double *)(p05_0 + ilim * 8 + 8);
      iVar3 = 1;
      while( true ) {
        iVar15 = dptoli((long)dVar19);
        dVar19 = dVar19 - (double)(long)iVar15;
        *(char *)&p_Var6->_next = (char)iVar15 + '0';
        p_Var7 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
        if (iVar3 == ilim) break;
        iVar3 = iVar3 + 1;
        dVar19 = dVar19 * 10.0;
        p_Var6 = p_Var7;
      }
      iVar3 = dpcmp((long)dVar19,(long)(dVar10 * dVar13 + 0.5));
      if (0 < iVar3) {
LAB_002a9d28:
        do {
          p_Var6 = p_Var7;
          p_Var7 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3);
          cVar9 = *(char *)&p_Var7->_next;
          if (*(char *)&p_Var7->_next != '9') goto LAB_002a9d58;
        } while (p_Var7 != local_5c);
        *(undefined *)&local_5c->_next = 0x30;
        cVar9 = '0';
        uVar20 = (ulong)((int)uVar20 + 1);
LAB_002a9d58:
        *(char *)&p_Var7->_next = cVar9 + '\x01';
        goto LAB_002aa4d4;
      }
      iVar3 = dpcmp((long)dVar19,(long)(0.5 - dVar10 * dVar13));
      if (iVar3 < 0) {
        for (; *(char *)&p_Var6->_next == '0'; p_Var6 = (_Bigint__408_44 *)((int)p_Var6[-1]._x + 3))
        {
        }
        p_Var6 = (_Bigint__408_44 *)((int)&p_Var6->_next + 1);
        goto LAB_002aa4d4;
      }
      goto LAB_002a9be0;
    }
    mhi = (_Bigint__408_44 *)0x0;
    S = (_Bigint__408_44 *)0x0;
    iVar3 = dpcmp((long)(dVar19 - 5.0),(long)dVar13);
    if (0 < iVar3) goto LAB_002aa130;
    iVar3 = dpcmp((long)(dVar19 - 5.0),(long)(0.0 - dVar13));
    if (-1 < iVar3) goto LAB_002a9be0;
LAB_002aa124:
    uVar20 = ~(long)local_a4;
  }
  _Bfree(ptr,S);
  if (mhi != (_Bigint__408_44 *)0x0) {
    if ((mlo != (_Bigint__408_44 *)0x0) && (mlo != mhi)) {
      _Bfree(ptr,mlo);
    }
    _Bfree(ptr,mhi);
  }
LAB_002aa4d4:
  _Bfree(ptr,b);
  *(undefined *)&p_Var6->_next = 0;
  *local_a0 = (int)uVar20 + 1;
  if (local_9c != (_Bigint__408_44 **)0x0) {
    *local_9c = p_Var6;
  }
  return (char *)local_5c;
}
