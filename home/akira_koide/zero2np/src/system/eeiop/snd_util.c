// STATUS: NOT STARTED

#include "snd_util.h"

enum _AUTO_BD_MODE {
	AUTO_BD_MODE_NO_USE = 0,
	AUTO_BD_MODE_MEM_WAIT = 1,
	AUTO_BD_MODE_LOAD_WAIT = 2,
	AUTO_BD_MODE_PLAYEND_WAIT = 3
};

typedef _AUTO_BD_MODE AUTO_BD_MODE;

struct _AUTO_BD_WRK {
	int mode;
	int file_no;
	int header_file_no;
	int bank_no;
	int play_id;
	short int pitch;
	short int vol;
	sceVu0FVECTOR pos;
	sceVu0FVECTOR vel;
	sceVu0FVECTOR dir;
	int in_time;
	unsigned int s3d : 1;
	unsigned int effect : 1;
	unsigned int loop : 1;
	unsigned int use : 1;
	unsigned int start : 1;
	unsigned int playing : 1;
	unsigned int end : 1;
	unsigned int resume : 1;
	unsigned int pause : 1;
};

typedef _AUTO_BD_WRK AUTO_BD_WRK;
static AUTO_BD_WRK *auto_bd_wrk;
static int auto_bd_wrk_max;

int snd_utilGetOneWrkSize() {
  return 0x60;
}

void* snd_utilAutoBDInit(void *buffer, int num) {
	int i;
	void *ret;
	
  int iVar1;
  int iVar2;
  _AUTO_BD_WRK *p_Var3;
  
  auto_bd_wrk = (_AUTO_BD_WRK *)buffer;
  auto_bd_wrk_max = num;
  iVar1 = snd_utilGetOneWrkSize();
  iVar2 = auto_bd_wrk_max;
  p_Var3 = auto_bd_wrk;
  if (0 < auto_bd_wrk_max) {
    do {
      iVar2 = iVar2 + -1;
      p_Var3->mode = 0;
      p_Var3 = p_Var3 + 1;
    } while (iVar2 != 0);
  }
  return (void *)(iVar1 * num + (int)buffer);
}

AUTO_BD_ERR snd_utilAutoRelease(int snd_buf_id, int bank_id) {
	int wrk_no;
	int i;
	
  int iVar1;
  int iVar2;
  _AUTO_BD_WRK *p_Var3;
  
  iVar2 = 0;
  if (auto_bd_wrk_max < 1) {
LAB_002761ac:
    iVar2 = -1;
  }
  else {
    iVar1 = auto_bd_wrk->mode;
    p_Var3 = auto_bd_wrk;
    while (p_Var3 = p_Var3 + 1, iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (auto_bd_wrk_max <= iVar2) goto LAB_002761ac;
      iVar1 = p_Var3->mode;
    }
  }
  if (iVar2 < 0) {
    return AUTO_BD_ERR_NO_WRK;
  }
  p_Var3 = auto_bd_wrk + iVar2;
  p_Var3->bank_no = bank_id;
  p_Var3->mode = 3;
  p_Var3->play_id = snd_buf_id;
  return AUTO_BD_ERR_OK;
}

AUTO_BD_ERR snd_utilAutoBDPlay(int file_no, int header_file_no, int effect, int loop, int vol, int pitch, int in_time, SND_3D_SET *s3s) {
	int wrk_no;
	int i;
	
  float (*pafVar1) [4];
  _AUTO_BD_ERR__11_3668 _Var2;
  int iVar3;
  _AUTO_BD_WRK *p_Var4;
  _AUTO_BD_WRK *p_Var5;
  int iVar6;
  
  p_Var5 = auto_bd_wrk;
  iVar6 = 0;
  if (auto_bd_wrk_max < 1) {
LAB_0027626c:
    iVar6 = -1;
  }
  else {
    iVar3 = auto_bd_wrk->mode;
    p_Var4 = auto_bd_wrk;
    while (p_Var4 = p_Var4 + 1, iVar3 != 0) {
      iVar6 = iVar6 + 1;
      if (auto_bd_wrk_max <= iVar6) goto LAB_0027626c;
      iVar3 = p_Var4->mode;
    }
  }
  if (iVar6 < 0) {
    _Var2 = AUTO_BD_ERR_NO_WRK;
  }
  else {
    p_Var4 = auto_bd_wrk + iVar6;
    auto_bd_wrk[iVar6].vol = (ushort)vol;
    *(ulong *)&p_Var5[iVar6].in_time =
         *(ulong *)&p_Var4->in_time & 0xfffffff9ffffffff | ((ulong)(uint)effect & 1) << 0x21 |
         ((ulong)(uint)loop & 1) << 0x22;
    p_Var5[iVar6].pitch = (ushort)pitch;
    p_Var5[iVar6].in_time = in_time;
    if (s3s == (_SND_3D_SET *)0x0) {
      *(ulong *)&p_Var5[iVar6].in_time = *(ulong *)&p_Var5[iVar6].in_time & 0xfffffffeffffffff;
    }
    else {
      pafVar1 = s3s->pos;
      *(ulong *)&p_Var5[iVar6].in_time = *(ulong *)&p_Var5[iVar6].in_time | 0x100000000;
      sceVu0CopyVector(p_Var5[iVar6].pos,pafVar1);
      if (s3s->vel == (float (*) [4])0x0) {
        pafVar1 = s3s->dir;
      }
      else {
        sceVu0CopyVector(auto_bd_wrk[iVar6].vel);
        pafVar1 = s3s->dir;
      }
      if (pafVar1 != (float (*) [4])0x0) {
        sceVu0CopyVector(auto_bd_wrk[iVar6].dir);
      }
    }
    iVar3 = SndBankNew(file_no,header_file_no,-1);
    p_Var5 = auto_bd_wrk + iVar6;
    p_Var5->mode = 2;
    p_Var5->bank_no = iVar3;
    _Var2 = AUTO_BD_ERR_OK;
  }
  return _Var2;
}

