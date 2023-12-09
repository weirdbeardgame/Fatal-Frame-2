// STATUS: NOT STARTED

#include "ghost_seal_door.h"

struct fixed_array_base<unsigned char,9,unsigned char[9]> {
protected:
	u_char m_aData[9];
	
public:
	fixed_array_base<unsigned char,9,unsigned char[9]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_char& operator[]();
	u_char& operator[]();
	u_char* data();
	u_char* begin();
	u_char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned char,9> : fixed_array_base<unsigned char,9,unsigned char[9]> {
};

static fixed_array<unsigned char,9> ghost_seal_door_state;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3b4190;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (uchar *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f1030,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3f1038,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0x3b41d8,_max);
  }
  return (uint **)0x0;
}

void GhostSealDoorInit() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,9);
  memset(&ghost_seal_door_state,0,9);
  return;
}

void GhostSealDoorMain(int room_label) {
	int i;
	
  uchar *puVar1;
  int iVar2;
  GHOST_SEAL_DOOR_DATA *pGVar3;
  
  iVar2 = 0;
  pGVar3 = ghost_seal_door_data;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    puVar1 = ghost_seal_door_state.field0_0x0.m_aData + iVar2;
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar2,9);
                    /* end of inlined section */
    if ((*puVar1 == '\x02') && (pGVar3->end_room_label == room_label)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar2,9);
      *puVar1 = '\x03';
                    /* end of inlined section */
    }
    iVar2 = iVar2 + 1;
    pGVar3 = pGVar3 + 1;
  } while (iVar2 < 9);
  return;
}

void GhostSealDoorAppear(int seal_label) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 71,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 115,
		/* [4] = */ 116,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 97,
		/* [8] = */ 108,
		/* [9] = */ 68,
		/* [10] = */ 111,
		/* [11] = */ 111,
		/* [12] = */ 114,
		/* [13] = */ 65,
		/* [14] = */ 112,
		/* [15] = */ 112,
		/* [16] = */ 101,
		/* [17] = */ 97,
		/* [18] = */ 114,
		/* [19] = */ 0
	};
	
  uchar *puVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  puVar1 = ghost_seal_door_state.field0_0x0.m_aData + seal_label;
                    /* end of inlined section */
  if (8 < (uint)seal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s ghost_seal_door_label [%d]");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(seal_label,9);
  if (*puVar1 == '\0') {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(seal_label,9);
    *puVar1 = '\x01';
  }
  return;
}

void GhostSealDoorRelease(int seal_label) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 115,
		/* [4] = */ 116,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 97,
		/* [8] = */ 108,
		/* [9] = */ 68,
		/* [10] = */ 111,
		/* [11] = */ 111,
		/* [12] = */ 114,
		/* [13] = */ 82,
		/* [14] = */ 101,
		/* [15] = */ 108,
		/* [16] = */ 101,
		/* [17] = */ 97,
		/* [18] = */ 115,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	
  uchar *puVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  puVar1 = ghost_seal_door_state.field0_0x0.m_aData + seal_label;
                    /* end of inlined section */
  if (8 < (uint)seal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s ghost_seal_door_label [%d]");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(seal_label,9);
  if (*puVar1 == '\x01') {
    _fixed_array_verifyrange__H1ZUc_UiUi_PX01(seal_label,9);
    *puVar1 = '\x02';
  }
  return;
}

int GetGhostSealDoorState(int seal_label) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(seal_label,9);
  return (int)ghost_seal_door_state.field0_0x0.m_aData[seal_label];
}

void SetSave_GhostSealDoor(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,9);
                    /* end of inlined section */
  data->size = 9;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&ghost_seal_door_state;
  return;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (uchar *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to GhostSealDoorInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
