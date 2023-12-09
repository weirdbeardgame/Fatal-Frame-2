// STATUS: NOT STARTED

#include "movie.h"

static int iMovieCnt = -1;
static playPssRsrcs rsrcs;
static unsigned char temp_zero_bffer[2048];
static int movie_audio_flg;
static int bPause;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1348;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3310,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3318,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int iopalloc(unsigned int size, char *desc) {
	void *ret;
	
  void *pvVar1;
  
  pvVar1 = sceSifAllocIopHeap(size);
  if (pvVar1 == (void *)0x0) {
    printf("Cannot allocate %d bytes of IOP memory for %s\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  printf("Allocated %7d bytes of IOP memory for %s\n");
  return (int)pvVar1;
}

void InitMovie(int no, int vol_percentage, int audio_flg) {
	static char __FUNCTION__[10] = {
		/* [0] = */ 73,
		/* [1] = */ 110,
		/* [2] = */ 105,
		/* [3] = */ 116,
		/* [4] = */ 77,
		/* [5] = */ 111,
		/* [6] = */ 118,
		/* [7] = */ 105,
		/* [8] = */ 101,
		/* [9] = */ 0
	};
	int iMaxFreeSize;
	
  uint uVar1;
  int iVar2;
  
  iMovieCnt = -1;
  movie_audio_flg = audio_flg;
  uVar1 = mem_utilQueryMaxFreeSize__Fv();
  if ((int)uVar1 < 0x2b1400) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Movie Memory Is Not Vacant Remain[0x%x]");
    return;
  }
  mem_utilQueryMaxFreeSize__Fv();
  printf("mem_utilQueryMaxFreeSize() = 0x%x\n");
  mem_utilQueryTotalFreeSize__Fv();
  printf("mem_utilQueryTotalFreeSize() = 0x%x\n");
  rsrcs.mpegBuff = (uchar *)mem_utilGetMem__Fi(0x13d800);
  rsrcs.mpegBuffSize = 0x13d800;
  rsrcs.rgb32 = (sceIpuRGB32 *)mem_utilGetMem__Fi(0x118000);
  rsrcs.path3tag = (uint *)mem_utilGetMem__Fi(0x1a500);
  rsrcs.read_buf = (char *)mem_utilGetMem__Fi(0x4000);
  rsrcs.demuxBuff = mem_utilGetMem__Fi(0x30000);
  rsrcs.demuxBuffSize = 0x30000;
  if (movie_audio_flg == 0) {
    rsrcs.iopZeroBuff = 0;
    rsrcs.audioBuff = (uchar *)0x0;
    rsrcs.iopBuff = 0;
    rsrcs.zeroBuff = (uchar *)0x0;
  }
  else {
    rsrcs.audioBuff = (uchar *)mem_utilGetMem__Fi(0xc000);
    rsrcs.audioBuffSize = 0xc000;
    rsrcs.iopBuff = iopalloc__FUiPc(0x6000,"audio buffer");
    rsrcs.zeroBuff = temp_zero_bffer;
    rsrcs.iopBuffSize = 0x6000;
    rsrcs.iopZeroBuff = iopalloc__FUiPc(0x800,"zero buffer");
    iVar2 = SndGetGroupVolume(1);
    iVar2 = vol_percentage * iVar2;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    rsrcs.audio_vol_percent = iVar2 >> 8;
    ReqQuerySPUTransCoreGet(&rsrcs.auto_dma_core);
  }
  do {
    iVar2 = MyStrStart(no,10,8);
  } while (iVar2 == 0);
  sceSifQueryMaxFreeMemSize();
  printf("sceSifQueryMaxFreeMemSize() = 0x%x\n");
  sceSifQueryTotalFreeMemSize();
  printf("sceSifQueryTotalFreeMemSize() = 0x%x\n");
  iVar2 = GetPALMode__Fv();
  if (iVar2 != 0) {
    playPssSetNtsc2Pal(1,0x2bc0);
  }
  playPssStart(MyStrRead,&rsrcs);
  iMovieCnt = 0;
  return;
}

void MovieCancel() {
  printf("===================== Movie Skip ==================\n");
  playPssStop();
  return;
}

int PlayMovie() {
	int ret;
	SPRT_DAT sd;
	DISP_SPRT ds;
	
  int iVar1;
  int iVar2;
  SPRT_DAT sd;
  DISP_SPRT ds;
  
  iVar1 = 1;
  if (-1 < iMovieCnt) {
    SetVBlankWaitNum__Fi(1);
    if (((pad[0].one & 0x800U) == 0) && (**paddat != 1)) {
      if (*key_now[13] == 1) {
        iVar1 = playPssIsPause();
        if (iVar1 == 0) {
          playPssPause();
        }
        else {
          playPssRestart();
        }
      }
    }
    else {
      printf("===================== Movie Skip ==================\n");
      playPssStop();
    }
    bPause = playPssIsPause();
    if (bPause == 0) {
      iMovieCnt = iMovieCnt + 1;
    }
    gra3dUseScratchpad__Fi(0);
    iVar1 = playPssMain(&rsrcs,0x2bc0);
    iVar2 = playPssAlreadySendImage();
    if (iVar2 != 0) {
      sd.tex0 = DAT_003c1560;
      sd.u = (short)DAT_003c1568;
      sd.v = DAT_003c1568._2_2_;
      sd.w = DAT_003c1568._4_2_;
      sd.h = DAT_003c1568._6_2_;
      sd.x = (int)DAT_003c1570;
      sd.y = DAT_003c1570._4_4_;
      sd.pri = (int)DAT_003c1578;
      sd.alpha = DAT_003c1578._4_1_;
      sd.flip = DAT_003c1578._5_1_;
      sd.bln = DAT_003c1578._6_1_;
      sd._31_1_ = DAT_003c1578._7_1_;
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,&sd);
      ds.tex0 = 0x200578026802abc0;
      ds.tex1 = 0x161;
      ds.test = 0x30003;
      DispSprD__FP9DISP_SPRT(&ds);
    }
  }
  return iVar1;
}

