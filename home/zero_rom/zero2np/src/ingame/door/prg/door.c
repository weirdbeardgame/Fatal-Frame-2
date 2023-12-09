// STATUS: NOT STARTED

#include "door.h"

typedef struct {
	int msg_id;
	int sound_id;
} DOOR_LOCK_STATE_CTRL;

struct fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]> {
protected:
	DOOR_CTRL m_aData[208];
	
public:
	fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	DOOR_CTRL& operator[]();
	DOOR_CTRL& operator[]();
	DOOR_CTRL* data();
	DOOR_CTRL* begin();
	DOOR_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<DOOR_CTRL,208> : fixed_array_base<DOOR_CTRL,208,DOOR_CTRL[208]> {
};

static fixed_array<DOOR_CTRL,208> door_ctrl;
unsigned char DOOR_CTRL type_info node[8];
static u_char lock_exe_step;

DOOR_LOCK_STATE_CTRL lock_state_ctrl = {
	/* .msg_id = */ 0,
	/* .sound_id = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a42b0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9DOOR_CTRL(0x3efb18,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9DOOR_CTRL(0x3efb20,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9DOOR_CTRL(0x3a42f8,_max);
  }
  return (uint **)0x0;
}

void DoorCtrlInit() {
	int i;
	
  DOOR_CTRL *pDVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(iVar2,0xd0);
    pDVar1 = door_ctrl.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    pDVar1->lock_id = '\0';
  } while (iVar2 < 0xd0);
  lock_exe_step = '\0';
  return;
}

int DoorOpenInit(int door_id) {
  int iVar1;
  int iVar2;
  
  iVar1 = MapLoadUpdatRoomDat__Fi(door_id);
  iVar2 = -1;
  if (-1 < iVar1) {
    iVar1 = InDamageState__Fv();
    if (iVar1 == 0) {
      MapDoorSetAnimID__Fi(door_id);
      SetIngameDoorMode__Fi(1);
      iVar2 = 0;
    }
    else {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal(&DAT_003efb58);
      iVar2 = -1;
    }
  }
  return iVar2;
}

int DoorOpen(int door_id) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 79,
		/* [5] = */ 112,
		/* [6] = */ 101,
		/* [7] = */ 110,
		/* [8] = */ 0
	};
	
  int iVar1;
  int iVar2;
  
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! DoorOpen door id %d\n");
  }
  iVar1 = MapLoadCheckLoadNow__Fv();
  iVar2 = 0;
  if ((((iVar1 == 0) && (iVar2 = DoorMotionIsEnd__Fv(), iVar2 != 0)) &&
      (iVar2 = DoorSEIsReady__Fv(), iVar2 != 0)) && (iVar2 = MapDoorCheckLoad__Fv(), iVar2 != 0)) {
    MapDoorAnimOpen__Fv();
    iVar2 = 1;
  }
  return iVar2;
}

void DoorClose(int door_id) {
	static char __FUNCTION__[10] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 67,
		/* [5] = */ 108,
		/* [6] = */ 111,
		/* [7] = */ 115,
		/* [8] = */ 101,
		/* [9] = */ 0
	};
	int room_no;
	
  int area_no;
  
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! DoorClose door id %d\n");
  }
  area_no = MhCtlGetRoomNo__FiPf((int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  if (area_no < 0) {
    area_no = GetPlyrAreaNo__Fv();
  }
  else {
    SetPlyrAreaNo__Fi(area_no);
  }
  ev_seChangeRoom__Fi(area_no);
  ev_sisChangeRoom__Fi(area_no);
  ev_eneChangeRoom__Fi(area_no);
  MapDoorAnimClose__Fi(door_id);
  playerUseDoorLight__Fi(0);
  return;
}

void DoorLock(int door_id, u_char lock_id) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 99,
		/* [7] = */ 107,
		/* [8] = */ 0
	};
	
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! DoorLock door id %d lock id %d\n");
  }
  if (6 < lock_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! DoorLock door id %d lock id %d\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
  door_ctrl.field0_0x0.m_aData[door_id].lock_id = lock_id;
  return;
}

