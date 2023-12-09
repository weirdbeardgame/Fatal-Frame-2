// STATUS: NOT STARTED

#include "ev_sis.h"

static BIT_FLAGS<66> area_sis_flg;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3abfc0;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f05a0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f05a8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ev_sisSetSave(MC_SAVE_DATA *save) {
  save->size = 0xc;
  save->addr = (uchar *)&area_sis_flg;
  return;
}

void ev_sisInit() {
	int i;
	
  int *piVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar2 = 2;
  piVar1 = area_sis_flg.flag_32 + 2;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = 0;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}

void ev_sisRegister(int area_no, int mdl_no, int anm_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x41 < area_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FlgUp Illegal Access %d MAX %d");
  }
  area_sis_flg.flag_32[area_no >> 5] = area_sis_flg.flag_32[area_no >> 5] | 1 << (area_no & 0x1fU);
  return;
}

static int ev_sisIsRegistered(int area_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x41 < area_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("IsUp Illegal Access %d MAX %d");
  }
  return area_sis_flg.flag_32[area_no >> 5] & 1 << (area_no & 0x1fU);
}

void ev_sisDelete(int area_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x41 < area_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FlgDown Illegal Access %d MAX %d");
  }
  area_sis_flg.flag_32[area_no >> 5] =
       area_sis_flg.flag_32[area_no >> 5] & ~(1 << (area_no & 0x1fU));
  return;
}

void ev_sisRelease() {
  ReleaseSisMdl__Fv();
  return;
}

void ev_sisChangeRoom(int room_id) {
  int iVar1;
  
  iVar1 = ev_sisIsRegistered__Fi(room_id);
  if (iVar1 != 0) {
    SetupSisMdl__Fv();
    return;
  }
  ReleaseSisMdl__Fv();
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int i;
	
  int *piVar1;
  int iVar2;
  
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
    iVar2 = 2;
    piVar1 = area_sis_flg.flag_32 + 2;
    do {
      iVar2 = iVar2 + -1;
      *piVar1 = 0;
      piVar1 = piVar1 + -1;
    } while (-1 < iVar2);
  }
  return;
}

static void global constructors keyed to ev_sisSetSave() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
