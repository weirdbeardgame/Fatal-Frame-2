// STATUS: NOT STARTED

#include "ev_exe.h"

struct fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> {
protected:
	EV_EXE_CTRL m_aData[150];
	
public:
	fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EV_EXE_CTRL& operator[]();
	EV_EXE_CTRL& operator[]();
	EV_EXE_CTRL* data();
	EV_EXE_CTRL* begin();
	EV_EXE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EV_EXE_CTRL,150> : fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> {
};

static fixed_array<EV_EXE_CTRL,150> ev_exe_ctrl;
unsigned char EV_EXE_CTRL type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9c00;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EV_EXE_CTRL(0x3f0380,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EV_EXE_CTRL(0x3f0388,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EV_EXE_CTRL(0x3a9c48,_max);
  }
  return (uint **)0x0;
}

void EventExeInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<EV_EXE_CTRL,150> *ctrl;
  
  ctrl = &ev_exe_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
    EventExeCtrlInit__FP11EV_EXE_CTRLiPUc((EV_EXE_CTRL *)ctrl,-1,(uchar *)0x0);
                    /* end of inlined section */
    ctrl = (fixed_array<EV_EXE_CTRL,150> *)((int)ctrl + 0x10);
    iVar1 = iVar2;
  } while (iVar2 < 0x96);
  EventMacroInit__Fv();
  return;
}

static void EventExeCtrlInit(EV_EXE_CTRL *ctrl, int event_id, u_char *event_addr) {
  ctrl->event_id = event_id;
  ctrl->event_addr = event_addr;
  ctrl->process = '\0';
  ctrl->stop_timer = 0;
  ctrl->if_state = '\0';
  return;
}

void SetEventInitStatus(int event_id) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 69,
		/* [4] = */ 118,
		/* [5] = */ 101,
		/* [6] = */ 110,
		/* [7] = */ 116,
		/* [8] = */ 73,
		/* [9] = */ 110,
		/* [10] = */ 105,
		/* [11] = */ 116,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 117,
		/* [17] = */ 115,
		/* [18] = */ 0
	};
	fixed_array<int,50> id_tbl;
	int i;
	EV_EXE_CTRL init_event;
	
  uchar uVar1;
  uchar *event_addr;
  int *piVar2;
  int iVar3;
  fixed_array<int,50> id_tbl;
  EV_EXE_CTRL init_event;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,0x32);
  EvGetSubId__FiPi(event_id,(int *)&id_tbl);
                    /* end of inlined section */
  EventExeRelease__Fi(event_id);
  SetEventState__FiUc(event_id,'\x01');
  EventDelCondition__Fi(event_id);
  event_addr = EvGetExeAddr__Fii(1,event_id);
  EventExeCtrlInit__FP11EV_EXE_CTRLiPUc(&init_event,event_id,event_addr);
  EventExeFuncCall__FP11EV_EXE_CTRL(&init_event);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
    piVar2 = id_tbl.field0_0x0.m_aData + iVar3;
    if (*piVar2 != -1) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
      uVar1 = GetEvState__Fi(*piVar2);
                    /* end of inlined section */
      switch(uVar1) {
      case '\x01':
      case '\x02':
      case '\x03':
      case '\x05':
      case '\x06':
        break;
      case '\x04':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        SetEventState__FiUc(id_tbl.field0_0x0.m_aData[iVar3],'\0');
      case '\0':
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        EventSetOpenCondition__Fi(id_tbl.field0_0x0.m_aData[iVar3]);
                    /* end of inlined section */
        break;
      default:
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        PrintAssertReal("ERROR!! SetEventInitStatus event id = %d, sub event id = %d\n");
      }
    }
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  return;
}

void SetEventExeStatus(int event_id) {
  EventExeRelease__Fi(event_id);
  EventDelCondition__Fi(event_id);
  SetEventExeCtrl__FiUc(event_id,'\x02');
  SetEventState__FiUc(event_id,'\x02');
  return;
}

void SetEventEndExeStatus(int event_id) {
  EventDelCondition__Fi(event_id);
  EventExeRelease__Fi(event_id);
  SetEventState__FiUc(event_id,'\x05');
  SetEventExeCtrl__FiUc(event_id,'\x04');
  EventEnd_SubStateChange__Fi(event_id);
  return;
}

void EventEnd_SubStateChange(int event_id) {
	static char __FUNCTION__[24] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 101,
		/* [3] = */ 110,
		/* [4] = */ 116,
		/* [5] = */ 69,
		/* [6] = */ 110,
		/* [7] = */ 100,
		/* [8] = */ 95,
		/* [9] = */ 83,
		/* [10] = */ 117,
		/* [11] = */ 98,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 116,
		/* [16] = */ 101,
		/* [17] = */ 67,
		/* [18] = */ 104,
		/* [19] = */ 97,
		/* [20] = */ 110,
		/* [21] = */ 103,
		/* [22] = */ 101,
		/* [23] = */ 0
	};
	fixed_array<int,50> id_tbl;
	int i;
	
  uchar uVar1;
  int *piVar2;
  int iVar3;
  fixed_array<int,50> id_tbl;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,0x32);
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
        piVar2 = id_tbl.field0_0x0.m_aData + iVar3;
        EventDelCondition__Fi(*piVar2);
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        SetEventState__FiUc(*piVar2,'\x04');
                    /* end of inlined section */
        break;
      case '\x01':
      case '\x02':
      case '\x03':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        EventEnd_SubStateChange__Fi(id_tbl.field0_0x0.m_aData[iVar3]);
                    /* end of inlined section */
        break;
      case '\x04':
      case '\x05':
      case '\x06':
        break;
      default:
        SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0x32);
        PrintAssertReal("ERROR!! EventEnd_SubStateChange() event id = %d, sub event id = %d\n");
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x32);
  return;
}

