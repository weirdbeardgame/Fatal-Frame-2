// STATUS: NOT STARTED

#include "snd.h"

struct _SOUND_SYS {
	char mono;
	int type_vol[5];
};

typedef _SOUND_SYS SOUND_SYS;

int eff_use_size_tbl[0] = {
};

static SOUND_SYS snd_sys;
static int effect_mode[2];
static int effect_adrs[2];

int sndGetNeedSize(EEIOP_DEF *def) {
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = SndBankGetOneWrkSize();
  iVar1 = def->snd_bank_wrk_num;
  iVar4 = StreamAutoGetOneWrkSize();
  iVar2 = def->stream_auto_wrk_num;
  iVar5 = snd_utilGetOneWrkSize();
  return iVar1 * iVar3 + iVar2 * iVar4 + def->auto_bd_wrk_num * iVar5;
}

void* SndInit(EEIOP_DEF *def, void *buffer) {
	int i;
	
  void *pvVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  void *local_48;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  int type;
  
  SPUMemoryInit();
  InitSPUVoice();
  local_50 = 0x800;
  if (def->media != 2) {
    local_50 = 0;
  }
  local_4c = 0x3fff;
  local_48 = GetSPUMemory(0x10);
  iopCommandRegister(REQ_IOP_SND_INIT,(char *)&local_50,0xc);
  Snd3DInit();
  SndBufInit();
  SndStreamInit(def->snd_stream_load_priority);
  SndPCMStreamInit();
  pvVar1 = SndBankInitAll(buffer,def->snd_bank_wrk_num,def->snd_bank_load_priority);
  pvVar1 = StreamAutoPlayInit(pvVar1,def->stream_auto_wrk_num);
  pvVar1 = snd_utilAutoBDInit(pvVar1,def->auto_bd_wrk_num);
  local_30 = 0x2fff;
  snd_sys.mono = '\0';
  local_2e = 0x2fff;
  local_34 = 3;
  local_38 = 0;
  local_40 = 0;
  effect_adrs[0] = (int)GetSPUEffectMemory(DAT_0035e9a4);
  local_3c = (void *)effect_adrs[0];
  iopCommandRegister(REQ_SET_SND_EFFECT,(char *)&local_40,0x1c);
  type = 0;
  do {
    iVar2 = type + 1;
    SndSetGroupVolume(type,0x100);
    type = iVar2;
  } while (iVar2 < 5);
  ee_iopMain();
  ee_iopMain();
  return pvVar1;
}

void SndInitAfter_ee_iopInit() {
  return;
}

void SndMain() {
  Snd3DMain();
  StreamAutoPlayMain();
  snd_utilAutoBDMain();
  SndStreamMain();
  SndPCMStreamMain();
  SndBufPlayMain();
  return;
}

void SndFremaAfterMain() {
  return;
}