void snd_utilAutoBDMain() {
	int i;
	SND_3D_SET *ptr;
	SOUND_INFO *info;
	int num;
	
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  _SND_3D_SET *s3s;
  int iVar7;
  _SND_3D_SET local_70;
  int num;
  _SOUND_INFO *info;
  
  iVar7 = 0;
  if (0 < auto_bd_wrk_max) {
    iVar6 = 0;
    iVar2 = auto_bd_wrk_max;
    do {
      piVar5 = (int *)((int)auto_bd_wrk->pos + iVar6 + -0x20);
      iVar3 = *piVar5;
      if (iVar3 == 2) {
        iVar3 = SndBankIsReady(piVar5[3]);
        iVar2 = auto_bd_wrk_max;
        if (iVar3 != 0) {
          SndBankGetInfo(*(int *)((int)auto_bd_wrk->pos + iVar6 + -0x14),&num,&info);
          if (1 < num) {
            printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
            PrintWarningReal("snd_utilAutoBDMain() BD Num is %d over 1");
          }
          s3s = (_SND_3D_SET *)0x0;
          if ((*(uint *)((int)auto_bd_wrk->dir + iVar6 + 0x14) & 1) != 0) {
            memset(&local_70,0,0xc);
            local_70.dir = (float (*) [4])((int)auto_bd_wrk->dir + iVar6);
            local_70.pos = (float (*) [4])((int)auto_bd_wrk->pos + iVar6);
            local_70.vel = (float (*) [4])((int)auto_bd_wrk->vel + iVar6);
            s3s = &local_70;
          }
          iVar2 = SndBankIsLoopSnd(*(int *)((int)auto_bd_wrk->pos + iVar6 + -0x14),0);
          if (iVar2 != 0) {
            SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
            PrintAssertReal("snd_utilAutoBDMain Not Use Loop Snd");
            goto LAB_002765bc;
          }
          uVar1 = (uint)((ulong)*(undefined8 *)((int)auto_bd_wrk->dir + iVar6 + 0x10) >> 0x20);
          iVar3 = SndBankPlay(*(int *)((int)auto_bd_wrk->pos + iVar6 + -0x14),0,uVar1 >> 1 & 1,
                              uVar1 >> 2 & 1,(int)*(short *)((int)auto_bd_wrk->pos + iVar6 + -10),
                              (int)*(short *)((int)auto_bd_wrk->pos + iVar6 + -0xc),
                              *(int *)((int)auto_bd_wrk->dir + iVar6 + 0x10),s3s);
          iVar2 = auto_bd_wrk_max;
          puVar4 = (undefined4 *)((int)auto_bd_wrk->pos + iVar6 + -0x20);
          puVar4[4] = iVar3;
          *puVar4 = 3;
        }
      }
      else if (((2 < iVar3) && (iVar3 == 3)) &&
              (iVar3 = SndBufIsPlaying(piVar5[4]), iVar2 = auto_bd_wrk_max, iVar3 == 0)) {
LAB_002765bc:
        SndBankRelease(*(int *)((int)auto_bd_wrk->pos + iVar6 + -0x14));
        iVar2 = auto_bd_wrk_max;
        *(undefined4 *)((int)auto_bd_wrk->pos + iVar6 + -0x20) = 0;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x60;
    } while (iVar7 < iVar2);
  }
  return;
}

int GetVacantAutoBDWrk() {
	int i;
	
  int iVar1;
  _AUTO_BD_WRK *p_Var2;
  int iVar3;
  
  if (auto_bd_wrk_max < 1) {
LAB_00276664:
    iVar3 = -1;
  }
  else {
    iVar1 = auto_bd_wrk->mode;
    iVar3 = 0;
    p_Var2 = auto_bd_wrk;
    while( true ) {
      p_Var2 = p_Var2 + 1;
      if (iVar1 == 0) break;
      if (auto_bd_wrk_max <= iVar3 + 1) goto LAB_00276664;
      iVar1 = p_Var2->mode;
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}
