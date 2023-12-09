// STATUS: NOT STARTED

#include "gameover_menu_load.h"

typedef struct {
	char step;
	char mc_step;
	short int wait_timer;
	char csr;
	char conf_csr;
	char csr_timer;
} GAMEOVER_LOAD_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
	char csr_timer;
	int msg_id;
} GAMEOVER_LOAD_DISP;

static void *gameover_load_tex_addr = NULL;
static void *gameover_load_cmn_tex_addr = NULL;
static void *load_data_buff = NULL;

static void *gameover_load_snap_addr[5] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL
};

static reference_fixed_array<int,5> gameover_load_snap_tex;
static GAMEOVER_LOAD_CTRL gameover_load_ctrl;
static GAMEOVER_LOAD_DISP gameover_load_disp;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b3d80;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f0fc0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f0fc8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3b3dc8,_max);
  }
  return (uint **)0x0;
}

void GameOverLoadInit() {
	int i;
	
  void *data_addr;
  int iVar1;
  int iVar2;
  
  IngameWrkInit__Fii(0,0);
  GameOverLoadCtrlInit__Fv();
  GameOverLoadDispInit__Fv();
  MemoryCardExeInit__Fv();
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  iVar1 = 0;
  do {
    data_addr = gameover_load_snap_addr[iVar1];
    if (data_addr != (void *)0x0) {
      LiberateDataMemoryArea__FPv(data_addr);
      gameover_load_snap_addr[iVar1] = (void *)0x0;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    *(undefined4 *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar1 * 4) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 < 5);
  return;
}

static void GameOverLoadCtrlInit() {
  gameover_load_ctrl.conf_csr = '\x01';
  gameover_load_ctrl.wait_timer = 0;
  gameover_load_ctrl.step = '\0';
  gameover_load_ctrl.mc_step = '\0';
  gameover_load_ctrl.csr = '\0';
  return;
}

void GetGameOverLoadTexMem() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 71,
		/* [4] = */ 97,
		/* [5] = */ 109,
		/* [6] = */ 101,
		/* [7] = */ 79,
		/* [8] = */ 118,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 76,
		/* [12] = */ 111,
		/* [13] = */ 97,
		/* [14] = */ 100,
		/* [15] = */ 84,
		/* [16] = */ 101,
		/* [17] = */ 120,
		/* [18] = */ 77,
		/* [19] = */ 101,
		/* [20] = */ 109,
		/* [21] = */ 0
	};
	
  uchar uVar1;
  uint uVar2;
  
  ReleaseGameOverLoadTexMem__Fv();
  if (gameover_load_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    uVar2 = GetFileSize((char)uVar1 + 0x1177);
    gameover_load_tex_addr = mem_utilGetMem__Fi(uVar2);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetGameOverLoadTexMem");
  }
  if (gameover_load_cmn_tex_addr == (void *)0x0) {
    uVar2 = GetFileSize(0x13);
    gameover_load_cmn_tex_addr = mem_utilGetMem__Fi(uVar2);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetGameOverLoadTexMem");
  }
  return;
}

void GameOverLoadDataLoadReq() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x1177,gameover_load_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  FileLoadReqEE(0x13,gameover_load_cmn_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

int GameOverLoadDataLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1177,gameover_load_tex_addr);
  if (iVar2 != 0) {
    iVar2 = FileLoadIsEnd2(0x13,gameover_load_cmn_tex_addr);
    uVar3 = (uint)(iVar2 != 0);
  }
  return uVar3;
}

void GameOverLoadMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	
  int iVar1;
  
  if (gameover_load_ctrl.step == '\x01') {
    GameOverLoadMcMain__Fv();
    return;
  }
  if (gameover_load_ctrl.step < '\x02') {
    if (gameover_load_ctrl.step == '\0') {
      iVar1 = GameOverLoadDataLoadWait__Fv();
      if (iVar1 == 0) {
        return;
      }
      gameover_load_ctrl.step = '\x01';
      gameover_load_ctrl.mc_step = '\0';
      return;
    }
  }
  else if (gameover_load_ctrl.step == '\x02') {
    if (gameover_load_disp.anim_step != '\x04') {
      return;
    }
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMEOVER_MENU_TOP);
    return;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void GameOverLoadReturnMenu() {
  gameover_load_ctrl.step = '\x02';
  gameover_load_disp.anim_step = '\x03';
  gameover_load_disp.anim_timer = '\0';
  return;
}

