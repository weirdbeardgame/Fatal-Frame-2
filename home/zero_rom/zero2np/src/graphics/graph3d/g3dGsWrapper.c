// STATUS: NOT STARTED

#include "g3dGsWrapper.h"

static LPFUNC_ONDETECTPACKETDOESNOTTERMINATED s_pFuncOnDetectedPacketDoesNotTerminated = NULL;

static void _SetGsDrawEnv1(sceGsDrawEnv1 *pDE1) {
  g3dSetGsRegisters__FPC13_sceGifPackAdii((_sceGifPackAd *)pDE1,8,-1);
  return;
}

static void _CallHandler(G3DGSSYNCPATHTIMEOUTREASON r) {
  if (s_pFuncOnDetectedPacketDoesNotTerminated != (undefined1 *)0x0) {
    (*(code *)s_pFuncOnDetectedPacketDoesNotTerminated)(r);
  }
  return;
}

int g3dGsPutDrawEnv(sceGifTag *pGT) {
	u_int vcnt;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  _SetGsDrawEnv1__FPC13sceGsDrawEnv1((void *)((int)pGT + 0x10));
  uVar3 = 0;
  uVar2 = REG_DMAC_2_GIF_CHCR;
  while( true ) {
    if ((uVar2 & 0x100) == 0) {
                    /* WARNING: Load size is inaccurate */
      REG_DMAC_2_GIF_QWC = (*pGT & 0x7fff) + 1;
      if (((uint)pGT & 0x70000000) == 0x70000000) {
        uVar2 = (uint)pGT & 0xfffffff | 0x80000000;
      }
      else {
        uVar2 = (uint)pGT & 0xfffffff;
      }
      REG_DMAC_2_GIF_MADR = uVar2;
      REG_DMAC_2_GIF_CHCR = 0x101;
      return 0;
    }
    bVar1 = 0x1000000 < uVar3;
    uVar3 = uVar3 + 1;
    if (bVar1) break;
    uVar2 = REG_DMAC_2_GIF_CHCR;
  }
  scePrintf("sceGsPutDrawEnv: DMA Ch.2 does not terminate\r\n");
  _CallHandler__F26G3DGSSYNCPATHTIMEOUTREASON(SPTR_D2_START);
  return -1;
}

void g3dGsPutDispEnv(sceGsDispEnv *pDE) {
  REG_GS_PMODE = pDE->pmode;
  REG_GS_SMODE2 = pDE->smode2;
  REG_GS_DISPFB2 = pDE->dispfb;
  REG_GS_DISPLAY2 = pDE->display;
  REG_GS_BGCOLOR = pDE->bgcolor;
  return;
}

int g3dGsSwapDBuff(sceGsDBuff *pDB, int id) {
	int ret;
	
  int iVar1;
  
  g3dGsPutDispEnv__FPC12sceGsDispEnv(pDB->disp + (id & 1U));
  if ((id & 1U) == 0) {
    iVar1 = g3dGsPutDrawEnv__FPC9sceGifTag(&pDB->giftag0);
  }
  else {
    iVar1 = g3dGsPutDrawEnv__FPC9sceGifTag(&pDB->giftag1);
  }
  return iVar1;
}

