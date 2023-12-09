// STATUS: NOT STARTED

#include "ev_gaze.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9e98;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0398,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f03a0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void CEventGazeWrk::Init() {
  *(ulong *)this = *(ulong *)this & 0xfffffffffffffffe;
  return;
}

void CEventGazeWrk::SetObjType(int iObjType, int iObjId) {
  *(ulong *)this = *(ulong *)this | 3;
  this->mObjId = iObjId;
  this->mObjType = (char)iObjType;
  return;
}

void CEventGazeWrk::SetPoint(float *Pos) {
  *(ulong *)this = *(ulong *)this & 0xfffffffffffffffd | 1;
  sceVu0CopyVector(this->mPos,Pos);
  return;
}

void CEventSisterGazeWrk::Work() {
	LOOK_AT_PARAM param;
	
  float *obj_pos;
  _LOOK_AT_PARAM param;
  
  if ((*(ulong *)&this->field0_0x0 & 1) != 0) {
    obj_pos = (this->field0_0x0).mPos;
    if ((*(ulong *)&this->field0_0x0 & 2) != 0) {
      GetObjectPos__FPfUci(obj_pos,(this->field0_0x0).mObjType,(this->field0_0x0).mObjId);
    }
    param.eye_spd = DAT_003ee250;
    param.head_spd = DAT_003ee254;
    param.chest_spd = DAT_003ee258;
    sceVu0CopyVector(&param,obj_pos);
    SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
              (&param,LTP_MAYU_EVENT_OBJ,DAT_003f03d0);
  }
  return;
}
