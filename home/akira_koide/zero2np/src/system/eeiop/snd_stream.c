// STATUS: NOT STARTED

#include "snd_stream.h"

struct _SND_STREAM_WRK {
	STREAM_PLAY p;
	STREAM_START s;
	SOUND_INFO info[2];
	EEIOP_STREAM_STATUS status;
	unsigned int header_ready : 1;
	unsigned int pre_load_ok : 1;
	unsigned int play_flg : 1;
	unsigned int fade_stop : 1;
	unsigned int stop : 1;
	int header_id;
	void *s3dhndl;
	void *header_buf;
	short int vol;
	short int target_vol;
	short int spd;
	short int pitch;
	short int target_pitch;
	short int pspd;
	short int abort_cnt;
	char s3d[2];
	int offset;
	float play_spd;
	int file_no;
};

typedef _SND_STREAM_WRK SND_STREAM_WRK;
static SND_STREAM_WRK snd_stream_wrk[2];
static char header_buf_64[2][2048];
static int irq_core_source[2];
static int snd_stream_load_priority;

void SndStreamInit(int load_priority) {
	int i;
	
  void **ppvVar1;
  char cVar2;
  int iVar3;
  char (*pacVar4) [2048];
  
  snd_stream_load_priority = load_priority;
  iopCommandRegister(REQ_STREAM_CREATE,(char *)0x0,0);
  iVar3 = 0;
  pacVar4 = header_buf_64;
  ppvVar1 = &snd_stream_wrk[0].header_buf;
  do {
    cVar2 = (char)iVar3;
    *(char *)((int)ppvVar1 + -0x169) = cVar2;
    iVar3 = iVar3 + 1;
    *ppvVar1 = pacVar4;
    *(short *)((int)ppvVar1 + -0x186) = (short)cVar2;
    pacVar4 = pacVar4[1];
    ppvVar1[-4] = (void *)0x0;
    ppvVar1 = ppvVar1 + 0x70;
  } while (iVar3 < 2);
  irq_core_source[0] = 0;
  irq_core_source[1] = 0;
  return;
}

SND_STREAM_ERR SndStreamStartHeaderOnMemory(int wrk_id, int file_no, void *header, int offset) {
	SND_STREAM_WRK *wrk;
	
  uint uVar1;
  _SND_STREAM_ERR _Var2;
  int iVar3;
  _SND_STREAM_WRK *wrk;
  
  wrk = snd_stream_wrk + wrk_id;
  _Var2 = SndStreamInitWrk(wrk,file_no,offset);
  if (_Var2 == SND_STREAM_OK) {
    CheckHXDData((_HXD_HEADER *)header,0);
    SetStreamHeaderSub(wrk,(_HXD_HEADER *)header);
    SetStreamStartSub(wrk);
    iVar3 = iopCommandRegister(REQ_STREAM_START,(char *)&snd_stream_wrk[wrk_id].s,0x13c);
    if (iVar3 == 0) {
      _Var2 = SND_STREAM_ERR_IOPSEND;
    }
    else {
      uVar1 = *(uint *)&snd_stream_wrk[wrk_id].field_0x194;
      _Var2 = SND_STREAM_OK;
      snd_stream_wrk[wrk_id].status = ST_STREAM_PRE_LOAD;
      *(uint *)&snd_stream_wrk[wrk_id].field_0x194 = uVar1 | 1;
    }
  }
  return _Var2;
}

SND_STREAM_ERR SndStreamStart(int wrk_id, int file_no, int header_file_no, int offset) {
	SND_STREAM_WRK *wrk;
	
  uint uVar1;
  _SND_STREAM_ERR _Var2;
  int iVar3;
  
  _Var2 = SndStreamInitWrk(snd_stream_wrk + wrk_id,file_no,offset);
  if (_Var2 == SND_STREAM_OK) {
    if (header_file_no == -0x21) {
      SetStreamStartSub(snd_stream_wrk + wrk_id);
      iVar3 = iopCommandRegister(REQ_STREAM_START,(char *)&snd_stream_wrk[wrk_id].s,0x13c);
      if (iVar3 == 0) {
        return SND_STREAM_ERR_IOPSEND;
      }
      uVar1 = *(uint *)&snd_stream_wrk[wrk_id].field_0x194;
      snd_stream_wrk[wrk_id].status = ST_STREAM_PRE_LOAD;
      *(uint *)&snd_stream_wrk[wrk_id].field_0x194 = uVar1 | 1;
    }
    else {
      iVar3 = FileLoadReqEE(header_file_no,snd_stream_wrk[wrk_id].header_buf,
                            snd_stream_load_priority,(undefined1 *)0x0,(void *)0x0);
      snd_stream_wrk[wrk_id].header_id = iVar3;
    }
    _Var2 = SND_STREAM_OK;
  }
  return _Var2;
}

