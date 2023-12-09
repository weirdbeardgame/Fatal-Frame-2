// STATUS: NOT STARTED

#include "loadgame.h"

typedef struct {
	char step;
	char csr;
	char conf_csr;
	char csr_timer;
	int msg_id;
	short int wait_timer;
} LOAD_GAME_CTRL;

static void *load_game_tex_addr = NULL;
static void *load_data_buff = NULL;

static void *load_game_snap_addr[5] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL
};

static reference_fixed_array<int,5> load_game_snap_tex;
static LOAD_GAME_CTRL load_game_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba510;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f1880,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f1888,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3ba558,_max);
  }
  return (uint **)0x0;
}

void LoadGameInit() {
	int i;
	
  void *data_addr;
  int iVar1;
  int iVar2;
  
  IngameWrkInit__Fii(0,0);
  LoadGameCtrlInit__Fv();
  MemoryCardExeInit__Fv();
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  iVar1 = 0;
  do {
    data_addr = load_game_snap_addr[iVar1];
    if (data_addr != (void *)0x0) {
      LiberateDataMemoryArea__FPv(data_addr);
      load_game_snap_addr[iVar1] = (void *)0x0;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    *(undefined4 *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar1 * 4) = 0xffffffff;
    iVar1 = iVar2;
  } while (iVar2 < 5);
  return;
}

static void LoadGameCtrlInit() {
  load_game_ctrl.conf_csr = '\x01';
  load_game_ctrl.wait_timer = 0;
  load_game_ctrl.step = '\0';
  load_game_ctrl.csr = '\0';
  load_game_ctrl.csr_timer = '\0';
  load_game_ctrl.msg_id = 0;
  return;
}

void GetLoadGameTexMem() {
	static char __FUNCTION__[18] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 76,
		/* [4] = */ 111,
		/* [5] = */ 97,
		/* [6] = */ 100,
		/* [7] = */ 71,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 101,
		/* [11] = */ 84,
		/* [12] = */ 101,
		/* [13] = */ 120,
		/* [14] = */ 77,
		/* [15] = */ 101,
		/* [16] = */ 109,
		/* [17] = */ 0
	};
	
  uchar uVar1;
  uint file_size;
  
  ReleaseLoadGameTexMem__Fv();
  if (load_game_tex_addr == (void *)0x0) {
    uVar1 = GetLanguage__Fv();
    file_size = GetFileSize((char)uVar1 + 0x1177);
    load_game_tex_addr = ol_loadGetHeap__Fi(file_size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetLoadGameTexMem");
  }
  return;
}

void LoadGameDataLoadReq() {
  uchar uVar1;
  
  uVar1 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar1 + 0x1177,load_game_tex_addr,5,(undefined1 *)0x0,(void *)0x0);
  return;
}

int LoadGameDataLoadWait() {
  uchar uVar1;
  int iVar2;
  
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x1177,load_game_tex_addr);
  return (int)(iVar2 != 0);
}

void LoadGameMain() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 76,
		/* [1] = */ 111,
		/* [2] = */ 97,
		/* [3] = */ 100,
		/* [4] = */ 71,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 101,
		/* [8] = */ 77,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 0
	};
	
  switch(load_game_ctrl.step) {
  case '\0':
    LoadGameMcCheckInit__Fv();
  case '\x01':
    LoadGameMcCheckWait__Fv();
    return;
  case '\x02':
    LoadGameMcHeadLoadInit__Fv();
  case '\x03':
    LoadGameMcHeadLoadWait__Fv();
    return;
  case '\x04':
    LoadGameMcSnapLoadInit__Fv();
  case '\x05':
    LoadGameMcSnapLoadWait__Fv();
    return;
  case '\x06':
    LoadGameMcLoadFileSel__Fv();
    return;
  case '\a':
    LoadGameMcLoadConf__Fv();
    return;
  case '\b':
    LoadGameMcSystemLoadInit__Fv();
  case '\t':
    LoadGameMcSystemLoadWait__Fv();
    return;
  case '\n':
    LoadGameMcLoadInit__Fv();
  case '\v':
    LoadGameMcLoadWait__Fv();
    return;
  case '\f':
    LoadGameMcErrorConfInit__Fv();
  case '\r':
    LoadGameMcErrorConfWait__Fv();
    return;
  case '\x0e':
    LoadGameMcEndConf__Fv();
    return;
  default:
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! LoadGameMain");
    return;
  }
}