static void GameOverLoadMcMain() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 77,
		/* [13] = */ 99,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 105,
		/* [17] = */ 110,
		/* [18] = */ 0
	};
	
  switch(gameover_load_ctrl.mc_step) {
  case '\0':
    GameOverLoadMcCheckInit__Fv();
  case '\x01':
    GameOverLoadMcCheckWait__Fv();
    return;
  case '\x02':
    GameOverLoadMcHeadLoadInit__Fv();
  case '\x03':
    GameOverLoadMcHeadLoadWait__Fv();
    return;
  case '\x04':
    GameOverLoadMcSnapLoadInit__Fv();
  case '\x05':
    GameOverLoadMcSnapLoadWait__Fv();
    return;
  case '\x06':
    GameOverLoadMcLoadFileSel__Fv();
    return;
  case '\a':
    GameOverLoadMcLoadConf__Fv();
    return;
  case '\b':
    GameOverLoadMcSysLoadInit__Fv();
  case '\t':
    GameOverLoadMcSysLoadWait__Fv();
    return;
  case '\n':
    GameOverLoadMcLoadInit__Fv();
  case '\v':
    GameOverLoadMcLoadWait__Fv();
    return;
  case '\f':
    GameOverLoadMcErrorConfInit__Fv();
  case '\r':
    GameOverLoadMcErrorConfWait__Fv();
    return;
  case '\x0e':
    GameOverLoadMcEndConf__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    return;
  }
}

static void GameOverLoadMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  gameover_load_ctrl.mc_step = '\x01';
  return;
}

static void GameOverLoadMcCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 != 0) {
      gameover_load_ctrl.mc_step = '\x02';
      gameover_load_disp.msg_id = 0;
      return;
    }
    gameover_load_disp.msg_id = 0x19;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    gameover_load_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      gameover_load_disp.msg_id = 1;
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
      gameover_load_disp.msg_id = 2;
      break;
    case -6:
      gameover_load_disp.msg_id = 0x19;
      break;
    case -4:
      gameover_load_disp.msg_id = 0x18;
      break;
    case -2:
      gameover_load_disp.msg_id = 0x18;
      break;
    case -1:
      gameover_load_ctrl.mc_step = '\x02';
      gameover_load_disp.msg_id = 0;
      return;
    }
  }
  gameover_load_ctrl.mc_step = '\f';
  return;
}

static void GameOverLoadMcHeadLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  MemoryCardSetFilePath__FPcii(path_name,0,1);
  size = GetMemoryCardDataSize__Fii(0,1);
  load_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,load_data_buff,size);
  gameover_load_disp.msg_id = 0;
  gameover_load_ctrl.mc_step = '\x03';
  return;
}

static void GameOverLoadMcHeadLoadWait() {
	int mc_res;
	int size;
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,1);
    iVar3 = MemoryCardCheckFileBroken__FPvi(load_data_buff,iVar2);
    if (iVar3 == 0) {
      iVar2 = 0x19;
    }
    else {
      iVar3 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2);
      iVar2 = 0x21;
      if (iVar3 == 0) {
        DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,1);
        gameover_load_disp.msg_id = 0x21;
        iVar2 = 0;
        gameover_load_ctrl.mc_step = '\f';
        do {
          iVar3 = GetMemoryCardPlayDataFlg__Fi(iVar2);
          iVar2 = iVar2 + 1;
          if (iVar3 == 1) {
            gameover_load_disp.msg_id = 0;
            gameover_load_ctrl.mc_step = '\x04';
          }
        } while (iVar2 < 5);
        goto LAB_001ad820;
      }
    }
    gameover_load_ctrl.mc_step = '\f';
    gameover_load_disp.msg_id = iVar2;
  }
  else if (iVar1 < 0) {
    gameover_load_disp.msg_id = 0xf;
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      gameover_load_disp.msg_id = 0xf;
      break;
    case -3:
      gameover_load_disp.msg_id = 0x19;
      break;
    case -2:
      gameover_load_disp.msg_id = 0x18;
    }
    gameover_load_ctrl.mc_step = '\f';
  }