void SndStreamFade(int wrk_id, int target_vol, int time) {
	SND_STREAM_WRK *wrk;
	
  ushort uVar1;
  
  if (0x3fff < target_vol) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("SndStreamPlay vol is over max\n");
  }
  if ((*(uint *)&snd_stream_wrk[wrk_id].field_0x194 >> 3 & 1) != 0) {
    printf("in fade stop, so cannot fade\n");
    return;
  }
  uVar1 = snd_stream_wrk[wrk_id].vol;
  snd_stream_wrk[wrk_id].target_vol = (ushort)target_vol;
  uVar1 = SndGetFrameAddVol((int)(short)(ushort)target_vol,(int)(short)uVar1,time);
  snd_stream_wrk[wrk_id].spd = uVar1;
  return;
}

int SndStreamIsHeaderReady(int wrk_id) {
  _IOP_STREAM_RET *p_Var1;
  int iVar2;
  
  if ((*(uint *)&snd_stream_wrk[wrk_id].field_0x194 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    p_Var1 = GetStreamWrkRet(wrk_id);
    iVar2 = 1;
    if (p_Var1->status != ST_STREAM_PLAYING) {
      iVar2 = 0;
    }
  }
  return iVar2;
}

SND_STREAM_ERR SndStreamPlay(int wrk_id, int effect, int loop2, int vol, int in_time, SND_3D_SET *s3s, float play_spd, int pitch) {
	int i;
	int loop;
	SND_STREAM_WRK *wrk;
	int j;
	
  ushort *puVar1;
  char cVar2;
  _VOICE_ATTR _Var3;
  ushort uVar4;
  _SND_STREAM_ERR _Var5;
  _IOP_STREAM_RET *p_Var6;
  uint uVar7;
  int iVar8;
  _SND_STREAM_WRK *wrk;
  _VOICE_ATTR *p_Var9;
  uint uVar10;
  _SND_STREAM_WRK *p_Var11;
  int iVar12;
  int iVar13;
  long lVar14;
  char *pcVar15;
  _SND_STREAM_WRK *p_Var16;
  
  wrk = snd_stream_wrk + wrk_id;
  if (0x3fff < vol) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("SndStreamPlay vol is over max\n");
  }
  _Var5 = SND_STREAM_ERR_NOT_USE;
  if ((snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) &&
     (_Var5 = SND_STREAM_ERR_HEADER, (*(uint *)&snd_stream_wrk[wrk_id].field_0x194 & 1) != 0)) {
    p_Var6 = GetStreamWrkRet(wrk_id);
    if (p_Var6->status == ST_STREAM_PLAYING) {
      if (in_time == 0) {
        snd_stream_wrk[wrk_id].vol = (ushort)vol;
      }
      else {
        snd_stream_wrk[wrk_id].vol = 0;
        uVar4 = SndGetFrameAddVol(vol,0,in_time);
        snd_stream_wrk[wrk_id].spd = uVar4;
      }
      snd_stream_wrk[wrk_id].target_vol = (ushort)vol;
      snd_stream_wrk[wrk_id].play_spd = play_spd;
      snd_stream_wrk[wrk_id].target_pitch = (ushort)pitch;
      iVar12 = 1;
      snd_stream_wrk[wrk_id].pitch = (ushort)pitch;
      snd_stream_wrk[wrk_id].pspd = 0;
      SndStreamSet3DSub(wrk,s3s);
      uVar10._0_2_ = snd_stream_wrk[wrk_id].info[0].attr;
      uVar10._2_2_ = snd_stream_wrk[wrk_id].info[0].pan;
      uVar4 = snd_stream_wrk[wrk_id].s.nchannel;
      uVar10 = uVar10 >> 5 & 1;
      if (1 < (short)snd_stream_wrk[wrk_id].s.nchannel) {
        p_Var16 = snd_stream_wrk + wrk_id;
        p_Var9 = &p_Var16->info[1].attr;
        uVar7._0_2_ = p_Var16->info[1].attr;
        uVar7._2_2_ = p_Var16->info[1].pan;
        while( true ) {
          p_Var9 = p_Var9 + 0xe;
          if (uVar10 != (uVar7 >> 5 & 1)) {
            printf("******************************\n");
            GetFileName(snd_stream_wrk[wrk_id].file_no);
            printf("File[%s] Loop Script Illegal!\n");
            printf("******************************\n");
            uVar4 = snd_stream_wrk[wrk_id].s.nchannel;
          }
          iVar12 = iVar12 + 1;
          if ((short)uVar4 <= iVar12) break;
          uVar7 = *(uint *)p_Var9;
        }
      }
      iVar12 = SetIRQCore(wrk);
      uVar4 = snd_stream_wrk[wrk_id].s.nchannel;
      snd_stream_wrk[wrk_id].p.irq_core = (ushort)iVar12;
      lVar14 = 0;
      if (0 < (short)uVar4) {
        iVar12 = wrk_id * 0x1c0 + 0x4c0dd0;
        pcVar15 = snd_stream_wrk[wrk_id].p.voice;
        p_Var16 = wrk;
        p_Var11 = wrk;
        do {
          iVar13 = (int)lVar14;
          iVar8 = GetSPUVoiceCore((ushort)(p_Var11->p).attr[0] >> 6 & 1);
          *pcVar15 = (char)iVar8;
          pcVar15 = pcVar15 + 1;
          if ((char)iVar8 == -1) {
            printf("SndStreamPlay() Cannot Get Voice\n");
            irq_core_source[(short)snd_stream_wrk[wrk_id].p.irq_core] = 0;
            if (lVar14 < 1) {
              return SND_STREAM_ERR_VOICE;
            }
            p_Var9 = snd_stream_wrk[wrk_id].p.attr;
            pcVar15 = snd_stream_wrk[wrk_id].p.voice;
            _Var3 = *p_Var9;
            while( true ) {
              p_Var9 = p_Var9 + 1;
              cVar2 = *pcVar15;
              pcVar15 = pcVar15 + 1;
              lVar14 = (long)((int)lVar14 + -1);
              FreeSPUVoiceCore((ushort)_Var3 >> 6 & 1,(int)cVar2);
              if (lVar14 == 0) break;
              _Var3 = *p_Var9;
            }
            return SND_STREAM_ERR_VOICE;
          }
          lVar14 = (long)(iVar13 + 1);
          SndCalcValue((int)(short)snd_stream_wrk[wrk_id].vol,(int)*(short *)(iVar12 + 0x1a),
                       (int)*(short *)(iVar12 + 0x12),(int)(short)snd_stream_wrk[wrk_id].pitch,
                       (int)*(short *)(iVar12 + 0x10),*(uint *)(iVar12 + 0x18) >> 1 & 7,
                       snd_stream_wrk[wrk_id].s3dhndl,(_VOLSET *)p_Var16,
                       &snd_stream_wrk[wrk_id].p.pitch,snd_stream_wrk[wrk_id].play_spd);
          _Var3 = (p_Var11->p).attr[0];
          uVar4 = (ushort)((uVar10 & loop2) << 5);
          (p_Var11->p).attr[0] = (_VOICE_ATTR)((ushort)_Var3 & 0xffdf | uVar4);
          (p_Var11->p).attr[0] =
               (_VOICE_ATTR)
               ((ushort)_Var3 & 0xffde | uVar4 | *(byte *)(iVar12 + 0x18) & 1 & (ushort)effect);
          (wrk->p).adsr1[iVar13] = *(ushort *)(iVar12 + 0x14);
          puVar1 = (ushort *)(iVar12 + 0x16);
          iVar12 = iVar12 + 0x1c;
          (p_Var11->p).adsr2[0] = *puVar1;
          p_Var11 = (_SND_STREAM_WRK *)&(p_Var11->p).vol[0].r;
          p_Var16 = (_SND_STREAM_WRK *)((p_Var16->p).vol + 1);
        } while (lVar14 < (short)snd_stream_wrk[wrk_id].s.nchannel);
      }
      iVar12 = iopCommandRegister(REQ_STREAM_PLAY,(char *)wrk,0x1c);
      _Var5 = SND_STREAM_OK;
      if (iVar12 == 0) {
        _Var5 = SND_STREAM_ERR_IOPSEND;
      }
      else {
        *(uint *)&snd_stream_wrk[wrk_id].field_0x194 =
             *(uint *)&snd_stream_wrk[wrk_id].field_0x194 | 4;
      }
    }
    else {
      printf("SndSteamPlay() Not Ready\n");
      _Var5 = SND_STREAM_ERR_HEADER;
    }
  }
  return _Var5;
}

