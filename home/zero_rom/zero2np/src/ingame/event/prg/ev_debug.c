// STATUS: NOT STARTED

#include "ev_debug.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a9558;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f02c8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f02d0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void EvDbgMain() {
	float *room_off;
	
  int room_no;
  short *psVar1;
  
  room_no = GetPlyrAreaNo__Fv();
  MapLoadGetOffset__Fi(room_no);
  DrawEventRect__FPf(plyr_wrk.cmn_wrk.mbox.pos);
  if (*paddat[1] == 1) {
    EvDbg_EventStatePrint__Fv();
    psVar1 = *paddat;
  }
  else {
    psVar1 = *paddat;
  }
  if (*psVar1 == 1) {
    EvDbgDispCenter__Fv();
    psVar1 = paddat[5];
  }
  else {
    psVar1 = paddat[5];
  }
  if (*psVar1 == 1) {
    EvDbg_CompulsionSetPrint__Fv();
    psVar1 = paddat[6];
  }
  else {
    psVar1 = paddat[6];
  }
  if (*psVar1 == 1) {
    EvDbg_EventGhostPrint__Fv();
  }
  if ((pad[0].one & 8U) != 0) {
    printf("*********************************\n");
    printf("*     Player Room Local Pos     *\n");
    printf("*********************************\n");
    printf("  Player Room Local Pos x = %f\n");
    printf("  Player Room Local Pos y = %f\n");
    printf("  Player Room Local Pos z = %f\n");
    printf("  Player Floor %d\n");
  }
  if ((pad[0].one & 2U) != 0) {
    printf("*********************************\n");
    printf("*     Sister Room Local Pos     *\n");
    printf("*********************************\n");
    printf("  Sister Room Local Pos x = %f\n");
    printf("  Sister Room Local Pos y = %f\n");
    printf("  Sister Room Local Pos z = %f\n");
    printf("  Sister Floor %d\n");
  }
  return;
}
