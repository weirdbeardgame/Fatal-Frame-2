// STATUS: NOT STARTED

#include "game_result_top.h"

struct fixed_array_base<int,7,int[7]> {
protected:
	int m_aData[7];
	
public:
	fixed_array_base<int,7,int[7]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,7> : fixed_array_base<int,7,int[7]> {
};

typedef struct {
	fixed_array<int,7> flg_msg_id;
	char flg_msg_num;
	char step;
	char rank;
} GAME_RESULT_TOP_CTRL;

struct fixed_array_base<char,7,char[7]> {
protected:
	char m_aData[7];
	
public:
	fixed_array_base<char,7,char[7]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,7> : fixed_array_base<char,7,char[7]> {
};

typedef struct {
	char rank_anim_step;
	char rank_anim_timer;
	fixed_array<char,7> flg_anim_step;
	fixed_array<char,7> flg_anim_timer;
	char line_anim_step;
	char line_anim_timer;
} GAME_RESULT_TOP_DISP;

static GAME_RESULT_TOP_CTRL game_result_top_ctrl;
static GAME_RESULT_TOP_DISP game_result_top_disp;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b3a00;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f0ee8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f0ef0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3b3a48,_max);
  }
  return (uint **)0x0;
}

void GameResultTopInit() {
	int i;
	
  GAME_RESULT_TOP_CTRL *pGVar1;
  int iVar2;
  int iVar3;
  TIME_INFO TStack_30;
  
  pGVar1 = &game_result_top_ctrl;
  game_result_top_ctrl.step = '\0';
  GetPlayTime__Fv(&TStack_30);
  game_result_top_ctrl.rank = GameResultTopRankCheck__FG9TIME_INFO(&TStack_30);
  game_result_top_ctrl.flg_msg_num = '\0';
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,7);
    (pGVar1->flg_msg_id).field0_0x0.m_aData[0] = -1;
                    /* end of inlined section */
    pGVar1 = (GAME_RESULT_TOP_CTRL *)((pGVar1->flg_msg_id).field0_0x0.m_aData + 1);
    iVar2 = iVar3;
  } while (iVar3 < 7);
  GameResultTopClearFlgSet__Fv();
  GameResultTopDispInit__Fv();
  return;
}