void SetEventExeCtrl(int event_id, u_char use_table) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 69,
		/* [4] = */ 118,
		/* [5] = */ 101,
		/* [6] = */ 110,
		/* [7] = */ 116,
		/* [8] = */ 69,
		/* [9] = */ 120,
		/* [10] = */ 101,
		/* [11] = */ 67,
		/* [12] = */ 116,
		/* [13] = */ 114,
		/* [14] = */ 108,
		/* [15] = */ 0
	};
	int empty_area;
	
  int iVar1;
  uchar *event_addr;
  
  iVar1 = GetExeCtrlEmpty__Fi(event_id);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
    event_addr = EvGetExeAddr__Fii((uint)use_table,event_id);
    EventExeCtrlInit__FP11EV_EXE_CTRLiPUc
              (ev_exe_ctrl.field0_0x0.m_aData + iVar1,event_id,event_addr);
    return;
  }
                    /* end of inlined section */
  if (iVar1 == -1) {
    printf("**************************************************************\n");
    printf("*             ERROR!! EVENT EXE CTRL NO EMPTY!!!             *\n");
    printf("*  The event cannot be started at the same time any further  *\n");
    printf("**************************************************************\n");
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("ERROR!! EVENT EXE CTRL NO EMPTY!!!");
  }
  return;
}

static int GetExeCtrlEmpty(int event_id) {
	int empty;
	int i;
	
  fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> *pfVar1;
  int iVar2;
  fixed_array<EV_EXE_CTRL,150> *pfVar3;
  int iVar4;
  
  pfVar3 = &ev_exe_ctrl;
  iVar4 = -1;
  iVar2 = 0;
  do {
    if (0x95 < iVar2) goto LAB_0017edd0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar2,0x96);
    pfVar1 = (fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> *)
             &((EV_EXE_CTRL *)pfVar3)->event_id;
    pfVar3 = (fixed_array<EV_EXE_CTRL,150> *)((int)pfVar3 + 0x10);
    iVar2 = iVar2 + 1;
  } while (pfVar1->m_aData[0].event_id != event_id);
                    /* end of inlined section */
  iVar4 = -2;
LAB_0017edd0:
  if (iVar4 != -2) {
    pfVar3 = &ev_exe_ctrl;
    for (iVar2 = 0; iVar2 < 0x96; iVar2 = iVar2 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar2,0x96);
      pfVar1 = (fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> *)
               &((EV_EXE_CTRL *)pfVar3)->event_id;
      pfVar3 = (fixed_array<EV_EXE_CTRL,150> *)((int)pfVar3 + 0x10);
      if (pfVar1->m_aData[0].event_id == -1) {
        return iVar2;
      }
    }
  }
  return iVar4;
}

void EventExe() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<EV_EXE_CTRL,150> *exe_ctrl;
  
  exe_ctrl = &ev_exe_ctrl;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
    iVar2 = iVar1 + 1;
    if (((EV_EXE_CTRL *)exe_ctrl)->event_id != -1) {
      _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
      EventExeFuncCall__FP11EV_EXE_CTRL((EV_EXE_CTRL *)exe_ctrl);
    }
                    /* end of inlined section */
    exe_ctrl = (fixed_array<EV_EXE_CTRL,150> *)((int)exe_ctrl + 0x10);
    iVar1 = iVar2;
  } while (iVar2 < 0x96);
  return;
}

void EventExeRelease(int event_id) {
	int i;
	
  int iVar1;
  fixed_array<EV_EXE_CTRL,150> *ctrl;
  
  iVar1 = 0;
  ctrl = &ev_exe_ctrl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
    if (((EV_EXE_CTRL *)ctrl)->event_id == event_id) {
      _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar1,0x96);
      EventExeCtrlInit__FP11EV_EXE_CTRLiPUc((EV_EXE_CTRL *)ctrl,-1,(uchar *)0x0);
      return;
                    /* end of inlined section */
    }
    iVar1 = iVar1 + 1;
    ctrl = (fixed_array<EV_EXE_CTRL,150> *)((int)ctrl + 0x10);
  } while (iVar1 < 0x96);
  return;
}

int CheckEventExeEntry(int event_id) {
	int i;
	int entry_res;
	
  fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> *pfVar1;
  int iVar2;
  fixed_array<EV_EXE_CTRL,150> *pfVar3;
  
  pfVar3 = &ev_exe_ctrl;
  iVar2 = 0;
  do {
    if (0x95 < iVar2) {
      return -1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(iVar2,0x96);
    pfVar1 = (fixed_array_base<EV_EXE_CTRL,150,EV_EXE_CTRL[150]> *)
             &((EV_EXE_CTRL *)pfVar3)->event_id;
    pfVar3 = (fixed_array<EV_EXE_CTRL,150> *)((int)pfVar3 + 0x10);
    iVar2 = iVar2 + 1;
  } while (pfVar1->m_aData[0].event_id != event_id);
                    /* end of inlined section */
  return 1;
}

void SetSave_EvExeCtrl(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11EV_EXE_CTRL_UiUi_PX01(0,0x96);
                    /* end of inlined section */
  data->size = 0x960;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&ev_exe_ctrl;
  return;
}

EV_EXE_CTRL* EV_EXE_CTRL * _fixed_array_verifyrange<EV_EXE_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& EV_EXE_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void global constructors keyed to EventExeInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