void SndStreamMain() {
	int wi;
	SND_STREAM_WRK *wrk;
	STREAM_ABORT abort;
	
  short sVar1;
  int iVar2;
  int iVar3;
  _IOP_STREAM_RET *p_Var4;
  _SND_STREAM_WRK *wrk;
  int wrk_id;
  _STREAM_ABORT abort;
  
  wrk_id = 0;
  iVar2 = 0;
  do {
    iVar2 = (iVar2 - wrk_id) * 0x40;
    wrk = (_SND_STREAM_WRK *)((int)snd_stream_wrk + iVar2);
    switch(*(undefined4 *)((int)snd_stream_wrk + iVar2 + 400)) {
    case 1:
      iVar3 = FileLoadIsEnd(*(int *)((int)snd_stream_wrk + iVar2 + 0x198));
      if (iVar3 != 0) {
        CheckHXDData(*(_HXD_HEADER **)((int)snd_stream_wrk + iVar2 + 0x1a0),0);
        SetStreamHeaderSub(wrk,*(_HXD_HEADER **)((int)snd_stream_wrk + iVar2 + 0x1a0));
        SetStreamStartSub(wrk);
        iVar3 = iopCommandRegister(REQ_STREAM_START,(char *)((int)snd_stream_wrk + iVar2 + 0x1c),
                                   0x13c);
        if (iVar3 != 0) {
          *(undefined4 *)((int)snd_stream_wrk + iVar2 + 400) = 2;
          *(uint *)((int)snd_stream_wrk + iVar2 + 0x194) =
               *(uint *)((int)snd_stream_wrk + iVar2 + 0x194) | 1;
        }
      }
      break;
    case 2:
      p_Var4 = GetStreamWrkRet(wrk_id);
      if (p_Var4->status == ST_STREAM_PLAYING) {
        *(undefined4 *)((int)snd_stream_wrk + iVar2 + 400) = 6;
        *(uint *)((int)snd_stream_wrk + iVar2 + 0x194) =
             *(uint *)((int)snd_stream_wrk + iVar2 + 0x194) | 2;
        goto switchD_0027743c_caseD_6;
      }
      break;
    case 3:
      p_Var4 = GetStreamWrkRet(wrk_id);
      if (p_Var4->status == ST_STREAM_NO_USE) {
        printf("<<<<<<<<<<<<<AUTO END STOP[%d]>>>>>>>>>>>>.\n");
LAB_002775c4:
        StreamWrkRelease(wrk);
      }
      else {
        if (((*(uint *)((int)snd_stream_wrk + iVar2 + 0x194) >> 3 & 1) != 0) &&
           (*(short *)((int)snd_stream_wrk + iVar2 + 0x1a6) ==
            *(short *)((int)snd_stream_wrk + iVar2 + 0x1a4))) {
          SndStreamStop(wrk_id);
        }
        SndStreamFadeSub(wrk_id);
      }
      break;
    case 4:
      sVar1 = *(short *)((int)snd_stream_wrk + iVar2 + 0x1b0) + -1;
      *(short *)((int)snd_stream_wrk + iVar2 + 0x1b0) = sVar1;
      if (sVar1 == -1) {
        abort.wrk_id = wrk_id;
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("SndStream[%d] Is Abort!!");
        iopCommandRegister(REQ_STREAM_ABORT,(char *)&abort,4);
      }
      p_Var4 = GetStreamWrkRet(wrk_id);
      if (p_Var4->status == ST_STREAM_NO_USE) goto LAB_002775c4;
      break;
    case 5:
      StreamWrkRelease(wrk);
      break;
    case 6:
switchD_0027743c_caseD_6:
      if ((*(uint *)((int)snd_stream_wrk + iVar2 + 0x194) >> 2 & 1) != 0) {
        *(undefined4 *)((int)snd_stream_wrk + iVar2 + 400) = 3;
      }
    }
    wrk_id = wrk_id + 1;
    if (1 < wrk_id) {
      return;
    }
    iVar2 = wrk_id * 8;
  } while( true );
}

