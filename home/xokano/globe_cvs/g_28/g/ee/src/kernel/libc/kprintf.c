// STATUS: NOT STARTED

#include "kprintf.h"

static int count = 0;
static void (*_putchar)(/* parameters unknown */) = serialPutchar;
static char linebuf[128];

static int kputchar(int c) {
  uint uVar1;
  
  do {
    uVar1 = REG_SIO_ISR;
  } while ((uVar1 & 0x8000) != 0);
  REG_SIO_TXFIFO = (char)c;
  return c;
}

static void deci2Putchar(int c) {
  int iVar1;
  
  iVar1 = count;
  if (0x7d < count) {
    count = 0;
    linebuf[127] = '\0';
    kputs(linebuf);
    iVar1 = count;
  }
  if (c != 10) {
    count = iVar1 + 1;
    linebuf[iVar1] = (char)c;
    return;
  }
  count = 0;
  linebuf[iVar1] = (char)c;
  linebuf[iVar1 + 1] = '\0';
  kputs(linebuf);
  return;
}

static void serialPutchar(int c) {
  if (c == 10) {
    kputchar(0xd);
    kputchar(10);
    return;
  }
  kputchar(c);
  return;
}

static int ftoi(long unsigned int u) {
	long int exp;
	long int i;
	
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = ((u << 1) >> 0x35) - 0x433;
  if (lVar3 < -0x35) {
    return 0;
  }
  if (0xc < lVar3) {
    return 9999;
  }
  uVar2 = u & 0xfffffffffffff | 0x10000000000000;
  if (lVar3 < 0) {
    uVar2 = uVar2 >> (long)(-2 - (int)lVar3);
    if ((uVar2 & 3) == 3) {
      iVar1 = (int)(uVar2 >> 2) + 1;
    }
    else {
      iVar1 = (int)(uVar2 >> 2);
    }
  }
  else {
    iVar1 = (int)(uVar2 << (long)(int)lVar3);
  }
  return iVar1;
}

static void printfloat(double d) {
	int exp;
	
  int iVar1;
  ulong u;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = dpcmp(d,0);
  if (iVar1 < 0) {
    d = (long)(0.0 - (double)d);
    (*(code *)_putchar)(0x2d);
  }
  iVar1 = dpcmp(d,DAT_003ea218);
  if (iVar1 < 0) {
    while (iVar1 = dpcmp(d,DAT_003ea220), iVar1 < 0) {
      iVar2 = iVar2 + -1;
      d = (long)((double)d * 10.0);
    }
  }
  else {
    iVar1 = dpcmp(d,0x3ff0000000000000);
    if (-1 < iVar1) {
      while (iVar1 = dpcmp(d,0x3ff0000000000000), -1 < iVar1) {
        iVar2 = iVar2 + 1;
        d = (long)((double)d / 10.0);
      }
    }
  }
  u = __fixunsdfdi((long)((double)d * DAT_003ea228));
  ftoi(u);
  kprintf("0.%d");
  if (iVar2 < 0) {
    kprintf("e%d");
    return;
  }
  kprintf("e+%d");
  return;
}

