// STATUS: NOT STARTED

#include "mim_dat.h"

static int ch000_mim_no_tbl[41] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 2,
	/* [3] = */ 3,
	/* [4] = */ 4,
	/* [5] = */ 5,
	/* [6] = */ -1,
	/* [7] = */ 6,
	/* [8] = */ 7,
	/* [9] = */ 6,
	/* [10] = */ 7,
	/* [11] = */ 8,
	/* [12] = */ 8,
	/* [13] = */ 9,
	/* [14] = */ 9,
	/* [15] = */ -1,
	/* [16] = */ -1,
	/* [17] = */ -1,
	/* [18] = */ -1,
	/* [19] = */ 10,
	/* [20] = */ 10,
	/* [21] = */ 11,
	/* [22] = */ 18,
	/* [23] = */ 12,
	/* [24] = */ 19,
	/* [25] = */ 17,
	/* [26] = */ -1,
	/* [27] = */ -1,
	/* [28] = */ -1,
	/* [29] = */ -1,
	/* [30] = */ 13,
	/* [31] = */ 20,
	/* [32] = */ 14,
	/* [33] = */ 21,
	/* [34] = */ 15,
	/* [35] = */ 22,
	/* [36] = */ 16,
	/* [37] = */ 23,
	/* [38] = */ -1,
	/* [39] = */ -1,
	/* [40] = */ -1
};

static int ch001_mim_no_tbl[41] = {
	/* [0] = */ 0,
	/* [1] = */ 1,
	/* [2] = */ 2,
	/* [3] = */ 3,
	/* [4] = */ -1,
	/* [5] = */ 4,
	/* [6] = */ 5,
	/* [7] = */ 6,
	/* [8] = */ 7,
	/* [9] = */ 6,
	/* [10] = */ 7,
	/* [11] = */ 8,
	/* [12] = */ 8,
	/* [13] = */ 9,
	/* [14] = */ 9,
	/* [15] = */ 10,
	/* [16] = */ 11,
	/* [17] = */ 12,
	/* [18] = */ 13,
	/* [19] = */ -1,
	/* [20] = */ -1,
	/* [21] = */ -1,
	/* [22] = */ -1,
	/* [23] = */ -1,
	/* [24] = */ -1,
	/* [25] = */ -1,
	/* [26] = */ 16,
	/* [27] = */ 14,
	/* [28] = */ 17,
	/* [29] = */ 15,
	/* [30] = */ -1,
	/* [31] = */ -1,
	/* [32] = */ -1,
	/* [33] = */ -1,
	/* [34] = */ -1,
	/* [35] = */ -1,
	/* [36] = */ -1,
	/* [37] = */ -1,
	/* [38] = */ -1,
	/* [39] = */ -1,
	/* [40] = */ -1
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bfd20;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3048,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3050,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

int mimdatGetMimeNo(ANI_CTRL *ani_ctrl, int num) {
  switch(ani_ctrl->mdl_no) {
  case 0:
  case 0x3e:
  case 0x40:
  case 0x42:
  case 0x44:
  case 0x46:
  case 0x48:
  case 0x4a:
  case 0x4c:
    if (num < 0x29) {
      return ch000_mim_no_tbl[num];
    }
    break;
  case 1:
  case 0x3f:
  case 0x41:
  case 0x43:
  case 0x45:
  case 0x47:
  case 0x49:
  case 0x4b:
  case 0x4d:
    if (num < 0x29) {
      return ch001_mim_no_tbl[num];
    }
    break;
  default:
    return num;
  }
  return -1;
}
