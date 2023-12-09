// STATUS: NOT STARTED

#include "qsort.h"

void qsort(void *a, size_t n, size_t es, int (*cmp)(/* parameters unknown */)) {
	char *pa;
	char *pb;
	char *pc;
	char *pd;
	char *pl;
	char *pm;
	char *pn;
	int d;
	int r;
	int swaptype;
	int swap_cnt;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	long int i;
	long int *pi;
	long int *pj;
	long int i;
	char *pi;
	char *pj;
	
  undefined uVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint local_c0;
  int swaptype;
  int swap_cnt;
  int local_a8;
  ulong uVar17;
  
  uVar12 = (ulong)(int)es;
  local_c0 = n;
  while( true ) {
    bVar5 = 2;
    if (((uint)a & 7) == 0) {
      if ((uVar12 & 7) == 0) {
        bVar5 = uVar12 != 8;
      }
      else {
        bVar5 = 2;
      }
    }
    bVar4 = false;
    if (local_c0 < 7) break;
    puVar20 = (undefined8 *)((local_c0 >> 1) * es + (int)a);
    if (7 < local_c0) {
      puVar18 = (undefined8 *)((local_c0 - 1) * es + (int)a);
      puVar7 = (undefined8 *)a;
      puVar19 = puVar18;
      if (0x28 < local_c0) {
        iVar11 = (local_c0 >> 3) * es;
        puVar7 = (undefined8 *)((int)a + iVar11);
        puVar19 = (undefined8 *)(iVar11 * 2 + (int)a);
        lVar6 = (*(code *)cmp)(a,puVar7);
        if (lVar6 < 0) {
          lVar6 = (*(code *)cmp)(puVar7,puVar19);
          if ((-1 < lVar6) && (lVar6 = (*(code *)cmp)(a,puVar19), puVar7 = puVar19, -1 < lVar6)) {
            puVar7 = (undefined8 *)a;
          }
        }
        else {
          lVar6 = (*(code *)cmp)(puVar7,puVar19);
          if ((lVar6 < 1) &&
             (lVar6 = (*(code *)cmp)(a,puVar19), puVar7 = (undefined8 *)a, -1 < lVar6)) {
            puVar7 = puVar19;
          }
        }
        puVar9 = (undefined8 *)((int)puVar20 - iVar11);
        puVar19 = (undefined8 *)((int)puVar20 + iVar11);
        lVar6 = (*(code *)cmp)(puVar9,puVar20);
        if (lVar6 < 0) {
          lVar6 = (*(code *)cmp)(puVar20,puVar19);
          if ((-1 < lVar6) &&
             (lVar6 = (*(code *)cmp)(puVar9,puVar19), puVar20 = puVar19, -1 < lVar6)) {
            puVar20 = puVar9;
          }
        }
        else {
          lVar6 = (*(code *)cmp)(puVar20,puVar19);
          if ((lVar6 < 1) && (lVar6 = (*(code *)cmp)(puVar9,puVar19), puVar20 = puVar9, -1 < lVar6))
          {
            puVar20 = puVar19;
          }
        }
        puVar19 = (undefined8 *)((int)puVar18 - iVar11);
        puVar9 = (undefined8 *)((int)puVar18 + iVar11 * -2);
        lVar6 = (*(code *)cmp)(puVar9,puVar19);
        if (lVar6 < 0) {
          lVar6 = (*(code *)cmp)(puVar19,puVar18);
          if ((-1 < lVar6) &&
             (lVar6 = (*(code *)cmp)(puVar9,puVar18), puVar19 = puVar18, -1 < lVar6)) {
            puVar19 = puVar9;
          }
        }
        else {
          lVar6 = (*(code *)cmp)(puVar19,puVar18);
          if ((lVar6 < 1) && (lVar6 = (*(code *)cmp)(puVar9,puVar18), puVar19 = puVar9, -1 < lVar6))
          {
            puVar19 = puVar18;
          }
        }
      }
      lVar6 = (*(code *)cmp)(puVar7,puVar20);
      if (lVar6 < 0) {
        lVar6 = (*(code *)cmp)(puVar20,puVar19);
        if ((-1 < lVar6) && (lVar6 = (*(code *)cmp)(puVar7,puVar19), puVar20 = puVar19, -1 < lVar6))
        {
          puVar20 = puVar7;
        }
      }
      else {
        lVar6 = (*(code *)cmp)(puVar20,puVar19);
        if ((lVar6 < 1) && (lVar6 = (*(code *)cmp)(puVar7,puVar19), puVar20 = puVar7, -1 < lVar6)) {
          puVar20 = puVar19;
        }
      }
    }
    local_a8 = local_c0 - 1;
    if (bVar5 == 0) {
                    /* WARNING: Load size is inaccurate */
      uVar8 = *a;
      *(undefined8 *)a = *puVar20;
      *puVar20 = uVar8;
    }
    else if (bVar5 < 2) {
      lVar6 = (long)(int)(es >> 3);
      puVar7 = (undefined8 *)a;
      do {
        uVar8 = *puVar7;
        lVar6 = lVar6 + -1;
        *puVar7 = *puVar20;
        puVar7 = puVar7 + 1;
        *puVar20 = uVar8;
        puVar20 = puVar20 + 1;
      } while (0 < lVar6);
    }
    else {
      uVar15 = (ulong)es;
      puVar7 = (undefined8 *)a;
      do {
        uVar1 = *(undefined *)puVar7;
        uVar15 = uVar15 - 1;
        *(undefined *)puVar7 = *(undefined *)puVar20;
        puVar7 = (undefined8 *)((int)puVar7 + 1);
        *(undefined *)puVar20 = uVar1;
        puVar20 = (undefined8 *)((int)puVar20 + 1);
      } while (0 < (long)uVar15);
    }
    puVar20 = (undefined8 *)((int)a + es);
    puVar9 = (undefined8 *)(local_a8 * es + (int)a);
    puVar7 = puVar20;
    puVar19 = puVar20;
    puVar18 = puVar9;
LAB_002a3dd0:
    while ((bVar2 = puVar9 < puVar7, !bVar2 && (lVar6 = (*(code *)cmp)(puVar7,a), lVar6 < 1))) {
      if (lVar6 == 0) {
        bVar4 = true;
        if (bVar5 == 0) {
          uVar8 = *puVar19;
          *puVar19 = *puVar7;
          *puVar7 = uVar8;
        }
        else {
          uVar15 = (ulong)(es >> 3);
          puVar14 = puVar19;
          puVar10 = puVar7;
          if (bVar5 < 2) {
            do {
              uVar8 = *puVar14;
              uVar15 = uVar15 - 1;
              *puVar14 = *puVar10;
              *puVar10 = uVar8;
              puVar14 = puVar14 + 1;
              puVar10 = puVar10 + 1;
            } while (0 < (long)uVar15);
          }
          else {
            uVar15 = (ulong)es;
            do {
              uVar1 = *(undefined *)puVar14;
              uVar15 = uVar15 - 1;
              *(undefined *)puVar14 = *(undefined *)puVar10;
              puVar14 = (undefined8 *)((int)puVar14 + 1);
              *(undefined *)puVar10 = uVar1;
              puVar10 = (undefined8 *)((int)puVar10 + 1);
            } while (0 < (long)uVar15);
          }
        }
        puVar19 = (undefined8 *)((int)puVar19 + es);
        puVar7 = (undefined8 *)((int)puVar7 + es);
      }
      else {
        puVar7 = (undefined8 *)((int)puVar7 + es);
      }
    }
    while (!bVar2) {
      lVar6 = (*(code *)cmp)(puVar9,a);
      if (lVar6 < 0) goto code_r0x002a3f08;
      if (lVar6 == 0) {
        bVar4 = true;
        if (bVar5 == 0) {
          uVar8 = *puVar9;
          *puVar9 = *puVar18;
          *puVar18 = uVar8;
        }
        else {
          uVar15 = (ulong)(es >> 3);
          puVar14 = puVar9;
          puVar10 = puVar18;
          if (bVar5 < 2) {
            do {
              uVar8 = *puVar14;
              uVar15 = uVar15 - 1;
              *puVar14 = *puVar10;
              *puVar10 = uVar8;
              puVar14 = puVar14 + 1;
              puVar10 = puVar10 + 1;
            } while (0 < (long)uVar15);
          }
          else {
            uVar15 = (ulong)es;
            do {
              uVar1 = *(undefined *)puVar14;
              uVar15 = uVar15 - 1;
              *(undefined *)puVar14 = *(undefined *)puVar10;
              puVar14 = (undefined8 *)((int)puVar14 + 1);
              *(undefined *)puVar10 = uVar1;
              puVar10 = (undefined8 *)((int)puVar10 + 1);
            } while (0 < (long)uVar15);
          }
        }
        puVar18 = (undefined8 *)((int)puVar18 - es);
      }
      puVar9 = (undefined8 *)((int)puVar9 - es);
      bVar2 = puVar9 < puVar7;
    }
    iVar11 = (int)puVar7 - (int)puVar19;
    uVar15 = (ulong)iVar11;
    if (!bVar4) {
      puVar7 = (undefined8 *)(local_c0 * es + (int)a);
      if (puVar7 <= puVar20) {
        return;
      }
      puVar19 = puVar20;
      goto LAB_002a4074;
    }
    uVar13 = uVar15;
    if ((long)((int)puVar19 - (int)a) < (long)uVar15) {
      uVar13 = (long)((int)puVar19 - (int)a);
    }
    iVar3 = local_c0 * es;
    if (0 < (long)uVar13) {
      puVar20 = (undefined8 *)((int)puVar7 - (uint)uVar13);
      if (bVar5 < 2) {
        lVar6 = (long)(int)((uint)uVar13 >> 3);
        puVar19 = (undefined8 *)a;
        do {
          uVar8 = *puVar19;
          lVar6 = lVar6 + -1;
          *puVar19 = *puVar20;
          puVar19 = puVar19 + 1;
          *puVar20 = uVar8;
          puVar20 = puVar20 + 1;
        } while (0 < lVar6);
      }
      else {
        uVar13 = uVar13 & 0xffffffff;
        puVar19 = (undefined8 *)a;
        do {
          uVar1 = *(undefined *)puVar19;
          uVar13 = uVar13 - 1;
          *(undefined *)puVar19 = *(undefined *)puVar20;
          puVar19 = (undefined8 *)((int)puVar19 + 1);
          *(undefined *)puVar20 = uVar1;
          puVar20 = (undefined8 *)((int)puVar20 + 1);
        } while (0 < (long)uVar13);
      }
    }
    iVar16 = (int)puVar18 - (int)puVar9;
    uVar17 = (ulong)iVar16;
    uVar13 = (ulong)(int)((int)a + ((iVar3 - (int)puVar18) - es));
    if (uVar17 < uVar13) {
      uVar13 = uVar17;
    }
    if (0 < (long)uVar13) {
      puVar20 = (undefined8 *)((int)a + (iVar3 - (uint)uVar13));
      if (bVar5 < 2) {
        lVar6 = (long)(int)((uint)uVar13 >> 3);
        do {
          uVar8 = *puVar7;
          lVar6 = lVar6 + -1;
          *puVar7 = *puVar20;
          puVar7 = puVar7 + 1;
          *puVar20 = uVar8;
          puVar20 = puVar20 + 1;
        } while (0 < lVar6);
      }
      else {
        uVar13 = uVar13 & 0xffffffff;
        do {
          uVar1 = *(undefined *)puVar7;
          uVar13 = uVar13 - 1;
          *(undefined *)puVar7 = *(undefined *)puVar20;
          puVar7 = (undefined8 *)((int)puVar7 + 1);
          *(undefined *)puVar20 = uVar1;
          puVar20 = (undefined8 *)((int)puVar20 + 1);
        } while (0 < (long)uVar13);
      }
    }
    if (uVar12 < uVar15) {
      if (uVar12 == 0) {
        trap(7);
      }
      qsort(a,iVar11 / (int)es,es,cmp);
    }
    if (uVar17 <= uVar12) {
      return;
    }
    local_c0 = iVar16 / (int)es;
    if (uVar12 == 0) {
      trap(7);
    }
    a = (void *)((int)a + (iVar3 - iVar16));
  }
  puVar20 = (undefined8 *)((int)a + es);
  puVar7 = (undefined8 *)(local_c0 * es + (int)a);
  if (puVar7 <= puVar20) {
    return;
  }
  puVar19 = puVar20;
LAB_002a39bc:
  do {
    if (a < puVar20) {
      puVar18 = (undefined8 *)((int)puVar20 - es);
      lVar6 = (*(code *)cmp)(puVar18,puVar20);
      if (0 < lVar6) {
        if (bVar5 == 0) {
          uVar8 = *puVar20;
          *puVar20 = *puVar18;
          *puVar18 = uVar8;
          puVar20 = puVar18;
        }
        else {
          lVar6 = (long)(int)(es >> 3);
          puVar9 = puVar20;
          puVar14 = puVar18;
          if (bVar5 < 2) {
            do {
              uVar8 = *puVar9;
              lVar6 = lVar6 + -1;
              *puVar9 = *puVar14;
              *puVar14 = uVar8;
              puVar20 = puVar18;
              puVar9 = puVar9 + 1;
              puVar14 = puVar14 + 1;
            } while (0 < lVar6);
          }
          else {
            uVar12 = (ulong)es;
            do {
              uVar1 = *(undefined *)puVar9;
              uVar12 = uVar12 - 1;
              *(undefined *)puVar9 = *(undefined *)puVar14;
              puVar9 = (undefined8 *)((int)puVar9 + 1);
              *(undefined *)puVar14 = uVar1;
              puVar14 = (undefined8 *)((int)puVar14 + 1);
              puVar20 = puVar18;
            } while (0 < (long)uVar12);
          }
        }
        goto LAB_002a39bc;
      }
    }
    puVar20 = (undefined8 *)((int)puVar19 + es);
    puVar19 = puVar20;
    if (puVar7 <= puVar20) {
      return;
    }
  } while( true );
code_r0x002a3f08:
  if (bVar5 == 0) {
    uVar8 = *puVar7;
    *puVar7 = *puVar9;
    *puVar9 = uVar8;
  }
  else {
    uVar15 = (ulong)(es >> 3);
    puVar14 = puVar7;
    puVar10 = puVar9;
    if (bVar5 < 2) {
      do {
        uVar8 = *puVar14;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar10;
        *puVar10 = uVar8;
        puVar14 = puVar14 + 1;
        puVar10 = puVar10 + 1;
      } while (0 < (long)uVar15);
    }
    else {
      uVar15 = (ulong)es;
      do {
        uVar1 = *(undefined *)puVar14;
        uVar15 = uVar15 - 1;
        *(undefined *)puVar14 = *(undefined *)puVar10;
        puVar14 = (undefined8 *)((int)puVar14 + 1);
        *(undefined *)puVar10 = uVar1;
        puVar10 = (undefined8 *)((int)puVar10 + 1);
      } while (0 < (long)uVar15);
    }
  }
  puVar7 = (undefined8 *)((int)puVar7 + es);
  bVar4 = true;
  puVar9 = (undefined8 *)((int)puVar9 - es);
  goto LAB_002a3dd0;
LAB_002a4074:
  if (a < puVar20) {
    puVar18 = (undefined8 *)((int)puVar20 - es);
    lVar6 = (*(code *)cmp)(puVar18,puVar20);
    if (0 < lVar6) {
      if (bVar5 == 0) {
        uVar8 = *puVar20;
        *puVar20 = *puVar18;
        *puVar18 = uVar8;
        puVar20 = puVar18;
      }
      else {
        lVar6 = (long)(int)(es >> 3);
        puVar9 = puVar20;
        puVar14 = puVar18;
        if (bVar5 < 2) {
          do {
            uVar8 = *puVar9;
            lVar6 = lVar6 + -1;
            *puVar9 = *puVar14;
            *puVar14 = uVar8;
            puVar20 = puVar18;
            puVar9 = puVar9 + 1;
            puVar14 = puVar14 + 1;
          } while (0 < lVar6);
        }
        else {
          uVar12 = (ulong)es;
          do {
            uVar1 = *(undefined *)puVar9;
            uVar12 = uVar12 - 1;
            *(undefined *)puVar9 = *(undefined *)puVar14;
            puVar9 = (undefined8 *)((int)puVar9 + 1);
            *(undefined *)puVar14 = uVar1;
            puVar14 = (undefined8 *)((int)puVar14 + 1);
            puVar20 = puVar18;
          } while (0 < (long)uVar12);
        }
      }
      goto LAB_002a4074;
    }
  }
  puVar20 = (undefined8 *)((int)puVar19 + es);
  puVar19 = puVar20;
  if (puVar7 <= puVar20) {
    return;
  }
  goto LAB_002a4074;
}
