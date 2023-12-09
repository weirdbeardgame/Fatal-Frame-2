// STATUS: NOT STARTED

#include "libgcc2.h"

typedef void (*func_ptr)(/* parameters unknown */);

// warning: multiple differing types with the same name (#521, storage classe not equal)
enum exception_source_language {
	EH_LANG_C89 = 1,
	EH_LANG_C = 2,
	EH_LANG_Ada83 = 3,
	EH_LANG_C_plus_plus = 4,
	EH_LANG_Cobol74 = 5,
	EH_LANG_Cobol85 = 6,
	EH_LANG_Fortran77 = 7,
	EH_LANG_Fortran90 = 8,
	EH_LANG_Pascal83 = 9,
	EH_LANG_Modula2 = 10,
	EH_LANG_Java = 11,
	EH_LANG_Mips_Assembler = 32769
};

struct eh_full_context {
	eh_context c;
	void *top_elt[2];
};

typedef int ptr_type;

static UQItype __clz_tab[0] = {
};

static UQItype __clz_tab[0] = {
};

static UQItype __clz_tab[0] = {
};

static UQItype __clz_tab[0] = {
};

void (*__terminate_func)(/* parameters unknown */) = __default_terminate;
static eh_context* (*get_eh_context)(/* parameters unknown */) = eh_context_initialize;
static int dwarf_reg_size_table_initialized = 0;
void *key_value[256];
static __gthread_key_t eh_context_key;
static char dwarf_reg_size_table[122];

DItype __muldi3(DItype u, DItype v) {
  ulong uVar1;
  
  uVar1 = (u & 0xffffffffU) * (v & 0xffffffffU);
  return uVar1 & 0xffffffff |
         (long)((int)(uVar1 >> 0x20) +
               (int)u * (int)((ulong)v >> 0x20) + (int)((ulong)u >> 0x20) * (int)v) << 0x20;
}

DItype __divdi3(DItype u, DItype v) {
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar2 = (uint)((ulong)u >> 0x20);
  uVar19 = 0;
  if (u < 0) {
    uVar19 = 0xffffffff;
    uVar2 = -(uint)(-(int)u != 0) - uVar2;
    u = CONCAT44(uVar2,-(int)u);
  }
  if (v >> 0x20 < 0) {
    uVar19 = ~uVar19;
    v = CONCAT44(-(uint)(-(int)v != 0) - (int)((ulong)v >> 0x20),-(int)v);
  }
  uVar11 = v >> 0x20;
  uVar16 = (uint)u;
  uVar17 = (ulong)(int)uVar16;
  uVar15 = (ulong)(int)uVar2;
  uVar12 = (uint)v;
  uVar13 = (ulong)(int)uVar12;
  uVar7 = (uint)((ulong)v >> 0x20);
  if (uVar11 == 0) {
    if (uVar13 <= uVar15) {
      if (uVar13 == 0) {
        trap(7);
        uVar13 = (ulong)(1 / (int)uVar7);
      }
      if (uVar13 < 0x10000) {
        iVar14 = 8;
        if (uVar13 < 0x100) {
          iVar14 = 0;
        }
      }
      else {
        iVar14 = 0x10;
        if (0xffffff < uVar13) {
          iVar14 = 0x18;
        }
      }
      uVar18 = (uint)uVar13;
      uVar7 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar18 >> iVar14] + iVar14);
      if (uVar7 == 0) {
        iVar14 = uVar2 - uVar18;
        uVar12 = 1;
        uVar7 = uVar18 >> 0x10;
        uVar18 = uVar18 & 0xffff;
      }
      else {
        uVar17 = (ulong)(int)(uVar16 << (uVar7 & 0x1f));
        uVar12 = uVar2 >> (0x20 - uVar7 & 0x1f);
        uVar2 = uVar2 << (uVar7 & 0x1f) | uVar16 >> (0x20 - uVar7 & 0x1f);
        uVar16 = uVar18 << (uVar7 & 0x1f);
        uVar13 = (ulong)(int)uVar16;
        uVar7 = uVar16 >> 0x10;
        iVar14 = (int)uVar12 / (int)uVar7;
        uVar18 = uVar16 & 0xffff;
        if (uVar7 == 0) {
          trap(7);
        }
        iVar3 = iVar14 * uVar18;
        uVar12 = (int)uVar12 % (int)uVar7 << 0x10 | uVar2 >> 0x10;
        iVar8 = iVar14;
        if ((ulong)(long)(int)uVar12 < (ulong)(long)iVar3) {
          uVar12 = uVar12 + uVar16;
          iVar8 = iVar14 + -1;
          if ((ulong)(long)(int)uVar12 < uVar13) goto LAB_0029b6b8;
          if ((ulong)(long)(int)uVar12 < (ulong)(long)iVar3) {
            iVar8 = iVar14 + -2;
            uVar12 = uVar12 + uVar16;
            goto LAB_0029b6b8;
          }
          iVar3 = uVar12 - iVar3;
        }
        else {
LAB_0029b6b8:
          iVar3 = uVar12 - iVar3;
        }
        if (uVar7 == 0) {
          trap(7);
        }
        uVar9 = iVar3 / (int)uVar7;
        iVar14 = uVar9 * uVar18;
        uVar11 = (long)(iVar3 % (int)uVar7 << 0x10) | (long)(int)uVar2 & 0xffffU;
        uVar12 = uVar9;
        if (uVar11 < (ulong)(long)iVar14) {
          iVar3 = (int)uVar11 + uVar16;
          uVar11 = (ulong)iVar3;
          uVar12 = uVar9 - 1;
          if ((uVar13 <= uVar11) && (uVar11 < (ulong)(long)iVar14)) {
            uVar12 = uVar9 - 2;
            uVar11 = (ulong)(int)(iVar3 + uVar16);
          }
        }
        iVar14 = (int)uVar11 - iVar14;
        uVar12 = iVar8 << 0x10 | uVar12;
      }
      iVar3 = iVar14 / (int)uVar7;
      if (uVar7 == 0) {
        trap(7);
      }
      iVar8 = iVar3 * uVar18;
      uVar2 = iVar14 % (int)uVar7 << 0x10 | (uint)uVar17 >> 0x10;
      iVar14 = (int)uVar13;
      if ((ulong)(long)(int)uVar2 < (ulong)(long)iVar8) {
        iVar5 = uVar2 + iVar14;
        iVar4 = iVar3 + -1;
        if (uVar13 <= (ulong)(long)iVar5) {
          if ((ulong)(long)iVar8 <= (ulong)(long)iVar5) {
            iVar8 = iVar5 - iVar8;
            goto LAB_0029b784;
          }
          iVar4 = iVar3 + -2;
          iVar5 = iVar5 + iVar14;
        }
        iVar8 = iVar5 - iVar8;
      }
      else {
        iVar8 = uVar2 - iVar8;
        iVar4 = iVar3;
      }
LAB_0029b784:
      if (uVar7 == 0) {
        trap(7);
      }
      uVar16 = iVar8 / (int)uVar7;
      uVar11 = (long)(iVar8 % (int)uVar7 << 0x10) | uVar17 & 0xffff;
      uVar2 = uVar16;
      if (uVar11 < (ulong)(long)(int)(uVar16 * uVar18)) {
        uVar11 = (ulong)((int)uVar11 + iVar14);
        uVar2 = uVar16 - 1;
        if ((uVar13 <= uVar11) && (uVar11 < (ulong)(long)(int)(uVar16 * uVar18))) {
          uVar2 = uVar16 - 2;
        }
      }
      uVar2 = iVar4 << 0x10 | uVar2;
      goto LAB_0029b998;
    }
    if (uVar13 < 0x10000) {
      iVar14 = 8;
      if (uVar13 < 0x100) {
        iVar14 = 0;
      }
    }
    else {
      iVar14 = 0x10;
      if (0xffffff < uVar13) {
        iVar14 = 0x18;
      }
    }
    uVar7 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar12 >> iVar14] + iVar14);
    if (uVar7 != 0) {
      uVar17 = (ulong)(int)(uVar16 << (uVar7 & 0x1f));
      uVar2 = uVar2 << (uVar7 & 0x1f) | uVar16 >> (0x20 - uVar7 & 0x1f);
      uVar13 = (ulong)(int)(uVar12 << (uVar7 & 0x1f));
    }
    uVar12 = (uint)uVar13;
    uVar7 = uVar12 >> 0x10;
    iVar14 = (int)uVar2 / (int)uVar7;
    if (uVar7 == 0) {
      trap(7);
    }
    iVar3 = iVar14 * (uVar12 & 0xffff);
    uVar2 = (int)uVar2 % (int)uVar7 << 0x10 | (uint)uVar17 >> 0x10;
    if ((ulong)(long)(int)uVar2 < (ulong)(long)iVar3) {
      iVar4 = uVar2 + uVar12;
      iVar8 = iVar14 + -1;
      if (uVar13 <= (ulong)(long)iVar4) {
        if ((ulong)(long)iVar3 <= (ulong)(long)iVar4) {
          iVar3 = iVar4 - iVar3;
          goto LAB_0029b544;
        }
        iVar8 = iVar14 + -2;
        iVar4 = iVar4 + uVar12;
      }
      iVar3 = iVar4 - iVar3;
    }
    else {
      iVar3 = uVar2 - iVar3;
      iVar8 = iVar14;
    }
