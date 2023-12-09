// STATUS: NOT STARTED

#include "refill.h"

static int lflush(FILE *fp) {
  int iVar1;
  
  if ((fp->_flags & 9) == 9) {
    iVar1 = fflush(fp);
    return iVar1;
  }
  return 0;
}

int __srefill(FILE *fp) {
  _reent__2_83 *p_Var1;
  _reent__2_83 *s;
  uchar *puVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  
  s = _impure_ptr;
  p_Var1 = fp->_data;
  if (p_Var1 == (_reent__2_83 *)0x0) {
    fp->_data = _impure_ptr;
    iVar3 = s->__sdidinit;
  }
  else {
    iVar3 = p_Var1->__sdidinit;
    s = p_Var1;
  }
  if (iVar3 == 0) {
    __sinit(s);
    uVar5 = fp->_flags;
  }
  else {
    uVar5 = fp->_flags;
  }
  iVar3 = -1;
  fp->_r = 0;
  if ((uVar5 & 0x20) == 0) {
    if ((uVar5 & 4) == 0) {
      if ((uVar5 & 0x10) == 0) {
        return -1;
      }
      if ((uVar5 & 8) != 0) {
        iVar3 = fflush(fp);
        if (iVar3 != 0) {
          return -1;
        }
        fp->_w = 0;
        uVar5 = fp->_flags & 0xfff7;
        fp->_lbfsize = 0;
        fp->_flags = uVar5;
      }
      fp->_flags = uVar5 | 4;
    }
    else {
      puVar2 = (fp->_ub)._base;
      if (puVar2 != (uchar *)0x0) {
        if (puVar2 == fp->_ubuf) {
          iVar3 = fp->_ur;
        }
        else {
          _free_r(fp->_data,puVar2);
          iVar3 = fp->_ur;
        }
        (fp->_ub)._base = (uchar *)0x0;
        fp->_r = iVar3;
        if (iVar3 != 0) {
          fp->_p = fp->_up;
          return 0;
        }
      }
    }
    if ((fp->_bf)._base == (uchar *)0x0) {
      __smakebuf(fp);
      uVar5 = fp->_flags;
    }
    else {
      uVar5 = fp->_flags;
    }
    if ((uVar5 & 3) != 0) {
      _fwalk(fp->_data,lflush);
    }
    puVar2 = (fp->_bf)._base;
    fp->_p = puVar2;
    lVar4 = (*(code *)fp->_read)(fp->_cookie,puVar2,(fp->_bf)._size);
    iVar3 = 0;
    uVar5 = fp->_flags & 0xdfff;
    fp->_r = (int)lVar4;
    fp->_flags = uVar5;
    if (lVar4 < 1) {
      if (lVar4 == 0) {
        uVar5 = uVar5 | 0x20;
      }
      else {
        uVar5 = uVar5 | 0x40;
        fp->_r = 0;
      }
      fp->_flags = uVar5;
      iVar3 = -1;
    }
  }
  return iVar3;
}
