// STATUS: NOT STARTED

#include "dmaVif1.h"

static int vu1tag_num;
static float *objwork[4];
static float *objworkdbuf[2][4];
static sceDmaTag *cachetag;
static sceDmaTag *cachetagdbuf[2];
static int tagswap;
static int bVifBufResizeCnt;
static int iSaveNewTagMax;
static int numtag_save;
static sceDmaChan *s_pDmaChan_VIF1;

static int DummyFlushData[4] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0
};

static void _OnDetectedPacketDoesNotTerminated(G3DGSSYNCPATHTIMEOUTREASON r) {
  dmaVif1ClearDMA__Fv();
  return;
}

void dmaVif1ClearDMA() {
  uint uVar1;
  
  printf("Dma DMA Error %x\n");
  g3ddbgDumpVif1Stat__Fv();
  g3ddbgDumpVif1Code__Fv();
  REG_DMAC_ENABLEW = 0x10000;
  uVar1 = REG_DMAC_1_VIF1_CHCR;
  REG_DMAC_1_VIF1_CHCR = uVar1 & 0xfffffeff;
  REG_DMAC_ENABLEW = 0;
  sceDevVif1Reset();
  printf(s_WAIT_003efb00);
  return;
}

void dmaVif1CheckDMA() {
  uint uVar1;
  
  uVar1 = REG_VIF1_STAT;
  if ((uVar1 & 0x3f00) != 0) {
    dmaVif1ClearDMA__Fv();
  }
  return;
}

void dmaVif1CheckSync() {
  int iVar1;
  long lVar2;
  
  while (lVar2 = sceDmaSync(s_pDmaChan_VIF1,1,0), lVar2 != 0) {
    dmaVif1CheckDMA__Fv();
  }
  iVar1 = REG_VIF1_STAT;
  if (iVar1 != 0) {
    dmaVif1ClearDMA__Fv();
  }
  return;
}

void dmaVif1AddCallTag(unsigned int next_tag_addr) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 65,
		/* [8] = */ 100,
		/* [9] = */ 100,
		/* [10] = */ 67,
		/* [11] = */ 97,
		/* [12] = */ 108,
		/* [13] = */ 108,
		/* [14] = */ 84,
		/* [15] = */ 97,
		/* [16] = */ 103,
		/* [17] = */ 0
	};
	sceDmaTag *ptag;
	
  int iVar1;
  _sceDmaTag *p_Var2;
  
  p_Var2 = cachetag + vu1tag_num;
  p_Var2->next = (_sceDmaTag *)next_tag_addr;
  p_Var2->qwc = 0;
  p_Var2->mark = '\0';
  p_Var2->id = 'P';
  p_Var2->p[0] = 0;
  iVar1 = numtag_save;
  vu1tag_num = vu1tag_num + 1;
  p_Var2->p[1] = 0;
  if (iVar1 <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x70,"dmaVif1AddCallTag","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce(vu1tag_num < numtag_save,&DAT_003efb08);
  }
  return;
}

void dmaVif1WaitPath3() {
	sceDmaTag *ptag;
	
  _sceDmaTag *p_Var1;
  
  p_Var1 = cachetag + vu1tag_num;
  p_Var1->qwc = 0;
  p_Var1->mark = '\0';
  p_Var1->id = '\x10';
  p_Var1->next = (_sceDmaTag *)0x0;
  p_Var1->p[0] = 0x13000000;
  p_Var1->p[1] = 0;
  vu1tag_num = vu1tag_num + 1;
  return;
}

qword* dmaVif1GetPacket() {
  if (numtag_save < vu1tag_num) {
    printf("PACKET_OVER v1tag_num = %d, numtag = %d\n");
  }
  return (int (*) [4])(cachetag + vu1tag_num + 1);
}

