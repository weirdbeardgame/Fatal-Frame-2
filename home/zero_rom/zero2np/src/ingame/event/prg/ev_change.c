// STATUS: NOT STARTED

#include "ev_change.h"

struct fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> {
protected:
	EV_CHANGE_CTRL m_aData[30];
	
public:
	fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_CHANGE_CTRL& operator[]();
	EV_CHANGE_CTRL& operator[]();
	EV_CHANGE_CTRL* data();
	EV_CHANGE_CTRL* begin();
	EV_CHANGE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_CHANGE_CTRL,30> : fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> {
};

static fixed_array<EV_CHANGE_CTRL,30> ev_change_ctrl;
unsigned char EV_CHANGE_CTRL type_info node[8];
unsigned char EVENT_STATE type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a90e0;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3f0288,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3f0290,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3a9128,_max);
  }
  return (uint **)0x0;
}

void EvChangeCtrlInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<EV_CHANGE_CTRL,30> *pfVar3;
  
  pfVar3 = &ev_change_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ((fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> *)
    &((EV_CHANGE_CTRL *)pfVar3)->set_event_id)->m_aData[0].set_event_id = -1;
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ((EV_CHANGE_CTRL *)pfVar3)->change_id = -1;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ((EV_CHANGE_CTRL *)pfVar3)->change_state = '\0';
                    /* end of inlined section */
    pfVar3 = (fixed_array<EV_CHANGE_CTRL,30> *)((int)pfVar3 + 0xc);
    iVar1 = iVar2;
  } while (iVar2 < 0x1e);
  return;
}

void SetEventState(int event_id, u_char state) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 69,
		/* [4] = */ 118,
		/* [5] = */ 101,
		/* [6] = */ 110,
		/* [7] = */ 116,
		/* [8] = */ 83,
		/* [9] = */ 116,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 0
	};
	
  EVENT_STATE *pEVar1;
  
  if (0x78a < (uint)event_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
  if (6 < state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s state %d");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z11EVENT_STATE_UiUi_PX01(event_id,0x78b);
  pEVar1 = ev_wrk.ev_state.field0_0x0.m_aData + event_id;
  if (pEVar1->state != '\x06') {
    _fixed_array_verifyrange__H1Z11EVENT_STATE_UiUi_PX01(event_id,0x78b);
    pEVar1->state = state;
  }
  return;
}

void SetEventWaitFlg(u_char flg) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 69,
		/* [4] = */ 118,
		/* [5] = */ 101,
		/* [6] = */ 110,
		/* [7] = */ 116,
		/* [8] = */ 87,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 116,
		/* [12] = */ 70,
		/* [13] = */ 108,
		/* [14] = */ 103,
		/* [15] = */ 0
	};
	
  if (1 < flg) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  ev_wrk.wait_flg = flg;
  return;
}

void CompulsionSetEventStateMain() {
	int i;
	
  uchar uVar1;
  int iVar2;
  int iVar3;
  fixed_array<EV_CHANGE_CTRL,30> *pfVar4;
  
  iVar3 = 0;
  pfVar4 = &ev_change_ctrl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
    if (((EV_CHANGE_CTRL *)pfVar4)->change_id != -1) {
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
      uVar1 = GetEvState__Fi(((EV_CHANGE_CTRL *)pfVar4)->change_id);
                    /* end of inlined section */
      if ((uVar1 == '\0') || (uVar1 == '\x05')) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
        iVar2 = CheckEventExeEntry__Fi(((EV_CHANGE_CTRL *)pfVar4)->change_id);
        if (iVar2 == -1) {
          _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
          _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
          CompulsionSetEventState__FiUc
                    (((EV_CHANGE_CTRL *)pfVar4)->change_id,((EV_CHANGE_CTRL *)pfVar4)->change_state)
          ;
          _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
          Del_CompulsionSetEventState__Fi(((EV_CHANGE_CTRL *)pfVar4)->change_id);
        }
      }
    }
    iVar3 = iVar3 + 1;
    pfVar4 = (fixed_array<EV_CHANGE_CTRL,30> *)((int)pfVar4 + 0xc);
  } while (iVar3 < 0x1e);
  return;
}

