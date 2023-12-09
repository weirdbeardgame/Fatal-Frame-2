// STATUS: NOT STARTED

#include "alg_manage.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a1538;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef4b8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef4c0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

OL_LOAD_ERR alg_manageReqAlg(int alg_no) {
  _OL_LOAD_ERR _Var1;
  
  _Var1 = Req__7OL_LOADi(&ol_load,0x12d);
  return _Var1;
}

int alg_manageIsReadyAlg(int alg_no, int *mdl_pp) {
  OL_LOAD_READY OVar1;
  
  OVar1 = IsReady__7OL_LOADiPi(&ol_load,0x12d,mdl_pp);
  if (OVar1 != OL_LOAD_READY_READY) {
    OVar1 = (OL_LOAD_READY)(OVar1 == OL_LOAD_READY_READY_FIRST);
  }
  return OVar1;
}

void alg_manageClearAlg(int alg_no) {
  Clear__7OL_LOADi(&ol_load,0x12d);
  return;
}