void SndSetEffect(int core, int eff_vol, int mode) {
	SET_SND_EFFECT eff;
	
  ushort uVar1;
  _SET_SND_EFFECT eff;
  
  if (0x7fff < (uint)eff_vol) {
    printf("Set effect Volume is Illegal 0~%d\n");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = (ushort)eff_vol;
  eff.core = core;
  eff.r_attr.core = core;
  eff.r_attr.mode = mode;
  eff.r_attr.depth_L = uVar1;
  eff.r_attr.depth_R = uVar1;
  if (mode == effect_mode[core]) {
    iopCommandRegister(REQ_SET_SND_EFFECT,(char *)&eff,0x1c);
  }
  else {
    ReleaseSPUEffectMemory((void *)effect_adrs[core]);
    eff.end_adrs = (int)GetSPUEffectMemory(*(int *)(&eff_use_size_tbl + mode * 4));
    effect_adrs[core] = eff.end_adrs;
    iopCommandRegister(REQ_SET_SND_EFFECT,(char *)&eff,0x1c);
  }
  effect_mode[core] = mode;
  return;
}

void SndSetStereo() {
  snd_sys.mono = '\0';
  return;
}

void SndSetMono() {
  snd_sys.mono = '\x01';
  return;
}

int SndIsMono() {
  return (int)snd_sys.mono;
}

void SndSetGroupVolume(int type, int vol) {
  if (4 < type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndSetGroupVolume() Illegal Voice Type");
  }
  if ((uint)vol < 0x101) {
    snd_sys.type_vol[type] = vol;
    return;
  }
  printf("SndSetGroupVolume() Illegal Voice Volume 0x0~%d\n");
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

int SndGetGroupVolume(int type) {
  if (4 < type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndGetGroupVolume() Illegal Voice Type");
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  return snd_sys.type_vol[type];
}

void SndCalcValue(int vol, int pan, int bvol, int pitch, int bpitch, int type, void *s3d, VOLSET *volset, short int *pPitch, float play_speed) {
	short int *pPitch;
	
  ushort uVar1;
  int iVar2;
  _VOLSET local_60 [4];
  
  iVar2 = SndGetGroupVolume(type);
  iVar2 = (vol * bvol >> 7) * iVar2 >> 8;
  volset->l = (ushort)(iVar2 * (0x80 - pan) >> 7);
  volset->r = (ushort)(iVar2 * pan >> 7);
  if (s3d == (void *)0x0) {
    *pPitch = (ushort)bpitch;
  }
  else {
    Snd3DGetVal(s3d,local_60,pPitch);
    volset->l = (ushort)((int)(short)volset->l * (int)(short)local_60[0].l >> 0xe);
    volset->r = (ushort)((int)(short)volset->r * (int)(short)local_60[0].r >> 0xe);
    *pPitch = (ushort)(bpitch * (short)*pPitch >> 0xc);
  }
  uVar1 = (ushort)(int)((float)(pitch * (short)*pPitch * 0x10 >> 0x10) * play_speed);
  *pPitch = uVar1;
  if (0x3fff < (short)uVar1) {
    printf("SndCalcValue pitch is over max\n");
  }
  iVar2 = SndIsMono();
  if (iVar2 != 0) {
    uVar1 = (ushort)((int)(short)volset->r + (int)(short)volset->l >> 1);
    volset->r = uVar1;
    volset->l = uVar1;
  }
  return;
}

short int SndGetFrameAddVol(int target, int now, int time) {
	int diff;
	int frame;
	int absdiff;
	
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = target - now;
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = -iVar3;
  }
  uVar1 = (ushort)((uint)(iVar3 * 0x10000) >> 0x10);
  if ((time <= iVar2) && (time != 0)) {
    if (time == 0) {
      trap(7);
    }
    uVar1 = (ushort)(iVar3 / time);
  }
  return uVar1;
}

int SndAddFadeVol(int vol, int target_vol, int spd) {
	int new_vol;
	
  if ((spd != 0) && (0 < (target_vol - vol) * (target_vol - (vol + spd)))) {
    target_vol = vol + spd;
  }
  return target_vol;
}

void SndAllStop() {
  SndBufAllStop();
  SndStreamAllStop();
  return;
}

int GetFreeVoiceNum() {
	int voice[25];
	int iRetNum;
	int iNum;
	int i;
	int j;
	
  int iVar1;
  int voice_no;
  int *piVar2;
  int iVar3;
  int core;
  int iVar4;
  int voice [25];
  
  core = 0;
  iVar4 = 0;
  do {
    iVar3 = 0;
    piVar2 = voice;
    while( true ) {
      iVar1 = GetSPUVoiceCore(core);
      *piVar2 = iVar1;
      piVar2 = piVar2 + 1;
      if (iVar1 == -1) break;
      iVar3 = iVar3 + 1;
    }
    piVar2 = voice;
    iVar1 = iVar3;
    voice_no = voice[0];
    if (0 < iVar3) {
      while( true ) {
        piVar2 = piVar2 + 1;
        FreeSPUVoiceCore(core,voice_no);
        if (iVar1 + -1 == 0) break;
        iVar1 = iVar1 + -1;
        voice_no = *piVar2;
      }
    }
    core = core + 1;
    iVar4 = iVar4 + iVar3;
  } while (core < 2);
  return iVar4;
}

int IsExistFreeVoice() {
  int iVar1;
  
  iVar1 = GetFreeVoiceNum();
  return iVar1;
}
