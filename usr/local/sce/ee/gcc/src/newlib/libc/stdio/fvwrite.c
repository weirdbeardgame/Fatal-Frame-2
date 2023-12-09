// STATUS: NOT STARTED

#include "fvwrite.h"

int __sfvwrite(FILE *fp, __suio *uio) {
	size_t len;
	char *p;
	__siov *iov;
	int w;
	int s;
	char *nl;
	int nlknown;
	int nldist;
	
  uint *puVar1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  void *pvVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  ulong __n_00;
  void *unaff_s3_lo;
  __siov *p_Var11;
  ulong unaff_s5;
  size_t __n;
  
  if (uio->uio_resid != 0) {
    uVar7 = fp->_flags;
    if (((uVar7 & 8) == 0) || ((fp->_bf)._base == (uchar *)0x0)) {
      iVar3 = __swsetup(fp);
      if (iVar3 != 0) {
        return -1;
      }
      uVar7 = fp->_flags;
    }
    p_Var11 = uio->uio_iov;
    __n_00 = 0;
    if ((uVar7 & 2) == 0) {
      bVar2 = false;
      if ((uVar7 & 1) == 0) {
joined_r0x002aaf80:
        while (__n_00 == 0) {
          puVar1 = &p_Var11->iov_len;
          unaff_s3_lo = p_Var11->iov_base;
          p_Var11 = p_Var11 + 1;
          __n_00 = (ulong)(int)*puVar1;
        }
        iVar3 = fp->_w;
        uVar10 = (ulong)iVar3;
        iVar9 = (int)__n_00;
        if ((uVar7 & 0x200) == 0) {
          puVar4 = fp->_p;
          if ((fp->_bf)._base < puVar4) {
            if (__n_00 <= uVar10) {
              iVar3 = (fp->_bf)._size;
              goto LAB_002ab030;
            }
            memmove(puVar4,unaff_s3_lo,uVar10);
            fp->_p = fp->_p + iVar3;
            iVar3 = fflush(fp);
            if (iVar3 != 0) {
              uVar7 = fp->_flags;
              goto LAB_002ab218;
            }
            iVar3 = uio->uio_resid;
          }
          else {
            iVar3 = (fp->_bf)._size;
LAB_002ab030:
            if (__n_00 < (ulong)(long)iVar3) {
              memmove(puVar4,unaff_s3_lo,__n_00);
              iVar3 = fp->_w - iVar9;
              puVar4 = fp->_p + iVar9;
              goto LAB_002ab084;
            }
            uVar10 = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo,(long)iVar3);
            if ((long)uVar10 < 1) {
              uVar7 = fp->_flags;
              goto LAB_002ab218;
            }
            iVar3 = uio->uio_resid;
          }
        }
        else {
          if (__n_00 < uVar10) {
            uVar10 = __n_00;
          }
          memmove(fp->_p,unaff_s3_lo,uVar10);
          iVar3 = fp->_w - (int)uVar10;
          puVar4 = fp->_p + (int)uVar10;
LAB_002ab084:
          fp->_w = iVar3;
          fp->_p = puVar4;
          iVar3 = uio->uio_resid;
          uVar10 = __n_00;
        }
        iVar8 = (int)uVar10;
        unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar8);
        __n_00 = (ulong)(iVar9 - iVar8);
        uio->uio_resid = iVar3 - iVar8;
        if (iVar3 - iVar8 != 0) {
          uVar7 = fp->_flags;
          goto joined_r0x002aaf80;
        }
      }
      else {
        do {
          if (__n_00 == 0) {
            bVar2 = false;
            do {
              __n_00 = (ulong)(int)p_Var11->iov_len;
              unaff_s3_lo = p_Var11->iov_base;
              p_Var11 = p_Var11 + 1;
            } while (__n_00 == 0);
          }
          if (bVar2) {
            puVar4 = fp->_p;
          }
          else {
            pvVar5 = memchr(unaff_s3_lo,10,__n_00);
            iVar3 = (int)__n_00;
            if (pvVar5 != (void *)0x0) {
              iVar3 = (int)pvVar5 - (int)unaff_s3_lo;
            }
            unaff_s5 = (ulong)(iVar3 + 1);
            bVar2 = true;
            puVar4 = fp->_p;
          }
          uVar10 = __n_00;
          if (unaff_s5 <= __n_00) {
            uVar10 = unaff_s5;
          }
          iVar3 = (fp->_bf)._size;
          iVar9 = fp->_w + iVar3;
          __n = (size_t)iVar9;
          iVar8 = (int)unaff_s5;
          if (((fp->_bf)._base < puVar4) && ((long)__n < (long)uVar10)) {
            memmove(puVar4,unaff_s3_lo,__n);
            fp->_p = fp->_p + iVar9;
            iVar3 = fflush(fp);
            unaff_s5 = (ulong)(iVar8 - iVar9);
            if (iVar3 != 0) {
              uVar7 = fp->_flags;
              goto LAB_002ab218;
            }
          }
          else if ((long)uVar10 < (long)iVar3) {
            memmove(puVar4,unaff_s3_lo,uVar10);
            iVar3 = (int)uVar10;
            fp->_w = fp->_w - iVar3;
            fp->_p = fp->_p + iVar3;
            unaff_s5 = (ulong)(iVar8 - iVar3);
            __n = uVar10;
          }
          else {
            __n = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo,(long)iVar3);
            unaff_s5 = (ulong)(iVar8 - (int)__n);
            if ((long)__n < 1) {
              uVar7 = fp->_flags;
              goto LAB_002ab218;
            }
          }
          if (unaff_s5 == 0) {
            iVar3 = fflush(fp);
            if (iVar3 != 0) {
              uVar7 = fp->_flags;
              goto LAB_002ab218;
            }
            bVar2 = false;
            iVar3 = uio->uio_resid;
          }
          else {
            iVar3 = uio->uio_resid;
          }
          iVar9 = (int)__n;
          unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar9);
          __n_00 = (ulong)((int)__n_00 - iVar9);
          uio->uio_resid = iVar3 - iVar9;
        } while (iVar3 - iVar9 != 0);
      }
    }
    else {
      do {
        while (__n_00 == 0) {
          puVar1 = &p_Var11->iov_len;
          unaff_s3_lo = p_Var11->iov_base;
          p_Var11 = p_Var11 + 1;
          __n_00 = (ulong)(int)*puVar1;
        }
        uVar10 = 0x400;
        if (__n_00 < 0x401) {
          uVar10 = __n_00;
        }
        lVar6 = (*(code *)fp->_write)(fp->_cookie,unaff_s3_lo,uVar10);
        if (lVar6 < 1) {
          uVar7 = fp->_flags;
LAB_002ab218:
          fp->_flags = uVar7 | 0x40;
          return -1;
        }
        iVar3 = (int)lVar6;
        unaff_s3_lo = (void *)((int)unaff_s3_lo + iVar3);
        __n_00 = (ulong)((int)__n_00 - iVar3);
        iVar3 = uio->uio_resid - iVar3;
        uio->uio_resid = iVar3;
      } while (iVar3 != 0);
    }
  }
  return 0;
}