char* SndStreamPrintStatus(EEIOP_STREAM_STATUS status) {
  switch(status) {
  case ST_STREAM_HEADER_LOAD:
    return "ST_STREAM_HEADER_LOAD";
  case ST_STREAM_PRE_LOAD:
    return "ST_STREAM_PRE_LOAD";
  case ST_STREAM_PLAYING:
    return "ST_STREAM_PLAYING";
  case ST_STREAM_WAIT_END:
    return "ST_STREAM_WAIT_END";
  case ST_STREAM_END:
    return "ST_STREAM_END";
  case ST_STREAM_START:
    return "ST_STREAM_START";
  default:
    return "ST_STREAM_NO_USE";
  }
}

static void SndStreamFadeSub(int wi) {
	int ch;
	short int pitch;
	VOLSET volset;
	int vol_change;
	int pitch_change;
	SND_STREAM_WRK *wrk;
	STREAM_SETVOL set_vol;
	STREAM_SETPITCH set_pitch;
	
  uint *puVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  undefined *puVar5;
  ushort uVar6;
  _VOLSET _Var7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  _VOLSET *p_Var13;
  int iVar14;
  long lVar15;
  _VOLSET volset;
  ushort pitch;
  _STREAM_SETVOL set_vol;
  _STREAM_SETPITCH set_pitch;
  
  bVar9 = false;
  bVar10 = false;
  if (snd_stream_wrk[wi].target_vol != snd_stream_wrk[wi].vol) {
    iVar12 = SndAddFadeVol((int)(short)snd_stream_wrk[wi].vol,
                           (int)(short)snd_stream_wrk[wi].target_vol,
                           (int)(short)snd_stream_wrk[wi].spd);
    snd_stream_wrk[wi].vol = (ushort)iVar12;
  }
  if (snd_stream_wrk[wi].target_pitch == snd_stream_wrk[wi].pitch) {
    uVar11 = snd_stream_wrk[wi].s.nchannel;
  }
  else {
    iVar12 = SndAddFadeVol((int)(short)snd_stream_wrk[wi].pitch,
                           (int)(short)snd_stream_wrk[wi].target_pitch,
                           (int)(short)snd_stream_wrk[wi].pspd);
    snd_stream_wrk[wi].pitch = (ushort)iVar12;
    uVar11 = snd_stream_wrk[wi].s.nchannel;
  }
  lVar15 = 0;
  uVar6 = snd_stream_wrk[wi].s.nchannel;
  if (0 < (short)uVar11) {
    iVar12 = wi * 0x1c0 + 0x4c0dd0;
    do {
      puVar1 = (uint *)(iVar12 + 0x18);
      psVar2 = (short *)(iVar12 + 0x1a);
      psVar3 = (short *)(iVar12 + 0x12);
      psVar4 = (short *)(iVar12 + 0x10);
      iVar12 = iVar12 + 0x1c;
      SndCalcValue((int)(short)snd_stream_wrk[wi].vol,(int)*psVar2,(int)*psVar3,
                   (int)(short)snd_stream_wrk[wi].pitch,(int)*psVar4,*puVar1 >> 1 & 7,
                   snd_stream_wrk[wi].s3dhndl,&volset,&pitch,snd_stream_wrk[wi].play_spd);
      p_Var13 = snd_stream_wrk[wi].p.vol + (int)lVar15;
      lVar15 = (long)((int)lVar15 + 1);
      if ((volset.l == p_Var13->l) && (volset.r == p_Var13->r)) {
        uVar11 = snd_stream_wrk[wi].p.pitch;
      }
      else {
        puVar5 = (undefined *)((int)&p_Var13->r + 1);
        uVar8 = (uint)puVar5 & 3;
        puVar1 = (uint *)(puVar5 + -uVar8);
        *puVar1 = *puVar1 & -1 << (uVar8 + 1) * 8 | (uint)volset >> (3 - uVar8) * 8;
        *p_Var13 = volset;
        bVar9 = true;
        uVar11 = snd_stream_wrk[wi].p.pitch;
      }
      if (pitch != uVar11) {
        snd_stream_wrk[wi].p.pitch = pitch;
        bVar10 = true;
      }
      uVar6 = snd_stream_wrk[wi].s.nchannel;
    } while (lVar15 < (short)snd_stream_wrk[wi].s.nchannel);
  }
  if (bVar9) {
    iVar12 = 0;
    if (0 < (short)uVar6) {
      do {
        iVar14 = iVar12 + 1;
        _Var7 = snd_stream_wrk[wi].p.vol[iVar12];
        puVar5 = (undefined *)((int)&set_vol.vol[iVar12].r + 1);
        uVar8 = (uint)puVar5 & 3;
        puVar1 = (uint *)(puVar5 + -uVar8);
        *puVar1 = *puVar1 & -1 << (uVar8 + 1) * 8 | (uint)_Var7 >> (3 - uVar8) * 8;
        set_vol.vol[iVar12] = _Var7;
        iVar12 = iVar14;
      } while (iVar14 < (short)uVar6);
    }
    set_vol.wrk_id = wi;
    iopCommandRegister(REQ_STREAM_SETVOL,(char *)&set_vol,0xc);
  }
  if (bVar10) {
    set_pitch.pitch = pitch;
    set_pitch.wrk_id = (ushort)wi;
    iopCommandRegister(REQ_STREAM_SETPITCH,(char *)&set_pitch,4);
  }
  return;
}