static char GameResultTopRankCheck(TIME_INFO play_time) {
	int i;
	char rank;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int (*paiVar5) [3];
  int iVar6;
  ulong in_v0;
  ulong uVar7;
  int iVar8;
  char cVar9;
  int local_10;
  undefined local_c [12];
  
  puVar1 = (undefined *)((int)&play_time->min + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)play_time & 7;
  uVar7 = (*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
          in_v0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
          *(ulong *)((int)play_time - uVar3) >> uVar3 * 8;
  iVar4 = play_time->sec;
  puVar1 = local_c + 3;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | uVar7 >> (7 - uVar2) * 8;
  paiVar5 = rank_time_tbl;
  iVar8 = 0;
  local_10 = (int)uVar7;
  iVar6 = rank_time_tbl[0][0];
  if (local_10 < rank_time_tbl[0][0]) {
    cVar9 = '\0';
  }
  else {
    while( true ) {
      if (iVar6 == local_10) {
        local_c._0_4_ = (undefined4)(uVar7 >> 0x20);
        if ((int)local_c._0_4_ < (*paiVar5)[1]) {
          return (char)iVar8;
        }
        if (((*paiVar5)[1] == local_c._0_4_) && (iVar4 <= (*paiVar5)[2])) {
          return (char)iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      paiVar5 = paiVar5[1];
      if (6 < iVar8) {
        return '\x06';
      }
      if (local_10 < (*paiVar5)[0]) break;
      iVar6 = (*paiVar5)[0];
    }
    cVar9 = (char)((uint)(iVar8 * 0x1000000) >> 0x18);
  }
  return cVar9;
}

static void GameResultTopClearFlgSet() {
	static char __FUNCTION__[25] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 84,
		/* [11] = */ 111,
		/* [12] = */ 112,
		/* [13] = */ 67,
		/* [14] = */ 108,
		/* [15] = */ 101,
		/* [16] = */ 97,
		/* [17] = */ 114,
		/* [18] = */ 70,
		/* [19] = */ 108,
		/* [20] = */ 103,
		/* [21] = */ 83,
		/* [22] = */ 101,
		/* [23] = */ 116,
		/* [24] = */ 0
	};
	int iVal;
	
  if (clear_flg_ctrl.clear_flg == '\0') {
    GameResultTopFlgMsgSet__Fi(8);
    GameResultTopFlgMsgSet__Fi(0x11);
  }
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (ingame_wrk.mClearCnt.mValue == '\0') {
                    /* end of inlined section */
    GameResultTopFlgMsgSet__Fi(9);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  }
  if (ingame_wrk.mDifficulty.mValue == '\x01') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(1,4);
    if (clear_flg_ctrl.clear_cnt.field0_0x0.m_aData[1] == '\0') {
                    /* end of inlined section */
      GameResultTopFlgMsgSet__Fi(6);
      GameResultTopFlgMsgSet__Fi(7);
      GameResultTopFlgMsgSet__Fi(0xe);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    }
    if (((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] & 0x10) == 0) {
                    /* end of inlined section */
      GameResultTopFlgMsgSet__Fi(0x10);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      if (((uint)m_plyr_camera.camera_power_up.mCamPartsFlg.flag_32[0] & 8) == 0) {
                    /* end of inlined section */
        GameResultTopFlgMsgSet__Fi(0x10);
      }
    }
    ClearFlg_NormalGameClearExe__Fv();
    goto LAB_001ab53c;
  }
  if (ingame_wrk.mDifficulty.mValue < '\x02') {
    if (ingame_wrk.mDifficulty.mValue == '\0') {
      if (((uint)m_plyr_camera.camera_power_up.mAdditionFlg.flag_32[0] & 8) == 0) {
                    /* end of inlined section */
        GameResultTopFlgMsgSet__Fi(0x10);
      }
      ClearFlg_EasyGameClearExe__Fv();
      goto LAB_001ab53c;
    }
  }
  else {
    if (ingame_wrk.mDifficulty.mValue == '\x02') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(2,4);
      if (clear_flg_ctrl.clear_cnt.field0_0x0.m_aData[2] == '\0') {
                    /* end of inlined section */
        GameResultTopFlgMsgSet__Fi(6);
        GameResultTopFlgMsgSet__Fi(0xf);
        GameResultTopFlgMsgSet__Fi(0x11);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      }
      if (((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] & 0x100) == 0) {
                    /* end of inlined section */
        GameResultTopFlgMsgSet__Fi(0x10);
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
        if (((uint)m_plyr_camera.camera_power_up.mTemperedRenzFlg.flag_32[0] & 0x20) == 0) {
                    /* end of inlined section */
          GameResultTopFlgMsgSet__Fi(0x10);
        }
      }
      ClearFlg_HardGameClearExe__Fv();
      goto LAB_001ab53c;
    }
    if (ingame_wrk.mDifficulty.mValue == '\x03') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(3,4);
      if (clear_flg_ctrl.clear_cnt.field0_0x0.m_aData[3] == '\0') {
                    /* end of inlined section */
        GameResultTopFlgMsgSet__Fi(6);
      }
      ClearFlg_NightMareGameClearExe__Fv();
      goto LAB_001ab53c;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
LAB_001ab53c:
                    /* end of inlined section */
  ClearFlg_AddClearCnt__Fi((int)ingame_wrk.mDifficulty.mValue);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (ingame_wrk.mClearCnt.mValue + 1 < 100) {
    ingame_wrk.mClearCnt.mValue = (char)(ingame_wrk.mClearCnt.mValue + 1);
  }
  else {
    ingame_wrk.mClearCnt.mValue = 'c';
  }
  return;
}

static void GameResultTopFlgMsgSet(int msg_id) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (6 < iVar2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = (int)game_result_top_ctrl.flg_msg_num;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_result_top_ctrl.flg_msg_num,7);
      game_result_top_ctrl.flg_msg_id.field0_0x0.m_aData[iVar2] = msg_id;
                    /* end of inlined section */
      game_result_top_ctrl.flg_msg_num = game_result_top_ctrl.flg_msg_num + '\x01';
      return;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,7);
    piVar1 = game_result_top_ctrl.flg_msg_id.field0_0x0.m_aData + iVar2;
    iVar2 = iVar2 + 1;
  } while (*piVar1 != msg_id);
  return;
}

