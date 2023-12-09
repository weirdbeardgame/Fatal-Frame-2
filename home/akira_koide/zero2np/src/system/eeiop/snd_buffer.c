// STATUS: NOT STARTED

#include "snd_buffer.h"

enum {
	FADE_STOP_NONE = 0,
	FADE_STOP_REQ = 1,
	FADE_STOP_END = 2,
	FADE_STOP_WAIT = 3
};

struct _SND_BUF_PLAYER {
	SOUND_BUF_PLAY p;
	void *s3d;
	short int play_id;
	short int vol;
	short int target_vol;
	short int bvol;
	short int spd;
	short int pitch;
	short int bpitch;
	short int target_pitch;
	short int pspd;
	unsigned char use : 1;
	unsigned char s3d_free : 1;
	unsigned char pause : 1;
	char fadestop;
	short int pan;
	short int cnt;
	int loopend_next;
};

typedef _SND_BUF_PLAYER SND_BUF_PLAYER;
static SND_BUF_PLAYER snd_buf_player[48];

void SndBufInit() {
	int i;
	
  int iVar1;
  int iVar2;
  
  iVar1 = 0x4bde78;
  iVar2 = 0x2f;
  do {
    iVar2 = iVar2 + -1;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffeffff;
    iVar1 = iVar1 + 0x34;
  } while (-1 < iVar2);
  return;
}

void SndBufAllStop() {
	int i;
	
  uint uVar1;
  _SND_BUF_PLAYER *sbp;
  int iVar2;
  
  sbp = snd_buf_player;
  iVar2 = 0x2f;
  do {
    uVar1._0_2_ = sbp->pspd;
    uVar1._2_1_ = sbp->field_0x2a;
    uVar1._3_1_ = sbp->fadestop;
    if ((uVar1 & 0x10000) != 0) {
      SndBufStopSub(sbp);
    }
    iVar2 = iVar2 + -1;
    sbp = sbp + 1;
  } while (-1 < iVar2);
  return;
}

static void SndBufRelease(SND_BUF_PLAYER *sbp) {
  uint uVar1;
  int voice_no;
  uint uVar2;
  
  if (sbp->s3d != (void *)0x0) {
    uVar2._0_2_ = sbp->pspd;
    uVar2._2_1_ = sbp->field_0x2a;
    uVar2._3_1_ = sbp->fadestop;
    if ((uVar2 & 0x20000) == 0) goto LAB_0026fbe0;
    Snd3DFreeWrk(sbp->s3d);
  }
  uVar2._0_2_ = sbp->pspd;
  uVar2._2_1_ = sbp->field_0x2a;
  uVar2._3_1_ = sbp->fadestop;
LAB_0026fbe0:
  uVar1._0_2_ = (sbp->p).adsr2;
  uVar1._2_2_ = (sbp->p).attr;
  voice_no = (sbp->p).voice_no;
  uVar2 = uVar2 & 0xfffeffff;
  sbp->pspd = (short)uVar2;
  sbp->field_0x2a = (char)(uVar2 >> 0x10);
  sbp->fadestop = (char)(uVar2 >> 0x18);
  FreeSPUVoiceCore(uVar1 >> 0x16 & 1,voice_no);
  return;
}

void SndBufAllStopLoopSnd() {
	int i;
	
  uint uVar1;
  uint uVar2;
  _SND_BUF_PLAYER *sbp;
  int iVar3;
  
  sbp = snd_buf_player;
  iVar3 = 0x2f;
  do {
    uVar1._0_2_ = sbp->pspd;
    uVar1._2_1_ = sbp->field_0x2a;
    uVar1._3_1_ = sbp->fadestop;
    if ((uVar1 & 0x10000) != 0) {
      uVar2._0_2_ = (sbp->p).adsr2;
      uVar2._2_2_ = (sbp->p).attr;
      if ((uVar2 & 0x200000) == 0) {
        SndBufRelease(sbp);
      }
      else {
        SndBufStopSub(sbp);
      }
    }
    iVar3 = iVar3 + -1;
    sbp = sbp + 1;
  } while (-1 < iVar3);
  return;
}