static void LoadGameMcCheckInit() {
	char path_name[55];
	
  char path_name [55];
  
  memset(path_name,0,0x37);
  MemoryCardMakeSearchDirPath__FPci(path_name,0);
  MemoryCardCheckInit__FiiPc(0,0,path_name);
  load_game_ctrl.step = '\x01';
  return;
}

static void LoadGameMcCheckWait() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckMain__Fv();
  if (iVar1 == 1) {
    iVar1 = MemoryCardCheckDirBroken__Fi(0);
    if (iVar1 != 0) {
      load_game_ctrl.step = '\x02';
      load_game_ctrl.msg_id = 0;
      return;
    }
    load_game_ctrl.msg_id = 0x19;
  }
  else {
    if (-1 < iVar1) {
      return;
    }
    switch(iVar1) {
    case -0x14:
      load_game_ctrl.msg_id = 1;
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
    default:
      load_game_ctrl.msg_id = 2;
      break;
    case -6:
      load_game_ctrl.msg_id = 0x19;
      break;
    case -4:
      load_game_ctrl.msg_id = 0x18;
      break;
    case -2:
      load_game_ctrl.msg_id = 0x18;
      break;
    case -1:
      load_game_ctrl.step = '\x02';
      load_game_ctrl.msg_id = 0;
      return;
    }
  }
  load_game_ctrl.step = '\f';
  return;
}

static void LoadGameMcHeadLoadInit() {
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
  load_game_ctrl.msg_id = 0;
  load_game_ctrl.step = '\x03';
  return;
}

static void LoadGameMcHeadLoadWait() {
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
      load_game_ctrl.msg_id = 0x19;
    }
    else {
      iVar2 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2);
      if (iVar2 == 0) {
        iVar2 = 0;
        DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,1);
        load_game_ctrl.step = '\f';
        load_game_ctrl.msg_id = 0x21;
        do {
          iVar3 = GetMemoryCardPlayDataFlg__Fi(iVar2);
          iVar2 = iVar2 + 1;
          if (iVar3 == 1) {
            load_game_ctrl.msg_id = 0;
            load_game_ctrl.step = '\x04';
          }
        } while (iVar2 < 5);
        goto LAB_001d5618;
      }
      load_game_ctrl.msg_id = 0x21;
    }
    load_game_ctrl.step = '\f';
  }
  else if (iVar1 < 0) {
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    default:
      load_game_ctrl.msg_id = 0xf;
      break;
    case -3:
      load_game_ctrl.msg_id = 0x19;
      break;
    case -2:
      load_game_ctrl.msg_id = 0x18;
    }
    load_game_ctrl.step = '\f';
  }
LAB_001d5618:
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void LoadGameMcSnapLoadInit() {
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
  ppvVar5 = load_game_snap_addr;
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
              *(undefined4 *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar6) =
                   *(undefined4 *)((int)&room_info_dat[0].snap_tex_label + iVar2);
              goto LAB_001d5728;
            }
            iVar2 = iVar2 + 0x14;
          } while (pRVar7->map_label != -1);
        }
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        *(undefined4 *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar6) = 0x117c;
LAB_001d5728:
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        size = GetFileSize(*(int *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar6));
        pvVar3 = GetDataMemoryArea__Fi(size);
        *ppvVar5 = pvVar3;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(data_num,5);
        FileLoadReqEE(*(int *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar6),*ppvVar5,5,
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
      *(undefined4 *)((int)load_game_snap_tex.field0_0x0.m_aData + iVar6) = 0xffffffff;
    }
    data_num = data_num + 1;
    ppvVar5 = ppvVar5 + 1;
    iVar6 = iVar6 + 4;
    if (4 < data_num) {
      MemoryCardCheckEveryFrameInit__Fii(0,0);
      load_game_ctrl.step = '\x05';
      load_game_ctrl.msg_id = 0;
      return;
    }
  } while( true );
}

