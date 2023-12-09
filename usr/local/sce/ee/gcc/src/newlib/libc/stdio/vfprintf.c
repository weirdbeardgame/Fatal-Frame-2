// STATUS: NOT STARTED

#include "vfprintf.h"

static int __sprint(FILE *fp, __suio *uio) {
  int iVar1;
  
  iVar1 = 0;
  if (uio->uio_resid == 0) {
    uio->uio_iovcnt = 0;
  }
  else {
    iVar1 = __sfvwrite(fp,uio);
    uio->uio_iovcnt = 0;
    uio->uio_resid = 0;
  }
  return iVar1;
}

static int __sbprintf(FILE *fp, char *fmt, va_list ap) {
	int ret;
	FILE fake;
	unsigned char buf[1024];
	
  int iVar1;
  int iVar2;
  __sFILE fake;
  uchar buf [1024];
  
  fake._p = buf;
  fake._file = fp->_file;
  fake._data = fp->_data;
  fake._flags = fp->_flags & 0xfffd;
  fake._cookie = fp->_cookie;
  fake._write = fp->_write;
  fake._bf._size = 0x400;
  fake._w = 0x400;
  fake._lbfsize = 0;
  fake._bf._base = fake._p;
  iVar1 = vfiprintf(&fake,fmt,ap);
  if ((-1 < iVar1) && (iVar2 = fflush(&fake), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((fake._flags & 0x40) != 0) {
    fp->_flags = fp->_flags | 0x40;
  }
  return iVar1;
}

int vfiprintf(FILE *fp, char *fmt0, va_list ap) {
  _reent__2_83 *p_Var1;
  int iVar2;
  _reent__2_83 *s;
  
  p_Var1 = _impure_ptr;
  s = fp->_data;
  if (fp->_data == (_reent__2_83 *)0x0) {
    fp->_data = _impure_ptr;
    s = p_Var1;
  }
  if (s->__sdidinit == 0) {
    __sinit(s);
    s = fp->_data;
  }
  iVar2 = _vfiprintf_r(s,fp,fmt0,ap);
  return iVar2;
}

int _vfiprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap) {
	char *fmt;
	int ch;
	int n;
	int m;
	char *cp;
	__siov *iovp;
	int flags;
	int ret;
	int width;
	int prec;
	char sign;
	wchar_t wc;
	u_long _uquad;
	enum {
		OCT = 0,
		DEC = 1,
		HEX = 2
	} base;
	int dprec;
	int realsz;
	int size;
	char *xdigs;
	__suio uio;
	__siov iov[8];
	char buf[40];
	char ox[2];
	int state;
	static char blanks[16] = {
		/* [0] = */ 32,
		/* [1] = */ 32,
		/* [2] = */ 32,
		/* [3] = */ 32,
		/* [4] = */ 32,
		/* [5] = */ 32,
		/* [6] = */ 32,
		/* [7] = */ 32,
		/* [8] = */ 32,
		/* [9] = */ 32,
		/* [10] = */ 32,
		/* [11] = */ 32,
		/* [12] = */ 32,
		/* [13] = */ 32,
		/* [14] = */ 32,
		/* [15] = */ 32
	};
	static char zeroes[16] = {
		/* [0] = */ 48,
		/* [1] = */ 48,
		/* [2] = */ 48,
		/* [3] = */ 48,
		/* [4] = */ 48,
		/* [5] = */ 48,
		/* [6] = */ 48,
		/* [7] = */ 48,
		/* [8] = */ 48,
		/* [9] = */ 48,
		/* [10] = */ 48,
		/* [11] = */ 48,
		/* [12] = */ 48,
		/* [13] = */ 48,
		/* [14] = */ 48,
		/* [15] = */ 48
	};
	char *p;
	
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  ulong u;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  char *__s;
  ulong *puVar20;
  long *plVar21;
  size_t sVar22;
  __siov *p_Var23;
  __suio uio;
  __siov iov [8];
  char buf [40];
  long lStack_c8;
  char ox [2];
  char sign;
  int wc;
  int state;
  __sFILE *local_a4;
  int ret;
  int dprec;
  int size;
  char *xdigs;
  uint local_90;
  void *local_80;
  undefined4 uStack_7c;
  undefined auStack_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  state = 0;
  uVar1 = fp->_flags;
  local_a4 = fp;
  if (((uVar1 & 8) == 0) || ((fp->_bf)._base == (uchar *)0x0)) {
    iVar6 = __swsetup(fp);
    if (iVar6 != 0) {
      return -1;
    }
    uVar1 = local_a4->_flags;
  }
  uio.uio_iov = iov;
  if (((uVar1 & 0x1a) == 10) && (-1 < (short)local_a4->_file)) {
    iVar6 = __sbprintf(local_a4,fmt0,ap);
    return iVar6;
  }
  uio.uio_resid = 0;
  uio.uio_iovcnt = 0;
  ret = 0;
  p_Var23 = uio.uio_iov;
  pcVar19 = fmt0;
LAB_002a5b58:
  iVar6 = _mbtowc_r(_impure_ptr,&wc,fmt0,__mb_cur_max,&state);
  if (0 < iVar6) goto code_r0x002a5b84;
  uVar17 = (int)fmt0 - (int)pcVar19;
  goto LAB_002a5b98;
code_r0x002a5b84:
  fmt0 = fmt0 + iVar6;
  if (wc == 0x25) {
    fmt0 = fmt0 + -1;
    uVar17 = (int)fmt0 - (int)pcVar19;
LAB_002a5b98:
    if (uVar17 != 0) {
      p_Var23->iov_len = uVar17;
      p_Var23->iov_base = pcVar19;
      p_Var23 = p_Var23 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + uVar17;
      if (7 < uio.uio_iovcnt) {
        iVar7 = __sprint(local_a4,&uio);
        if (iVar7 != 0) goto LAB_002a6644;
        p_Var23 = iov;
      }
      ret = ret + uVar17;
    }
    if (0 < iVar6) {
      sign = '\0';
      fmt0 = fmt0 + 1;
      dprec = 0;
      uVar17 = 0;
      bVar5 = false;
      bVar4 = false;
      bVar3 = false;
      bVar2 = false;
      plVar15 = (long *)0x0;
      sVar22 = 0xffffffffffffffff;
LAB_002a5c14:
      cVar11 = *fmt0;
LAB_002a5c18:
      fmt0 = fmt0 + 1;
      lVar18 = (long)(int)cVar11;
LAB_002a5c24:
      iVar6 = (int)lVar18;
LAB_002a5c28:
      iVar7 = (int)sVar22;
      pcVar19 = fmt0;
      switch(iVar6) {
      case 0x20:
        if (sign == '\0') {
          sign = ' ';
          goto LAB_002a5c8c;
        }
        cVar11 = *fmt0;
        goto LAB_002a5c18;
      default:
        __s = buf;
        if (lVar18 == 0) goto LAB_002a6624;
        size = 1;
        buf[0] = (char)lVar18;
        puVar20 = (ulong *)ap;
        iVar7 = size;
        break;
      case 0x23:
        bVar4 = true;
        goto LAB_002a5c14;
      case 0x2a:
                    /* WARNING: Load size is inaccurate */
        plVar15 = *ap;
        ap = (void *)((int)ap + 8);
        if ((int)plVar15 < 0) {
          plVar15 = (long *)-(int)plVar15;
          goto switchD_002a5c40_caseD_2d;
        }
        goto LAB_002a5c14;
      case 0x2b:
        sign = '+';
LAB_002a5c8c:
        cVar11 = *fmt0;
        goto LAB_002a5c18;
      case 0x2d:
switchD_002a5c40_caseD_2d:
        uVar17 = uVar17 | 4;
        goto LAB_002a5c14;
      case 0x2e:
        cVar11 = *fmt0;
        lVar18 = (long)cVar11;
        fmt0 = fmt0 + 1;
        if (lVar18 != 0x2a) goto LAB_002a5cc8;
                    /* WARNING: Load size is inaccurate */
        sVar22 = (size_t)(int)*ap;
        ap = (void *)((int)ap + 8);
        if ((long)sVar22 < -1) {
          sVar22 = 0xffffffffffffffff;
        }
        goto LAB_002a5c14;
      case 0x30:
        uVar17 = uVar17 | 0x80;
        goto LAB_002a5c14;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_002a5c40_caseD_31;
      case 0x44:
        bVar2 = true;
      case 100:
      case 0x69:
        if (bVar2) {
                    /* WARNING: Load size is inaccurate */
          u = *ap;
        }
        else if (bVar3) {
                    /* WARNING: Load size is inaccurate */
          u = (ulong)(short)*ap;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          u = (ulong)(int)*ap;
        }
        iVar6 = 1;
        if ((long)u < 0) {
          u = -u;
          sign = '-';
        }
LAB_002a5fe8:
        puVar20 = (ulong *)((int)ap + 8);
        if (-1 < (long)sVar22) {
          uVar17 = uVar17 & 0xffffff7f;
        }
        __s = (char *)&lStack_c8;
        dprec = iVar7;
        if ((u == 0) && (iVar7 = (int)&uio - (int)__s, iVar7 == 0)) goto LAB_002a60fc;
        if (iVar6 == 1) goto LAB_002a60ac;
        if (iVar6 == 0) goto LAB_002a6040;
        if (iVar6 == 2) goto LAB_002a60d0;
        __s = "bug in vfprintf: bad base";
        sVar22 = strlen("bug in vfprintf: bad base");
        size = (int)sVar22;
        goto LAB_002a6120;
      case 0x4f:
        bVar2 = true;
      case 0x6f:
        if (bVar2) {
                    /* WARNING: Load size is inaccurate */
          u = *ap;
        }
        else if (bVar3) {
                    /* WARNING: Load size is inaccurate */
          u = (ulong)*ap;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          u = ZEXT48(*ap);
        }
        iVar6 = 0;
LAB_002a5fe4:
        sign = '\0';
        goto LAB_002a5fe8;
      case 0x55:
        bVar2 = true;
      case 0x75:
        if (bVar2) {
                    /* WARNING: Load size is inaccurate */
          u = *ap;
        }
        else if (bVar3) {
                    /* WARNING: Load size is inaccurate */
          u = (ulong)*ap;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          u = ZEXT48(*ap);
        }
        iVar6 = 1;
        goto LAB_002a5fe4;
      case 0x58:
        xdigs = "0123456789ABCDEF";
        goto LAB_002a5f90;
      case 99:
        puVar20 = (ulong *)((int)ap + 8);
                    /* WARNING: Load size is inaccurate */
        buf[0] = *ap;
        __s = buf;
        size = 1;
        iVar7 = size;
        break;
      case 0x68:
        bVar3 = true;
        goto LAB_002a5c14;
      case 0x6c:
        cVar11 = *fmt0;
        if (*fmt0 != 'l') {
          bVar2 = true;
          goto LAB_002a5c18;
        }
        fmt0 = fmt0 + 1;
        goto LAB_002a5c14;
      case 0x6e:
        if (bVar2) {
                    /* WARNING: Load size is inaccurate */
          **ap = (long)ret;
          ap = (ulong *)((int)ap + 8);
        }
        else if (bVar3) {
                    /* WARNING: Load size is inaccurate */
          *(short *)*ap = (short)ret;
          ap = (ulong *)((int)ap + 8);
        }
        else {
                    /* WARNING: Load size is inaccurate */
          *(int *)*ap = ret;
          ap = (ulong *)((int)ap + 8);
        }
        goto LAB_002a5b58;
      case 0x70:
                    /* WARNING: Load size is inaccurate */
        u = (ulong)(int)*ap;
        bVar5 = true;
        xdigs = "0123456789abcdef";
        iVar6 = 2;
        lVar18 = 0x78;
        goto LAB_002a5fe4;
      case 0x71:
        goto LAB_002a5c14;
      case 0x73:
                    /* WARNING: Load size is inaccurate */
        __s = *ap;
        puVar20 = (ulong *)((int)ap + 8);
        if ((long *)__s == (long *)0x0) {
          __s = "(null)";
        }
        if ((long)sVar22 < 0) {
          sVar22 = strlen(__s);
          iVar7 = (int)sVar22;
        }
        else {
          pvVar8 = memchr(__s,0,sVar22);
          size = (int)pvVar8 - (int)__s;
          if ((pvVar8 != (void *)0x0) && ((long)size <= (long)sVar22)) {
            sign = '\0';
            goto LAB_002a6120;
          }
        }
        break;
      case 0x78:
        xdigs = "0123456789abcdef";
LAB_002a5f90:
        if (bVar2) {
                    /* WARNING: Load size is inaccurate */
          u = *ap;
        }
        else if (bVar3) {
                    /* WARNING: Load size is inaccurate */
          u = (ulong)*ap;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          u = ZEXT48(*ap);
        }
        iVar6 = 2;
        if ((bVar4) && (u != 0)) {
          bVar5 = true;
        }
        goto LAB_002a5fe4;
      }
      size = iVar7;
      sign = '\0';
      goto LAB_002a6120;
    }
LAB_002a6624:
    if (uio.uio_resid != 0) {
      __sprint(local_a4,&uio);
    }
LAB_002a6644:
    iVar6 = -1;
    if ((local_a4->_flags & 0x40) == 0) {
      iVar6 = ret;
    }
    return iVar6;
  }
  goto LAB_002a5b58;
LAB_002a60ac:
  for (; 9 < u; u = __udivdi3(u,10)) {
    uVar9 = __umoddi3(u,10);
    __s = (char *)((int)__s + -1);
    *__s = (char)uVar9 + '0';
  }
  __s = (char *)((int)__s + -1);
  *__s = (char)u + '0';
  goto LAB_002a60f8;
LAB_002a6040:
  do {
    plVar21 = (long *)__s;
    uVar9 = u & 7;
    u = u >> 3;
    lVar10 = uVar9 + 0x30;
    __s = (char *)((int)plVar21 + -1);
    *__s = (char)lVar10;
  } while (u != 0);
  if (bVar4) {
    if (lVar10 == 0x30) {
      iVar7 = (int)&uio - (int)__s;
      goto LAB_002a60fc;
    }
    __s = (char *)((int)plVar21 + -2);
    *__s = '0';
  }
LAB_002a60f8:
  iVar7 = (int)&uio - (int)__s;
LAB_002a60fc:
  size = iVar7 + 0x78;
LAB_002a6120:
  iVar6 = size;
  if (size < dprec) {
    iVar6 = dprec;
  }
  if (sign == '\0') {
    plVar21 = (long *)((uint)bVar5 * 2 + iVar6);
  }
  else {
    plVar21 = (long *)(iVar6 + 1);
  }
  local_90 = uVar17;
  if (uVar17 == 0) {
    uVar16 = (int)plVar15 - (int)plVar21;
    if (0 < (int)uVar16) {
      uVar14 = 0x3f0000;
      if ((int)uVar16 < 0x11) {
        p_Var23->iov_len = uVar16;
      }
      else {
        uVar13 = 0x10;
        uVar12 = 0x3ec780;
        p_Var23->iov_len = (uint)&o_sadd;
        while( true ) {
          p_Var23->iov_base = (void *)uVar12;
          p_Var23 = p_Var23 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uio.uio_resid + 0x10;
          if (7 < uio.uio_iovcnt) {
            uStack_7c = (undefined4)((ulong)uVar12 >> 0x20);
            local_70 = (undefined4)uVar13;
            uStack_6c = (undefined4)((ulong)uVar13 >> 0x20);
            local_60 = (undefined4)uVar14;
            uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
            local_80 = (void *)uVar12;
            iVar6 = __sprint(local_a4,&uio);
            uVar12 = CONCAT44(uStack_7c,local_80);
            uVar13 = CONCAT44(uStack_6c,local_70);
            uVar14 = CONCAT44(uStack_5c,local_60);
            if (iVar6 != 0) goto LAB_002a6644;
            p_Var23 = iov;
          }
          uVar16 = uVar16 - 0x10;
          if ((int)uVar16 < 0x11) break;
          p_Var23->iov_len = (uint)uVar13;
        }
        p_Var23->iov_len = uVar16;
      }
      p_Var23->iov_base = (void *)((int)uVar14 + -0x3880);
      p_Var23 = p_Var23 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + uVar16;
      if (7 < uio.uio_iovcnt) {
        iVar6 = __sprint(local_a4,&uio);
        if (iVar6 != 0) goto LAB_002a6644;
        p_Var23 = iov;
      }
    }
  }
  if (sign == '\0') {
    if (bVar5) {
      ox[0] = '0';
      ox[1] = (char)lVar18;
      p_Var23->iov_len = (uint)&GRA3DVU1MEM_DBADDRESS;
      p_Var23->iov_base = ox;
      p_Var23 = p_Var23 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 2;
      if (7 < uio.uio_iovcnt) {
        iVar6 = __sprint(local_a4,&uio);
        if (iVar6 != 0) goto LAB_002a6644;
        p_Var23 = iov;
      }
    }
  }
  else {
    p_Var23->iov_len = (uint)&GRA3DVU1MEM_VF02;
    p_Var23->iov_base = &sign;
    p_Var23 = p_Var23 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uio.uio_resid + 1;
    if (7 < uio.uio_iovcnt) {
      iVar6 = __sprint(local_a4,&uio);
      if (iVar6 != 0) goto LAB_002a6644;
      p_Var23 = iov;
    }
  }
  if ((local_90 == 0x80) && (uVar16 = (int)plVar15 - (int)plVar21, 0 < (int)uVar16)) {
    uVar14 = 0x3f0000;
    if ((int)uVar16 < 0x11) {
      p_Var23->iov_len = uVar16;
    }
    else {
      uVar12 = 0x10;
      p_Var23->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var23->iov_base = "00000000000000000123456789abcdef";
        p_Var23 = p_Var23 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_80 = (void *)uVar12;
          uStack_7c = (undefined4)((ulong)uVar12 >> 0x20);
          local_70 = (undefined4)uVar14;
          uStack_6c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar6 = __sprint(local_a4,&uio);
          uVar12 = CONCAT44(uStack_7c,local_80);
          uVar14 = CONCAT44(uStack_6c,local_70);
          if (iVar6 != 0) goto LAB_002a6644;
          p_Var23 = iov;
        }
        uVar16 = uVar16 - 0x10;
        if ((int)uVar16 < 0x11) break;
        p_Var23->iov_len = (uint)uVar12;
      }
      p_Var23->iov_len = uVar16;
    }
    p_Var23->iov_base = (void *)((int)uVar14 + -0x3870);
    p_Var23 = p_Var23 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uio.uio_resid + uVar16;
    if (7 < uio.uio_iovcnt) {
      iVar6 = __sprint(local_a4,&uio);
      if (iVar6 != 0) goto LAB_002a6644;
      p_Var23 = iov;
    }
  }
  uVar16 = dprec - size;
  if (0 < (int)uVar16) {
    uVar14 = 0x3f0000;
    if ((int)uVar16 < 0x11) {
      p_Var23->iov_len = uVar16;
    }
    else {
      uVar12 = 0x10;
      p_Var23->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var23->iov_base = "00000000000000000123456789abcdef";
        p_Var23 = p_Var23 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_80 = (void *)uVar12;
          uStack_7c = (undefined4)((ulong)uVar12 >> 0x20);
          local_70 = (undefined4)uVar14;
          uStack_6c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar6 = __sprint(local_a4,&uio);
          uVar12 = CONCAT44(uStack_7c,local_80);
          uVar14 = CONCAT44(uStack_6c,local_70);
          if (iVar6 != 0) goto LAB_002a6644;
          p_Var23 = iov;
        }
        uVar16 = uVar16 - 0x10;
        if ((int)uVar16 < 0x11) break;
        p_Var23->iov_len = (uint)uVar12;
      }
      p_Var23->iov_len = uVar16;
    }
    p_Var23->iov_base = (void *)((int)uVar14 + -0x3870);
    p_Var23 = p_Var23 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uio.uio_resid + uVar16;
    if (7 < uio.uio_iovcnt) {
      iVar6 = __sprint(local_a4,&uio);
      if (iVar6 != 0) goto LAB_002a6644;
      p_Var23 = iov;
    }
  }
  iVar6 = size;
  p_Var23->iov_base = __s;
  p_Var23->iov_len = iVar6;
  p_Var23 = p_Var23 + 1;
  uio.uio_iovcnt = uio.uio_iovcnt + 1;
  uio.uio_resid = uio.uio_resid + size;
  if (7 < uio.uio_iovcnt) {
    iVar6 = __sprint(local_a4,&uio);
    if (iVar6 != 0) goto LAB_002a6644;
    p_Var23 = iov;
  }
  uVar17 = (int)plVar15 - (int)plVar21;
  if (((uVar17 & 4) != 0) && (0 < (int)uVar17)) {
    uVar14 = 0x3f0000;
    if ((int)uVar17 < 0x11) {
      p_Var23->iov_len = uVar17;
    }
    else {
      p_Var23->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var23->iov_base = "                00000000000000000123456789abcdef";
        p_Var23 = p_Var23 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_60 = (undefined4)uVar14;
          uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar6 = __sprint(local_a4,&uio);
          uVar14 = CONCAT44(uStack_5c,local_60);
          if (iVar6 != 0) goto LAB_002a6644;
          p_Var23 = iov;
        }
        uVar17 = uVar17 - 0x10;
        if ((int)uVar17 < 0x11) break;
        p_Var23->iov_len = (uint)&o_sadd;
      }
      p_Var23->iov_len = uVar17;
    }
    p_Var23->iov_base = (void *)((int)uVar14 + -0x3880);
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uio.uio_resid + uVar17;
    if ((7 < uio.uio_iovcnt) && (iVar6 = __sprint(local_a4,&uio), iVar6 != 0)) goto LAB_002a6644;
  }
  if ((int)plVar15 <= (int)plVar21) {
    plVar15 = plVar21;
  }
  ret = ret + (int)plVar15;
  if ((uio.uio_resid != 0) && (iVar6 = __sprint(local_a4,&uio), iVar6 != 0)) goto LAB_002a6644;
  p_Var23 = iov;
  uio.uio_iovcnt = 0;
  ap = puVar20;
  goto LAB_002a5b58;