int g3dGsSyncPath(int mode, u_short timeout) {
	u_int reg;
	u_int vcnt;
	int ret;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  G3DGSSYNCPATHTIMEOUTREASON r;
  uint uVar4;
  ulong uVar5;
  undefined4 in_vc13;
  
  uVar4 = 0;
  if (mode == 0) {
    uVar2 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar2 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        scePrintf("sceGsSyncPath: DMA Ch.1 does not terminate\r\n");
        scePrintf("\t<D1_CHCR=%08x:");
        scePrintf("D1_TADR=%08x:");
        scePrintf("D1_MADR=%08x:");
        scePrintf("D1_QWC=%08x>\r\n");
        scePrintf("\t<D2_CHCR=%08x:");
        scePrintf("D2_TADR=%08x:");
        scePrintf("D2_MADR=%08x:");
        scePrintf("D2_QWC=%08x>\r\n");
        scePrintf("\t<VIF1_STAT=%08x:");
        scePrintf("GIF_STAT=%08x>\r\n");
        r = SPTR_D1_START;
        goto LAB_001a19a8;
      }
      uVar2 = REG_DMAC_1_VIF1_CHCR;
    }
    uVar2 = REG_DMAC_2_GIF_CHCR;
    while ((uVar2 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        scePrintf("sceGsSyncPath: DMA Ch.2 does not terminate\r\n");
        scePrintf("\t<D1_CHCR=%08x:");
        scePrintf("D1_TADR=%08x:");
        scePrintf("D1_MADR=%08x:");
        scePrintf("D1_QWC=%08x>\r\n");
        scePrintf("\t<D2_CHCR=%08x:");
        scePrintf("D2_TADR=%08x:");
        scePrintf("D2_MADR=%08x:");
        scePrintf("D2_QWC=%08x>\r\n");
        scePrintf("\t<VIF1_STAT=%08x:");
        scePrintf("GIF_STAT=%08x>\r\n");
        r = SPTR_D2_START;
        goto LAB_001a19a8;
      }
      uVar2 = REG_DMAC_2_GIF_CHCR;
    }
    uVar2 = REG_VIF1_STAT;
    while ((uVar2 & 0x1f000003) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        scePrintf("sceGsSyncPath: VIF1 does not terminate\r\n");
        scePrintf("\t<D1_CHCR=%08x:");
        scePrintf("D1_TADR=%08x:");
        scePrintf("D1_MADR=%08x:");
        scePrintf("D1_QWC=%08x>\r\n");
        scePrintf("\t<D2_CHCR=%08x:");
        scePrintf("D2_TADR=%08x:");
        scePrintf("D2_MADR=%08x:");
        scePrintf("D2_QWC=%08x>\r\n");
        scePrintf("\t<VIF1_STAT=%08x:");
        scePrintf("GIF_STAT=%08x>\r\n");
        r = SPTR_VIF1_ACTIVE;
        goto LAB_001a19a8;
      }
      uVar2 = REG_VIF1_STAT;
    }
    uVar5 = _cfc2(in_vc13);
    while ((uVar5 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar4;
      uVar4 = uVar4 + 1;
      if (bVar1) {
        scePrintf("sceGsSyncPath: VU1 does not terminate\r\n");
        scePrintf("\t<D1_CHCR=%08x:");
        scePrintf("D1_TADR=%08x:");
        scePrintf("D1_MADR=%08x:");
        scePrintf("D1_QWC=%08x>\r\n");
        scePrintf("\t<D2_CHCR=%08x:");
        scePrintf("D2_TADR=%08x:");
        scePrintf("D2_MADR=%08x:");
        scePrintf("D2_QWC=%08x>\r\n");
        scePrintf("\t<VIF1_STAT=%08x:");
        scePrintf("GIF_STAT=%08x>\r\n");
        r = SPTR_VU0_STAT;
        goto LAB_001a19a8;
      }
      uVar5 = _cfc2(in_vc13);
    }
    uVar2 = REG_GIF_STAT;
    if ((uVar2 & 0xc00) == 0) {
      uVar3 = 0;
    }
    else {
      do {
        bVar1 = 0x1000000 < uVar4;
        uVar4 = uVar4 + 1;
        if (bVar1) {
          scePrintf("sceGsSyncPath: GIF does not terminate\r\n");
          scePrintf("\t<D1_CHCR=%08x:");
          scePrintf("D1_TADR=%08x:");
          scePrintf("D1_MADR=%08x:");
          scePrintf("D1_QWC=%08x>\r\n");
          scePrintf("\t<D2_CHCR=%08x:");
          scePrintf("D2_TADR=%08x:");
          scePrintf("D2_MADR=%08x:");
          scePrintf("D2_QWC=%08x>\r\n");
          scePrintf("\t<VIF1_STAT=%08x:");
          scePrintf("GIF_STAT=%08x>\r\n");
          r = SPTR_GIF_STAT;
LAB_001a19a8:
          _CallHandler__F26G3DGSSYNCPATHTIMEOUTREASON(r);
          return -1;
        }
        uVar2 = REG_GIF_STAT;
      } while ((uVar2 & 0xc00) != 0);
      uVar3 = 0;
    }
  }
  else {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
    uVar2 = REG_DMAC_2_GIF_CHCR;
    uVar3 = (uint)((uVar4 & 0x100) != 0);
    uVar4 = REG_VIF1_STAT;
    if ((uVar2 & 0x100) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((uVar4 & 0x1f000003) != 0) {
      uVar3 = uVar3 | 4;
    }
    uVar5 = _cfc2(in_vc13);
    uVar4 = REG_GIF_STAT;
    if ((uVar5 & 0x100) != 0) {
      uVar3 = uVar3 | 8;
    }
    if ((uVar4 & 0xc00) != 0) {
      uVar3 = uVar3 | 0x10;
    }
  }
  return uVar3;
}

