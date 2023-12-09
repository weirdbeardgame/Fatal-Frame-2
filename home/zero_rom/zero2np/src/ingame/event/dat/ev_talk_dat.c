// STATUS: NOT STARTED

#include "ev_talk_dat.h"

reference_fixed_array<int,8> talk_info = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ac2d8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0618,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0620,_max,v);
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
    talk_info.field0_0x0.m_aData = (fixed_array_base<int,8,int_*>)&DAT_003ac330;
  }
  return;
}

static void global constructors keyed to talk_info() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
