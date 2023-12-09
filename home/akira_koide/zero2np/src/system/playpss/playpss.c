// STATUS: NOT STARTED

#include "playpss.h"

struct _PLAY_PSS_FLAGS {
	short int sStopPhase;
	short unsigned int bStarted : 1;
	short unsigned int bPauseFlg : 1;
	short unsigned int bNtsc2Pal : 1;
	short unsigned int bSendImage : 1;
	short unsigned int bErrorCallback : 1;
};

typedef _PLAY_PSS_FLAGS PLAY_PSS_FLAGS;
int iPalVBlankCounter = 0;
int iVTCounter = 0;
char videoDecStack[2048];
static PLAY_PSS_FLAGS Flags;
static int videoDecTh;
static AudioDec audioDec;
static int (*fileRead)(/* parameters unknown */);
static int bgDuration;
int iMovieDecSema = 0;
static char *muxBuff;
static int muxBuffFullness;
static char *demuxBuff;
static int demuxBuffSize;
static char *demuxBuffPast;
static char *demuxBuffPresent;
static char *demuxBuffFuture;
static sceIpuRGB32 *rsrcs_rgb32;
static u_int *rsrcs_path3tag;
static int rsrcs_vram_adrs;
static sceMpeg playpss_mp;
static int audio_play_flg;
int hid_vblank = 0;

void playPssInit() {
  Flags._2_2_ = Flags._2_2_ & 0xfffb;
  sceMpegInit();
  sceSdRemoteInit();
  return;
}

void videoDecMain(void *pvd) {
  int iVar1;
  long lVar2;
  
  while( true ) {
    if ((((Flags._2_2_ & 0x10) != 0) || (lVar2 = sceMpegIsEnd(0x4c2860), lVar2 != 0)) ||
       (Flags.sStopPhase == 1)) {
      Flags.sStopPhase = 2;
      return;
    }
    lVar2 = PollSema(iMovieDecSema);
    if (lVar2 == -1) {
      WaitSema(iMovieDecSema);
    }
    while (lVar2 = PollSema(iMovieDecSema), lVar2 != -1) {
      printf(s_dame_003f49e8);
    }
    REG_RCNT0_MODE = 0x83;
    REG_RCNT0_COUNT = 0;
    if (((Flags._2_2_ & 2) == 0) &&
       (lVar2 = sceMpegGetPicture(0x4c2860,rsrcs_rgb32,0x460), lVar2 < 0)) {
      printf("sceMpegGetPicture failed\n");
      Flags.sStopPhase = 2;
      Flags._2_2_ = Flags._2_2_ | 0x10;
    }
    if (playpss_mp.frameCount == 0) {
      setLoadImageTags(rsrcs_path3tag,rsrcs_rgb32,0,0,playpss_mp.width,playpss_mp.height,
                       rsrcs_vram_adrs);
      bgDuration = (int)((float)playpss_mp.width * (float)playpss_mp.height * DAT_003eea18);
    }
    loadImage(rsrcs_path3tag);
    Flags._2_2_ = Flags._2_2_ | 8;
    if (((audio_play_flg != 0) && (audioDecSendToIOP(&audioDec), (Flags._2_2_ & 1) == 0)) &&
       (iVar1 = audioDecIsPreset(&audioDec), iVar1 != 0)) {
      audioDecStart(&audioDec);
      Flags._2_2_ = Flags._2_2_ | 1;
    }
    if (Flags.sStopPhase != 0) break;
    do {
      iVar1 = fillBuff(&playpss_mp,1);
    } while (iVar1 != 0);
  }
  Flags.sStopPhase = 2;
  return;
}

void playPssStartNoWait(int (*cbFileRead)(/* parameters unknown */), playPssRsrcs *rsrcs) {
  muxBuff = rsrcs->read_buf;
  Flags._2_2_ = Flags._2_2_ & 0xffe4;
  sceMpegCreate(0x4c2860,rsrcs->mpegBuff,rsrcs->mpegBuffSize);
  sceMpegAddStrCallback(0x4c2860,0,0,0x279860,0);
  sceMpegAddCallback(0x4c2860,1,0x279a40,0);
  sceMpegAddCallback(0x4c2860,4,0x279b48,0);
  sceMpegAddCallback(0x4c2860,0,0x279bc0,0);
  if ((((rsrcs->audioBuff == (uchar *)0x0) || (rsrcs->iopBuff == 0)) ||
      (rsrcs->zeroBuff == (uchar *)0x0)) || (rsrcs->iopZeroBuff == 0)) {
    audio_play_flg = 0;
    demuxBuff = (char *)rsrcs->demuxBuff;
  }
  else {
    audio_play_flg = 1;
    audioDecCreate(&audioDec,rsrcs->audioBuff,rsrcs->audioBuffSize,rsrcs->iopBuff,rsrcs->iopBuffSize
                   ,rsrcs->zeroBuff,rsrcs->iopZeroBuff,0x800,rsrcs->audio_vol_percent,
                   rsrcs->auto_dma_core);
    sceMpegAddStrCallback(0x4c2860,2,0,0x279970,0);
    demuxBuff = (char *)rsrcs->demuxBuff;
  }
  demuxBuffSize = rsrcs->demuxBuffSize;
  demuxBuffPast = demuxBuff + 0x10;
  muxBuffFullness = 0;
  Flags.sStopPhase = 0;
  fileRead = cbFileRead;
  demuxBuffPresent = demuxBuff;
  demuxBuffFuture = demuxBuffPast;
  fillBuff(&playpss_mp,0);
  return;
}