int GameResultTopMain() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 84,
		/* [11] = */ 111,
		/* [12] = */ 112,
		/* [13] = */ 77,
		/* [14] = */ 97,
		/* [15] = */ 105,
		/* [16] = */ 110,
		/* [17] = */ 0
	};
	int flg_msg_start;
	
  int iVar1;
  long lVar2;
  
  switch(game_result_top_ctrl.step) {
  case '\0':
    game_result_top_ctrl.step = '\x01';
  case '\x01':
    iVar1 = GameResultTopPad__Fv();
    if (iVar1 != 0) {
      if (game_result_top_ctrl.flg_msg_num == '\0') {
        GameResultFadeOutReq__Fv();
        game_result_top_ctrl.step = '\x05';
      }
      else {
        game_result_top_ctrl.step = '\x02';
        game_result_top_disp.rank_anim_step = '\x03';
        game_result_top_disp.rank_anim_timer = '\0';
      }
    }
    break;
  case '\x02':
    if (game_result_top_disp.rank_anim_step == '\x04') {
      game_result_top_ctrl.step = '\x03';
    }
    break;
  case '\x03':
    if (game_result_top_disp.line_anim_step == '\x02') {
      game_result_top_ctrl.step = '\x04';
    }
    else {
      iVar1 = (int)game_result_top_disp.line_anim_timer / 10;
      if (((int)game_result_top_disp.line_anim_timer % 10 == 0) &&
         ('\x13' < game_result_top_disp.line_anim_timer)) {
        lVar2 = (long)(iVar1 + -2);
        if (lVar2 < 0) {
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("Error! %s");
        }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        if ((lVar2 < game_result_top_ctrl.flg_msg_num) &&
           (_fixed_array_verifyrange__H1Zi_UiUi_PX01(lVar2,7),
           *(int *)((int)&game_result_top_ctrl + (iVar1 + -2) * 4) != -1)) {
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar2,7);
          (&game_result_top_disp.rank_anim_step)[iVar1] = '\0';
          _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar2,7);
                    /* end of inlined section */
          game_result_top_disp.flg_anim_step.field0_0x0.m_aData[iVar1 + 5] = '\0';
        }
      }
    }
    break;
  case '\x04':
    iVar1 = GameResultTopPad__Fv();
    if (iVar1 != 0) {
      GameResultFadeOutReq__Fv();
      game_result_top_ctrl.step = '\x05';
    }
    break;
  case '\x05':
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return 0;
}

static int GameResultTopPad() {
	int res;
	
  int no;
  
  if (**paddat == 1) {
    no = 3;
  }
  else {
    if (*paddat[1] != 1) {
      return 0;
    }
    no = 1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  return 1;
}

static void GameResultTopDispInit() {
	int i;
	
  fixed_array<char,7> *pfVar1;
  long lVar2;
  long lVar3;
  
  game_result_top_disp.rank_anim_step = '\x02';
  game_result_top_disp.rank_anim_timer = '\0';
  if ('\0' < game_result_top_ctrl.flg_msg_num) {
    pfVar1 = &game_result_top_disp.flg_anim_step;
    lVar2 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar2,7);
      (pfVar1->field0_0x0).m_aData[0] = '\x04';
                    /* end of inlined section */
      lVar3 = (long)((int)lVar2 + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar2,7);
      pfVar1[1].field0_0x0.m_aData[0] = '\0';
                    /* end of inlined section */
      pfVar1 = (fixed_array<char,7> *)((pfVar1->field0_0x0).m_aData + 1);
      lVar2 = lVar3;
    } while (lVar3 < game_result_top_ctrl.flg_msg_num);
  }
  game_result_top_disp.line_anim_timer = '\0';
  game_result_top_disp.line_anim_step = '\0';
  return;
}