void CompulsionSetEventState(int change_id, u_char state) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 67,
		/* [1] = */ 111,
		/* [2] = */ 109,
		/* [3] = */ 112,
		/* [4] = */ 117,
		/* [5] = */ 108,
		/* [6] = */ 115,
		/* [7] = */ 105,
		/* [8] = */ 111,
		/* [9] = */ 110,
		/* [10] = */ 83,
		/* [11] = */ 101,
		/* [12] = */ 116,
		/* [13] = */ 69,
		/* [14] = */ 118,
		/* [15] = */ 101,
		/* [16] = */ 110,
		/* [17] = */ 116,
		/* [18] = */ 83,
		/* [19] = */ 116,
		/* [20] = */ 97,
		/* [21] = */ 116,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	u_char parent_state;
	
  uchar uVar1;
  uchar uVar2;
  int event_id;
  
  if (0x78a < (uint)change_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s change_id %d");
  }
  if (6 < state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s state %d");
  }
  event_id = EvGetParentID__Fi(change_id);
  uVar1 = GetEvState__Fi(event_id);
  uVar2 = GetEvState__Fi(change_id);
  if (uVar2 != '\x06') {
    SetEventState__FiUc(change_id,state);
    EventDelCondition__Fi(change_id);
    EventExeRelease__Fi(change_id);
    switch(state) {
    case '\0':
      if (uVar1 != '\0') {
        EventSetOpenCondition__Fi(change_id);
        return;
      }
      break;
    case '\x01':
      SetEventInitStatus__Fi(change_id);
      return;
    default:
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("ERROR!! CompulsionSetEventState() EventID %d\n");
      break;
    case '\x03':
    case '\x05':
      break;
    case '\x04':
      if ((byte)(uVar1 - 5) < 2) {
        SetEventState__FiUc(change_id,'\x04');
        return;
      }
      SetEventState__FiUc(change_id,'\x04');
      EventSetOpenCondition__Fi(change_id);
      return;
    case '\x06':
      CompulsionSet_ForcedEndState__Fi(change_id);
      return;
    }
  }
  return;
}

static void CompulsionSet_ForcedEndState(int event_id) {
	static char __FUNCTION__[29] = {
		/* [0] = */ 67,
		/* [1] = */ 111,
		/* [2] = */ 109,
		/* [3] = */ 112,
		/* [4] = */ 117,
		/* [5] = */ 108,
		/* [6] = */ 115,
		/* [7] = */ 105,
		/* [8] = */ 111,
		/* [9] = */ 110,
		/* [10] = */ 83,
		/* [11] = */ 101,
		/* [12] = */ 116,
		/* [13] = */ 95,
		/* [14] = */ 70,
		/* [15] = */ 111,
		/* [16] = */ 114,
		/* [17] = */ 99,
		/* [18] = */ 101,
		/* [19] = */ 100,
		/* [20] = */ 69,
		/* [21] = */ 110,
		/* [22] = */ 100,
		/* [23] = */ 83,
		/* [24] = */ 116,
		/* [25] = */ 97,
		/* [26] = */ 116,
		/* [27] = */ 101,
		/* [28] = */ 0
	};
	fixed_array<int,50> id_tbl;
	int i;
	
  uchar uVar1;
  int *piVar2;
  int iVar3;
  fixed_array<int,50> id_tbl;
  
  if (0x78a < (uint)event_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,0x32);
  iVar3 = 0;
  EvGetSubId__FiPi(event_id,(int *)&id_tbl);
  do {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
    piVar2 = id_tbl.field0_0x0.m_aData + iVar3;
    if (*piVar2 != -1) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
      uVar1 = GetEvState__Fi(*piVar2);
                    /* end of inlined section */
      switch(uVar1) {
      case '\0':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        EventDelCondition__Fi(id_tbl.field0_0x0.m_aData[iVar3]);
      case '\x04':
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        SetEventState__FiUc(id_tbl.field0_0x0.m_aData[iVar3],'\x06');
      case '\x01':
      case '\x02':
      case '\x03':
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        Req_CompulsionSetEventState__FiiUc(event_id,id_tbl.field0_0x0.m_aData[iVar3],'\x06');
      case '\x05':
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        CompulsionSet_ForcedEndState__Fi(id_tbl.field0_0x0.m_aData[iVar3]);
                    /* end of inlined section */
        break;
      case '\x06':
        break;
      default:
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        PrintAssertReal("ERROR!! EventEnd_SubStateChange() event id = %d, sub event id = %d\n");
      }
    }
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  return;
}