void SndBufAllPause() {
	int i;
	SOUND_BUF_PAUSE pause;
	
  uint uVar1;
  uint uVar2;
  _SND_BUF_PLAYER *p_Var3;
  int iVar4;
  _SOUND_BUF_PAUSE pause;
  
  p_Var3 = snd_buf_player;
  iVar4 = 0x2f;
  do {
    uVar1._0_2_ = p_Var3->pspd;
    uVar1._2_1_ = p_Var3->field_0x2a;
    uVar1._3_1_ = p_Var3->fadestop;
    if ((uVar1 & 0xff010000) == 0x10000) {
      uVar2._0_2_ = (p_Var3->p).adsr2;
      uVar2._2_2_ = (p_Var3->p).attr;
      pause.voice_no = *(char *)&(p_Var3->p).voice_no;
      pause.core = (byte)(uVar2 >> 0x16) & 1;
      iopCommandRegister(REQ_SB_PAUSE,&pause.voice_no,4);
    }
    iVar4 = iVar4 + -1;
    p_Var3 = p_Var3 + 1;
  } while (-1 < iVar4);
  return;
}

void SndBufAllRestart() {
	int i;
	SOUND_BUF_RESTART restart;
	
  uint uVar1;
  uint uVar2;
  _SND_BUF_PLAYER *p_Var3;
  int iVar4;
  _SOUND_BUF_RESTART restart;
  
  p_Var3 = snd_buf_player;
  iVar4 = 0x2f;
  do {
    uVar1._0_2_ = p_Var3->pspd;
    uVar1._2_1_ = p_Var3->field_0x2a;
    uVar1._3_1_ = p_Var3->fadestop;
    if ((uVar1 & 0xff010000) == 0x10000) {
      uVar2._0_2_ = (p_Var3->p).adsr2;
      uVar2._2_2_ = (p_Var3->p).attr;
      restart.voice_no = *(char *)&(p_Var3->p).voice_no;
      restart.core = (byte)(uVar2 >> 0x16) & 1;
      iopCommandRegister(REQ_SB_RESTART,&restart.voice_no,4);
    }
    iVar4 = iVar4 + -1;
    p_Var3 = p_Var3 + 1;
  } while (-1 < iVar4);
  return;
}

static SND_BUF_PLAYER* GetSndBufPlayerFromID(int id) {
	int wrk_id;
	int play_id;
	SND_BUF_PLAYER *sbp;
	
  uint uVar1;
  _SND_BUF_PLAYER *p_Var2;
  int iVar3;
  
  iVar3 = id >> 0x10;
  p_Var2 = (_SND_BUF_PLAYER *)0x0;
  if (((iVar3 < 0x30) &&
      (p_Var2 = snd_buf_player + iVar3, uVar1._0_2_ = p_Var2->pspd, uVar1._2_1_ = p_Var2->field_0x2a
      , uVar1._3_1_ = p_Var2->fadestop, p_Var2 = (_SND_BUF_PLAYER *)0x0, (uVar1 & 0x10000) != 0)) &&
     (p_Var2 = snd_buf_player + iVar3,
     (long)(short)snd_buf_player[iVar3].play_id != ((long)id & 0xffffU))) {
    p_Var2 = (_SND_BUF_PLAYER *)0x0;
  }
  return p_Var2;
}

static int SndBufGetID(int wrk_no, int play_id) {
  return wrk_no << 0x10 | play_id & 0xffffU;
}