LAB_001ad820:
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void GameOverLoadMcSnapLoadInit() {
	int i;
	
  int *piVar1;
  int iVar2;
  uint size;
  void *pvVar3;
  int iVar4;
  int data_num;
  void **ppvVar5;
  int iVar6;
  ROOM_INFO_DAT *pRVar7;
  
  data_num = 0;
  ppvVar5 = gameover_load_snap_addr;
  iVar6 = 0;
  do {
    iVar2 = GetMemoryCardPlayDataFlg__Fi(data_num);
    pvVar3 = *ppvVar5;
    if (iVar2 == 1) {
      if (pvVar3 != (void *)0x0) {
        LiberateDataMemoryArea__FPv(pvVar3);
        *ppvVar5 = (void *)0x0;
      }
      iVar2 = GetMemoryCardClearDataFlg__Fi(data_num);
      if (iVar2 == 0) {
        pRVar7 = room_info_dat;
        if (room_info_dat[0].map_label != -1) {
          iVar2 = 0;
          do {
            iVar4 = GetMemoryCardPlayDataRoomLabel__Fi(data_num);
            piVar1 = &pRVar7->room_label;
            pRVar7 = pRVar7 + 1;
            if (*piVar1 == iVar4) {
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
              *(undefined4 *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar6) =
                   *(undefined4 *)((int)&room_info_dat[0].snap_tex_label + iVar2);
              goto LAB_001ad930;
            }
            iVar2 = iVar2 + 0x14;
          } while (pRVar7->map_label != -1);
        }
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        *(undefined4 *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar6) = 0x117c;
LAB_001ad930:
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        size = GetFileSize(*(int *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar6));
        pvVar3 = GetDataMemoryArea__Fi(size);
        *ppvVar5 = pvVar3;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        FileLoadReqEE(*(int *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar6),*ppvVar5,5,
                      (undefined1 *)0x0,(void *)0x0);
                    /* end of inlined section */
      }
    }
    else {
      if (pvVar3 != (void *)0x0) {
        LiberateDataMemoryArea__FPv(pvVar3);
        *ppvVar5 = (void *)0x0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      }
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
      *(undefined4 *)((int)gameover_load_snap_tex.field0_0x0.m_aData + iVar6) = 0xffffffff;
    }
    data_num = data_num + 1;
    ppvVar5 = ppvVar5 + 1;
    iVar6 = iVar6 + 4;
    if (4 < data_num) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
      gameover_load_disp.msg_id = 0;
      gameover_load_ctrl.mc_step = '\x05';
      return;
    }
  } while( true );
}

static void GameOverLoadMcSnapLoadWait() {
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
      iVar2 = FileLoadIsEnd2(*(int *)((int)gameover_load_snap_tex.field0_0x0.m_aData + data_num * 4)
                             ,gameover_load_snap_addr[data_num]);
      if (iVar2 == 0) {
        gameover_load_ctrl.mc_step = '\x05';
        gameover_load_disp.msg_id = 0;
        break;
      }
                    /* end of inlined section */
      gameover_load_disp.msg_id = 0x22;
      gameover_load_ctrl.mc_step = '\x06';
      if (!bVar1) {
        gameover_load_ctrl.csr = (char)data_num;
        bVar1 = true;
      }
    }
    data_num = data_num + 1;
  } while (data_num < 5);
  GameOverLoadMcEveryFrameCheck__Fv();
  return;
}

static void GameOverLoadMcLoadFileSel() {
  GameOverLoadMcLoadFileSelPad__Fv();
  GameOverLoadMcEveryFrameCheck__Fv();
  return;
}

static void GameOverLoadMcLoadFileSelPad() {
	int i;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        gameover_load_ctrl.mc_step = '\a';
        gameover_load_ctrl.conf_csr = '\x01';
        gameover_load_disp.msg_id = 0xe;
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        GameOverLoadReturnMenu__Fv();
      }
    }
    else {
      iVar3 = 0;
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      bVar1 = true;
      do {
        iVar3 = iVar3 + 1;
        if (!bVar1) {
          return;
        }
        iVar2 = (gameover_load_ctrl.csr + 1) % 5;
        gameover_load_ctrl.csr = (char)iVar2;
        iVar2 = GetMemoryCardPlayDataFlg__Fi(iVar2);
        bVar1 = iVar3 < 5;
      } while (iVar2 != 1);
    }
  }
  else {
    iVar3 = 0;
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    bVar1 = true;
    do {
      iVar3 = iVar3 + 1;
      if (!bVar1) {
        return;
      }
      iVar2 = (gameover_load_ctrl.csr + 4) % 5;
      gameover_load_ctrl.csr = (char)iVar2;
      iVar2 = GetMemoryCardPlayDataFlg__Fi(iVar2);
      bVar1 = iVar3 < 5;
    } while (iVar2 != 1);
  }
  return;
}