void dmaVif1SetPacket(void *end_adrs) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 0
	};
	sceDmaTag *ptag;
	int num;
	int qnum;
	
  uint uVar1;
  int iVar2;
  _sceDmaTag *p_Var3;
  int iVar4;
  
  if (((uint)end_adrs & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x97,"dmaVif1SetPacket","!((int)end_adrs & 0xf)");
    g3ddbgAssert__FbPCce
              (((uint)end_adrs & 0xf) == 0,"dmaVif1SetPacket():end_adrs is illegal(0x%08x)\n");
  }
  p_Var3 = cachetag + vu1tag_num;
  iVar2 = (int)end_adrs - (int)p_Var3;
  iVar4 = iVar2 >> 4;
  if (iVar2 < 1) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0xa5,"dmaVif1SetPacket","(int)end_adrs - (int)ptag > 0");
    g3ddbgAssert__FbPCce(0 < iVar2,"end_adrs : 0x%08x, ptag : 0x%08x");
  }
  uVar1 = iVar4 - 1U | 0x10000000;
  p_Var3->p[1] = 0;
  p_Var3->p[0] = 0;
  p_Var3->qwc = (short)uVar1;
  p_Var3->mark = (char)(uVar1 >> 0x10);
  p_Var3->id = (char)(uVar1 >> 0x18);
  p_Var3->next = (_sceDmaTag *)((uint)(((uint)end_adrs & 0x70000000) == 0x70000000) << 0x1f);
  if (iVar4 < 0) {
    printf("odd num = %d\n");
  }
  vu1tag_num = vu1tag_num + iVar4;
  if (numtag_save <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0xb4,"dmaVif1SetPacket","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce(vu1tag_num < numtag_save,&DAT_003efb08);
  }
  return;
}

qword* dmaVif1GetPacketVIF() {
  int (*paiVar1) [4];
  
  paiVar1 = dmaVif1GetPacketFLUSH_DIRECT__Fv();
  return paiVar1;
}

void dmaVif1SetPacketVIF(qword *end_adrs, int vifcode1, int vifcode2) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 86,
		/* [17] = */ 73,
		/* [18] = */ 70,
		/* [19] = */ 0
	};
	sceDmaTag *ptag;
	int num;
	int qnum;
	
  _sceDmaTag *p_Var1;
  uint uVar2;
  int iVar3;
  
  if (((uint)end_adrs & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0xbe,"dmaVif1SetPacketVIF","!((int)end_adrs & 0xf)");
    g3ddbgAssert__FbPCce
              (((uint)end_adrs & 0xf) == 0,"dmaVif1SetPacketVIF():end_adrs is illegal(0x%08x)\n");
  }
  p_Var1 = cachetag + vu1tag_num;
  p_Var1->next = (_sceDmaTag *)0x0;
  iVar3 = (int)end_adrs - (int)p_Var1 >> 4;
  p_Var1->p[0] = vifcode1;
  uVar2 = iVar3 - 1U | 0x10000000;
  p_Var1->p[1] = vifcode2;
  p_Var1->qwc = (short)uVar2;
  p_Var1->mark = (char)(uVar2 >> 0x10);
  p_Var1->id = (char)(uVar2 >> 0x18);
  if (iVar3 < 0) {
    printf("odd num = %d\n");
  }
  vu1tag_num = vu1tag_num + iVar3;
  if (numtag_save <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0xdf,"dmaVif1SetPacketVIF","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce(vu1tag_num < numtag_save,&DAT_003efb08);
  }
  return;
}

qword* dmaVif1GetPacketFLUSH_DIRECT() {
  if (numtag_save < vu1tag_num) {
    printf("PACKET_OVER v1tag_num = %d, numtag = %d\n");
  }
  if (cachetag + vu1tag_num == (_sceDmaTag *)0x0) {
    printf("odd vu1tag_nuM = %d\n");
  }
  return (int (*) [4])(cachetag + vu1tag_num + 1);
}