static void SetStreamStartSub(SND_STREAM_WRK *wrk) {
	int i;
	int need_loop_packet;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  uint *puVar9;
  uint (*pauVar10) [2];
  uint *puVar11;
  long lVar12;
  
  iVar4 = GetFileStartSector(wrk->file_no);
  iVar6 = wrk->file_no;
  (wrk->s).start_sector = iVar4;
  uVar5 = GetFileSize(iVar6);
  iVar6 = wrk->file_no;
  (wrk->s).size = uVar5;
  GetFileNameBuffer(iVar6,(wrk->s).file_name);
  iVar6 = (wrk->s).size;
  if (iVar6 < 0x20000) {
    (wrk->s).offset = 0;
  }
  else {
    if ((wrk->s).offset < (iVar6 >> 0xb) + -0x40) {
      iVar6 = (wrk->s).interleave_byte;
      goto LAB_00277900;
    }
    (wrk->s).offset = 0;
  }
  iVar6 = (wrk->s).interleave_byte;
LAB_00277900:
  uVar5 = 0;
  iVar2 = wrk->info[0].loopstart;
  iVar6 = iVar6 >> 4;
  iVar3 = wrk->info[0].loopend;
  iVar4 = iVar2 % iVar6;
  (wrk->s).loop_start_block = iVar2;
  (wrk->s).loop_end_block = iVar3;
  if (iVar6 == 0) {
    trap(7);
  }
  iVar3 = iVar3 % iVar6;
  (wrk->s).loop_start_fraction = iVar4;
  (wrk->s).loop_end_fraction = iVar3;
  if ((iVar4 == 0) && (iVar3 == 0)) {
    uVar7._0_2_ = wrk->info[0].attr;
    uVar7._2_2_ = wrk->info[0].pan;
  }
  else {
    uVar5 = 1;
    uVar7._0_2_ = wrk->info[0].attr;
    uVar7._2_2_ = wrk->info[0].pan;
  }
  lVar12 = 0;
  if (0 < (short)(wrk->s).nchannel) {
    puVar11 = (wrk->s).spu_packet + 1;
    pauVar10 = (wrk->s).spu_packet;
    puVar9 = (wrk->s).spu_loop_packet;
    do {
      if ((uVar5 & uVar7 >> 5 & 1) == 0) {
        *puVar9 = 0;
        pvVar8 = GetSPUMemory((wrk->s).interleave_byte << 1);
      }
      else {
        pvVar8 = GetSPUMemory((wrk->s).interleave_byte << 2);
        *puVar9 = (uint)pvVar8;
        pvVar8 = (void *)((int)pvVar8 + (wrk->s).interleave_byte * 2);
      }
      (*pauVar10)[0] = (uint)pvVar8;
      lVar12 = (long)((int)lVar12 + 1);
      pauVar10 = pauVar10[1];
      uVar1 = (wrk->s).nchannel;
      puVar9 = puVar9 + 1;
      *puVar11 = (*(uint (*) [2])(puVar11 + -1))[0] + (wrk->s).interleave_byte;
      puVar11 = puVar11 + 2;
    } while (lVar12 < (short)uVar1);
  }
  return;
}

