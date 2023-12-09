// STATUS: NOT STARTED

#include "map_reverb.h"

struct _MAP_REVERB_DAT {
	short int depth;
};

typedef _MAP_REVERB_DAT MAP_REVERB_DAT;

static MAP_REVERB_DAT map_reverb_tbl[66] = {
	/* [0] = */ {
		/* .depth = */ 10376
	},
	/* [1] = */ {
		/* .depth = */ 12287
	},
	/* [2] = */ {
		/* .depth = */ 8191
	},
	/* [3] = */ {
		/* .depth = */ 8191
	},
	/* [4] = */ {
		/* .depth = */ 8191
	},
	/* [5] = */ {
		/* .depth = */ 10376
	},
	/* [6] = */ {
		/* .depth = */ 12287
	},
	/* [7] = */ {
		/* .depth = */ 12287
	},
	/* [8] = */ {
		/* .depth = */ 10376
	},
	/* [9] = */ {
		/* .depth = */ 10376
	},
	/* [10] = */ {
		/* .depth = */ 12287
	},
	/* [11] = */ {
		/* .depth = */ 10376
	},
	/* [12] = */ {
		/* .depth = */ 12287
	},
	/* [13] = */ {
		/* .depth = */ 12287
	},
	/* [14] = */ {
		/* .depth = */ 16383
	},
	/* [15] = */ {
		/* .depth = */ 10376
	},
	/* [16] = */ {
		/* .depth = */ 10376
	},
	/* [17] = */ {
		/* .depth = */ 10376
	},
	/* [18] = */ {
		/* .depth = */ 14472
	},
	/* [19] = */ {
		/* .depth = */ 12287
	},
	/* [20] = */ {
		/* .depth = */ 14472
	},
	/* [21] = */ {
		/* .depth = */ 12287
	},
	/* [22] = */ {
		/* .depth = */ 12287
	},
	/* [23] = */ {
		/* .depth = */ 8191
	},
	/* [24] = */ {
		/* .depth = */ 16383
	},
	/* [25] = */ {
		/* .depth = */ 8191
	},
	/* [26] = */ {
		/* .depth = */ 20479
	},
	/* [27] = */ {
		/* .depth = */ 12287
	},
	/* [28] = */ {
		/* .depth = */ 16383
	},
	/* [29] = */ {
		/* .depth = */ 12287
	},
	/* [30] = */ {
		/* .depth = */ 12287
	},
	/* [31] = */ {
		/* .depth = */ 14472
	},
	/* [32] = */ {
		/* .depth = */ 12287
	},
	/* [33] = */ {
		/* .depth = */ 10376
	},
	/* [34] = */ {
		/* .depth = */ 8191
	},
	/* [35] = */ {
		/* .depth = */ 16383
	},
	/* [36] = */ {
		/* .depth = */ 12287
	},
	/* [37] = */ {
		/* .depth = */ 20479
	},
	/* [38] = */ {
		/* .depth = */ 12287
	},
	/* [39] = */ {
		/* .depth = */ 16383
	},
	/* [40] = */ {
		/* .depth = */ 12287
	},
	/* [41] = */ {
		/* .depth = */ 16383
	},
	/* [42] = */ {
		/* .depth = */ 18568
	},
	/* [43] = */ {
		/* .depth = */ 16383
	},
	/* [44] = */ {
		/* .depth = */ 12287
	},
	/* [45] = */ {
		/* .depth = */ 14472
	},
	/* [46] = */ {
		/* .depth = */ 12287
	},
	/* [47] = */ {
		/* .depth = */ 22664
	},
	/* [48] = */ {
		/* .depth = */ 12287
	},
	/* [49] = */ {
		/* .depth = */ 22664
	},
	/* [50] = */ {
		/* .depth = */ 4095
	},
	/* [51] = */ {
		/* .depth = */ 12287
	},
	/* [52] = */ {
		/* .depth = */ 12287
	},
	/* [53] = */ {
		/* .depth = */ 20479
	},
	/* [54] = */ {
		/* .depth = */ 12287
	},
	/* [55] = */ {
		/* .depth = */ 16383
	},
	/* [56] = */ {
		/* .depth = */ 24575
	},
	/* [57] = */ {
		/* .depth = */ 12287
	},
	/* [58] = */ {
		/* .depth = */ 32767
	},
	/* [59] = */ {
		/* .depth = */ 28671
	},
	/* [60] = */ {
		/* .depth = */ 28671
	},
	/* [61] = */ {
		/* .depth = */ 24575
	},
	/* [62] = */ {
		/* .depth = */ 28671
	},
	/* [63] = */ {
		/* .depth = */ 32767
	},
	/* [64] = */ {
		/* .depth = */ 32767
	},
	/* [65] = */ {
		/* .depth = */ 12287
	}
};

static int rev_room_id_save;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bb2c0;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1ad0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1ad8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void map_reverbInit() {
  rev_room_id_save = -1;
  return;
}

void map_reverbAfterMCLoadInit() {
  SndSetEffect(0,(int)(short)map_reverb_tbl[rev_room_id_save].depth,3);
  return;
}

void map_reverbMain() {
	int now_room_id;
	
  uint uVar1;
  
  uVar1 = GetPlyrAreaNo__Fv();
  if (0x41 < uVar1) {
    printf("ROOM_ID_OVER[%d] : map_reverb.c\n");
    return;
  }
  if (uVar1 != rev_room_id_save) {
    SndSetEffect(0,(int)(short)map_reverb_tbl[uVar1].depth,3);
    rev_room_id_save = uVar1;
  }
  return;
}
