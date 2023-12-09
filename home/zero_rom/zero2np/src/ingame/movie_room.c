// STATUS: NOT STARTED

#include "movie_room.h"

static DRAW_ENV_5 MovieDrawEnv = {
	/* .alpha = */ 68,
	/* .tex1 = */ 353,
	/* .clamp = */ 5,
	/* .test = */ 327693,
	/* .zbuf = */ 167772440
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1650;
	
  g3ddbgAssert__FbPCce(false,str_738);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f33d0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f33d8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void CMovieRoom::Init() {
  this->mSndId = 0x300000;
  this->mBankNo = -1;
  *(uint *)this = *(uint *)this & 0xfffffffc;
  return;
}

void CMovieRoom::Release() {
  _AUTO_BD_ERR__11_3668 _Var1;
  
  SndBufFadeStop(this->mSndId,1);
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  _Var1 = snd_utilAutoRelease(this->mSndId,this->mBankNo);
                    /* end of inlined section */
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (_Var1 != AUTO_BD_ERR_OK) {
                    /* end of inlined section */
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Cannot Get snd_utilAutoRelease()");
    SndBankRelease(this->mBankNo);
  }
  this->mSndId = 0x300000;
  *(uint *)this = *(uint *)this & 0xfffffffe;
  this->mBankNo = -1;
  MapSpMoviSetFlg__Fi(0);
  gra3dUseScratchpad__Fi(1);
  if ((*(uint *)this & 2) != 0) {
    playPssEnd();
    MyStrStop();
    mem_utilFreeMem__FPv((this->ing_rsrcs).mpegBuff);
    mem_utilFreeMem__FPv((this->ing_rsrcs).rgb32);
    mem_utilFreeMem__FPv((this->ing_rsrcs).demuxBuff);
    mem_utilFreeMem__FPv((this->ing_rsrcs).read_buf);
    mem_utilFreeMem__FPv((this->ing_rsrcs).path3tag);
    *(uint *)this = *(uint *)this & 0xfffffffd;
    gra3dEndSpecialLight__Fv();
  }
  return;
}

int CMovieRoom::PreLoad(int iPssFileNo, float *paVec[4]) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 80,
		/* [1] = */ 114,
		/* [2] = */ 101,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 0
	};
	int iMaxFreeSize;
	
  int iVar1;
  uint uVar2;
  uchar *puVar3;
  sceIpuRGB32 *psVar4;
  char *pcVar5;
  void *pvVar6;
  uint *puVar7;
  
  if (this->mBankNo == -1) {
    iVar1 = SndBankNew(0xd13,0xd12,-1);
    this->mBankNo = iVar1;
  }
  if ((*(uint *)this & 2) == 0) {
    uVar2 = mem_utilQueryMaxFreeSize__Fv();
    if ((int)uVar2 < 0x2b1400) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Movie Memory Is Not Vacant Remain[0x%x]");
      iVar1 = 0;
    }
    else {
      uVar2 = sceSifQueryMaxFreeMemSize();
      if (uVar2 < 0x79000) {
        sceSifQueryMaxFreeMemSize();
        SetString2__FiffiUcUcUcPCce
                  (0,30.0,30.0,1,0x80,'\0','\0',"Movie Memory Over Remain %d Need %d!!");
        iVar1 = 0;
      }
      else {
        this->mpaVec = paVec;
        gra3dUseScratchpad__Fi(0);
        puVar3 = (uchar *)mem_utilGetMem__Fi(0x13d800);
        (this->ing_rsrcs).mpegBuff = puVar3;
        (this->ing_rsrcs).mpegBuffSize = 0x13d800;
        psVar4 = (sceIpuRGB32 *)mem_utilGetMem__Fi(0x118000);
        (this->ing_rsrcs).rgb32 = psVar4;
        pcVar5 = (char *)mem_utilGetMem__Fi(0x4000);
        (this->ing_rsrcs).read_buf = pcVar5;
        pvVar6 = mem_utilGetMem__Fi(0x30000);
        (this->ing_rsrcs).demuxBuff = pvVar6;
        puVar7 = (uint *)mem_utilGetMem__Fi(0x1a500);
        (this->ing_rsrcs).path3tag = puVar7;
        (this->ing_rsrcs).demuxBuffSize = 0x30000;
        (this->ing_rsrcs).audioBuff = (uchar *)0x0;
        do {
          iVar1 = MyStrStart(iPssFileNo,10,0x18);
        } while (iVar1 == 0);
        playPssStartNoWait(MyStrRead,&this->ing_rsrcs);
        *(uint *)this = *(uint *)this | 2;
        iVar1 = 1;
      }
    }
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

int CMovieRoom::PlayFilm() {
  int iVar1;
  _SND_3D_SET local_20;
  
  iVar1 = 0;
  if ((*(uint *)this & 2) != 0) {
    iVar1 = playPssIsReady();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = SndBankIsReady(this->mBankNo);
      if (iVar1 != 0) {
        MapSpMoviSetFlg__Fi(1);
        *(uint *)this = *(uint *)this | 1;
        memset(&local_20,0,0xc);
        local_20.pos = MapSpGetReelPos__Fv();
        local_20.dir = (float (*) [4])0x0;
        local_20.vel = (float (*) [4])0x0;
        iVar1 = SndBankPlay(this->mBankNo,0,1,1,0x3200,0x1000,0,&local_20);
        this->mSndId = iVar1;
        gra3dStartSpecialLight__Fv();
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}

void CMovieRoom::Draw() {
	PLAY_PSS_MPEG_INFO Info;
	sceGsTex0 Tex0;
	
  _PLAY_PSS_MPEG_INFO Info;
  sceGsTex0 Tex0;
  
  playPssGetMpegInfo(&Info);
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&MovieDrawEnv);
  dmaVif1WaitPath3__Fv();
  MakePacket3D__FPA3_fiiiiiffffG9sceGsTex0i
            (this->mpaVec,4,0xff,0xff,0xff,0x50,DAT_003ee5f8,DAT_003ee5f8,
             (float)Info.width * DAT_003ee5fc,(float)Info.height * DAT_003ee5fc,
             (sceGsTex0)0x200754026802baa0,100);
  return;
}

int CMovieRoom::Work() {
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  if ((*(uint *)this & 1) != 0) {
    gra3dUpdateSpecialLight__Fv();
    MapSpMoviProc__Fv();
    iVar1 = playPssMain(&this->ing_rsrcs,0x3aa0);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}