int SndBufPlay(int adrs, int core, int effect, int vol, int bvol, int pitch, int bpitch, int pan, int fade_time, int loop, int type, void *s3d, int s3d_free, int adsr1, int adsr2, int loopstart, int loopend) {
	int fade_time;
	int loop;
	int type;
	void *s3d;
	int s3d_free;
	short int adsr1;
	short int adsr2;
	int loopstart;
	int loopend;
	SND_BUF_PLAYER *sbp;
	int wrk_no;
	int voice_no;
	VOICE_LOOP_SET slp;
	
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  _SND_BUF_PLAYER *p_Var4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int wrk_no;
  _VOICE_LOOP_SET slp;
  
  if (0x3fff < vol) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("SndBufPlay vol is over max\n");
  }
  iVar6 = GetSPUVoiceCore(core);
  if (iVar6 == -1) {
    printf("SndBufPlay() Cannot Get Voice\n");
    return 0x300000;
  }
  wrk_no = core * 0x18 + iVar6;
  p_Var4 = snd_buf_player + wrk_no;
  uVar7._0_2_ = p_Var4->pspd;
  uVar7._2_1_ = p_Var4->field_0x2a;
  uVar7._3_1_ = p_Var4->fadestop;
  snd_buf_player[wrk_no].p.adrs = adrs;
  uVar7 = uVar7 | 0x10000;
  snd_buf_player[wrk_no].p.voice_no = (int)(char)iVar6;
  p_Var4 = snd_buf_player + wrk_no;
  p_Var4->pspd = (short)uVar7;
  p_Var4->field_0x2a = (char)(uVar7 >> 0x10);
  p_Var4->fadestop = (char)(uVar7 >> 0x18);
  snd_buf_player[wrk_no].fadestop = '\0';
  p_Var4 = snd_buf_player + wrk_no;
  uVar1._0_2_ = p_Var4->pspd;
  uVar1._2_1_ = p_Var4->field_0x2a;
  uVar1._3_1_ = p_Var4->fadestop;
  snd_buf_player[wrk_no].p.adsr1 = (ushort)adsr1;
  snd_buf_player[wrk_no].p.adsr2 = (ushort)adsr2;
  uVar7 = uVar1 & 0xfff9ffff | (s3d_free & 1U) << 0x11;
  p_Var4 = snd_buf_player + wrk_no;
  p_Var4->pspd = (short)uVar7;
  p_Var4->field_0x2a = (char)(uVar7 >> 0x10);
  p_Var4->fadestop = (char)(uVar7 >> 0x18);
  snd_buf_player[wrk_no].bpitch = (ushort)bpitch;
  snd_buf_player[wrk_no].target_pitch = (ushort)pitch;
  snd_buf_player[wrk_no].s3d = s3d;
  snd_buf_player[wrk_no].pan = (ushort)pan;
  snd_buf_player[wrk_no].pitch = (ushort)pitch;
  snd_buf_player[wrk_no].pspd = 0;
  snd_buf_player[wrk_no].cnt = 0;
  snd_buf_player[wrk_no].bvol = (ushort)bvol;
  snd_buf_player[wrk_no].target_vol = (ushort)vol;
  if (fade_time == 0) {
    snd_buf_player[wrk_no].vol = (ushort)vol;
  }
  else {
    snd_buf_player[wrk_no].vol = 0;
    uVar5 = SndGetFrameAddVol(vol,0,fade_time);
    snd_buf_player[wrk_no].spd = uVar5;
  }
  SndCalcValue(vol,pan,bvol,(int)(short)snd_buf_player[wrk_no].pitch,
               (int)(short)snd_buf_player[wrk_no].bpitch,type,s3d,
               (_VOLSET *)(snd_buf_player + wrk_no),&snd_buf_player[wrk_no].p.pitch,1.0);
  uVar2._0_2_ = snd_buf_player[wrk_no].p.adsr2;
  uVar2._2_2_ = snd_buf_player[wrk_no].p.attr;
  uVar7 = uVar2 & 0xff80ffff | (core & 1U) << 0x16 | (effect & 1U) << 0x10 | (loop & 1U) << 0x15 |
          (uint)(s3d != (void *)0x0) << 0x14 | (type & 7U) << 0x11;
  snd_buf_player[wrk_no].p.adsr2 = (short)uVar7;
  snd_buf_player[wrk_no].p.attr = (_VOICE_ATTR)(short)(uVar7 >> 0x10);
  snd_buf_player[wrk_no].loopend_next = loopend + 0x10;
  iVar6 = iopCommandRegister(REQ_SB_PLAY,(char *)(snd_buf_player + wrk_no),0x14);
  if (iVar6 == 0) {
    return 0x300000;
  }
  snd_buf_player[wrk_no].play_id = snd_buf_player[wrk_no].play_id + 1;
  if (loop != 0) {
    if (loopstart < 1) {
      uVar5 = snd_buf_player[wrk_no].play_id;
      goto LAB_00270100;
    }
    uVar3._0_2_ = snd_buf_player[wrk_no].p.adsr2;
    uVar3._2_2_ = snd_buf_player[wrk_no].p.attr;
    slp.voice_no = *(ushort *)&snd_buf_player[wrk_no].p.voice_no;
    slp.core = (ushort)((uint)uVar3 >> 0x16) & 1;
    slp.loop_adrs = loopstart;
    iopCommandRegister(REQ_VOICE_LOOP_SET,(char *)&slp,8);
  }
  uVar5 = snd_buf_player[wrk_no].play_id;
