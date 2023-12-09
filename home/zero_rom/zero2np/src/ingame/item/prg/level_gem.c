// STATUS: NOT STARTED

#include "level_gem.h"

static char plyr_level_gem;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba458;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f1840,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f1848,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void PlyrLevelGemInit() {
  plyr_level_gem = '\0';
  return;
}

void GetLevelGem() {
  if ('c' < (char)(plyr_level_gem + '\x01')) {
    plyr_level_gem = 'c';
    return;
  }
  plyr_level_gem = plyr_level_gem + '\x01';
  return;
}

void LostLevelGem() {
	static char __FUNCTION__[13] = {
		/* [0] = */ 76,
		/* [1] = */ 111,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 76,
		/* [5] = */ 101,
		/* [6] = */ 118,
		/* [7] = */ 101,
		/* [8] = */ 108,
		/* [9] = */ 71,
		/* [10] = */ 101,
		/* [11] = */ 109,
		/* [12] = */ 0
	};
	
  plyr_level_gem = plyr_level_gem - 1;
  if ((int)((uint)(byte)plyr_level_gem << 0x18) < 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s\n");
    plyr_level_gem = '\0';
  }
  return;
}

char GetPlyrLevelGemNum() {
  return plyr_level_gem;
}

void SetSave_PlyrLevelGem(MC_SAVE_DATA *data) {
  data->addr = (uchar *)&plyr_level_gem;
  data->size = 1;
  return;
}

void DebugSetLevelGemMaxNum() {
  plyr_level_gem = 'c';
  return;
}