int g3dGsExecStoreImage(sceGsStoreImage *sp, u_long128 *dstaddr) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 71,
		/* [4] = */ 115,
		/* [5] = */ 69,
		/* [6] = */ 120,
		/* [7] = */ 101,
		/* [8] = */ 99,
		/* [9] = */ 83,
		/* [10] = */ 116,
		/* [11] = */ 111,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 73,
		/* [15] = */ 109,
		/* [16] = */ 97,
		/* [17] = */ 103,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	static u_int init_mp3[4] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0,
		/* [3] = */ 0
	};
	u_int vcnt;
	int w;
	int h;
	int i;
	int dmasizeq;
	int allsizeq;
	int rsizeq;
	int remq;
	int remb;
	int ah;
	int sizeb;
	u_char tmpbuf[16];
	u_long oldIMR;
	
  bool bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uchar *puVar9;
  undefined8 uVar10;
  uint uVar11;
  G3DGSSYNCPATHTIMEOUTREASON r;
  ulong uVar12;
  uint16 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uchar tmpbuf [16];
  
                    /* WARNING: Load size is inaccurate */
  if (*sp != 0) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x118,"g3dGsExecStoreImage","sp->vifcode[0] == tSCE_VIF1_NOP(0)");
                    /* WARNING: Load size is inaccurate */
    g3ddbgAssert__FbPCce(*sp == 0,&DAT_003f0c50);
  }
  if (*(int *)((int)sp + 4) != 0x6008000) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x119,"g3dGsExecStoreImage",
               "sp->vifcode[1] == tSCE_VIF1_MSKPATH3(0x8000,0)");
    g3ddbgAssert__FbPCce(*(int *)((int)sp + 4) == 0x6008000,&DAT_003f0c50);
  }
  if (*(int *)((int)sp + 8) != 0x13000000) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x11a,"g3dGsExecStoreImage","sp->vifcode[2] == tSCE_VIF1_FLUSHA(0)")
    ;
    g3ddbgAssert__FbPCce(*(int *)((int)sp + 8) == 0x13000000,&DAT_003f0c50);
  }
  if (*(int *)((int)sp + 0xc) != 0x50000006) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x11b,"g3dGsExecStoreImage",
               "sp->vifcode[3] == tSCE_VIF1_DIRECT(6,0)");
    g3ddbgAssert__FbPCce(*(int *)((int)sp + 0xc) == 0x50000006,&DAT_003f0c50);
  }
  uVar12 = *(ulong *)((int)sp + 0x10);
  if ((uVar12 & 0x7fff) != 5) {
    _SetLineInfo__FPCciT0T0("g3dGsWrapper.c",0x11e,"g3dGsExecStoreImage","sp->giftag.NLOOP == 5");
    g3ddbgAssert__FbPCce((*(ulong *)((int)sp + 0x10) & 0x7fff) == 5,&DAT_003f0c50);
    uVar12 = *(ulong *)((int)sp + 0x10);
  }
  if ((uVar12 & 0x8000) == 0) {
    _SetLineInfo__FPCciT0T0("g3dGsWrapper.c",0x11f,"g3dGsExecStoreImage","sp->giftag.EOP == 1");
    g3ddbgAssert__FbPCce
              ((bool)((byte)((ulong)(*(long *)((int)sp + 0x10) << 0x11) >> 0x20) & 1),&DAT_003f0c50)
    ;
    uVar12 = *(ulong *)((int)sp + 0x10);
  }
  if ((uVar12 & 0xf000000000000000) != 0x1000000000000000) {
    _SetLineInfo__FPCciT0T0("g3dGsWrapper.c",0x120,"g3dGsExecStoreImage","sp->giftag.NREG == 1");
    g3ddbgAssert__FbPCce
              ((*(ulong *)((int)sp + 0x10) & 0xf000000000000000) == 0x1000000000000000,&DAT_003f0c50
              );
  }
  if ((*(ulong *)((int)sp + 0x18) & 0xf) != 0xe) {
    _SetLineInfo__FPCciT0T0("g3dGsWrapper.c",0x121,"g3dGsExecStoreImage","sp->giftag.REGS0 == 0xe");
    g3ddbgAssert__FbPCce((*(ulong *)((int)sp + 0x18) & 0xf) == 0xe,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x28) != 0x50) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x125,"g3dGsExecStoreImage",
               "sp->bitbltbufaddr == (long)SCE_GS_BITBLTBUF");
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x28) == 0x50,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x38) != 0x51) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x128,"g3dGsExecStoreImage","sp->trxposaddr == (long)SCE_GS_TRXPOS")
    ;
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x38) == 0x51,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x48) != 0x52) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",299,"g3dGsExecStoreImage","sp->trxregaddr == (long)SCE_GS_TRXREG");
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x48) == 0x52,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x50) != 0) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x12d,"g3dGsExecStoreImage","*(u_long *)&sp->finish == (u_long) 0");
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x50) == 0,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x58) != 0x61) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x12e,"g3dGsExecStoreImage","sp->finishaddr == (long)SCE_GS_FINISH")
    ;
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x58) == 0x61,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x60) != 1) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x130,"g3dGsExecStoreImage",
               "*(u_long *)&sp->trxdir == SCE_GS_SET_TRXDIR(1)");
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x60) == 1,&DAT_003f0c50);
  }
  if (*(long *)((int)sp + 0x68) != 0x53) {
    _SetLineInfo__FPCciT0T0
              ("g3dGsWrapper.c",0x131,"g3dGsExecStoreImage","sp->trxdiraddr == (long)SCE_GS_TRXDIR")
    ;
    g3ddbgAssert__FbPCce(*(long *)((int)sp + 0x68) == 0x53,&DAT_003f0c50);
  }
  uVar18 = 0;
  uVar19 = 0;
  uVar17 = (uint)*(undefined8 *)((int)sp + 0x40) & 0xfff;
  uVar16 = (uint)((ulong)*(undefined8 *)((int)sp + 0x40) >> 0x20) & 0xfff;
  iVar6 = 0;
  uVar11 = 0;
  uVar14 = 0;
  uVar7 = 0;
  switch((uint)((ulong)*(undefined8 *)((int)sp + 0x20) >> 0x18) & 0x3f) {
  case 0:
  case 0x30:
    uVar14 = uVar17 * uVar16 * 4;
    uVar11 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar14 != 0) {
      uVar7 = uVar16 + 3 & 0x1ffc;
      iVar6 = (int)(uVar17 * uVar7) >> 2;
LAB_001a2020:
      iVar6 = ((iVar6 - uVar19) - uVar11) + -1;
      goto switchD_001a1ee8_caseD_3;
    }
    break;
  case 1:
  case 0x31:
    uVar14 = uVar17 * uVar16 * 3;
    uVar11 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar14 != 0) {
      uVar7 = uVar16 + 0xf & 0x1ff0;
      iVar6 = ((((int)(uVar17 * uVar7 * 3) >> 4) - uVar19) - uVar11) + -1;
      goto switchD_001a1ee8_caseD_3;
    }
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    uVar14 = uVar17 * uVar16 * 2;
    uVar11 = (int)uVar14 >> 4;
    uVar14 = uVar14 & 0xf;
    uVar19 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar14 != 0) {
      uVar7 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar7) >> 3;
      goto LAB_001a2020;
    }
    break;
  default:
    goto switchD_001a1ee8_caseD_3;
  case 0x13:
  case 0x1b:
    uVar11 = (int)(uVar17 * uVar16) >> 4;
    uVar14 = uVar17 * uVar16 & 0xf;
    uVar19 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar14 != 0) {
      uVar7 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar7) >> 4;
      goto LAB_001a2020;
    }
    break;
  case 0x14:
  case 0x24:
  case 0x2c:
    uVar11 = (int)(uVar17 * uVar16) >> 5;
    uVar14 = (int)(uVar17 * uVar16) >> 1 & 0xf;
    uVar19 = uVar11 & 0xfffffff8;
    uVar11 = uVar11 & 7;
    if (uVar14 != 0) {
      uVar7 = uVar16 + 7 & 0xfffffff8;
      iVar6 = (int)(uVar17 * uVar7) >> 5;
      goto LAB_001a2020;
    }
  }
  iVar6 = 0;
  uVar7 = uVar16;
