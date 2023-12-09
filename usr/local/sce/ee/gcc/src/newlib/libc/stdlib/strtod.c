// STATUS: NOT STARTED

#include "strtod.h"

double _strtod_r(_reent *ptr, char *s00, char **se) {
	int bb2;
	int bb5;
	int bbe;
	int bd2;
	int bd5;
	int bbbits;
	int bs2;
	int c;
	int dsign;
	int e1;
	int esign;
	int i;
	int j;
	int k;
	int nd;
	int nd0;
	int nf;
	int nz;
	int nz0;
	int sign;
	long int e;
	char *s;
	char *s0;
	char *s1;
	double aadj;
	double aadj1;
	long unsigned int z;
	__ULong y;
	double_union rv;
	double_union rv0;
	_Bigint *bb;
	_Bigint *bb1;
	_Bigint *bd;
	_Bigint *bd0;
	_Bigint *bs;
	_Bigint *delta;
	
  bool bVar1;
  bool bVar2;
  int iVar3;
  _Bigint__408_44 *p_Var4;
  __dmath _Var5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  ulong uVar21;
  int iVar22;
  __dmath arg_a;
  double dVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  char *pcVar27;
  int bbe;
  int bbbits;
  char **local_98;
  int sign;
  long e;
  char *s0;
  uint y;
  _Bigint__408_44 *bb;
  _Bigint__408_44 *bd;
  _Bigint__408_44 *bd0;
  _Bigint__408_44 *bs;
  _Bigint__408_44 *delta;
  int *local_5c;
  int local_58;
  
  lVar15 = 0;
  bVar2 = false;
  sign = 0;
  arg_a.d = 0;
  s0 = s00;
LAB_002aca10:
  cVar8 = *s0;
  pcVar13 = s00;
  local_98 = se;
  switch(*s0) {
  case '\0':
    goto LAB_002ad880;
  default:
    goto switchD_002aca30_caseD_1;
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case ' ':
    goto switchD_002aca30_caseD_9;
  case '+':
    break;
  case '-':
    sign = 1;
  }
  s0 = s0 + 1;
  cVar8 = *s0;
  if (*s0 == '\0') goto LAB_002ad880;
switchD_002aca30_caseD_1:
  if (cVar8 != '0') goto LAB_002aca9c;
  bVar2 = true;
  do {
    s0 = s0 + 1;
    cVar8 = *s0;
  } while (*s0 == '0');
  pcVar13 = s0;
  if (*s0 != '\0') {
LAB_002aca9c:
    uVar21 = 0;
    y = 0;
    lVar17 = 0;
    iVar3 = 0;
    lVar11 = (long)(int)cVar8;
    pcVar26 = s0;
    while ((0x2f < lVar11 && (lVar11 < 0x3a))) {
      if (iVar3 < 9) {
        y = (y * 10 + (int)lVar11) - 0x30;
      }
      else if (iVar3 < 0x10) {
        uVar21 = (lVar11 + uVar21 * 10) - 0x30;
      }
      pcVar26 = pcVar26 + 1;
      iVar3 = iVar3 + 1;
      lVar11 = (long)*pcVar26;
    }
    iVar22 = iVar3;
    if (lVar11 == 0x2e) {
      pcVar26 = pcVar26 + 1;
      lVar11 = (long)*pcVar26;
      iVar9 = (int)*pcVar26;
      lVar16 = lVar15;
      if (iVar3 != 0) goto joined_r0x002acb98;
      if (lVar11 == 0x30) {
        do {
          pcVar26 = pcVar26 + 1;
          lVar11 = (long)*pcVar26;
          lVar15 = (long)((int)lVar15 + 1);
        } while (lVar11 == 0x30);
        iVar9 = (int)*pcVar26;
      }
      if (iVar9 - 0x31U < 9) {
        lVar16 = 0;
        uVar14 = (ulong)((int)lVar11 + -0x30);
        lVar17 = lVar15;
        s0 = pcVar26;
        do {
          iVar9 = (int)lVar16;
          lVar16 = (long)(iVar9 + 1);
          if (uVar14 != 0) {
            lVar17 = (long)((int)lVar17 + iVar9 + 1);
            if (1 < lVar16) {
              do {
                bVar1 = iVar22 < 9;
                iVar22 = iVar22 + 1;
                if (bVar1) {
                  y = y * 10;
                }
                else if (iVar22 < 0x11) {
                  uVar21 = uVar21 * 10;
                }
                iVar9 = iVar9 + -1;
              } while (iVar9 != 0);
            }
            bVar1 = iVar22 < 9;
            iVar22 = iVar22 + 1;
            if (bVar1) {
              y = y * 10 + (int)uVar14;
            }
            else {
              lVar16 = 0;
              if (0x10 < iVar22) goto LAB_002acc58;
              uVar21 = uVar14 + uVar21 * 10;
            }
            lVar16 = 0;
          }
LAB_002acc58:
          pcVar26 = pcVar26 + 1;
          lVar11 = (long)*pcVar26;
          iVar9 = (int)*pcVar26;
joined_r0x002acb98:
          uVar14 = (ulong)(iVar9 + -0x30);
          lVar15 = lVar16;
        } while (uVar14 < 10);
      }
    }
    e = 0;
    if ((lVar11 == 0x65) || (pcVar13 = s00, lVar11 == 0x45)) {
      if ((iVar22 == 0) && ((lVar15 == 0 && (pcVar13 = s00, !bVar2)))) goto LAB_002ad880;
      pcVar27 = pcVar26 + 1;
      cVar8 = *pcVar27;
      lVar11 = (long)cVar8;
      bVar1 = false;
      if (lVar11 == 0x2b) {
LAB_002acccc:
        pcVar27 = pcVar26 + 2;
        cVar8 = *pcVar27;
        lVar11 = (long)cVar8;
      }
      else if (lVar11 == 0x2d) {
        bVar1 = true;
        goto LAB_002acccc;
      }
      pcVar13 = pcVar26;
      if ((int)cVar8 - 0x30U < 10) {
        if (lVar11 == 0x30) {
          do {
            pcVar27 = pcVar27 + 1;
            lVar11 = (long)*pcVar27;
          } while (lVar11 == 0x30);
          iVar9 = (int)*pcVar27;
        }
        else {
          iVar9 = (int)lVar11;
        }
        if (iVar9 - 0x31U < 9) {
          e = (long)((int)lVar11 + -0x30);
          pcVar26 = pcVar27 + 1;
          cVar8 = *pcVar26;
          while ((lVar11 = (long)cVar8, 0x2f < lVar11 && (lVar11 < 0x3a))) {
            pcVar26 = pcVar26 + 1;
            e = lVar11 + e * 10 + -0x30;
            cVar8 = *pcVar26;
          }
          if (8 < (int)pcVar26 - (int)pcVar27) {
            e = 9999999;
          }
          if (bVar1) {
            e = -e;
          }
        }
        else {
          e = 0;
          pcVar26 = pcVar27;
        }
      }
    }
    if (iVar22 == 0) {
      if ((lVar15 != 0) || (bVar2)) goto LAB_002ad884;
    }
    else {
      if (iVar3 == 0) {
        iVar3 = iVar22;
      }
      e = e - lVar17;
      iVar9 = 0x10;
      if (iVar22 < 0x11) {
        iVar9 = iVar22;
      }
      iVar25 = (int)e;
      _Var5 = (__dmath)(double)(long)(int)y;
      if ((int)y < 0) {
        _Var5 = (__dmath)((double)_Var5 + 4294967296.0);
      }
      local_58 = iVar25;
      if (9 < iVar9) {
        dVar12 = *(double *)(&lconv.currency_symbol + iVar9 * 2);
        if ((long)uVar21 < 0) {
          dVar6 = (double)__floatdidf(uVar21 & 1 | uVar21 >> 1);
          dVar6 = dVar6 + dVar6;
        }
        else {
          dVar6 = (double)__floatdidf(uVar21);
        }
        _Var5 = (__dmath)(dVar12 * (double)_Var5 + dVar6);
      }
      uVar18 = iVar25 + (iVar22 - iVar9);
      bd0 = (_Bigint__408_44 *)0x0;
      if ((int)uVar18 < 1) {
        arg_a = _Var5;
        if ((int)uVar18 < 0) {
          uVar18 = -uVar18;
          if ((uVar18 & 0xf) != 0) {
            _Var5.i = (uint  [2])(_Var5.i / *(double *)(&__mprec_tens + (uVar18 & 0xf) * 8));
          }
          uVar19 = (int)uVar18 >> 4;
          arg_a = _Var5;
          if ((uVar18 & 0xfffffff0) == 0) goto LAB_002ad164;
          if ((int)uVar19 < 0x20) {
            iVar9 = 0;
            if (1 < (int)uVar19) {
              pdVar20 = (double *)&__mprec_tinytens;
              do {
                uVar18 = uVar19 & 1;
                uVar19 = (int)uVar19 >> 1;
                if (uVar18 != 0) {
                  _Var5.i = (uint  [2])(*pdVar20 * _Var5.i);
                }
                pdVar20 = pdVar20 + 1;
                iVar9 = iVar9 + 1;
              } while (1 < (int)uVar19);
            }
            dVar12 = *(double *)(&__mprec_tinytens + iVar9 * 8);
            arg_a.i = (uint  [2])(dVar12 * _Var5.i);
            iVar9 = dpcmp(arg_a.d,0);
            if (iVar9 == 0) {
              iVar9 = dpcmp((long)(dVar12 * ((double)_Var5 + (double)_Var5)),0);
              arg_a.d = 1;
              if (iVar9 == 0) goto LAB_002ad11c;
            }
            goto LAB_002ad164;
          }
LAB_002ad11c:
          ptr->_errno = 0x22;
          arg_a.d = 0;
          se = local_98;
          goto joined_r0x002ad128;
        }
LAB_002ad164:
        bd0 = _s2b(ptr,s0,iVar3,iVar22,y);
        local_5c = &bd0->_sign;
        do {
          bd = _Balloc(ptr,bd0->_k);
          memcpy(&bd->_sign,local_5c,(long)(bd0->_wds * 4 + 8));
          bb = _d2b(ptr,arg_a.d,&bbe,&bbbits);
          bs = _i2b(ptr,1);
          if (e < 0) {
            iVar22 = 0;
            iVar3 = -local_58;
          }
          else {
            iVar3 = 0;
            iVar22 = local_58;
          }
          if (bbe < 0) {
            iVar9 = iVar22 - bbe;
            iVar25 = iVar3;
          }
          else {
            iVar25 = iVar3 + bbe;
            iVar9 = iVar22;
          }
          iVar24 = bbe + 0x433;
          if (-0x3ff < bbe + bbbits + -1) {
            iVar24 = 0x36 - bbbits;
          }
          iVar9 = iVar9 + iVar24;
          iVar24 = iVar25 + iVar24;
          iVar10 = iVar9;
          if (iVar24 < iVar9) {
            iVar10 = iVar24;
          }
          if (iVar25 < iVar10) {
            iVar10 = iVar25;
          }
          if (0 < iVar10) {
            iVar25 = iVar25 - iVar10;
            iVar24 = iVar24 - iVar10;
            iVar9 = iVar9 - iVar10;
          }
          if (0 < iVar3) {
            bs = _pow5mult(ptr,bs,iVar3);
            p_Var4 = _multiply(ptr,bs,bb);
            _Bfree(ptr,bb);
            bb = p_Var4;
          }
          if (0 < iVar24) {
            bb = _lshift(ptr,bb,iVar24);
          }
          if (0 < iVar22) {
            bd = _pow5mult(ptr,bd,iVar22);
          }
          if (0 < iVar9) {
            bd = _lshift(ptr,bd,iVar9);
          }
          if (0 < iVar25) {
            bs = _lshift(ptr,bs,iVar25);
          }
          delta = __mdiff(ptr,bb,bd);
          iVar3 = delta->_sign;
          delta->_sign = 0;
          iVar22 = __mcmp(delta,bs);
          if (iVar22 < 0) {
            if ((iVar3 == 0) && ((arg_a.d & 0xfffffffffffffU) == 0)) {
              delta = _lshift(ptr,delta,1);
              iVar3 = __mcmp(delta,bs);
              if (0 < iVar3) {
LAB_002ad224:
                arg_a.d = arg_a.d & 0xffffffffU |
                          (long)(int)((arg_a._4_4_ & 0x7ff00000) - 0x100000) << 0x20 |
                          0xfffff00000000U | 0xffffffff;
              }
            }
            goto LAB_002ad848;
          }
          if (iVar22 == 0) {
            if (iVar3 == 0) {
              if ((arg_a.d & 0xfffffffffffffU) == 0) goto LAB_002ad224;
            }
            else if ((arg_a.d & 0xfffffffffffffU) == 0xfffffffffffff) {
              arg_a.d = (arg_a.d >> 0x20 & 0x7ff00000U) + 0x100000 << 0x20;
              goto LAB_002ad848;
            }
            if ((arg_a.d & 1U) != 0) {
              if (iVar3 == 0) {
                dVar12 = (double)_ulp(arg_a.d);
                arg_a.i = (uint  [2])(arg_a.i - dVar12);
                iVar3 = dpcmp(arg_a.d,0);
                if (iVar3 == 0) goto LAB_002ad11c;
              }
              else {
                dVar12 = (double)_ulp(arg_a.d);
                arg_a.i = (uint  [2])(dVar12 + arg_a.i);
              }
            }
            goto LAB_002ad848;
          }
          dVar12 = (double)_ratio(delta,bs);
          iVar22 = dpcmp((long)dVar12,0x4000000000000000);
          if (iVar22 < 1) {
            if (iVar3 == 0) {
              if ((arg_a.d & 0xfffffffffffffU) == 0) {
                iVar22 = dpcmp((long)dVar12,0x3ff0000000000000);
                if (iVar22 < 0) {
                  dVar12 = 0.5;
                }
                else {
                  dVar12 = dVar12 * 0.5;
                }
                dVar6 = 0.0 - dVar12;
              }
              else {
                if (arg_a.d == 1) goto LAB_002ad11c;
                dVar12 = 1.0;
                dVar6 = -1.0;
              }
            }
            else {
              dVar12 = 1.0;
              dVar6 = dVar12;
            }
          }
          else {
            dVar12 = dVar12 * 0.5;
            dVar6 = dVar12;
            if (iVar3 == 0) {
              dVar6 = 0.0 - dVar12;
            }
            dVar6 = dVar6 + 0.5;
          }
          uVar21 = arg_a.d >> 0x20 & 0x7ff00000;
          y = (uint)uVar21;
          if (uVar21 == 0x7fe00000) {
            dVar23 = (double)(arg_a.d & 0xffffffffU | (long)(int)(arg_a._4_4_ + 0xfcb00000) << 0x20)
            ;
            dVar7 = (double)_ulp((long)dVar23);
            dVar23 = dVar6 * dVar7 + dVar23;
            if (((long)dVar23 >> 0x20 & 0x7ff00000U) < 0x7ca00000) {
              arg_a.d = (ulong)dVar23 & 0xffffffff |
                        (long)((int)((ulong)dVar23 >> 0x20) + 0x3500000) << 0x20;
              goto LAB_002ad578;
            }
            if (arg_a.d == 0x7fefffffffffffff) goto LAB_002aceec;
            arg_a.d = 0x7fefffffffffffff;
          }
          else {
            if ((y < 0x3400001) && (iVar22 = dpcmp((long)dVar12,0x3ff0000000000000), -1 < iVar22)) {
              iVar22 = dptoli((long)(dVar12 + 0.5));
              dVar6 = (double)(long)iVar22;
              if (iVar3 == 0) {
                dVar6 = 0.0 - dVar6;
              }
            }
            dVar7 = (double)_ulp(arg_a.d);
            arg_a.i = (uint  [2])(dVar6 * dVar7 + arg_a.i);
LAB_002ad578:
            if ((ulong)y == (arg_a.d >> 0x20 & 0x7ff00000U)) {
              lVar15 = __fixdfdi((long)dVar12);
              dVar6 = (double)__floatdidf(lVar15);
              dVar12 = dVar12 - dVar6;
              if ((iVar3 == 0) && ((arg_a.d & 0xfffffffffffffU) == 0)) {
                iVar3 = dpcmp((long)dVar12,DAT_003ed288);
                if (-1 < iVar3) goto LAB_002ad640;
              }
              else {
                iVar3 = dpcmp((long)dVar12,DAT_003ed278);
                if ((-1 < iVar3) && (iVar3 = dpcmp((long)dVar12,DAT_003ed280), iVar3 < 1))
                goto LAB_002ad640;
              }
              goto LAB_002ad848;
            }
          }
LAB_002ad640:
          _Bfree(ptr,bb);
          _Bfree(ptr,bd);
          _Bfree(ptr,bs);
          _Bfree(ptr,delta);
        } while( true );
      }
      if ((uVar18 & 0xf) != 0) {
        _Var5.i = (uint  [2])(*(double *)(&__mprec_tens + (uVar18 & 0xf) * 8) * _Var5.i);
      }
      arg_a = _Var5;
      if ((uVar18 & 0xfffffff0) == 0) goto LAB_002ad164;
      if ((int)(uVar18 & 0xfffffff0) < 0x135) {
        uVar18 = (int)uVar18 >> 4;
        if (uVar18 != 0) {
          iVar9 = 0;
          if (1 < (int)uVar18) {
            pdVar20 = (double *)&__mprec_bigtens;
            do {
              uVar19 = uVar18 & 1;
              uVar18 = (int)uVar18 >> 1;
              if (uVar19 != 0) {
                _Var5.i = (uint  [2])(*pdVar20 * _Var5.i);
              }
              pdVar20 = pdVar20 + 1;
              iVar9 = iVar9 + 1;
            } while (1 < (int)uVar18);
          }
          dVar12 = *(double *)(&__mprec_bigtens + iVar9 * 8) *
                   (double)(_Var5.d & 0xffffffffU | (long)(int)(_Var5._4_4_ + 0xfcb00000) << 0x20);
          uVar21 = (long)dVar12 >> 0x20 & 0x7ff00000;
          if (0x7ca00000 < uVar21) goto LAB_002aceec;
          if (uVar21 < 0x7c900001) {
            arg_a.d = (ulong)dVar12 & 0xffffffff |
                      (long)((int)((ulong)dVar12 >> 0x20) + 0x3500000) << 0x20;
          }
          else {
            arg_a.d = 0x7fefffffffffffff;
          }
        }
        goto LAB_002ad164;
      }
LAB_002aceec:
      ptr->_errno = 0x22;
      arg_a = __infinity[0];
      se = local_98;
joined_r0x002ad128:
      local_98 = se;
      if (bd0 == (_Bigint__408_44 *)0x0) goto LAB_002ad884;
LAB_002ad848:
      _Bfree(ptr,bb);
      _Bfree(ptr,bd);
      _Bfree(ptr,bs);
      _Bfree(ptr,bd0);
      _Bfree(ptr,delta);
      pcVar13 = pcVar26;
    }
  }
LAB_002ad880:
  pcVar26 = pcVar13;
  se = local_98;
LAB_002ad884:
  if (se != (char **)0x0) {
    *se = pcVar26;
  }
  if (sign != 0) {
    arg_a.i = (uint  [2])(0.0 - arg_a.i);
  }
  return arg_a.d;
switchD_002aca30_caseD_9:
  s0 = s0 + 1;
  goto LAB_002aca10;
}

double strtod(char *s00, char **se) {
  long lVar1;
  
  lVar1 = _strtod_r(_impure_ptr,s00,se);
  return lVar1;
}

float strtodf(char *s00, char **se) {
  double dVar1;
  
  dVar1 = (double)strtod(s00,se);
  return (float)dVar1;
}