LAB_00270100:
  iVar6 = SndBufGetID(wrk_no,(int)(short)uVar5);
  return iVar6;
}

void SndBufferPrintStatus() {
	int i;
	
  uint uVar1;
  _SND_BUF_PLAYER *p_Var2;
  int iVar3;
  
  p_Var2 = snd_buf_player;
  iVar3 = 0;
  do {
    uVar1._0_2_ = p_Var2->pspd;
    uVar1._2_1_ = p_Var2->field_0x2a;
    uVar1._3_1_ = p_Var2->fadestop;
    if ((uVar1 & 0x10000) != 0) {
      printf(s_<<_d>>_003f4970);
      printf("sbp->fadestop = %d\n");
      printf("sbp->pause = %d\n");
      printf("sbp->vol = %d\n");
      printf("sbp->target_vol = %d\n");
      printf("sbp->play_id = %d\n");
    }
    iVar3 = iVar3 + 1;
    p_Var2 = p_Var2 + 1;
  } while (iVar3 < 0x30);
  return;
}

void SndBufPlayMain() {
	int i;
	short int pitch;
	VOLSET volset;
	SND_BUF_PLAYER *sbp;
	int new_pitch;
	int new_vol;
	SOUND_BUF_SETVOL set_vol;
	SOUND_BUF_SETPITCH set_pitch;
	
  undefined *puVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  _SND_BUF_PLAYER *sbp;
  int iVar12;
  int iVar13;
  _VOLSET volset;
  ushort pitch;
  _SOUND_BUF_SETVOL set_vol;
  _SOUND_BUF_SETPITCH set_pitch;
  
  iVar12 = 0x2f;
  iVar13 = 0;
  do {
    sbp = (_SND_BUF_PLAYER *)((int)&snd_buf_player[0].p.vol.l + iVar13);
    if ((*(uint *)((int)&snd_buf_player[0].pspd + iVar13) & 0x50000) == 0x10000) {
      sVar6 = *(short *)((int)&snd_buf_player[0].cnt + iVar13);
      *(short *)((int)&snd_buf_player[0].cnt + iVar13) = sVar6 + 1;
      if (sVar6 < 0xb) {
        uVar8 = *(uint *)((int)&snd_buf_player[0].p.adsr2 + iVar13);
      }
      else {
        iVar11 = CheckEndPointThrough
                           (*(uint *)((int)&snd_buf_player[0].p.adsr2 + iVar13) >> 0x16 & 1,
                            *(int *)((int)&snd_buf_player[0].p.voice_no + iVar13));
        if (iVar11 != 0) {
          SndBufRelease(sbp);
          goto LAB_002704b4;
        }
        uVar8 = *(uint *)((int)&snd_buf_player[0].p.adsr2 + iVar13);
      }
      if ((uVar8 & 0x200000) == 0) {
        cVar2 = (&snd_buf_player[0].fadestop)[iVar13];
      }
      else {
        cVar2 = (&snd_buf_player[0].fadestop)[iVar13];
        if ((&snd_buf_player[0].fadestop)[iVar13] == '\x03') {
          SndBufStopSub2(sbp);
          goto LAB_002704b4;
        }
      }
      sVar6 = *(short *)((int)&snd_buf_player[0].target_pitch + iVar13);
      sVar3 = *(short *)((int)&snd_buf_player[0].pitch + iVar13);
      uVar7 = *(undefined2 *)((int)&snd_buf_player[0].target_pitch + iVar13);
      if (sVar6 != sVar3) {
        sVar4 = *(short *)((int)&snd_buf_player[0].pspd + iVar13);
        iVar11 = (int)sVar3 + (int)sVar4;
        if (((int)sVar6 - (int)sVar3) * (sVar6 - iVar11) < 1) {
          *(undefined2 *)((int)&snd_buf_player[0].pitch + iVar13) = uVar7;
        }
        else if (sVar4 == 0) {
          *(undefined2 *)((int)&snd_buf_player[0].pitch + iVar13) = uVar7;
        }
        else {
          *(short *)((int)&snd_buf_player[0].pitch + iVar13) = (short)iVar11;
        }
      }
      sVar6 = *(short *)((int)&snd_buf_player[0].target_vol + iVar13);
      sVar3 = *(short *)((int)&snd_buf_player[0].vol + iVar13);
      sVar4 = *(short *)((int)&snd_buf_player[0].target_vol + iVar13);
      if (sVar6 != sVar3) {
        sVar5 = *(short *)((int)&snd_buf_player[0].spd + iVar13);
        iVar11 = (int)sVar3 + (int)sVar5;
        if (((int)sVar6 - (int)sVar3) * (sVar6 - iVar11) < 1) {
          *(short *)((int)&snd_buf_player[0].vol + iVar13) = sVar4;
        }
        else if (sVar5 == 0) {
          *(short *)((int)&snd_buf_player[0].vol + iVar13) = sVar4;
        }
        else {
          *(short *)((int)&snd_buf_player[0].vol + iVar13) = (short)iVar11;
        }
      }
      if ((cVar2 == '\x01') &&
         (sVar6 = *(short *)((int)&snd_buf_player[0].vol + iVar13),
         (long)*(short *)((int)&snd_buf_player[0].vol + iVar13) == (long)(int)sVar4)) {
        (&snd_buf_player[0].fadestop)[iVar13] = '\x02';
      }
      else {
        if (cVar2 == '\x02') {
          SndBufStopSub(sbp);
          goto LAB_002704b4;
        }
        sVar6 = *(short *)((int)&snd_buf_player[0].vol + iVar13);
      }
      SndCalcValue((int)sVar6,(int)*(short *)((int)&snd_buf_player[0].pan + iVar13),
                   (int)*(short *)((int)&snd_buf_player[0].bvol + iVar13),
                   (int)*(short *)((int)&snd_buf_player[0].pitch + iVar13),
                   (int)*(short *)((int)&snd_buf_player[0].bpitch + iVar13),uVar8 >> 0x11 & 7,
                   *(void **)((int)&snd_buf_player[0].s3d + iVar13),&volset,&pitch,1.0);
      if ((volset.l != (sbp->p).vol.l) ||
         (volset.r != *(ushort *)((int)&snd_buf_player[0].p.vol.r + iVar13))) {
        uVar8 = iVar13 + 0x4bde5bU & 3;
        puVar10 = (uint *)((iVar13 + 0x4bde5bU) - uVar8);
        *puVar10 = *puVar10 & -1 << (uVar8 + 1) * 8 | (uint)volset >> (3 - uVar8) * 8;
        (sbp->p).vol = volset;
        cVar2 = *(char *)((int)&snd_buf_player[0].p.voice_no + iVar13);
        uVar8 = *(uint *)((int)&snd_buf_player[0].p.adsr2 + iVar13);
        set_vol.vol = (sbp->p).vol;
        puVar1 = (undefined *)((int)&set_vol.vol.r + 1);
        uVar9 = (uint)puVar1 & 3;
        puVar10 = (uint *)(puVar1 + -uVar9);
        *puVar10 = *puVar10 & -1 << (uVar9 + 1) * 8 | (uint)set_vol.vol >> (3 - uVar9) * 8;
        set_vol.core = (byte)(uVar8 >> 0x16) & 1;
        set_vol.voice_no = cVar2;
        iopCommandRegister(REQ_SB_SETVOL,(char *)&set_vol,8);
      }
      if (pitch != *(ushort *)((int)&snd_buf_player[0].p.pitch + iVar13)) {
        set_pitch.voice_no = *(char *)((int)&snd_buf_player[0].p.voice_no + iVar13);
        set_pitch.pitch = pitch;
        set_pitch.core = (byte)(*(uint *)((int)&snd_buf_player[0].p.adsr2 + iVar13) >> 0x16) & 1;
        *(ushort *)((int)&snd_buf_player[0].p.pitch + iVar13) = pitch;
        iopCommandRegister(REQ_SB_SETPITCH,(char *)&set_pitch,4);
      }
    }
LAB_002704b4:
    iVar12 = iVar12 + -1;
    iVar13 = iVar13 + 0x34;
    if (iVar12 < 0) {
      return;
    }
  } while( true );
}