void GameResultTopDisp() {
	u_char msg_alpha;
	int i;
	
  uchar uVar1;
  void *tm2_addr;
  int iVar2;
  GAME_RESULT_TOP_CTRL *pGVar3;
  char *anim_step;
  int iVar4;
  long lVar5;
  float fVar6;
  TIME_INFO TStack_70;
  
  tm2_addr = GetGameResultCharPk2Addr__Fv();
  PK2SendVram__FUiiii((uint)tm2_addr,-1,-1,0);
  GameResultTopTitleDisp__FiiUc(0,0,0x80);
  GameResultTopLineDisp__FfUc(153.0,0x80);
  GameResultTopCaptionDisp__FiiUc(0,0,0x80);
  uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                    (&game_result_top_disp.rank_anim_step,&game_result_top_disp.rank_anim_timer,0x14
                     ,0x14);
  if (game_result_top_disp.rank_anim_step != '\x04') {
    GameResultTopDifficultyDisp__FiiiUc((int)ingame_wrk.mDifficulty.mValue,0,0,uVar1);
    GetPlayTime__Fv(&TStack_70);
    GameResultTopClearTime__FG9TIME_INFOiiUc(&TStack_70,0,0,uVar1);
    iVar2 = GetPlayData_TotalScore__Fv();
    GameResultTopScoreTime__FiiiUc(iVar2,0,0,uVar1);
    GameResultTopRankDisp__FiiiUc((int)game_result_top_ctrl.rank,0,0,uVar1);
  }
  pGVar3 = &game_result_top_ctrl;
  if ((game_result_top_ctrl.flg_msg_num != '\0') && ('\x02' < game_result_top_ctrl.step)) {
    fVar6 = GameResultTopLineAnimCtrl__FPcT0
                      (&game_result_top_disp.line_anim_step,&game_result_top_disp.line_anim_timer);
    GameResultTopLineDisp__FfUc(fVar6 + 153.0 + (float)(uint)(ushort)gameclear_tex[44].h,0x80);
    if ('\0' < game_result_top_ctrl.flg_msg_num) {
      iVar2 = 0xb7;
      lVar5 = 0;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar5,7);
        iVar4 = (int)lVar5;
        anim_step = game_result_top_disp.flg_anim_step.field0_0x0.m_aData + iVar4;
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar5,7);
        uVar1 = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                          (anim_step,game_result_top_disp.flg_anim_timer.field0_0x0.m_aData + iVar4,
                           10,0x14);
        _fixed_array_verifyrange__H1Zc_UiUi_PX01(lVar5,7);
        if (*anim_step != '\x04') {
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(lVar5,7);
          PrintMsg_Arrange__Fiiiiiiiiii
                    (0x24,(pGVar3->flg_msg_id).field0_0x0.m_aData[0],0x140,iVar2,0xc,
                     (int)(char)uVar1,0,0,0,2);
        }
                    /* end of inlined section */
        iVar2 = iVar2 + 0x18;
        pGVar3 = (GAME_RESULT_TOP_CTRL *)((pGVar3->flg_msg_id).field0_0x0.m_aData + 1);
        lVar5 = (long)(iVar4 + 1);
      } while ((long)(iVar4 + 1) < (long)game_result_top_ctrl.flg_msg_num);
    }
  }
  return;
}