LAB_0029b544:
    if (uVar7 == 0) {
      trap(7);
    }
    uVar16 = iVar3 / (int)uVar7;
    uVar11 = (ulong)(int)(uVar16 * (uVar12 & 0xffff));
    uVar15 = (long)(iVar3 % (int)uVar7 << 0x10) | uVar17 & 0xffff;
    uVar2 = uVar16;
    if (uVar15 < uVar11) {
      uVar15 = (ulong)(int)((int)uVar15 + uVar12);
      uVar2 = uVar16 - 1;
      if ((uVar13 <= uVar15) && (uVar15 < uVar11)) {
        uVar2 = uVar16 - 2;
      }
    }
    uVar2 = iVar8 << 0x10 | uVar2;
  }
  else if (uVar15 < uVar11) {
    uVar2 = 0;
  }
  else {
    if (uVar11 < 0x10000) {
      iVar14 = 8;
      if (uVar11 < 0x100) {
        iVar14 = 0;
      }
    }
    else {
      iVar14 = 0x10;
      if (0xffffff < uVar11) {
        iVar14 = 0x18;
      }
    }
    uVar18 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar14] + iVar14);
    uVar9 = 0x20 - uVar18;
    if (uVar18 == 0) {
      uVar2 = 1;
      if ((uVar15 <= uVar11) && (uVar2 = 0, uVar13 <= uVar17)) {
        uVar2 = 1;
      }
    }
    else {
      uVar10 = uVar7 << (uVar18 & 0x1f) | uVar12 >> (uVar9 & 0x1f);
      uVar7 = uVar2 >> (uVar9 & 0x1f);
      uVar9 = uVar2 << (uVar18 & 0x1f) | uVar16 >> (uVar9 & 0x1f);
      uVar2 = uVar10 >> 0x10;
      iVar14 = (int)uVar7 / (int)uVar2;
      if (uVar2 == 0) {
        trap(7);
      }
      uVar1 = iVar14 * (uVar10 & 0xffff);
      uVar7 = (int)uVar7 % (int)uVar2 << 0x10 | uVar9 >> 0x10;
      if (uVar7 < uVar1) {
        uVar7 = uVar7 + uVar10;
        iVar3 = iVar14 + -1;
        if (uVar10 <= uVar7) {
          if (uVar1 <= uVar7) {
            iVar8 = uVar7 - uVar1;
            goto LAB_0029b8fc;
          }
          iVar3 = iVar14 + -2;
          uVar7 = uVar7 + uVar10;
        }
        iVar8 = uVar7 - uVar1;
      }
      else {
        iVar8 = uVar7 - uVar1;
        iVar3 = iVar14;
      }
LAB_0029b8fc:
      if (uVar2 == 0) {
        trap(7);
      }
      uVar7 = iVar8 / (int)uVar2;
      uVar1 = uVar7 * (uVar10 & 0xffff);
      uVar9 = iVar8 % (int)uVar2 << 0x10 | uVar9 & 0xffff;
      uVar2 = uVar7;
      if (uVar9 < uVar1) {
        uVar9 = uVar9 + uVar10;
        uVar2 = uVar7 - 1;
        if ((uVar10 <= uVar9) && (uVar9 < uVar1)) {
          uVar9 = uVar9 + uVar10;
          uVar2 = uVar7 - 2;
        }
      }
      uVar2 = iVar3 << 0x10 | uVar2;
      lVar6 = (ulong)uVar2 * (ulong)(uVar12 << (uVar18 & 0x1f));
      uVar7 = (uint)((ulong)lVar6 >> 0x20);
      if (uVar9 - uVar1 < uVar7) {
        uVar2 = uVar2 - 1;
      }
      else {
        uVar12 = 0;
        if ((uVar7 != uVar9 - uVar1) || ((uint)lVar6 <= uVar16 << (uVar18 & 0x1f)))
        goto LAB_0029b998;
        uVar2 = uVar2 - 1;
      }
    }
  }
  uVar12 = 0;
LAB_0029b998:
  lVar6 = CONCAT44(uVar12,uVar2);
  if (uVar19 != 0) {
    lVar6 = CONCAT44(-(uint)(-uVar2 != 0) - uVar12,-uVar2);
  }
  return lVar6;
}

DItype __moddi3(DItype u, DItype v) {
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  ulong local_20;
  
  uVar3 = (uint)((ulong)u >> 0x20);
  iVar18 = 0;
  if (u < 0) {
    iVar18 = -1;
    uVar3 = -(uint)(-(int)u != 0) - uVar3;
    u = CONCAT44(uVar3,-(int)u);
  }
  if (v >> 0x20 < 0) {
    v = CONCAT44(-(uint)(-(int)v != 0) - (int)((ulong)v >> 0x20),-(int)v);
  }
  uVar11 = v >> 0x20;
  uVar14 = (uint)u;
  uVar16 = (ulong)(int)uVar14;
  uVar12 = (ulong)(int)uVar3;
  uVar7 = (uint)v;
  uVar9 = (ulong)(int)uVar7;
  uVar13 = (uint)((ulong)v >> 0x20);
  if (uVar11 != 0) {
    if (uVar12 < uVar11) {
      local_20 = u & 0xffffffffU | uVar12 << 0x20;
      goto LAB_0029c034;
    }
    if (uVar11 < 0x10000) {
      iVar5 = 8;
      if (uVar11 < 0x100) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 0x10;
      if (0xffffff < uVar11) {
        iVar5 = 0x18;
      }
    }
    uVar4 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar13 >> iVar5] + iVar5);
    uVar8 = 0x20 - uVar4;
    if (uVar4 == 0) {
      if ((uVar11 < uVar12) || (uVar11 = uVar16, uVar9 <= uVar16)) {
        uVar11 = (ulong)(int)(uVar14 - uVar7);
        uVar12 = (ulong)(int)((uVar3 - uVar13) - (uint)(uVar16 < uVar11));
      }
      if (&stack0x00000000 != &GRA3DVU1MEM_SPOTPOS1) {
        local_20 = uVar11 & 0xffffffff | uVar12 << 0x20;
      }
      goto LAB_0029c034;
    }
    uVar15 = uVar14 << (uVar4 & 0x1f);
    uVar10 = uVar13 << (uVar4 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
    uVar13 = uVar3 >> (uVar8 & 0x1f);
    uVar7 = uVar7 << (uVar4 & 0x1f);
    uVar14 = uVar3 << (uVar4 & 0x1f) | uVar14 >> (uVar8 & 0x1f);
    uVar3 = uVar10 >> 0x10;
    iVar5 = (int)uVar13 / (int)uVar3;
    if (uVar3 == 0) {
      trap(7);
    }
    uVar2 = iVar5 * (uVar10 & 0xffff);
    uVar13 = (int)uVar13 % (int)uVar3 << 0x10 | uVar14 >> 0x10;
    if (uVar13 < uVar2) {
      uVar13 = uVar13 + uVar10;
      iVar17 = iVar5 + -1;
      if (uVar10 <= uVar13) {
        if (uVar2 <= uVar13) {
          iVar6 = uVar13 - uVar2;
          goto LAB_0029bf3c;
        }
        iVar17 = iVar5 + -2;
        uVar13 = uVar13 + uVar10;
      }
      iVar6 = uVar13 - uVar2;
    }
    else {
      iVar6 = uVar13 - uVar2;
      iVar17 = iVar5;
    }
LAB_0029bf3c:
    if (uVar3 == 0) {
      trap(7);
    }
    uVar13 = iVar6 / (int)uVar3;
    uVar2 = uVar13 * (uVar10 & 0xffff);
    uVar3 = iVar6 % (int)uVar3 << 0x10 | uVar14 & 0xffff;
    if (uVar3 < uVar2) {
      uVar3 = uVar3 + uVar10;
      uVar14 = uVar13 - 1;
      if (uVar10 <= uVar3) {
        if (uVar2 <= uVar3) {
          uVar3 = uVar3 - uVar2;
          goto LAB_0029bf98;
        }
        uVar14 = uVar13 - 2;
        uVar3 = uVar3 + uVar10;
      }
      uVar3 = uVar3 - uVar2;
    }
    else {
      uVar3 = uVar3 - uVar2;
      uVar14 = uVar13;
    }
LAB_0029bf98:
    lVar1 = (ulong)(iVar17 << 0x10 | uVar14) * (ulong)uVar7;
    uVar13 = (uint)lVar1;
    uVar14 = (uint)((ulong)lVar1 >> 0x20);
    if ((uVar3 < uVar14) || ((uVar14 == uVar3 && (uVar15 < uVar13)))) {
      uVar7 = uVar13 - uVar7;
      lVar1 = CONCAT44((uVar14 - uVar10) - (uint)(uVar13 < uVar7),uVar7);
    }
    uVar7 = uVar15 - (int)lVar1;
    if (&stack0x00000000 != &GRA3DVU1MEM_SPOTPOS1) {
      uVar3 = (uVar3 - (int)((ulong)lVar1 >> 0x20)) - (uint)(uVar15 < uVar7);
      local_20 = CONCAT44(uVar3 >> (uVar4 & 0x1f),uVar3 << (uVar8 & 0x1f) | uVar7 >> (uVar4 & 0x1f))
      ;
    }
    goto LAB_0029c034;
  }
  if (uVar12 < uVar9) {
    if (uVar9 < 0x10000) {
      iVar5 = 8;
      if (uVar9 < 0x100) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 0x10;
      if (0xffffff < uVar9) {
        iVar5 = 0x18;
      }
    }
    uVar13 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar5] + iVar5);
    if (uVar13 != 0) {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar3 = uVar3 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
      uVar9 = (ulong)(int)(uVar7 << (uVar13 & 0x1f));
    }
    uVar14 = (uint)uVar9 >> 0x10;
    uVar7 = (uint)uVar9 & 0xffff;
  }
  else {
    if (uVar9 == 0) {
      trap(7);
      uVar9 = (ulong)(1 / (int)uVar13);
    }
    if (uVar9 < 0x10000) {
      iVar5 = 8;
      if (uVar9 < 0x100) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 0x10;
      if (0xffffff < uVar9) {
        iVar5 = 0x18;
      }
    }
    uVar7 = (uint)uVar9;
    uVar13 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar5] + iVar5);
    if (uVar13 == 0) {
      uVar3 = uVar3 - uVar7;
      uVar14 = uVar7 >> 0x10;
      uVar7 = uVar7 & 0xffff;
    }
    else {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar4 = uVar3 >> (0x20 - uVar13 & 0x1f);
      uVar3 = uVar3 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
      uVar8 = uVar7 << (uVar13 & 0x1f);
      uVar9 = (ulong)(int)uVar8;
      uVar14 = uVar8 >> 0x10;
      uVar7 = uVar8 & 0xffff;
      if (uVar14 == 0) {
        trap(7);
      }
      iVar5 = ((int)uVar4 / (int)uVar14) * uVar7;
      uVar4 = (int)uVar4 % (int)uVar14 << 0x10 | uVar3 >> 0x10;
      if ((ulong)(long)(int)uVar4 < (ulong)(long)iVar5) {
        uVar4 = uVar4 + uVar8;
        if (uVar9 <= (ulong)(long)(int)uVar4) {
          if ((ulong)(long)(int)uVar4 < (ulong)(long)iVar5) {
            uVar4 = uVar4 + uVar8;
          }
          goto LAB_0029bc80;
        }
        iVar5 = uVar4 - iVar5;
      }
      else {
LAB_0029bc80:
        iVar5 = uVar4 - iVar5;
      }
      if (uVar14 == 0) {
        trap(7);
      }
      iVar17 = (iVar5 / (int)uVar14) * uVar7;
      uVar11 = (long)(iVar5 % (int)uVar14 << 0x10) | (long)(int)uVar3 & 0xffffU;
      iVar5 = (int)uVar11;
      uVar3 = iVar5 - iVar17;
      if (uVar11 < (ulong)(long)iVar17) {
        iVar5 = iVar5 + uVar8;
        uVar3 = iVar5 - iVar17;
        if (uVar9 <= (ulong)(long)iVar5) {
          if ((ulong)(long)iVar5 < (ulong)(long)iVar17) {
            iVar5 = iVar5 + uVar8;
          }
          uVar3 = iVar5 - iVar17;
        }
      }
    }
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar5 = ((int)uVar3 / (int)uVar14) * uVar7;
  uVar3 = (int)uVar3 % (int)uVar14 << 0x10 | (uint)uVar16 >> 0x10;
  iVar17 = (int)uVar9;
  if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar5) {
    iVar6 = uVar3 + iVar17;
    if ((ulong)(long)iVar6 < uVar9) {
      iVar5 = iVar6 - iVar5;
    }
    else {
      if ((ulong)(long)iVar6 < (ulong)(long)iVar5) {
        iVar6 = iVar6 + iVar17;
      }
      iVar5 = iVar6 - iVar5;
    }
  }
  else {
    iVar5 = uVar3 - iVar5;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar6 = (iVar5 / (int)uVar14) * uVar7;
  uVar11 = (long)(iVar5 % (int)uVar14 << 0x10) | uVar16 & 0xffff;
  if (uVar11 < (ulong)(long)iVar6) {
    iVar5 = (int)uVar11 + iVar17;
    uVar11 = (ulong)iVar5;
    if ((uVar9 <= uVar11) && (uVar11 < (ulong)(long)iVar6)) {
      uVar11 = (long)(iVar5 + iVar17);
    }
  }
  if (&stack0x00000000 != &GRA3DVU1MEM_SPOTPOS1) {
    local_20 = (ulong)((uint)((int)uVar11 - iVar6) >> (uVar13 & 0x1f));
  }
LAB_0029c034:
  if (iVar18 != 0) {
    local_20 = CONCAT44(-(uint)(-(int)local_20 != 0) - (int)(local_20 >> 0x20),-(int)local_20);
  }
  return local_20;
}