static void LoadGameMcSnapLoadWait() {
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
      iVar2 = FileLoadIsEnd2(*(int *)((int)load_game_snap_tex.field0_0x0.m_aData + data_num * 4),
                             load_game_snap_addr[data_num]);
      if (iVar2 == 0) {
        load_game_ctrl.step = '\x05';
        load_game_ctrl.msg_id = 0;
        break;
      }
                    /* end of inlined section */
      load_game_ctrl.msg_id = 0x22;
      load_game_ctrl.step = '\x06';
      if (!bVar1) {
        load_game_ctrl.csr = (char)data_num;
        bVar1 = true;
      }
    }
    data_num = data_num + 1;
  } while (data_num < 5);
  LoadGameMcEveryFrameCheck__Fv();
  return;
}

static void LoadGameMcLoadFileSel() {
  LoadGameMcLoadFileSelPad__Fv();
  LoadGameMcEveryFrameCheck__Fv();
  return;
}

static void LoadGameMcLoadFileSelPad() {
	int i;
	int cursor_back_up;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = load_game_ctrl.csr;
  if (((pad[0].rpt & 0x8000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(2), iVar3 == 0)) {
    if (((pad[0].rpt & 0x2000U) == 0) && (iVar3 = GetPadAnalogRpt__Fi(3), iVar3 == 0)) {
      if (**paddat == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        load_game_ctrl.conf_csr = '\x01';
        load_game_ctrl.step = '\a';
        load_game_ctrl.msg_id = 0xe;
      }
      else if (*paddat[1] == 1) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
      }
    }
    else {
      iVar3 = 0;
      bVar1 = true;
      do {
        iVar3 = iVar3 + 1;
        if (!bVar1) break;
        iVar4 = (load_game_ctrl.csr + 1) % 5;
        load_game_ctrl.csr = (char)iVar4;
        iVar4 = GetMemoryCardPlayDataFlg__Fi(iVar4);
        bVar1 = iVar3 < 5;
      } while (iVar4 != 1);
      if (cVar2 != load_game_ctrl.csr) {
        SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
        return;
      }
    }
  }
  else {
    iVar3 = 0;
    bVar1 = true;
    do {
      iVar3 = iVar3 + 1;
      if (!bVar1) break;
      iVar4 = (load_game_ctrl.csr + 4) % 5;
      load_game_ctrl.csr = (char)iVar4;
      iVar4 = GetMemoryCardPlayDataFlg__Fi(iVar4);
      bVar1 = iVar3 < 5;
    } while (iVar4 != 1);
    if (cVar2 != load_game_ctrl.csr) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      return;
    }
  }
  return;
}

static void LoadGameMcLoadConf() {
  LoadGameMcLoadConfPad__Fv();
  LoadGameMcEveryFrameCheck__Fv();
  return;
}

static void LoadGameMcLoadConfPad() {
  int iVar1;
  
  if (((((pad[0].rpt & 0x8000U) == 0) && (iVar1 = GetPadAnalogRpt__Fi(2), iVar1 == 0)) &&
      ((pad[0].rpt & 0x2000U) == 0)) && (iVar1 = GetPadAnalogRpt__Fi(3), iVar1 == 0)) {
    if (**paddat == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      if (load_game_ctrl.conf_csr == '\0') {
        load_game_ctrl.msg_id = 0x1d;
        load_game_ctrl.step = '\b';
      }
      else {
        load_game_ctrl.msg_id = 0x22;
        load_game_ctrl.step = '\x06';
      }
    }
    else if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      load_game_ctrl.msg_id = 0x22;
      load_game_ctrl.step = '\x06';
    }
  }
  else {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(0,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    load_game_ctrl.conf_csr = load_game_ctrl.conf_csr ^ 1;
  }
  return;
}

