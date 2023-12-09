// STATUS: NOT STARTED

#include "g3dDma.h"

struct _PACKET_SETGSREGISTER {
	qword qwVif1Code;
	sceGifTag GT;
	sceGifPackAd gpa;
};

static int s_bOpened = 0;

static _PACKET_SETGSREGISTER s_packetSetRegister = {
	/* .qwVif1Code = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 285212672,
		/* [3] = */ 1342177282
	},
	/* .GT = */ CCC_TYPE_LOOKUP_FAILED,
	/* .gpa = */ {
		/* .DATA = */ 0,
		/* .ADDR = */ 0
	}
};

static sceDmaChan *s_pDMAChan_VIF1;

static void _AppendVUProgTag(unsigned int *pDMATag) {
	G3DDMACHAINTAG *pDSCT;
	
  ushort uVar1;
  
  if ((*(ulong *)pDMATag & 0x70000000) != 0x70000000) {
    uVar1 = *(ushort *)pDMATag;
    while( true ) {
      g3dDmaAddPacket__FPCvi((ulong *)((int)pDMATag + 0x10),(uint)uVar1);
                    /* inlined from g3dUtil.h */
      pDMATag = (uint *)((int)pDMATag + ((uint)*(ushort *)pDMATag * 2 + 2) * 8);
      if ((*(ulong *)pDMATag & 0x70000000) == 0x70000000) break;
      uVar1 = *(ushort *)pDMATag;
    }
  }
  return;
}

static void _DmaSend(sceDmaChan *pDmaChan, void *pDmaTag) {
  sceDmaSend(pDmaChan,pDmaTag);
  return;
}

void* g3dDmaOpenPacket() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 68,
		/* [4] = */ 109,
		/* [5] = */ 97,
		/* [6] = */ 79,
		/* [7] = */ 112,
		/* [8] = */ 101,
		/* [9] = */ 110,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 0
	};
	
  int (*paiVar1) [4];
  
  if (s_bOpened != 0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0x96,"g3dDmaOpenPacket","!s_bOpened");
    g3ddbgAssert__FbPCce(s_bOpened == 0,&DAT_003f0bf0);
  }
  s_bOpened = 1;
  paiVar1 = dmaVif1GetPacket__Fv();
  return paiVar1;
}

int g3dDmaCancelPacket() {
  s_bOpened = 0;
  return 1;
}

int g3dDmaClosePacket(void *pPacket) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 68,
		/* [4] = */ 109,
		/* [5] = */ 97,
		/* [6] = */ 67,
		/* [7] = */ 108,
		/* [8] = */ 111,
		/* [9] = */ 115,
		/* [10] = */ 101,
		/* [11] = */ 80,
		/* [12] = */ 97,
		/* [13] = */ 99,
		/* [14] = */ 107,
		/* [15] = */ 101,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	
  if (s_bOpened == 0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xac,"g3dDmaClosePacket","s_bOpened");
    g3ddbgAssert__FbPCce(s_bOpened != 0,&DAT_003f0bf0);
  }
  if (pPacket == (void *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xad,"g3dDmaClosePacket",s_pPacket_003f0bf8);
    g3ddbgAssert__FbPCce(false,"pPacket:0x%08");
  }
  if (((uint)pPacket & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xae,"g3dDmaClosePacket","!((int)pPacket & 0xf)");
    g3ddbgAssert__FbPCce(((uint)pPacket & 0xf) == 0,"pPacket is illegal(0x%08x)\n");
  }
  s_bOpened = 0;
  dmaVif1SetPacket__FPCv(pPacket);
  return 1;
}