void Req_CompulsionSetEventState(int set_event_id, int change_id, u_char state) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 113,
		/* [3] = */ 95,
		/* [4] = */ 67,
		/* [5] = */ 111,
		/* [6] = */ 109,
		/* [7] = */ 112,
		/* [8] = */ 117,
		/* [9] = */ 108,
		/* [10] = */ 115,
		/* [11] = */ 105,
		/* [12] = */ 111,
		/* [13] = */ 110,
		/* [14] = */ 83,
		/* [15] = */ 101,
		/* [16] = */ 116,
		/* [17] = */ 69,
		/* [18] = */ 118,
		/* [19] = */ 101,
		/* [20] = */ 110,
		/* [21] = */ 116,
		/* [22] = */ 83,
		/* [23] = */ 116,
		/* [24] = */ 97,
		/* [25] = */ 116,
		/* [26] = */ 101,
		/* [27] = */ 0
	};
	int empty;
	
  int iVar1;
  
  if (0x78a < (uint)set_event_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
  if (0x78a < (uint)change_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
  if (6 < state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s state %d");
  }
  iVar1 = GetEmpty_EvChangeCtrl__Fi(change_id);
                    /* end of inlined section */
  if (iVar1 == -1) {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("ERROR!! EV_CHANGE_CTRL NO EMPTY!!!!\n");
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ev_change_ctrl.field0_0x0.m_aData[iVar1].set_event_id = set_event_id;
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ev_change_ctrl.field0_0x0.m_aData[iVar1].change_id = change_id;
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    ev_change_ctrl.field0_0x0.m_aData[iVar1].change_state = state;
  }
  return;
}

void Del_CompulsionSetEventState(int change_id) {
	static char __FUNCTION__[28] = {
		/* [0] = */ 68,
		/* [1] = */ 101,
		/* [2] = */ 108,
		/* [3] = */ 95,
		/* [4] = */ 67,
		/* [5] = */ 111,
		/* [6] = */ 109,
		/* [7] = */ 112,
		/* [8] = */ 117,
		/* [9] = */ 108,
		/* [10] = */ 115,
		/* [11] = */ 105,
		/* [12] = */ 111,
		/* [13] = */ 110,
		/* [14] = */ 83,
		/* [15] = */ 101,
		/* [16] = */ 116,
		/* [17] = */ 69,
		/* [18] = */ 118,
		/* [19] = */ 101,
		/* [20] = */ 110,
		/* [21] = */ 116,
		/* [22] = */ 83,
		/* [23] = */ 116,
		/* [24] = */ 97,
		/* [25] = */ 116,
		/* [26] = */ 101,
		/* [27] = */ 0
	};
	int i;
	
  int iVar1;
  fixed_array<EV_CHANGE_CTRL,30> *pfVar2;
  
  if (0x78a < (uint)change_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
  iVar1 = 0;
  pfVar2 = &ev_change_ctrl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
    if (((EV_CHANGE_CTRL *)pfVar2)->change_id == change_id) {
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
      ((fixed_array_base<EV_CHANGE_CTRL,30,EV_CHANGE_CTRL[30]> *)
      &((EV_CHANGE_CTRL *)pfVar2)->set_event_id)->m_aData[0].set_event_id = -1;
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
      ((EV_CHANGE_CTRL *)pfVar2)->change_id = -1;
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar1,0x1e);
      ((EV_CHANGE_CTRL *)pfVar2)->change_state = '\0';
    }
                    /* end of inlined section */
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<EV_CHANGE_CTRL,30> *)((int)pfVar2 + 0xc);
  } while (iVar1 < 0x1e);
  return;
}

static int GetEmpty_EvChangeCtrl(int change_id) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 69,
		/* [4] = */ 109,
		/* [5] = */ 112,
		/* [6] = */ 116,
		/* [7] = */ 121,
		/* [8] = */ 95,
		/* [9] = */ 69,
		/* [10] = */ 118,
		/* [11] = */ 67,
		/* [12] = */ 104,
		/* [13] = */ 97,
		/* [14] = */ 110,
		/* [15] = */ 103,
		/* [16] = */ 101,
		/* [17] = */ 67,
		/* [18] = */ 116,
		/* [19] = */ 114,
		/* [20] = */ 108,
		/* [21] = */ 0
	};
	int i;
	u_char found_flg;
	int empty;
	
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (0x78a < (uint)change_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s event_id %d");
  }
  bVar2 = false;
  iVar5 = -1;
  piVar4 = &ev_change_ctrl.field0_0x0.m_aData[0].change_id;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if ((!bVar2) &&
       (_fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e), *piVar4 == -1)) {
                    /* end of inlined section */
      bVar2 = true;
      iVar5 = iVar3;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar3,0x1e);
    iVar1 = *piVar4;
    piVar4 = piVar4 + 3;
    iVar6 = iVar3;
  } while ((iVar1 != change_id) && (iVar3 = iVar3 + 1, iVar6 = iVar5, iVar3 < 0x1e));
  return iVar6;
}