UDItype __udivdi3(UDItype n, UDItype d) {
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  
  uVar14 = (long)d >> 0x20;
  uVar17 = (long)n >> 0x20;
  uVar15 = (uint)d;
  uVar16 = (ulong)(int)uVar15;
  uVar18 = (uint)n;
  uVar19 = (ulong)(int)uVar18;
  uVar9 = (uint)(n >> 0x20);
  uVar10 = (uint)(d >> 0x20);
  if (uVar14 == 0) {
    if (uVar16 <= uVar17) {
      if (uVar16 == 0) {
        trap(7);
        uVar16 = (ulong)(1 / (int)uVar10);
      }
      if (uVar16 < 0x10000) {
        iVar7 = 8;
        if (uVar16 < 0x100) {
          iVar7 = 0;
        }
      }
      else {
        iVar7 = 0x10;
        if (0xffffff < uVar16) {
          iVar7 = 0x18;
        }
      }
      uVar15 = (uint)uVar16;
      uVar10 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar15 >> iVar7] + iVar7);
      if (uVar10 == 0) {
        iVar5 = uVar9 - uVar15;
        uVar14 = 1;
        uVar10 = uVar15 >> 0x10;
        uVar15 = uVar15 & 0xffff;
      }
      else {
        uVar19 = (ulong)(int)(uVar18 << (uVar10 & 0x1f));
        uVar8 = uVar9 >> (0x20 - uVar10 & 0x1f);
        uVar9 = uVar9 << (uVar10 & 0x1f) | uVar18 >> (0x20 - uVar10 & 0x1f);
        uVar18 = uVar15 << (uVar10 & 0x1f);
        uVar16 = (ulong)(int)uVar18;
        uVar10 = uVar18 >> 0x10;
        iVar7 = (int)uVar8 / (int)uVar10;
        uVar15 = uVar18 & 0xffff;
        if (uVar10 == 0) {
          trap(7);
        }
        iVar4 = iVar7 * uVar15;
        uVar8 = (int)uVar8 % (int)uVar10 << 0x10 | uVar9 >> 0x10;
        iVar11 = iVar7;
        if ((ulong)(long)(int)uVar8 < (ulong)(long)iVar4) {
          uVar8 = uVar8 + uVar18;
          iVar11 = iVar7 + -1;
          if ((ulong)(long)(int)uVar8 < uVar16) goto LAB_0029c310;
          if ((ulong)(long)(int)uVar8 < (ulong)(long)iVar4) {
            iVar11 = iVar7 + -2;
            uVar8 = uVar8 + uVar18;
            goto LAB_0029c310;
          }
          iVar4 = uVar8 - iVar4;
        }
        else {
LAB_0029c310:
          iVar4 = uVar8 - iVar4;
        }
        if (uVar10 == 0) {
          trap(7);
        }
        iVar7 = iVar4 / (int)uVar10;
        uVar20 = (ulong)iVar7;
        iVar5 = iVar7 * uVar15;
        uVar17 = (long)(iVar4 % (int)uVar10 << 0x10) | (long)(int)uVar9 & 0xffffU;
        uVar14 = (ulong)(iVar11 << 0x10);
        if (uVar17 < (ulong)(long)iVar5) {
          iVar4 = (int)uVar17 + uVar18;
          uVar17 = (ulong)iVar4;
          uVar20 = (ulong)(iVar7 + -1);
          if (uVar16 <= uVar17) {
            uVar14 = (ulong)(iVar11 << 0x10);
            if ((ulong)(long)iVar5 <= uVar17) goto LAB_0029c370;
            uVar20 = (ulong)(iVar7 + -2);
            uVar17 = (ulong)(int)(iVar4 + uVar18);
          }
          uVar14 = (ulong)(iVar11 << 0x10);
        }
LAB_0029c370:
        iVar5 = (int)uVar17 - iVar5;
        uVar14 = uVar14 | uVar20;
      }
      iVar7 = iVar5 / (int)uVar10;
      if (uVar10 == 0) {
        trap(7);
      }
      iVar4 = iVar7 * uVar15;
      uVar9 = iVar5 % (int)uVar10 << 0x10 | (uint)uVar19 >> 0x10;
      iVar11 = (int)uVar16;
      if ((ulong)(long)(int)uVar9 < (ulong)(long)iVar4) {
        iVar6 = uVar9 + iVar11;
        iVar5 = iVar7 + -1;
        if (uVar16 <= (ulong)(long)iVar6) {
          if ((ulong)(long)iVar4 <= (ulong)(long)iVar6) {
            iVar4 = iVar6 - iVar4;
            goto LAB_0029c3dc;
          }
          iVar5 = iVar7 + -2;
          iVar6 = iVar6 + iVar11;
        }
        iVar4 = iVar6 - iVar4;
      }
      else {
        iVar4 = uVar9 - iVar4;
        iVar5 = iVar7;
      }
LAB_0029c3dc:
      if (uVar10 == 0) {
        trap(7);
      }
      uVar9 = iVar4 / (int)uVar10;
      uVar17 = (long)(iVar4 % (int)uVar10 << 0x10) | uVar19 & 0xffff;
      uVar10 = uVar9;
      if (uVar17 < (ulong)(long)(int)(uVar9 * uVar15)) {
        uVar17 = (ulong)((int)uVar17 + iVar11);
        uVar10 = uVar9 - 1;
        if ((uVar16 <= uVar17) && (uVar17 < (ulong)(long)(int)(uVar9 * uVar15))) {
          uVar10 = uVar9 - 2;
        }
      }
      uVar10 = iVar5 << 0x10 | uVar10;
      goto LAB_0029c5ec;
    }
    if (uVar16 < 0x10000) {
      iVar7 = 8;
      if (uVar16 < 0x100) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = 0x10;
      if (0xffffff < uVar16) {
        iVar7 = 0x18;
      }
    }
    uVar10 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar15 >> iVar7] + iVar7);
    if (uVar10 != 0) {
      uVar19 = (ulong)(int)(uVar18 << (uVar10 & 0x1f));
      uVar17 = (ulong)(int)(uVar9 << (uVar10 & 0x1f) | uVar18 >> (0x20 - uVar10 & 0x1f));
      uVar16 = (ulong)(int)(uVar15 << (uVar10 & 0x1f));
    }
    uVar15 = (uint)uVar16;
    uVar10 = uVar15 >> 0x10;
    iVar7 = (int)uVar17 / (int)uVar10;
    if (uVar10 == 0) {
      trap(7);
    }
    iVar4 = iVar7 * (uVar15 & 0xffff);
    uVar9 = (int)uVar17 % (int)uVar10 << 0x10 | (uint)uVar19 >> 0x10;
    if ((ulong)(long)(int)uVar9 < (ulong)(long)iVar4) {
      iVar5 = uVar9 + uVar15;
      iVar11 = iVar7 + -1;
      if (uVar16 <= (ulong)(long)iVar5) {
        if ((ulong)(long)iVar4 <= (ulong)(long)iVar5) {
          iVar4 = iVar5 - iVar4;
          goto LAB_0029c19c;
        }
        iVar11 = iVar7 + -2;
        iVar5 = iVar5 + uVar15;
      }
      iVar4 = iVar5 - iVar4;
    }
    else {
      iVar4 = uVar9 - iVar4;
      iVar11 = iVar7;
    }