int g3dDmaAddPacket(void *pPacket, int iQWSize) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 68,
		/* [4] = */ 109,
		/* [5] = */ 97,
		/* [6] = */ 65,
		/* [7] = */ 100,
		/* [8] = */ 100,
		/* [9] = */ 80,
		/* [10] = */ 97,
		/* [11] = */ 99,
		/* [12] = */ 107,
		/* [13] = */ 101,
		/* [14] = */ 116,
		/* [15] = */ 0
	};
	
  if ((pPacket == (void *)0x0) || (iQWSize < 1)) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xbc,"g3dDmaAddPacket","pPacket && iQWSize > 0");
    g3ddbgAssert__FbPCce(pPacket != (void *)0x0 && 0 < iQWSize,"pPacket:0x%08, iQWSize:%d");
  }
  if (((uint)pPacket & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xbd,"g3dDmaAddPacket","!((int)pPacket & 0xf)");
    g3ddbgAssert__FbPCce(((uint)pPacket & 0xf) == 0,"pPacket is illegal(0x%08x)\n");
  }
  dmaVif1AddRefTag__FUii((uint)pPacket,iQWSize);
  return 1;
}

int g3dDmaFlush() {
  dmaVif1Kick__Fv();
  sceGsSyncPath(0,0);
  return 1;
}

int g3dDmaCopyPacket(void *pPacket, int iQWSize) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 103,
		/* [1] = */ 51,
		/* [2] = */ 100,
		/* [3] = */ 68,
		/* [4] = */ 109,
		/* [5] = */ 97,
		/* [6] = */ 67,
		/* [7] = */ 111,
		/* [8] = */ 112,
		/* [9] = */ 121,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 0
	};
	float *pSrc[4];
	float *pDest[4];
	int i;
	
  undefined8 uVar1;
  undefined4 *pPacket_00;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((pPacket == (void *)0x0) || (iQWSize < 1)) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xd5,"g3dDmaCopyPacket","pPacket && iQWSize > 0");
    g3ddbgAssert__FbPCce(pPacket != (void *)0x0 && 0 < iQWSize,"pPacket:0x%08, iQWSize:%d");
  }
  if (((uint)pPacket & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xd6,"g3dDmaCopyPacket","!((int)pPacket & 0xf)");
    g3ddbgAssert__FbPCce(((uint)pPacket & 0xf) == 0,"pPacket is illegal(0x%08x)\n");
  }
  pPacket_00 = (undefined4 *)g3dDmaOpenPacket__Fv();
  if (pPacket == (void *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xdb,"g3dDmaCopyPacket",&DAT_003f0c00);
    g3ddbgAssert__FbPCce(false,&DAT_003f0bf0);
  }
  if (pPacket_00 == (undefined4 *)0x0) {
    _SetLineInfo__FPCciT0T0("g3dDma.c",0xdc,"g3dDmaCopyPacket",s_pDest_003f0c08);
    g3ddbgAssert__FbPCce(false,&DAT_003f0bf0);
  }
  if (0 < iQWSize) {
    do {
      uVar1 = *pPacket;
                    /* WARNING: Load size is inaccurate */
      uVar2 = *(undefined4 *)((int)pPacket + 8);
      uVar3 = *(undefined4 *)((int)pPacket + 0xc);
      *pPacket_00 = (int)uVar1;
      pPacket_00[1] = (int)((ulong)uVar1 >> 0x20);
      pPacket_00[2] = uVar2;
      pPacket_00[3] = uVar3;
      iQWSize = iQWSize + -1;
      pPacket = (void *)((int)pPacket + 0x10);
      pPacket_00 = pPacket_00 + 4;
    } while (iQWSize != 0);
  }
  g3dDmaClosePacket__FPCv(pPacket_00);
  return 1;
}

int g3dDmaSetGsRegister(long unsigned int ulGsData, long unsigned int ulGsAddress) {
  s_packetSetRegister.gpa.DATA = ulGsData;
  s_packetSetRegister.gpa.ADDR = ulGsAddress;
  g3dDmaCopyPacket__FPCvi(&s_packetSetRegister,3);
  return 1;
}