void SetSave_EvChangeCtrl(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(0,0x1e);
                    /* end of inlined section */
  data->size = 0x168;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&ev_change_ctrl;
  return;
}

void EvDbg_EventStatePrint() {
	char *state[7];
	int i;
	
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  char *state [7];
  
  iVar3 = 0;
  uVar1 = (int)state + 7U & 7;
  puVar2 = (ulong *)(((int)state + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_UNSTART_003a93e0 >> (7 - uVar1) * 8;
  state._0_8_ = _PTR_s_EV_UNSTART_003a93e0;
  uVar1 = (int)state + 0xfU & 7;
  puVar2 = (ulong *)(((int)state + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_EXE_NOW_003a93e8 >> (7 - uVar1) * 8;
  state._8_8_ = _PTR_s_EV_EXE_NOW_003a93e8;
  uVar1 = (int)state + 0x17U & 7;
  puVar2 = (ulong *)(((int)state + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_EXE_SLEEP_003a93f0 >> (7 - uVar1) * 8;
  state._16_8_ = _PTR_s_EV_EXE_SLEEP_003a93f0;
  state[6] = PTR_s_EV_FORCED_END_003a93f8;
  printf("**************************************\n");
  printf("*          ALL EVENT STATUS          *\n");
  printf("**************************************\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Z11EVENT_STATE_UiUi_PX01(iVar3,0x78b);
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    printf("Event %d Status  [ %s ]\n");
                    /* end of inlined section */
  } while (iVar3 < 0x78b);
  return;
}

void EvDbg_CompulsionSetPrint() {
	char *state[7];
	int i;
	
  uint uVar1;
  ulong *puVar2;
  fixed_array<EV_CHANGE_CTRL,30> *pfVar3;
  int iVar4;
  char *state [7];
  
  iVar4 = 0;
  uVar1 = (int)state + 7U & 7;
  puVar2 = (ulong *)(((int)state + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_UNSTART_003a9470 >> (7 - uVar1) * 8;
  state._0_8_ = _PTR_s_EV_UNSTART_003a9470;
  uVar1 = (int)state + 0xfU & 7;
  puVar2 = (ulong *)(((int)state + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_EXE_NOW_003a9478 >> (7 - uVar1) * 8;
  state._8_8_ = _PTR_s_EV_EXE_NOW_003a9478;
  uVar1 = (int)state + 0x17U & 7;
  puVar2 = (ulong *)(((int)state + 0x17U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_s_EV_EXE_SLEEP_003a9480 >> (7 - uVar1) * 8;
  state._16_8_ = _PTR_s_EV_EXE_SLEEP_003a9480;
  state[6] = PTR_s_EV_FORCED_END_003a9488;
  printf("*************************************************\n");
  printf("*          Compulsion Set Event Status          *\n");
  printf("*************************************************\n");
  pfVar3 = &ev_change_ctrl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar4,0x1e);
    if (((EV_CHANGE_CTRL *)pfVar3)->change_id != -1) {
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar4,0x1e);
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar4,0x1e);
      _fixed_array_verifyrange__H1Z14EV_CHANGE_CTRL_UiUi_PX01(iVar4,0x1e);
      printf("RequestID %d, ChangeID %d, ChangeState [ %s ]\n");
    }
                    /* end of inlined section */
    iVar4 = iVar4 + 1;
    pfVar3 = (fixed_array<EV_CHANGE_CTRL,30> *)((int)pfVar3 + 0xc);
  } while (iVar4 < 0x1e);
  return;
}

EV_CHANGE_CTRL* EV_CHANGE_CTRL * _fixed_array_verifyrange<EV_CHANGE_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

EVENT_STATE* EVENT_STATE * _fixed_array_verifyrange<EVENT_STATE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& EV_CHANGE_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& EVENT_STATE type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void global constructors keyed to EvChangeCtrlInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