static void SndBufStopSub(SND_BUF_PLAYER *sbp) {
	SOUND_BUF_STOP stop;
	
  uint uVar1;
  int iVar2;
  _SOUND_BUF_STOP stop;
  
  if (sbp != (_SND_BUF_PLAYER *)0x0) {
    uVar1._0_2_ = (sbp->p).adsr2;
    uVar1._2_2_ = (sbp->p).attr;
    stop.voice_no = *(char *)&(sbp->p).voice_no;
    stop.core = (byte)(uVar1 >> 0x16) & 1;
    iVar2 = iopCommandRegister(REQ_SB_STOP,&stop.voice_no,4);
    if (iVar2 != 0) {
      sbp->fadestop = '\x03';
    }
  }
  return;
}

static void SndBufStopSub2(SND_BUF_PLAYER *sbp) {
	VOICE_STOP stop2;
	
  undefined4 uVar1;
  _VOICE_STOP stop2;
  
  if (sbp != (_SND_BUF_PLAYER *)0x0) {
    uVar1._0_2_ = (sbp->p).adsr2;
    uVar1._2_2_ = (sbp->p).attr;
    stop2.voice_no = *(ushort *)&(sbp->p).voice_no;
    stop2.core = (ushort)((uint)uVar1 >> 0x16) & 1;
    iopCommandRegister(REQ_VOICE_STOP,(char *)&stop2,4);
  }
  return;
}