int g3dDmaSetGsRegister(sceGifPackAd *pGPA) {
  s_packetSetRegister.gpa.DATA = pGPA->DATA;
  s_packetSetRegister.gpa.ADDR = pGPA->ADDR;
  g3dDmaCopyPacket__FPCvi(&s_packetSetRegister,3);
  return 1;
}

int g3dDmaSetGsRegisters(sceGifPackAd *aGPA, int iNum) {
	int qwVif1Code[4];
	sceGifTag gt;
	int *pQW[4];
	int i;
	
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int qwVif1Code [4];
  ulong local_30;
  undefined8 local_28;
  
  uVar3 = (ulong)iNum;
  memset(&local_30,0,0x10);
  local_30 = local_30 & 0xfffffffffff8000 | uVar3 & 0x7fff | 0x1000000000008000;
  local_28 = local_28 & 0xfffffffffffffff0 | 0xe;
  puVar2 = (undefined4 *)g3dDmaOpenPacket__Fv();
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = &DAT_11000000;
  puVar2[3] = iNum + 1U | 0x50000000;
  puVar2[4] = (int)local_30;
  puVar2[5] = (int)(local_30 >> 0x20);
  puVar2[6] = (undefined4)local_28;
  puVar2[7] = local_28._4_4_;
  puVar2 = puVar2 + 8;
  if (0 < (long)uVar3) {
    do {
      uVar1 = aGPA->DATA;
      uVar4 = *(undefined4 *)&aGPA->ADDR;
      uVar5 = *(undefined4 *)((int)&aGPA->ADDR + 4);
      *puVar2 = (int)uVar1;
      puVar2[1] = (int)(uVar1 >> 0x20);
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      uVar3 = (ulong)((int)uVar3 + -1);
      puVar2 = puVar2 + 4;
      aGPA = aGPA + 1;
    } while (uVar3 != 0);
  }
  g3dDmaClosePacket__FPCv(puVar2);
  return 1;
}

int g3dDmaLoadVu1MicroProgram(unsigned int *pMPG, int bImmediately) {
	static unsigned int *s_pMPGOld = NULL;
	
  if (s_pMPGOld_676 != pMPG) {
    if (bImmediately == 0) {
      _AppendVUProgTag__FPCUi(pMPG);
      s_pMPGOld_676 = pMPG;
    }
    else {
      _DmaSend__FP10sceDmaChanPv(s_pDMAChan_VIF1,pMPG);
      s_pMPGOld_676 = pMPG;
    }
  }
  return 1;
}

int g3dDmaCallVu1MicroSubroutine(unsigned int *pMS, int bImmediately) {
  undefined4 *puVar1;
  undefined8 local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  uint local_24;
  
  if (bImmediately == 0) {
    puVar1 = (undefined4 *)g3dDmaOpenPacket__Fv();
    puVar1[2] = &DAT_11000000;
    puVar1[3] = (uint)pMS >> 3 | 0x14000000;
    *puVar1 = 0;
    puVar1[1] = 0;
    g3dDmaClosePacket__FPCv(puVar1 + 4);
  }
  else {
    memset(&local_40,0,0x10);
    memset(&local_30,0,0x10);
    local_40 = CONCAT62(local_40._2_6_,1);
    local_24 = (uint)pMS >> 3 | 0x14000000;
    local_40 = local_40 & 0x800000008fffffff | 0x30000000 |
               ((long)(int)&local_30 & 0x7fffffffU) << 0x20;
    local_28 = &DAT_11000000;
    local_30 = 0;
    local_2c = 0;
    _DmaSend__FP10sceDmaChanPv(s_pDMAChan_VIF1,&local_40);
  }
  return 1;
}

int g3dDmaContinueVu1MicroSubroutine(unsigned int *pMS) {
	static int s_qwVif1Code_ContinueVu1MicroSubroutine[4] = {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 285212672,
		/* [3] = */ 385875968
	};
	
  g3dDmaAddPacket__FPCvi(s_qwVif1Code_ContinueVu1MicroSubroutine_683,1);
  return 1;
}