LAB_0029c19c:
    if (uVar10 == 0) {
      trap(7);
    }
    uVar9 = iVar4 / (int)uVar10;
    uVar14 = (ulong)(int)(uVar9 * (uVar15 & 0xffff));
    uVar17 = (long)(iVar4 % (int)uVar10 << 0x10) | uVar19 & 0xffff;
    uVar10 = uVar9;
    if (uVar17 < uVar14) {
      uVar17 = (ulong)(int)((int)uVar17 + uVar15);
      uVar10 = uVar9 - 1;
      if ((uVar16 <= uVar17) && (uVar17 < uVar14)) {
        uVar10 = uVar9 - 2;
      }
    }
    uVar10 = iVar11 << 0x10 | uVar10;
  }
  else if (uVar17 < uVar14) {
    uVar10 = 0;
  }
  else {
    if (uVar14 < 0x10000) {
      iVar7 = 8;
      if (uVar14 < 0x100) {
        iVar7 = 0;
      }
    }
    else {
      iVar7 = 0x10;
      if (0xffffff < uVar14) {
        iVar7 = 0x18;
      }
    }
    uVar8 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar10 >> iVar7] + iVar7);
    uVar12 = 0x20 - uVar8;
    if (uVar8 == 0) {
      uVar10 = 1;
      if ((uVar17 <= uVar14) && (uVar10 = 0, uVar16 <= uVar19)) {
        uVar10 = 1;
      }
    }
    else {
      uVar13 = uVar10 << (uVar8 & 0x1f) | uVar15 >> (uVar12 & 0x1f);
      uVar10 = uVar9 >> (uVar12 & 0x1f);
      uVar12 = uVar9 << (uVar8 & 0x1f) | uVar18 >> (uVar12 & 0x1f);
      uVar9 = uVar13 >> 0x10;
      iVar7 = (int)uVar10 / (int)uVar9;
      if (uVar9 == 0) {
        trap(7);
      }
      uVar2 = iVar7 * (uVar13 & 0xffff);
      uVar10 = (int)uVar10 % (int)uVar9 << 0x10 | uVar12 >> 0x10;
      if (uVar10 < uVar2) {
        uVar10 = uVar10 + uVar13;
        iVar4 = iVar7 + -1;
        if (uVar13 <= uVar10) {
          if (uVar2 <= uVar10) {
            iVar11 = uVar10 - uVar2;
            goto LAB_0029c554;
          }
          iVar4 = iVar7 + -2;
          uVar10 = uVar10 + uVar13;
        }
        iVar11 = uVar10 - uVar2;
      }
      else {
        iVar11 = uVar10 - uVar2;
        iVar4 = iVar7;
      }
LAB_0029c554:
      if (uVar9 == 0) {
        trap(7);
      }
      uVar2 = iVar11 / (int)uVar9;
      uVar3 = uVar2 * (uVar13 & 0xffff);
      uVar9 = iVar11 % (int)uVar9 << 0x10 | uVar12 & 0xffff;
      uVar10 = uVar2;
      if (uVar9 < uVar3) {
        uVar9 = uVar9 + uVar13;
        uVar10 = uVar2 - 1;
        if ((uVar13 <= uVar9) && (uVar9 < uVar3)) {
          uVar9 = uVar9 + uVar13;
          uVar10 = uVar2 - 2;
        }
      }
      uVar10 = iVar4 << 0x10 | uVar10;
      lVar1 = (ulong)uVar10 * (ulong)(uVar15 << (uVar8 & 0x1f));
      uVar15 = (uint)((ulong)lVar1 >> 0x20);
      if (uVar9 - uVar3 < uVar15) {
        uVar10 = uVar10 - 1;
      }
      else {
        uVar14 = 0;
        if ((uVar15 != uVar9 - uVar3) || ((uint)lVar1 <= uVar18 << (uVar8 & 0x1f)))
        goto LAB_0029c5ec;
        uVar10 = uVar10 - 1;
      }
    }
  }
  uVar14 = 0;
LAB_0029c5ec:
  return (ulong)uVar10 | uVar14 << 0x20;
}

UDItype __umoddi3(UDItype u, UDItype v) {
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  ulong local_10;
  
  uVar11 = (long)v >> 0x20;
  uVar12 = (long)u >> 0x20;
  uVar7 = (uint)v;
  uVar9 = (ulong)(int)uVar7;
  uVar14 = (uint)u;
  uVar16 = (ulong)(int)uVar14;
  uVar6 = (uint)(u >> 0x20);
  uVar13 = (uint)(v >> 0x20);
  if (uVar11 != 0) {
    if (uVar12 < uVar11) {
      return u & 0xffffffff | uVar12 << 0x20;
    }
    if (uVar11 < 0x10000) {
      iVar4 = 8;
      if (uVar11 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar11) {
        iVar4 = 0x18;
      }
    }
    uVar3 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar13 >> iVar4] + iVar4);
    uVar8 = 0x20 - uVar3;
    if (uVar3 == 0) {
      if ((uVar11 < uVar12) || (uVar11 = uVar16, uVar9 <= uVar16)) {
        uVar11 = (ulong)(int)(uVar14 - uVar7);
        uVar12 = (ulong)(int)((uVar6 - uVar13) - (uint)(uVar16 < uVar11));
      }
      if (&stack0x00000000 == &o_sadd) {
        return local_10;
      }
      return uVar11 & 0xffffffff | uVar12 << 0x20;
    }
    uVar15 = uVar14 << (uVar3 & 0x1f);
    uVar10 = uVar13 << (uVar3 & 0x1f) | uVar7 >> (uVar8 & 0x1f);
    uVar13 = uVar6 >> (uVar8 & 0x1f);
    uVar7 = uVar7 << (uVar3 & 0x1f);
    uVar14 = uVar6 << (uVar3 & 0x1f) | uVar14 >> (uVar8 & 0x1f);
    uVar6 = uVar10 >> 0x10;
    iVar4 = (int)uVar13 / (int)uVar6;
    if (uVar6 == 0) {
      trap(7);
    }
    uVar2 = iVar4 * (uVar10 & 0xffff);
    uVar13 = (int)uVar13 % (int)uVar6 << 0x10 | uVar14 >> 0x10;
    if (uVar13 < uVar2) {
      uVar13 = uVar13 + uVar10;
      iVar17 = iVar4 + -1;
      if (uVar10 <= uVar13) {
        if (uVar2 <= uVar13) {
          iVar5 = uVar13 - uVar2;
          goto LAB_0029ca84;
        }
        iVar17 = iVar4 + -2;
        uVar13 = uVar13 + uVar10;
      }
      iVar5 = uVar13 - uVar2;
    }
    else {
      iVar5 = uVar13 - uVar2;
      iVar17 = iVar4;
    }
LAB_0029ca84:
    if (uVar6 == 0) {
      trap(7);
    }
    uVar13 = iVar5 / (int)uVar6;
    uVar2 = uVar13 * (uVar10 & 0xffff);
    uVar6 = iVar5 % (int)uVar6 << 0x10 | uVar14 & 0xffff;
    if (uVar6 < uVar2) {
      uVar6 = uVar6 + uVar10;
      uVar14 = uVar13 - 1;
      if (uVar10 <= uVar6) {
        if (uVar2 <= uVar6) {
          uVar6 = uVar6 - uVar2;
          goto LAB_0029cae0;
        }
        uVar14 = uVar13 - 2;
        uVar6 = uVar6 + uVar10;
      }
      uVar6 = uVar6 - uVar2;
    }
    else {
      uVar6 = uVar6 - uVar2;
      uVar14 = uVar13;
    }