int vblankHandler(int val) {
  int iVar1;
  
  iVar1 = iPalVBlankCounter + 0x2ed4;
  iPalVBlankCounter = iPalVBlankCounter + -0x1f4c;
  if (19999 < iVar1) {
    iSignalSema(iMovieDecSema);
    iVar1 = iPalVBlankCounter;
  }
  iPalVBlankCounter = iVar1;
  iVTCounter = iVTCounter + 1;
  SYNC(0);
  EI();
  return 0;
}

void playPssSetNtsc2Pal(int lbNtsc2Pal, int iGSImageAdrs) {
  rsrcs_vram_adrs = iGSImageAdrs;
  Flags._2_2_ = Flags._2_2_ & 0xfffb | (ushort)((lbNtsc2Pal & 1U) << 2);
  return;
}

int playPssAlreadySendImage() {
  uint uVar1;
  
  uVar1 = 1;
  if ((Flags._2_2_ & 4) != 0) {
    uVar1 = (uint)((Flags._2_2_ & 8) != 0);
  }
  return uVar1;
}

void playPssStart(int (*cbFileRead)(/* parameters unknown */), playPssRsrcs *rsrcs) {
	ThreadParam th_param;
	
  int iVar1;
  undefined8 uVar2;
  ThreadParam th_param;
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  
  playPssStartNoWait(cbFileRead,rsrcs);
  do {
    iVar1 = fillBuff(&playpss_mp,1);
  } while (iVar1 != 0);
  if ((Flags._2_2_ & 4) != 0) {
    local_3c = 4;
    local_38 = 0;
    iMovieDecSema = CreateSema(auStack_40);
    rsrcs_path3tag = rsrcs->path3tag;
    rsrcs_rgb32 = rsrcs->rgb32;
    th_param.entry = videoDecMain;
    th_param.stackSize = 0x800;
    th_param.stack = videoDecStack;
    th_param.initPriority = 3;
    th_param.gpReg = &ChrSortFlyList[3].hdl;
    th_param.option = 0;
    uVar2 = CreateThread(&th_param);
    videoDecTh = (int)uVar2;
    StartThread(uVar2,0);
    hid_vblank = AddIntcHandler(2,0x279258,0);
    EnableIntc(2);
    iPalVBlankCounter = 0;
    iVTCounter = 0;
  }
  return;
}

int playPssIsReady() {
  int iVar1;
  
  iVar1 = fillBuff(&playpss_mp,0);
  return (int)(iVar1 == 0);
}

int playPssMain(playPssRsrcs *rsrcs, int vram_adrs) {
  int iVar1;
  
  iVar1 = playPssSetPacket(rsrcs,vram_adrs,(int *)0x0);
  return iVar1;
}

void playPssGetMpegInfo(PLAY_PSS_MPEG_INFO *pInfo) {
  pInfo->width = playpss_mp.width;
  pInfo->height = playpss_mp.height;
  return;
}

