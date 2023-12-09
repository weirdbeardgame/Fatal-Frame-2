// STATUS: NOT STARTED

#include "ldimage.h"

u_int* setLoadImageTags(u_int *tags, void *image, int x, int y, int width, int height, int vram_adrs) {
  uint *puVar1;
  
  puVar1 = setLoadImageTagsYX(tags,image,0x400,x,y,width,height,vram_adrs);
  return puVar1;
}

static u_int* setLoadImageTagsYX(u_int *tags, void *image, int skip, int x, int y, int width, int height, int vram_adrs) {
	u_int *p;
	int mbx;
	int mby;
	int i;
	int j;
	
  uint dsay;
  void *addr;
  int iVar1;
  uint eop;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int mbx;
  
  iVar1 = width >> 4;
  puVar2 = (uint *)((uint)tags & 0xfffffff | 0x20000000);
  iVar5 = height >> 4;
  iVar6 = 0;
  setDMAscTag(puVar2,0,(void *)0x0,0,1,0,3);
  setGIFtag(puVar2 + 4,0xe,1,0,0,0,0,2);
  setBITBLTBUF(puVar2 + 8,vram_adrs,10,0);
  setTRXREG(puVar2 + 0xc,0x10,0x10);
  puVar2 = puVar2 + 0x10;
  if (0 < iVar1) {
    do {
      if (0 < iVar5) {
        iVar3 = 0;
        dsay = y;
        do {
          iVar4 = iVar3 + 1;
          eop = (uint)(iVar6 == iVar1 + -1);
          if (iVar3 != iVar5 + -1) {
            eop = 0;
          }
          setDMAscTag(puVar2,0,(void *)0x0,0,1,0,4);
          setGIFtag(puVar2 + 4,0xe,1,0,0,0,0,2);
          setTRXPOS(puVar2 + 8,0,x + iVar6 * 0x10,dsay);
          setTRXDIR(puVar2 + 0xc,0);
          setGIFtag(puVar2 + 0x10,0,0,2,0,0,eop,0x40);
          addr = (void *)((uint)image & 0xfffffff);
          image = (void *)((int)image + skip);
          setDMAscTag(puVar2 + 0x14,0,addr,0,3,0,0x40);
          puVar2 = puVar2 + 0x18;
          iVar3 = iVar4;
          dsay = dsay + 0x10;
        } while (iVar4 < iVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  setDMAscTag(puVar2,0,(void *)0x0,0,7,0,0);
  return puVar2 + 4;
}

static void setDMAscTag(u_int *p, u_int spr, void *addr, u_int irq, u_int id, u_int pce, u_int qwc) {
  *(ulong *)p = (long)(int)spr << 0x3f | (ulong)qwc |
                (ulong)((long)(int)id << 0x20) >> 4 | (ulong)((long)(int)irq << 0x20) >> 1 |
                (long)(int)((uint)addr & 0xfffffff0) << 0x20 | (ulong)((long)(int)pce << 0x20) >> 6;
  return;
}

static void setGIFtag(u_int *p, u_long regs, u_int nreg, u_int flg, u_int prim, u_int pre, u_int eop, u_int nloop) {
  *p = eop << 0xf | nloop;
  p[3] = (uint)(regs >> 0x20);
  p[1] = pre << 0xe | nreg << 0x1c | flg << 0x1a | prim << 0xf;
  p[2] = (uint)regs;
  return;
}

static void setGIFad(u_int *p, u_int reg, u_long value) {
  p[2] = reg;
  *(ulong *)p = value;
  p[3] = 0;
  return;
}

static void setBITBLTBUF(u_int *p, u_int dbp, u_int dbw, u_int dpsm) {
  setGIFad(p,0x50,(long)(int)dpsm << 0x38 | (long)(int)dbw << 0x30 | (long)(int)dbp << 0x20);
  return;
}

static void setTRXPOS(u_int *p, u_int dir, u_int dsax, u_int dsay) {
  setGIFad(p,0x51,(long)(int)dir << 0x3b | (long)(int)dsay << 0x30 | (long)(int)dsax << 0x20);
  return;
}

static void setTRXREG(u_int *p, u_int rrw, u_int rrh) {
  setGIFad(p,0x52,CONCAT44(rrh,rrw));
  return;
}

static void setTRXDIR(u_int *p, u_int xdir) {
  setGIFad(p,0x53,(ulong)xdir);
  return;
}

void loadImage(u_int *tags) {
  REG_DMAC_2_GIF_TADR = (uint)tags & 0xfffffff;
  REG_DMAC_2_GIF_QWC = 0;
  REG_DMAC_2_GIF_CHCR = 0x105;
  return;
}
