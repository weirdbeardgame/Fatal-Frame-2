// STATUS: NOT STARTED

#include "ev_talk.h"

typedef struct {
	u_char talk_step;
	int stream_id;
	int data_pos;
	int pad_accept_counter;
} TALK_EXE_CTRL;

struct fixed_array_base<TALK_TBL,8,TALK_TBL[8]> {
protected:
	TALK_TBL m_aData[8];
	
public:
	fixed_array_base<TALK_TBL,8,TALK_TBL[8]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TALK_TBL& operator[]();
	TALK_TBL& operator[]();
	TALK_TBL* data();
	TALK_TBL* begin();
	TALK_TBL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TALK_TBL,8> : fixed_array_base<TALK_TBL,8,TALK_TBL[8]> {
};

static fixed_array<TALK_TBL,8> talk_tbl;
unsigned char TALK_TBL type_info node[8];
unsigned char TALK_DATA type_info node[8];
static TALK_EXE_CTRL talk_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ac0e0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9TALK_DATA(0x3f05d0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9TALK_DATA(0x3f05d8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9TALK_DATA(0x3ac128,_max);
  }
  return (uint **)0x0;
}

void EvTalkInit() {
	int i;
	
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  TalkExeCtrlInit__Fv();
  uVar1 = 0;
  do {
    uVar2 = uVar2 + 1;
    TalkTblInit__FUc((uchar)uVar1);
    uVar1 = uVar2 & 0xff;
  } while ((int)uVar2 < 8);
  return;
}

static void TalkExeCtrlInit() {
  talk_ctrl.stream_id = -1;
  talk_ctrl.pad_accept_counter = 0;
  talk_ctrl.talk_step = '\0';
  talk_ctrl.data_pos = 0;
  return;
}

void TalkTblInit(u_char tbl_id) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 84,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 107,
		/* [4] = */ 84,
		/* [5] = */ 98,
		/* [6] = */ 108,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 105,
		/* [10] = */ 116,
		/* [11] = */ 0
	};
	
  if (7 < tbl_id) {
    printf("tbl_id ERROR!! TalkDataAdd()\n");
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal(&DAT_003f0608);
  }
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  memset(talk_tbl.field0_0x0.m_aData + tbl_id,0,0x88);
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
  talk_tbl.field0_0x0.m_aData[tbl_id].cam_flg = '\x01';
  return;
}

void TalkDataAdd(u_char tbl_id, int msg_id, int subtitle_label) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 84,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 107,
		/* [4] = */ 68,
		/* [5] = */ 97,
		/* [6] = */ 116,
		/* [7] = */ 97,
		/* [8] = */ 65,
		/* [9] = */ 100,
		/* [10] = */ 100,
		/* [11] = */ 0
	};
	
  char cVar1;
  TALK_TBL *pTVar2;
  int iVar3;
  
  if (7 < tbl_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("tbl_id Error!! %s");
  }
  if (0xfa < subtitle_label + 1U) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("subtitle label Error!! %s : subtitle_label = %d");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pTVar2 = talk_tbl.field0_0x0.m_aData + tbl_id;
  iVar3 = (uint)tbl_id * 0x88 + 0x47b938;
  if (pTVar2->data_num < '\x10') {
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    cVar1 = pTVar2->data_num;
    _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(cVar1,0x10);
    *(int *)(iVar3 + cVar1 * 8) = msg_id;
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    cVar1 = pTVar2->data_num;
    _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(cVar1,0x10);
    *(int *)(iVar3 + cVar1 * 8 + 4) = subtitle_label;
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    pTVar2->data_num = pTVar2->data_num + '\x01';
  }
  else {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("MAX OVER ERROR!! %s");
  }
  return;
}

void TalkTypeChange(u_char tbl_id, int talk_type) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 84,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 107,
		/* [4] = */ 84,
		/* [5] = */ 121,
		/* [6] = */ 112,
		/* [7] = */ 101,
		/* [8] = */ 67,
		/* [9] = */ 104,
		/* [10] = */ 97,
		/* [11] = */ 110,
		/* [12] = */ 103,
		/* [13] = */ 101,
		/* [14] = */ 0
	};
	
  if (7 < tbl_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("tbl_id ERROR!! TalkTypeChange()");
  }
  if (1 < talk_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("talk_type ERROR!! TalkTypeChange()");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
  talk_tbl.field0_0x0.m_aData[tbl_id].talk_type = talk_type;
  return;
}

