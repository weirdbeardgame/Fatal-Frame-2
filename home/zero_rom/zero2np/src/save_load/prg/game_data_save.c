// STATUS: NOT STARTED

#include "game_data_save.h"

typedef struct {
	char step;
	char mc_step;
	char csr;
	char conf_csr;
	char save_exe_label;
	char format_end_cnt;
	int save_file_cnt;
} GAME_DATA_SAVE_CTRL;

typedef struct {
	int msg_id;
	char anim_step;
	char anim_timer;
	char csr_timer;
} GAME_DATA_SAVE_DISP;

static void* (*GameDataSaveMemGet)(/* parameters unknown */) = NULL;
static void (*GameDataSaveMemFree)(/* parameters unknown */) = NULL;
static void *save_load_tex_addr = NULL;
static void *outgame_cmn_tex_addr = NULL;
static void *game_data_buff_addr = NULL;

static void *game_data_save_snap_addr[5] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL
};

static reference_fixed_array<int,5> game_data_save_snap_tex;
static GAME_DATA_SAVE_CTRL game_data_save_ctrl;
static GAME_DATA_SAVE_DISP game_data_save_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b34f0;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f0e68,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f0e70,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3b3538,_max);
  }
  return (uint **)0x0;
}

void GameDataSaveInit(char exe_label) {
	int i;
	
  int iVar1;
  int iVar2;
  
  GameDataSaveCtrlInit__Fc(exe_label);
  MemoryCardExeInit__Fv();
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  iVar1 = 0;
  do {
    LiberateGameDataSaveMem__FPPv(game_data_save_snap_addr + iVar1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar2 = iVar1 + 1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    *(undefined4 *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar1 * 4) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 < 5);
  if (game_data_save_ctrl.save_exe_label == '\0') {
    ingame_wrk.clear_save_flg = '\0';
  }
  else if (game_data_save_ctrl.save_exe_label == '\x01') {
    ingame_wrk.clear_save_flg = game_data_save_ctrl.save_exe_label;
  }
  return;
}

static void GameDataSaveCtrlInit(char exe_label) {
  game_data_save_ctrl.save_exe_label = exe_label;
  game_data_save_ctrl.conf_csr = '\x01';
  game_data_save_ctrl.step = '\0';
  game_data_save_ctrl.mc_step = '\0';
  game_data_save_ctrl.csr = '\0';
  game_data_save_ctrl.save_file_cnt = 0;
  game_data_save_ctrl.format_end_cnt = '\0';
  return;
}

void GameDataSaveBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */)) {
	static char __FUNCTION__[30] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 83,
		/* [9] = */ 97,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 66,
		/* [13] = */ 97,
		/* [14] = */ 99,
		/* [15] = */ 107,
		/* [16] = */ 71,
		/* [17] = */ 114,
		/* [18] = */ 111,
		/* [19] = */ 117,
		/* [20] = */ 110,
		/* [21] = */ 100,
		/* [22] = */ 76,
		/* [23] = */ 111,
		/* [24] = */ 97,
		/* [25] = */ 100,
		/* [26] = */ 82,
		/* [27] = */ 101,
		/* [28] = */ 113,
		/* [29] = */ 0
	};
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  uchar uVar3;
  uint uVar4;
  
  if ((GameDataSaveMemGet != (undefined1 *)0x0) ||
     (puVar1 = mem_get, puVar2 = mem_free, GameDataSaveMemFree != (undefined1 *)0x0)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    puVar1 = GameDataSaveMemGet;
    puVar2 = GameDataSaveMemFree;
  }
  GameDataSaveMemFree = puVar2;
  GameDataSaveMemGet = puVar1;
  uVar3 = GetLanguage__Fv();
  uVar4 = GetFileSize((char)uVar3 + 0x1177);
  GetGameDataSaveDataMem__FPPvi(&save_load_tex_addr,uVar4);
  uVar4 = GetFileSize(0x13);
  GetGameDataSaveDataMem__FPPvi(&outgame_cmn_tex_addr,uVar4);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x1177,save_load_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  FileLoadReqEE(0x13,outgame_cmn_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

static void GetGameDataSaveDataMem(void **tex_addr, int size) {
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateGameDataSaveMem__FPPv(tex_addr);
  }
  pvVar1 = (void *)(*(code *)GameDataSaveMemGet)(size);
  *tex_addr = pvVar1;
  return;
}

static int GameDataSaveTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1177,save_load_tex_addr);
  if (iVar2 != 0) {
    iVar2 = FileLoadIsEnd2(0x13,outgame_cmn_tex_addr);
    uVar3 = (uint)(iVar2 != 0);
  }
  return uVar3;
}

int GameDataSaveMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 83,
		/* [9] = */ 97,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	int res;
	
  int iVar1;
  
  if (game_data_save_ctrl.step == '\x01') {
    iVar1 = GameDataSaveTexLoadWait__Fv();
    if (iVar1 == 0) {
      return 0;
    }
    game_data_save_ctrl.step = '\x02';
    MemoryCardSetAccessPort__Fi(0);
    return 0;
  }
  if (game_data_save_ctrl.step < '\x02') {
    if (game_data_save_ctrl.step == '\0') {
      GameDataSaveDispInit__Fv();
      game_data_save_ctrl.step = '\x01';
      return 0;
    }
  }
  else {
    if (game_data_save_ctrl.step == '\x02') {
      if (game_data_save_disp.anim_step != '\x02') {
        return 0;
      }
      GameDataSaveMcMain__Fv();
      return 0;
    }
    if (game_data_save_ctrl.step == '\x03') {
      if (game_data_save_disp.anim_step == '\x04') {
        return 1;
      }
      return 0;
    }
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return 0;
}

