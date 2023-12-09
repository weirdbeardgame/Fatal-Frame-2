// STATUS: NOT STARTED

#include "ending.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a8578;
	
  g3ddbgAssert__FbPCce(false,str_688);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f00e0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f00e8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void init_Ending_Movie() {
  return;
}

GPHASE_ENUM pre_Ending_Movie(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Ending_Movie(GPHASE_ENUM result) {
  return GPHASE_CONTINUE;
}

void end_Ending_Movie() {
  return;
}

void init_Ending_Normal1() {
  ClearFlgEndingNormalExe__Fv();
  InitMovieWithTitle__Fii(0x33,1);
  return;
}

GPHASE_ENUM one_Ending_Normal1(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_ENDING_NORMAL2);
  }
  return GPHASE_CONTINUE;
}

void end_Ending_Normal1() {
  EndMovieWithTitle__Fv();
  SendIngameEndingNormal__Fi(0);
  return;
}

void init_Ending_Normal2() {
  InitMovieWithTitle__Fii(0x35,1);
  return;
}

GPHASE_ENUM one_Ending_Normal2(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMERESULT_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_Ending_Normal2() {
  EndMovieWithTitle__Fv();
  return;
}

void init_Ending_Hard() {
  ClearFlgEndingHardExe__Fv();
  InitMovieWithTitle__Fii(0x34,1);
  return;
}

GPHASE_ENUM one_Ending_Hard(GPHASE_ENUM dummy) {
  int iVar1;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_GAMERESULT_TOP);
  }
  return GPHASE_CONTINUE;
}

void end_Ending_Hard() {
  EndMovieWithTitle__Fv();
  SendIngameEndingHard__Fi(0);
  return;
}