LAB_002a60d0:
  do {
    uVar16 = (uint)u;
    __s = (char *)((int)__s + -1);
    u = u >> 4;
    *__s = xdigs[uVar16 & 0xf];
  } while (u != 0);
  goto LAB_002a60f8;
switchD_002a5c40_caseD_31:
  plVar15 = (long *)0x0;
  do {
    iVar6 = (int)lVar18;
    cVar11 = *fmt0;
    lVar18 = (long)cVar11;
    plVar15 = (long *)(((int)plVar15 * 10 + iVar6) - 0x30);
    fmt0 = fmt0 + 1;
  } while ((int)cVar11 - 0x30U < 10);
  goto LAB_002a5c24;
LAB_002a5cc8:
  sVar22 = 0;
  while (iVar6 = (int)lVar18, (int)cVar11 - 0x30U < 10) {
    cVar11 = *fmt0;
    lVar18 = (long)cVar11;
    sVar22 = (size_t)((int)sVar22 * 10 + iVar6 + -0x30);
    fmt0 = fmt0 + 1;
  }
  if ((long)sVar22 < -1) goto code_r0x002a5d08;
  goto LAB_002a5c28;
code_r0x002a5d08:
  sVar22 = 0xffffffffffffffff;
  goto LAB_002a5c24;
}

