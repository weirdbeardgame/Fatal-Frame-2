// STATUS: NOT STARTED

#include "audiodec.h"

static int AUTODMA_CH;
static int audio_vol_percent;

int audioDecCreate(AudioDec *ad, u_char *buff, int buffSize, int iopBuff, int iopBuffSize, u_char *zeroBuff, int iopZeroBuff, int zeroBuffSize, int audio_vol, int auto_dma_core) {
	int audio_vol;
	int auto_dma_core;
	
  AUTODMA_CH = auto_dma_core;
  ad->iopBuffSize = iopBuffSize;
  ad->iopBuff = iopBuff;
  ad->iopZero = iopZeroBuff;
  ad->size = buffSize;
  ad->iopZeroSize = zeroBuffSize;
  ad->data = buff;
  ad->state = 0;
  ad->hdrCount = 0;
  ad->put = 0;
  ad->count = 0;
  ad->totalBytes = 0;
  ad->totalBytesSent = 0;
  ad->iopLastPos = 0;
  ad->iopPausePos = 0;
  memset(zeroBuff,0,(long)zeroBuffSize);
  sendToIOP(ad->iopZero,zeroBuff,zeroBuffSize);
  sceSdRemote(1,0x80d0,AUTODMA_CH,0,ad->iopZero,0x4000,ad->iopZeroSize);
  audio_vol_percent = audio_vol;
  return 1;
}

int audioDecDelete(AudioDec *ad) {
  return 1;
}

void audioDecPause(AudioDec *ad) {
	int ret;
	
  int iVar1;
  uint uVar2;
  
  ad->state = 3;
  changeInputVolume(0);
  uVar2 = sceSdRemote(1,0x80e0,AUTODMA_CH,2,0,0);
  iVar1 = AUTODMA_CH;
  ad->iopPausePos = (uVar2 & 0xffffff) - ad->iopBuff;
  sceSdRemote(1,0x80d0,iVar1,0,ad->iopZero,0x4000,ad->iopZeroSize);
  return;
}

void audioDecResume(AudioDec *ad) {
  int iVar1;
  
  changeInputVolume(0x7fff);
  iVar1 = ad->iopBuffSize;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x3ff;
  }
  sceSdRemote(1,0x80e0,AUTODMA_CH,0x13,ad->iopBuff,(iVar1 >> 10) << 10,ad->iopBuff + ad->iopPausePos
             );
  ad->state = 2;
  return;
}

void audioDecStart(AudioDec *ad) {
  audioDecResume(ad);
  return;
}

void audioDecReset(AudioDec *ad) {
  audioDecPause(ad);
  ad->iopPausePos = 0;
  ad->state = 0;
  ad->hdrCount = 0;
  ad->put = 0;
  ad->count = 0;
  ad->totalBytes = 0;
  ad->totalBytesSent = 0;
  ad->iopLastPos = 0;
  return;
}

void audioDecBeginPut(AudioDec *ad, u_char **ptr0, int *len0, u_char **ptr1, int *len1) {
	int len;
	
  int iVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  
  if (ad->state == 0) {
    iVar1 = ad->hdrCount;
    *len0 = 0x28 - iVar1;
    *ptr0 = (uchar *)((ad->sshd).id + iVar1);
    puVar2 = ad->data;
    *len1 = ad->size;
    *ptr1 = puVar2;
    return;
  }
  iVar1 = ad->put;
  iVar4 = ad->size - iVar1;
  iVar3 = ad->size - ad->count;
  puVar2 = ad->data;
  if (iVar3 <= iVar4) {
    *len0 = iVar3;
    *len1 = 0;
    *ptr0 = puVar2 + iVar1;
    *ptr1 = (uchar *)0x0;
    return;
  }
  *len0 = iVar4;
  *ptr0 = puVar2 + iVar1;
  iVar1 = ad->put;
  iVar4 = ad->size;
  *ptr1 = ad->data;
  *len1 = iVar3 - (iVar4 - iVar1);
  return;
}

void audioDecEndPut(AudioDec *ad, int size) {
	int hdr_add;
	
  int iVar1;
  int iVar2;
  
  if (ad->state == 0) {
    iVar1 = 0x28 - ad->hdrCount;
    if (size < iVar1) {
      iVar1 = size;
    }
    iVar2 = ad->hdrCount + iVar1;
    size = size - iVar1;
    ad->hdrCount = iVar2;
    if (0x27 < iVar2) {
      ad->state = 1;
      printf("-------- audio information --------------------\n");
      printf(
            "[%c%c%c%c]\nheader size:\t\t\t\t\t\t\t%d\ntype(0:PCM big, 1:PCM little, 2:ADPCM): %d\nsampling rate:\t\t\t\t\t\t  %dHz\nchannels:\t\t\t\t\t\t\t   %d\ninterleave size:\t\t\t\t\t\t%d\ninterleave start block address:\t\t %d\ninterleave end block address:\t\t   %d\n"
            );
      printf("[%c%c%c%c]\ndata size:\t\t\t\t\t\t\t  %d\n");
    }
  }
  if (ad->size == 0) {
    trap(7);
  }
  ad->count = ad->count + size;
  ad->totalBytes = ad->totalBytes + size;
  ad->put = (ad->put + size) % ad->size;
  return;
}

int audioDecIsPreset(AudioDec *ad) {
  return ad->totalBytesSent < ad->iopBuffSize ^ 1;
}

