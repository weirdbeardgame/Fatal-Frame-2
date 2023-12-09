// STATUS: NOT STARTED

#include "kf_rem_pio2.h"

static int init_jk[0] = {
};

static float PIo2[0] = {
};

static float zero = 0.f;
static float one = 1.f;
static float two8 = 256.f;
static float twon8 = 0.00390625f;

int __kernel_rem_pio2f(float *x, float *y, int e0, int nx, int prec, __int32_t *ipio2) {
	__int32_t jz;
	__int32_t jx;
	__int32_t jv;
	__int32_t jp;
	__int32_t carry;
	__int32_t n;
	__int32_t iq[20];
	__int32_t i;
	__int32_t j;
	__int32_t k;
	__int32_t m;
	__int32_t q0;
	__int32_t ih;
	float z;
	float fw;
	float f[20];
	float fq[20];
	float q[20];
	
  int iVar1;
  uint uVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  uint uStack_1b4;
  int iq [20];
  float f [20];
  float fq [20];
  float q [20];
  float *local_70;
  int local_6c;
  int *local_68;
  
  iVar19 = e0 + -3;
  if (e0 + -3 < 0) {
    iVar19 = e0 + 4;
  }
  iVar19 = iVar19 >> 3;
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  iVar1 = *(int *)(&init_jk + prec * 4);
  iVar18 = nx + -1;
  iVar15 = e0 + iVar19 * -8;
  iVar17 = iVar15 + -8;
  iVar13 = iVar19 - iVar18;
  local_70 = x;
  local_6c = prec;
  local_68 = ipio2;
  if (-1 < iVar18 + iVar1) {
    iVar16 = iVar18 + iVar1 + 1;
    piVar10 = ipio2 + iVar13;
    pfVar7 = f;
    do {
      if (iVar13 < 0) {
        *pfVar7 = 0.0;
      }
      else {
        *pfVar7 = (float)*piVar10;
      }
      iVar16 = iVar16 + -1;
      pfVar7 = pfVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar16 != 0);
  }
  iVar16 = 0;
  iVar13 = iVar1;
  if (-1 < iVar1) {
    pfVar7 = q;
    iVar11 = iVar18;
    do {
      fVar23 = 0.0;
      if (-1 < iVar18) {
        pfVar4 = f + iVar11;
        pfVar8 = local_70;
        iVar14 = nx;
        do {
          fVar20 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          fVar21 = *pfVar4;
          pfVar4 = pfVar4 + -1;
          iVar14 = iVar14 + -1;
          fVar23 = fVar23 + fVar20 * fVar21;
        } while (iVar14 != 0);
      }
      iVar16 = iVar16 + 1;
      *pfVar7 = fVar23;
      iVar11 = iVar11 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar16 <= iVar1);
  }
  do {
    pfVar7 = q + iVar13;
    fVar23 = *pfVar7;
    piVar10 = iq;
    for (iVar16 = iVar13; 0 < iVar16; iVar16 = iVar16 + -1) {
      pfVar7 = pfVar7 + -1;
      fVar21 = fVar23 - (float)(int)(fVar23 * 0.00390625) * 256.0;
      fVar23 = *pfVar7 + (float)(int)(fVar23 * 0.00390625);
      *piVar10 = (int)fVar21;
      piVar10 = piVar10 + 1;
    }
    fVar23 = scalbnf(fVar23,iVar17);
    iVar16 = 0;
    fVar21 = floorf(fVar23 * 0.125);
    fVar23 = fVar23 - fVar21 * 8.0;
    uVar22 = (uint)fVar23;
    fVar23 = fVar23 - (float)uVar22;
    if (iVar17 < 1) {
      if (iVar17 == 0) {
        iVar16 = (int)(&uStack_1b4)[iVar13] >> 8;
      }
      else if (0.5 <= fVar23) {
        iVar16 = 2;
      }
    }
    else {
      uVar9 = (&uStack_1b4)[iVar13];
      iVar16 = (int)uVar9 >> (8U - iVar17 & 0x1f);
      uVar22 = uVar22 + iVar16;
      uVar9 = uVar9 - (iVar16 << (8U - iVar17 & 0x1f));
      (&uStack_1b4)[iVar13] = uVar9;
      iVar16 = (int)uVar9 >> (7U - iVar17 & 0x1f);
    }
    if (0 < iVar16) {
      uVar22 = uVar22 + 1;
      bVar3 = false;
      piVar10 = iq;
      iVar11 = iVar13;
      if (0 < iVar13) {
        do {
          iVar14 = *piVar10;
          if (bVar3) {
            iVar5 = 0xff - iVar14;
LAB_0029a7bc:
            *piVar10 = iVar5;
          }
          else {
            iVar5 = 0x100 - iVar14;
            if (iVar14 != 0) {
              bVar3 = true;
              goto LAB_0029a7bc;
            }
          }
          iVar11 = iVar11 + -1;
          piVar10 = piVar10 + 1;
        } while (iVar11 != 0);
      }
      if (0 < iVar17) {
        if (iVar17 == 1) {
          puVar12 = &uStack_1b4 + iVar13;
          uVar9 = *puVar12 & 0x7f;
        }
        else {
          if (iVar17 != 2) goto LAB_0029a824;
          puVar12 = &uStack_1b4 + iVar13;
          uVar9 = *puVar12 & 0x3f;
        }
        *puVar12 = uVar9;
      }
LAB_0029a824:
      if ((iVar16 == 2) && (fVar23 = 1.0 - fVar23, bVar3)) {
        fVar21 = scalbnf(1.0,iVar17);
        fVar23 = fVar23 - fVar21;
      }
    }
    iVar11 = iVar13 + -1;
    if (fVar23 != 0.0) {
LAB_0029a998:
      if (fVar23 == 0.0) {
        iVar17 = iVar13 + -1;
        piVar10 = iq + iVar17;
        iVar15 = iVar15 + -0x10;
        iVar19 = *piVar10;
        while (iVar19 == 0) {
          piVar10 = piVar10 + -1;
          iVar17 = iVar17 + -1;
          iVar15 = iVar15 + -8;
          iVar19 = *piVar10;
        }
      }
      else {
        fVar23 = scalbnf(fVar23,-iVar17);
        if (256.0 <= fVar23) {
          iVar17 = iVar13 + 1;
          iq[iVar13] = (int)(fVar23 - (float)(int)(fVar23 * 0.00390625) * 256.0);
          iq[iVar17] = (int)(float)(int)(fVar23 * 0.00390625);
        }
        else {
          iq[iVar13] = (int)fVar23;
          iVar17 = iVar13;
          iVar15 = iVar17;
        }
      }
      fVar23 = scalbnf(1.0,iVar15);
      for (iVar19 = iVar17; -1 < iVar19; iVar19 = iVar19 + -1) {
        fVar21 = fVar23 * (float)iq[iVar19];
        fVar23 = fVar23 * 0.00390625;
        q[iVar19] = fVar21;
      }
      if (-1 < iVar17) {
        iVar19 = iVar17;
        do {
          fVar23 = 0.0;
          iVar15 = 0;
          if (iVar1 < 0) {
            iVar13 = iVar17 - iVar19;
          }
          else {
            iVar13 = iVar17 - iVar19;
            if (-1 < iVar13) {
              pfVar8 = q + iVar19;
              fVar21 = _PIo2;
              pfVar7 = (float *)&PIo2;
              while( true ) {
                pfVar7 = pfVar7 + 1;
                fVar20 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                iVar15 = iVar15 + 1;
                fVar23 = fVar23 + fVar21 * fVar20;
                if (iVar1 < iVar15) break;
                if (iVar13 < iVar15) {
                  iVar13 = iVar13 * 4;
                  goto LAB_0029ab40;
                }
                fVar21 = *pfVar7;
              }
            }
          }
          iVar13 = iVar13 << 2;
LAB_0029ab40:
          iVar19 = iVar19 + -1;
          *(float *)((int)fq + iVar13) = fVar23;
        } while (-1 < iVar19);
      }
      if (local_6c < 3) {
        if (local_6c < 1) {
          if (local_6c == 0) {
            fVar23 = 0.0;
            if (-1 < iVar17) {
              pfVar7 = fq + iVar17;
              do {
                fVar21 = *pfVar7;
                pfVar7 = pfVar7 + -1;
                iVar17 = iVar17 + -1;
                fVar23 = fVar23 + fVar21;
              } while (-1 < iVar17);
            }
            *y = fVar23;
            if (iVar16 != 0) {
              *y = -fVar23;
            }
          }
        }
        else {
          fVar23 = 0.0;
          if (-1 < iVar17) {
            pfVar7 = fq + iVar17;
            iVar19 = iVar17;
            do {
              fVar21 = *pfVar7;
              pfVar7 = pfVar7 + -1;
              iVar19 = iVar19 + -1;
              fVar23 = fVar23 + fVar21;
            } while (-1 < iVar19);
          }
          *y = fVar23;
          if (iVar16 != 0) {
            *y = -fVar23;
          }
          fVar23 = fq[0] - fVar23;
          if (0 < iVar17) {
            pfVar7 = fq;
            do {
              pfVar7 = pfVar7 + 1;
              iVar17 = iVar17 + -1;
              fVar23 = fVar23 + *pfVar7;
            } while (iVar17 != 0);
          }
          y[1] = fVar23;
          if (iVar16 != 0) {
            y[1] = -fVar23;
          }
        }
      }
      else if (local_6c == 3) {
        if (0 < iVar17) {
          pfVar7 = f + iVar17 + 0x13;
          iVar19 = iVar17;
          do {
            fVar23 = *pfVar7;
            iVar19 = iVar19 + -1;
            fVar21 = fVar23 + pfVar7[1];
            *pfVar7 = fVar21;
            pfVar7[1] = pfVar7[1] + (fVar23 - fVar21);
            pfVar7 = pfVar7 + -1;
          } while (0 < iVar19);
        }
        if (1 < iVar17) {
          pfVar7 = f + iVar17 + 0x13;
          iVar19 = iVar17;
          do {
            fVar23 = *pfVar7;
            iVar19 = iVar19 + -1;
            fVar21 = fVar23 + pfVar7[1];
            *pfVar7 = fVar21;
            pfVar7[1] = pfVar7[1] + (fVar23 - fVar21);
            pfVar7 = pfVar7 + -1;
          } while (1 < iVar19);
        }
        fVar23 = 0.0;
        if (1 < iVar17) {
          pfVar7 = fq + iVar17;
          do {
            fVar21 = *pfVar7;
            pfVar7 = pfVar7 + -1;
            iVar17 = iVar17 + -1;
            fVar23 = fVar23 + fVar21;
          } while (1 < iVar17);
        }
        if (iVar16 != 0) {
          fVar23 = -fVar23;
          fq[0] = -fq[0];
          fq[1] = -fq[1];
        }
        y[2] = fVar23;
        *y = fq[0];
        y[1] = fq[1];
      }
      return uVar22 & 7;
    }
    uVar9 = 0;
    if (iVar1 <= iVar11) {
      puVar12 = (uint *)(iq + iVar11);
      do {
        uVar2 = *puVar12;
        puVar12 = puVar12 + -1;
        iVar11 = iVar11 + -1;
        uVar9 = uVar9 | uVar2;
      } while (iVar1 <= iVar11);
    }
    if (uVar9 != 0) goto LAB_0029a998;
    iVar16 = 1;
    if (iq[iVar1 + -1] == 0) {
      puVar12 = &uStack_1b4 + iVar1;
      do {
        puVar12 = puVar12 + -1;
        iVar16 = iVar16 + 1;
      } while (*puVar12 == 0);
    }
    iVar16 = iVar13 + iVar16;
    iVar11 = iVar13 + 1;
    iVar13 = iVar16;
    if (iVar11 <= iVar16) {
      piVar10 = local_68 + iVar19 + iVar11;
      pfVar7 = q + iVar11;
      pfVar8 = f + iVar18 + iVar11;
      do {
        fVar23 = 0.0;
        *pfVar8 = (float)*piVar10;
        if (-1 < iVar18) {
          pfVar6 = f + iVar18 + iVar11;
          pfVar4 = local_70;
          iVar14 = nx;
          do {
            fVar20 = *pfVar4;
            pfVar4 = pfVar4 + 1;
            fVar21 = *pfVar6;
            pfVar6 = pfVar6 + -1;
            iVar14 = iVar14 + -1;
            fVar23 = fVar23 + fVar20 * fVar21;
          } while (iVar14 != 0);
        }
        iVar11 = iVar11 + 1;
        *pfVar7 = fVar23;
        pfVar8 = pfVar8 + 1;
        pfVar7 = pfVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar11 <= iVar16);
    }
  } while( true );
}