static void GameOverLoadMcLoadConf() {
  GameOverLoadMcLoadConfPad__Fv();
  GameOverLoadMcEveryFrameCheck__Fv();
  return;
}

static void GameOverLoadMcLoadConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (gameover_load_ctrl.conf_csr == '\0') {
        gameover_load_disp.msg_id = 0x1d;
        gameover_load_ctrl.mc_step = '\b';
      }
      else {
        gameover_load_disp.msg_id = 0x22;
        gameover_load_ctrl.mc_step = '\x06';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      gameover_load_disp.msg_id = 0x22;
      gameover_load_ctrl.mc_step = '\x06';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    gameover_load_ctrl.conf_csr = gameover_load_ctrl.conf_csr ^ 1;
  }
  return;
}

static void GameOverLoadMcSysLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  MemoryCardSetFilePath__FPcii(path_name,0,0);
  size = GetMemoryCardDataSize__Fii(0,0);
  load_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,load_data_buff,size);
  gameover_load_disp.msg_id = 0x1d;
  gameover_load_ctrl.mc_step = '\t';
  return;
}

static void GameOverLoadMcSysLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,0);
    iVar3 = MemoryCardCheckFileBroken__FPvi(load_data_buff,iVar2);
    if ((iVar3 == 0) || (iVar2 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2), iVar2 != 0)
       ) {
      gameover_load_ctrl.mc_step = '\f';
      gameover_load_disp.msg_id = 0x33;
    }
    else {
      DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,0);
      OptSoundSetupRef__FP10OPTION_WRK(&opt_wrk);
      gameover_load_disp.msg_id = 0x20;
      gameover_load_ctrl.mc_step = '\n';
    }
  }
  else if (iVar1 < 0) {
    gameover_load_disp.msg_id = 0xf;
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      gameover_load_disp.msg_id = 0xf;
      break;
    case -3:
      gameover_load_disp.msg_id = 0x33;
      break;
    case -2:
      gameover_load_disp.msg_id = 0x18;
    }
    gameover_load_ctrl.mc_step = '\f';
  }
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void GameOverLoadMcLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  MemoryCardSetFilePath__FPcii(path_name,0,gameover_load_ctrl.csr + 2);
  size = GetMemoryCardDataSize__Fii(0,gameover_load_ctrl.csr + 2);
  load_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,load_data_buff,size);
  gameover_load_ctrl.mc_step = '\v';
  gameover_load_disp.msg_id = 0x20;
  return;
}

static void GameOverLoadMcLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,gameover_load_ctrl.csr + 2);
    iVar3 = MemoryCardCheckFileBroken__FPvi(load_data_buff,iVar2);
    if ((iVar3 == 0) || (iVar2 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2), iVar2 != 0)
       ) {
      gameover_load_ctrl.mc_step = '\f';
      gameover_load_disp.msg_id = 0x34;
    }
    else {
      DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,gameover_load_ctrl.csr + 2);
      GetLoadingTexMem__Fv();
      LoadingTexLoadReq__Fv();
      gameover_load_ctrl.mc_step = '\x0e';
      gameover_load_disp.msg_id = 0x10;
    }
  }
  else if (iVar1 < 0) {
    gameover_load_disp.msg_id = 0xf;
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
      gameover_load_disp.msg_id = 0xf;
      break;
    case -3:
      gameover_load_disp.msg_id = 0x34;
      break;
    case -2:
      gameover_load_disp.msg_id = 0x18;
    }
    gameover_load_ctrl.mc_step = '\f';
  }
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void GameOverLoadMcErrorConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  gameover_load_ctrl.mc_step = '\r';
  return;
}

