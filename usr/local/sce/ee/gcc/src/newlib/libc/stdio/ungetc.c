// STATUS: NOT STARTED

#include "ungetc.h"

int __submore(FILE *fp) {
	int i;
	unsigned char *p;
	
  uchar uVar1;
  int iVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  int iVar6;
  
  puVar4 = (fp->_ub)._base;
  if (puVar4 == fp->_ubuf) {
    puVar4 = (uchar *)_malloc_r(fp->_data,0x400);
    iVar6 = -1;
    if (puVar4 != (uchar *)0x0) {
      (fp->_ub)._base = puVar4;
      (fp->_ub)._size = 0x400;
      iVar6 = 2;
      puVar5 = fp->_ubuf + 2;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + -1;
        puVar3 = puVar4 + 0x3fd + iVar6;
        iVar6 = iVar6 + -1;
        *puVar3 = uVar1;
      } while (-1 < iVar6);
      fp->_p = puVar4 + 0x3fd;
      iVar6 = 0;
    }
  }
  else {
    iVar2 = (fp->_ub)._size;
    puVar4 = (uchar *)_realloc_r(fp->_data,puVar4,iVar2 << 1);
    iVar6 = -1;
    if (puVar4 != (uchar *)0x0) {
      memcpy(puVar4 + iVar2,puVar4,(long)iVar2);
      fp->_p = puVar4 + iVar2;
      (fp->_ub)._size = iVar2 << 1;
      iVar6 = 0;
      (fp->_ub)._base = puVar4;
    }
  }
  return iVar6;
}

int ungetc(int c, FILE *fp) {
  _reent__2_83 *p_Var1;
  _reent__2_83 *s;
  uchar *puVar2;
  ushort uVar3;
  int iVar4;
  uchar *puVar5;
  
  s = _impure_ptr;
  if (c == -1) {
    return -1;
  }
  p_Var1 = fp->_data;
  if (p_Var1 == (_reent__2_83 *)0x0) {
    fp->_data = _impure_ptr;
    iVar4 = s->__sdidinit;
  }
  else {
    iVar4 = p_Var1->__sdidinit;
    s = p_Var1;
  }
  if (iVar4 == 0) {
    __sinit(s);
    uVar3 = fp->_flags;
  }
  else {
    uVar3 = fp->_flags;
  }
  fp->_flags = uVar3 & 0xffdf;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 0x10) == 0) {
      return -1;
    }
    if ((uVar3 & 8) == 0) {
      uVar3 = fp->_flags;
    }
    else {
      iVar4 = fflush(fp);
      if (iVar4 != 0) {
        return -1;
      }
      fp->_w = 0;
      fp->_lbfsize = 0;
      fp->_flags = fp->_flags & 0xfff7;
      uVar3 = fp->_flags;
    }
    fp->_flags = uVar3 | 4;
  }
  if ((fp->_ub)._base == (uchar *)0x0) {
    puVar5 = (fp->_bf)._base;
    puVar2 = fp->_p;
    if (puVar5 == (uchar *)0x0) {
      iVar4 = fp->_r;
    }
    else {
      iVar4 = fp->_r;
      if ((puVar5 < puVar2) && ((uint)puVar2[-1] == (c & 0xffU))) {
        fp->_p = puVar2 + -1;
        goto LAB_002adda8;
      }
    }
    fp->_ur = iVar4;
    fp->_up = puVar2;
    (fp->_ub)._base = fp->_ubuf;
    (fp->_ub)._size = 3;
    fp->_p = fp->_ubuf + 2;
    fp->_ubuf[2] = (uchar)c;
    fp->_r = 1;
  }
  else {
    if (fp->_r < (fp->_ub)._size) {
      puVar5 = fp->_p;
    }
    else {
      iVar4 = __submore(fp);
      if (iVar4 != 0) {
        return -1;
      }
      puVar5 = fp->_p;
    }
    fp->_p = puVar5 + -1;
    puVar5[-1] = (uchar)c;
    iVar4 = fp->_r;
LAB_002adda8:
    fp->_r = iVar4 + 1;
  }
  return c & 0xffU;
}