LAB_0029cae0:
    lVar1 = (ulong)(iVar17 << 0x10 | uVar14) * (ulong)uVar7;
    uVar13 = (uint)lVar1;
    uVar14 = (uint)((ulong)lVar1 >> 0x20);
    if ((uVar6 < uVar14) || ((uVar14 == uVar6 && (uVar15 < uVar13)))) {
      uVar7 = uVar13 - uVar7;
      lVar1 = CONCAT44((uVar14 - uVar10) - (uint)(uVar13 < uVar7),uVar7);
    }
    uVar7 = uVar15 - (int)lVar1;
    if (&stack0x00000000 == &o_sadd) {
      return local_10;
    }
    uVar13 = (uVar6 - (int)((ulong)lVar1 >> 0x20)) - (uint)(uVar15 < uVar7);
    return CONCAT44(uVar13 >> (uVar3 & 0x1f),uVar13 << (uVar8 & 0x1f) | uVar7 >> (uVar3 & 0x1f));
  }
  if (uVar12 < uVar9) {
    if (uVar9 < 0x10000) {
      iVar4 = 8;
      if (uVar9 < 0x100) {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x10;
      if (0xffffff < uVar9) {
        iVar4 = 0x18;
      }
    }
    uVar13 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar4] + iVar4);
    if (uVar13 != 0) {
      uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
      uVar12 = (ulong)(int)(uVar6 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f));
      uVar9 = (ulong)(int)(uVar7 << (uVar13 & 0x1f));
    }
    iVar5 = (int)uVar12;
    uVar14 = (uint)uVar9 >> 0x10;
    uVar7 = (uint)uVar9 & 0xffff;
    goto LAB_0029c828;
  }
  if (uVar9 == 0) {
    trap(7);
    uVar9 = (ulong)(1 / (int)uVar13);
  }
  if (uVar9 < 0x10000) {
    iVar4 = 8;
    if (uVar9 < 0x100) {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x10;
    if (0xffffff < uVar9) {
      iVar4 = 0x18;
    }
  }
  uVar7 = (uint)uVar9;
  uVar13 = 0x20 - ((uint)(byte)(&__clz_tab)[uVar7 >> iVar4] + iVar4);
  if (uVar13 == 0) {
    iVar5 = uVar6 - uVar7;
    uVar14 = uVar7 >> 0x10;
    uVar7 = uVar7 & 0xffff;
    goto LAB_0029c828;
  }
  uVar16 = (ulong)(int)(uVar14 << (uVar13 & 0x1f));
  uVar3 = uVar6 >> (0x20 - uVar13 & 0x1f);
  uVar6 = uVar6 << (uVar13 & 0x1f) | uVar14 >> (0x20 - uVar13 & 0x1f);
  uVar8 = uVar7 << (uVar13 & 0x1f);
  uVar9 = (ulong)(int)uVar8;
  uVar14 = uVar8 >> 0x10;
  uVar7 = uVar8 & 0xffff;
  if (uVar14 == 0) {
    trap(7);
  }
  iVar4 = ((int)uVar3 / (int)uVar14) * uVar7;
  uVar3 = (int)uVar3 % (int)uVar14 << 0x10 | uVar6 >> 0x10;
  if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
    uVar3 = uVar3 + uVar8;
    if (uVar9 <= (ulong)(long)(int)uVar3) {
      if ((ulong)(long)(int)uVar3 < (ulong)(long)iVar4) {
        uVar3 = uVar3 + uVar8;
      }
      goto LAB_0029c7c8;
    }
    iVar4 = uVar3 - iVar4;
  }
  else {
LAB_0029c7c8:
    iVar4 = uVar3 - iVar4;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar17 = (iVar4 / (int)uVar14) * uVar7;
  uVar11 = (long)(iVar4 % (int)uVar14 << 0x10) | (long)(int)uVar6 & 0xffffU;
  iVar4 = (int)uVar11;
  iVar5 = iVar4 - iVar17;
  if (uVar11 < (ulong)(long)iVar17) {
    iVar4 = iVar4 + uVar8;
    iVar5 = iVar4 - iVar17;
    if (uVar9 <= (ulong)(long)iVar4) {
      if ((ulong)(long)iVar4 < (ulong)(long)iVar17) {
        iVar4 = iVar4 + uVar8;
      }
      iVar5 = iVar4 - iVar17;
    }
  }
LAB_0029c828:
  if (uVar14 == 0) {
    trap(7);
  }
  iVar4 = (iVar5 / (int)uVar14) * uVar7;
  uVar6 = iVar5 % (int)uVar14 << 0x10 | (uint)uVar16 >> 0x10;
  iVar17 = (int)uVar9;
  if ((ulong)(long)(int)uVar6 < (ulong)(long)iVar4) {
    iVar5 = uVar6 + iVar17;
    if ((ulong)(long)iVar5 < uVar9) {
      iVar4 = iVar5 - iVar4;
    }
    else {
      if ((ulong)(long)iVar5 < (ulong)(long)iVar4) {
        iVar5 = iVar5 + iVar17;
      }
      iVar4 = iVar5 - iVar4;
    }
  }
  else {
    iVar4 = uVar6 - iVar4;
  }
  if (uVar14 == 0) {
    trap(7);
  }
  iVar5 = (iVar4 / (int)uVar14) * uVar7;
  uVar11 = (long)(iVar4 % (int)uVar14 << 0x10) | uVar16 & 0xffff;
  if (uVar11 < (ulong)(long)iVar5) {
    iVar4 = (int)uVar11 + iVar17;
    uVar11 = (ulong)iVar4;
    if ((uVar9 <= uVar11) && (uVar11 < (ulong)(long)iVar5)) {
      uVar11 = (long)(iVar4 + iVar17);
    }
  }
  if (&stack0x00000000 != &o_sadd) {
    local_10 = (ulong)((uint)((int)uVar11 - iVar5) >> (uVar13 & 0x1f));
  }
  return local_10;
}

SFtype __floatdisf(DItype u) {
  float fVar1;
  
  if ((0x3ffffffffffffe < u + 0x1fffffffffffffU) && ((u & 0x7ffU) != 0)) {
    u = u | 0x800;
  }
  fVar1 = (float)(long)(int)u;
  if ((long)(int)u < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  return (float)(u >> 0x20) * 65536.0 * 65536.0 + fVar1;
}

DItype __fixunsdfdi(DFtype a) {
  int iVar1;
  uint uVar2;
  long lVar3;
  double dVar4;
  ulong uVar5;
  ulong u;
  
  iVar1 = dpcmp(a,0);
  lVar3 = 0;
  if (-1 < iVar1) {
    uVar2 = dptoul((long)((double)a * 2.328306436538696e-10));
    u = (long)(int)uVar2 << 0x20;
    if ((long)u < 0) {
      dVar4 = (double)__floatdidf(u >> 1);
      dVar4 = dVar4 + dVar4;
    }
    else {
      dVar4 = (double)__floatdidf(u);
    }
    dVar4 = (double)a - dVar4;
    iVar1 = dpcmp((long)dVar4,0);
    if (iVar1 < 0) {
      uVar2 = dptoul((long)(0.0 - dVar4));
      uVar5 = -(ulong)uVar2;
    }
    else {
      uVar2 = dptoul((long)dVar4);
      uVar5 = (ulong)uVar2;
    }
    lVar3 = u + uVar5;
  }
  return lVar3;
}

DItype __fixunssfdi(SFtype original_a) {
  int iVar1;
  uint uVar2;
  double dVar3;
  long lVar4;
  double dVar5;
  ulong uVar6;
  ulong u;
  
  dVar3 = (double)original_a;
  iVar1 = dpcmp((long)dVar3,0);
  lVar4 = 0;
  if (-1 < iVar1) {
    uVar2 = dptoul((long)(dVar3 * 2.328306436538696e-10));
    u = (long)(int)uVar2 << 0x20;
    if ((long)u < 0) {
      dVar5 = (double)__floatdidf(u >> 1);
      dVar5 = dVar5 + dVar5;
    }
    else {
      dVar5 = (double)__floatdidf(u);
    }
    dVar3 = dVar3 - dVar5;
    iVar1 = dpcmp((long)dVar3,0);
    if (iVar1 < 0) {
      uVar2 = dptoul((long)(0.0 - dVar3));
      uVar6 = -(ulong)uVar2;
    }
    else {
      uVar2 = dptoul((long)dVar3);
      uVar6 = (ulong)uVar2;
    }
    lVar4 = u + uVar6;
  }
  return lVar4;
}

DItype __fixsfdi(SFtype a) {
  long lVar1;
  
  if (0.0 <= a) {
    lVar1 = __fixunssfdi(a);
    return lVar1;
  }
  lVar1 = __fixunssfdi(-a);
  return -lVar1;
}

void __do_global_dtors() {
  int iVar1;
  code **ppcVar2;
  
  iVar1 = *(int *)p_0;
  ppcVar2 = (code **)p_0;
  while (iVar1 != 0) {
    p_0 = (undefined *)(ppcVar2 + 1);
    (**ppcVar2)();
    ppcVar2 = (code **)p_0;
    iVar1 = *(int *)p_0;
  }
  p_0 = (undefined *)ppcVar2;
  if (completed_1 == 0) {
    completed_1 = 1;
    __deregister_frame_info(&cie_0036a260);
    return;
  }
  return;
}

void __do_global_ctors() {
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  code **ppcVar5;
  
  __register_frame_info(&cie_0036a260,(object *)&object_2);
  puVar4 = __CTOR_LIST__;
  if ((__CTOR_LIST__ == &_heap_size) &&
     (puVar4 = (undefined *)0x0,
     PTR__GLOBAL__I_FurnCtlCheckKakuType__FPcT0_002c3b04 != (undefined *)0x0)) {
    iVar3 = 4;
    puVar4 = (undefined *)0x0;
    do {
      piVar1 = (int *)((int)&PTR__GLOBAL__I_FurnCtlCheckKakuType__FPcT0_002c3b04 + iVar3);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (*piVar1 != 0);
  }
  if (puVar4 != (undefined *)0x0) {
    ppcVar5 = (code **)(&__CTOR_LIST__ + (int)puVar4);
    pcVar2 = *ppcVar5;
    while( true ) {
      ppcVar5 = ppcVar5 + -1;
      puVar4 = puVar4 + -1;
      (*pcVar2)();
      if (puVar4 == (undefined *)0x0) break;
      pcVar2 = *ppcVar5;
    }
  }
  atexit(__do_global_dtors);
  return;
}

void __main() {
  if (initialized_3 == 0) {
    initialized_3 = 1;
    __do_global_ctors();
    return;
  }
  return;
}

void __pure_virtual() {
  __terminate();
  return;
}

void __default_terminate() {
                    /* WARNING: Subroutine does not return */
  abort();
}

void __terminate() {
  char *in_a0_lo;
  char *in_a1_lo;
  
  (*(code *)__terminate_func)();
  strcmp(in_a0_lo,in_a1_lo);
  return;
}

void* __throw_type_match(void *catch_type, void *throw_type, void *obj) {
  int iVar1;
  
  iVar1 = strcmp((char *)catch_type,(char *)throw_type);
  if (iVar1 != 0) {
    obj = (void *)0x0;
  }
  return obj;
}

void __empty() {
  return;
}

static void* new_eh_context() {
  void *pvVar1;
  void *__s;
  int __c;
  size_t __n;
  long lVar2;
  
  pvVar1 = malloc(0xf0);
  lVar2 = (long)(int)pvVar1;
  __c = 0;
  __n = 0xf0;
  __s = pvVar1;
  if (lVar2 == 0) {
    __c = 0;
    __terminate();
    __s = (void *)lVar2;
  }
  memset(__s,__c,__n);
  *(int *)((int)pvVar1 + 4) = (int)pvVar1 + 0xe0;
  return pvVar1;
}

static void eh_context_free(void *ptr) {
  if (ptr != (void *)0x0) {
    free(ptr);
    return;
  }
  return;
}

void* __get_eh_context() {
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)get_eh_context)();
  return pvVar1;
}

