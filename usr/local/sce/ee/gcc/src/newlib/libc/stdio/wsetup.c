// STATUS: NOT STARTED

#include "wsetup.h"

int __swsetup(FILE *fp) {
  _reent__2_83 *p_Var1;
  _reent__2_83 *s;
  int iVar2;
  ushort uVar3;
  uchar *puVar4;
  
  s = _impure_ptr;
  p_Var1 = fp->_data;
  if (p_Var1 == (_reent__2_83 *)0x0) {
    fp->_data = _impure_ptr;
    iVar2 = s->__sdidinit;
  }
  else {
    iVar2 = p_Var1->__sdidinit;
    s = p_Var1;
  }
  if (iVar2 == 0) {
    __sinit(s);
    uVar3 = fp->_flags;
  }
  else {
    uVar3 = fp->_flags;
  }
  if ((uVar3 & 8) == 0) {
    if ((uVar3 & 0x10) == 0) {
      return -1;
    }
    if ((uVar3 & 4) == 0) {
      puVar4 = (fp->_bf)._base;
    }
    else {
      puVar4 = (fp->_ub)._base;
      if (puVar4 != (uchar *)0x0) {
        if (puVar4 == fp->_ubuf) {
          (fp->_ub)._base = (uchar *)0x0;
        }
        else {
          _free_r(fp->_data,puVar4);
          uVar3 = fp->_flags;
          (fp->_ub)._base = (uchar *)0x0;
        }
      }
      puVar4 = (fp->_bf)._base;
      uVar3 = uVar3 & 0xffdb;
      fp->_r = 0;
      fp->_flags = uVar3;
      fp->_p = puVar4;
    }
    fp->_flags = uVar3 | 8;
  }
  else {
    puVar4 = (fp->_bf)._base;
  }
  if (puVar4 == (uchar *)0x0) {
    __smakebuf(fp);
    uVar3 = fp->_flags;
  }
  else {
    uVar3 = fp->_flags;
  }
  if ((uVar3 & 1) == 0) {
    iVar2 = 0;
    if ((uVar3 & 2) == 0) {
      iVar2 = (fp->_bf)._size;
    }
    fp->_w = iVar2;
  }
  else {
    iVar2 = (fp->_bf)._size;
    fp->_w = 0;
    fp->_lbfsize = -iVar2;
  }
  return 0;
}
