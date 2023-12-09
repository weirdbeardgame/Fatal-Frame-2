// STATUS: NOT STARTED

#include "findfp.h"

static void std(FILE *ptr, int flags, int file, _reent *data) {
  ptr->_data = data;
  ptr->_flags = (ushort)flags;
  ptr->_file = (ushort)file;
  ptr->_read = __sread;
  ptr->_write = __swrite;
  ptr->_seek = __sseek;
  ptr->_close = __sclose;
  ptr->_p = (uchar *)0x0;
  ptr->_r = 0;
  ptr->_w = 0;
  (ptr->_bf)._base = (uchar *)0x0;
  (ptr->_bf)._size = 0;
  ptr->_lbfsize = 0;
  ptr->_cookie = ptr;
  return;
}

_glue* __sfmoreglue(_reent *d, int n) {
	_glue *g;
	FILE *p;
	
  _glue *p_Var1;
  
  p_Var1 = (_glue *)_malloc_r(d,n * 0x58 + 0xc);
  if (p_Var1 != (_glue *)0x0) {
    p_Var1->_niobs = n;
    p_Var1->_next = (_glue *)0x0;
    p_Var1->_iobs = (__sFILE *)(p_Var1 + 1);
    memset((__sFILE *)(p_Var1 + 1),0,(long)(n * 0x58));
  }
  return p_Var1;
}

FILE* __sfp(_reent *d) {
	FILE *fp;
	int n;
	_glue *g;
	
  int iVar1;
  _glue *p_Var2;
  __sFILE *p_Var3;
  _glue *p_Var4;
  
  p_Var2 = &d->__sglue;
  if (d->__sdidinit == 0) {
    __sinit(d);
  }
  do {
    do {
      p_Var4 = p_Var2;
      iVar1 = p_Var4->_niobs;
      p_Var3 = p_Var4->_iobs;
      while (iVar1 = iVar1 + -1, -1 < iVar1) {
        if (p_Var3->_flags == 0) {
          p_Var3->_file = 0xffff;
          p_Var3->_data = d;
          p_Var3->_p = (uchar *)0x0;
          p_Var3->_w = 0;
          p_Var3->_r = 0;
          (p_Var3->_bf)._base = (uchar *)0x0;
          (p_Var3->_bf)._size = 0;
          p_Var3->_lbfsize = 0;
          (p_Var3->_ub)._base = (uchar *)0x0;
          (p_Var3->_ub)._size = 0;
          (p_Var3->_lb)._base = (uchar *)0x0;
          (p_Var3->_lb)._size = 0;
          p_Var3->_flags = 1;
          return p_Var3;
        }
        p_Var3 = p_Var3 + 1;
      }
      p_Var2 = p_Var4->_next;
    } while (p_Var4->_next != (_glue *)0x0);
    p_Var2 = __sfmoreglue(d,4);
    p_Var4->_next = p_Var2;
  } while (p_Var2 != (_glue *)0x0);
  d->_errno = 0xc;
  return (__sFILE *)0x0;
}

void _cleanup_r(_reent *ptr) {
  _fwalk(ptr,fflush);
  return;
}

void _cleanup() {
  _cleanup_r(_impure_ptr);
  return;
}

void __sinit(_reent *s) {
  s->__cleanup = _cleanup_r;
  s->__sdidinit = 1;
  std(s->__sf,4,0,s);
  std(s->__sf + 1,9,1,s);
  std(s->__sf + 2,10,2,s);
  (s->__sglue)._next = (_glue *)0x0;
  (s->__sglue)._iobs = s->__sf;
  (s->__sglue)._niobs = 3;
  return;
}
