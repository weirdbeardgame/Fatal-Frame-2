// STATUS: NOT STARTED

#include "movie_projecter.h"

static float ScreenPosition[2][4][4] = {
	/* [0] = */ {
		/* [0] = */ {
			/* [0] = */ 17254.998f,
			/* [1] = */ -1409.49988f,
			/* [2] = */ 8898.74902f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ 17254.998f,
			/* [1] = */ -1409.49988f,
			/* [2] = */ 9973.74902f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ 17254.998f,
			/* [1] = */ -590.499939f,
			/* [2] = */ 8898.74902f,
			/* [3] = */ 1.f
		},
		/* [3] = */ {
			/* [0] = */ 17254.998f,
			/* [1] = */ -590.499939f,
			/* [2] = */ 9973.74902f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* [0] = */ 8123.74951f,
			/* [1] = */ -1409.49988f,
			/* [2] = */ 10229.999f,
			/* [3] = */ 1.f
		},
		/* [1] = */ {
			/* [0] = */ 7048.74951f,
			/* [1] = */ -1409.49988f,
			/* [2] = */ 10229.999f,
			/* [3] = */ 1.f
		},
		/* [2] = */ {
			/* [0] = */ 8123.74951f,
			/* [1] = */ -590.499939f,
			/* [2] = */ 10229.999f,
			/* [3] = */ 1.f
		},
		/* [3] = */ {
			/* [0] = */ 7048.74951f,
			/* [1] = */ -590.499939f,
			/* [2] = */ 10229.999f,
			/* [3] = */ 1.f
		}
	}
};

static fixed_array<int,2> SetFilmNo;

static int InitFilmNo[2] = {
	/* [0] = */ 3397,
	/* [1] = */ 3395
};

static MOVIE_PROJECTER_STATE now_state;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c1580;
	
  g3ddbgAssert__FbPCce(false,str_780);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f3388,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f3390,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3c15c8,_max);
  }
  return (uint **)0x0;
}

void movie_projecterInit() {
	int i;
	
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    *(undefined4 *)((int)SetFilmNo.field0_0x0.m_aData + iVar1) =
         *(undefined4 *)((int)InitFilmNo + iVar1);
                    /* end of inlined section */
    iVar1 = iVar1 + 4;
    iVar2 = iVar3;
  } while (iVar3 < 2);
  now_state = MOVIE_PROJECTER_STATE_NONE;
  return;
}

void movie_projecterRelease() {
  movie_projecterStop__Fv();
  return;
}

static int movie_projecterGetIndex() {
	int iRoomNo;
	
  int iVar1;
  int iVar2;
  
  iVar1 = GetPlyrRoomID__Fv();
  iVar2 = 0;
  if ((iVar1 != 0xbf) && (iVar2 = -1, iVar1 == 0x92)) {
    iVar2 = 1;
  }
  return iVar2;
}

void movie_projecterSetSave(MC_SAVE_DATA *save) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  save->addr = (uchar *)&SetFilmNo;
                    /* end of inlined section */
  save->size = 8;
  return;
}

void movie_projecterSetFilmNo(int iFilmNo) {
	int iIndex;
	
  int iVar1;
  
  iVar1 = movie_projecterGetIndex__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
    SetFilmNo.field0_0x0.m_aData[iVar1] = iFilmNo;
  }
                    /* end of inlined section */
  return;
}

int movie_projecterGetFilmNo() {
	int iIndex;
	
  int iVar1;
  int iVar2;
  
  iVar1 = movie_projecterGetIndex__Fv();
  iVar2 = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
    iVar2 = SetFilmNo.field0_0x0.m_aData[iVar1];
  }
  return iVar2;
}

int movie_projecterTakeFilm() {
	int iIndex;
	int ret;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = movie_projecterGetIndex__Fv();
  iVar2 = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (-1 < iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
    piVar3 = SetFilmNo.field0_0x0.m_aData + iVar1;
    iVar2 = *piVar3;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
                    /* end of inlined section */
    *piVar3 = -1;
    movie_projecterStop__Fv();
  }
  return iVar2;
}

void movie_projecterStop() {
  Release__10CMovieRoom(&movie_room);
  now_state = MOVIE_PROJECTER_STATE_NONE;
  return;
}

int movie_projecterIsReq() {
	int iIndex;
	
  int iVar1;
  
  iVar1 = movie_projecterGetIndex__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  if ((-1 < iVar1) &&
     (_fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2), -1 < SetFilmNo.field0_0x0.m_aData[iVar1]))
  {
    return 1;
  }
                    /* end of inlined section */
  return 0;
}

int movie_projecterPlay() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 118,
		/* [3] = */ 105,
		/* [4] = */ 101,
		/* [5] = */ 95,
		/* [6] = */ 112,
		/* [7] = */ 114,
		/* [8] = */ 111,
		/* [9] = */ 106,
		/* [10] = */ 101,
		/* [11] = */ 99,
		/* [12] = */ 116,
		/* [13] = */ 101,
		/* [14] = */ 114,
		/* [15] = */ 80,
		/* [16] = */ 108,
		/* [17] = */ 97,
		/* [18] = */ 121,
		/* [19] = */ 0
	};
	
  int iVar1;
  
  iVar1 = movie_projecterGetIndex__Fv();
  if (iVar1 < 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("There Is no PlayFilm");
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    if (now_state == MOVIE_PROJECTER_STATE_NONE) {
      now_state = MOVIE_PROJECTER_STATE_PRELOAD;
      iVar1 = 1;
    }
  }
  return iVar1;
}

int movie_projecterWork() {
	int ret;
	int iIndex;
	
  int iVar1;
  int iVar2;
  
  if (now_state == MOVIE_PROJECTER_STATE_PRELOAD) {
    iVar2 = movie_projecterGetIndex__Fv();
    iVar1 = GetPALMode__Fv();
    if (iVar1 == 0) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,2);
      iVar1 = SetFilmNo.field0_0x0.m_aData[iVar2];
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,2);
      iVar1 = SetFilmNo.field0_0x0.m_aData[iVar2] + 1;
    }
    PreLoad__10CMovieRoomiPA3_Cf(&movie_room,iVar1,(float (*) [4])ScreenPosition[iVar2]);
                    /* end of inlined section */
    iVar2 = PlayFilm__10CMovieRoom(&movie_room);
    if (iVar2 == 0) {
      return 1;
    }
    now_state = MOVIE_PROJECTER_STATE_PLAY;
  }
  else if (now_state != MOVIE_PROJECTER_STATE_PLAY) {
    return 0;
  }
  iVar2 = Work__10CMovieRoom(&movie_room);
  if (iVar2 != 0) {
    Release__10CMovieRoom(&movie_room);
    now_state = MOVIE_PROJECTER_STATE_NONE;
  }
  return 1;
}

void movie_projecterDraw() {
  if (now_state == MOVIE_PROJECTER_STATE_PLAY) {
    Draw__10CMovieRoom(&movie_room);
  }
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_780);
  return (int *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

static void global constructors keyed to movie_projecterInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