int playPssSetPacket(playPssRsrcs *rsrcs, int vram_adrs, int *pTagEndAdrs) {
	int origin_x;
	int origin_y;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = 2;
  if ((Flags.sStopPhase != 2) && (iVar4 = 0, (Flags._2_2_ & 4) == 0)) {
    if ((Flags._2_2_ & 0x10) == 0) {
      lVar5 = sceMpegIsEnd(0x4c2860);
      iVar4 = 1;
      if (lVar5 == 0) {
        REG_RCNT0_MODE = 0x83;
        REG_RCNT0_COUNT = 0;
        if (((Flags._2_2_ & 2) == 0) &&
           (lVar5 = sceMpegGetPicture(0x4c2860,rsrcs->rgb32,0x460), lVar5 < 0)) {
          printf("sceMpegGetPicture failed\n");
          Flags._2_2_ = Flags._2_2_ | 0x10;
        }
        if (pTagEndAdrs == (int *)0x0) {
          if (playpss_mp.frameCount == 0) {
            setLoadImageTags(rsrcs->path3tag,rsrcs->rgb32,0,0,playpss_mp.width,playpss_mp.height,
                             vram_adrs);
            bgDuration = (int)((float)playpss_mp.width * (float)playpss_mp.height * DAT_003eea20);
          }
          sceGsSyncPath(0,0);
          loadImage(rsrcs->path3tag);
        }
        else {
          if (playpss_mp.frameCount == 0) {
            bgDuration = (int)((float)playpss_mp.width * (float)playpss_mp.height * DAT_003eea1c);
          }
          puVar3 = setLoadImageTags(rsrcs->path3tag,rsrcs->rgb32,(0x280 - playpss_mp.width) / 2,
                                    (0x1c0 - playpss_mp.height) / 2,playpss_mp.width,
                                    playpss_mp.height,vram_adrs);
          *pTagEndAdrs = (int)puVar3;
        }
        if (((audio_play_flg != 0) && (audioDecSendToIOP(&audioDec), (Flags._2_2_ & 1) == 0)) &&
           (iVar4 = audioDecIsPreset(&audioDec), iVar4 != 0)) {
          audioDecStart(&audioDec);
          Flags._2_2_ = Flags._2_2_ | 1;
        }
        if (Flags.sStopPhase != 0) {
          Flags.sStopPhase = 2;
        }
        uVar2 = REG_RCNT0_COUNT;
        uVar1 = (playpss_mp.width * playpss_mp.height * 500) / 0x46000;
        iVar4 = 0;
        if (uVar2 < uVar1) {
          do {
            fillBuff(&playpss_mp,0);
            uVar2 = REG_RCNT0_COUNT;
          } while (uVar2 < uVar1);
          iVar4 = 0;
        }
      }
    }
    else {
      iVar4 = 1;
    }
  }
  return iVar4;
}

void playPssStop() {
  if (Flags.sStopPhase == 0) {
    if (audio_play_flg != 0) {
      audioDecPause(&audioDec);
    }
    Flags.sStopPhase = 1;
  }
  return;
}

int playPssIsPause() {
  return (ushort)Flags._2_2_ >> 1 & 1;
}

void playPssPause() {
  ushort uVar1;
  
  uVar1 = Flags._2_2_ | 2;
  if (((Flags._2_2_ & 1) != 0) && (Flags._2_2_ = uVar1, audio_play_flg != 0)) {
    audioDecPause(&audioDec);
    return;
  }
  return;
}

void playPssRestart() {
  Flags._2_2_ = Flags._2_2_ & 0xfffd;
  if (audio_play_flg != 0) {
    audioDecResume(&audioDec);
    return;
  }
  return;
}

void playPssEnd() {
  if ((Flags._2_2_ & 4) != 0) {
    RemoveIntcHandler(2,hid_vblank);
    TerminateThread(videoDecTh);
    DeleteThread(videoDecTh);
    DeleteSema(iMovieDecSema);
  }
  if (audio_play_flg != 0) {
    audioDecReset(&audioDec);
  }
  sceMpegReset(0x4c2860);
  sceMpegDelete(0x4c2860);
  return;
}

static int videoCallback(sceMpeg *mp, sceMpegCbDataStr *cbstr, void *data) {
	int availSpace;
	int spill;
	
  uint uVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  lVar3 = (long)((int)demuxBuffPresent - (int)demuxBuffPast);
  if (lVar3 < 0) {
    lVar3 = (long)(((int)demuxBuffPresent - (int)demuxBuffPast) + demuxBuffSize);
  }
  uVar1 = cbstr->len;
  if ((lVar3 == 0) && (demuxBuffPresent == demuxBuffFuture)) {
    lVar3 = (long)demuxBuffSize;
  }
  iVar2 = 0;
  if ((int)uVar1 <= lVar3) {
    pcVar4 = demuxBuffPast + ((uVar1 - (int)demuxBuff) - demuxBuffSize);
    if ((long)(int)pcVar4 < 1) {
      memcpy((void *)((uint)demuxBuffPast & 0xfffffff | 0x20000000),cbstr->data,(long)(int)uVar1);
      demuxBuffPast = demuxBuffPast + cbstr->len;
    }
    else {
      memcpy((void *)((uint)demuxBuffPast & 0xfffffff | 0x20000000),cbstr->data,
             (long)(int)(uVar1 - (int)pcVar4));
      memcpy((void *)((uint)demuxBuff & 0xfffffff | 0x20000000),
             cbstr->data + (cbstr->len - (int)pcVar4),(long)(int)pcVar4);
      demuxBuffPast = demuxBuff + (int)pcVar4;
    }
    iVar2 = 1;
  }
  return iVar2;
}