static int __sprint(FILE *fp, __suio *uio) {
  int iVar1;
  
  iVar1 = 0;
  if (uio->uio_resid == 0) {
    uio->uio_iovcnt = 0;
  }
  else {
    iVar1 = __sfvwrite(fp,uio);
    uio->uio_iovcnt = 0;
    uio->uio_resid = 0;
  }
  return iVar1;
}

static int __sbprintf(FILE *fp, char *fmt, va_list ap) {
	int ret;
	FILE fake;
	unsigned char buf[1024];
	
  int iVar1;
  int iVar2;
  __sFILE fake;
  uchar buf [1024];
  
  fake._p = buf;
  fake._file = fp->_file;
  fake._data = fp->_data;
  fake._flags = fp->_flags & 0xfffd;
  fake._cookie = fp->_cookie;
  fake._write = fp->_write;
  fake._bf._size = 0x400;
  fake._w = 0x400;
  fake._lbfsize = 0;
  fake._bf._base = fake._p;
  iVar1 = vfprintf(&fake,fmt,ap);
  if ((-1 < iVar1) && (iVar2 = fflush(&fake), iVar2 != 0)) {
    iVar1 = -1;
  }
  if ((fake._flags & 0x40) != 0) {
    fp->_flags = fp->_flags | 0x40;
  }
  return iVar1;
}

