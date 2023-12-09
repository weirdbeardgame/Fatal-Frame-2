// STATUS: NOT STARTED

#include "save_data.h"

void (*save_system_data[3])(/* parameters unknown */) = {
	/* [0] = */ SetSave_ClearFlg,
	/* [1] = */ SetSave_Option,
	/* [2] = */ NULL
};

void (*save_game_data[50])(/* parameters unknown */) = {
	/* [0] = */ SetSave_IngameWrk,
	/* [1] = */ SetSave_PlyrWrk,
	/* [2] = */ SetSave_SisWrk,
	/* [3] = */ SetSave_SisTrace,
	/* [4] = */ SetSave_SisAlgoWrk,
	/* [5] = */ SetSave_SisMotion,
	/* [6] = */ SetSave_PlyrItem,
	/* [7] = */ SetSave_PlyrFile,
	/* [8] = */ SetSave_PlyrCrystal,
	/* [9] = */ SetSave_PlyrLevelGem,
	/* [10] = */ SetSave_PlyrMemo,
	/* [11] = */ SetSave_PlyrSoulList,
	/* [12] = */ SetSave_ListCompDispFlg,
	/* [13] = */ SetSave_EvWrk,
	/* [14] = */ SetSave_EvCtrlCenter,
	/* [15] = */ SetSave_EvExeCtrl,
	/* [16] = */ SetSave_EvTalkTbl,
	/* [17] = */ SetSave_EvTimerCtrl,
	/* [18] = */ SetSave_EvChangeCtrl,
	/* [19] = */ SetSave_EvSaveStream,
	/* [20] = */ SetSave_EvSaveObjStream,
	/* [21] = */ SetSave_EvSavePosStream,
	/* [22] = */ SetSave_EvSaveEffDither,
	/* [23] = */ SetSave_EvSaveScreenEffect,
	/* [24] = */ SetSave_DoorCtrl,
	/* [25] = */ SetSave_PlayData,
	/* [26] = */ SetSave_PlayTimer,
	/* [27] = */ SetSave_RoomInInfo,
	/* [28] = */ SetSave_GhostSealDoor,
	/* [29] = */ ev_seSetSave,
	/* [30] = */ ev_sisSetSave,
	/* [31] = */ ev_eneSetSave,
	/* [32] = */ m_plyr_cameraSetSaveEQ,
	/* [33] = */ m_plyr_cameraSetSavePowrUp,
	/* [34] = */ m_plyr_cameraSetSaveFilament,
	/* [35] = */ m_plyr_cameraSetSaveFilmType,
	/* [36] = */ sis_mdlSetSave,
	/* [37] = */ photo_datSetSave,
	/* [38] = */ release_typeSetSaveJ,
	/* [39] = */ release_typeSetSaveA,
	/* [40] = */ movie_projecterSetSave,
	/* [41] = */ SetSave_ClearPuzzle,
	/* [42] = */ MapSaveCallback,
	/* [43] = */ plyr_mdlSetSave,
	/* [44] = */ map_bgmSetSave,
	/* [45] = */ ev_gazeSisSetSave,
	/* [46] = */ MissionSelSave,
	/* [47] = */ fene_entrySetSave,
	/* [48] = */ CostumeSetSave,
	/* [49] = */ NULL
};

void (*save_play_data_head[2])(/* parameters unknown */) = {
	/* [0] = */ SetSave_PlayDataHead,
	/* [1] = */ NULL
};

void (*save_album_data[3])(/* parameters unknown */) = {
	/* [0] = */ SetSave_AlbumInfoData,
	/* [1] = */ SetSave_AlbumData,
	/* [2] = */ NULL
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c49e8;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3c00,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3c08,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}