void dmaVif1SetPacketFLUSH_DIRECT(qword *end_adrs) {
	static char __FUNCTION__[29] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 83,
		/* [8] = */ 101,
		/* [9] = */ 116,
		/* [10] = */ 80,
		/* [11] = */ 97,
		/* [12] = */ 99,
		/* [13] = */ 107,
		/* [14] = */ 101,
		/* [15] = */ 116,
		/* [16] = */ 70,
		/* [17] = */ 76,
		/* [18] = */ 85,
		/* [19] = */ 83,
		/* [20] = */ 72,
		/* [21] = */ 95,
		/* [22] = */ 68,
		/* [23] = */ 73,
		/* [24] = */ 82,
		/* [25] = */ 69,
		/* [26] = */ 67,
		/* [27] = */ 84,
		/* [28] = */ 0
	};
	sceDmaTag *ptag;
	int num;
	int qnum;
	
  _sceDmaTag *p_Var1;
  uint uVar2;
  int iVar3;
  
  if (((uint)end_adrs & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0
              ("dmaVif1.c",0xfa,"dmaVif1SetPacketFLUSH_DIRECT","!((int)end_adrs & 0xf)");
    g3ddbgAssert__FbPCce
              (((uint)end_adrs & 0xf) == 0,
               "dmaVif1SetPacketFLUSH_DIRECT():end_adrs is illegal(0x%08x)\n");
  }
  p_Var1 = cachetag + vu1tag_num;
  p_Var1->p[0] = (uint)&DAT_11000000;
  iVar3 = (int)end_adrs - (int)p_Var1 >> 4;
  p_Var1->next = (_sceDmaTag *)0x0;
  uVar2 = iVar3 - 1U | 0x10000000;
  p_Var1->qwc = (short)uVar2;
  p_Var1->mark = (char)(uVar2 >> 0x10);
  p_Var1->id = (char)(uVar2 >> 0x18);
  p_Var1->p[1] = iVar3 - 1U | 0x50000000;
  if (iVar3 < 0) {
    printf("odd num = %d\n");
  }
  vu1tag_num = vu1tag_num + iVar3;
  if (numtag_save <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0
              ("dmaVif1.c",0x11d,"dmaVif1SetPacketFLUSH_DIRECT","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce
              (vu1tag_num < numtag_save,"packet buffer is over( vu1tag_num : %d, numtag_save : %d )"
              );
  }
  return;
}

int dmaVif1GetToggle() {
  return tagswap;
}

void dmaVif1AddRefTag(unsigned int addr, int size) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 65,
		/* [8] = */ 100,
		/* [9] = */ 100,
		/* [10] = */ 82,
		/* [11] = */ 101,
		/* [12] = */ 102,
		/* [13] = */ 84,
		/* [14] = */ 97,
		/* [15] = */ 103,
		/* [16] = */ 0
	};
	sceDmaTag *ptag;
	
  int iVar1;
  _sceDmaTag *p_Var2;
  uint uVar3;
  
  if ((addr & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x132,"dmaVif1AddRefTag","!((int)addr & 0xf)");
    g3ddbgAssert__FbPCce((addr & 0xf) == 0,"dmaVif1AddRefTag():addr is illegal(0x%08x)\n");
  }
  p_Var2 = cachetag + vu1tag_num;
  uVar3 = size | 0x30000000;
  p_Var2->qwc = (short)uVar3;
  p_Var2->mark = (char)(uVar3 >> 0x10);
  p_Var2->id = (char)(uVar3 >> 0x18);
  p_Var2->next = (_sceDmaTag *)(addr | (uint)((addr & 0x70000000) == 0x70000000) << 0x1f);
  p_Var2->p[0] = 0;
  iVar1 = numtag_save;
  vu1tag_num = vu1tag_num + 1;
  p_Var2->p[1] = 0;
  if (iVar1 <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x13b,"dmaVif1AddRefTag","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce(vu1tag_num < numtag_save,&DAT_003efb08);
  }
  return;
}

void dmaVif1AddRefTagVIF(unsigned int addr, int size, int vif1code1, int vif1code2) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 65,
		/* [8] = */ 100,
		/* [9] = */ 100,
		/* [10] = */ 82,
		/* [11] = */ 101,
		/* [12] = */ 102,
		/* [13] = */ 84,
		/* [14] = */ 97,
		/* [15] = */ 103,
		/* [16] = */ 86,
		/* [17] = */ 73,
		/* [18] = */ 70,
		/* [19] = */ 0
	};
	sceDmaTag *ptag;
	
  int iVar1;
  uint uVar2;
  _sceDmaTag *p_Var3;
  
  if ((addr & 0xf) != 0) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x143,"dmaVif1AddRefTagVIF","!((int)addr & 0xf)");
    g3ddbgAssert__FbPCce((addr & 0xf) == 0,"dmaVif1AddRefTagVIF():addr is illegal(0x%08x)\n");
  }
  uVar2 = size | 0x30000000;
  p_Var3 = cachetag + vu1tag_num;
  p_Var3->next = (_sceDmaTag *)addr;
  p_Var3->qwc = (short)uVar2;
  p_Var3->mark = (char)(uVar2 >> 0x10);
  p_Var3->id = (char)(uVar2 >> 0x18);
  p_Var3->p[0] = vif1code1;
  iVar1 = numtag_save;
  vu1tag_num = vu1tag_num + 1;
  p_Var3->p[1] = vif1code2;
  if (iVar1 <= vu1tag_num) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x14c,"dmaVif1AddRefTagVIF","vu1tag_num < numtag_save");
    g3ddbgAssert__FbPCce(vu1tag_num < numtag_save,&DAT_003efb08);
  }
  return;
}

void dmaVif1Clear() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 67,
		/* [8] = */ 108,
		/* [9] = */ 101,
		/* [10] = */ 97,
		/* [11] = */ 114,
		/* [12] = */ 0
	};
	
  cachetag = cachetagdbuf[0];
  objwork = objworkdbuf[0];
  tagswap = 0;
  vu1tag_num = 0;
  return;
}