void SndBufStop(int id) {
  _SND_BUF_PLAYER *sbp;
  
  sbp = GetSndBufPlayerFromID(id);
  SndBufStopSub(sbp);
  return;
}

void SndBufPause(int id) {
	SND_BUF_PLAYER *sbp;
	SOUND_BUF_PAUSE pause;
	
  uint uVar1;
  uint uVar2;
  _SND_BUF_PLAYER *p_Var3;
  int iVar4;
  uint uVar5;
  _SOUND_BUF_PAUSE pause;
  
  p_Var3 = GetSndBufPlayerFromID(id);
  if ((p_Var3 != (_SND_BUF_PLAYER *)0x0) &&
     (uVar1._0_2_ = p_Var3->pspd, uVar1._2_1_ = p_Var3->field_0x2a, uVar1._3_1_ = p_Var3->fadestop,
     (uVar1 & 0x40000) == 0)) {
    pause.voice_no = *(char *)&(p_Var3->p).voice_no;
    uVar2._0_2_ = (p_Var3->p).adsr2;
    uVar2._2_2_ = (p_Var3->p).attr;
    pause.core = (byte)(uVar2 >> 0x16) & 1;
    iVar4 = iopCommandRegister(REQ_SB_PAUSE,&pause.voice_no,4);
    if (iVar4 != 0) {
      uVar5._0_2_ = p_Var3->pspd;
      uVar5._2_1_ = p_Var3->field_0x2a;
      uVar5._3_1_ = p_Var3->fadestop;
      uVar5 = uVar5 | 0x40000;
      p_Var3->pspd = (short)uVar5;
      p_Var3->field_0x2a = (char)(uVar5 >> 0x10);
      p_Var3->fadestop = (char)(uVar5 >> 0x18);
    }
  }
  return;
}

void SndBufRestart(int id) {
	SND_BUF_PLAYER *sbp;
	SOUND_BUF_RESTART restart;
	
  uint uVar1;
  uint uVar2;
  _SND_BUF_PLAYER *p_Var3;
  int iVar4;
  uint uVar5;
  _SOUND_BUF_RESTART restart;
  
  p_Var3 = GetSndBufPlayerFromID(id);
  if ((p_Var3 != (_SND_BUF_PLAYER *)0x0) &&
     (uVar1._0_2_ = p_Var3->pspd, uVar1._2_1_ = p_Var3->field_0x2a, uVar1._3_1_ = p_Var3->fadestop,
     (uVar1 & 0x40000) != 0)) {
    restart.voice_no = *(char *)&(p_Var3->p).voice_no;
    uVar2._0_2_ = (p_Var3->p).adsr2;
    uVar2._2_2_ = (p_Var3->p).attr;
    restart.core = (byte)(uVar2 >> 0x16) & 1;
    iVar4 = iopCommandRegister(REQ_SB_RESTART,&restart.voice_no,4);
    if (iVar4 != 0) {
      uVar5._0_2_ = p_Var3->pspd;
      uVar5._2_1_ = p_Var3->field_0x2a;
      uVar5._3_1_ = p_Var3->fadestop;
      uVar5 = uVar5 & 0xfffbffff;
      p_Var3->pspd = (short)uVar5;
      p_Var3->field_0x2a = (char)(uVar5 >> 0x10);
      p_Var3->fadestop = (char)(uVar5 >> 0x18);
    }
  }
  return;
}

