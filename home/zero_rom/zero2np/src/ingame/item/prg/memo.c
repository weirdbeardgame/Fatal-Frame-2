// STATUS: NOT STARTED

#include "memo.h"

typedef struct {
	int state;
	int msg_step;
} PLYR_MEMO;

struct fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> {
protected:
	PLYR_MEMO m_aData[20];
	
public:
	fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_MEMO& operator[]();
	PLYR_MEMO& operator[]();
	PLYR_MEMO* data();
	PLYR_MEMO* begin();
	PLYR_MEMO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_MEMO,20> : fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> {
};

static fixed_array<PLYR_MEMO,20> plyr_memo;
unsigned char PLYR_MEMO type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bc360;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_MEMO(0x3f2ac8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_MEMO(0x3f2ad0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_MEMO(0x3bc3a8,_max);
  }
  return (uint **)0x0;
}

void PlyrMemoInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<PLYR_MEMO,20> *pfVar3;
  
  pfVar3 = &plyr_memo;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> *)&((PLYR_MEMO *)pfVar3)->state)->m_aData[0].
    state = 0;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((PLYR_MEMO *)pfVar3)->msg_step = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<PLYR_MEMO,20> *)((int)pfVar3 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 0x14);
  return;
}

void UpdateMemo(int memo_label, u_char msg_step) {
	static char __FUNCTION__[11] = {
		/* [0] = */ 85,
		/* [1] = */ 112,
		/* [2] = */ 100,
		/* [3] = */ 97,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 77,
		/* [7] = */ 101,
		/* [8] = */ 109,
		/* [9] = */ 111,
		/* [10] = */ 0
	};
	
  PLYR_MEMO *pPVar1;
  uint uVar2;
  
  uVar2 = (uint)msg_step;
  if (0x13 < (uint)memo_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! UpdateMemo memo_label %d");
  }
  if (1 < uVar2) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! UpdateMemo msg_step %d");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
  pPVar1 = plyr_memo.field0_0x0.m_aData + memo_label;
  if ((pPVar1->state == 0) ||
     (_fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14),
     plyr_memo.field0_0x0.m_aData[memo_label].msg_step < (int)uVar2)) {
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
    plyr_memo.field0_0x0.m_aData[memo_label].msg_step = uVar2;
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
    pPVar1->state = 1;
  }
  return;
}

void ReadMemo(int memo_label) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 82,
		/* [1] = */ 101,
		/* [2] = */ 97,
		/* [3] = */ 100,
		/* [4] = */ 77,
		/* [5] = */ 101,
		/* [6] = */ 109,
		/* [7] = */ 111,
		/* [8] = */ 0
	};
	
  PLYR_MEMO *pPVar1;
  
  if (0x13 < (uint)memo_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s memo_label %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
  pPVar1 = plyr_memo.field0_0x0.m_aData + memo_label;
  if (pPVar1->state != 0) {
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
    pPVar1->state = 2;
  }
  return;
}

int GetMemoState(int memo_label) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 111,
		/* [7] = */ 83,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 116,
		/* [11] = */ 101,
		/* [12] = */ 0
	};
	
  if (0x13 < (uint)memo_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetMemoState memo_label %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
  return plyr_memo.field0_0x0.m_aData[memo_label].state;
}

int GetMemoMsgStep(int memo_label) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 101,
		/* [5] = */ 109,
		/* [6] = */ 111,
		/* [7] = */ 77,
		/* [8] = */ 115,
		/* [9] = */ 103,
		/* [10] = */ 83,
		/* [11] = */ 116,
		/* [12] = */ 101,
		/* [13] = */ 112,
		/* [14] = */ 0
	};
	
  if (0x13 < (uint)memo_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetMemoMsgID memo_label %d\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(memo_label,0x14);
  return plyr_memo.field0_0x0.m_aData[memo_label].msg_step;
}

int GetMemoHaveNum() {
	int i;
	int num;
	
  int iVar1;
  int iVar2;
  int iVar3;
  fixed_array<PLYR_MEMO,20> *pfVar4;
  
  iVar3 = 0;
  pfVar4 = &plyr_memo;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (((fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> *)&((PLYR_MEMO *)pfVar4)->state)->m_aData[0].
        state != 0) {
      iVar3 = iVar3 + 1;
    }
    pfVar4 = (fixed_array<PLYR_MEMO,20> *)((int)pfVar4 + 8);
    iVar1 = iVar2;
                    /* end of inlined section */
  } while (iVar2 < 0x14);
  return iVar3;
}

void SetSave_PlyrMemo(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(0,0x14);
                    /* end of inlined section */
  data->size = 0xa0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&plyr_memo;
  return;
}

void DebugAllFirstMemoGet() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<PLYR_MEMO,20> *pfVar3;
  
  pfVar3 = &plyr_memo;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> *)&((PLYR_MEMO *)pfVar3)->state)->m_aData[0].
    state = 1;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((PLYR_MEMO *)pfVar3)->msg_step = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<PLYR_MEMO,20> *)((int)pfVar3 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 0x14);
  return;
}

void DebugAllSecondMemoGet() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<PLYR_MEMO,20> *pfVar3;
  
  pfVar3 = &plyr_memo;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((fixed_array_base<PLYR_MEMO,20,PLYR_MEMO[20]> *)&((PLYR_MEMO *)pfVar3)->state)->m_aData[0].
    state = 1;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9PLYR_MEMO_UiUi_PX01(iVar1,0x14);
    ((PLYR_MEMO *)pfVar3)->msg_step = 1;
                    /* end of inlined section */
    pfVar3 = (fixed_array<PLYR_MEMO,20> *)((int)pfVar3 + 8);
    iVar1 = iVar2;
  } while (iVar2 < 0x14);
  return;
}

PLYR_MEMO* PLYR_MEMO * _fixed_array_verifyrange<PLYR_MEMO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& PLYR_MEMO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to PlyrMemoInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
