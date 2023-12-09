// STATUS: NOT STARTED

#include "vfscanf.h"

int __svfscanf(FILE *fp, char *fmt0, va_list ap) {
	char *fmt;
	int c;
	size_t width;
	char *p;
	int n;
	int flags;
	char *p0;
	int nassigned;
	int nread;
	int base;
	wchar_t wc;
	long unsigned int (*ccfn)(/* parameters unknown */);
	char ccltab[256];
	char buf[350];
	char *lptr;
	short int *sp;
	int *ip;
	float *flp;
	long double *ldp;
	double *dp;
	long int *lp;
	static short int basefix[17] = {
		/* [0] = */ 10,
		/* [1] = */ 1,
		/* [2] = */ 2,
		/* [3] = */ 3,
		/* [4] = */ 4,
		/* [5] = */ 5,
		/* [6] = */ 6,
		/* [7] = */ 7,
		/* [8] = */ 8,
		/* [9] = */ 9,
		/* [10] = */ 10,
		/* [11] = */ 11,
		/* [12] = */ 12,
		/* [13] = */ 13,
		/* [14] = */ 14,
		/* [15] = */ 15,
		/* [16] = */ 16
	};
	size_t sum;
	size_t r;
	long unsigned int res;
	long int leading_zeroes;
	long int zeroes;
	long int exp_adjust;
	char *exp_start;
	double res;
	long int new_exp;
	
  char cVar1;
  uchar uVar2;
  double *pdVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  code *pcVar16;
  int iVar17;
  double dVar18;
  int iVar19;
  long lVar20;
  byte *pbVar21;
  double dVar22;
  uint uVar23;
  long lVar24;
  char *pcVar25;
  uint uVar26;
  double *pdVar27;
  uchar *puVar28;
  uchar *puVar29;
  uint uVar30;
  char *pcVar31;
  long lVar32;
  double **ppdVar33;
  long lVar34;
  char ccltab [256];
  char buf [350];
  int nassigned;
  undefined1 *ccfn;
  long leading_zeroes;
  char *exp_start;
  
  dVar22 = 0.0;
  ccfn = (undefined1 *)0x0;
  nassigned = 0;
  lVar34 = 0;
LAB_002a8158:
  lVar20 = (long)*fmt0;
LAB_002a815c:
  do {
    while( true ) {
      pcVar31 = fmt0 + 1;
      if (lVar20 == 0) {
        return nassigned;
      }
      if ((""[(int)lVar20 + 1] & 8U) == 0) break;
      iVar17 = fp->_r;
      while( true ) {
        if (iVar17 < 1) {
          iVar17 = __srefill(fp);
          if (iVar17 != 0) {
            return nassigned;
          }
          pbVar21 = fp->_p;
        }
        else {
          pbVar21 = fp->_p;
        }
        if ((""[*pbVar21 + 1] & 8U) == 0) break;
        fp->_p = pbVar21 + 1;
        dVar22 = (double)(long)(SUB84(dVar22,0) + 1);
        fp->_r = fp->_r + -1;
        iVar17 = fp->_r;
      }
      lVar20 = (long)*pcVar31;
      fmt0 = pcVar31;
    }
    pcVar25 = fmt0;
    if (lVar20 == 0x25) {
      uVar30 = 0;
      uVar26 = 0;
      bVar7 = false;
      bVar13 = false;
      bVar9 = false;
      bVar4 = false;
      bVar14 = false;
      bVar6 = false;
      pcVar25 = pcVar31;
LAB_002a8208:
      cVar1 = *pcVar25;
      fmt0 = pcVar25 + 1;
      switch(cVar1) {
      case '\0':
        return -1;
      default:
        goto switchD_002a8228_caseD_1;
      case '%':
        pcVar31 = fmt0;
        goto LAB_002a8234;
      case '*':
        bVar6 = true;
        pcVar25 = fmt0;
        goto LAB_002a8208;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        uVar30 = (uVar30 * 10 + (int)cVar1) - 0x30;
        pcVar25 = fmt0;
        goto LAB_002a8208;
      case 'D':
        uVar26 = 1;
      case 'd':
        pcVar16 = strtol;
        break;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        uVar23 = 4;
        goto LAB_002a8438;
      case 'L':
        bVar7 = true;
        pcVar25 = fmt0;
        goto LAB_002a8208;
      case 'O':
        uVar26 = 1;
      case 'o':
        uVar23 = 3;
        lVar34 = 8;
        ccfn = strtoul;
        goto LAB_002a8438;
      case 'X':
      case 'x':
        uVar26 = uVar26 | 0x100;
        goto LAB_002a8398;
      case '[':
        fmt0 = __sccl(ccltab,fmt0);
        bVar4 = true;
        uVar23 = 1;
        goto LAB_002a8438;
      case 'c':
        bVar4 = true;
        uVar23 = 0;
        goto LAB_002a8438;
      case 'h':
        bVar14 = true;
        pcVar25 = fmt0;
        goto LAB_002a8208;
      case 'i':
        uVar23 = 3;
        lVar34 = 0;
        ccfn = strtol;
        goto LAB_002a8438;
      case 'l':
        goto switchD_002a8228_caseD_6c;
      case 'n':
        if (bVar6) {
          lVar20 = (long)*fmt0;
          goto LAB_002a815c;
        }
        if (bVar14) {
                    /* WARNING: Load size is inaccurate */
          *(short *)*ap = SUB82(dVar22,0);
          ap = (double **)((int)ap + 8);
        }
        else if (uVar26 == 0) {
                    /* WARNING: Load size is inaccurate */
          *(int *)*ap = SUB84(dVar22,0);
          ap = (double **)((int)ap + 8);
        }
        else {
                    /* WARNING: Load size is inaccurate */
          **ap = dVar22;
          ap = (double **)((int)ap + 8);
        }
        goto LAB_002a8158;
      case 'p':
        uVar26 = uVar26 | 0x110;
        bVar13 = true;
LAB_002a8398:
        bVar9 = true;
        uVar23 = 3;
        ccfn = strtoul;
        lVar34 = 0x10;
        goto LAB_002a8438;
      case 's':
        uVar23 = 2;
        goto LAB_002a8438;
      case 'u':
        pcVar16 = strtoul;
      }
      uVar23 = 3;
      lVar34 = 10;
      ccfn = pcVar16;
      goto LAB_002a8438;
    }
LAB_002a8234:
    iVar17 = 0;
    do {
      if (fp->_r < 1) {
        iVar15 = __srefill(fp);
        if (iVar15 != 0) goto LAB_002a8d5c;
        pbVar21 = fp->_p;
      }
      else {
        pbVar21 = fp->_p;
      }
      if ((ulong)*pbVar21 != (long)*pcVar25) {
        return nassigned;
      }
      iVar17 = iVar17 + 1;
      fp->_p = pbVar21 + 1;
      dVar22 = (double)(long)(SUB84(dVar22,0) + 1);
      fp->_r = fp->_r + -1;
      pcVar25 = pcVar25 + 1;
    } while (iVar17 < 1);
    lVar20 = (long)*pcVar31;
    fmt0 = pcVar31;
  } while( true );
switchD_002a8228_caseD_6c:
  uVar26 = 1;
  pcVar25 = fmt0;
  goto LAB_002a8208;
switchD_002a8228_caseD_1:
  uVar23 = 3;
  lVar34 = 10;
  ccfn = strtol;
  uVar26 = uVar26 | (byte)""[cVar1 + 1] & 1;
LAB_002a8438:
  if ((fp->_r < 1) && (iVar17 = __srefill(fp), iVar17 != 0)) goto LAB_002a8d5c;
  if (!bVar4) {
    pbVar21 = fp->_p;
    while ((""[*pbVar21 + 1] & 8U) != 0) {
      iVar17 = fp->_r + -1;
      fp->_r = iVar17;
      if (iVar17 < 1) {
        iVar17 = __srefill(fp);
        if (iVar17 != 0) goto LAB_002a8d5c;
      }
      else {
        fp->_p = pbVar21 + 1;
      }
      dVar22 = (double)(long)(SUB84(dVar22,0) + 1);
      pbVar21 = fp->_p;
    }
  }
  if (4 < uVar23) {
    lVar20 = (long)*fmt0;
    goto LAB_002a815c;
  }
  iVar17 = SUB84(dVar22,0);
  switch(uVar23) {
  case 0:
    if (uVar30 == 0) {
      uVar30 = 1;
    }
    if (bVar6) {
      iVar15 = 0;
      goto LAB_002a8500;
    }
                    /* WARNING: Load size is inaccurate */
    uVar30 = fread(*ap,1,uVar30,fp);
    if (uVar30 == 0) goto LAB_002a8d5c;
    dVar22 = (double)(long)(int)(iVar17 + uVar30);
    nassigned = nassigned + 1;
    ap = (double **)((int)ap + 8);
    goto LAB_002a8158;
  case 1:
    if (uVar30 == 0) {
      uVar30 = 0xffffffff;
    }
    if (bVar6) {
      iVar15 = 0;
      do {
        pbVar21 = fp->_p;
        while( true ) {
          if (ccltab[*pbVar21] == '\0') goto LAB_002a8618;
          uVar30 = uVar30 - 1;
          fp->_p = pbVar21 + 1;
          iVar19 = fp->_r + -1;
          iVar15 = iVar15 + 1;
          fp->_r = iVar19;
          if (uVar30 == 0) goto LAB_002a8618;
          if (iVar19 < 1) break;
          pbVar21 = fp->_p;
        }
        iVar19 = __srefill(fp);
      } while (iVar19 == 0);
      if (iVar15 != 0) {
LAB_002a8618:
        if (iVar15 == 0) {
          return nassigned;
        }
        dVar22 = (double)(long)(iVar17 + iVar15);
        goto LAB_002a8158;
      }
    }
    else {
      ppdVar33 = (double **)((int)ap + 8);
                    /* WARNING: Load size is inaccurate */
      pdVar3 = *ap;
      pdVar27 = pdVar3;
      do {
        pbVar21 = fp->_p;
        while( true ) {
          if (ccltab[*pbVar21] == '\0') goto LAB_002a869c;
          uVar30 = uVar30 - 1;
          fp->_r = fp->_r + -1;
          *(byte *)pdVar27 = *pbVar21;
          pdVar27 = (double *)((int)pdVar27 + 1);
          fp->_p = pbVar21 + 1;
          if (uVar30 == 0) goto LAB_002a869c;
          if (fp->_r < 1) break;
          pbVar21 = fp->_p;
        }
        iVar15 = __srefill(fp);
      } while (iVar15 == 0);
      if (pdVar27 != pdVar3) {
LAB_002a869c:
        iVar15 = (int)pdVar27 - (int)pdVar3;
        if (iVar15 == 0) {
          return nassigned;
        }
        *(byte *)pdVar27 = 0;
        nassigned = nassigned + 1;
        goto LAB_002a8734;
      }
    }
    goto LAB_002a8d5c;
  case 2:
    if (uVar30 == 0) {
      uVar30 = 0xffffffff;
    }
    if (!bVar6) {
                    /* WARNING: Load size is inaccurate */
      pdVar3 = *ap;
      pdVar27 = pdVar3;
      do {
        pbVar21 = fp->_p;
        while( true ) {
          if ((""[*pbVar21 + 1] & 8U) != 0) {
            *(byte *)pdVar27 = 0;
            goto LAB_002a87bc;
          }
          uVar30 = uVar30 - 1;
          fp->_r = fp->_r + -1;
          *(byte *)pdVar27 = *pbVar21;
          pdVar27 = (double *)((int)pdVar27 + 1);
          fp->_p = pbVar21 + 1;
          if (uVar30 == 0) goto LAB_002a87b8;
          if (fp->_r < 1) break;
          pbVar21 = fp->_p;
        }
        iVar15 = __srefill(fp);
      } while (iVar15 == 0);
LAB_002a87b8:
      *(byte *)pdVar27 = 0;
LAB_002a87bc:
      dVar22 = (double)(long)(int)((int)pdVar27 + (iVar17 - (int)pdVar3));
      nassigned = nassigned + 1;
      ap = (double **)((int)ap + 8);
      goto LAB_002a8158;
    }
    iVar15 = 0;
    do {
      pbVar21 = fp->_p;
      while( true ) {
        if ((""[*pbVar21 + 1] & 8U) != 0) {
          dVar22 = (double)(long)(iVar17 + iVar15);
          goto LAB_002a8158;
        }
        uVar30 = uVar30 - 1;
        fp->_p = pbVar21 + 1;
        iVar19 = fp->_r + -1;
        iVar15 = iVar15 + 1;
        fp->_r = iVar19;
        ppdVar33 = (double **)ap;
        if (uVar30 == 0) goto LAB_002a8734;
        if (iVar19 < 1) break;
        pbVar21 = fp->_p;
      }
      iVar19 = __srefill(fp);
    } while (iVar19 == 0);
LAB_002a8734:
    dVar22 = (double)(long)(iVar17 + iVar15);
    ap = ppdVar33;
    goto LAB_002a8158;
  case 3:
    uVar30 = uVar30 - 1;
    bVar11 = true;
    bVar7 = true;
    bVar4 = true;
    if (0x15c < uVar30) {
      uVar30 = 0x15c;
    }
    puVar28 = (uchar *)buf;
    iVar17 = uVar30 + 1;
    if (iVar17 == 0) goto LAB_002a893c;
    puVar29 = fp->_p;
    goto LAB_002a8800;
  }
  uVar30 = uVar30 - 1;
  puVar28 = (uchar *)buf;
  if (0x15c < uVar30) {
    uVar30 = 0x15c;
  }
  uVar26 = uVar26 | 0x3c0;
  bVar4 = true;
  iVar17 = uVar30 + 1;
  lVar32 = 0;
  lVar20 = 0;
  if (iVar17 != 0) {
    puVar29 = fp->_p;
    do {
      switch(*puVar29) {
      case '+':
      case '-':
        if (!bVar4) goto switchD_002a8ab0_caseD_2c;
        uVar26 = uVar26 & 0xffffffbf;
        bVar4 = false;
        break;
      default:
        goto switchD_002a8ab0_caseD_2c;
      case '.':
        if ((uVar26 & 0x100) == 0) goto switchD_002a8ab0_caseD_2c;
        uVar26 = uVar26 & 0xfffffebf;
        bVar4 = false;
        leading_zeroes = lVar32;
        break;
      case '0':
        if ((uVar26 & 0x80) == 0) goto switchD_002a8ab0_caseD_31;
        lVar32 = lVar32 + 1;
        uVar26 = uVar26 & 0xffffffbf;
        bVar4 = false;
        goto LAB_002a8b64;
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
switchD_002a8ab0_caseD_31:
        uVar26 = uVar26 & 0xffffff3f;
        bVar4 = false;
        break;
      case 'E':
      case 'e':
        if ((uVar26 & 0x280) != 0x200) {
          if ((uVar26 & 0x200) == 0) goto switchD_002a8ab0_caseD_2c;
          if (lVar32 == 0) goto LAB_002a8bbc;
        }
        if ((uVar26 & 0x100) == 0) {
          lVar20 = lVar32 - leading_zeroes;
          exp_start = (char *)puVar28;
        }
        lVar32 = 0;
        uVar26 = uVar26 & 0xfffffcff | 0xc0;
        bVar4 = true;
      }
      *puVar28 = *puVar29;
      puVar28 = puVar28 + 1;
      iVar17 = iVar17 + -1;
LAB_002a8b64:
      iVar19 = SUB84(dVar22,0) + 1;
      iVar15 = fp->_r + -1;
      fp->_r = iVar15;
      if (iVar15 < 1) {
        iVar15 = __srefill(fp);
        dVar22 = (double)(long)iVar19;
        if (iVar15 != 0) break;
      }
      else {
        fp->_p = fp->_p + 1;
      }
      dVar22 = (double)(long)iVar19;
      if (iVar17 == 0) break;
      puVar29 = fp->_p;
    } while( true );
  }
switchD_002a8ab0_caseD_2c:
  if (lVar32 != 0) {
    uVar26 = uVar26 & 0xffffff7f;
  }
LAB_002a8bbc:
  if ((uVar26 & 0x80) != 0) {
    if ((uVar26 & 0x200) != 0) {
      if (puVar28 <= buf) {
        return nassigned;
      }
      do {
        puVar28 = puVar28 + -1;
        ungetc((int)(char)*puVar28,fp);
      } while (buf < puVar28);
      return nassigned;
    }
    puVar29 = puVar28 + -1;
    lVar24 = (long)(char)*puVar29;
    iVar17 = SUB84(dVar22,0);
    dVar22 = (double)(long)(iVar17 + -1);
    if ((lVar24 != 0x65) && (lVar24 != 0x45)) {
      ungetc((int)(char)*puVar29,fp);
      lVar24 = (long)(char)puVar28[-2];
      dVar22 = (double)(long)(iVar17 + -2);
      puVar29 = puVar28 + -2;
    }
    puVar28 = puVar29;
    ungetc((int)lVar24,fp);
  }
  if (bVar6) {
    lVar20 = (long)*fmt0;
    goto LAB_002a815c;
  }
  *puVar28 = '\0';
  if ((uVar26 & 0x300) == 0x200) {
    lVar20 = lVar32 - leading_zeroes;
    exp_start = (char *)puVar28;
  }
  else {
    if (lVar20 == 0) goto LAB_002a8cec;
    atol(exp_start + 1);
  }
  if (lVar20 != 0) {
    if (buf + 0x149 <= exp_start) {
      exp_start = buf + 0x148;
    }
    sprintf(exp_start,"e%ld");
  }
LAB_002a8cec:
  dVar18 = (double)atof(buf);
  if (((uVar26 & 1) != 0) || (bVar7)) {
                    /* WARNING: Load size is inaccurate */
    **ap = dVar18;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    *(float *)*ap = (float)dVar18;
  }
  nassigned = nassigned + 1;
  ap = (double **)((int)ap + 8);
  goto LAB_002a8158;
LAB_002a8800:
  switch(*puVar29) {
  case '+':
  case '-':
    if (bVar7) {
      bVar7 = false;
      goto LAB_002a88f0;
    }
  default:
    goto LAB_002a893c;
  case '0':
    if (lVar34 == 0) {
      lVar34 = 8;
      bVar9 = true;
    }
    if (bVar4) {
      uVar30 = 0xfffffd3f;
      bVar12 = 0;
      bVar10 = 1;
      bVar8 = 0;
      bVar5 = 0;
    }
    else {
      uVar30 = 0xfffffe3f;
      bVar12 = 0;
      bVar10 = 0;
      bVar8 = 0;
      bVar5 = 1;
    }
    break;
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
    lVar34 = (long)(short)(&basefix_0)[(int)lVar34];
    uVar26 = uVar26 & 0xfffffe3f;
    bVar11 = false;
    bVar9 = false;
    bVar7 = false;
    goto LAB_002a88f0;
  case '8':
  case '9':
    lVar34 = (long)(short)(&basefix_0)[(int)lVar34];
    if (lVar34 < 9) goto LAB_002a893c;
    uVar30 = 0xfffffe3f;
    bVar12 = 0;
    bVar10 = 0;
    bVar8 = 0;
    bVar5 = 1;
    break;
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
    if (lVar34 < 0xb) goto LAB_002a893c;
    uVar30 = 0xfffffe3f;
    bVar12 = 0;
    bVar10 = 0;
    bVar8 = 0;
    bVar5 = 1;
    break;
  case 'X':
  case 'x':
    if ((!bVar9) || (puVar28 != (uchar *)(buf + 1))) goto LAB_002a893c;
    bVar5 = 1;
    uVar30 = 0xfffffeff;
    bVar12 = 1;
    bVar10 = 0;
    bVar8 = 1;
    lVar34 = 0x10;
  }
  uVar26 = uVar26 & uVar30;
  bVar11 = (bool)(bVar11 & bVar12);
  bVar9 = (bool)(bVar9 & bVar10);
  bVar7 = (bool)(bVar7 & bVar8);
  bVar4 = (bool)(bVar4 & bVar5);
LAB_002a88f0:
  *puVar28 = *puVar29;
  puVar28 = puVar28 + 1;
  iVar15 = fp->_r + -1;
  fp->_r = iVar15;
  if (iVar15 < 1) {
    iVar15 = __srefill(fp);
    if (iVar15 != 0) goto LAB_002a893c;
  }
  else {
    fp->_p = fp->_p + 1;
  }
  iVar17 = iVar17 + -1;
  if (iVar17 == 0) goto LAB_002a893c;
  puVar29 = fp->_p;
  goto LAB_002a8800;
LAB_002a893c:
  if (bVar11) {
    if (puVar28 <= buf) {
      return nassigned;
    }
    ungetc((int)(char)puVar28[-1],fp);
    return nassigned;
  }
  uVar2 = puVar28[-1];
  if ((uVar2 == 'x') || (uVar2 == 'X')) {
    ungetc((int)(char)uVar2,fp);
    puVar28 = puVar28 + -1;
  }
  if (!bVar6) {
    *puVar28 = '\0';
    dVar18 = (double)(*(code *)ccfn)(buf,0,lVar34);
    dVar22 = (double)((ulong)dVar22 & 0xffffffff);
    if (bVar13) {
                    /* WARNING: Load size is inaccurate */
      *(int *)*ap = SUB84(dVar18,0);
    }
    else if (bVar14) {
                    /* WARNING: Load size is inaccurate */
      *(short *)*ap = SUB82(dVar18,0);
    }
    else if ((uVar26 & 1) == 0) {
                    /* WARNING: Load size is inaccurate */
      *(int *)*ap = SUB84(dVar18,0);
    }
    else {
                    /* WARNING: Load size is inaccurate */
      **ap = dVar18;
    }
    ap = (void *)((int)ap + 8);
    nassigned = nassigned + 1;
  }
  dVar22 = (double)(long)(int)(puVar28 + (SUB84(dVar22,0) - (int)buf));
  goto LAB_002a8158;
  while( true ) {
    iVar15 = iVar15 + uVar26;
    uVar30 = uVar30 - uVar26;
    fp->_p = fp->_p + uVar26;
    iVar19 = __srefill(fp);
    if (iVar19 != 0) break;
LAB_002a8500:
    uVar26 = fp->_r;
    if (uVar30 <= uVar26) {
      fp->_r = uVar26 - uVar30;
      fp->_p = fp->_p + uVar30;
      dVar22 = (double)(long)(int)(iVar17 + iVar15 + uVar30);
      goto LAB_002a8158;
    }
  }
  if (iVar15 != 0) {
    dVar22 = (double)(long)(iVar17 + iVar15);
    goto LAB_002a8158;
  }
LAB_002a8d5c:
  iVar17 = -1;
  if (nassigned != 0) {
    iVar17 = nassigned;
  }
  return iVar17;
}

