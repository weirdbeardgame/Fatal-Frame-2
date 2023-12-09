// STATUS: NOT STARTED

#include "cam_level_up_point.h"

int cam_base_status_point[3][4] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 6000,
		/* [2] = */ 20000,
		/* [3] = */ 30000
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 4000,
		/* [2] = */ 10000,
		/* [3] = */ 21000
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 7000,
		/* [2] = */ 24000,
		/* [3] = */ 38000
	}
};

int cam_sp_shot_point_tbl[10][4] = {
	/* [0] = */ {
		/* [0] = */ 0,
		/* [1] = */ 8000,
		/* [2] = */ 17000,
		/* [3] = */ 28000
	},
	/* [1] = */ {
		/* [0] = */ 0,
		/* [1] = */ 8000,
		/* [2] = */ 17000,
		/* [3] = */ 28000
	},
	/* [2] = */ {
		/* [0] = */ 0,
		/* [1] = */ 8000,
		/* [2] = */ 19000,
		/* [3] = */ 30000
	},
	/* [3] = */ {
		/* [0] = */ 0,
		/* [1] = */ 8000,
		/* [2] = */ 18000,
		/* [3] = */ 29000
	},
	/* [4] = */ {
		/* [0] = */ 0,
		/* [1] = */ 30000,
		/* [2] = */ 44000,
		/* [3] = */ 55000
	},
	/* [5] = */ {
		/* [0] = */ 0,
		/* [1] = */ 35000,
		/* [2] = */ 50000,
		/* [3] = */ 65000
	},
	/* [6] = */ {
		/* [0] = */ 0,
		/* [1] = */ 10000,
		/* [2] = */ 20000,
		/* [3] = */ 30000
	},
	/* [7] = */ {
		/* [0] = */ 0,
		/* [1] = */ 12000,
		/* [2] = */ 25000,
		/* [3] = */ 34000
	},
	/* [8] = */ {
		/* [0] = */ 0,
		/* [1] = */ 45000,
		/* [2] = */ 70000,
		/* [3] = */ 90000
	},
	/* [9] = */ {
		/* [0] = */ 0,
		/* [1] = */ 45000,
		/* [2] = */ 70000,
		/* [3] = */ 90000
	}
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1ae8;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef588,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef590,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}