static int audioCallback(sceMpeg *mp, sceMpegCbDataStr *cbstr, void *data) {
	u_char *pd0;
	u_char *pd1;
	int d0;
	int d1;
	int spill;
	
  int iVar1;
  uchar *__src;
  uint uVar2;
  int iVar3;
  uchar *pd0;
  int d0;
  uchar *pd1;
  int d1;
  
  audioDecBeginPut(&audioDec,&pd0,&d0,&pd1,&d1);
  iVar1 = 0;
  uVar2 = cbstr->len - 4;
  iVar3 = uVar2 - d0;
  cbstr->len = uVar2;
  __src = cbstr->data + 4;
  cbstr->data = __src;
  if ((long)(int)uVar2 <= (long)(d0 + d1)) {
    if ((long)iVar3 < 1) {
      memcpy(pd0,__src,(long)(int)uVar2);
      uVar2 = cbstr->len;
    }
    else {
      memcpy(pd0,__src,(long)(int)(uVar2 - iVar3));
      memcpy(pd1,cbstr->data + (cbstr->len - iVar3),(long)iVar3);
      uVar2 = cbstr->len;
    }
    audioDecEndPut(&audioDec,uVar2);
    iVar1 = 1;
  }
  return iVar1;
}

static int nodataCallback(sceMpeg *mp, sceMpegCbData *cbstr, void *data) {
	int dmaSize;
	int availData;
	
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = (int)demuxBuffPast - (int)demuxBuffFuture;
  demuxBuffPresent = demuxBuffFuture;
  while( true ) {
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 + demuxBuffSize;
    }
    if (0xfff < (int)uVar3) goto LAB_00279aa8;
    iVar1 = fillBuff(mp,1);
    if (iVar1 == 0) break;
    uVar3 = (int)demuxBuffPast - (int)demuxBuffFuture;
  }
  uVar3 = uVar3 + 0xf;
LAB_00279aa8:
  uVar3 = uVar3 & 0xfffffff0;
  if (0x1000 < (int)uVar3) {
    uVar3 = 0x1000;
  }
  demuxBuffFuture = demuxBuffPresent + uVar3;
  pcVar2 = demuxBuff + demuxBuffSize;
  if (pcVar2 < demuxBuffFuture) {
    uVar3 = (int)pcVar2 - (int)demuxBuffPresent;
    demuxBuffFuture = demuxBuffPresent + uVar3;
  }
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0xf;
  }
  REG_DMAC_4_IPU_TO_QWC = (int)uVar3 >> 4;
  REG_DMAC_4_IPU_TO_MADR = demuxBuffPresent;
  REG_DMAC_4_IPU_TO_CHCR = 0x101;
  if (pcVar2 <= demuxBuffFuture) {
    demuxBuffFuture = demuxBuffFuture + -demuxBuffSize;
  }
  return 1;
}

static int backgroundCallback(sceMpeg *mp, sceMpegCbData *cbstr, void *data) {
	int dueTime;
	
  int iVar1;
  int iVar2;
  
  iVar2 = REG_RCNT0_COUNT;
  iVar1 = REG_RCNT0_COUNT;
  iVar2 = iVar2 + bgDuration;
  while (iVar1 < iVar2) {
    fillBuff(mp,0);
    iVar1 = REG_RCNT0_COUNT;
  }
  return 1;
}

static int errorCallback(sceMpeg *mp, sceMpegCbData *cbstr, void *data) {
  printf("MPEG decoding error: \'%s\'\n");
  Flags._2_2_ = Flags._2_2_ | 0x10;
  return 0;
}

static int fillBuff(sceMpeg *mp, int blocking) {
	char *startPos;
	
  char *pcVar1;
  int iVar2;
  long lVar3;
  
  if (muxBuffFullness == 0) {
    do {
      lVar3 = (*(code *)fileRead)(muxBuff,0x4000);
      muxBuffFullness = (int)lVar3;
      pcVar1 = muxBuff;
      if (lVar3 != 0) goto LAB_00279c5c;
    } while (blocking != 0);
    iVar2 = 0;
  }
  else {
    pcVar1 = muxBuff + (0x4000 - muxBuffFullness);
LAB_00279c5c:
    iVar2 = sceMpegDemuxPss(mp,pcVar1);
    muxBuffFullness = muxBuffFullness - iVar2;
  }
  return iVar2;
}
