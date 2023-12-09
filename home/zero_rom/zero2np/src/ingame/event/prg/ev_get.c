// STATUS: NOT STARTED

#include "ev_get.h"

unsigned char EVENT_STATE type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9ef0;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3f03e0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3f03e8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11EVENT_STATE(0x3a9f38,_max);
  }
  return (uint **)0x0;
}

u_char GetEvState(int event_id) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11EVENT_STATE_UiUi_PX01(event_id,0x78b);
                    /* end of inlined section */
  return ev_wrk.ev_state.field0_0x0.m_aData[event_id].state;
}

u_char GetEvWrkWaitFlg() {
  return ev_wrk.wait_flg;
}

u_char* EvBinChangeAddr4(u_char *top_addr, u_char *dat_addr) {
  uint uVar1;
  
  uVar1 = Get4Byte__FPUc(dat_addr);
  return top_addr + uVar1;
}

u_char* EvGetTblAddr(int tbl_type) {
	u_char *tbl_addr;
	
  uchar *puVar1;
  
  if ((uint)tbl_type < 7) {
    puVar1 = EvBinChangeAddr4__FPUcT0((uchar *)0xd4ec00,(uchar *)(tbl_type * 4 + 0xd4ec00));
  }
  else {
    puVar1 = (uchar *)0x0;
  }
  return puVar1;
}

u_char* EvGetExeAddr(int tbl_type, int ev_no) {
	u_char *tbl_addr;
	u_char *exe_addr;
	
  uchar *puVar1;
  
  if ((uint)tbl_type < 7) {
    puVar1 = EvGetTblAddr__Fi(tbl_type);
  }
  else {
    puVar1 = (uchar *)0x0;
  }
  if (puVar1 == (uchar *)0x0) {
    puVar1 = (uchar *)0x0;
  }
  else {
    puVar1 = EvBinChangeAddr4__FPUcT0((uchar *)0xd4ec00,puVar1 + ev_no * 4);
  }
  return puVar1;
}

int EvGetParentID(int event_id) {
	int parent_id;
	u_char *parent_addr;
	
  uchar *dat_addr;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  dat_addr = EvGetExeAddr__Fii(5,event_id);
  uVar1 = Get4Byte__FPUc(dat_addr);
  while (uVar1 != 0xffffffff) {
    uVar2 = Get4Byte__FPUc(dat_addr);
    uVar1 = Get4Byte__FPUc(dat_addr + 4);
    dat_addr = dat_addr + 4;
  }
  return uVar2;
}

void EvSetSubId(u_char *dat_addr, int *id_tbl) {
	static char __FUNCTION__[11] = {
		/* [0] = */ 69,
		/* [1] = */ 118,
		/* [2] = */ 83,
		/* [3] = */ 101,
		/* [4] = */ 116,
		/* [5] = */ 83,
		/* [6] = */ 117,
		/* [7] = */ 98,
		/* [8] = */ 73,
		/* [9] = */ 100,
		/* [10] = */ 0
	};
	int i;
	u_int ev_id;
	
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uchar *dat_addr_00;
  int iVar4;
  
  piVar2 = id_tbl + 0x31;
  iVar4 = 0x31;
  do {
    iVar4 = iVar4 + -1;
    *piVar2 = -1;
    piVar2 = piVar2 + -1;
  } while (-1 < iVar4);
  uVar3 = Get4Byte__FPUc(dat_addr);
  iVar4 = 0;
  dat_addr_00 = dat_addr + 4;
  while( true ) {
    bVar1 = 0x31 < iVar4;
    if (uVar3 == 0xffffffff) {
      return;
    }
    iVar4 = iVar4 + 1;
    if (bVar1) break;
    *id_tbl = uVar3;
    id_tbl = (int *)((uint *)id_tbl + 1);
    uVar3 = Get4Byte__FPUc(dat_addr_00);
    dat_addr_00 = dat_addr_00 + 4;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("ERROR!! SubEventId MAX OVER!!  EvSetSubId()\n");
  return;
}

void EvGetSubId(int event_no, int *id_tbl) {
  uchar *dat_addr;
  
  dat_addr = EvGetExeAddr__Fii(6,event_no);
  EvSetSubId__FPUcPi(dat_addr,id_tbl);
  return;
}

u_char Get1Byte(u_char *dat_addr) {
	u_char dat;
	
  uchar dat;
  
  return *dat_addr;
}

u_short Get2Byte(u_char *dat_addr) {
	u_short dat;
	
  short dat;
  
  return *(short *)dat_addr;
}

u_int Get4Byte(u_char *dat_addr) {
	u_int dat;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint in_v0_lo;
  uint dat;
  
  uVar1 = (uint)(dat_addr + 3) & 3;
  uVar2 = (uint)dat_addr & 3;
  uVar1 = (*(int *)(dat_addr + 3 + -uVar1) << (3 - uVar1) * 8 |
          in_v0_lo & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar2) * 8 |
          *(uint *)(dat_addr + -uVar2) >> uVar2 * 8;
  uVar2 = (int)&dat + 3U & 3;
  puVar3 = (uint *)(((int)&dat + 3U) - uVar2);
  *puVar3 = *puVar3 & -1 << (uVar2 + 1) * 8 | uVar1 >> (3 - uVar2) * 8;
  return uVar1;
}

float EvGetRot360(short int rot360) {
	float rot;
	
  float rot;
  
  rot = ((float)(int)(short)rot360 / 180.0) * DAT_003ee25c;
  RotLimitChk__FPf(&rot);
  return rot;
}

EVENT_STATE* EVENT_STATE * _fixed_array_verifyrange<EVENT_STATE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& EVENT_STATE type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}