static void GameOverLoadMcErrorConfWait() {
	int i;
	int mc_res;
	
  int iVar1;
  void **ppvVar2;
  
  GameOverLoadMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 == -1) {
    if (load_data_buff != (void *)0x0) {
      LiberateDataMemoryArea__FPv(load_data_buff);
      load_data_buff = (void *)0x0;
    }
    iVar1 = 4;
    ppvVar2 = gameover_load_snap_addr;
    do {
      iVar1 = iVar1 + -1;
      if (*ppvVar2 != (void *)0x0) {
        LiberateDataMemoryArea__FPv(*ppvVar2);
        *ppvVar2 = (void *)0x0;
      }
      ppvVar2 = ppvVar2 + 1;
    } while (-1 < iVar1);
    gameover_load_disp.msg_id = 0;
    gameover_load_ctrl.mc_step = '\0';
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

static void GameOverLoadMcErrorConfPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      GameOverLoadReturnMenu__Fv();
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  GameOverLoadReturnMenu__Fv();
  return;
}

static void GameOverLoadMcEndConf() {
  int iVar1;
  
  iVar1 = LoadingTexLoadWait__Fv();
  if (iVar1 != 0) {
    GameOverLoadMcEndConfPad__Fv();
  }
  return;
}

static void GameOverLoadMcEndConfPad() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ('\0' < ingame_wrk.mClearCnt.mValue) {
                    /* end of inlined section */
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_SETUPMENU);
      return;
    }
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_SAVE);
    return;
  }
  if (*paddat[1] == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if ('\0' < ingame_wrk.mClearCnt.mValue) {
                    /* end of inlined section */
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_SETUPMENU);
      return;
    }
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_SAVE);
  }
  return;
}

static void GameOverLoadMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 < 0) {
    gameover_load_disp.msg_id = 2;
    switch(iVar1) {
    case -0x14:
      gameover_load_disp.msg_id = 1;
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
      gameover_load_disp.msg_id = 2;
      break;
    case -2:
      gameover_load_disp.msg_id = 0x18;
      break;
    case -1:
      gameover_load_disp.msg_id = 1;
    }
    gameover_load_ctrl.mc_step = '\f';
  }
  return;
}

void GameOverLoadEnd() {
	int i;
	
  void **ppvVar1;
  int iVar2;
  
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  iVar2 = 4;
  ppvVar1 = gameover_load_snap_addr;
  do {
    iVar2 = iVar2 + -1;
    if (*ppvVar1 != (void *)0x0) {
      LiberateDataMemoryArea__FPv(*ppvVar1);
      *ppvVar1 = (void *)0x0;
    }
    ppvVar1 = ppvVar1 + 1;
  } while (-1 < iVar2);
  MemoryCardEnd__Fv();
  return;
}

void ReleaseGameOverLoadTexMem() {
  if (gameover_load_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(gameover_load_tex_addr);
    gameover_load_tex_addr = (void *)0x0;
  }
  if (gameover_load_cmn_tex_addr != (void *)0x0) {
    mem_utilFreeMem__FPv(gameover_load_cmn_tex_addr);
    gameover_load_cmn_tex_addr = (void *)0x0;
  }
  return;
}

static void GameOverLoadDispInit() {
  gameover_load_disp.msg_id = 0;
  gameover_load_disp.anim_step = '\0';
  gameover_load_disp.anim_timer = '\0';
  gameover_load_disp.csr_timer = '\0';
  return;
}