void _printf(char *fmt, va_list ap) {
	char buf[32];
	char *cp;
	char *zp;
	char ch0;
	char q;
	char *args;
	float argf;
	long int argi;
	long unsigned int argu;
	int n;
	int ret;
	
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  uint uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  double dVar12;
  double *pdVar13;
  char acStack_d0 [48];
  char buf [32];
  
  iVar5 = DIntr();
  bVar1 = *fmt;
  bVar2 = *fmt;
joined_r0x0027f080:
  if (bVar1 == 0) {
    if (iVar5 != 0) {
      EIntr();
    }
    return;
  }
  pcVar11 = (char *)0x0;
  lVar9 = 0;
  if (bVar2 == 0x25) {
LAB_0027f0a8:
    pbVar3 = (byte *)fmt;
    fmt = (char *)(pbVar3 + 1);
    switch((int)(((byte)*fmt - 0x30) * 0x1000000) >> 0x18) {
    case 0:
      uVar8 = (int)(char)pbVar3[2] - 0x30;
      if ((uVar8 & 0xff) < 10) {
        if ((int)(char)pbVar3[3] - 0x30U < 10) {
          fmt = (char *)(pbVar3 + 3);
          uVar8 = uVar8 * 10 + -0x30 + (int)(char)pbVar3[3];
          if (0x1f < (int)uVar8) {
            uVar8 = 0x1f;
          }
        }
        else {
          fmt = (char *)(pbVar3 + 2);
        }
        pcVar11 = buf + (0x1f - uVar8);
        for (; 0 < (int)uVar8; uVar8 = uVar8 - 1) {
          buf[0x1f - uVar8] = '0';
        }
      }
      goto LAB_0027f0a8;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x37:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3e:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x44:
    case 0x46:
    case 0x47:
      goto switchD_0027f0d4_caseD_49;
    case 0x33:
                    /* WARNING: Load size is inaccurate */
      fmt = (char *)(pbVar3 + 2);
      (*(code *)_putchar)(*ap);
      ap = (double *)((int)ap + 8);
      break;
    case 0x34:
      if (lVar9 == 0x6c) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = *ap;
      }
      else if (lVar9 == 0x68) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)(long)*ap;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)(long)(int)*ap;
      }
      ap = (void *)((int)ap + 8);
      pcVar10 = buf + 0x1f;
      buf[31] = '\0';
      if (dVar12 == 0.0) {
        pcVar10 = buf + 0x1e;
        buf[30] = '0';
      }
      else {
        if ((long)dVar12 < 0) {
          dVar12 = (double)-(long)dVar12;
          (*(code *)_putchar)(0x2d);
        }
        for (; dVar12 != 0.0; dVar12 = (double)__divdi3((long)dVar12,10)) {
          lVar9 = __moddi3((long)dVar12,10);
          pcVar10 = pcVar10 + -1;
          *pcVar10 = (char)lVar9 + '0';
        }
      }
      fmt = (char *)(pbVar3 + 2);
      if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
        pcVar10 = pcVar11;
      }
      cVar7 = *pcVar10;
      if (*pcVar10 != '\0') {
        do {
          pcVar10 = pcVar10 + 1;
          (*(code *)_putchar)(cVar7);
          cVar7 = *pcVar10;
        } while (*pcVar10 != '\0');
        break;
      }
      goto switchD_0027f0d4_caseD_49;
    case 0x35:
    case 0x36:
                    /* WARNING: Load size is inaccurate */
      if ((float)*ap == 0.0) {
        fmt = (char *)(pbVar3 + 2);
        (*(code *)_putchar)(0x30);
        ap = (double *)((int)ap + 8);
      }
      else {
        fmt = (char *)(pbVar3 + 2);
        printfloat((long)(double)(float)*ap);
        ap = (double *)((int)ap + 8);
      }
      break;
    case 0x38:
      lVar9 = 0x68;
      goto LAB_0027f0a8;
    case 0x3c:
      goto switchD_0027f0d4_caseD_3c;
    case 0x3f:
      if (lVar9 == 0x6c) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = *ap;
      }
      else if (lVar9 == 0x68) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)(ulong)*ap;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)ZEXT48(*ap);
      }
      ap = (void *)((int)ap + 8);
      pcVar10 = buf + 0x1f;
      buf[31] = '\0';
      if (dVar12 == 0.0) {
        pcVar10 = buf + 0x1e;
        buf[30] = '0';
      }
      else {
        do {
          bVar1 = SUB81(dVar12,0);
          pcVar10 = pcVar10 + -1;
          dVar12 = (double)((ulong)dVar12 >> 3);
          *pcVar10 = (bVar1 & 7) + 0x30;
        } while (dVar12 != 0.0);
      }
      fmt = (char *)(pbVar3 + 2);
      if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
        pcVar10 = pcVar11;
      }
      cVar7 = *pcVar10;
      if (*pcVar10 == '\0') goto switchD_0027f0d4_caseD_49;
      do {
        pcVar10 = pcVar10 + 1;
        (*(code *)_putchar)(cVar7);
        cVar7 = *pcVar10;
      } while (*pcVar10 != '\0');
      break;
    case 0x43:
      pdVar13 = (double *)((int)ap + 8);
                    /* WARNING: Load size is inaccurate */
      pcVar11 = *ap;
      cVar7 = *pcVar11;
      ap = pdVar13;
      if (*pcVar11 == '\0') {
        fmt = (char *)(pbVar3 + 2);
        (*(code *)_putchar)(0x28);
        (*(code *)_putchar)(0x6e);
        (*(code *)_putchar)(0x75);
        (*(code *)_putchar)(0x6c);
        (*(code *)_putchar)(0x6c);
        (*(code *)_putchar)(0x29);
      }
      else {
        fmt = (char *)(pbVar3 + 2);
        do {
          pcVar11 = pcVar11 + 1;
          (*(code *)_putchar)(cVar7);
          cVar7 = *pcVar11;
        } while (cVar7 != '\0');
      }
      break;
    case 0x45:
      if (lVar9 == 0x6c) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = *ap;
      }
      else if (lVar9 == 0x68) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)(ulong)*ap;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)ZEXT48(*ap);
      }
      ap = (void *)((int)ap + 8);
      pcVar10 = buf + 0x1f;
      buf[31] = '\0';
      if (dVar12 == 0.0) {
        pcVar10 = buf + 0x1e;
        buf[30] = '0';
      }
      else {
        do {
          uVar6 = __umoddi3((ulong)dVar12,10);
          pcVar10 = pcVar10 + -1;
          *pcVar10 = (char)uVar6 + '0';
          dVar12 = (double)__udivdi3((ulong)dVar12,10);
        } while (dVar12 != 0.0);
      }
      fmt = (char *)(pbVar3 + 2);
      if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
        pcVar10 = pcVar11;
      }
      cVar7 = *pcVar10;
      if (*pcVar10 == '\0') goto switchD_0027f0d4_caseD_49;
      do {
        pcVar10 = pcVar10 + 1;
        (*(code *)_putchar)(cVar7);
        cVar7 = *pcVar10;
      } while (*pcVar10 != '\0');
      break;
    case 0x48:
      if (lVar9 == 0x6c) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = *ap;
      }
      else if (lVar9 == 0x68) {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)(ulong)*ap;
      }
      else {
                    /* WARNING: Load size is inaccurate */
        dVar12 = (double)ZEXT48(*ap);
      }
      ap = (void *)((int)ap + 8);
      pcVar10 = buf + 0x1f;
      buf[31] = '\0';
      if (dVar12 == 0.0) {
        pcVar10 = buf + 0x1e;
        buf[30] = '0';
      }
      else {
        do {
          cVar7 = (char)((ulong)dVar12 & 0xf);
          cVar4 = cVar7 + '0';
          if (9 < ((ulong)dVar12 & 0xf)) {
            cVar4 = cVar7 + 'W';
          }
          pcVar10 = pcVar10 + -1;
          dVar12 = (double)((ulong)dVar12 >> 4);
          *pcVar10 = cVar4;
        } while (dVar12 != 0.0);
      }
      fmt = (char *)(pbVar3 + 2);
      if ((pcVar11 != (char *)0x0) && (pcVar11 < pcVar10)) {
        pcVar10 = pcVar11;
      }
      cVar7 = *pcVar10;
      if (*pcVar10 == '\0') goto switchD_0027f0d4_caseD_49;
      do {
        pcVar10 = pcVar10 + 1;
        (*(code *)_putchar)(cVar7);
        cVar7 = *pcVar10;
      } while (*pcVar10 != '\0');
      break;
    default:
      goto switchD_0027f0d4_caseD_49;
    }
  }
  else {
    fmt = (char *)((byte *)fmt + 1);
    (*(code *)_putchar)();
  }
  goto LAB_0027f5f8;
switchD_0027f0d4_caseD_3c:
  lVar9 = 0x6c;
  goto LAB_0027f0a8;
switchD_0027f0d4_caseD_49:
  fmt = (char *)(pbVar3 + 2);
LAB_0027f5f8:
  bVar1 = *fmt;
  bVar2 = *fmt;
  goto joined_r0x0027f080;
}

void kprintf(char *fmt) {
  undefined local_38 [56];
  
  _printf(fmt,local_38);
  return;
}

void scePrintf(char *fmt) {
	void (*save)(/* parameters unknown */);
	
  undefined1 *puVar1;
  undefined local_38 [56];
  
  puVar1 = _putchar;
  _putchar = deci2Putchar;
  _printf(fmt,local_38);
  _putchar = puVar1;
  return;
}