void EndMovie() {
  if (-1 < iMovieCnt) {
    SetVBlankWaitNum__Fi(2);
    playPssEnd();
    playPssSetNtsc2Pal(0,0x2bc0);
    MyStrStop();
    gra3dUseScratchpad__Fi(1);
    mem_utilFreeMem__FPv(rsrcs.mpegBuff);
    mem_utilFreeMem__FPv(rsrcs.rgb32);
    mem_utilFreeMem__FPv(rsrcs.demuxBuff);
    mem_utilFreeMem__FPv(rsrcs.path3tag);
    mem_utilFreeMem__FPv(rsrcs.read_buf);
    if (movie_audio_flg != 0) {
      ReqQuerySPUTransCoreRelease(rsrcs.auto_dma_core);
      if (rsrcs.audioBuff != (uchar *)0x0) {
        mem_utilFreeMem__FPv(rsrcs.audioBuff);
      }
      if (rsrcs.iopBuff != 0) {
        sceSifFreeIopHeap((void *)rsrcs.iopBuff);
      }
      if (rsrcs.iopZeroBuff != 0) {
        sceSifFreeIopHeap((void *)rsrcs.iopZeroBuff);
      }
    }
    iMovieCnt = -1;
  }
  return;
}

void InitMovieWithTitle(int scene_no, int audio_flg) {
  int no;
  
  no = GetFileNoFromSceneNo__Fi(scene_no);
  InitMovie__Fiii(no,(uint)scene_data_cmn[scene_no].vol,audio_flg);
  MovieTitleInit__Fi(scene_no);
  return;
}

int PlayMovieWithTitle() {
	int ret;
	
  int iVar1;
  int iVar2;
  int movie_timer;
  
  iVar1 = PlayMovie__Fv();
  iVar2 = GetPALMode__Fv();
  movie_timer = iMovieCnt;
  if (iVar2 != 0) {
    movie_timer = iMovieCnt >> 1;
  }
  MovieTitleMain__Fi(movie_timer);
  return iVar1;
}

void EndMovieWithTitle() {
  MovieTitleEnd__Fv();
  EndMovie__Fv();
  return;
}

int MovieCountGet() {
  int iVar1;
  int iVar2;
  
  iVar1 = GetPALMode__Fv();
  iVar2 = iMovieCnt;
  if (iVar1 != 0) {
    iVar2 = iMovieCnt >> 1;
  }
  return iVar2;
}