void dmaVif1Init(void *pPacketBuffer, int iSizePacketBuffer, void *pTagBuffer, int iNumTag) {
  objworkdbuf[1] = (float (*) [4])((int)pPacketBuffer + iSizePacketBuffer * 0x10);
  cachetagdbuf[1] = (_sceDmaTag *)((int)pTagBuffer + iNumTag * 0x10);
  bVifBufResizeCnt = 3;
  objworkdbuf[0] = (float (*) [4])pPacketBuffer;
  cachetagdbuf[0] = (_sceDmaTag *)pTagBuffer;
  iSaveNewTagMax = iNumTag;
  numtag_save = iNumTag;
  s_pDmaChan_VIF1 = (sceDmaChan *)sceDmaGetChan(1);
  s_pDmaChan_VIF1->chcr = (tD_CHCR)((uint)s_pDmaChan_VIF1->chcr & 0xffffffbf);
  dmaVif1Clear__Fv();
  g3dGsSetDebugHandler__FPF26G3DGSSYNCPATHTIMEOUTREASON_v
            (_OnDetectedPacketDoesNotTerminated__F26G3DGSSYNCPATHTIMEOUTREASON);
  return;
}

int dmaVif1Resize(int iNumTag) {
  int iVar1;
  
  iVar1 = 0;
  if ((tagswap == 0) && (vu1tag_num < iNumTag)) {
    iVar1 = 1;
    bVifBufResizeCnt = 0;
    cachetagdbuf[1] = cachetagdbuf[0] + iNumTag;
    iSaveNewTagMax = iNumTag;
  }
  return iVar1;
}

int dmaVif1IsResizeOK() {
  return (int)(2 < bVifBufResizeCnt);
}

void dmaVif1Kick() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 100,
		/* [1] = */ 109,
		/* [2] = */ 97,
		/* [3] = */ 86,
		/* [4] = */ 105,
		/* [5] = */ 102,
		/* [6] = */ 49,
		/* [7] = */ 75,
		/* [8] = */ 105,
		/* [9] = */ 99,
		/* [10] = */ 107,
		/* [11] = */ 0
	};
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  _sceDmaTag *p_Var6;
  _sceDmaTag *p_Var7;
  
  if (cachetag == (_sceDmaTag *)0x0) {
    printf("dmaVif1Kick() Not Initialized !!!\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  p_Var7 = cachetag + vu1tag_num;
  p_Var7->qwc = 1;
  p_Var7->mark = '\0';
  p_Var7->id = 'p';
  cachetag[vu1tag_num].next = (_sceDmaTag *)DummyFlushData;
  p_Var7 = cachetag;
  cachetag[vu1tag_num].p[0] = 0;
  p_Var6 = p_Var7 + vu1tag_num + 1;
  p_Var7[vu1tag_num].p[1] = 0;
  uVar5 = DummyFlushData._8_8_;
  uVar4 = DummyFlushData._0_8_;
  puVar1 = (undefined *)((int)&p_Var6->next + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  vu1tag_num = vu1tag_num + 1;
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DummyFlushData._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)p_Var6 & 7;
  *(ulong *)((int)p_Var6 - uVar2) =
       uVar4 << uVar2 * 8 | *(ulong *)((int)p_Var6 - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8
  ;
  puVar1 = (undefined *)((int)p_Var6->p + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)uVar5 >> (7 - uVar2) * 8;
  uVar2 = (uint)p_Var6->p & 7;
  puVar3 = (ulong *)((int)p_Var6->p - uVar2);
  *puVar3 = uVar5 << uVar2 * 8 | *puVar3 & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  dmaVif1CheckDMA__Fv();
  sceDmaSync(s_pDmaChan_VIF1,0,0);
  s_pDmaChan_VIF1->chcr = (tD_CHCR)((uint)s_pDmaChan_VIF1->chcr | 0x40);
  FlushCache(0);
  sceDmaSync(s_pDmaChan_VIF1,0,0);
  sceDmaSend(s_pDmaChan_VIF1,(uint)cachetag & 0xfffffff);
  tagswap = 1 - tagswap;
  objwork = objworkdbuf[tagswap];
  cachetag = cachetagdbuf[tagswap];
  if (1 < tagswap) {
    _SetLineInfo__FPCciT0T0("dmaVif1.c",0x1c2,__FUNCTION___673,"tagswap < 2");
    g3ddbgAssert__FbPCce(tagswap < 2,&DAT_003efb08);
  }
  vu1tag_num = 0;
  if (bVifBufResizeCnt < 3) {
    bVifBufResizeCnt = bVifBufResizeCnt + 1;
  }
  numtag_save = iSaveNewTagMax;
  return;
}