static void GameDataSaveOutReq() {
  game_data_save_disp.anim_step = '\x03';
  game_data_save_ctrl.step = '\x03';
  game_data_save_disp.anim_timer = '\0';
  return;
}

static void GameDataSaveMcMain() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 83,
		/* [9] = */ 97,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 77,
		/* [13] = */ 99,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 0
	};
	
  switch(game_data_save_ctrl.mc_step) {
  case '\0':
    GameDataSaveMcCheckInit__Fv();
  case '\x01':
    GameDataSaveMcCheckWait__Fv();
    return;
  case '\x02':
    GameDataSaveMcHeadLoadInit__Fv();
  case '\x03':
    GameDataSaveMcHeadLoadWait__Fv();
    return;
  case '\x04':
    GameDataSaveMcSnapLoadInit__Fv();
  case '\x05':
    GameDataSaveMcSnapLoadWait__Fv();
    return;
  case '\x06':
    GameDataSaveMcSaveFileSel__Fv();
    return;
  case '\a':
    GameDataSaveMcSaveConf__Fv();
    return;
  case '\b':
    GameDataSaveMcSystemLoadInit__Fv();
  case '\t':
    GameDataSaveMcSystemLoadWait__Fv();
    return;
  case '\n':
    GameDataSaveMcSaveInit__Fv();
  case '\v':
    GameDataSaveMcSaveWait__Fv();
    return;
  case '\f':
    GameDataSaveMcErrorConfInit__Fv();
  case '\r':
    GameDataSaveMcErrorConfWait__Fv();
    return;
  case '\x0e':
    GameDataSaveMcEndConf__Fv();
    return;
  case '\x0f':
    GameDataSaveMcRemakeConfInit__Fv();
  case '\x10':
    GameDataSaveMcRemakeConfWait__Fv();
    return;
  case '\x11':
    GameDataSaveMcRemakeDirDelInit__Fv();
  case '\x12':
    GameDataSaveMcRemakeDirDelWait__Fv();
    return;
  case '\x13':
    GameDataSaveMcNewMakeConfInit__Fv();
  case '\x14':
    GameDataSaveMcNewMakeConfWait__Fv();
    return;
  case '\x15':
    GameDataSaveMcNewMakeInit__Fv();
  case '\x16':
    GameDataSaveMcNewMakeWait__Fv();
    return;
  case '\x17':
    GameDataSaveMcNewMakeSaveInit__Fv();
  case '\x18':
    GameDataSaveMcNewMakeSaveWait__Fv();
    return;
  case '\x19':
    GameDataSaveMcFormatConfInit__Fv();
  case '\x1a':
    GameDataSaveMcFormatConfWait__Fv();
    return;
  case '\x1b':
    GameDataSaveMcFormatInit__Fv();
  case '\x1c':
    GameDataSaveMcFormatWait__Fv();
    return;
  case '\x1d':
    GameDataSaveMcFormatEndInit__Fv();
  case '\x1e':
    GameDataSaveMcFormatEndWait__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
}

static void GameDataSaveMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  game_data_save_ctrl.save_file_cnt = 0;
  game_data_save_ctrl.mc_step = '\x01';
  return;
}

static void GameDataSaveMcCheckWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 != 0) {
      game_data_save_disp.msg_id = 0;
      game_data_save_ctrl.mc_step = '\x02';
      return;
    }
    iVar1 = MemoryCardCheckEmptyBroken__Fi(0);
    if (iVar1 != 0) {
      game_data_save_disp.msg_id = 0x16;
      game_data_save_ctrl.mc_step = '\x0f';
      game_data_save_ctrl.conf_csr = '\x01';
      return;
    }
    iVar2 = 0x19;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    iVar2 = 2;
    switch(iVar1) {
    case -0x14:
      iVar2 = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -5:
    case -3:
      iVar2 = 2;
      break;
    case -6:
      iVar1 = MemoryCardCheckEmptyBroken__Fi(0);
      if (iVar1 != 0) {
        game_data_save_disp.msg_id = 0x16;
        game_data_save_ctrl.mc_step = '\x0f';
        game_data_save_ctrl.conf_csr = '\x01';
        return;
      }
      iVar2 = 0x19;
      break;
    case -4:
      iVar1 = MemoryCardCheckEmpty__Fi(0);
      if (iVar1 != 0) {
        game_data_save_disp.msg_id = 0x15;
        game_data_save_ctrl.mc_step = '\x13';
        return;
      }
      iVar2 = 0x17;
      break;
    case -2:
      game_data_save_disp.msg_id = 3;
      game_data_save_ctrl.mc_step = '\x19';
      game_data_save_ctrl.conf_csr = '\x01';
      return;
    case -1:
      game_data_save_disp.msg_id = 0;
      game_data_save_ctrl.mc_step = '\x02';
      return;
    }
  }
  game_data_save_ctrl.mc_step = '\f';
  game_data_save_disp.msg_id = iVar2;
  return;
}

static void GameDataSaveMcHeadLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  MemoryCardSetFilePath__FPcii(path_name,0,1);
  size = GetMemoryCardDataSize__Fii(0,1);
  GetGameDataSaveDataMem__FPPvi(&game_data_buff_addr,size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,game_data_buff_addr,size);
  game_data_save_disp.msg_id = 0;
  game_data_save_ctrl.mc_step = '\x03';
  return;
}