static float GameResultTopLineAnimCtrl(char *anim_step, char *anim_timer) {
	static char __FUNCTION__[26] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 115,
		/* [7] = */ 117,
		/* [8] = */ 108,
		/* [9] = */ 116,
		/* [10] = */ 84,
		/* [11] = */ 111,
		/* [12] = */ 112,
		/* [13] = */ 76,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 101,
		/* [17] = */ 65,
		/* [18] = */ 110,
		/* [19] = */ 105,
		/* [20] = */ 109,
		/* [21] = */ 67,
		/* [22] = */ 116,
		/* [23] = */ 114,
		/* [24] = */ 108,
		/* [25] = */ 0
	};
	POS_ANIM_TBL line_pos_tbl[2];
	float end_pos;
	short int end_time;
	float pos;
	
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  POS_ANIM_TBL line_pos_tbl [2];
  
  iVar5 = (int)game_result_top_ctrl.flg_msg_num;
  iVar6 = (int)game_result_top_ctrl.flg_msg_num;
  cVar2 = *anim_step;
  puVar1 = (undefined *)((int)&line_pos_tbl[0].end_pos + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003b3ba8 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&line_pos_tbl[0].anim_label + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003b3bb0 >> (7 - uVar3) * 8;
  puVar1 = (undefined *)((int)&line_pos_tbl[1].end_pos + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | DAT_003b3bb8 >> (7 - uVar3) * 8;
  line_pos_tbl[1]._0_8_ = DAT_003b3bb8;
  puVar1 = (undefined *)((int)&line_pos_tbl[1].anim_label + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar4 = (ulong *)(puVar1 + -uVar3);
  *puVar4 = *puVar4 & -1L << (uVar3 + 1) * 8 | _PTR_003b3bc0 >> (7 - uVar3) * 8;
  line_pos_tbl[1]._8_8_ = _PTR_003b3bc0;
  line_pos_tbl[0].end_pos = (float)iVar5 * 24.0 + 48.0;
  line_pos_tbl[0].anim_label = (int)(DAT_003b3bb0 >> 0x20);
  line_pos_tbl[0].start_time = (ushort)DAT_003b3bb0;
  line_pos_tbl[0]._8_4_ =
       CONCAT22((ushort)((uint)(EffectInitAniCtrlButterflyOne__FP8ANI_CTRL +
                               (iVar5 * 4 + iVar6) * 0x20000) >> 0x10),line_pos_tbl[0].start_time);
  line_pos_tbl[0].start_pos = (float)DAT_003b3ba8;
  switch(cVar2) {
  case '\0':
    *anim_timer = '\0';
    *anim_step = '\x01';
  case '\x01':
    line_pos_tbl[0].end_pos = Anim2D_CalcNowPos__FPC12POS_ANIM_TBLi(line_pos_tbl,(int)*anim_timer);
    cVar2 = *anim_timer;
    *anim_timer = cVar2 + '\x01';
    if ((int)(EffectInitAniCtrlButterflyOne__FP8ANI_CTRL + (iVar5 * 4 + iVar6) * 0x20000) >> 0x10 <=
        (int)(char)(cVar2 + '\x01')) {
      *anim_step = '\x02';
    }
    break;
  case '\x02':
    break;
  case '\x03':
  case '\x04':
    line_pos_tbl[0].end_pos = 0.0;
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    line_pos_tbl[0].end_pos = 0.0;
  }
  return line_pos_tbl[0].end_pos;
}

static void GameResultTopTitleDisp(int off_x, int off_y, u_char alpha) {
	DISP_SPRT bg_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT bg_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = gameclear_tex + 0xc;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&bg_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    bg_ds.x = bg_ds.x + fVar2;
    bg_ds.y = bg_ds.y + (float)off_y;
    bg_ds.alpha = (uchar)((int)((uint)bg_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&bg_ds);
  } while (-1 < iVar1);
  return;
}

static void GameResultTopDifficultyDisp(int dif_label, int off_x, int off_y, u_char alpha) {
	DISP_SPRT difficulty_ds;
	static int difficulty_tex_tbl[4] = {
		/* [0] = */ 16,
		/* [1] = */ 17,
		/* [2] = */ 15,
		/* [3] = */ 18
	};
	
  float fVar1;
  DISP_SPRT difficulty_ds;
  
  fVar1 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&difficulty_ds,gameclear_tex + 0xe);
  difficulty_ds.x = difficulty_ds.x + (float)off_x;
  difficulty_ds.y = difficulty_ds.y + fVar1;
  difficulty_ds.alpha = (uchar)((int)((uint)difficulty_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&difficulty_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&difficulty_ds,gameclear_tex + *(int *)(difficulty_tex_tbl_1129 + dif_label * 4));
  difficulty_ds.x = difficulty_ds.x + (float)off_x;
  difficulty_ds.y = difficulty_ds.y + fVar1;
  difficulty_ds.alpha = (uchar)((int)((uint)difficulty_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&difficulty_ds);
  return;
}

static void GameResultTopClearTime(TIME_INFO clear_time, int off_x, int off_y, u_char alpha) {
	DISP_SPRT time_ds;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong in_v1;
  SPRT_DAT *pSVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined local_f0 [8];
  int local_e8;
  DISP_SPRT time_ds;
  
  iVar5 = 1;
  fVar7 = (float)off_x;
  puVar1 = (undefined *)((int)&clear_time->min + 3);
  uVar2 = (uint)puVar1 & 7;
  uVar3 = (uint)clear_time & 7;
  local_f0 = (undefined  [8])
             ((*(long *)(puVar1 + -uVar2) << (7 - uVar2) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)clear_time - uVar3) >> uVar3 * 8);
  iVar6 = clear_time->sec;
  puVar1 = local_f0 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)local_f0 >> (7 - uVar2) * 8;
  pSVar4 = gameclear_tex + 0x13;
  local_e8 = iVar6;
  do {
    iVar5 = iVar5 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,pSVar4);
    time_ds.x = time_ds.x + fVar7;
    time_ds.y = time_ds.y + (float)off_y;
    time_ds.alpha = (uchar)((int)((uint)time_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&time_ds);
    pSVar4 = pSVar4 + 1;
  } while (-1 < iVar5);
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
            (local_f0._0_4_,3,gameclear_tex + 0x1f,0x15c,0xd5,alpha,0,'\x01');
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc
            (local_f0._4_4_,2,gameclear_tex + 0x1f,0x1a3,0xd5,alpha,0,'\x01');
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(local_e8,2,gameclear_tex + 0x1f,0x1d8,0xd5,alpha,0,'\x01');
  iVar6 = 1;
  pSVar4 = gameclear_tex + 0x29;
  do {
    iVar6 = iVar6 + -1;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&time_ds,pSVar4);
    time_ds.x = time_ds.x + fVar7;
    time_ds.y = time_ds.y + (float)off_y;
    time_ds.alpha = (uchar)((int)((uint)time_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&time_ds);
    pSVar4 = pSVar4 + 1;
  } while (-1 < iVar6);
  return;
}

static void GameResultTopScoreTime(int score, int off_x, int off_y, u_char alpha) {
	DISP_SPRT score_ds;
	int i;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  DISP_SPRT score_ds;
  
  fVar2 = (float)off_x;
  iVar1 = 1;
  d = gameclear_tex + 0x15;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&score_ds,d);
    iVar1 = iVar1 + -1;
    d = d + 1;
    score_ds.x = score_ds.x + fVar2;
    score_ds.y = score_ds.y + (float)off_y;
    score_ds.alpha = (uchar)((int)((uint)score_ds.alpha * (uint)alpha) >> 7);
    DispSprD__FP9DISP_SPRT(&score_ds);
  } while (-1 < iVar1);
  DrawCmnNumberTex__FiiP8SPRT_DATiiUciUc(score,6,gameclear_tex + 0x1f,0x16e,0xfa,alpha,0,'\0');
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&score_ds,gameclear_tex + 0x2b);
  score_ds.x = score_ds.x + fVar2;
  score_ds.y = score_ds.y + (float)off_y;
  score_ds.alpha = (uchar)((int)((uint)score_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&score_ds);
  return;
}