void** __get_eh_info() {
  int iVar1;
  
  iVar1 = (*(code *)get_eh_context)();
  return (void **)(iVar1 + 8);
}

static void init_reg_size_table() {
  dwarf_reg_size_table[0] = '\b';
  dwarf_reg_size_table[1] = '\b';
  dwarf_reg_size_table[2] = '\b';
  dwarf_reg_size_table[3] = '\b';
  dwarf_reg_size_table[4] = '\b';
  dwarf_reg_size_table[5] = '\b';
  dwarf_reg_size_table[6] = '\b';
  dwarf_reg_size_table[7] = '\b';
  dwarf_reg_size_table[8] = '\b';
  dwarf_reg_size_table[9] = '\b';
  dwarf_reg_size_table[10] = '\b';
  dwarf_reg_size_table[11] = '\b';
  dwarf_reg_size_table[12] = '\b';
  dwarf_reg_size_table[13] = '\b';
  dwarf_reg_size_table[14] = '\b';
  dwarf_reg_size_table[15] = '\b';
  dwarf_reg_size_table[16] = '\b';
  dwarf_reg_size_table[17] = '\b';
  dwarf_reg_size_table[18] = '\b';
  dwarf_reg_size_table[19] = '\b';
  dwarf_reg_size_table[20] = '\b';
  dwarf_reg_size_table[21] = '\b';
  dwarf_reg_size_table[22] = '\b';
  dwarf_reg_size_table[23] = '\b';
  dwarf_reg_size_table[24] = '\b';
  dwarf_reg_size_table[25] = '\b';
  dwarf_reg_size_table[26] = '\b';
  dwarf_reg_size_table[27] = '\b';
  dwarf_reg_size_table[28] = '\b';
  dwarf_reg_size_table[29] = '\b';
  dwarf_reg_size_table[30] = '\b';
  dwarf_reg_size_table[32] = '\x04';
  dwarf_reg_size_table[33] = '\x04';
  dwarf_reg_size_table[34] = '\x04';
  dwarf_reg_size_table[66] = '\x10';
  dwarf_reg_size_table[35] = '\x04';
  dwarf_reg_size_table[36] = '\x04';
  dwarf_reg_size_table[37] = '\x04';
  dwarf_reg_size_table[38] = '\x04';
  dwarf_reg_size_table[39] = '\x04';
  dwarf_reg_size_table[40] = '\x04';
  dwarf_reg_size_table[41] = '\x04';
  dwarf_reg_size_table[42] = '\x04';
  dwarf_reg_size_table[43] = '\x04';
  dwarf_reg_size_table[44] = '\x04';
  dwarf_reg_size_table[45] = '\x04';
  dwarf_reg_size_table[46] = '\x04';
  dwarf_reg_size_table[47] = '\x04';
  dwarf_reg_size_table[48] = '\x04';
  dwarf_reg_size_table[49] = '\x04';
  dwarf_reg_size_table[50] = '\x04';
  dwarf_reg_size_table[51] = '\x04';
  dwarf_reg_size_table[52] = '\x04';
  dwarf_reg_size_table[53] = '\x04';
  dwarf_reg_size_table[54] = '\x04';
  dwarf_reg_size_table[55] = '\x04';
  dwarf_reg_size_table[56] = '\x04';
  dwarf_reg_size_table[57] = '\x04';
  dwarf_reg_size_table[58] = '\x04';
  dwarf_reg_size_table[59] = '\x04';
  dwarf_reg_size_table[60] = '\x04';
  dwarf_reg_size_table[61] = '\x04';
  dwarf_reg_size_table[62] = '\x04';
  dwarf_reg_size_table[63] = '\x04';
  dwarf_reg_size_table[64] = '\x10';
  dwarf_reg_size_table[65] = '\x10';
  dwarf_reg_size_table[67] = '\x04';
  dwarf_reg_size_table[68] = '\x04';
  dwarf_reg_size_table[75] = '\x04';
  dwarf_reg_size_table[69] = '\x04';
  dwarf_reg_size_table[70] = '\x04';
  dwarf_reg_size_table[71] = '\x04';
  dwarf_reg_size_table[72] = '\x04';
  dwarf_reg_size_table[73] = '\x04';
  dwarf_reg_size_table[74] = '\x04';
  dwarf_reg_size_table[76] = '\b';
  dwarf_reg_size_table[77] = '\b';
  dwarf_reg_size_table[78] = '\b';
  dwarf_reg_size_table[79] = '\0';
  dwarf_reg_size_table[80] = '\0';
  dwarf_reg_size_table[81] = '\0';
  dwarf_reg_size_table[82] = '\0';
  dwarf_reg_size_table[83] = '\0';
  dwarf_reg_size_table[84] = '\0';
  dwarf_reg_size_table[85] = '\0';
  dwarf_reg_size_table[86] = '\0';
  dwarf_reg_size_table[87] = '\0';
  dwarf_reg_size_table[88] = '\0';
  dwarf_reg_size_table[89] = '\0';
  dwarf_reg_size_table[90] = '\b';
  dwarf_reg_size_table[91] = '\b';
  dwarf_reg_size_table[92] = '\b';
  dwarf_reg_size_table[93] = '\b';
  dwarf_reg_size_table[94] = '\b';
  dwarf_reg_size_table[95] = '\b';
  dwarf_reg_size_table[96] = '\b';
  dwarf_reg_size_table[97] = '\b';
  dwarf_reg_size_table[98] = '\b';
  dwarf_reg_size_table[99] = '\b';
  dwarf_reg_size_table[100] = '\b';
  dwarf_reg_size_table[101] = '\b';
  dwarf_reg_size_table[102] = '\b';
  dwarf_reg_size_table[121] = '\b';
  dwarf_reg_size_table_initialized = 1;
  dwarf_reg_size_table[103] = '\b';
  dwarf_reg_size_table[104] = '\b';
  dwarf_reg_size_table[105] = '\b';
  dwarf_reg_size_table[106] = '\b';
  dwarf_reg_size_table[107] = '\b';
  dwarf_reg_size_table[108] = '\b';
  dwarf_reg_size_table[109] = '\b';
  dwarf_reg_size_table[110] = '\b';
  dwarf_reg_size_table[111] = '\b';
  dwarf_reg_size_table[112] = '\b';
  dwarf_reg_size_table[113] = '\b';
  dwarf_reg_size_table[114] = '\b';
  dwarf_reg_size_table[115] = '\b';
  dwarf_reg_size_table[116] = '\b';
  dwarf_reg_size_table[117] = '\b';
  dwarf_reg_size_table[118] = '\b';
  dwarf_reg_size_table[119] = '\b';
  dwarf_reg_size_table[120] = '\b';
  return;
}

static void eh_threads_initialize() {
  get_eh_context = eh_context_specific;
  return;
}

static eh_context* eh_context_initialize() {
  eh_context *peVar1;
  
  if ((code *)get_eh_context == eh_context_initialize) {
    get_eh_context = eh_context_static;
  }
  if (dwarf_reg_size_table_initialized == 0) {
    init_reg_size_table();
  }
  peVar1 = (eh_context *)(*(code *)get_eh_context)();
  return peVar1;
}

static eh_context* eh_context_static() {
  if (initialized_3 == 0) {
    initialized_3 = 1;
    memset(&eh_2,0,0xe0);
    DAT_004cd904 = &top_elt_4;
  }
  return (eh_context *)&eh_2;
}

static eh_context* eh_context_specific() {
  int iVar1;
  eh_context *peVar2;
  
  iVar1 = GetThreadId();
  peVar2 = (eh_context *)key_value[iVar1];
  if (peVar2 == (eh_context *)0x0) {
    peVar2 = (eh_context *)new_eh_context();
    iVar1 = GetThreadId();
    if (key_value[iVar1] != (void *)0x0) {
      free(key_value[iVar1]);
    }
    iVar1 = GetThreadId();
    key_value[iVar1] = peVar2;
  }
  return peVar2;
}

