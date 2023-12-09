// STATUS: NOT STARTED

#include "SpriteCmn.h"

static SPRT_DAT *SpCmnCtlList = NULL;

void SpCmnStart(SPRT_DAT *pSprDat) {
  SpCmnCtlList = pSprDat;
  return;
}

void SpCmnSetSprite(DISP_SPRT *ds, int iLabel, int off_x, int off_y, u_char alpha, int iFlg) {
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(ds,SpCmnCtlList + iLabel);
  ds->alpha = (uchar)((int)((uint)ds->alpha * (uint)alpha) >> 7);
  ds->x = ds->x + (float)off_x;
  ds->y = ds->y + (float)off_y;
  if (iFlg != 0) {
    ds->alphar = 0x48;
  }
  return;
}

void SpCmnDrawSprite(int iLabel, int off_x, int off_y, u_char alpha, int iFlg) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  SpCmnSetSprite__FP9DISP_SPRTiiiUci(&ds,iLabel,off_x,off_y,alpha,iFlg);
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void SpCmnDrawSpriteScale(int iLabel, int iOffX, int iOffY, float fScaleW, float fScaleH, u_char ucAlpha, int iFlg) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  SpCmnSetSprite__FP9DISP_SPRTiiiUci(&ds,iLabel,iOffX,iOffY,ucAlpha,iFlg);
  ds.csx = ds.x;
  ds.csy = ds.y;
  ds.scw = fScaleW;
  ds.sch = fScaleH;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void SpCmnDrawRange(int st, int en, int off_x, int off_y, u_char alpha, int iFlg) {
	int i;
	
  int iVar1;
  
  if (st <= en) {
    do {
      iVar1 = st + 1;
      SpCmnDrawSprite__FiiiUci(st,off_x,off_y,alpha,iFlg);
      st = iVar1;
    } while (iVar1 <= en);
  }
  return;
}

void SpCmnBlackOut(u_char ucAlpha) {
	DISP_SQAR dsq;
	SQAR_DAT black_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  DISP_SQAR dsq;
  SQAR_DAT black_bg;
  
  puVar1 = (undefined *)((int)&black_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0039fa78 >> (7 - uVar2) * 8;
  black_bg._0_8_ = DAT_0039fa78;
  puVar1 = (undefined *)((int)&black_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_0039fa80 >> (7 - uVar2) * 8;
  black_bg._8_8_ = DAT_0039fa80;
  uVar2 = (uint)&black_bg.alpha & 7;
  puVar4 = &black_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_0039fa88 >> (7 - uVar2) * 8;
  black_bg._16_8_ = DAT_0039fa88;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&black_bg);
  dsq.alpha = (uchar)((int)((uint)dsq.alpha * (uint)ucAlpha) >> 7);
  DispSqrD__FP9DISP_SQAR(&dsq);
  return;
}

void SpCmnPrintNumber_NK(int iData, int iNum, int iX, int iY, u_char ucColLabel, u_char ucAlpha, int iPri, u_char ucMsgType, int ucZeroFlg) {
  PrintNumber_N__FiiiiUcUciUcUc
            (iData,iNum,iX + 2,iY + 2,'\t',ucAlpha,iPri,ucMsgType,ucZeroFlg & 0xffU);
  PrintNumber_N__FiiiiUcUciUcUc
            (iData,iNum,iX,iY,ucColLabel,ucAlpha,iPri,ucMsgType,ucZeroFlg & 0xffU);
  return;
}

void SpCmnPrintMsg_K(int iMsgType, int iMsgID, int iX, int iY, int iColLabel, int iAlpha, int iPri) {
  PrintMsg__Fiiiiiii(iMsgType,iMsgID,iX + 2,iY + 2,9,iAlpha,iPri);
  PrintMsg__Fiiiiiii(iMsgType,iMsgID,iX,iY,iColLabel,iAlpha,iPri);
  return;
}

int SpCmnGetCenterX(int iGroupLabel, int iMsgLabel, int iCenX) {
	DISP_STR disp_wrk;
	
  int iVar1;
  DISP_STR disp_wrk;
  
  memset(&disp_wrk,0,0x38);
  disp_wrk.str = GetMsgDataAddr__Fii(iGroupLabel,iMsgLabel);
  iVar1 = GetMsgLineLength__FPUcPPUc(disp_wrk.str,(uchar **)0x0);
  return iCenX - iVar1 / 2;
}

void* SpCmnTexMemLoad(int iFileNo) {
	void *pLoadAddr;
	
  uint size;
  void *addr;
  
  size = GetFileSize(iFileNo);
  addr = mem_utilGetMem__Fi(size);
  LoadReq__FiUi(iFileNo,(uint)addr);
  return addr;
}

void* SpCmnTexMemReleaseSub(void *pTexAddr) {
  if (pTexAddr != (void *)0x0) {
    mem_utilFreeMem__FPv(pTexAddr);
  }
  return (void *)0x0;
}

void* SpCmnGetScreen() {
	void *pAddr;
	
  int size;
  void *ee_adrs;
  
  size = LocalCopyLtoBGetSize__Fi(0);
  ee_adrs = mem_utilGetMem__Fi(size);
  LocalCopyLtoBAdrs__Fiii(0,(int)ee_adrs,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
  return ee_adrs;
}

void SpCmnDrawScreen(void *pScrAddr, int iVramAddr) {
	SPRT_DAT sd;
	DISP_SPRT ds;
	
  SPRT_DAT sd;
  DISP_SPRT ds;
  
  sd.tex0 = DAT_0039fa90;
  sd._16_8_ = DAT_0039faa0;
  sd._8_8_ = DAT_0039fa98;
  sd._24_8_ = DAT_0039faa8;
  LocalCopyBtoLAdrs__Fiii(0,(int)pScrAddr,iVramAddr);
  memset(&ds,0,0x88);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,&sd);
  ds.tex0 = (long)iVramAddr | 0x28028000U | (long)iVramAddr << 0x25 | 0x2000000240000000;
  ds.tex1 = 0x161;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}
