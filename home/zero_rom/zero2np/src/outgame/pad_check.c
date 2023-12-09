// STATUS: NOT STARTED

#include "pad_check.h"

static char pad_check_step;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c29e8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3710,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3718,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static void PadCheckInit() {
  pad_check_step = '\0';
  return;
}

static void PadCheckMain() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 80,
		/* [1] = */ 97,
		/* [2] = */ 100,
		/* [3] = */ 67,
		/* [4] = */ 104,
		/* [5] = */ 101,
		/* [6] = */ 99,
		/* [7] = */ 107,
		/* [8] = */ 77,
		/* [9] = */ 97,
		/* [10] = */ 105,
		/* [11] = */ 110,
		/* [12] = */ 0
	};
	
  int iVar1;
  
  if (pad_check_step == '\0') {
    iVar1 = padIsConnected__Fi(0);
    if (iVar1 == 0) {
      pad_check_step = '\x01';
    }
    else {
      iVar1 = GetPadStateStable__Fi(0);
      if (iVar1 != 0) {
        iVar1 = GetPadDUALSHOCK2__Fi(0);
        if (iVar1 != 0) {
          SetNextGPhase__F14GPHASE_ID_ENUM(GID_LANGSEL_MAIN);
          printf(s_pass1_003f3720);
          return;
        }
        pad_check_step = '\x01';
        printf(s_pass2_003f3728);
        return;
      }
    }
  }
  else if (pad_check_step == '\x01') {
    iVar1 = padIsConnected__Fi(0);
    if ((iVar1 != 0) && (iVar1 = GetPadDUALSHOCK2__Fi(0), iVar1 != 0)) {
      PadCheckMainPad__Fv();
      return;
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  return;
}

static void PadCheckMainPad() {
  if (**paddat == 1) {
    SystemBankPlay__FiiiiP11_SND_3D_SETii(3,1,0,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_LANGSEL_MAIN);
  }
  return;
}

static void PadCheckDispMain() {
  if (pad_check_step == '\x01') {
    DrawCmnTwoLineWindow__FUiffffUcUc(0,45.0,126.0,DAT_003ee688,216.0,0x80,0x80);
    PrintMsg__Fiiiiiii(0x41,0x35,0x5c,0x8e,1,0x80,0);
  }
  return;
}

void init_Boot_PadCheck() {
  PadCheckInit__Fv();
  return;
}

GPHASE_ENUM one_Boot_PadCheck(GPHASE_ENUM dummy) {
  PadCheckMain__Fv();
  PadCheckDispMain__Fv();
  return GPHASE_CONTINUE;
}

void end_Boot_PadCheck() {
  return;
}