static void GameDataSaveMcHeadLoadWait() {
	int mc_res;
	int size;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,1);
    iVar3 = MemoryCardCheckFileBroken__FPvi(game_data_buff_addr,iVar2);
    if (iVar3 != 0) {
      iVar2 = MemoryCardCheckNewFileLoad__FPvi(game_data_buff_addr,iVar2);
      if (iVar2 == 0) {
        DevelopMemoryCardLoadData__FPcii((char *)game_data_buff_addr,0,1);
        game_data_save_disp.msg_id = 10;
        game_data_save_ctrl.mc_step = '\x06';
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
          iVar3 = GetMemoryCardPlayDataFlg__Fi(iVar2);
          if (iVar3 == 1) {
            game_data_save_ctrl.mc_step = '\x04';
            game_data_save_disp.msg_id = 0;
            break;
          }
        }
      }
      else {
        game_data_save_ctrl.mc_step = '\x06';
        game_data_save_disp.msg_id = 10;
      }
      goto LAB_001a87b4;
    }
    iVar2 = MemoryCardCheckEmptyBroken__Fi(0);
    if (iVar2 != 0) {
LAB_001a877c:
      game_data_save_disp.msg_id = 0x16;
      game_data_save_ctrl.mc_step = '\x0f';
LAB_001a878c:
      game_data_save_ctrl.conf_csr = '\x01';
      goto LAB_001a87b4;
    }
    iVar2 = 0x19;
  }
  else {
    if (-1 < iVar1) goto LAB_001a87b4;
    iVar2 = 2;
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      iVar2 = 2;
      break;
    case -3:
      iVar3 = MemoryCardCheckEmptyBroken__Fi(0);
      iVar2 = 0x19;
      if (iVar3 != 0) goto LAB_001a877c;
      break;
    case -2:
      game_data_save_disp.msg_id = 3;
      game_data_save_ctrl.mc_step = '\x19';
      goto LAB_001a878c;
    }
  }
  game_data_save_ctrl.mc_step = '\f';
  game_data_save_disp.msg_id = iVar2;
LAB_001a87b4:
  if (iVar1 != 0) {
    LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  }
  return;
}

static void GameDataSaveMcSnapLoadInit() {
	int i;
	
  int *piVar1;
  int iVar2;
  uint size;
  int iVar3;
  int data_num;
  int iVar4;
  ROOM_INFO_DAT *pRVar5;
  void **tex_addr;
  
  data_num = 0;
  iVar4 = 0;
  tex_addr = game_data_save_snap_addr;
  do {
    iVar2 = GetMemoryCardPlayDataFlg__Fi(data_num);
    if (iVar2 == 1) {
      LiberateGameDataSaveMem__FPPv(tex_addr);
      iVar2 = GetMemoryCardClearDataFlg__Fi(data_num);
      if (iVar2 == 0) {
        pRVar5 = room_info_dat;
        if (room_info_dat[0].map_label != -1) {
          iVar2 = 0;
          do {
            iVar3 = GetMemoryCardPlayDataRoomLabel__Fi(data_num);
            piVar1 = &pRVar5->room_label;
            pRVar5 = pRVar5 + 1;
            if (*piVar1 == iVar3) {
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
              *(undefined4 *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar4) =
                   *(undefined4 *)((int)&room_info_dat[0].snap_tex_label + iVar2);
              goto LAB_001a88a8;
            }
            iVar2 = iVar2 + 0x14;
          } while (pRVar5->map_label != -1);
        }
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        *(undefined4 *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar4) = 0x117c;
LAB_001a88a8:
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        size = GetFileSize(*(int *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar4));
        GetGameDataSaveDataMem__FPPvi(tex_addr,size);
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        FileLoadReqEE(*(int *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar4),*tex_addr,6,
                      (undefined1 *)0x0,(void *)0x0);
                    /* end of inlined section */
      }
    }
    else {
      LiberateGameDataSaveMem__FPPv(tex_addr);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
      *(undefined4 *)((int)game_data_save_snap_tex.field0_0x0.m_aData + iVar4) = 0xffffffff;
    }
    data_num = data_num + 1;
    iVar4 = iVar4 + 4;
    tex_addr = tex_addr + 1;
    if (4 < data_num) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
      game_data_save_disp.msg_id = 0;
      game_data_save_ctrl.mc_step = '\x05';
      return;
    }
  } while( true );
}

static void GameDataSaveMcSnapLoadWait() {
	int i;
	int csr_set_flg;
	
  bool bVar1;
  int iVar2;
  int data_num;
  
  data_num = 0;
  bVar1 = false;
  do {
    iVar2 = GetMemoryCardPlayDataFlg__Fi(data_num);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    if (iVar2 == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
      iVar2 = FileLoadIsEnd2(*(int *)((int)game_data_save_snap_tex.field0_0x0.m_aData + data_num * 4
                                     ),game_data_save_snap_addr[data_num]);
      if (iVar2 == 0) {
        game_data_save_ctrl.mc_step = '\x05';
        game_data_save_disp.msg_id = 0;
        break;
      }
                    /* end of inlined section */
      game_data_save_disp.msg_id = 10;
      game_data_save_ctrl.mc_step = '\x06';
      if (!bVar1) {
        game_data_save_ctrl.csr = (char)data_num;
        bVar1 = true;
      }
    }
    data_num = data_num + 1;
  } while (data_num < 5);
  GameDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void GameDataSaveMcSaveFileSel() {
  GameDataSaveMcSaveFileSelPad__Fv();
  GameDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void GameDataSaveMcSaveFileSelPad() {
	int i;
	int csr_range;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    iVar1 = GetMemoryCardPlayDataFlg__Fi(iVar1);
    if (iVar1 == 1) {
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar2;
  } while (iVar2 < 5);
  iVar3 = iVar3 + 1;
  if (5 < iVar3) {
    iVar3 = 5;
  }
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        game_data_save_ctrl.conf_csr = '\x01';
        iVar1 = GetMemoryCardPlayDataFlg__Fi((int)game_data_save_ctrl.csr);
        game_data_save_disp.msg_id = 0xb;
        if (iVar1 == 0) {
          game_data_save_disp.msg_id = 0x1f;
        }
        game_data_save_ctrl.mc_step = '\a';
        return;
      }
      if (*paddat[1] != 1) {
        return;
      }
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
      return;
    }
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    if (iVar3 == 0) {
      trap(7);
    }
    iVar1 = game_data_save_ctrl.csr + 1;
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    if (iVar3 == 0) {
      trap(7);
    }
    iVar1 = game_data_save_ctrl.csr + iVar3 + -1;
  }
  game_data_save_ctrl.csr = (char)(iVar1 % iVar3);
  return;
}