static SND_STREAM_ERR SndStreamInitWrk(SND_STREAM_WRK *wrk, int file_no, int offset) {
	int i;
	
  _SND_STREAM_ERR _Var1;
  char *pcVar2;
  uint (*pauVar3) [2];
  int iVar4;
  uint *puVar5;
  
  if (wrk->status == ST_STREAM_NO_USE) {
    wrk->file_no = file_no;
    wrk->s3dhndl = (void *)0x0;
    wrk->offset = 0;
    puVar5 = (wrk->s).spu_loop_packet;
    wrk->status = ST_STREAM_HEADER_LOAD;
    pauVar3 = (wrk->s).spu_packet;
    *(uint *)&wrk->field_0x194 = *(uint *)&wrk->field_0x194 & 0xffffffe0;
    pcVar2 = (wrk->p).voice;
    wrk->header_id = -1;
    iVar4 = 1;
    do {
      iVar4 = iVar4 + -1;
      *pcVar2 = -1;
      (*pauVar3)[0] = 0;
      pauVar3 = pauVar3[1];
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      pcVar2 = pcVar2 + 1;
    } while (-1 < iVar4);
    (wrk->s).offset = offset;
    _Var1 = SND_STREAM_OK;
  }
  else {
    printf("This Stream File Is Used!\n");
    _Var1 = SND_STREAM_ERR_IN_USE;
  }
  return _Var1;
}

static void StreamWrkRelease(SND_STREAM_WRK *wrk) {
	int i;
	
  char cVar1;
  void *pvVar2;
  int iVar3;
  _IOP_STREAM_RET *p_Var4;
  ushort uVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  _VOICE_ATTR *p_Var9;
  uint (*pauVar10) [2];
  int iVar11;
  
  iVar11 = 0;
  uVar5 = (wrk->s).nchannel;
  if (0 < (short)(wrk->s).nchannel) {
    p_Var9 = (wrk->p).attr;
    pcVar7 = (wrk->p).voice;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      if (-1 < cVar1) {
        iVar3 = CheckEndPointThrough((ushort)*p_Var9 >> 6 & 1,(int)cVar1);
        if (iVar3 == 0) {
          wrk->status = ST_STREAM_END;
          return;
        }
        uVar5 = (wrk->s).nchannel;
      }
      iVar11 = iVar11 + 1;
      p_Var9 = p_Var9 + 1;
    } while (iVar11 < (short)uVar5);
  }
  uVar6 = *(uint *)&wrk->field_0x194;
  if ((uVar6 & 1) != 0) {
    iVar11 = 0;
    if (0 < (int)((uint)uVar5 << 0x10)) {
      pauVar10 = (wrk->s).spu_packet;
      puVar8 = (wrk->s).spu_loop_packet;
      do {
        pvVar2 = (void *)*puVar8;
        puVar8 = puVar8 + 1;
        if (pvVar2 == (void *)0x0) {
          if ((void *)(*pauVar10)[0] != (void *)0x0) {
            ReleaseSPUMemory((void *)(*pauVar10)[0]);
            uVar5 = (wrk->s).nchannel;
          }
        }
        else {
          ReleaseSPUMemory(pvVar2);
          uVar5 = (wrk->s).nchannel;
        }
        iVar11 = iVar11 + 1;
        pauVar10 = pauVar10[1];
      } while (iVar11 < (short)uVar5);
      uVar6 = *(uint *)&wrk->field_0x194;
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pvVar2 = wrk->s3dhndl;
      irq_core_source[(short)(wrk->p).irq_core] = 0;
      if (pvVar2 != (void *)0x0) {
        Snd3DFreeWrk(pvVar2);
        uVar5 = (wrk->s).nchannel;
      }
      iVar11 = 0;
      if (0 < (int)((uint)uVar5 << 0x10)) {
        p_Var9 = (wrk->p).attr;
        pcVar7 = (wrk->p).voice;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (-1 < cVar1) {
            FreeSPUVoiceCore((ushort)*p_Var9 >> 6 & 1,(int)cVar1);
            uVar5 = (wrk->s).nchannel;
          }
          iVar11 = iVar11 + 1;
          p_Var9 = p_Var9 + 1;
        } while (iVar11 < (short)uVar5);
      }
    }
  }
  p_Var4 = GetStreamWrkRet((int)(wrk->s).wrk_id);
  wrk->status = ST_STREAM_NO_USE;
  wrk->offset = p_Var4->offset;
  return;
}

