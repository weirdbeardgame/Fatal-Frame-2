// STATUS: NOT STARTED

#include "crystal.h"

static int crystal_stream[41] = {
	/* [0] = */ 2635,
	/* [1] = */ 2637,
	/* [2] = */ 2625,
	/* [3] = */ 2629,
	/* [4] = */ 2639,
	/* [5] = */ 2641,
	/* [6] = */ 2631,
	/* [7] = */ 2645,
	/* [8] = */ 2627,
	/* [9] = */ 2633,
	/* [10] = */ 2643,
	/* [11] = */ 2415,
	/* [12] = */ 2413,
	/* [13] = */ 2417,
	/* [14] = */ 2647,
	/* [15] = */ 2423,
	/* [16] = */ 2651,
	/* [17] = */ 2649,
	/* [18] = */ 2653,
	/* [19] = */ 2655,
	/* [20] = */ 2401,
	/* [21] = */ 2657,
	/* [22] = */ 2403,
	/* [23] = */ 2405,
	/* [24] = */ 3067,
	/* [25] = */ 3069,
	/* [26] = */ 2407,
	/* [27] = */ 2421,
	/* [28] = */ 2409,
	/* [29] = */ 2411,
	/* [30] = */ 3071,
	/* [31] = */ 3073,
	/* [32] = */ 3075,
	/* [33] = */ 2665,
	/* [34] = */ 2667,
	/* [35] = */ 2669,
	/* [36] = */ 2671,
	/* [37] = */ 2659,
	/* [38] = */ 2661,
	/* [39] = */ 2663,
	/* [40] = */ 2158
};

static fixed_array<char,40> plyr_crystal;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a3638;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef8d8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3ef8e0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3a3680,_max);
  }
  return (uint **)0x0;
}

void PlyrCrystalInit() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x28);
  memset(&plyr_crystal,0,0x28);
  return;
}

void GetCrystal(int crystal_label) {
	static char __FUNCTION__[11] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 121,
		/* [6] = */ 115,
		/* [7] = */ 116,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 0
	};
	
  char cVar1;
  
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetCrystal crystal_label %d");
  }
  cVar1 = GetPlyrCrystalState__Fi(crystal_label);
  if (cVar1 == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(crystal_label,0x28);
    plyr_crystal.field0_0x0.m_aData[crystal_label] = '\x01';
  }
  return;
}

void LostCrystal(int crystal_label) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 76,
		/* [1] = */ 111,
		/* [2] = */ 115,
		/* [3] = */ 116,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 121,
		/* [7] = */ 115,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 108,
		/* [11] = */ 0
	};
	
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! LostCrystal crystal_label %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(crystal_label,0x28);
  plyr_crystal.field0_0x0.m_aData[crystal_label] = '\0';
  return;
}

void HearCrystal(int crystal_label) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 72,
		/* [1] = */ 101,
		/* [2] = */ 97,
		/* [3] = */ 114,
		/* [4] = */ 67,
		/* [5] = */ 114,
		/* [6] = */ 121,
		/* [7] = */ 115,
		/* [8] = */ 116,
		/* [9] = */ 97,
		/* [10] = */ 108,
		/* [11] = */ 0
	};
	
  char cVar1;
  
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! HearCrystal crystal_label %d");
  }
  cVar1 = GetPlyrCrystalState__Fi(crystal_label);
  if (cVar1 != '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(crystal_label,0x28);
    plyr_crystal.field0_0x0.m_aData[crystal_label] = '\x02';
  }
  return;
}

char GetPlyrCrystalState(int crystal_label) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 67,
		/* [8] = */ 114,
		/* [9] = */ 121,
		/* [10] = */ 115,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 108,
		/* [14] = */ 83,
		/* [15] = */ 116,
		/* [16] = */ 97,
		/* [17] = */ 116,
		/* [18] = */ 101,
		/* [19] = */ 0
	};
	
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrCrystalState crystal_label %d");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(crystal_label,0x28);
  return plyr_crystal.field0_0x0.m_aData[crystal_label];
}

int GetCrystalStreamID(int crystal_label) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 121,
		/* [6] = */ 115,
		/* [7] = */ 116,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 83,
		/* [11] = */ 116,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 97,
		/* [15] = */ 109,
		/* [16] = */ 73,
		/* [17] = */ 68,
		/* [18] = */ 0
	};
	
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetCrystalStreamID crystal_label %d");
  }
  return crystal_stream[crystal_label];
}

MOVIE_TITLE_DAT* GetCrystalTitleDat(int crystal_label) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 67,
		/* [4] = */ 114,
		/* [5] = */ 121,
		/* [6] = */ 115,
		/* [7] = */ 116,
		/* [8] = */ 97,
		/* [9] = */ 108,
		/* [10] = */ 84,
		/* [11] = */ 105,
		/* [12] = */ 116,
		/* [13] = */ 108,
		/* [14] = */ 101,
		/* [15] = */ 68,
		/* [16] = */ 97,
		/* [17] = */ 116,
		/* [18] = */ 0
	};
	
  if (0x27 < crystal_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetCrystalTitleDat crystal_label %d");
  }
  return crystal_title_dat[crystal_label];
}

int GetPlyrHaveCrystalNum() {
	int i;
	int crystal_num;
	
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,0x28);
    pcVar1 = plyr_crystal.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
    if (*pcVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  } while (iVar2 < 0x28);
  return iVar3;
}

void SetSave_PlyrCrystal(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x28);
                    /* end of inlined section */
  data->size = 0x28;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&plyr_crystal;
  return;
}

void DebugAllCrystalGet() {
	int i;
	
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar2,0x28);
    pcVar1 = plyr_crystal.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    *pcVar1 = '\x01';
  } while (iVar2 < 0x28);
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (char *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to PlyrCrystalInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