static void GameDataSaveMcSaveConf() {
  GameDataSaveMcSaveConfPad__Fv();
  GameDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void GameDataSaveMcSaveConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (game_data_save_ctrl.conf_csr == '\0') {
        game_data_save_ctrl.mc_step = '\b';
        game_data_save_disp.msg_id = 0x1e;
        game_data_save_ctrl.save_file_cnt = 0;
      }
      else {
        game_data_save_ctrl.mc_step = '\x06';
        game_data_save_disp.msg_id = 10;
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      game_data_save_ctrl.mc_step = '\x06';
      game_data_save_disp.msg_id = 10;
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    game_data_save_ctrl.conf_csr = game_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameDataSaveMcSystemLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  GetGameDataSaveDataMem__FPPvi(&game_data_buff_addr,size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,game_data_buff_addr,size);
  game_data_save_ctrl.mc_step = '\t';
  game_data_save_disp.msg_id = 0x1e;
  return;
}

static void GameDataSaveMcSystemLoadWait() {
	int mc_res;
	int size;
	CLEAR_FLG_CTRL buff_flg_ctrl;
	
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong in_v1;
  ulong in_a3;
  ulong uVar8;
  ulong in_t0;
  ulong uVar9;
  CLEAR_FLG_CTRL buff_flg_ctrl;
  CLEAR_FLG_CTRL CStack_40;
  
  buff_flg_ctrl.accessory_flg.flag_32[0] = (int  [1])0x0;
  buff_flg_ctrl.ending_movie_flg.flag_32[0] = (int  [1])0x0;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  buff_flg_ctrl.costume_flg.flag_32[0] = (int  [1])0x0;
  buff_flg_ctrl.difficulty_flg.flag_32[0] = (int  [1])0x0;
                    /* end of inlined section */
  memset(&buff_flg_ctrl,0,0x18);
  iVar5 = MemoryCardFileLoadMain__Fv();
  if (iVar5 == 1) {
    iVar6 = GetMemoryCardDataSize__Fii(0,0);
    iVar7 = MemoryCardCheckFileBroken__FPvi(game_data_buff_addr,iVar6);
    if (iVar7 == 0) {
      game_data_save_disp.msg_id = 0x19;
      game_data_save_ctrl.mc_step = '\f';
    }
    else {
      iVar6 = MemoryCardCheckNewFileLoad__FPvi(game_data_buff_addr,iVar6);
      if (iVar6 == 0) {
        uVar2 = (int)game_data_buff_addr + 7U & 7;
        uVar3 = (uint)game_data_buff_addr & 7;
        buff_flg_ctrl._0_8_ =
             (*(long *)(((int)game_data_buff_addr + 7U) - uVar2) << (7 - uVar2) * 8 |
             in_v1 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
             *(ulong *)((int)game_data_buff_addr - uVar3) >> uVar3 * 8;
        uVar2 = (int)game_data_buff_addr + 0xfU & 7;
        uVar3 = (int)game_data_buff_addr + 8U & 7;
        uVar8 = (*(long *)(((int)game_data_buff_addr + 0xfU) - uVar2) << (7 - uVar2) * 8 |
                in_a3 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(((int)game_data_buff_addr + 8U) - uVar3) >> uVar3 * 8;
        uVar2 = (int)game_data_buff_addr + 0x17U & 7;
        uVar3 = (int)game_data_buff_addr + 0x10U & 7;
        uVar9 = (*(long *)(((int)game_data_buff_addr + 0x17U) - uVar2) << (7 - uVar2) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar2 + 1) * 8) & -1L << (8 - uVar3) * 8 |
                *(ulong *)(((int)game_data_buff_addr + 0x10U) - uVar3) >> uVar3 * 8;
        uVar2 = (uint)&buff_flg_ctrl.field_0x7 & 7;
        puVar4 = (ulong *)(&buff_flg_ctrl.field_0x7 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | (ulong)buff_flg_ctrl._0_8_ >> (7 - uVar2) * 8;
        puVar1 = (undefined *)((int)buff_flg_ctrl.ending_movie_flg.flag_32 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar8 >> (7 - uVar2) * 8;
        puVar1 = (undefined *)((int)buff_flg_ctrl.difficulty_flg.flag_32 + 3);
        uVar2 = (uint)puVar1 & 7;
        puVar4 = (ulong *)(puVar1 + -uVar2);
        *puVar4 = *puVar4 & -1L << (uVar2 + 1) * 8 | uVar9 >> (7 - uVar2) * 8;
        buff_flg_ctrl._8_8_ = uVar8;
        buff_flg_ctrl._16_8_ = uVar9;
        ClearFlgMerging__FG14CLEAR_FLG_CTRLT0(&CStack_40,&buff_flg_ctrl,&clear_flg_ctrl);
        SetClearFlgCtrl__FG14CLEAR_FLG_CTRL(&CStack_40);
      }
      game_data_save_ctrl.mc_step = '\n';
      game_data_save_ctrl.save_file_cnt = 0;
      game_data_save_disp.msg_id = 0x1e;
    }
  }
  else if (iVar5 < 0) {
    game_data_save_disp.msg_id = 7;
    switch(iVar5) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      game_data_save_disp.msg_id = 7;
      break;
    case -3:
      game_data_save_disp.msg_id = 0x19;
      break;
    case -2:
      game_data_save_disp.msg_id = 0xd;
    }
    game_data_save_ctrl.mc_step = '\f';
  }
  if (iVar5 != 0) {
    LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  }
  return;
}

static void GameDataSaveMcSaveInit() {
	static char __FUNCTION__[23] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 83,
		/* [9] = */ 97,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 77,
		/* [13] = */ 99,
		/* [14] = */ 83,
		/* [15] = */ 97,
		/* [16] = */ 118,
		/* [17] = */ 101,
		/* [18] = */ 73,
		/* [19] = */ 110,
		/* [20] = */ 105,
		/* [21] = */ 116,
		/* [22] = */ 0
	};
	static reference_fixed_array<int,3> save_file_label;
	int size;
	char path_name[55];
	
  int iVar1;
  int iVar2;
  char path_name [55];
  
  if (__tmp_10_1067 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    save_file_label_1066 = &DAT_003b3730;
    __tmp_10_1067 = 1;
  }
                    /* end of inlined section */
                    /* end of inlined section */
  memset(path_name,0,0x37);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  *(int *)(save_file_label_1066 + 4) = game_data_save_ctrl.csr + 2;
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  if (game_data_save_ctrl.save_exe_label == '\x01') {
    ingame_wrk.clear_save_flg = game_data_save_ctrl.save_exe_label;
    SetMemoryCardPlayDataHead__Fic((int)game_data_save_ctrl.csr,'\x01');
  }
  else {
    if (game_data_save_ctrl.save_exe_label < '\x02') {
      if (game_data_save_ctrl.save_exe_label == '\0') {
        ingame_wrk.clear_save_flg = '\0';
        SetMemoryCardPlayDataHead__Fic((int)game_data_save_ctrl.csr,'\0');
        goto LAB_001a9198;
      }
    }
    else if (game_data_save_ctrl.save_exe_label == '\x02') {
      SetMemoryCardPlayDataHead__Fic((int)game_data_save_ctrl.csr,ingame_wrk.clear_save_flg);
      goto LAB_001a9198;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
LAB_001a9198:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  MemoryCardSetFilePath__FPcii(path_name,0,*(int *)(save_file_label_1066 + iVar1));
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  iVar1 = GetMemoryCardDataSize__Fii(0,*(int *)(save_file_label_1066 + iVar1));
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  GetGameDataSaveDataMem__FPPvi(&game_data_buff_addr,iVar1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  SetMemoryCardSaveDataToBuff__FPcii
            ((char *)game_data_buff_addr,0,*(int *)(save_file_label_1066 + iVar2));
                    /* end of inlined section */
  MemoryCardFileSaveInit__FiiPcPvi(0,0,path_name,game_data_buff_addr,iVar1);
  game_data_save_disp.msg_id = 0x1e;
  game_data_save_ctrl.save_file_cnt = game_data_save_ctrl.save_file_cnt + 1;
  game_data_save_ctrl.mc_step = '\v';
  if (iVar1 < 1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s size %d\n");
  }
  if (3 < (uint)game_data_save_ctrl.save_file_cnt) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s save_file_cnt %d\n");
  }
  return;
}

static void GameDataSaveMcSaveWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFileSaveMain__Fv();
  if (iVar1 == 1) {
    if (game_data_save_ctrl.save_file_cnt < 3) {
      game_data_save_disp.msg_id = 0x1e;
      game_data_save_ctrl.mc_step = '\n';
    }
    else {
      game_data_save_disp.msg_id = 8;
      game_data_save_ctrl.mc_step = '\x0e';
    }
  }
  else if (iVar1 < 0) {
    game_data_save_disp.msg_id = 7;
    game_data_save_ctrl.mc_step = '\f';
  }
  if (iVar1 != 0) {
    LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  }
  return;
}

static void GameDataSaveMcErrorConfInit() {
	int i;
	
  void **tex_addr;
  int iVar1;
  
  iVar1 = 4;
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  tex_addr = game_data_save_snap_addr;
  do {
    iVar1 = iVar1 + -1;
    LiberateGameDataSaveMem__FPPv(tex_addr);
    tex_addr = tex_addr + 1;
  } while (-1 < iVar1);
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  game_data_save_ctrl.mc_step = '\r';
  game_data_save_ctrl.save_file_cnt = 0;
  return;
}

static void GameDataSaveMcErrorConfWait() {
	int mc_res;
	
  int iVar1;
  
  GameDataSaveMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if ((iVar1 == -1) || (iVar1 == -2)) {
    game_data_save_disp.msg_id = 0;
    game_data_save_ctrl.mc_step = '\0';
  }
  else {
    if (iVar1 == 1) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
      return;
    }
    if (iVar1 < 0) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
    }
  }
  return;
}

static void GameDataSaveMcErrorConfPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  GameDataSaveOutReq__Fv();
  return;
}