void GameOverLoadDispMain() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 97,
		/* [2] = */ 109,
		/* [3] = */ 101,
		/* [4] = */ 79,
		/* [5] = */ 118,
		/* [6] = */ 101,
		/* [7] = */ 114,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 68,
		/* [13] = */ 105,
		/* [14] = */ 115,
		/* [15] = */ 112,
		/* [16] = */ 77,
		/* [17] = */ 97,
		/* [18] = */ 105,
		/* [19] = */ 110,
		/* [20] = */ 0
	};
	u_char rgb;
	u_char alpha;
	
  uchar alpha;
  uchar rgb;
  
  rgb = 0x80;
  if (gameover_load_ctrl.step < '\x01') {
    return;
  }
  alpha = Zero2Anim2D_InOutAnimCtrl__FPcT0ss
                    (&gameover_load_disp.anim_step,&gameover_load_disp.anim_timer,10,5);
  if (gameover_load_disp.anim_step == '\x04') {
    return;
  }
  SaveLoadCmnBaseDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,0);
  SaveLoadTitleFrameDisp__FiiUcPv(0,0,alpha,gameover_load_cmn_tex_addr);
  SaveLoadTitleLoadDisp__FiiUcPv(0,0,alpha,gameover_load_tex_addr);
  switch(gameover_load_ctrl.mc_step) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\f':
  case '\r':
    SaveLoadMcCheckDisp__FiiUcPv(0,0,alpha,gameover_load_tex_addr);
    goto LAB_001ae7bc;
  case '\x06':
    GameOverLoadFileSelDisp__FUc(alpha);
    Zero2Anim2D_CsrAnimCtrl__FPcPUc(&gameover_load_disp.csr_timer,&rgb);
    SaveLoadCursorDisp__FiiUcUcPvi(0,0,alpha,rgb,gameover_load_tex_addr,(int)gameover_load_ctrl.csr)
    ;
    SaveLoadFileSelMsgWinDisp__FiiUc(0,0,alpha);
    SaveLoadFileSelMsgDisp__FiiUci(0,0,alpha,0x22);
    break;
  case '\a':
    GameOverLoadFileSelDisp__FUc(alpha);
    SaveLoadFileSelYesNoWinDisp__FiiUci(0,0,alpha,(int)gameover_load_ctrl.conf_csr);
    SaveLoadFileSelMsgDisp__FiiUci(0,0,alpha,gameover_load_disp.msg_id);
    break;
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\x0e':
    GameOverLoadFileSelDisp__FUc(alpha);
LAB_001ae7bc:
    SaveLoadMcStateMsgWinDisp__FiiUc(0,0,alpha);
    SaveLoadMcStateMsgDisp__FiiUci(0,0,alpha,gameover_load_disp.msg_id);
    break;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void GameOverLoadFileSelDisp(u_char alpha) {
	int i;
	
  int iVar1;
  int room;
  int data_num;
  long lVar2;
  TIME_INFO TStack_60;
  TIME_INFO TStack_50;
  
  lVar2 = 0;
  do {
    data_num = (int)lVar2;
    iVar1 = GetMemoryCardPlayDataFlg__Fi(data_num);
    if (iVar1 == 0) {
      if (gameover_load_ctrl.csr == lVar2) {
        SaveLoadSelLineDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      }
      else {
        SaveLoadNonSelLineDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      }
      SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      lVar2 = (long)(data_num + 1);
    }
    else {
      if (gameover_load_snap_addr[data_num] != (void *)0x0) {
        SaveLoadSnapShotDisp__FiiUcPvi(0,0,alpha,gameover_load_snap_addr[data_num],data_num);
      }
      if (gameover_load_ctrl.csr == lVar2) {
        SaveLoadSelNoDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
        SaveLoadSelDataNumDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
        iVar1 = GetMemoryCardClearDataFlg__Fi(data_num);
        if (iVar1 == 0) {
          iVar1 = GetMemoryCardPlayDataChapter__Fi(data_num);
          room = GetMemoryCardPlayDataRoomLabel__Fi(data_num);
          GetMemoryCardPlayDataPlayTime__Fi(&TStack_50,data_num);
          SaveLoadMcPlayDataInfoDisp__FiiUciiG9TIME_INFO(0,0,alpha,iVar1,room,&TStack_50);
        }
        else {
          GetMemoryCardPlayDataPlayTime__Fi(&TStack_60,data_num);
          SaveLoadMcClearPlayDataInfoDisp__FiiUcG9TIME_INFO(0,0,alpha,&TStack_60);
        }
      }
      else {
        SaveLoadNonSelNoDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
        SaveLoadNonSelDataNumDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      }
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
      iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
      if (iVar1 < 1) {
        SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
        lVar2 = (long)(data_num + 1);
      }
      else {
        SaveLoadClearFlareDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,data_num);
        iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
        SaveLoadClearNumberDisp__FiiiUciUciPv
                  (iVar1,0,0,alpha,0,'\x01',data_num,gameover_load_tex_addr);
        lVar2 = (long)(data_num + 1);
      }
    }
  } while (lVar2 < 5);
  SaveLoadSelFlareDisp__FiiUcPvi(0,0,alpha,gameover_load_tex_addr,(int)gameover_load_ctrl.csr);
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
    gameover_load_snap_tex.field0_0x0.m_aData = (fixed_array_base<int,5,int_*>)&PTR_003b4070;
  }
  return;
}

static void global constructors keyed to GameOverLoadInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
