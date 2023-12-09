// STATUS: NOT STARTED

#include "play_data.h"

static PLAY_DATA_CTRL play_data;
static u_char play_timer;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c3420;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3910,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3918,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void PlayData_Init() {
  play_timer = '\0';
  memset(&play_data,0,0x20);
  return;
}

void PlayData_PlayTimeInit() {
  memset(&play_data,0,0xc);
  play_timer = '\0';
  play_data.total_score = 0;
  return;
}

void PlayData_PlayTimeCount() {
  bool bVar1;
  int iVar2;
  
  play_timer = play_timer + '\x01';
  if (((play_data.play_time.hour != 999) || (play_data.play_time.min != 0x3b)) ||
     (play_data.play_time.sec != 0x3b)) {
    iVar2 = GetPALMode__Fv();
    if (iVar2 == 0) {
      bVar1 = play_timer < 0x1e;
    }
    else {
      bVar1 = play_timer < 0x19;
    }
    if (bVar1) {
      return;
    }
    play_data.play_time.sec = play_data.play_time.sec + 1;
    if (0x3b < play_data.play_time.sec) {
      play_data.play_time.sec = 0;
      play_data.play_time.min = play_data.play_time.min + 1;
      if (0x3b < play_data.play_time.min) {
        play_data.play_time.min = 0;
        play_data.play_time.hour = play_data.play_time.hour + 1;
        if (999 < play_data.play_time.hour) {
          play_data.play_time.hour = 0;
        }
      }
    }
  }
  play_timer = '\0';
  return;
}

void PlayData_ScoreCount(int score) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 95,
		/* [9] = */ 83,
		/* [10] = */ 99,
		/* [11] = */ 111,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 67,
		/* [15] = */ 111,
		/* [16] = */ 117,
		/* [17] = */ 110,
		/* [18] = */ 116,
		/* [19] = */ 0
	};
	
  play_data.score = play_data.score + score;
  if (0xf423e < play_data.score) {
    play_data.score = 999999;
  }
  if (0 < score) {
    PlayData_TotalScoreCount__Fi(score);
  }
  if (play_data.score < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void PlayData_TotalScoreCount(int score) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 97,
		/* [3] = */ 121,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 95,
		/* [9] = */ 84,
		/* [10] = */ 111,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 108,
		/* [14] = */ 83,
		/* [15] = */ 99,
		/* [16] = */ 111,
		/* [17] = */ 114,
		/* [18] = */ 101,
		/* [19] = */ 67,
		/* [20] = */ 111,
		/* [21] = */ 117,
		/* [22] = */ 110,
		/* [23] = */ 116,
		/* [24] = */ 0
	};
	
  if ((0 < score) &&
     (play_data.total_score = play_data.total_score + score, 0xf423e < play_data.total_score)) {
    play_data.total_score = 999999;
  }
  if (play_data.total_score < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

void SetPlayData_Score(int score) {
  play_data.score = score;
  if (0xf423e < score) {
    play_data.score = 999999;
  }
  if (play_data.score < 0) {
    play_data.score = 0;
  }
  return;
}

void PlayData_PhotoNumCount() {
  play_data.photo_num = play_data.photo_num + 1;
  if (99999 < play_data.photo_num) {
    play_data.photo_num = 99999;
  }
  return;
}

void PlayData_BusterNumCount() {
  play_data.buster_num = play_data.buster_num + 1;
  if (9999 < play_data.buster_num) {
    play_data.buster_num = 9999;
  }
  return;
}

void PlayData_MaxScoreUpdate(int score) {
  if ((play_data.max_score < score) && (play_data.max_score = score, 99999 < score)) {
    play_data.max_score = 99999;
  }
  return;
}

TIME_INFO GetPlayTime() {
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  iVar5 = play_data.play_time.sec;
  uVar4 = play_data.play_time._0_8_;
  puVar1 = (undefined *)((int)&__return_storage_ptr__->min + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)play_data.play_time._0_8_ >> (7 - uVar2) * 8;
  uVar2 = (uint)__return_storage_ptr__ & 7;
  *(ulong *)((int)__return_storage_ptr__ - uVar2) =
       uVar4 << uVar2 * 8 |
       *(ulong *)((int)__return_storage_ptr__ - uVar2) & 0xffffffffffffffffU >> (8 - uVar2) * 8;
  __return_storage_ptr__->sec = iVar5;
  return __return_storage_ptr__;
}

int GetPlayData_Score() {
  return play_data.score;
}

int GetPlayData_TotalScore() {
  return play_data.total_score;
}

int GetPhotoNum() {
  return play_data.photo_num;
}

int GetBusterGhostNum() {
  return play_data.buster_num;
}

int GetMaxScore() {
  return play_data.max_score;
}

void GetSystemTime(DATE_INFO *date) {
	sceCdCLOCK rtc;
	
  sceCdCLOCK rtc;
  
  sceCdReadClock(&rtc);
  SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(date,&rtc);
  return;
}

void SetDateInfoType(DATE_INFO *date, sceCdCLOCK *rtc) {
  uint uVar1;
  
  uVar1 = Bcd2Int__Fc(rtc->year);
  (date->day).year = uVar1;
  uVar1 = Bcd2Int__Fc(rtc->month);
  (date->day).month = uVar1;
  uVar1 = Bcd2Int__Fc(rtc->day);
  (date->day).day = uVar1;
  uVar1 = Bcd2Int__Fc(rtc->hour);
  (date->time).hour = uVar1;
  uVar1 = Bcd2Int__Fc(rtc->minute);
  (date->time).min = uVar1;
  uVar1 = Bcd2Int__Fc(rtc->second);
  (date->time).sec = uVar1;
  return;
}

u_int Bcd2Int(char bcd) {
	u_int work;
	
  return (uint)((byte)bcd >> 4) * 10 + ((int)bcd & 0xfU);
}

void SetSave_PlayData(MC_SAVE_DATA *data) {
  data->size = 0x20;
  data->addr = (uchar *)&play_data;
  return;
}

void SetSave_PlayTimer(MC_SAVE_DATA *data) {
  data->addr = &play_timer;
  data->size = 1;
  return;
}

void DebugSetPlayScoreMaxNum() {
  play_data.max_score = 99999;
  play_data.total_score = 999999;
  play_data.buster_num = 9999;
  play_data.score = 999999;
  play_data.photo_num = 99999;
  return;
}