int vfprintf(FILE *fp, char *fmt0, va_list ap) {
  _reent__2_83 *p_Var1;
  int iVar2;
  _reent__2_83 *s;
  
  p_Var1 = _impure_ptr;
  s = fp->_data;
  if (fp->_data == (_reent__2_83 *)0x0) {
    fp->_data = _impure_ptr;
    s = p_Var1;
  }
  if (s->__sdidinit == 0) {
    __sinit(s);
    s = fp->_data;
  }
  iVar2 = _vfprintf_r(s,fp,fmt0,ap);
  return iVar2;
}

int _vfprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap) {
	char *fmt;
	int ch;
	int n;
	int m;
	char *cp;
	__siov *iovp;
	int flags;
	int ret;
	int width;
	int prec;
	char sign;
	wchar_t wc;
	char *decimal_point;
	char softsign;
	double _double;
	int expt;
	int expsize;
	int ndig;
	char expstr[7];
	u_long _uquad;
	enum {
		OCT = 0,
		DEC = 1,
		HEX = 2
	} base;
	int dprec;
	int realsz;
	int size;
	char *xdigs;
	__suio uio;
	__siov iov[8];
	char buf[348];
	char ox[2];
	int state;
	static char blanks[16] = {
		/* [0] = */ 32,
		/* [1] = */ 32,
		/* [2] = */ 32,
		/* [3] = */ 32,
		/* [4] = */ 32,
		/* [5] = */ 32,
		/* [6] = */ 32,
		/* [7] = */ 32,
		/* [8] = */ 32,
		/* [9] = */ 32,
		/* [10] = */ 32,
		/* [11] = */ 32,
		/* [12] = */ 32,
		/* [13] = */ 32,
		/* [14] = */ 32,
		/* [15] = */ 32
	};
	static char zeroes[16] = {
		/* [0] = */ 48,
		/* [1] = */ 48,
		/* [2] = */ 48,
		/* [3] = */ 48,
		/* [4] = */ 48,
		/* [5] = */ 48,
		/* [6] = */ 48,
		/* [7] = */ 48,
		/* [8] = */ 48,
		/* [9] = */ 48,
		/* [10] = */ 48,
		/* [11] = */ 48,
		/* [12] = */ 48,
		/* [13] = */ 48,
		/* [14] = */ 48,
		/* [15] = */ 48
	};
	char *p;
	
  ushort uVar1;
  bool bVar2;
  lconv *plVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  size_t sVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  ulong u;
  char *pcVar17;
  long lVar18;
  char *pcVar19;
  __siov *p_Var20;
  size_t sVar21;
  ulong *puVar22;
  ulong *puVar23;
  uint uVar24;
  char expstr [7];
  __suio uio;
  __siov iov [8];
  char buf [348];
  char acStack_d4 [4];
  char ox [2];
  char softsign;
  char sign;
  int wc;
  int state;
  int expt;
  int ndig;
  _reent__2_83 *local_ac;
  __sFILE *local_a8;
  int ret;
  int width;
  char *decimal_point;
  long _double;
  int expsize;
  int dprec;
  int realsz;
  char *xdigs;
  uint local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  
  local_ac = data;
  local_a8 = fp;
  plVar3 = localeconv();
  decimal_point = plVar3->decimal_point;
  uVar1 = local_a8->_flags;
  state = 0;
  if (((uVar1 & 8) == 0) || ((local_a8->_bf)._base == (uchar *)0x0)) {
    iVar4 = __swsetup(local_a8);
    if (iVar4 != 0) {
      return -1;
    }
    uVar1 = local_a8->_flags;
  }
  uio.uio_iov = iov;
  if (((uVar1 & 0x1a) == 10) && (-1 < (short)local_a8->_file)) {
    iVar4 = __sbprintf(local_a8,fmt0,ap);
    return iVar4;
  }
  uio.uio_resid = 0;
  uio.uio_iovcnt = 0;
  ret = 0;
  p_Var20 = uio.uio_iov;
  pcVar19 = fmt0;
LAB_002a68d8:
  iVar4 = _mbtowc_r(_impure_ptr,&wc,fmt0,__mb_cur_max,&state);
  if (0 < iVar4) goto code_r0x002a6904;
  pcVar17 = fmt0 + -(int)pcVar19;
  goto LAB_002a6918;
code_r0x002a6904:
  fmt0 = fmt0 + iVar4;
  if (wc == 0x25) {
    fmt0 = fmt0 + -1;
    pcVar17 = fmt0 + -(int)pcVar19;
LAB_002a6918:
    if (pcVar17 != (char *)0x0) {
      p_Var20->iov_len = (uint)pcVar17;
      p_Var20->iov_base = pcVar19;
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = (int)(pcVar17 + uio.uio_resid);
      if (7 < uio.uio_iovcnt) {
        iVar5 = __sprint(local_a8,&uio);
        if (iVar5 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
      ret = (int)(pcVar17 + ret);
    }
    if (0 < iVar4) {
      sign = '\0';
      fmt0 = fmt0 + 1;
      dprec = 0;
      uVar16 = 0;
      width = 0;
      sVar21 = 0xffffffffffffffff;
      puVar22 = (ulong *)ap;
LAB_002a6994:
      cVar11 = *fmt0;
LAB_002a6998:
      fmt0 = fmt0 + 1;
      lVar18 = (long)(int)cVar11;
LAB_002a69a4:
      iVar4 = (int)lVar18;
LAB_002a69a8:
      puVar23 = puVar22;
      uVar24 = uVar16;
      pcVar19 = fmt0;
      switch(iVar4) {
      case 0x20:
        if (sign == '\0') {
          sign = ' ';
          goto LAB_002a6a14;
        }
        cVar11 = *fmt0;
        goto LAB_002a6998;
      default:
        pcVar17 = buf;
        if (lVar18 == 0) goto LAB_002a7e0c;
        buf[0] = (char)lVar18;
        sVar21 = 1;
        ap = puVar22;
        break;
      case 0x23:
        uVar16 = uVar16 | 1;
        goto LAB_002a6994;
      case 0x2a:
        puVar23 = puVar22 + 1;
        width = *(int *)puVar22;
        puVar22 = puVar23;
        if (width < 0) {
          width = -width;
          goto switchD_002a69c0_caseD_2d;
        }
        goto LAB_002a6994;
      case 0x2b:
        sign = '+';
LAB_002a6a14:
        cVar11 = *fmt0;
        goto LAB_002a6998;
      case 0x2d:
switchD_002a69c0_caseD_2d:
        uVar16 = uVar16 | 4;
        puVar22 = puVar23;
        goto LAB_002a6994;
      case 0x2e:
        cVar11 = *fmt0;
        lVar18 = (long)cVar11;
        fmt0 = fmt0 + 1;
        if (lVar18 != 0x2a) goto LAB_002a6a50;
        sVar21 = (size_t)(int)*(uint *)puVar22;
        puVar22 = puVar22 + 1;
        if ((long)sVar21 < -1) {
          sVar21 = 0xffffffffffffffff;
        }
        goto LAB_002a6994;
      case 0x30:
        uVar16 = uVar16 | 0x80;
        goto LAB_002a6994;
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        goto switchD_002a69c0_caseD_31;
      case 0x44:
        uVar16 = uVar16 | 0x10;
      case 100:
      case 0x69:
        if ((uVar16 & 0x10) == 0) {
          if ((uVar16 & 0x40) == 0) {
            u = (ulong)(int)*(uint *)puVar22;
          }
          else {
            u = (ulong)(short)*(ushort *)puVar22;
          }
        }
        else {
          u = *puVar22;
        }
        iVar4 = 1;
        if ((long)u < 0) {
          u = -u;
          sign = '-';
        }
LAB_002a6f58:
        ap = puVar22 + 1;
        dprec = (int)sVar21;
        if (-1 < (long)sVar21) {
          uVar16 = uVar16 & 0xffffff7f;
        }
        pcVar17 = acStack_d4;
        uVar24 = uVar16;
        if ((u == 0) && (pcVar7 = expstr + -(int)pcVar17, (int)sVar21 == 0)) goto LAB_002a706c;
        if (iVar4 == 1) goto LAB_002a701c;
        if (iVar4 == 0) goto LAB_002a6fb0;
        if (iVar4 == 2) goto LAB_002a7040;
        pcVar17 = "bug in vfprintf: bad base";
        sVar8 = strlen("bug in vfprintf: bad base");
        goto LAB_002a708c;
      case 0x45:
      case 0x47:
      case 0x65:
      case 0x66:
      case 0x67:
        if (sVar21 == 0xffffffffffffffff) {
          sVar21 = 6;
        }
        else if (((lVar18 == 0x67) || (lVar18 == 0x47)) && (sVar21 == 0)) {
          sVar21 = 1;
        }
        _double = *puVar22;
        ap = puVar22 + 1;
        iVar4 = isinf(_double);
        if (iVar4 == 0) {
          iVar4 = isnan(_double);
          if (iVar4 == 0) {
            uVar24 = uVar16 | 0x100;
            iVar4 = (int)sVar21;
            pcVar17 = cvt(local_ac,_double,iVar4,uVar24,&softsign,&expt,(int)lVar18,&ndig);
            if ((lVar18 == 0x67) || (lVar18 == 0x47)) {
              if (((long)expt < -3) || ((long)sVar21 < (long)expt)) {
                bVar2 = lVar18 != 0x67;
                lVar18 = 0x65;
                if (bVar2) {
                  lVar18 = 0x45;
                }
              }
              else {
                lVar18 = 0x67;
              }
            }
            sVar13 = (size_t)expt;
            if (lVar18 < 0x66) {
              expt = expt + -1;
              expsize = exponent(expstr,expt,(int)lVar18);
              if ((1 < ndig) || (sVar8 = (long)(expsize + ndig), (uVar16 & 1) != 0)) {
                sVar8 = (size_t)(expsize + ndig + 1);
              }
            }
            else if (lVar18 == 0x66) {
              sVar8 = (long)(iVar4 + 2);
              if ((0 < (long)sVar13) && ((sVar21 != 0 || (sVar8 = sVar13, (uVar16 & 1) != 0)))) {
                sVar8 = (long)(expt + iVar4 + 1);
              }
            }
            else if ((long)sVar13 < (long)ndig) {
              if ((long)sVar13 < 1) {
                sVar8 = (size_t)((ndig - expt) + 2);
              }
              else {
                sVar8 = (size_t)(ndig + 1);
              }
            }
            else {
              sVar8 = sVar13;
              if ((uVar16 & 1) != 0) {
                sVar8 = (size_t)(expt + 1);
              }
            }
            if (softsign != '\0') {
              sign = '-';
            }
          }
          else {
            sVar8 = 3;
            pcVar17 = "NaN";
          }
        }
        else {
          iVar4 = dpcmp(_double,0);
          if (iVar4 < 0) {
            sign = '-';
          }
          sVar8 = 3;
          pcVar17 = "Inf";
        }
        goto LAB_002a708c;
      case 0x4c:
        uVar16 = uVar16 | 8;
        goto LAB_002a6994;
      case 0x4f:
        uVar16 = uVar16 | 0x10;
      case 0x6f:
        if ((uVar16 & 0x10) == 0) {
          if ((uVar16 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar22;
          }
          else {
            u = (ulong)*(ushort *)puVar22;
          }
        }
        else {
          u = *puVar22;
        }
        iVar4 = 0;
LAB_002a6f54:
        sign = '\0';
        goto LAB_002a6f58;
      case 0x55:
        uVar16 = uVar16 | 0x10;
      case 0x75:
        if ((uVar16 & 0x10) == 0) {
          if ((uVar16 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar22;
          }
          else {
            u = (ulong)*(ushort *)puVar22;
          }
        }
        else {
          u = *puVar22;
        }
        iVar4 = 1;
        goto LAB_002a6f54;
      case 0x58:
        xdigs = "0123456789ABCDEF";
        goto LAB_002a6f00;
      case 99:
        ap = puVar22 + 1;
        pcVar17 = buf;
        buf[0] = *(char *)puVar22;
        sVar21 = 1;
        break;
      case 0x68:
        uVar16 = uVar16 | 0x40;
        goto LAB_002a6994;
      case 0x6c:
        cVar11 = *fmt0;
        if (*fmt0 == 'l') {
          fmt0 = fmt0 + 1;
          goto switchD_002a69c0_caseD_71;
        }
        uVar16 = uVar16 | 0x10;
        goto LAB_002a6998;
      case 0x6e:
        if ((uVar16 & 0x10) == 0) {
          if ((uVar16 & 0x40) == 0) {
            ap = puVar22 + 1;
            **(int **)puVar22 = ret;
          }
          else {
            ap = puVar22 + 1;
            **(undefined2 **)puVar22 = (short)ret;
          }
        }
        else {
          ap = puVar22 + 1;
          **(long **)puVar22 = (long)ret;
        }
        goto LAB_002a68d8;
      case 0x70:
        u = (ulong)(int)*(uint *)puVar22;
        uVar16 = uVar16 | 2;
        xdigs = "0123456789abcdef";
        iVar4 = 2;
        lVar18 = 0x78;
        goto LAB_002a6f54;
      case 0x71:
switchD_002a69c0_caseD_71:
        uVar16 = uVar16 | 0x20;
        goto LAB_002a6994;
      case 0x73:
        pcVar17 = *(char **)puVar22;
        ap = puVar22 + 1;
        if (pcVar17 == (char *)0x0) {
          pcVar17 = "(null)";
        }
        if ((long)sVar21 < 0) {
          sVar21 = strlen(pcVar17);
        }
        else {
          pvVar6 = memchr(pcVar17,0,sVar21);
          if ((pvVar6 != (void *)0x0) &&
             (sVar8 = (size_t)((int)pvVar6 - (int)pcVar17), (long)sVar8 <= (long)sVar21)) {
            sign = '\0';
            goto LAB_002a708c;
          }
        }
        break;
      case 0x78:
        xdigs = "0123456789abcdef";
LAB_002a6f00:
        if ((uVar16 & 0x10) == 0) {
          if ((uVar16 & 0x40) == 0) {
            u = (ulong)*(uint *)puVar22;
          }
          else {
            u = (ulong)*(ushort *)puVar22;
          }
        }
        else {
          u = *puVar22;
        }
        iVar4 = 2;
        if (((uVar16 & 1) != 0) && (u != 0)) {
          uVar16 = uVar16 | 2;
        }
        goto LAB_002a6f54;
      }
      sVar8 = sVar21;
      sign = '\0';
      goto LAB_002a708c;
    }
LAB_002a7e0c:
    if (uio.uio_resid != 0) {
      __sprint(local_a8,&uio);
    }
LAB_002a7e2c:
    iVar4 = -1;
    if ((local_a8->_flags & 0x40) == 0) {
      iVar4 = ret;
    }
    return iVar4;
  }
  goto LAB_002a68d8;
LAB_002a701c:
  for (; 9 < u; u = __udivdi3(u,10)) {
    uVar9 = __umoddi3(u,10);
    pcVar17 = pcVar17 + -1;
    *pcVar17 = (char)uVar9 + '0';
  }
  pcVar17 = pcVar17 + -1;
  *pcVar17 = (char)u + '0';
LAB_002a7068:
  pcVar7 = expstr + -(int)pcVar17;
LAB_002a706c:
  sVar8 = (size_t)(int)(pcVar7 + 0x1bc);
LAB_002a708c:
  sVar21 = (long)dprec;
  if ((long)dprec <= (long)sVar8) {
    sVar21 = sVar8;
  }
  uVar16 = (uint)sVar8;
  if (sign == '\0') {
    realsz = (uVar24 & 2) + (int)sVar21;
  }
  else {
    realsz = (int)sVar21 + 1;
  }
  local_80 = uVar24 & 0x84;
  if ((uVar24 & 0x84) == 0) {
    uVar15 = width - realsz;
    if (0 < (int)uVar15) {
      uVar14 = 0x3f0000;
      if ((int)uVar15 < 0x11) {
        p_Var20->iov_len = uVar15;
      }
      else {
        uVar12 = 0x10;
        p_Var20->iov_len = (uint)&o_sadd;
        while( true ) {
          p_Var20->iov_base = "                0000000000000000Inf";
          p_Var20 = p_Var20 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uio.uio_resid + 0x10;
          if (7 < uio.uio_iovcnt) {
            local_70 = (undefined4)uVar12;
            uStack_6c = (undefined4)((ulong)uVar12 >> 0x20);
            local_60 = (undefined4)uVar14;
            uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
            iVar4 = __sprint(local_a8,&uio);
            uVar12 = CONCAT44(uStack_6c,local_70);
            uVar14 = CONCAT44(uStack_5c,local_60);
            if (iVar4 != 0) goto LAB_002a7e2c;
            p_Var20 = iov;
          }
          uVar15 = uVar15 - 0x10;
          if ((int)uVar15 < 0x11) break;
          p_Var20->iov_len = (uint)uVar12;
        }
        p_Var20->iov_len = uVar15;
      }
      p_Var20->iov_base = (void *)((int)uVar14 + -0x3690);
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uVar15 + uio.uio_resid;
      if (7 < uio.uio_iovcnt) {
        iVar4 = __sprint(local_a8,&uio);
        if (iVar4 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
    }
  }
  if (sign == '\0') {
    if ((uVar24 & 2) != 0) {
      ox[0] = '0';
      ox[1] = (char)lVar18;
      p_Var20->iov_len = (uint)&GRA3DVU1MEM_DBADDRESS;
      p_Var20->iov_base = ox;
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 2;
      if (7 < uio.uio_iovcnt) {
        iVar4 = __sprint(local_a8,&uio);
        if (iVar4 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
    }
  }
  else {
    p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
    p_Var20->iov_base = &sign;
    p_Var20 = p_Var20 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uio.uio_resid + 1;
    if (7 < uio.uio_iovcnt) {
      iVar4 = __sprint(local_a8,&uio);
      if (iVar4 != 0) goto LAB_002a7e2c;
      p_Var20 = iov;
    }
  }
  if ((local_80 == 0x80) && (uVar15 = width - realsz, 0 < (int)uVar15)) {
    uVar14 = 0x3f0000;
    if ((int)uVar15 < 0x11) {
      p_Var20->iov_len = uVar15;
    }
    else {
      uVar12 = 0x10;
      p_Var20->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var20->iov_base = "0000000000000000Inf";
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_70 = (undefined4)uVar12;
          uStack_6c = (undefined4)((ulong)uVar12 >> 0x20);
          local_60 = (undefined4)uVar14;
          uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar4 = __sprint(local_a8,&uio);
          uVar12 = CONCAT44(uStack_6c,local_70);
          uVar14 = CONCAT44(uStack_5c,local_60);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        uVar15 = uVar15 - 0x10;
        if ((int)uVar15 < 0x11) break;
        p_Var20->iov_len = (uint)uVar12;
      }
      p_Var20->iov_len = uVar15;
    }
    p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
    p_Var20 = p_Var20 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar15 + uio.uio_resid;
    if (7 < uio.uio_iovcnt) {
      iVar4 = __sprint(local_a8,&uio);
      if (iVar4 != 0) goto LAB_002a7e2c;
      p_Var20 = iov;
    }
  }
  uVar15 = dprec - uVar16;
  if (0 < (int)uVar15) {
    uVar14 = 0x3f0000;
    if ((int)uVar15 < 0x11) {
      p_Var20->iov_len = uVar15;
    }
    else {
      uVar12 = 0x10;
      p_Var20->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var20->iov_base = "0000000000000000Inf";
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_70 = (undefined4)uVar12;
          uStack_6c = (undefined4)((ulong)uVar12 >> 0x20);
          local_60 = (undefined4)uVar14;
          uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar4 = __sprint(local_a8,&uio);
          uVar12 = CONCAT44(uStack_6c,local_70);
          uVar14 = CONCAT44(uStack_5c,local_60);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        uVar15 = uVar15 - 0x10;
        if ((int)uVar15 < 0x11) break;
        p_Var20->iov_len = (uint)uVar12;
      }
      p_Var20->iov_len = uVar15;
    }
    p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
    p_Var20 = p_Var20 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar15 + uio.uio_resid;
    if (7 < uio.uio_iovcnt) {
      iVar4 = __sprint(local_a8,&uio);
      if (iVar4 != 0) goto LAB_002a7e2c;
      p_Var20 = iov;
    }
  }
  if ((uVar24 & 0x100) == 0) {
    p_Var20->iov_len = uVar16;
    p_Var20->iov_base = pcVar17;
    uio.uio_resid = uVar16 + uio.uio_resid;
LAB_002a7cb0:
    p_Var20 = p_Var20 + 1;
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    bVar2 = uio.uio_iovcnt < 8;
  }
  else {
    if (lVar18 < 0x66) {
      if (ndig < 2) {
        if ((uVar24 & 1) != 0) {
          ox[0] = *pcVar17;
          goto LAB_002a7a9c;
        }
        p_Var20->iov_base = pcVar17;
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 1;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
      }
      else {
        ox[0] = *pcVar17;
LAB_002a7a9c:
        ox[1] = '.';
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_DBADDRESS;
        p_Var20->iov_base = ox;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 2;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        iVar4 = dpcmp(_double,0);
        if (iVar4 == 0) {
          uVar16 = ndig - 1;
          if (0 < (int)uVar16) {
            uVar14 = 0x3f0000;
            if ((int)uVar16 < 0x11) {
              p_Var20->iov_len = uVar16;
            }
            else {
              p_Var20->iov_len = (uint)&o_sadd;
              while( true ) {
                p_Var20->iov_base = "0000000000000000Inf";
                p_Var20 = p_Var20 + 1;
                uio.uio_iovcnt = uio.uio_iovcnt + 1;
                uio.uio_resid = uio.uio_resid + 0x10;
                if (7 < uio.uio_iovcnt) {
                  local_60 = (undefined4)uVar14;
                  uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
                  iVar4 = __sprint(local_a8,&uio);
                  uVar14 = CONCAT44(uStack_5c,local_60);
                  if (iVar4 != 0) goto LAB_002a7e2c;
                  p_Var20 = iov;
                }
                uVar16 = uVar16 - 0x10;
                if ((int)uVar16 < 0x11) break;
                p_Var20->iov_len = (uint)&o_sadd;
              }
              p_Var20->iov_len = uVar16;
            }
            p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
            p_Var20 = p_Var20 + 1;
            uio.uio_iovcnt = uio.uio_iovcnt + 1;
            uio.uio_resid = uVar16 + uio.uio_resid;
            if (7 < uio.uio_iovcnt) {
              iVar4 = __sprint(local_a8,&uio);
              if (iVar4 != 0) goto LAB_002a7e2c;
              p_Var20 = iov;
            }
          }
        }
        else {
          p_Var20->iov_base = pcVar17 + 1;
          p_Var20->iov_len = ndig - 1;
          p_Var20 = p_Var20 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uio.uio_resid + ndig + -1;
          if (7 < uio.uio_iovcnt) {
            iVar4 = __sprint(local_a8,&uio);
            if (iVar4 != 0) goto LAB_002a7e2c;
            p_Var20 = iov;
          }
        }
      }
      iVar4 = expsize;
      p_Var20->iov_base = expstr;
      p_Var20->iov_len = iVar4;
      uio.uio_resid = uio.uio_resid + iVar4;
      goto LAB_002a7cb0;
    }
    iVar4 = dpcmp(_double,0);
    if (iVar4 == 0) {
      p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
      p_Var20->iov_base = &DAT_003ec9f8;
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar4 = __sprint(local_a8,&uio);
        if (iVar4 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
      if (expt < ndig) {
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
      }
      else {
        if ((uVar24 & 1) == 0) goto LAB_002a7ce4;
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
      }
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      p_Var20->iov_base = decimal_point;
      p_Var20 = p_Var20 + 1;
      uio.uio_resid = uio.uio_resid + 1;
      if (7 < uio.uio_iovcnt) {
        iVar4 = __sprint(local_a8,&uio);
        if (iVar4 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
      uVar16 = ndig - 1;
      if ((int)uVar16 < 1) goto LAB_002a7ce4;
      uVar14 = 0x3f0000;
      if ((int)uVar16 < 0x11) {
        p_Var20->iov_len = uVar16;
      }
      else {
        p_Var20->iov_len = (uint)&o_sadd;
        while( true ) {
          p_Var20->iov_base = "0000000000000000Inf";
          p_Var20 = p_Var20 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uio.uio_resid + 0x10;
          if (7 < uio.uio_iovcnt) {
            local_60 = (undefined4)uVar14;
            uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
            iVar4 = __sprint(local_a8,&uio);
            uVar14 = CONCAT44(uStack_5c,local_60);
            if (iVar4 != 0) goto LAB_002a7e2c;
            p_Var20 = iov;
          }
          uVar16 = uVar16 - 0x10;
          if ((int)uVar16 < 0x11) break;
          p_Var20->iov_len = (uint)&o_sadd;
        }
        p_Var20->iov_len = uVar16;
      }
      p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uVar16 + uio.uio_resid;
      bVar2 = uio.uio_iovcnt < 8;
    }
    else {
      if (expt < 1) {
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
        p_Var20->iov_base = &DAT_003ec9f8;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 1;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        if (expt == 0) {
          if (ndig == 0) goto LAB_002a7ce4;
          p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
        }
        else {
          p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
        }
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        p_Var20->iov_base = decimal_point;
        p_Var20 = p_Var20 + 1;
        uio.uio_resid = uio.uio_resid + 1;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        uVar16 = -expt;
        if (expt < 0) {
          uVar14 = 0x3f0000;
          if ((int)uVar16 < 0x11) {
            p_Var20->iov_len = uVar16;
          }
          else {
            p_Var20->iov_len = (uint)&o_sadd;
            while( true ) {
              p_Var20->iov_base = "0000000000000000Inf";
              p_Var20 = p_Var20 + 1;
              uio.uio_iovcnt = uio.uio_iovcnt + 1;
              uio.uio_resid = uio.uio_resid + 0x10;
              if (7 < uio.uio_iovcnt) {
                local_60 = (undefined4)uVar14;
                uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
                iVar4 = __sprint(local_a8,&uio);
                uVar14 = CONCAT44(uStack_5c,local_60);
                if (iVar4 != 0) goto LAB_002a7e2c;
                p_Var20 = iov;
              }
              uVar16 = uVar16 - 0x10;
              if ((int)uVar16 < 0x11) break;
              p_Var20->iov_len = (uint)&o_sadd;
            }
            p_Var20->iov_len = uVar16;
          }
          p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
          p_Var20 = p_Var20 + 1;
          uio.uio_iovcnt = uio.uio_iovcnt + 1;
          uio.uio_resid = uVar16 + uio.uio_resid;
          if (7 < uio.uio_iovcnt) {
            iVar4 = __sprint(local_a8,&uio);
            if (iVar4 != 0) goto LAB_002a7e2c;
            p_Var20 = iov;
          }
          p_Var20->iov_base = pcVar17;
        }
        else {
          p_Var20->iov_base = pcVar17;
        }
        p_Var20->iov_len = ndig;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + ndig;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        goto LAB_002a7ce4;
      }
      bVar2 = expt < ndig;
      p_Var20->iov_base = pcVar17;
      if (bVar2) {
        p_Var20->iov_len = expt;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + expt;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        iVar4 = expt;
        p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
        p_Var20->iov_base = &DAT_003eca00;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 1;
        if (7 < uio.uio_iovcnt) {
          iVar5 = __sprint(local_a8,&uio);
          if (iVar5 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        p_Var20->iov_base = pcVar17 + iVar4;
        p_Var20->iov_len = ndig - expt;
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + (ndig - expt);
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        goto LAB_002a7ce4;
      }
      p_Var20->iov_len = ndig;
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + ndig;
      if (7 < uio.uio_iovcnt) {
        iVar4 = __sprint(local_a8,&uio);
        if (iVar4 != 0) goto LAB_002a7e2c;
        p_Var20 = iov;
      }
      uVar16 = expt - ndig;
      if (0 < (int)uVar16) {
        uVar14 = 0x3f0000;
        if ((int)uVar16 < 0x11) {
          p_Var20->iov_len = uVar16;
        }
        else {
          p_Var20->iov_len = (uint)&o_sadd;
          while( true ) {
            p_Var20->iov_base = "0000000000000000Inf";
            p_Var20 = p_Var20 + 1;
            uio.uio_iovcnt = uio.uio_iovcnt + 1;
            uio.uio_resid = uio.uio_resid + 0x10;
            if (7 < uio.uio_iovcnt) {
              local_60 = (undefined4)uVar14;
              uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
              iVar4 = __sprint(local_a8,&uio);
              uVar14 = CONCAT44(uStack_5c,local_60);
              if (iVar4 != 0) goto LAB_002a7e2c;
              p_Var20 = iov;
            }
            uVar16 = uVar16 - 0x10;
            if ((int)uVar16 < 0x11) break;
            p_Var20->iov_len = (uint)&o_sadd;
          }
          p_Var20->iov_len = uVar16;
        }
        p_Var20->iov_base = (void *)((int)uVar14 + -0x3680);
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uVar16 + uio.uio_resid;
        if (7 < uio.uio_iovcnt) {
          iVar4 = __sprint(local_a8,&uio);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
      }
      if ((uVar24 & 1) == 0) goto LAB_002a7ce4;
      p_Var20->iov_len = (uint)&GRA3DVU1MEM_VF02;
      p_Var20->iov_base = &DAT_003eca00;
      p_Var20 = p_Var20 + 1;
      uio.uio_iovcnt = uio.uio_iovcnt + 1;
      uio.uio_resid = uio.uio_resid + 1;
      bVar2 = uio.uio_iovcnt < 8;
    }
  }
  if (!bVar2) {
    iVar4 = __sprint(local_a8,&uio);
    if (iVar4 != 0) goto LAB_002a7e2c;
    p_Var20 = iov;
  }
LAB_002a7ce4:
  if (((uVar24 & 4) != 0) && (uVar16 = width - realsz, 0 < (int)uVar16)) {
    uVar14 = 0x3f0000;
    if ((int)uVar16 < 0x11) {
      p_Var20->iov_len = uVar16;
    }
    else {
      p_Var20->iov_len = (uint)&o_sadd;
      while( true ) {
        p_Var20->iov_base = "                0000000000000000Inf";
        p_Var20 = p_Var20 + 1;
        uio.uio_iovcnt = uio.uio_iovcnt + 1;
        uio.uio_resid = uio.uio_resid + 0x10;
        if (7 < uio.uio_iovcnt) {
          local_60 = (undefined4)uVar14;
          uStack_5c = (undefined4)((ulong)uVar14 >> 0x20);
          iVar4 = __sprint(local_a8,&uio);
          uVar14 = CONCAT44(uStack_5c,local_60);
          if (iVar4 != 0) goto LAB_002a7e2c;
          p_Var20 = iov;
        }
        uVar16 = uVar16 - 0x10;
        if ((int)uVar16 < 0x11) break;
        p_Var20->iov_len = (uint)&o_sadd;
      }
      p_Var20->iov_len = uVar16;
    }
    p_Var20->iov_base = (void *)((int)uVar14 + -0x3690);
    uio.uio_iovcnt = uio.uio_iovcnt + 1;
    uio.uio_resid = uVar16 + uio.uio_resid;
    if ((7 < uio.uio_iovcnt) && (iVar4 = __sprint(local_a8,&uio), iVar4 != 0)) goto LAB_002a7e2c;
  }
  iVar4 = width;
  if (width <= realsz) {
    iVar4 = realsz;
  }
  ret = ret + iVar4;
  if ((uio.uio_resid != 0) && (iVar4 = __sprint(local_a8,&uio), iVar4 != 0)) goto LAB_002a7e2c;
  p_Var20 = iov;
  uio.uio_iovcnt = 0;
  goto LAB_002a68d8;
LAB_002a6fb0:
  do {
    pcVar7 = pcVar17;
    uVar9 = u & 7;
    u = u >> 3;
    lVar10 = uVar9 + 0x30;
    pcVar17 = pcVar7 + -1;
    *pcVar17 = (char)lVar10;
  } while (u != 0);
  if ((uVar16 & 1) == 0) goto LAB_002a7068;
  if (lVar10 != 0x30) {
    pcVar17 = pcVar7 + -2;
    *pcVar17 = '0';
    goto LAB_002a7068;
  }
  pcVar7 = expstr + -(int)pcVar17;
  goto LAB_002a706c;
LAB_002a7040:
  do {
    uVar16 = (uint)u;
    pcVar17 = pcVar17 + -1;
    u = u >> 4;
    *pcVar17 = xdigs[uVar16 & 0xf];
  } while (u != 0);
  goto LAB_002a7068;
switchD_002a69c0_caseD_31:
  width = 0;
  do {
    iVar4 = (int)lVar18;
    cVar11 = *fmt0;
    lVar18 = (long)cVar11;
    width = width * 10 + iVar4 + -0x30;
    fmt0 = fmt0 + 1;
  } while ((int)cVar11 - 0x30U < 10);
  goto LAB_002a69a4;
LAB_002a6a50:
  sVar21 = 0;
  while (iVar4 = (int)lVar18, (int)cVar11 - 0x30U < 10) {
    cVar11 = *fmt0;
    lVar18 = (long)cVar11;
    sVar21 = (size_t)((int)sVar21 * 10 + iVar4 + -0x30);
    fmt0 = fmt0 + 1;
  }
  if ((long)sVar21 < -1) goto code_r0x002a6a90;
  goto LAB_002a69a8;
code_r0x002a6a90:
  sVar21 = 0xffffffffffffffff;
  goto LAB_002a69a4;
}

static char* cvt(_reent *data, double value, int ndigits, int flags, char *sign, int *decpt, int ch, int *length) {
	int mode;
	int dsgn;
	char *digits;
	char *bp;
	char *rve;
	double_union tmp;
	
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int dsgn;
  char *rve;
  
  iVar2 = 3;
  if ((ch != 0x66) && ((ch == 0x65 || (iVar2 = 2, ch == 0x45)))) {
    ndigits = ndigits + 1;
    iVar2 = 2;
  }
  if (value >> 0x20 < 0) {
    value = (long)(0.0 - (double)value);
    *sign = '-';
  }
  else {
    *sign = '\0';
  }
  pcVar1 = _dtoa_r(data,value,iVar2,ndigits,decpt,&dsgn,&rve);
  if (((ch != 0x67) && (ch != 0x47)) || ((flags & 1U) != 0)) {
    pcVar4 = pcVar1 + ndigits;
    if (ch == 0x66) {
      if (*pcVar1 == '0') {
        iVar2 = dpcmp(value,0);
        if (iVar2 != 0) {
          *decpt = 1 - ndigits;
        }
        iVar2 = *decpt;
      }
      else {
        iVar2 = *decpt;
      }
      pcVar4 = pcVar4 + iVar2;
    }
    iVar2 = dpcmp(value,0);
    if (iVar2 == 0) {
      rve = pcVar4;
    }
    if (rve < pcVar4) {
      do {
        pcVar3 = rve + 1;
        *rve = '0';
        rve = pcVar3;
      } while (pcVar3 < pcVar4);
      iVar2 = (int)pcVar3 - (int)pcVar1;
      goto LAB_002a7ff8;
    }
  }
  iVar2 = (int)rve - (int)pcVar1;
LAB_002a7ff8:
  *length = iVar2;
  return pcVar1;
}

static int exponent(char *p0, int exp, int fmtch) {
	char *p;
	char *t;
	char expbuf[308];
	
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char expbuf [308];
  char acStack_c [12];
  
  *p0 = (char)fmtch;
  if (exp < 0) {
    cVar2 = '-';
    exp = -exp;
  }
  else {
    cVar2 = '+';
  }
  p0[1] = cVar2;
  pcVar3 = p0 + 2;
  pcVar4 = acStack_c;
  if (exp < 10) {
    *pcVar3 = '0';
    p0[3] = (char)exp + '0';
    pcVar3 = p0 + 4;
  }
  else {
    do {
      pcVar5 = pcVar4;
      iVar1 = exp / 10;
      pcVar4 = pcVar5 + -1;
      *pcVar4 = (char)(exp % 10) + '0';
      exp = iVar1;
    } while (9 < iVar1);
    pcVar5 = pcVar5 + -2;
    *pcVar5 = (char)iVar1 + '0';
    if (pcVar5 < acStack_c) {
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar3 = cVar2;
        pcVar3 = pcVar3 + 1;
      } while (pcVar5 < acStack_c);
      return (int)pcVar3 - (int)p0;
    }
  }
  return (int)pcVar3 - (int)p0;
}
