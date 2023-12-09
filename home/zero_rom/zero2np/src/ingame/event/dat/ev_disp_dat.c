// STATUS: NOT STARTED

#include "ev_disp_dat.h"

SPRT_DAT ev_disp2d_dat[2] = {
	/* [0] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 256,
		/* .x = */ 194,
		/* .y = */ 49,
		/* .pri = */ 160,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [1] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 275,
		/* .h = */ 238,
		/* .x = */ 184,
		/* .y = */ 58,
		/* .pri = */ 160,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	}
};

SPRT_DAT ev_chapter_dat[2] = {
	/* [0] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 255,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 320,
		/* .pri = */ 160,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [1] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 0,
		/* .v = */ 128,
		/* .w = */ 255,
		/* .h = */ 128,
		/* .x = */ 255,
		/* .y = */ 320,
		/* .pri = */ 160,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	}
};

reference_fixed_array<int,11> chapter_tim_file = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a99b0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0320,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0328,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int *ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    chapter_tim_file.field0_0x0.m_aData = (fixed_array_base<int,11,int_*>)&DAT_003a9a08;
  }
  return;
}

static void global constructors keyed to ev_disp2d_dat() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