static void GameDataSaveMcEndConf() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  GameDataSaveOutReq__Fv();
  return;
}

static void GameDataSaveMcRemakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  game_data_save_ctrl.conf_csr = '\x01';
  game_data_save_ctrl.mc_step = '\x10';
  game_data_save_disp.msg_id = 0x16;
  return;
}

static void GameDataSaveMcRemakeConfWait() {
  GameDataSaveMcRemakeConfPad__Fv();
  GameDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void GameDataSaveMcRemakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (game_data_save_ctrl.conf_csr != '\0') {
        GameDataSaveOutReq__Fv();
        return;
      }
      game_data_save_ctrl.mc_step = '\x11';
      game_data_save_disp.msg_id = 0x12;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    game_data_save_ctrl.conf_csr = game_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameDataSaveMcRemakeDirDelInit() {
  MemoryCardDirDelInit__Fiii(0,0,0);
  game_data_save_disp.msg_id = 0x12;
  game_data_save_ctrl.mc_step = '\x12';
  return;
}

static void GameDataSaveMcRemakeDirDelWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardDirDelMain__Fv();
  if (iVar1 == 1) {
    game_data_save_ctrl.mc_step = '\x15';
    game_data_save_disp.msg_id = 0x12;
  }
  else if (iVar1 < 0) {
    game_data_save_disp.msg_id = 0x13;
    game_data_save_ctrl.mc_step = '\f';
  }
  return;
}

static void GameDataSaveMcNewMakeConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  game_data_save_ctrl.conf_csr = '\x01';
  game_data_save_ctrl.mc_step = '\x14';
  game_data_save_disp.msg_id = 0x15;
  return;
}

static void GameDataSaveMcNewMakeConfWait() {
  GameDataSaveMcNewMakeConfPad__Fv();
  GameDataSaveMcEveryFrameCheck__Fv();
  return;
}

static void GameDataSaveMcNewMakeConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (game_data_save_ctrl.conf_csr != '\0') {
        GameDataSaveOutReq__Fv();
        return;
      }
      game_data_save_ctrl.mc_step = '\x15';
      game_data_save_disp.msg_id = 0x12;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    game_data_save_ctrl.conf_csr = game_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameDataSaveMcNewMakeInit() {
	int buff_size;
	
  int size;
  
  size = GetMemoryCardDirSize__Fi(0);
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  GetGameDataSaveDataMem__FPPvi(&game_data_buff_addr,size);
  MemoryCardNewMakeInit__FiiiPvi(0,0,0,game_data_buff_addr,size);
  game_data_save_ctrl.mc_step = '\x16';
  return;
}

static void GameDataSaveMcNewMakeWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardNewMakeMain__Fv();
  if (iVar1 == 1) {
    MemoryCardPlayDataHeadInit__Fv();
    game_data_save_disp.msg_id = 0x1e;
    game_data_save_ctrl.mc_step = '\x17';
    game_data_save_ctrl.save_file_cnt = 0;
  }
  else if (iVar1 < 0) {
    game_data_save_disp.msg_id = 0x13;
    game_data_save_ctrl.mc_step = '\f';
  }
  if (iVar1 != 0) {
    LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  }
  return;
}

static void GameDataSaveMcNewMakeSaveInit() {
	static char __FUNCTION__[30] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 83,
		/* [9] = */ 97,
		/* [10] = */ 118,
		/* [11] = */ 101,
		/* [12] = */ 77,
		/* [13] = */ 99,
		/* [14] = */ 78,
		/* [15] = */ 101,
		/* [16] = */ 119,
		/* [17] = */ 77,
		/* [18] = */ 97,
		/* [19] = */ 107,
		/* [20] = */ 101,
		/* [21] = */ 83,
		/* [22] = */ 97,
		/* [23] = */ 118,
		/* [24] = */ 101,
		/* [25] = */ 73,
		/* [26] = */ 110,
		/* [27] = */ 105,
		/* [28] = */ 116,
		/* [29] = */ 0
	};
	static reference_fixed_array<int,3> save_file_label;
	int size;
	char path_name[55];
	
  int iVar1;
  int iVar2;
  char path_name [55];
  
  if (__tmp_11_1126 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    save_file_label_1125 = &DAT_003b3798;
    __tmp_11_1126 = 1;
  }
                    /* end of inlined section */
  memset(path_name,0,0x37);
  if (game_data_save_ctrl.save_exe_label == '\x01') {
    ingame_wrk.clear_save_flg = game_data_save_ctrl.save_exe_label;
    SetMemoryCardPlayDataHead__Fic(0,'\x01');
  }
  else {
    if (game_data_save_ctrl.save_exe_label < '\x02') {
      if (game_data_save_ctrl.save_exe_label == '\0') {
        ingame_wrk.clear_save_flg = '\0';
        SetMemoryCardPlayDataHead__Fic(0,'\0');
        goto LAB_001a9b84;
      }
    }
    else if (game_data_save_ctrl.save_exe_label == '\x02') {
      SetMemoryCardPlayDataHead__Fic(0,ingame_wrk.clear_save_flg);
      goto LAB_001a9b84;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
LAB_001a9b84:
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  MemoryCardSetFilePath__FPcii(path_name,0,*(int *)(save_file_label_1125 + iVar1));
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar1 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  iVar1 = GetMemoryCardDataSize__Fii(0,*(int *)(save_file_label_1125 + iVar1));
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  GetGameDataSaveDataMem__FPPvi(&game_data_buff_addr,iVar1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar2 = game_data_save_ctrl.save_file_cnt * 4;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(game_data_save_ctrl.save_file_cnt,3);
  SetMemoryCardSaveDataToBuff__FPcii
            ((char *)game_data_buff_addr,0,*(int *)(save_file_label_1125 + iVar2));
                    /* end of inlined section */
  MemoryCardFileSaveInit__FiiPcPvi(0,0,path_name,game_data_buff_addr,iVar1);
  game_data_save_ctrl.save_file_cnt = game_data_save_ctrl.save_file_cnt + 1;
  game_data_save_ctrl.mc_step = '\x18';
  if (iVar1 < 1) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s size %d\n");
  }
  if (3 < (uint)game_data_save_ctrl.save_file_cnt) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s save_file_cnt %d\n");
  }
  return;
}

static void GameDataSaveMcNewMakeSaveWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFileSaveMain__Fv();
  if (iVar1 == 1) {
    if (game_data_save_ctrl.save_file_cnt < 3) {
      game_data_save_disp.msg_id = 0x1e;
      game_data_save_ctrl.mc_step = '\x17';
    }
    else {
      game_data_save_disp.msg_id = 0x14;
      game_data_save_ctrl.mc_step = '\x0e';
    }
  }
  else if (iVar1 < 0) {
    game_data_save_disp.msg_id = 7;
    game_data_save_ctrl.mc_step = '\f';
  }
  if (iVar1 != 0) {
    LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  }
  return;
}

static void GameDataSaveMcFormatConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  game_data_save_ctrl.conf_csr = '\x01';
  game_data_save_ctrl.mc_step = '\x1a';
  game_data_save_disp.msg_id = 3;
  return;
}

static void GameDataSaveMcFormatConfWait() {
	int mc_res;
	
  int iVar1;
  int iVar2;
  
  GameDataSaveMcFormatConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    iVar2 = 2;
    switch(iVar1) {
    case -0x14:
      iVar2 = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    case -3:
      iVar2 = 2;
      break;
    case -2:
      goto LAB_001a9e30;
    case -1:
      iVar2 = 1;
    }
    game_data_save_ctrl.mc_step = '\f';
    game_data_save_disp.msg_id = iVar2;
  }
LAB_001a9e30:
  return;
}

static void GameDataSaveMcFormatConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (game_data_save_ctrl.conf_csr != '\0') {
        GameDataSaveOutReq__Fv();
        return;
      }
      game_data_save_ctrl.mc_step = '\x1b';
      game_data_save_disp.msg_id = 4;
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameDataSaveOutReq__Fv();
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    game_data_save_ctrl.conf_csr = game_data_save_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameDataSaveMcFormatInit() {
  MemoryCardFormatInit__Fii(0,0);
  game_data_save_disp.msg_id = 4;
  game_data_save_ctrl.mc_step = '\x1c';
  return;
}

static void GameDataSaveMcFormatWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardFormatMain__Fv();
  if (iVar1 == 1) {
    game_data_save_ctrl.mc_step = '\x1d';
    game_data_save_disp.msg_id = 0x39;
  }
  else if (iVar1 < 0) {
    game_data_save_disp.msg_id = 5;
    game_data_save_ctrl.mc_step = '\f';
  }
  return;
}

static void GameDataSaveMcFormatEndInit() {
  game_data_save_ctrl.mc_step = '\x1e';
  game_data_save_disp.msg_id = 0x39;
  game_data_save_ctrl.format_end_cnt = '\0';
  return;
}

static void GameDataSaveMcFormatEndWait() {
  game_data_save_ctrl.format_end_cnt = game_data_save_ctrl.format_end_cnt + '\x01';
  if (';' < game_data_save_ctrl.format_end_cnt) {
    game_data_save_ctrl.mc_step = '\x15';
    game_data_save_disp.msg_id = 0x12;
  }
  return;
}

static void GameDataSaveMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    game_data_save_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      game_data_save_disp.msg_id = 1;
      break;
    case -0x13:
    case -0x12:
    case -0x11:
    case -0x10:
    case -0xf:
    case -0xe:
    case -0xd:
    case -0xc:
    case -0xb:
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    case -3:
      game_data_save_disp.msg_id = 2;
      break;
    case -2:
      game_data_save_disp.msg_id = 0xd;
      break;
    case -1:
      game_data_save_disp.msg_id = 1;
    }
    game_data_save_ctrl.mc_step = '\f';
  }
  return;
}

void GameDataSaveEnd() {
	int i;
	
  void **tex_addr;
  int iVar1;
  
  iVar1 = 4;
  LiberateGameDataSaveMem__FPPv(&game_data_buff_addr);
  tex_addr = game_data_save_snap_addr;
  do {
    iVar1 = iVar1 + -1;
    LiberateGameDataSaveMem__FPPv(tex_addr);
    tex_addr = tex_addr + 1;
  } while (-1 < iVar1);
  MemoryCardEnd__Fv();
  return;
}

void GameDataSaveTexMemFree() {
  LiberateGameDataSaveMem__FPPv(&save_load_tex_addr);
  LiberateGameDataSaveMem__FPPv(&outgame_cmn_tex_addr);
  GameDataSaveMemGet = (undefined1 *)0x0;
  GameDataSaveMemFree = (undefined1 *)0x0;
  return;
}

