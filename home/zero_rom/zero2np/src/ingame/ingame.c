// STATUS: NOT STARTED

#include "ingame.h"

typedef struct {
	short unsigned int mission : 1;
} PHASE_CANGE_REQ_OUTGAME;

struct _PHASE_CHANGE_REQS {
	short unsigned int event_load : 1;
	short unsigned int game_over : 1;
	short unsigned int game_over_pre : 1;
	short unsigned int ending_normal : 1;
	short unsigned int ending_hard : 1;
	short unsigned int plyr_damage : 1;
	short unsigned int plyr_door : 1;
	short unsigned int pause : 1;
	short unsigned int menu : 1;
	short unsigned int map : 1;
	short unsigned int dbg_menu : 1;
	short unsigned int ene_dead : 1;
	short unsigned int photo : 1;
	short unsigned int movie_room_menu : 1;
	short int scene_no;
	short int effect_mode_time;
	short int event_stop_cnt;
};

typedef _PHASE_CHANGE_REQS PHASE_CHANGE_REQS;

INGAME_WRK ingame_wrk = {
	/* .mChapterNo = */ {
		/* .mValue = */ 0
	},
	/* .mDifficulty = */ {
		/* .mValue = */ 0
	},
	/* .mClearCnt = */ {
		/* .mValue = */ 0
	},
	/* .clear_save_flg = */ 0,
	/* .mMenuLockCnt = */ 0,
	/* .mPauseLockCnt = */ 0
};

CMovieRoom movie_room = {
	/* .mActFlg = */ BITFIELD,
	/* .mPreloadFlg = */ BITFIELD,
	/* .mSndId = */ 0,
	/* .mBankNo = */ 0,
	/* .ing_rsrcs = */ {
		/* .mpegBuff = */ NULL,
		/* .mpegBuffSize = */ 0,
		/* .rgb32 = */ NULL,
		/* .path3tag = */ NULL,
		/* .demuxBuff = */ NULL,
		/* .demuxBuffSize = */ 0,
		/* .audioBuff = */ NULL,
		/* .audioBuffSize = */ 0,
		/* .iopBuff = */ 0,
		/* .iopBuffSize = */ 0,
		/* .zeroBuff = */ NULL,
		/* .iopZeroBuff = */ 0,
		/* .read_buf = */ NULL,
		/* .audio_vol_percent = */ 0,
		/* .auto_dma_core = */ 0
	},
	/* .mpaVec = */ NULL
};

CFEneEntry fene_entry = {
	/* .mAreaLockFlg = */ {
		/* .flag_32 = */ {
			/* [0] = */ 0,
			/* [1] = */ 0,
			/* [2] = */ 0
		}
	},
	/* .mMode = */ 0,
	/* .mApparType = */ 0,
	/* .mNowAreaNo = */ 0,
	/* .mLockCnt = */ 0,
	/* .mCamChangeFlg = */ BITFIELD,
	/* .mMultiEnemyDisable = */ BITFIELD,
	/* .mpFD = */ NULL,
	/* .mWaitCnt = */ {
		/* .mValue = */ 0
	},
	/* .mWaitSave = */ 0
};

int iPauseLockTimer = 0;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static int before_game_load_wait;
static int load_game_step;
static PHASE_CHANGE_REQS phase_change_reqs;
static PHASE_CANGE_REQ_OUTGAME OutPhaseChangeFlg;
static int story_effect_time;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b9110;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1540,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1548,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void INGAME_WRK::Init() {
  this->mPauseLockCnt = 0;
  this->mMenuLockCnt = 0;
  return;
}

void INGAME_WRK::MenuLock() {
  this->mMenuLockCnt = this->mMenuLockCnt + 1;
  return;
}