int audioDecSendToIOP(AudioDec *ad) {
	int pd0;
	int pd1;
	int d0;
	int d1;
	u_char *ps0;
	int s0;
	int s1;
	int count_sent;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int pd0;
  int d0;
  int pd1;
  int d1;
  
  iVar6 = ad->state;
  iVar2 = 0;
  if (iVar6 == 1) {
    iVar6 = ad->iopBuffSize;
    if (iVar6 == 0) {
      trap(7);
    }
    d0 = iVar6 - ad->totalBytesSent;
    pd1 = 0;
    d1 = 0;
    pd0 = ad->iopBuff + ad->totalBytesSent % iVar6;
LAB_0027a144:
    iVar6 = ad->count;
  }
  else if (iVar6 < 2) {
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = ad->count;
  }
  else {
    if (iVar6 == 2) {
      uVar1 = sceSdRemote(1,0x8100,AUTODMA_CH);
      iopGetArea(&pd0,&d0,&pd1,&d1,ad,(uVar1 & 0xffffff) - ad->iopBuff);
      goto LAB_0027a144;
    }
    if (iVar6 == 3) {
      return 0;
    }
    iVar6 = ad->count;
  }
  iVar4 = ad->size;
  iVar5 = ((ad->put - iVar6) + iVar4) % iVar4;
  iVar3 = iVar6;
  if (iVar6 < 0) {
    iVar3 = iVar6 + 0x3ff;
  }
  if (iVar4 == 0) {
    trap(7);
  }
  iVar3 = (iVar3 >> 10) * 0x400;
  iVar4 = iVar4 - iVar5;
  if (iVar3 <= iVar4) {
    iVar4 = iVar3;
  }
  if (0x3ff < d0 + d1) {
    if (iVar4 + (iVar3 - iVar4) < 0x400) {
      iVar5 = ad->iopLastPos;
      goto LAB_0027a1e0;
    }
    iVar2 = sendToIOP2area(pd0,d0,pd1,d1,ad->data + iVar5,iVar4,ad->data,iVar3 - iVar4);
    iVar6 = ad->count;
  }
  iVar5 = ad->iopLastPos;
LAB_0027a1e0:
  ad->count = iVar6 - iVar2;
  ad->totalBytesSent = ad->totalBytesSent + iVar2;
  if (ad->iopBuffSize == 0) {
    trap(7);
  }
  ad->iopLastPos = (iVar5 + iVar2) % ad->iopBuffSize;
  return iVar2;
}

static void iopGetArea(int *pd0, int *d0, int *pd1, int *d1, AudioDec *ad, int pos) {
	int len;
	int diff;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = ad->iopBuffSize;
  iVar2 = ad->iopLastPos;
  if (iVar1 == 0) {
    trap(7);
  }
  iVar3 = (((pos + iVar1) - iVar2) + -0x400) % iVar1;
  if ((uint)(pos - iVar2) < 0x400) {
    *pd0 = ad->iopBuff;
    *d0 = 0;
    *pd1 = ad->iopBuff;
    *d1 = 0;
    return;
  }
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0x3ff;
  }
  iVar3 = (iVar3 >> 10) * 0x400;
  if (iVar3 <= iVar1 - iVar2) {
    *pd0 = ad->iopBuff + iVar2;
    *d0 = iVar3;
    *pd1 = 0;
    *d1 = 0;
    return;
  }
  *pd0 = ad->iopBuff + iVar2;
  *d0 = ad->iopBuffSize - ad->iopLastPos;
  *pd1 = ad->iopBuff;
  *d1 = iVar3 - (ad->iopBuffSize - ad->iopLastPos);
  return;
}

static int sendToIOP2area(int pd0, int d0, int pd1, int d1, u_char *ps0, int s0, u_char *ps1, int s1) {
	int diff;
	
  int iVar1;
  int iVar2;
  
  iVar2 = s0 + s1;
  iVar1 = iVar2 - (d0 + d1);
  if (d0 + d1 < iVar2) {
    if (iVar1 < s1) {
      s1 = s1 - iVar1;
      iVar2 = s0 + s1;
    }
    else {
      iVar1 = iVar1 - s1;
      s1 = 0;
      s0 = s0 - iVar1;
      iVar2 = s0;
    }
  }
  iVar1 = d0 - s0;
  if (s0 < d0) {
    if (s1 < iVar1) {
      sendToIOP(pd0,ps0,s0);
      sendToIOP(pd0 + s0,ps1,s1);
    }
    else {
      sendToIOP(pd0,ps0,s0);
      sendToIOP(pd0 + s0,ps1,iVar1);
      sendToIOP(pd1,ps1 + (d0 - s0),s1 - iVar1);
    }
  }
  else {
    sendToIOP(pd0,ps0,d0);
    sendToIOP(pd1,ps0 + d0,s0 - d0);
    sendToIOP((pd1 + s0) - d0,ps1,s1);
  }
  return iVar2;
}

static int sendToIOP(int dst, u_char *src, int size) {
	sceSifDmaData transData;
	int did;
	
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  sceSifDmaData transData;
  
  iVar1 = 0;
  if (0 < size) {
    transData.mode = 0;
    transData.data = (uint)src;
    transData.addr = dst;
    transData.size = size;
    FlushCache(0);
    uVar2 = sceSifSetDma(&transData,1);
    do {
      lVar3 = sceSifDmaStat(uVar2);
      iVar1 = size;
    } while (-1 < lVar3);
  }
  return iVar1;
}

static void changeInputVolume(u_int val) {
  int iVar1;
  
  iVar1 = (int)(val * audio_vol_percent) / 100;
  sceSdRemote(1,0x8010,AUTODMA_CH | 0xf80,iVar1);
  sceSdRemote(1,0x8010,AUTODMA_CH | 0x1080,iVar1);
  return;
}