char* __sccl(char *tab, char *fmt) {
	int c;
	int n;
	int v;
	
  bool bVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  lVar5 = (long)*fmt;
  bVar1 = lVar5 == 0x5e;
  pcVar4 = fmt + 1;
  if (bVar1) {
    lVar5 = (long)*pcVar4;
    pcVar4 = fmt + 2;
  }
  iVar7 = 0xff;
  pcVar3 = tab + 0xff;
  do {
    iVar7 = iVar7 + -1;
    *pcVar3 = bVar1;
    pcVar3 = pcVar3 + -1;
  } while (-1 < iVar7);
  pcVar3 = pcVar4 + -1;
  if (lVar5 != 0) {
LAB_002a8e08:
    do {
      iVar7 = (int)lVar5;
      lVar6 = lVar5;
      while( true ) {
        tab[iVar7] = '\x01' - bVar1;
        cVar2 = *pcVar4;
        pcVar3 = pcVar4;
        while( true ) {
          lVar5 = (long)cVar2;
          pcVar4 = pcVar3 + 1;
          if (lVar5 != 0x2d) break;
          lVar5 = (long)*pcVar4;
          if (lVar5 == 0x5d) {
            lVar5 = 0x2d;
            goto LAB_002a8e08;
          }
          if (lVar5 < lVar6) {
            lVar5 = 0x2d;
            goto LAB_002a8e08;
          }
          pcVar3 = pcVar3 + 2;
          do {
            iVar7 = (int)lVar6 + 1;
            lVar6 = (long)iVar7;
            tab[iVar7] = '\x01' - bVar1;
          } while (lVar6 < lVar5);
          cVar2 = *pcVar3;
        }
        if (lVar5 < 0x2e) break;
        if (lVar5 == 0x5d) {
          return pcVar4;
        }
        iVar7 = (int)cVar2;
        lVar6 = lVar5;
      }
    } while (lVar5 != 0);
  }
  return pcVar3;
}