void INGAME_WRK::MenuUnlock() {
	static char __FUNCTION__[11] = {
		/* [0] = */ 77,
		/* [1] = */ 101,
		/* [2] = */ 110,
		/* [3] = */ 117,
		/* [4] = */ 85,
		/* [5] = */ 110,
		/* [6] = */ 108,
		/* [7] = */ 111,
		/* [8] = */ 99,
		/* [9] = */ 107,
		/* [10] = */ 0
	};
	
  int iVar1;
  
  iVar1 = this->mMenuLockCnt + -1;
  this->mMenuLockCnt = iVar1;
  if (iVar1 < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

int INGAME_WRK::MenuIsLocked() {
  return this->mMenuLockCnt;
}

void INGAME_WRK::PauseLock() {
  this->mPauseLockCnt = this->mPauseLockCnt + 1;
  return;
}

void INGAME_WRK::PauseUnlock() {
	static char __FUNCTION__[12] = {
		/* [0] = */ 80,
		/* [1] = */ 97,
		/* [2] = */ 117,
		/* [3] = */ 115,
		/* [4] = */ 101,
		/* [5] = */ 85,
		/* [6] = */ 110,
		/* [7] = */ 108,
		/* [8] = */ 111,
		/* [9] = */ 99,
		/* [10] = */ 107,
		/* [11] = */ 0
	};
	
  int iVar1;
  
  iVar1 = this->mPauseLockCnt + -1;
  this->mPauseLockCnt = iVar1;
  if (iVar1 < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

int INGAME_WRK::PauseIsLocked() {
  return this->mPauseLockCnt;
}

void IngameSceneReq(int scene_no) {
  phase_change_reqs.scene_no = (ushort)scene_no;
  return;
}

void IngameEventMsgDispReq(int flg) {
  if (flg == 0) {
    phase_change_reqs.event_stop_cnt = phase_change_reqs.event_stop_cnt - 1;
  }
  else {
    phase_change_reqs.event_stop_cnt = phase_change_reqs.event_stop_cnt + 1;
  }
  if (300 < (short)phase_change_reqs.event_stop_cnt) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Event Stop Cnt Is Over 300");
    return;
  }
  if ((short)phase_change_reqs.event_stop_cnt < 0) {
    phase_change_reqs.event_stop_cnt = 0;
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Event Stop Cnt Is Under 0");
  }
  return;
}

void IngameEventFileDispReq(int flg) {
  if (flg == 0) {
    phase_change_reqs.event_stop_cnt = phase_change_reqs.event_stop_cnt - 1;
  }
  else {
    phase_change_reqs.event_stop_cnt = phase_change_reqs.event_stop_cnt + 1;
  }
  if (300 < (short)phase_change_reqs.event_stop_cnt) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Event Stop Cnt Is Over 300");
    return;
  }
  if ((short)phase_change_reqs.event_stop_cnt < 0) {
    phase_change_reqs.event_stop_cnt = 0;
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Event Stop Cnt Is Under 0");
  }
  return;
}

void SendIngameGameOver(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfffd | (ushort)((flg & 1U) << 1);
  return;
}

void SendIngameGameOverPre(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfffb | (ushort)((flg & 1U) << 2);
  return;
}

void SendIngameEndingNormal(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfff7 | (ushort)((flg & 1U) << 3);
  return;
}

void SendIngameEndingHard(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xffef | (ushort)((flg & 1U) << 4);
  return;
}

void SetIngameDamageMode(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xffdf | (ushort)((flg & 1U) << 5);
  return;
}

void SetIngameDoorMode(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xffbf | (ushort)((flg & 1U) << 6);
  return;
}

void SendIngameEventLoadEndFlg(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfffe | (ushort)flg & 1;
  return;
}

void SetIngameEventModeFlg(int flg) {
  return;
}

void SetIngameEffectModeTime(int time) {
  phase_change_reqs.effect_mode_time = (ushort)time;
  return;
}

void SetIngameMenuMode(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfeff | (ushort)((flg & 1U) << 8);
  return;
}

void SetIngameMapMode(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfdff | (ushort)((flg & 1U) << 9);
  return;
}

void SetIngamePauseMode(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xff7f | (ushort)((flg & 1U) << 7);
  return;
}

void SetIngameDbgMenu(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xfbff | (ushort)((flg & 1U) << 10);
  return;
}

void SetIngameEneDead(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xf7ff | (ushort)((flg & 1U) << 0xb);
  return;
}

void SetIngamePhoto(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xefff | (ushort)((flg & 1U) << 0xc);
  return;
}

void SetIngameMovieRoomMenu(int flg) {
  phase_change_reqs._0_2_ = phase_change_reqs._0_2_ & 0xdfff | (ushort)((flg & 1U) << 0xd);
  return;
}

void SetIngameMission(int flg) {
  OutPhaseChangeFlg =
       (PHASE_CANGE_REQ_OUTGAME)((ushort)OutPhaseChangeFlg & 0xfffe | (ushort)flg & 1);
  return;
}

int CheckIngameMission() {
  return (ushort)OutPhaseChangeFlg & 1;
}

void ResetOutReqFlg() {
  OutPhaseChangeFlg = (PHASE_CANGE_REQ_OUTGAME)0x0;
  return;
}

GPHASE_ID_ENUM IngameDecideNextPhase() {
  GPHASE_ID_ENUM GVar1;
  
  if ((phase_change_reqs._0_2_ & 4) == 0) {
    if ((phase_change_reqs._0_2_ & 2) == 0) {
      if ((phase_change_reqs._0_2_ & 8) == 0) {
        GVar1 = GID_ENDING_HARD;
        if ((phase_change_reqs._0_2_ & 0x10) == 0) {
          if (phase_change_reqs.scene_no != 0xffff) {
            GVar1 = IngameSceneInit__Fi((int)(short)phase_change_reqs.scene_no);
            return GVar1;
          }
          GVar1 = GID_EVENTMSG_DISP;
          if ((((phase_change_reqs.event_stop_cnt == 0) &&
               (GVar1 = GID_STORY_ENE_DEAD, (phase_change_reqs._0_2_ & 0x800) == 0)) &&
              (GVar1 = GID_STORY_MENU, (phase_change_reqs._0_2_ & 0x100) == 0)) &&
             (GVar1 = GID_STORY_MAP, (phase_change_reqs._0_2_ & 0x200) == 0)) {
            if ((phase_change_reqs._0_2_ & 0x80) == 0) {
              GVar1 = GID_STORY_DAMAGE;
              if (((((phase_change_reqs._0_2_ & 0x20) == 0) &&
                   (GVar1 = GID_STORY_DOOR_OPEN, (phase_change_reqs._0_2_ & 0x40) == 0)) &&
                  ((GVar1 = GID_STORY_EFFECT, (short)phase_change_reqs.effect_mode_time < 0 &&
                   ((GVar1 = GID_STORY_PHOTO, (phase_change_reqs._0_2_ & 0x1000) == 0 &&
                    (GVar1 = GID_STORY_MOVIE_ROOM_SEL, (phase_change_reqs._0_2_ & 0x2000) == 0))))))
                 && (GVar1 = GID_STORY_DEBUG, (phase_change_reqs._0_2_ & 0x400) == 0)) {
                GVar1 = GID_STORY_NORMAL;
              }
            }
            else {
              GVar1 = GID_STORY_PAUSE_MISSION;
              if (((ushort)OutPhaseChangeFlg & 1) == 0) {
                GVar1 = GID_STORY_PAUSE;
              }
            }
          }
        }
      }
      else if (((ushort)OutPhaseChangeFlg & 1) == 0) {
        GVar1 = GID_ENDING_NORMAL1;
      }
      else {
        SendIngameEndingNormal__Fi(0);
        GVar1 = GID_STORY_MISSION_RESULT;
      }
    }
    else if (((ushort)OutPhaseChangeFlg & 1) == 0) {
      GVar1 = GID_STORY_GAME_OVER;
    }
    else {
      MisSetClearType__Fi(0);
      GVar1 = GID_STORY_MISSION_RESULT;
    }
  }
  else if (((ushort)OutPhaseChangeFlg & 1) == 0) {
    GVar1 = GID_STORY_GAME_OVER_PRE;
  }
  else {
    MisDispDeleteFlg__Fi(3);
    GVar1 = GID_STORY_GAME_OVER_PRE;
  }
  return GVar1;
}

void init_Story_NowLoading() {
  StreamAutoAllStop();
  LoadingCtrlInit__Fv();
  return;
}

GPHASE_ENUM pre_Story_NowLoading(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_NowLoading(GPHASE_ENUM result) {
  LoadingCtrlMain__Fv();
  LoadingDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Story_NowLoading() {
  TitleMemFree__Fv();
  ReleaseTecmoLogoTexMem__Fv();
  ReleaseProjectLogoTexMem__Fv();
  ReleaseLoadingTexMem__Fv();
  return;
}

void init_Story_Load_Mission() {
  before_game_load_wait = 0;
  return;
}

void end_Story_Load_Mission() {
  return;
}

GPHASE_ENUM one_Story_Load_Mission(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = InitBeforeGame__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_EVENT);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Load_Mission_Save() {
  load_game_step = 0;
  before_game_load_wait = 0;
  return;
}

void end_Story_Load_Mission_Save() {
  return;
}

GPHASE_ENUM one_Story_Load_Mission_Save(GPHASE_ENUM dummy) {
  int iVar1;
  
  if (ingame_wrk.clear_save_flg == '\0') {
    if (load_game_step != 0) {
      if (load_game_step != 1) {
        return GPHASE_CONTINUE;
      }
      iVar1 = MapLoadMain__Fv();
      if (iVar1 != 0) {
        return GPHASE_CONTINUE;
      }
      printf("**************Load End!!***************\n");
      EventMacroLoadInit__Fv();
      FadeInReq__FUcUcUcUi('\0','\0','\0',0);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
      return GPHASE_CONTINUE;
    }
    iVar1 = InitBeforeGame__Fv();
    if (iVar1 == 0) {
      return GPHASE_CONTINUE;
    }
    iVar1 = GetPlyrAreaNo__Fv();
    ev_seChangeRoom__Fi(iVar1);
    iVar1 = GetPlyrAreaNo__Fv();
    ev_sisChangeRoom__Fi(iVar1);
    iVar1 = GetPlyrAreaNo__Fv();
    ev_eneChangeRoom__Fi(iVar1);
    iVar1 = GetPlyrAreaNo__Fv();
    MapLoadInit__Fi(iVar1);
    map_reverbAfterMCLoadInit__Fv();
  }
  else {
    if (load_game_step != 0) {
      if (load_game_step != 1) {
        return GPHASE_CONTINUE;
      }
      iVar1 = InitBeforeGame__Fv();
      if (iVar1 == 0) {
        return GPHASE_CONTINUE;
      }
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_EVENT);
      ingame_wrk.clear_save_flg = '\0';
      return GPHASE_CONTINUE;
    }
    ClearBeforeGameInit__Fv();
  }
  load_game_step = 1;
  return GPHASE_CONTINUE;
}

void init_Story_Load_Mission_Event() {
  EventRootStart__Fv();
  SendIngameEventLoadEndFlg__Fi(0);
  return;
}

void end_Story_Load_Mission_Event() {
  return;
}

GPHASE_ENUM one_Story_Load_Mission_Event(GPHASE_ENUM dummy) {
  EventMain__Fv();
  if ((phase_change_reqs._0_2_ & 1) != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Main() {
  IngameSceneReq__Fi(-1);
  phase_change_reqs.event_stop_cnt = 0;
  SetIngameDamageMode__Fi(0);
  SetIngameDoorMode__Fi(0);
  SendIngameGameOver__Fi(0);
  SendIngameGameOverPre__Fi(0);
  SetIngameEffectModeTime__Fi(-1);
  SetIngameMenuMode__Fi(0);
  SetIngameMapMode__Fi(0);
  SetIngamePauseMode__Fi(0);
  SetIngameEventModeFlg__Fi(0);
  SetIngameEneDead__Fi(0);
  SetIngamePhoto__Fi(0);
  SetIngameMovieRoomMenu__Fi(0);
  SetIngameDbgMenu__Fi(0);
  return;
}

void end_Story_Main() {
  printf("ingame_end Release\n");
  map_bgmRelease__Fi(1);
  foot_seRelease__Fv();
  ev_seRelease__Fv();
  ev_sisRelease__Fv();
  ev_eneRelease__Fv();
  ReleasePlayer__Fv();
  photo_datObjRelease__Fv();
  Release__12CNPlyrCamera(&m_plyr_camera);
  Clear__7OL_LOADi(&ol_load,0x12d);
  EvDisp2DEndRelease__Fv();
  EvChapterDispEndRelease__Fv();
  ReleasePlyrMdl__Fv();
  EffectReleaseButterflyModel__Fv();
  EffectSndEnd__Fv();
  EneAllRelease__Fv();
  MapDoorRelease__Fv();
  MapDrawDeleteRoomAll__Fv();
  EventEnd__Fv();
  movie_projecterStop__Fv();
  return;
}

GPHASE_ENUM pre_Story_Main(GPHASE_ENUM dummy) {
  release_typeClear__Fv();
  Main__7OL_LOAD(&ol_load);
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_Main(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void IngameCameraMain() {
  CameraMain__Fv();
  SetIngameListnerInfo__Fv();
  return;
}

void IngameDrawSub() {
  int iVar1;
  int floor;
  
  if ((phase_change_reqs._0_2_ & 0x400) == 0) {
    iVar1 = GetPlyrAreaNo__Fv();
    MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  }
  else {
    iVar1 = GetPlyrAreaNo__Fv();
    floor = GetPlyrFloor__Fv();
    MapFogDbProc__FiiPf(iVar1,floor,plyr_wrk.cmn_wrk.mbox.pos);
  }
  gra3dDraw__Fv();
  movie_projecterDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  EffectControl__Fi(7);
  BrightnessAdjustmentFilterDraw__Fv();
  EffectControl__Fi(8);
  Draw__12CNPlyrCamera(&m_plyr_camera);
  FadeMain__Fv();
  CallVibrate__Fv();
  EvDispMain__Fv();
  MisDispTimeProc__Fv();
  ScreenSaverDraw__Fv();
  return;
}

void init_Story_Normal() {
  StreamAutoAllRestart();
  SndBufAllRestart();
  return;
}

void end_Story_Normal() {
  return;
}

GPHASE_ENUM one_Story_Normal(GPHASE_ENUM dummy) {
	GPHASE_ID_ENUM next_gid;
	
  bool bVar1;
  int iVar2;
  uint uVar3;
  GPHASE_ID_ENUM id;
  GPHASE_ID_ENUM next_gid;
  
  movie_projecterWork__Fv();
  if (DebugCameraMenu.CameraDebugON == 0) {
    PlayerMainCmn__Fi(1);
    PlyrNormalCtrl__Fv();
  }
  photo_datObjMain__Fv();
  Work__10CFEneEntry(&fene_entry);
  SisterMain__Fv();
  if ((phase_change_reqs._0_2_ & 0x1000) == 0) {
    EnemyMain__Fv();
  }
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar2 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar2);
  IngameCameraMain__Fv();
  iVar2 = IsPlayerInBattle__Fv();
  if (iVar2 == 0) {
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,0);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ & 0xfffffffe;
  }
  else {
                    /* inlined from photo/n_plyr_camera.h */
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,1);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ | 1;
  }
                    /* end of inlined section */
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  RoomInCheckMain__Fv();
  EventMain__Fv();
  bVar1 = 10 < iPauseLockTimer;
  iPauseLockTimer = iPauseLockTimer + 1;
  if (bVar1) {
    iPauseLockTimer = 10;
  }
  iVar2 = InFinderMode__Fv();
  if ((((iVar2 == 0) && (iVar2 = MenuIsLocked__10INGAME_WRK(&ingame_wrk), iVar2 == 0)) &&
      (*paddat[5] == 1)) &&
     ((7 < *pushdat[5] && (uVar3 = mem_utilQueryTotalFreeSize__Fv(), 0x2a23ff < uVar3)))) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetIngameMenuMode__Fi(1);
  }
  else {
    iVar2 = PauseIsLocked__10INGAME_WRK(&ingame_wrk);
    if (((iVar2 == 0) && (9 < iPauseLockTimer)) &&
       ((*paddat[7] == 1 || (iVar2 = padIsConnected__Fi(0), iVar2 == 0)))) {
      SetIngamePauseMode__Fi(1);
    }
  }
  if (*key_now[13] == 1) {
    SetIngameDbgMenu__Fi(1);
  }
  id = IngameDecideNextPhase__Fv();
                    /* inlined from /usr/local/sce/ee/gcc/include/g++-3/stl_relops.h */
  if (id != GID_STORY_NORMAL) {
                    /* end of inlined section */
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  ItemDbg_PlyrItemLink__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  SubTitleMain__Fi(1);
  CheckEneDepth__Fv();
  if (((pad[1].now & 0x100U) != 0) && ((pad[1].one & 0x800U) != 0)) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_ENDING_NORMAL1);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Game_Over_Pre() {
  SetPlyrFinderQEnd__Fv();
  return;
}

void end_Story_Game_Over_Pre() {
  return;
}

GPHASE_ENUM one_Story_Game_Over_Pre(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM GVar2;
  
  movie_projecterWork__Fv();
  photo_datObjMain__Fv();
  PlayerMainCmn__Fi(1);
  PlyrNormalCtrl__Fv();
  SisterMain__Fv();
  EnemyMain__Fv();
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  iVar1 = IsPlayerInBattle__Fv();
                    /* end of inlined section */
  if (iVar1 == 0) {
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,0);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ & 0xfffffffe;
  }
  else {
                    /* inlined from photo/n_plyr_camera.h */
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,1);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ | 1;
  }
                    /* end of inlined section */
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  RoomInCheckMain__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  iVar1 = PlayerGameOver__Fv();
  if (iVar1 != 0) {
    SendIngameGameOverPre__Fi(0);
    SendIngameGameOver__Fi(1);
    GVar2 = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(GVar2);
  }
  iVar1 = SisterGameOver__Fv();
  if (iVar1 != 0) {
    SendIngameGameOverPre__Fi(0);
    SendIngameGameOver__Fi(1);
    GVar2 = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(GVar2);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Damage() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  m_plyr_camera.hp.mAlpha.mAdd = 0x20;
  m_plyr_camera.hp.mFadeWaitCnt.mValue = 0;
  return;
}

void end_Story_Damage() {
	short int WaitCnt;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (m_plyr_camera.hp.mFadeWaitCnt.mValue == 0) {
    m_plyr_camera.hp.mFadeWaitCnt.mValue = 0x8c;
  }
  return;
}

GPHASE_ENUM one_Story_Damage(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  if (DebugCameraMenu.CameraDebugON == 0) {
    PlayerMainCmn__Fi(0);
    PlyrMotionMovement__Fv();
  }
  iVar1 = PlyrDamageCtrl__Fv();
  if (iVar1 != 0) {
    SetIngameDamageMode__Fi(0);
  }
  SisterMain__Fv();
  EnemyMain__Fv();
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  iVar1 = IsPlayerInBattle__Fv();
                    /* end of inlined section */
  if (iVar1 == 0) {
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,0);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ & 0xfffffffe;
  }
  else {
                    /* inlined from photo/n_plyr_camera.h */
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,1);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ | 1;
  }
                    /* end of inlined section */
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  ItemDbg_PlyrItemLink__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  if ((phase_change_reqs._0_2_ & 0x20) == 0) {
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Door_Open() {
	float tv[4];
	
  float tv [4];
  
  memset(tv,0,0x10);
  tv[3] = 1.0;
  SetPlyrNeckFlg__Fi(0);
  plyr_wrk.spd[0] = 0.0;
  plyr_wrk.spd[2] = 0.0;
  plyr_wrk.spd[1] = 0.0;
  PlyrPosSet__FP8MOVE_BOXPf((MOVE_BOX *)&plyr_wrk,tv);
  movie_projecterStop__Fv();
  playerUseDoorLight__Fi(1);
  return;
}

void end_Story_Door_Open() {
  SetPlyrNeckFlg__Fi(1);
  return;
}

GPHASE_ENUM one_Story_Door_Open(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  if (DebugCameraMenu.CameraDebugON == 0) {
    PlayerMainCmn__Fi(1);
    iVar1 = GetPlyrDoorMoveFlg__Fv();
    if (iVar1 != 0) {
      PlyrMotionMovement__Fv();
    }
  }
  iVar1 = PlyrOpenDoor__Fv();
  if (iVar1 != 0) {
    SetIngameDoorMode__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  SisterMain__Fv();
  EnemyDoorMain__Fv();
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  EventMain__Fv();
  ItemDbg_PlyrItemLink__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  SubTitleMain__Fi(1);
  return GPHASE_CONTINUE;
}

void init_Story_Ene_Dead() {
  return;
}

void end_Story_Ene_Dead() {
  return;
}

GPHASE_ENUM one_Story_Ene_Dead(GPHASE_ENUM dummy) {
  GPHASE_ID_ENUM id;
  int iVar1;
  
  if (DebugCameraMenu.CameraDebugON == 0) {
    PlayerMainCmn__Fi(1);
  }
  EnemyMain__Fv();
  if ((phase_change_reqs._0_2_ & 0x800) == 0) {
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  ItemDbg_PlyrItemLink__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(iVar1,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  InitEffectsEF__Fv();
  EffectControl__Fi(5);
  EffectControl__Fi(7);
  BrightnessAdjustmentFilterDraw__Fv();
  EffectControl__Fi(8);
  FadeMain__Fv();
  CallVibrate__Fv();
  return GPHASE_CONTINUE;
}

void init_Story_Debug() {
  return;
}

void end_Story_Debug() {
  return;
}

GPHASE_ENUM one_Story_Debug(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  ItemDbg_PlyrItemLink__Fv();
  IngameDrawSub__Fv();
  iVar1 = DrawDbgMenu__Fv();
  if (iVar1 == 0) {
    if (DebugCameraMenu.CameraDebugON != 0) {
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_DEBUG_CAM);
    }
  }
  else {
    SetIngameDbgMenu__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Debug_Cam() {
  return;
}

void end_Story_Debug_Cam() {
  return;
}

GPHASE_ENUM one_Story_Debug_Cam(GPHASE_ENUM dummy) {
  int area_no;
  
  area_no = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(area_no);
  SetIngameListnerInfo__Fv();
  if (*key_now[13] == 1) {
    DebugCameraMenu.CameraDebugON = 0;
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_DEBUG);
  }
  IngameDrawSub__Fv();
  return GPHASE_CONTINUE;
}

void init_Story_Pause() {
  PauseInit__Fv();
  return;
}

void end_Story_Pause() {
  int iVar1;
  
  iPauseLockTimer = 0;
  iVar1 = movie_projecterIsReq__Fv();
  if (iVar1 == 0) {
    LocalCopyLtoL__Fiii(1,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x3aa0);
  }
  return;
}

GPHASE_ENUM one_Story_Pause(GPHASE_ENUM dummy) {
	int ret;
	
  int iVar1;
  GPHASE_ID_ENUM id;
  
  iVar1 = PauseMain__Fv();
  id = GID_TITLE_TOP;
  if (iVar1 != 2) {
    if (2 < iVar1) {
      if (iVar1 == 3) {
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_DEBUG);
      }
      goto LAB_001c9c50;
    }
    if (iVar1 != 1) goto LAB_001c9c50;
    SetIngamePauseMode__Fi(0);
    id = IngameDecideNextPhase__Fv();
  }
  SetNextGPhase__F14GPHASE_ID_ENUM(id);
LAB_001c9c50:
  PauseDispMain__Fv();
  return GPHASE_CONTINUE;
}

void IngameLoopSEPause() {
  PlyrSEStop__Fv();
  photo_datObjFadeOutSE__Fi(2);
  EffectSndAllPause__Fv();
  EvSoundPause__Fv();
  return;
}

void IngameLoopSERestart() {
  EffectSndAllRestart__Fv();
  EvSoundRestart__Fv();
  return;
}

void init_Story_Menu() {
  MenuIn__Fv();
  IngameLoopSEPause__Fv();
  return;
}

void end_Story_Menu() {
  MenuRelease__Fv();
  IngameLoopSERestart__Fv();
  LocalCopyLtoL__Fiii(1,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x3aa0);
  return;
}

GPHASE_ENUM one_Story_Menu(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  PlayData_PlayTimeCount__Fv();
  iVar1 = MenuMain__Fv();
  if (iVar1 != 0) {
    SetIngameMenuMode__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  MenuDispMain__Fv();
  return GPHASE_CONTINUE;
}

void init_Story_Map() {
  MapViewInit__Fv();
  return;
}

void end_Story_Map() {
  MenuRelease__Fv();
  LocalCopyLtoL__Fiii(1,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x3aa0);
  return;
}

GPHASE_ENUM one_Story_Map(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  PlayData_PlayTimeCount__Fv();
  iVar1 = MenuMain__Fv();
  if (iVar1 != 0) {
    SetIngameMapMode__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  MenuDispMain__Fv();
  return GPHASE_CONTINUE;
}

void init_Story_Mission_St() {
  init_Story_Normal__Fv();
  MisStInit__Fv();
  MisDispTimeInit__Fv();
  MisDispDeleteFlg__Fi(3);
  MapObjItemOff__Fv();
  return;
}

void end_Story_Mission_St() {
  MisDispSetFlg__Fi(3);
  MisStTerm__Fv();
  return;
}

GPHASE_ENUM one_Story_Mission_St(GPHASE_ENUM dummy) {
  int iVar1;
  
  if (DebugCameraMenu.CameraDebugON == 0) {
    PlayerMainCmn__Fi(1);
  }
  photo_datObjMain__Fv();
  Work__10CFEneEntry(&fene_entry);
  SisterMain__Fv();
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  PlayData_PlayTimeCount__Fv();
  RoomInCheckMain__Fv();
  EventMain__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  iVar1 = MisProc__Fv();
  if (iVar1 < 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_NORMAL);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Mission_Result() {
  MisDispDeleteFlg__Fi(3);
  MisEnInit__Fv();
  return;
}

void end_Story_Mission_Result() {
  MapObjItemOn__Fv();
  MisEnTerm__Fv();
  return;
}

GPHASE_ENUM one_Story_Mission_Result(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = MisProc__Fv();
  if (iVar1 < 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_MISSION_SEL);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Pause_Mission() {
  MisPauseInit__Fv();
  return;
}

void end_Story_Pause_Mission() {
  int iVar1;
  
  iPauseLockTimer = 0;
  iVar1 = movie_projecterIsReq__Fv();
  if (iVar1 == 0) {
    LocalCopyLtoL__Fiii(1,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x3aa0);
  }
  return;
}

GPHASE_ENUM one_Story_Pause_Mission(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = MisPauseMain__Fv();
  if (iVar1 == 0) {
    MisPauseDispMain__Fv();
  }
  return GPHASE_CONTINUE;
}

void init_Story_Game_Over() {
  EvDisp2DEndRelease__Fv();
  EvChapterDispEndRelease__Fv();
  StreamAutoAllStop();
  SndBufAllStopLoopSnd();
  return;
}

GPHASE_ENUM pre_Story_Game_Over(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_Game_Over(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Story_Game_Over() {
  SendIngameGameOver__Fi(0);
  return;
}

void init_Story_Effect() {
  story_effect_time = (int)(short)phase_change_reqs.effect_mode_time;
  return;
}

void end_Story_Effect() {
  return;
}

GPHASE_ENUM one_Story_Effect(GPHASE_ENUM dummy) {
  int area_no;
  GPHASE_ID_ENUM id;
  
  area_no = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(area_no);
  PlayData_PlayTimeCount__Fv();
  ItemDbg_PlyrItemLink__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  story_effect_time = story_effect_time + -1;
  if (story_effect_time < 1) {
    SetIngameEffectModeTime__Fi(-1);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Puzzle() {
  SoftResetLock__Fv();
  EnemyAnimLock__Fv();
  return;
}

GPHASE_ENUM pre_Story_Puzzle(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_Puzzle(GPHASE_ENUM result) {
  EnemyEffectPosUpdate__Fv();
  return GPHASE_CONTINUE;
}

void end_Story_Puzzle() {
  EnemyAnimUnlock__Fv();
  PuzzleRelease__Fv();
  SoftResetUnlock__Fv();
  return;
}

void init_Story_SavePoint() {
  int iVar1;
  
  SetPlyrAnime__FUcUc('\0','\n');
  SisterLock__Fv();
  iVar1 = IsSisWrk__Fv();
  if ((iVar1 != 0) && (iVar1 = GetSisStandAnm__Fv(), iVar1 != 0)) {
    SetSisterAnime__FUcUc('\0','\n');
  }
  SavePointBackGroundLoadReq__Fv();
  return;
}

GPHASE_ENUM pre_Story_SavePoint(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_SavePoint(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Story_SavePoint() {
  SavePointEnd__Fv();
  return;
}

void init_Story_Movie_Room() {
  return;
}

void end_Story_Movie_Room() {
  movie_projecterStop__Fv();
  return;
}

void init_Story_Movie_Room_Sel() {
  MovieRoomMenuInit__Fv();
  PlayerLock__Fv();
  return;
}

void end_Story_Movie_Room_Sel() {
  MovieRoomMenuEnd__Fv();
  PlayerUnlock__Fv();
  return;
}

void IngamePlyrNoActJob() {
  int iVar1;
  
  movie_projecterWork__Fv();
  PlayerMainCmn__Fi(1);
  photo_datObjMain__Fv();
  map_bgmMain__Fv();
  map_reverbMain__Fv();
  iVar1 = GetPlyrAreaNo__Fv();
  MhCtlMain__Fi(iVar1);
  IngameCameraMain__Fv();
  iVar1 = IsPlayerInBattle__Fv();
                    /* end of inlined section */
  if (iVar1 == 0) {
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,0);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ & 0xfffffffe;
  }
  else {
                    /* inlined from photo/n_plyr_camera.h */
    SetBattleFlg__14CNEquipTrayWrki(&m_plyr_camera.eq_tray,1);
    m_plyr_camera._364_4_ = m_plyr_camera._364_4_ | 1;
  }
                    /* end of inlined section */
  Main__12CNPlyrCamera(&m_plyr_camera);
  PlayData_PlayTimeCount__Fv();
  RoomInCheckMain__Fv();
  EventMain__Fv();
  EnemyMotionWork__Fv();
  sis_mdlMotionWork__Fv();
  plyr_mdlMotionWork__Fv();
  IgEffectMain__Fv();
  IngameDrawSub__Fv();
  return;
}

GPHASE_ENUM one_Story_Movie_Room_Sel(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  IngamePlyrNoActJob__Fv();
  iVar1 = MovieRoomMenuMain__Fv();
  if (iVar1 == 0) {
    SetIngameMovieRoomMenu__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  MovieRoomMenuDisp__Fv();
  return GPHASE_CONTINUE;
}

static void IngameWrkInitNotPlayData() {
  int iVar1;
  
  InitMessage__Fv();
  Init__10INGAME_WRK(&ingame_wrk);
  snd3DSet1Meter(500.0);
  InitDrawFLG__Fv();
  Init__7OL_LOAD(&ol_load);
  IgEffectInit__Fv();
  motInitMsn__Fv();
  MhCtlInit__Fv();
  InitPlayer__Fv();
  SetPlayerFloor__Fi(0xb);
  sis_mdlInit__Fv();
  plyr_mdlInit__Fv();
  InitSister__Fv();
  InitEnemy__Fv();
  InitEffects__Fv();
  iVar1 = CheckIngameMission__Fv();
  if (iVar1 == 0) {
    InitPhotoWrk__Fv();
  }
  foot_seInit__Fv();
  ev_seInit__Fv();
  ev_eneInit__Fv();
  ev_sisInit__Fv();
  photo_datInit__Fv();
  photo_datObjInit__Fv();
  EventInit__Fv();
  GhostSealDoorInit__Fv();
  DoorCtrlInit__Fv();
  InitSceneWork__Fv();
  CameraMainInit__Fv();
  acsChodoInitCloth__Fv();
  MorphInit__Fv();
  acsInitRopeWork__Fv();
  MapFogReset__Fv();
  ChrSortInit__Fv();
  MapPutResetAll__Fv();
  gra3dMonotoneDrawEnable__Fi(0);
  map_bgmInit__Fv();
  map_reverbInit__Fv();
  MrecInitCameraInfo__Fv();
  PuzzleInit__Fv();
  MapSavePopFirstDat__Fv();
  MapSaveRegist__Fv();
  movie_projecterInit__Fv();
  SubTitleInit__Fv();
  Init__10CFEneEntry(&fene_entry);
  MhFirstInit__Fv();
  Init__12CNPlyrCamera(&m_plyr_camera);
  release_typeInit__Fv();
  playerUseDoorLight__Fi(0);
  return;
}

void InitCostume() {
  SetPlyrMdlNo__Fi(0);
  SetSisterMdlNo__Fi(1);
  SetPlyrAcsNo__Fi(-1);
  SetSisterAcsNo__Fi(-1);
  return;
}

void IngameWrkInit(int chapter_no, int difficulty_label) {
	char iValue;
	char iValue;
	
  char cVar1;
  char cVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  cVar2 = (char)chapter_no;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (cVar2 < '\x19') {
    if (cVar2 < '\0') {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Set Value is Illegal");
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Set Value is Illegal");
  }
  cVar1 = (char)difficulty_label;
  ingame_wrk.mChapterNo.mValue = cVar2;
  if (cVar1 < '\x04') {
    if (cVar1 < '\0') {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Set Value is Illegal");
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Set Value is Illegal");
  }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  ingame_wrk.clear_save_flg = '\0';
                    /* end of inlined section */
  ingame_wrk.mClearCnt.mValue = '\0';
  ingame_wrk.mDifficulty.mValue = cVar1;
  Init__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
  Init__15CNEquipTraySave(&m_plyr_camera.eq_tray.mSave);
  IngameWrkInitNotPlayData__Fv();
  PlayData_Init__Fv();
  AllPlyrItemInit__Fv();
  AllPlyrFileInit__Fv();
  PlyrCrystalInit__Fv();
  PlyrLevelGemInit__Fv();
  PlyrMemoInit__Fv();
  PlyrSoulListInit__Fv();
  RoomInInfoInit__Fv();
  return;
}

static void ClearBeforeGameInit() {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* end of inlined section */
  ingame_wrk.mChapterNo.mValue = '\0';
  IngameWrkInitNotPlayData__Fv();
  AllPlyrEventItemLost__Fv();
  PlayData_PlayTimeInit__Fv();
  return;
}

static int InitBeforeGame() {
	int ret;
	
  int iVar1;
  
  iVar1 = 0;
  if (before_game_load_wait == 0) {
    Req__7OL_LOADi(&ol_load,0x12d);
    EffectSetupButterflyModel__Fv();
    plyr_mdlResetReq__Fv();
    before_game_load_wait = 1;
  }
  else if (before_game_load_wait == 1) {
    iVar1 = IsReadyPlyrMdl__Fv();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = IsLoadEndAll__Fv();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = EffectIsReadyButterflyModel__Fv();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
          SyncHpBar__Fv();
        }
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

void SetIngameListnerInfo() {
	SND_3D_SET set;
	float top[4];
	
  float (*pafVar1) [4];
  _SND_3D_SET set;
  float top [4];
  float afStack_20 [4];
  
  memset(&set,0,0xc);
  top[0] = (float)DAT_003b9310;
  top[1] = DAT_003b9310._4_4_;
  top[2] = (float)DAT_003b9318;
  top[3] = DAT_003b9318._4_4_;
  set.pos = gra3dcamGetPosition__Fv();
  set.dir = gra3dcamGetDirection__Fv();
  pafVar1 = gra3dcamGetPositionOld__Fv();
  sceVu0SubVector((float (*) [4])afStack_20,pafVar1,set.pos);
  set.vel = (float (*) [4])afStack_20;
  snd3DSetListner(&set,top);
  return;
}

void SetSave_IngameWrk(MC_SAVE_DATA *data) {
  data->size = 0xc;
  data->addr = (uchar *)&ingame_wrk;
  return;
}

void fene_entrySetSave(MC_SAVE_DATA *data) {
  data->size = 0x20;
  data->addr = (uchar *)&fene_entry;
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	BIT_FLAGS<66> *this;
	int i;
	
  int *piVar1;
  int iVar2;
  
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    ingame_wrk.mClearCnt.mValue = '\0';
    ingame_wrk.mChapterNo.mValue = '\0';
    ingame_wrk.mDifficulty.mValue = '\0';
                    /* inlined from movie_room.h */
    Init__10CMovieRoom(&movie_room);
                    /* end of inlined section */
                    /* end of inlined section */
    iVar2 = 2;
    piVar1 = fene_entry.mAreaLockFlg.flag_32 + 2;
    do {
      iVar2 = iVar2 + -1;
      *piVar1 = 0;
      piVar1 = piVar1 + -1;
    } while (-1 < iVar2);
    fene_entry.mWaitCnt.mValue = 0;
  }
  return;
}

static void global constructors keyed to ingame_wrk() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