static void SndStreamSet3DSub(SND_STREAM_WRK *wrk, SND_3D_SET *s3s) {
	int i;
	
  void *pvVar1;
  char *pcVar2;
  long lVar3;
  
  lVar3 = 0;
  if (0 < (short)(wrk->s).nchannel) {
    pcVar2 = wrk->s3d;
    do {
      if (s3s == (_SND_3D_SET *)0x0) {
        *pcVar2 = '\0';
      }
      else if (wrk->s3dhndl == (void *)0x0) {
        pvVar1 = Snd3DCreateWrk(s3s);
        wrk->s3dhndl = pvVar1;
        *pcVar2 = '\x01';
      }
      else {
        *pcVar2 = '\x01';
      }
      lVar3 = (long)((int)lVar3 + 1);
      pcVar2 = pcVar2 + 1;
    } while (lVar3 < (short)(wrk->s).nchannel);
  }
  return;
}

static void SndStreamStop(int wrk_id) {
	SND_STREAM_WRK *wrk;
	STREAM_STOP stop;
	
  int iVar1;
  _STREAM_STOP stop;
  
  if (((*(uint *)&snd_stream_wrk[wrk_id].field_0x194 >> 4 & 1) == 0) &&
     (snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE)) {
    *(uint *)&snd_stream_wrk[wrk_id].field_0x194 =
         *(uint *)&snd_stream_wrk[wrk_id].field_0x194 | 0x10;
    snd_stream_wrk[wrk_id].abort_cnt = 600;
    stop.wrk_id = wrk_id;
    iVar1 = iopCommandRegister(REQ_STREAM_STOP,(char *)&stop,4);
    if (iVar1 != 0) {
      snd_stream_wrk[wrk_id].status = ST_STREAM_WAIT_END;
    }
  }
  return;
}

void SndStreamFadeStop(int wrk_id, int time) {
	SND_STREAM_WRK *wrk;
	
  _EEIOP_STREAM_STATUS__106_4475 _Var1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  _Var1 = snd_stream_wrk[wrk_id].status;
  if (_Var1 != ST_STREAM_PRE_LOAD) {
    if ((uint)_Var1 < 3) {
      if (_Var1 == ST_STREAM_HEADER_LOAD) {
        iVar4 = FileLoadIsEnd(snd_stream_wrk[wrk_id].header_id);
        if (iVar4 == 0) {
          GetFileName(snd_stream_wrk[wrk_id].file_no);
          printf("wrk->header_cancel header_id = %d, %s\n");
          FileLoadCancel(snd_stream_wrk[wrk_id].header_id,(undefined1 *)0x0,(void *)0x0);
        }
        StreamWrkRelease(snd_stream_wrk + wrk_id);
        printf("ST_STREAM_HEADER_LOAD = %d\n");
        return;
      }
    }
    else if (_Var1 == ST_STREAM_PLAYING) {
      uVar3 = SndGetFrameAddVol(0,(int)(short)snd_stream_wrk[wrk_id].vol,time);
      snd_stream_wrk[wrk_id].target_vol = 0;
      uVar2 = *(uint *)&snd_stream_wrk[wrk_id].field_0x194;
      snd_stream_wrk[wrk_id].spd = uVar3;
      *(uint *)&snd_stream_wrk[wrk_id].field_0x194 = uVar2 | 8;
    }
    else if (_Var1 == ST_STREAM_START) goto LAB_00277e60;
    return;
  }
LAB_00277e60:
  SndStreamStop(wrk_id);
  return;
}

void SndStreamAllStop() {
  SndStreamStop(0);
  SndStreamStop(1);
  return;
}

void SndStreamPause(int wrk_id) {
	STREAM_PAUSE pause;
	
  _STREAM_PAUSE pause;
  
  if ((snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) &&
     (snd_stream_wrk[wrk_id].status != ST_STREAM_WAIT_END)) {
    pause.wrk_id = wrk_id;
    iopCommandRegister(REQ_STREAM_PAUSE,(char *)&pause,4);
  }
  return;
}

void SndStreamRestart(int wrk_id) {
	STREAM_RESTART restart;
	
  _STREAM_RESTART restart;
  
  if (snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    restart.wrk_id = wrk_id;
    iopCommandRegister(REQ_STREAM_RESTART,(char *)&restart,4);
  }
  return;
}