void* __eh_alloc(size_t size) {
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  if (size == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar1 = malloc(size);
  if (pvVar1 == (void *)0x0) {
    pvVar2 = __get_eh_context();
    uVar6 = *(uint *)((int)pvVar2 + 0xd0);
    uVar5 = (ulong)(int)(size + 0xf >> 4);
    uVar7 = uVar6 | uVar6 << 1;
    if (0xc < uVar5) {
      __terminate();
    }
    uVar4 = (int)uVar5 + (uint)(uVar5 == 1);
    uVar3 = (1 << (uVar4 & 0x1f)) - 1;
    for (uVar4 = 0xc - uVar4; uVar4 != 0; uVar4 = uVar4 - 1) {
      if ((uVar7 >> (uVar4 & 0x1f) & uVar3) == 0) {
        uVar3 = uVar3 >> 1;
        goto LAB_0029d5f8;
      }
    }
    __terminate();
LAB_0029d5f8:
    pvVar1 = (void *)((int)pvVar2 + uVar4 * 0x10 + 0x10);
    *(uint *)((int)pvVar2 + 0xd0) = uVar6 | uVar3 << (uVar4 & 0x1f);
  }
  return pvVar1;
}

void __eh_free(void *p) {
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  pvVar1 = __get_eh_context();
  uVar3 = (int)p + (-0x10 - (int)pvVar1);
  if (uVar3 < 0xc0) {
    if ((int)uVar3 < 0) {
      uVar3 = (int)p + (-1 - (int)pvVar1);
    }
    uVar2 = 1 << ((int)uVar3 >> 4 & 0x1fU);
    uVar3 = *(uint *)((int)pvVar1 + 0xd0) ^ uVar2;
    while( true ) {
      uVar2 = uVar2 << 1;
      if ((uVar3 & uVar2) == 0) break;
      uVar3 = uVar3 ^ uVar2;
    }
    *(uint *)((int)pvVar1 + 0xd0) = uVar3;
    return;
  }
  free(p);
  return;
}

void*** __get_dynamic_handler_chain() {
  int iVar1;
  
  iVar1 = (*(code *)get_eh_context)();
  return (void ***)(iVar1 + 4);
}

void __sjthrow() {
  int *piVar1;
  int ***pppiVar2;
  int ***pppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined8 unaff_s8;
  int **local_750;
  undefined4 local_74c;
  int ***local_748;
  undefined *local_744;
  int ***local_740;
  int local_110;
  int **local_10c;
  int **local_108;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  local_80 = (undefined4)unaff_s8;
  uStack_7c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_110 = (*(code *)get_eh_context)();
  local_10c = (int **)(local_110 + 4);
  ppiVar5 = (int **)*local_10c;
  local_108 = ppiVar5 + 1;
  ppiVar6 = local_108;
  if (*local_108 != (int *)0x0) {
    local_74c = 0;
    local_744 = &DAT_0029d788;
    *local_10c = (int *)&local_750;
    ppiVar6 = (int **)*local_108;
    local_750 = ppiVar5;
    local_748 = &local_750;
    pppiVar2 = &local_750;
    local_740 = &local_750;
    pppiVar3 = &local_750;
    if (ppiVar6 != (int **)0x0) {
      do {
        piVar1 = ppiVar6[2];
        *local_108 = *ppiVar6;
        (*(code *)ppiVar6[1])(piVar1,2);
        ppiVar6 = (int **)*local_108;
      } while (ppiVar6 != (int **)0x0);
      ppiVar6 = (int **)0x0;
      pppiVar2 = local_748;
      pppiVar3 = local_740;
    }
    local_740 = pppiVar3;
    local_748 = pppiVar2;
    ppiVar5 = ppiVar6;
    *local_10c = (int *)local_750;
    ppiVar6 = local_10c;
  }
  ppiVar4 = *(int ***)(local_110 + 8);
  if (ppiVar4 != (int **)0x0) {
    ppiVar4 = (int **)*local_10c;
    ppiVar5 = (int **)*ppiVar4;
    ppiVar6 = local_10c;
    if (ppiVar5 != (int **)0x0) goto LAB_0029d820;
  }
  __terminate();
LAB_0029d820:
  *ppiVar6 = (int *)ppiVar5;
                    /* WARNING: Could not recover jumptable at 0x0029d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)ppiVar4[3])();
  return;
}

void __sjpopnthrow() {
  int **ppiVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  void **ppvVar5;
  int **ppiVar6;
  long in_a0;
  undefined8 unaff_s0;
  int **local_750;
  undefined4 local_74c;
  int ***local_748;
  undefined *local_744;
  int ***local_740;
  int **local_110;
  int **local_10c;
  undefined4 local_100;
  undefined4 uStack_fc;
  
  local_100 = (undefined4)unaff_s0;
  uStack_fc = (undefined4)((ulong)unaff_s0 >> 0x20);
  iVar4 = (*(code *)get_eh_context)();
  local_110 = (int **)(iVar4 + 4);
  ppiVar6 = (int **)*local_110;
  local_10c = ppiVar6 + 1;
  if (*local_10c != (int *)0x0) {
    local_74c = 0;
    local_744 = &DAT_0029d8e8;
    *local_110 = (int *)&local_750;
    ppiVar1 = (int **)*local_10c;
    local_748 = &local_750;
    local_740 = &local_750;
    while (local_750 = ppiVar6, ppiVar1 != (int **)0x0) {
      piVar2 = ppiVar1[2];
      *local_10c = *ppiVar1;
      (*(code *)ppiVar1[1])(piVar2,2);
      ppiVar6 = local_750;
      ppiVar1 = (int **)*local_10c;
    }
    in_a0 = (long)(int)local_110;
    *local_110 = (int *)ppiVar6;
  }
  *local_110 = *ppiVar6;
  __sjthrow();
  ppvVar5 = __get_eh_info();
                    /* WARNING: Load size is inaccurate */
  pcVar3 = **ppvVar5;
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(*ppvVar5,in_a0,0);
  }
  return;
}

int __eh_rtime_match(void *rtime) {
  code *pcVar1;
  void **ppvVar2;
  uint uVar3;
  long lVar4;
  
  ppvVar2 = __get_eh_info();
  uVar3 = 0;
                    /* WARNING: Load size is inaccurate */
  pcVar1 = **ppvVar2;
  if (pcVar1 != (code *)0x0) {
    lVar4 = (*pcVar1)(*ppvVar2,rtime,0);
    uVar3 = (uint)(lVar4 != 0);
  }
  return uVar3;
}

short int __get_eh_table_version(exception_descriptor *table) {
  return (table->lang).version;
}

short int __get_eh_table_language(exception_descriptor *table) {
  return (table->lang).language;
}

static void* old_find_exception_handler(void *pc, old_exception_table *table) {
  int iVar1;
  old_exception_table *poVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = -1;
  if (table != (old_exception_table *)0x0) {
    iVar4 = 0;
    poVar2 = table;
    if (table->start_region != (void *)0xffffffff) {
      do {
        iVar1 = iVar3;
        if ((pc < poVar2->start_region) || (poVar2->end_region <= pc)) {
          if ((-1 < iVar3) && (pc < poVar2->start_region)) break;
        }
        else {
          iVar1 = iVar4;
          if (((iVar3 != -1) && (iVar1 = iVar3, poVar2->end_region <= table[iVar3].end_region)) &&
             (iVar1 = iVar4, poVar2->start_region < table[iVar3].start_region)) {
            iVar1 = iVar3;
          }
        }
        iVar3 = iVar1;
        poVar2 = poVar2 + 1;
        iVar4 = iVar4 + 1;
      } while ((undefined *)poVar2->start_region != &_heap_size);
    }
    if (iVar3 != -1) {
      return table[iVar3].exception_handler;
    }
  }
  return (void *)0x0;
}

static void* find_exception_handler(void *pc, exception_descriptor *table, __eh_info *eh_info, int rethrow, int *cleanup) {
  uint uVar1;
  long lVar2;
  exception_table *peVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  void *pvVar7;
  
  pvVar7 = (void *)0x0;
  *cleanup = 1;
  if (table != (exception_descriptor *)0x0) {
    peVar3 = table->table;
    if (rethrow == 0) {
      uVar6 = (int)pc - 1;
      iVar4 = 0;
    }
    else {
      iVar4 = (int)pc - (int)peVar3 >> 4;
      uVar6 = *(int *)((int)pc + 4) - 1;
      if (peVar3[iVar4].start_region == (void *)0xffffffff) {
        return (void *)0x0;
      }
      iVar4 = (iVar4 + 1) * 0x10;
    }
    puVar5 = (uint *)((int)&peVar3->start_region + iVar4);
    if (*puVar5 != 0xffffffff) {
      uVar1 = *puVar5;
      do {
        if ((uVar1 <= uVar6) && (uVar6 < puVar5[1])) {
          if (puVar5[3] == 0) {
            if (pvVar7 == (void *)0x0) {
              pvVar7 = (void *)puVar5[2];
            }
          }
          else if (((code *)eh_info->match_function != (code *)0x0) &&
                  (lVar2 = (*(code *)eh_info->match_function)(eh_info,puVar5[3],table), lVar2 != 0))
          {
            if (pvVar7 == (void *)0x0) {
              pvVar7 = (void *)puVar5[2];
            }
            *cleanup = 0;
            return pvVar7;
          }
        }
        puVar5 = puVar5 + 4;
        uVar1 = *puVar5;
      } while (uVar1 != 0xffffffff);
    }
  }
  return pvVar7;
}

static word_type* get_reg_addr(unsigned int reg, frame_state *udata, frame_state *sub_udata) {
  char cVar1;
  
  cVar1 = udata->saved[reg];
  if (cVar1 == '\x02') {
    do {
      reg = (uint)udata->reg_or_offset[reg];
    } while (udata->saved[reg] == '\x02');
    cVar1 = udata->saved[reg];
  }
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return (long *)((int)udata->cfa + *(int *)(udata->reg_or_offset + reg));
}

static void copy_reg(unsigned int reg, frame_state *udata, frame_state *target_udata) {
  long *__src;
  long *__dest;
  
  __src = get_reg_addr(reg,udata,(frame_state *)0x0);
  __dest = get_reg_addr(reg,target_udata,(frame_state *)0x0);
  memcpy(__dest,__src,(long)dwarf_reg_size_table[reg]);
  return;
}

static void* next_stack_level(void *pc, frame_state *udata, frame_state *caller_udata) {
  frame_state *pfVar1;
  long *plVar2;
  void *pvVar3;
  
  pfVar1 = __frame_state_for(pc,caller_udata);
  if (pfVar1 != (frame_state *)0x0) {
    if (udata->saved[(ushort)pfVar1->cfa_reg] == '\0') {
      pfVar1->cfa = udata->cfa;
    }
    else {
      plVar2 = get_reg_addr((uint)(ushort)pfVar1->cfa_reg,udata,(frame_state *)0x0);
      pfVar1->cfa = (void *)*plVar2;
    }
    if (pfVar1->indirect == '\0') {
      pvVar3 = pfVar1->cfa;
    }
    else {
      pfVar1->cfa = *(void **)((int)pfVar1->cfa + *(int *)&pfVar1->base_offset);
      pvVar3 = pfVar1->cfa;
    }
    pfVar1->cfa = (void *)((int)pvVar3 + *(int *)&pfVar1->cfa_offset);
  }
  return pfVar1;
}

void __unwinding_cleanup() {
  return;
}