void DoorUnlock(int door_id) {
	static char __FUNCTION__[11] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 85,
		/* [5] = */ 110,
		/* [6] = */ 108,
		/* [7] = */ 111,
		/* [8] = */ 99,
		/* [9] = */ 107,
		/* [10] = */ 0
	};
	
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! DoorUnLock door id %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
  door_ctrl.field0_0x0.m_aData[door_id].lock_id = '\0';
  return;
}

void DoorLockStateExeInit(int door_id) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 99,
		/* [7] = */ 107,
		/* [8] = */ 83,
		/* [9] = */ 116,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 69,
		/* [14] = */ 120,
		/* [15] = */ 101,
		/* [16] = */ 73,
		/* [17] = */ 110,
		/* [18] = */ 105,
		/* [19] = */ 116,
		/* [20] = */ 0
	};
	
  DOOR_CTRL *pDVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pDVar1 = door_ctrl.field0_0x0.m_aData + door_id;
                    /* end of inlined section */
  if (0xcf < (uint)door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s door id %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  lock_state_ctrl.msg_id = door_lock_info[pDVar1->lock_id].msg_id;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
  lock_state_ctrl.sound_id = door_lock_info[pDVar1->lock_id].sound_id;
  return;
}

int DoorLockStateExe(int door_id) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 68,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 114,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 99,
		/* [7] = */ 107,
		/* [8] = */ 83,
		/* [9] = */ 116,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 69,
		/* [14] = */ 120,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	int res;
	int msg_id;
	int msg_state;
	
  int iVar1;
  int iVar2;
  
  if ((uint)door_id < 0xd0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
    iVar1 = lock_state_ctrl.msg_id;
    if (door_ctrl.field0_0x0.m_aData[door_id].lock_id < 7) {
      if (lock_exe_step == '\0') {
        snd_utilAutoBDPlay(lock_state_ctrl.sound_id,lock_state_ctrl.sound_id + -1,1,0,0x3200,0x1000,
                           0,(_SND_3D_SET *)0x0);
        lock_exe_step = '\x01';
        EnemyEffectPosUpdate__Fv();
      }
      PrintMsgDef_W__Fii(0xb,iVar1);
      iVar1 = MesStatusCheck__Fv();
      if (iVar1 == 0) {
        lock_exe_step = '\0';
        iVar2 = 1;
      }
      else {
        iVar2 = 0;
        if (iVar1 == 1) {
          if (*paddat[3] == 1) {
            MesSetNextPage__Fv();
            iVar2 = 0;
          }
          else {
            iVar2 = 0;
          }
        }
      }
    }
    else {
                    /* end of inlined section */
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
      PrintAssertReal("Error! %s door id %d lock id %d");
      iVar2 = 1;
                    /* end of inlined section */
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s door id %d\n");
    iVar2 = 1;
  }
  return iVar2;
}

DOOR_CTRL* GetDoorInfo(int door_id) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 68,
		/* [4] = */ 111,
		/* [5] = */ 111,
		/* [6] = */ 114,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 102,
		/* [10] = */ 111,
		/* [11] = */ 0
	};
	
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetDoorInfo door id %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
  return door_ctrl.field0_0x0.m_aData + door_id;
}

u_char GetDoorLockState(int door_id) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 68,
		/* [4] = */ 111,
		/* [5] = */ 111,
		/* [6] = */ 114,
		/* [7] = */ 76,
		/* [8] = */ 111,
		/* [9] = */ 99,
		/* [10] = */ 107,
		/* [11] = */ 83,
		/* [12] = */ 116,
		/* [13] = */ 97,
		/* [14] = */ 116,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  if (0xcf < door_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetDoorLockState door id %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(door_id,0xd0);
  return door_ctrl.field0_0x0.m_aData[door_id].lock_id;
}

int GetDoorDataLabelToDoorLabel(int door_data_label) {
  MLOAD_DOOR_DAT *pMVar1;
  
  pMVar1 = MapDoorGetDatListPtr__Fi(door_data_label);
  return pMVar1->doorID;
}

void SetSave_DoorCtrl(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9DOOR_CTRL_UiUi_PX01(0,0xd0);
                    /* end of inlined section */
  data->size = 0xd0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&door_ctrl;
  return;
}

DOOR_CTRL* DOOR_CTRL * _fixed_array_verifyrange<DOOR_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& DOOR_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to DoorCtrlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