void SndBufVolFade(int id, int vol, int frame) {
	SND_BUF_PLAYER *sbp;
	
  ushort uVar1;
  _SND_BUF_PLAYER *p_Var2;
  
  p_Var2 = GetSndBufPlayerFromID(id);
  if (0x3fff < vol) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("SndBufVolFade vol is over max\n");
  }
  if (p_Var2 != (_SND_BUF_PLAYER *)0x0) {
    p_Var2->target_vol = (ushort)vol;
    uVar1 = SndGetFrameAddVol(vol,(int)(short)p_Var2->vol,frame);
    p_Var2->spd = uVar1;
  }
  return;
}

void SndBufPitchSet(int id, int pitch) {
	SND_BUF_PLAYER *sbp;
	
  _SND_BUF_PLAYER *p_Var1;
  
  p_Var1 = GetSndBufPlayerFromID(id);
  if (0x3fff < pitch) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("SndBufPitchSet pitch is over max\n");
  }
  if (p_Var1 != (_SND_BUF_PLAYER *)0x0) {
    p_Var1->pitch = (ushort)pitch;
  }
  return;
}

void SndBufFadeStop(int id, int time) {
	SND_BUF_PLAYER *sbp;
	
  ushort uVar1;
  _SND_BUF_PLAYER *p_Var2;
  
  p_Var2 = GetSndBufPlayerFromID(id);
  if (p_Var2 != (_SND_BUF_PLAYER *)0x0) {
    p_Var2->target_vol = 0;
    uVar1 = SndGetFrameAddVol(0,(int)(short)p_Var2->vol,time);
    p_Var2->fadestop = '\x01';
    p_Var2->spd = uVar1;
  }
  return;
}

int SndBufIsPlaying(int id) {
  _SND_BUF_PLAYER *p_Var1;
  
  p_Var1 = GetSndBufPlayerFromID(id);
  return (int)(p_Var1 != (_SND_BUF_PLAYER *)0x0);
}

void SndBufSetPosition(int id, float *pos) {
	SND_BUF_PLAYER *sbp;
	
  _SND_BUF_PLAYER *p_Var1;
  
  p_Var1 = GetSndBufPlayerFromID(id);
  if (p_Var1 != (_SND_BUF_PLAYER *)0x0) {
    if (p_Var1->s3d == (void *)0x0) {
      printf("SndBufSetPosition() This Voice Is Not 3D Sound!!!\n");
    }
    else {
      Snd3DSetPosition(p_Var1->s3d,pos);
    }
  }
  return;
}

void SndBufFadePitch(int id, int pitch, int time) {
	SND_BUF_PLAYER *sbp;
	
  ushort uVar1;
  _SND_BUF_PLAYER *p_Var2;
  
  p_Var2 = GetSndBufPlayerFromID(id);
  if (p_Var2 != (_SND_BUF_PLAYER *)0x0) {
    if (time == 0) {
      p_Var2->pitch = (ushort)pitch;
    }
    else {
      uVar1 = SndGetFrameAddVol(pitch,(int)(short)p_Var2->pitch,time);
      p_Var2->pspd = uVar1;
    }
    p_Var2->target_pitch = (ushort)pitch;
  }
  return;
}

void SndBufSet3D(int id, SND_3D_SET *s3s) {
	SND_BUF_PLAYER *sbp;
	
  _SND_BUF_PLAYER *p_Var1;
  
  p_Var1 = GetSndBufPlayerFromID(id);
  if (p_Var1 != (_SND_BUF_PLAYER *)0x0) {
    if (p_Var1->s3d == (void *)0x0) {
      printf("SndBufSet3D() This Voice Is Not 3D Sound!!!\n");
    }
    else {
      snd3DSetSET(p_Var1->s3d,s3s);
    }
  }
  return;
}