static void* throw_helper(eh_context *eh, void *pc, frame_state *my_udata, long int *offset_p) {
  ushort uVar1;
  __eh_info *eh_info;
  exception_descriptor *table;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  void *pvVar5;
  frame_state *pfVar6;
  frame_state *pfVar7;
  frame_state *pfVar8;
  frame_state *pfVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  frame_state *pfVar13;
  frame_state *pfVar14;
  uint reg;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *pcVar20;
  void *pvVar21;
  uint reg_00;
  frame_state local_df0;
  frame_state fStack_970;
  frame_state local_4f0;
  int local_70;
  long *local_6c;
  frame_state *local_68;
  void *local_64;
  void *local_60;
  void *local_5c;
  int local_58;
  int local_54;
  
  pcVar20 = my_udata->saved + 100;
  local_70 = 0;
  bVar3 = eh->table_index != (void *)0x0;
  local_68 = &fStack_970;
  eh_info = (__eh_info *)eh->info;
  local_60 = (void *)0x0;
  local_5c = (void *)0x0;
  local_58 = 0;
  local_54 = 0;
  pfVar9 = &local_df0;
  pfVar7 = my_udata;
  local_6c = offset_p;
  local_64 = pc;
  do {
    puVar12 = (undefined8 *)pfVar9;
    lVar16 = pfVar7->cfa_offset;
    lVar17 = pfVar7->base_offset;
    lVar18 = pfVar7->args_size;
    *puVar12 = *(undefined8 *)pfVar7;
    puVar12[1] = lVar16;
    puVar12[2] = lVar17;
    puVar12[3] = lVar18;
    pfVar7 = (frame_state *)pfVar7->reg_or_offset;
    pfVar9 = (frame_state *)(puVar12 + 4);
  } while (pfVar7 != (frame_state *)pcVar20);
  uVar11 = *(undefined8 *)(my_udata->saved + 0x6c);
  uVar15 = *(undefined8 *)(my_udata->saved + 0x74);
  puVar12[4] = *(undefined8 *)pcVar20;
  puVar12[5] = uVar11;
  pvVar5 = (void *)0x0;
  puVar12[6] = uVar15;
  pfVar9 = &local_df0;
  while( true ) {
    pfVar7 = (frame_state *)next_stack_level(pc,pfVar9,local_68);
    local_68 = pfVar9;
    if (pfVar7 == (frame_state *)0x0) break;
    table = (exception_descriptor *)pfVar7->eh_ptr;
    bVar2 = false;
    if (table != (exception_descriptor *)0x0) {
      bVar2 = table->runtime_id_field == (void *)0xfffffffe;
    }
    if (bVar3) {
      pvVar5 = find_exception_handler(eh->table_index,table,eh_info,1,&local_70);
      eh->table_index = (void *)0x0;
      bVar3 = false;
    }
    else if (bVar2) {
      pvVar5 = find_exception_handler(pc,table,eh_info,0,&local_70);
    }
    else {
      pvVar5 = old_find_exception_handler(pc,(old_exception_table *)table);
    }
    if (pvVar5 == (void *)0x0) {
LAB_0029df3c:
      uVar1 = pfVar7->retaddr_column;
    }
    else {
      if (local_70 == 0) {
        local_58 = 0;
        break;
      }
      if (local_54 == 0) {
        pfVar6 = pfVar7;
        pfVar8 = &local_4f0;
        do {
          pfVar13 = pfVar8;
          pfVar14 = pfVar6;
          pvVar21 = pfVar14->eh_ptr;
          lVar18 = pfVar14->cfa_offset;
          lVar16 = pfVar14->base_offset;
          lVar17 = pfVar14->args_size;
          pfVar13->cfa = pfVar14->cfa;
          pfVar13->eh_ptr = pvVar21;
          pfVar13->cfa_offset = lVar18;
          pfVar13->base_offset = lVar16;
          pfVar13->args_size = lVar17;
          pfVar6 = (frame_state *)pfVar14->reg_or_offset;
          pfVar8 = (frame_state *)pfVar13->reg_or_offset;
        } while (pfVar6 != (frame_state *)(pfVar7->saved + 100));
        lVar17 = pfVar14->reg_or_offset[1];
        lVar16 = pfVar14->reg_or_offset[2];
        pfVar13->reg_or_offset[0] = *(long *)pfVar6;
        pfVar13->reg_or_offset[1] = lVar17;
        pfVar13->reg_or_offset[2] = lVar16;
        local_54 = 1;
        local_58 = 1;
        local_60 = pvVar5;
        local_5c = pc;
        goto LAB_0029df3c;
      }
      uVar1 = pfVar7->retaddr_column;
    }
    plVar10 = get_reg_addr((uint)uVar1,pfVar7,pfVar9);
    pc = (void *)((int)*plVar10 + -1);
    pfVar9 = pfVar7;
  }
  if ((local_54 != 0) && (pfVar7 = &local_4f0, pc = local_5c, pvVar5 = local_60, local_58 != 0)) {
    __unwinding_cleanup();
  }
  if (pvVar5 == (void *)0x0) {
    __terminate();
  }
  else {
    eh->handler_label = pvVar5;
  }
  pvVar21 = local_64;
  lVar16 = pfVar7->args_size;
  pfVar9 = my_udata;
  pfVar6 = pfVar7;
  if (pc != local_64) {
    do {
      pfVar14 = pfVar6;
      pfVar8 = pfVar9;
      pvVar4 = pfVar8->eh_ptr;
      lVar17 = pfVar8->cfa_offset;
      lVar18 = pfVar8->base_offset;
      lVar19 = pfVar8->args_size;
      pfVar14->cfa = pfVar8->cfa;
      pfVar14->eh_ptr = pvVar4;
      pfVar14->cfa_offset = lVar17;
      pfVar14->base_offset = lVar18;
      pfVar14->args_size = lVar19;
      pfVar9 = (frame_state *)pfVar8->reg_or_offset;
      pfVar6 = (frame_state *)pfVar14->reg_or_offset;
    } while (pfVar9 != (frame_state *)pcVar20);
    lVar17 = pfVar8->reg_or_offset[1];
    lVar18 = pfVar8->reg_or_offset[2];
    pfVar14->reg_or_offset[0] = *(long *)pfVar9;
    pfVar14->reg_or_offset[1] = lVar17;
    pfVar14->reg_or_offset[2] = lVar18;
    if (local_64 == pc) {
      pvVar21 = pfVar7->cfa;
      goto LAB_0029e0bc;
    }
    do {
      pfVar9 = (frame_state *)next_stack_level(pvVar21,pfVar7,local_68);
      reg_00 = 0;
      pcVar20 = pfVar9->saved;
      reg = (uint)(ushort)pfVar9->retaddr_column;
      local_68 = pfVar7;
      do {
        if ((reg_00 != reg) && (*pcVar20 != '\0')) {
          copy_reg(reg_00,pfVar9,my_udata);
          reg = (uint)(ushort)pfVar9->retaddr_column;
        }
        reg_00 = reg_00 + 1;
        pcVar20 = pcVar20 + 1;
      } while ((int)reg_00 < 0x7a);
      plVar10 = get_reg_addr(reg,pfVar9,pfVar7);
      pvVar21 = (void *)((int)*plVar10 + -1);
      pfVar7 = pfVar9;
    } while (pvVar21 != pc);
  }
  pvVar21 = pfVar9->cfa;
LAB_0029e0bc:
  *local_6c = ((int)pvVar21 - (int)my_udata->cfa) + lVar16;
  return pvVar5;
}

void __throw() {
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_s8;
  int unaff_retaddr;
  frame_state fStack_590;
  long local_110;
  eh_context *local_108;
  frame_state *local_104;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  local_80 = (undefined4)unaff_s8;
  uStack_7c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_108 = (eh_context *)(*(code *)get_eh_context)();
  local_104 = &fStack_590;
  if (local_108->info == (void *)0x0) {
    local_104 = &fStack_590;
    __terminate();
  }
  UNRECOVERED_JUMPTABLE = (code *)0x29e190;
  local_104 = __frame_state_for((void *)0x29e190,local_104);
  if (local_104 != (frame_state *)0x0) {
    local_104->cfa = register0x000001d0;
    throw_helper(local_108,(void *)(unaff_retaddr + -1),local_104,&local_110);
    return;
  }
  __terminate();
                    /* WARNING: Could not recover jumptable at 0x0029e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

void __rethrow(void *index) {
  void *pvVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_s8;
  int unaff_retaddr;
  frame_state fStack_5a0;
  long local_120;
  void *local_118;
  eh_context *local_114;
  frame_state *local_110;
  undefined4 local_80;
  undefined4 uStack_7c;
  
  local_80 = (undefined4)unaff_s8;
  uStack_7c = (undefined4)((ulong)unaff_s8 >> 0x20);
  local_118 = index;
  local_114 = (eh_context *)(*(code *)get_eh_context)();
  pvVar1 = local_118;
  local_110 = &fStack_5a0;
  if (local_114->info == (void *)0x0) {
    local_110 = &fStack_5a0;
    __terminate();
  }
  local_114->table_index = pvVar1;
  UNRECOVERED_JUMPTABLE = (code *)0x29e2f0;
  local_110 = __frame_state_for((void *)0x29e2f0,local_110);
  if (local_110 == (frame_state *)0x0) {
    __terminate();
                    /* WARNING: Could not recover jumptable at 0x0029e310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  local_110->cfa = register0x000001d0;
  throw_helper(local_114,(void *)(unaff_retaddr + -1),local_110,&local_120);
  return;
}

DFtype __floatdidf(DItype u) {
  double dVar1;
  
  dVar1 = (double)(long)(int)u;
  if ((long)(int)u < 0) {
    dVar1 = dVar1 + 4294967296.0;
  }
  return (long)((double)(u >> 0x20) * 65536.0 * 65536.0 + dVar1);
}

DItype __fixdfdi(DFtype a) {
  int iVar1;
  long lVar2;
  
  iVar1 = dpcmp(a,0);
  if (-1 < iVar1) {
    lVar2 = __fixunsdfdi(a);
    return lVar2;
  }
  lVar2 = __fixunsdfdi((long)(0.0 - (double)a));
  return -lVar2;
}