int TalkExeMain(u_char tbl_id) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 84,
		/* [1] = */ 97,
		/* [2] = */ 108,
		/* [3] = */ 107,
		/* [4] = */ 69,
		/* [5] = */ 120,
		/* [6] = */ 101,
		/* [7] = */ 77,
		/* [8] = */ 97,
		/* [9] = */ 105,
		/* [10] = */ 110,
		/* [11] = */ 0
	};
	int res;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (uint)tbl_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
  if (talk_tbl.field0_0x0.m_aData[uVar2].data_num == '\0') {
                    /* end of inlined section */
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("ERROR!! TalkExeMain()");
  }
  if (talk_ctrl.talk_step == '\0') {
    SetTalkDataPos__FUc(tbl_id);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    if (talk_tbl.field0_0x0.m_aData[uVar2].cam_flg != '\0') {
                    /* end of inlined section */
      ReqPlyrTalkCameraCtrl__Fff(-200.0,700.0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    }
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    iVar3 = uVar2 * 0x88 + 0x47b938;
    iVar1 = talk_ctrl.data_pos * 8;
    _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(talk_ctrl.data_pos,0x10);
    iVar1 = *(int *)(iVar3 + iVar1 + 4);
    if (iVar1 != -1) {
      _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
      iVar1 = talk_ctrl.data_pos * 8;
      _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(talk_ctrl.data_pos,0x10);
      if (*(int *)(iVar3 + iVar1 + 4) == 0xffff) {
                    /* end of inlined section */
        talk_ctrl.stream_id = -1;
        iVar1 = talk_ctrl.stream_id;
      }
      else {
        _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
        iVar1 = talk_ctrl.data_pos * 8;
        _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(talk_ctrl.data_pos,0x10);
        SubTitleReq__Fi(*(int *)(iVar3 + iVar1 + 4));
        _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
        iVar1 = talk_ctrl.data_pos * 8;
        _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(talk_ctrl.data_pos,0x10);
        iVar1 = *(int *)(iVar3 + iVar1 + 4);
      }
    }
    talk_ctrl.stream_id = iVar1;
    talk_ctrl.talk_step = '\x01';
    SetPlyrAnime__FUcUc('\0','\n');
    PlayerFinderLock__Fv();
    FilamentDrawLock__Fv();
  }
  if (talk_ctrl.talk_step == '\x01') {
    iVar1 = TalkExeMainSub__FUc(tbl_id);
    iVar3 = 0;
    if (iVar1 != 0) {
      TalkExeCtrlInit__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
      if ((&talk_tbl.field0_0x0.m_aData[0].cam_flg)[(uVar2 * 0x10 + (uint)tbl_id) * 8] != '\0') {
                    /* end of inlined section */
        EndPlyrApproachCameraCtrl__Fv();
      }
      PlayerFinderUnlock__Fv();
      FilamentDrawUnlock__Fv();
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

static int TalkExeMainSub(u_char tbl_id) {
	int Ret;
	
  int iVar1;
  uint uVar2;
  
  if (talk_ctrl.stream_id == -1) {
    iVar1 = TalkDispMain__FUc(tbl_id);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    iVar1 = TalkPadWait__Fv();
    if (iVar1 != 0) {
      SubTitleStop__Fv();
    }
    iVar1 = SubTitleIsEnd__Fv();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

static int TalkPadWait() {
	int RetVal;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = talk_ctrl.pad_accept_counter + 1;
  if (0x1d < talk_ctrl.pad_accept_counter) {
    if (*paddat[3] != 1) {
      return 0;
    }
    iVar2 = 1;
    iVar1 = talk_ctrl.pad_accept_counter;
  }
  talk_ctrl.pad_accept_counter = iVar1;
  return iVar2;
}

static int TalkDispMain(u_char tbl_id) {
	int res;
	int msg_type;
	int msg_id;
	int msg_state;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(tbl_id,8);
  iVar1 = *(int *)((int)talk_info.field0_0x0.m_aData + (uint)tbl_id * 4);
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
  iVar3 = talk_ctrl.data_pos * 8;
  _fixed_array_verifyrange__H1Z9TALK_DATA_UiUi_PX01(talk_ctrl.data_pos,0x10);
  iVar3 = *(int *)((uint)tbl_id * 0x88 + 0x47b938 + iVar3);
                    /* end of inlined section */
  iVar2 = 1;
  if (iVar3 != -1) {
    PrintMsgDef_W__Fii(iVar1,iVar3);
    iVar1 = MesStatusCheck__Fv();
    if (iVar1 == 0) {
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
  return iVar2;
}

static void SetTalkDataPos(u_char tbl_id) {
  char cVar1;
  int iVar2;
  TALK_TBL *pTVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pTVar3 = talk_tbl.field0_0x0.m_aData + tbl_id;
  iVar2 = talk_tbl.field0_0x0.m_aData[tbl_id].talk_type;
  if (iVar2 == 0) {
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    talk_ctrl.data_pos = (int)talk_tbl.field0_0x0.m_aData[tbl_id].data_pos;
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    talk_tbl.field0_0x0.m_aData[tbl_id].data_pos =
         talk_tbl.field0_0x0.m_aData[tbl_id].data_pos + '\x01';
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    if (pTVar3->data_num <= talk_tbl.field0_0x0.m_aData[tbl_id].data_pos) {
      _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
                    /* end of inlined section */
      talk_tbl.field0_0x0.m_aData[tbl_id].data_pos = '\0';
    }
  }
  else if (iVar2 == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
    cVar1 = pTVar3->data_num;
    iVar2 = GetRandValI__Fi((cVar1 * 0x18 + (int)cVar1) * 4 + -1);
    talk_ctrl.data_pos = iVar2 / 100;
                    /* end of inlined section */
  }
  else {
    printf("ERROR!! SetTalkDataPos()\n");
  }
  return;
}

void TalkCamSet(u_char tbl_id, u_char on_off) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(tbl_id,8);
  talk_tbl.field0_0x0.m_aData[tbl_id].cam_flg = on_off;
  return;
}

void SetSave_EvTalkTbl(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8TALK_TBL_UiUi_PX01(0,8);
                    /* end of inlined section */
  data->size = 0x440;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&talk_tbl;
  return;
}

TALK_TBL* TALK_TBL * _fixed_array_verifyrange<TALK_TBL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

TALK_DATA* TALK_DATA * _fixed_array_verifyrange<TALK_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  return;
}

type_info& TALK_TBL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& TALK_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to EvTalkInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