static void LiberateGameDataSaveMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    (*(code *)GameDataSaveMemFree)(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

static void GameDataSaveDispInit() {
  game_data_save_disp.csr_timer = '\0';
  game_data_save_disp.msg_id = 0;
  game_data_save_disp.anim_step = '\0';
  game_data_save_disp.anim_timer = '\0';
  return;
}

void GameDataSaveDispMain() {
	u_char rgb;
	u_char alpha;
	
  uchar alpha;
  uchar rgb;
  
  rgb = 0x80;
  if (game_data_save_ctrl.step < '\x02') {
    return;
  }
  alpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                    (&game_data_save_disp.anim_step,&game_data_save_disp.anim_timer,10,5);
  if (game_data_save_disp.anim_step == '\x04') {
    return;
  }
  SaveLoadCmnBaseDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,0);
  SaveLoadTitleFrameDisp__FiiUcPv(0,0,alpha,outgame_cmn_tex_addr);
  SaveLoadTitleSaveDisp__FiiUcPv(0,0,alpha,save_load_tex_addr);
  switch(game_data_save_ctrl.mc_step) {
  case '\x06':
    GameData_SaveFileSelDisp__FUc(alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&game_data_save_disp.csr_timer,&rgb);
    SaveLoadCursorDisp__FiiUcUcPvi(0,0,alpha,rgb,save_load_tex_addr,(int)game_data_save_ctrl.csr);
    SaveLoadFileSelMsgWinDisp__FiiUc(0,0,alpha);
    SaveLoadFileSelMsgDisp__FiiUci(0,0,alpha,10);
    break;
  case '\a':
    GameData_SaveFileSelDisp__FUc(alpha);
    SaveLoadFileSelYesNoWinDisp__FiiUci(0,0,alpha,(int)game_data_save_ctrl.conf_csr);
    SaveLoadFileSelMsgDisp__FiiUci(0,0,alpha,game_data_save_disp.msg_id);
    break;
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\x0e':
    GameData_SaveFileSelDisp__FUc(alpha);
    SaveLoadMcStateMsgWinDisp__FiiUc(0,0,alpha);
    goto LAB_001aa388;
  case '\f':
  case '\r':
  case '\x11':
  case '\x12':
  case '\x15':
  case '\x16':
  case '\x17':
  case '\x18':
  default:
    SaveLoadMcCheckDisp__FiiUcPv(0,0,alpha,save_load_tex_addr);
    SaveLoadMcStateMsgWinDisp__FiiUc(0,0,alpha);
    SaveLoadMcStateMsgDisp__FiiUci(0,0,alpha,game_data_save_disp.msg_id);
    break;
  case '\x0f':
  case '\x10':
  case '\x13':
  case '\x14':
  case '\x19':
  case '\x1a':
    SaveLoadMcCheckDisp__FiiUcPv(0,0,alpha,save_load_tex_addr);
    SaveLoadMcSelYesNoWinDisp__FiiUci(0,0,alpha,(int)game_data_save_ctrl.conf_csr);
LAB_001aa388:
    SaveLoadMcStateMsgDisp__FiiUci(0,0,alpha,game_data_save_disp.msg_id);
  }
  return;
}

static void GameData_SaveFileSelDisp(u_char alpha) {
	int i;
	
  int iVar1;
  int room;
  int data_num;
  long lVar2;
  TIME_INFO TStack_70;
  TIME_INFO TStack_60;
  
  lVar2 = 0;
  do {
    data_num = (int)lVar2;
    iVar1 = GetMemoryCardPlayDataFlg__Fi(data_num);
    if (iVar1 == 0) {
      if (game_data_save_ctrl.csr == lVar2) {
        SaveLoadSelLineDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      }
      else {
        SaveLoadNonSelLineDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      }
      SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      lVar2 = (long)(data_num + 1);
    }
    else {
      if (game_data_save_snap_addr[data_num] != (void *)0x0) {
        SaveLoadSnapShotDisp__FiiUcPvi(0,0,alpha,game_data_save_snap_addr[data_num],data_num);
      }
      if (game_data_save_ctrl.csr == lVar2) {
        SaveLoadSelNoDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
        SaveLoadSelDataNumDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
        iVar1 = GetMemoryCardClearDataFlg__Fi(data_num);
        if (iVar1 == 0) {
          iVar1 = GetMemoryCardPlayDataChapter__Fi(data_num);
          room = GetMemoryCardPlayDataRoomLabel__Fi(data_num);
          GetMemoryCardPlayDataPlayTime__Fi(&TStack_60,data_num);
          SaveLoadMcPlayDataInfoDisp__FiiUciiG9TIME_INFO(0,0,alpha,iVar1,room,&TStack_60);
        }
        else {
          GetMemoryCardPlayDataPlayTime__Fi(&TStack_70,data_num);
          SaveLoadMcClearPlayDataInfoDisp__FiiUcG9TIME_INFO(0,0,alpha,&TStack_70);
        }
      }
      else {
        SaveLoadNonSelNoDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
        SaveLoadNonSelDataNumDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      }
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
      iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
      if (iVar1 < 1) {
        SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
        lVar2 = (long)(data_num + 1);
      }
      else {
        SaveLoadClearFlareDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,data_num);
        iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
        SaveLoadClearNumberDisp__FiiiUciUciPv(iVar1,0,0,alpha,0,'\x01',data_num,save_load_tex_addr);
        lVar2 = (long)(data_num + 1);
      }
    }
  } while (lVar2 < 5);
  SaveLoadSelFlareDisp__FiiUcPvi(0,0,alpha,save_load_tex_addr,(int)game_data_save_ctrl.csr);
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int *ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    game_data_save_snap_tex.field0_0x0.m_aData = (fixed_array_base<int,5,int_*>)&PTR_003b38a8;
  }
  return;
}

static void global constructors keyed to GameDataSaveInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