static void LoadGameMcSystemLoadInit() {
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
  load_game_ctrl.step = '\t';
  load_game_ctrl.msg_id = 0x1d;
  return;
}

static void LoadGameMcSystemLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,0);
    iVar3 = MemoryCardCheckFileBroken__FPvi(load_data_buff,iVar2);
    if (iVar3 == 0) {
      load_game_ctrl.msg_id = 0x19;
    }
    else {
      iVar2 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2);
      if (iVar2 == 0) {
        DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,0);
        OptSoundSetupRef__FP10OPTION_WRK(&opt_wrk);
        load_game_ctrl.step = '\n';
        load_game_ctrl.msg_id = 0x20;
        goto LAB_001d5ef8;
      }
      load_game_ctrl.msg_id = 0x33;
    }
    load_game_ctrl.step = '\f';
  }
  else if (iVar1 < 0) {
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    default:
      load_game_ctrl.msg_id = 0xf;
      break;
    case -3:
      load_game_ctrl.msg_id = 0x19;
      break;
    case -2:
      load_game_ctrl.msg_id = 0x18;
    }
    load_game_ctrl.step = '\f';
  }
LAB_001d5ef8:
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void LoadGameMcLoadInit() {
	int size;
	char path_name[55];
	
  int size;
  char path_name [55];
  
  memset(path_name,0,0x37);
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  MemoryCardSetFilePath__FPcii(path_name,0,load_game_ctrl.csr + 2);
  size = GetMemoryCardDataSize__Fii(0,load_game_ctrl.csr + 2);
  load_data_buff = GetDataMemoryArea__Fi(size);
  MemoryCardFileLoadInit__FiiPcPvi(0,0,path_name,load_data_buff,size);
  load_game_ctrl.step = '\v';
  load_game_ctrl.msg_id = 0x20;
  return;
}

static void LoadGameMcLoadWait() {
	int mc_res;
	int size;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = MemoryCardFileLoadMain__Fv();
  if (iVar1 == 1) {
    iVar2 = GetMemoryCardDataSize__Fii(0,load_game_ctrl.csr + 2);
    iVar3 = MemoryCardCheckFileBroken__FPvi(load_data_buff,iVar2);
    if ((iVar3 == 0) || (iVar2 = MemoryCardCheckNewFileLoad__FPvi(load_data_buff,iVar2), iVar2 != 0)
       ) {
      load_game_ctrl.msg_id = 0x34;
      load_game_ctrl.step = '\f';
    }
    else {
      DevelopMemoryCardLoadData__FPcii((char *)load_data_buff,0,load_game_ctrl.csr + 2);
      load_game_ctrl.step = '\x0e';
      load_game_ctrl.msg_id = 0x10;
      load_game_ctrl.wait_timer = 0;
    }
  }
  else if (iVar1 < 0) {
    switch(iVar1) {
    case -10:
    case -9:
    case -8:
    case -7:
    case -6:
    case -5:
    case -4:
    default:
      load_game_ctrl.msg_id = 0xf;
      break;
    case -3:
      load_game_ctrl.msg_id = 0x34;
      break;
    case -2:
      load_game_ctrl.msg_id = 0x18;
    }
    load_game_ctrl.step = '\f';
  }
  if ((iVar1 != 0) && (load_data_buff != (void *)0x0)) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  return;
}

static void LoadGameMcErrorConfInit() {
  MemoryCardCheckEveryFrameInit__Fii(0,0);
  load_game_ctrl.step = '\r';
  return;
}