switchD_001a1ee8_caseD_3:
  if (uVar14 != 0) {
    *(ulong *)((uint)(ulong *)((int)sp + 0x40) | 0x20000000) =
         *(ulong *)((int)sp + 0x40) & 0xfff | (ulong)uVar7 << 0x20;
  }
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
      scePrintf("sceGsExecStoreImage: DMA Ch.1 does not terminate\r\n");
      r = SPTR_D1_START;
      goto LAB_001a22f8;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar12 = sceGsGetIMR();
  uVar10 = sceGsPutIMR(uVar12 | 0x200);
  REG_GS_CSR = 2;
  REG_DMAC_1_VIF1_QWC = 7;
  if (((uint)sp & 0x70000000) == 0x70000000) {
    uVar7 = (uint)sp & 0xfffffff | 0x80000000;
  }
  else {
    uVar7 = (uint)sp & 0xfffffff;
  }
  REG_DMAC_1_VIF1_MADR = uVar7;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  uVar7 = REG_DMAC_1_VIF1_CHCR;
  while ((uVar7 & 0x100) != 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
      scePrintf("sceGsExecStoreImage: DMA Ch.1 does not terminate\r\n");
      r = SPTR_D1_START;
      goto LAB_001a22f8;
    }
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  }
  uVar12 = REG_GS_CSR;
  while ((uVar12 & 2) == 0) {
    bVar1 = 0x1000000 < uVar18;
    uVar18 = uVar18 + 1;
    if (bVar1) {
      scePrintf("sceGsExecStoreImage: GS does not terminate\r\n");
      r = SPTR_GS_CSR_FINISH;
      REG_VIF1_FIFO = (int)_init_mp3_586;
      DAT_10005004 = (int)((ulong)_init_mp3_586 >> 0x20);
      DAT_10005008 = DAT_00315668;
      DAT_1000500c = DAT_0031566c;
      goto LAB_001a22f8;
    }
    uVar12 = REG_GS_CSR;
  }
  REG_VIF1_STAT = 0x800000;
  REG_GS_BUSDIR = 1;
  if (uVar19 != 0) {
    REG_DMAC_1_VIF1_QWC = uVar19;
    if (((uint)dstaddr & 0x70000000) == 0x70000000) {
      uVar7 = (uint)dstaddr & 0xfffffff | 0x80000000;
    }
    else {
      uVar7 = (uint)dstaddr & 0xfffffff;
    }
    REG_DMAC_1_VIF1_MADR = uVar7;
    REG_DMAC_1_VIF1_CHCR = 0x100;
    uVar7 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar18;
      uVar18 = uVar18 + 1;
      if (bVar1) {
        scePrintf("sceGsExecStoreImage: DMA Ch.1 (GS->MEM) does not terminate\r\n");
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        r = SPTR_D1_START;
        goto LAB_001a22f0;
      }
      uVar7 = REG_DMAC_1_VIF1_CHCR;
    }
  }
  iVar15 = 0;
  if (uVar11 != 0) {
    puVar13 = dstaddr + uVar19;
    do {
      uVar7 = REG_VIF1_STAT;
      while ((uVar7 & 0x1f000000) == 0) {
        bVar1 = 0x1000000 < uVar18;
        uVar18 = uVar18 + 1;
        if (bVar1) goto LAB_001a22b0;
        uVar7 = REG_VIF1_STAT;
      }
      uVar2 = REG_VIF1_FIFO;
      uVar3 = DAT_10005008;
      uVar4 = DAT_1000500c;
      iVar15 = iVar15 + 1;
      *(int *)puVar13 = (int)uVar2;
      *(int *)((int)puVar13 + 4) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)((int)puVar13 + 8) = uVar3;
      *(undefined4 *)((int)puVar13 + 0xc) = uVar4;
      puVar13 = puVar13 + 1;
    } while (iVar15 < (int)uVar11);
  }
  if (uVar14 != 0) {
    uVar7 = REG_VIF1_STAT;
    while ((uVar7 & 0x1f000000) == 0) {
      bVar1 = 0x1000000 < uVar18;
      uVar18 = uVar18 + 1;
      if (bVar1) {
LAB_001a22b0:
        scePrintf("sceGsExecStoreImage: Enough data does not reach VIF1\n");
        REG_GS_CSR = 0x100;
        REG_GS_BUSDIR = 0;
        r = SPTR_VIF1_ACTIVE;
LAB_001a22f0:
        REG_GIF_CTRL = 1;
        REG_VIF1_FBRST = 1;
LAB_001a22f8:
        _CallHandler__F26G3DGSSYNCPATHTIMEOUTREASON(r);
        return -1;
      }
      uVar7 = REG_VIF1_STAT;
    }
    iVar15 = 0;
    uVar2 = REG_VIF1_FIFO;
    uVar3 = DAT_10005008;
    uVar4 = DAT_1000500c;
    uVar8 = (undefined4)uVar2;
    tmpbuf[0] = (uchar)uVar8;
    tmpbuf[1] = SUB41(uVar8,1);
    tmpbuf[2] = SUB41(uVar8,2);
    tmpbuf[3] = SUB41(uVar8,3);
    uVar8 = (undefined4)((ulong)uVar2 >> 0x20);
    tmpbuf[4] = (uchar)uVar8;
    tmpbuf[5] = SUB41(uVar8,1);
    tmpbuf[6] = SUB41(uVar8,2);
    tmpbuf[7] = SUB41(uVar8,3);
    tmpbuf[8] = (uchar)uVar3;
    tmpbuf[9] = SUB41(uVar3,1);
    tmpbuf[10] = SUB41(uVar3,2);
    tmpbuf[11] = SUB41(uVar3,3);
    tmpbuf[12] = (uchar)uVar4;
    tmpbuf[13] = SUB41(uVar4,1);
    tmpbuf[14] = SUB41(uVar4,2);
    tmpbuf[15] = SUB41(uVar4,3);
    if (uVar14 != 0) {
      do {
        puVar9 = tmpbuf + iVar15;
        iVar5 = iVar15 + (uVar19 + uVar11) * 0x10;
        iVar15 = iVar15 + 1;
        *(uchar *)((int)dstaddr + iVar5) = *puVar9;
      } while (iVar15 < (int)uVar14);
    }
    iVar15 = 0;
    if (0 < iVar6) {
      do {
        uVar19 = REG_VIF1_STAT;
        while ((uVar19 & 0x1f000000) == 0) {
          bVar1 = 0x1000000 < uVar18;
          uVar18 = uVar18 + 1;
          if (bVar1) goto LAB_001a22b0;
          uVar19 = REG_VIF1_STAT;
        }
        uVar2 = REG_VIF1_FIFO;
        tmpbuf._8_4_ = DAT_10005008;
        tmpbuf._12_4_ = DAT_1000500c;
        iVar15 = iVar15 + 1;
        tmpbuf._0_4_ = (undefined4)uVar2;
        tmpbuf._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
      } while (iVar15 < iVar6);
    }
  }
  REG_VIF1_STAT = 0;
  REG_GS_BUSDIR = 0;
  sceGsPutIMR(uVar10);
  REG_GS_CSR = 2;
  REG_VIF1_FIFO = (int)_init_mp3_586;
  DAT_10005004 = (int)((ulong)_init_mp3_586 >> 0x20);
  DAT_10005008 = DAT_00315668;
  DAT_1000500c = DAT_0031566c;
  return 0;
}

void g3dGsSetDebugHandler(LPFUNC_ONDETECTPACKETDOESNOTTERMINATED pFunc) {
  s_pFuncOnDetectedPacketDoesNotTerminated = pFunc;
  return;
}