void SndStreamSetPosition(int wrk_id, float *pos) {
	SND_STREAM_WRK *wrk;
	SND_3D_SET s3s;
	
  _SND_3D_SET s3s;
  
  if (snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    if (snd_stream_wrk[wrk_id].s3dhndl == (void *)0x0) {
      memset(&s3s,0,0xc);
      s3s.vel = (float (*) [4])0x0;
      s3s.dir = (float (*) [4])0x0;
      s3s.pos = (float (*) [4])pos;
      SndStreamSet3DSub(snd_stream_wrk + wrk_id,&s3s);
    }
    else {
      Snd3DSetPosition(snd_stream_wrk[wrk_id].s3dhndl,pos);
    }
  }
  return;
}

int SndStreamIsUse(int wrk_id) {
  return (int)(snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE);
}

int SndStreamIsPreload(int wrk_id) {
	SND_STREAM_WRK *wrk;
	
  uint uVar1;
  
  if (snd_stream_wrk[wrk_id].status == ST_STREAM_NO_USE) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndStreamPreLoad() This Wrk Is Not Used");
    uVar1 = 1;
  }
  else {
    uVar1 = (uint)((*(uint *)&snd_stream_wrk[wrk_id].field_0x194 >> 1 & 1) != 0);
  }
  return uVar1;
}

SND_STREAM_ERR SndStreamGetInfo(int wrk_id, int *nchannel, int *interleave_byte, SOUND_INFO **info) {
	SND_STREAM_WRK *wrk;
	
  ushort uVar1;
  _SND_STREAM_ERR _Var2;
  
  if (snd_stream_wrk[wrk_id].status == ST_STREAM_NO_USE) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndStreamGetInfo() This Wrk Is Not Used");
  }
  if ((*(uint *)&snd_stream_wrk[wrk_id].field_0x194 & 1) == 0) {
    _Var2 = SND_STREAM_ERR_HEADER;
  }
  else {
    uVar1 = snd_stream_wrk[wrk_id].s.nchannel;
    _Var2 = SND_STREAM_OK;
    *info = snd_stream_wrk[wrk_id].info;
    *nchannel = (int)(short)uVar1;
    *interleave_byte = snd_stream_wrk[wrk_id].s.interleave_byte;
  }
  return _Var2;
}

int SndStreamGetEndOffset(int wrk_id) {
  return snd_stream_wrk[wrk_id].offset;
}

int SndStreamGetNowOffset(int wrk_id) {
	SND_STREAM_WRK *wrk;
	
  _IOP_STREAM_RET *p_Var1;
  int iVar2;
  
  if (snd_stream_wrk[wrk_id].status == ST_STREAM_PLAYING) {
    p_Var1 = GetStreamWrkRet((int)snd_stream_wrk[wrk_id].s.wrk_id);
    iVar2 = p_Var1->offset;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

SND_STREAM_ERR SndStreamChangePlaySpeed(int wrk_id, float rate) {
	SND_STREAM_WRK *wrk;
	
  if (snd_stream_wrk[wrk_id].status == ST_STREAM_NO_USE) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndStreamChangePlaySpeed() This Wrk Is Not Used");
  }
  snd_stream_wrk[wrk_id].play_spd = rate;
  return SND_STREAM_OK;
}

void SndStreamSet3D(int wrk_id, SND_3D_SET *s3s) {
	SND_STREAM_WRK *wrk;
	
  if (snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    if (snd_stream_wrk[wrk_id].s3dhndl == (void *)0x0) {
      SndStreamSet3DSub(snd_stream_wrk + wrk_id,s3s);
    }
    else {
      snd3DSetSET(snd_stream_wrk[wrk_id].s3dhndl,s3s);
    }
  }
  return;
}

void SndStreamFadePitch(int wrk_id, int pitch, int time) {
	SND_STREAM_WRK *wrk;
	
  ushort uVar1;
  
  if (snd_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    if (time == 0) {
      snd_stream_wrk[wrk_id].pitch = (ushort)pitch;
    }
    else {
      uVar1 = SndGetFrameAddVol((int)(short)snd_stream_wrk[wrk_id].pitch,pitch,time);
      snd_stream_wrk[wrk_id].pspd = uVar1;
    }
    snd_stream_wrk[wrk_id].target_pitch = (ushort)pitch;
  }
  return;
}

void SetStreamHeaderSub(SND_STREAM_WRK *wrk, HXD_HEADER *header) {
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(ushort *)&header->num;
  iVar2 = header->interleave_byte;
  (wrk->s).nchannel = uVar1;
  (wrk->s).interleave_byte = iVar2;
  memcpy(wrk->info,header + 1,(long)((short)uVar1 * 0x1c));
  uVar3._0_2_ = wrk->info[0].attr;
  uVar3._2_2_ = wrk->info[0].pan;
  if (((uVar3 & 0x20) != 0) &&
     (wrk->info[0].loopend - wrk->info[0].loopstart <= ((wrk->s).interleave_byte >> 4) << 1)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Loop Info Is Illegal");
    return;
  }
  return;
}

int SetIRQCore(SND_STREAM_WRK *wrk) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = irq_core_source;
  do {
    if (*piVar1 == 0) {
      *piVar1 = 1;
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  printf("SetIRQCore() theres is no irq_core_source!\n");
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}