static void LoadGameMcErrorConfWait() {
	int i;
	int mc_res;
	
  int iVar1;
  void **ppvVar2;
  
  LoadGameMcErrorConfPad__Fv();
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (iVar1 == -1) {
    if (load_data_buff != (void *)0x0) {
      LiberateDataMemoryArea__FPv(load_data_buff);
      load_data_buff = (void *)0x0;
    }
    iVar1 = 4;
    ppvVar2 = load_game_snap_addr;
    do {
      iVar1 = iVar1 + -1;
      if (*ppvVar2 != (void *)0x0) {
        LiberateDataMemoryArea__FPv(*ppvVar2);
        *ppvVar2 = (void *)0x0;
      }
      ppvVar2 = ppvVar2 + 1;
    } while (-1 < iVar1);
    load_game_ctrl.step = '\0';
    load_game_ctrl.msg_id = 0;
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

static void LoadGameMcErrorConfPad() {
  if (**paddat != 1) {
    if (*paddat[1] == 1) {
      SystemBankPlay__FiiiiP11_SND_3D_SETii(1,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
    }
    return;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MENU);
  return;
}

static void LoadGameMcEndConf() {
  int iVar1;
  
  iVar1 = LoadingTexLoadWait__Fv();
  if (iVar1 != 0) {
    iVar1 = GetTitleSoundID__Fv();
    iVar1 = SndBufIsPlaying(iVar1);
    if (iVar1 == 0) {
      LoadGameMcEndConfPad__Fv();
    }
  }
  return;
}

static void LoadGameMcEndConfPad() {
	char move_flg;
	
  bool bVar1;
  int no;
  
  bVar1 = false;
  if (**paddat == 1) {
    no = 3;
  }
  else {
    if (*paddat[1] != 1) goto LAB_001d6368;
    no = 1;
  }
  SystemBankPlay__FiiiiP11_SND_3D_SETii(no,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
  bVar1 = true;
LAB_001d6368:
  load_game_ctrl.wait_timer = load_game_ctrl.wait_timer + 1;
  if (0x95 < (short)load_game_ctrl.wait_timer) {
    bVar1 = true;
  }
  if (bVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    if (ingame_wrk.mClearCnt.mValue < '\x01') {
      SetTitleLoadFlg__Fc('\0');
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_LOAD_MISSION_SAVE);
    }
    else {
                    /* end of inlined section */
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_SETUPMENU);
    }
    EventDataLoadReq__Fv();
  }
  return;
}

static void LoadGameMcEveryFrameCheck() {
	int mc_res;
	
  int iVar1;
  
  iVar1 = MemoryCardCheckEveryFrameMain__Fv();
  if (-1 < iVar1) {
    return;
  }
  switch(iVar1) {
  case -0x14:
    load_game_ctrl.msg_id = 1;
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
  default:
    load_game_ctrl.msg_id = 2;
    break;
  case -2:
    load_game_ctrl.msg_id = 0x18;
    break;
  case -1:
    load_game_ctrl.msg_id = 1;
  }
  load_game_ctrl.step = '\f';
  return;
}

void LoadGameEnd() {
	int i;
	
  void **ppvVar1;
  int iVar2;
  
  if (load_data_buff != (void *)0x0) {
    LiberateDataMemoryArea__FPv(load_data_buff);
    load_data_buff = (void *)0x0;
  }
  iVar2 = 4;
  ppvVar1 = load_game_snap_addr;
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

void ReleaseLoadGameTexMem() {
  if (load_game_tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(load_game_tex_addr);
    load_game_tex_addr = (void *)0x0;
  }
  return;
}

void LoadGameDispMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 76,
		/* [1] = */ 111,
		/* [2] = */ 97,
		/* [3] = */ 100,
		/* [4] = */ 71,
		/* [5] = */ 97,
		/* [6] = */ 109,
		/* [7] = */ 101,
		/* [8] = */ 68,
		/* [9] = */ 105,
		/* [10] = */ 115,
		/* [11] = */ 112,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	u_char rgb;
	
  void *pk2_addr;
  uchar rgb;
  
  rgb = 0x80;
  if (load_game_tex_addr != (void *)0x0) {
    SaveLoadCmnBaseDisp__FiiUcPvi(0,0,0x80,load_game_tex_addr,0);
    pk2_addr = GetOutGameCmnTexAddr__Fv();
    SaveLoadTitleFrameDisp__FiiUcPv(0,0,0x80,pk2_addr);
    SaveLoadTitleLoadDisp__FiiUcPv(0,0,0x80,load_game_tex_addr);
    switch(load_game_ctrl.step) {
    case '\0':
    case '\x01':
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
    case '\f':
    case '\r':
      SaveLoadMcCheckDisp__FiiUcPv(0,0,0x80,load_game_tex_addr);
      break;
    case '\x06':
      LoadGameFileSelDisp__FUc(0x80);
      Zero2Anim2D_CsrAnimCtrl__FPcPUc(&load_game_ctrl.csr_timer,&rgb);
      SaveLoadCursorDisp__FiiUcUcPvi(0,0,0x80,rgb,load_game_tex_addr,(int)load_game_ctrl.csr);
      SaveLoadFileSelMsgWinDisp__FiiUc(0,0,0x80);
      SaveLoadFileSelMsgDisp__FiiUci(0,0,0x80,0x22);
      return;
    case '\a':
      LoadGameFileSelDisp__FUc(0x80);
      SaveLoadFileSelYesNoWinDisp__FiiUci(0,0,0x80,(int)load_game_ctrl.conf_csr);
      SaveLoadFileSelMsgDisp__FiiUci(0,0,0x80,load_game_ctrl.msg_id);
      return;
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\x0e':
      LoadGameFileSelDisp__FUc(0x80);
      break;
    default:
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! LoadGameDispMain");
      return;
    }
    SaveLoadMcStateMsgWinDisp__FiiUc(0,0,0x80);
    SaveLoadMcStateMsgDisp__FiiUci(0,0,0x80,load_game_ctrl.msg_id);
    return;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! %s");
  return;
}

static void LoadGameFileSelDisp(u_char alpha) {
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
      if (load_game_ctrl.csr == lVar2) {
        SaveLoadSelLineDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      }
      else {
        SaveLoadNonSelLineDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      }
      SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      lVar2 = (long)(data_num + 1);
    }
    else {
      if (load_game_snap_addr[data_num] != (void *)0x0) {
        SaveLoadSnapShotDisp__FiiUcPvi(0,0,alpha,load_game_snap_addr[data_num],data_num);
      }
      if (load_game_ctrl.csr == lVar2) {
        SaveLoadSelNoDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
        SaveLoadSelDataNumDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
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
        SaveLoadNonSelNoDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
        SaveLoadNonSelDataNumDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      }
      SaveLoadSnapShadowDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
      iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
      if (iVar1 < 1) {
        SaveLoadNonClearMaskDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
        lVar2 = (long)(data_num + 1);
      }
      else {
        SaveLoadClearFlareDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,data_num);
        iVar1 = GetMemoryCardPlayDataClearNum__Fi(data_num);
        SaveLoadClearNumberDisp__FiiiUciUciPv(iVar1,0,0,alpha,0,'\x01',data_num,load_game_tex_addr);
        lVar2 = (long)(data_num + 1);
      }
    }
  } while (lVar2 < 5);
  SaveLoadSelFlareDisp__FiiUcPvi(0,0,alpha,load_game_tex_addr,(int)load_game_ctrl.csr);
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
    load_game_snap_tex.field0_0x0.m_aData = (fixed_array_base<int,5,int_*>)&PTR_003ba800;
  }
  return;
}

static void global constructors keyed to LoadGameInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