static void GameResultTopRankDisp(int rank, int off_x, int off_y, u_char alpha) {
	DISP_SPRT rank_ds;
	static int rank_tex_tbl[7] = {
		/* [0] = */ 24,
		/* [1] = */ 25,
		/* [2] = */ 26,
		/* [3] = */ 27,
		/* [4] = */ 28,
		/* [5] = */ 29,
		/* [6] = */ 30
	};
	
  float fVar1;
  DISP_SPRT rank_ds;
  
  fVar1 = (float)off_y;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&rank_ds,gameclear_tex + 0x17);
  rank_ds.x = rank_ds.x + (float)off_x;
  rank_ds.y = rank_ds.y + fVar1;
  rank_ds.alpha = (uchar)((int)((uint)rank_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&rank_ds);
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT
            (&rank_ds,gameclear_tex + *(int *)(rank_tex_tbl_1139 + rank * 4));
  rank_ds.x = rank_ds.x + (float)off_x;
  rank_ds.y = rank_ds.y + fVar1;
  rank_ds.alpha = (uchar)((int)((uint)rank_ds.alpha * (uint)alpha) >> 7);
  DispSprD__FP9DISP_SPRT(&rank_ds);
  return;
}

static void GameResultTopLineDisp(float y, u_char alpha) {
	DISP_SPRT line_ds;
	int i;
	
  uint uVar1;
  int iVar2;
  SPRT_DAT *d;
  float fVar3;
  DISP_SPRT line_ds;
  
  iVar2 = 0;
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,gameclear_tex + 0x2c);
  line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
  line_ds.y = y;
  DispSprD__FP9DISP_SPRT(&line_ds);
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,gameclear_tex + 0x2d);
    uVar1 = line_ds.w * iVar2;
    iVar2 = iVar2 + 1;
    if ((int)uVar1 < 0) {
      fVar3 = (float)(uVar1 & 1 | uVar1 >> 1);
      fVar3 = fVar3 + fVar3;
    }
    else {
      fVar3 = (float)uVar1;
    }
    line_ds.x = line_ds.x + fVar3;
    line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
    line_ds.y = y;
    DispSprD__FP9DISP_SPRT(&line_ds);
  } while (iVar2 < 5);
  iVar2 = 1;
  d = gameclear_tex + 0x2e;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&line_ds,d);
    iVar2 = iVar2 + -1;
    d = d + 1;
    line_ds.alpha = (uchar)((int)((uint)line_ds.alpha * (uint)alpha) >> 7);
    line_ds.y = y;
    DispSprD__FP9DISP_SPRT(&line_ds);
  } while (-1 < iVar2);
  return;
}

static void GameResultTopCaptionDisp(int off_x, int off_y, u_char alpha) {
  DrawCmnCapGroup_W__FiiUcUi(7,7,alpha,0);
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (char *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_688);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from game_result_top.c */
  return;
}

static void global constructors keyed to GameResultTopInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
