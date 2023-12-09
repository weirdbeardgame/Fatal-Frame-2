// STATUS: NOT STARTED

#include "map_bgm.h"

struct _MAP_BGM_DAT {
	int str_file;
};

typedef _MAP_BGM_DAT MAP_BGM_DAT;

struct fixed_array_base<int,240,int[240]> {
protected:
	int m_aData[240];
	
public:
	fixed_array_base<int,240,int[240]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,240> : fixed_array_base<int,240,int[240]> {
};

struct _MAP_BGM_SAVE {
	fixed_array<int,240> aMapWrkBGMTbl;
	int disable_cnt;
};

typedef _MAP_BGM_SAVE MAP_BGM_SAVE;

static MAP_BGM_DAT map_bgm_tbl[240] = {
	/* [0] = */ {
		/* .str_file = */ 2258
	},
	/* [1] = */ {
		/* .str_file = */ 2252
	},
	/* [2] = */ {
		/* .str_file = */ 2256
	},
	/* [3] = */ {
		/* .str_file = */ 2256
	},
	/* [4] = */ {
		/* .str_file = */ 2256
	},
	/* [5] = */ {
		/* .str_file = */ 2256
	},
	/* [6] = */ {
		/* .str_file = */ 2256
	},
	/* [7] = */ {
		/* .str_file = */ 2256
	},
	/* [8] = */ {
		/* .str_file = */ 2256
	},
	/* [9] = */ {
		/* .str_file = */ 2256
	},
	/* [10] = */ {
		/* .str_file = */ 2256
	},
	/* [11] = */ {
		/* .str_file = */ 2256
	},
	/* [12] = */ {
		/* .str_file = */ 2256
	},
	/* [13] = */ {
		/* .str_file = */ 2256
	},
	/* [14] = */ {
		/* .str_file = */ 2256
	},
	/* [15] = */ {
		/* .str_file = */ 2288
	},
	/* [16] = */ {
		/* .str_file = */ 2288
	},
	/* [17] = */ {
		/* .str_file = */ 2288
	},
	/* [18] = */ {
		/* .str_file = */ 2288
	},
	/* [19] = */ {
		/* .str_file = */ 2042
	},
	/* [20] = */ {
		/* .str_file = */ 2264
	},
	/* [21] = */ {
		/* .str_file = */ 2264
	},
	/* [22] = */ {
		/* .str_file = */ 2264
	},
	/* [23] = */ {
		/* .str_file = */ 2264
	},
	/* [24] = */ {
		/* .str_file = */ 2112
	},
	/* [25] = */ {
		/* .str_file = */ 2252
	},
	/* [26] = */ {
		/* .str_file = */ 2252
	},
	/* [27] = */ {
		/* .str_file = */ 2252
	},
	/* [28] = */ {
		/* .str_file = */ 2254
	},
	/* [29] = */ {
		/* .str_file = */ 2256
	},
	/* [30] = */ {
		/* .str_file = */ 2256
	},
	/* [31] = */ {
		/* .str_file = */ 2256
	},
	/* [32] = */ {
		/* .str_file = */ 2254
	},
	/* [33] = */ {
		/* .str_file = */ 2254
	},
	/* [34] = */ {
		/* .str_file = */ 2254
	},
	/* [35] = */ {
		/* .str_file = */ 2256
	},
	/* [36] = */ {
		/* .str_file = */ 2256
	},
	/* [37] = */ {
		/* .str_file = */ 2256
	},
	/* [38] = */ {
		/* .str_file = */ 2256
	},
	/* [39] = */ {
		/* .str_file = */ 2112
	},
	/* [40] = */ {
		/* .str_file = */ 2112
	},
	/* [41] = */ {
		/* .str_file = */ 2256
	},
	/* [42] = */ {
		/* .str_file = */ 2256
	},
	/* [43] = */ {
		/* .str_file = */ 2256
	},
	/* [44] = */ {
		/* .str_file = */ 2256
	},
	/* [45] = */ {
		/* .str_file = */ 2338
	},
	/* [46] = */ {
		/* .str_file = */ 2260
	},
	/* [47] = */ {
		/* .str_file = */ 2260
	},
	/* [48] = */ {
		/* .str_file = */ 2260
	},
	/* [49] = */ {
		/* .str_file = */ 2278
	},
	/* [50] = */ {
		/* .str_file = */ 2262
	},
	/* [51] = */ {
		/* .str_file = */ 2262
	},
	/* [52] = */ {
		/* .str_file = */ 2262
	},
	/* [53] = */ {
		/* .str_file = */ 2262
	},
	/* [54] = */ {
		/* .str_file = */ 2272
	},
	/* [55] = */ {
		/* .str_file = */ 2272
	},
	/* [56] = */ {
		/* .str_file = */ 2272
	},
	/* [57] = */ {
		/* .str_file = */ 2513
	},
	/* [58] = */ {
		/* .str_file = */ 2252
	},
	/* [59] = */ {
		/* .str_file = */ 2278
	},
	/* [60] = */ {
		/* .str_file = */ 2278
	},
	/* [61] = */ {
		/* .str_file = */ 2262
	},
	/* [62] = */ {
		/* .str_file = */ 2264
	},
	/* [63] = */ {
		/* .str_file = */ 2264
	},
	/* [64] = */ {
		/* .str_file = */ 2264
	},
	/* [65] = */ {
		/* .str_file = */ 2264
	},
	/* [66] = */ {
		/* .str_file = */ 2112
	},
	/* [67] = */ {
		/* .str_file = */ 2266
	},
	/* [68] = */ {
		/* .str_file = */ 2266
	},
	/* [69] = */ {
		/* .str_file = */ 2266
	},
	/* [70] = */ {
		/* .str_file = */ 2266
	},
	/* [71] = */ {
		/* .str_file = */ 2266
	},
	/* [72] = */ {
		/* .str_file = */ 2266
	},
	/* [73] = */ {
		/* .str_file = */ 2266
	},
	/* [74] = */ {
		/* .str_file = */ 2250
	},
	/* [75] = */ {
		/* .str_file = */ 2044
	},
	/* [76] = */ {
		/* .str_file = */ 2250
	},
	/* [77] = */ {
		/* .str_file = */ 2375
	},
	/* [78] = */ {
		/* .str_file = */ 2266
	},
	/* [79] = */ {
		/* .str_file = */ 2266
	},
	/* [80] = */ {
		/* .str_file = */ 2266
	},
	/* [81] = */ {
		/* .str_file = */ 2266
	},
	/* [82] = */ {
		/* .str_file = */ 2266
	},
	/* [83] = */ {
		/* .str_file = */ -1
	},
	/* [84] = */ {
		/* .str_file = */ 2266
	},
	/* [85] = */ {
		/* .str_file = */ 2266
	},
	/* [86] = */ {
		/* .str_file = */ 2114
	},
	/* [87] = */ {
		/* .str_file = */ 2044
	},
	/* [88] = */ {
		/* .str_file = */ 2044
	},
	/* [89] = */ {
		/* .str_file = */ 2044
	},
	/* [90] = */ {
		/* .str_file = */ 2044
	},
	/* [91] = */ {
		/* .str_file = */ 2044
	},
	/* [92] = */ {
		/* .str_file = */ -1
	},
	/* [93] = */ {
		/* .str_file = */ 2114
	},
	/* [94] = */ {
		/* .str_file = */ 2264
	},
	/* [95] = */ {
		/* .str_file = */ 2264
	},
	/* [96] = */ {
		/* .str_file = */ 2264
	},
	/* [97] = */ {
		/* .str_file = */ 2274
	},
	/* [98] = */ {
		/* .str_file = */ 2375
	},
	/* [99] = */ {
		/* .str_file = */ 2375
	},
	/* [100] = */ {
		/* .str_file = */ 2375
	},
	/* [101] = */ {
		/* .str_file = */ 2266
	},
	/* [102] = */ {
		/* .str_file = */ 2114
	},
	/* [103] = */ {
		/* .str_file = */ 2262
	},
	/* [104] = */ {
		/* .str_file = */ 2272
	},
	/* [105] = */ {
		/* .str_file = */ 2272
	},
	/* [106] = */ {
		/* .str_file = */ 2112
	},
	/* [107] = */ {
		/* .str_file = */ 2112
	},
	/* [108] = */ {
		/* .str_file = */ 2112
	},
	/* [109] = */ {
		/* .str_file = */ -1
	},
	/* [110] = */ {
		/* .str_file = */ 2266
	},
	/* [111] = */ {
		/* .str_file = */ 2262
	},
	/* [112] = */ {
		/* .str_file = */ 2262
	},
	/* [113] = */ {
		/* .str_file = */ 2272
	},
	/* [114] = */ {
		/* .str_file = */ 2272
	},
	/* [115] = */ {
		/* .str_file = */ 2264
	},
	/* [116] = */ {
		/* .str_file = */ 2274
	},
	/* [117] = */ {
		/* .str_file = */ 2274
	},
	/* [118] = */ {
		/* .str_file = */ 2274
	},
	/* [119] = */ {
		/* .str_file = */ 2260
	},
	/* [120] = */ {
		/* .str_file = */ 2260
	},
	/* [121] = */ {
		/* .str_file = */ -1
	},
	/* [122] = */ {
		/* .str_file = */ 2260
	},
	/* [123] = */ {
		/* .str_file = */ 2250
	},
	/* [124] = */ {
		/* .str_file = */ 2274
	},
	/* [125] = */ {
		/* .str_file = */ 2272
	},
	/* [126] = */ {
		/* .str_file = */ 2272
	},
	/* [127] = */ {
		/* .str_file = */ 2272
	},
	/* [128] = */ {
		/* .str_file = */ 2272
	},
	/* [129] = */ {
		/* .str_file = */ 2272
	},
	/* [130] = */ {
		/* .str_file = */ 2272
	},
	/* [131] = */ {
		/* .str_file = */ 2272
	},
	/* [132] = */ {
		/* .str_file = */ 2112
	},
	/* [133] = */ {
		/* .str_file = */ 2274
	},
	/* [134] = */ {
		/* .str_file = */ 2274
	},
	/* [135] = */ {
		/* .str_file = */ 2274
	},
	/* [136] = */ {
		/* .str_file = */ 2252
	},
	/* [137] = */ {
		/* .str_file = */ 2274
	},
	/* [138] = */ {
		/* .str_file = */ 2274
	},
	/* [139] = */ {
		/* .str_file = */ 2252
	},
	/* [140] = */ {
		/* .str_file = */ 2112
	},
	/* [141] = */ {
		/* .str_file = */ 2274
	},
	/* [142] = */ {
		/* .str_file = */ 2274
	},
	/* [143] = */ {
		/* .str_file = */ 2260
	},
	/* [144] = */ {
		/* .str_file = */ 2260
	},
	/* [145] = */ {
		/* .str_file = */ 2260
	},
	/* [146] = */ {
		/* .str_file = */ -1
	},
	/* [147] = */ {
		/* .str_file = */ 2266
	},
	/* [148] = */ {
		/* .str_file = */ 2256
	},
	/* [149] = */ {
		/* .str_file = */ 2274
	},
	/* [150] = */ {
		/* .str_file = */ 2274
	},
	/* [151] = */ {
		/* .str_file = */ 2274
	},
	/* [152] = */ {
		/* .str_file = */ 2274
	},
	/* [153] = */ {
		/* .str_file = */ 2274
	},
	/* [154] = */ {
		/* .str_file = */ 2274
	},
	/* [155] = */ {
		/* .str_file = */ 2260
	},
	/* [156] = */ {
		/* .str_file = */ 2260
	},
	/* [157] = */ {
		/* .str_file = */ 2278
	},
	/* [158] = */ {
		/* .str_file = */ 2278
	},
	/* [159] = */ {
		/* .str_file = */ 2260
	},
	/* [160] = */ {
		/* .str_file = */ 2278
	},
	/* [161] = */ {
		/* .str_file = */ -1
	},
	/* [162] = */ {
		/* .str_file = */ 2266
	},
	/* [163] = */ {
		/* .str_file = */ 2266
	},
	/* [164] = */ {
		/* .str_file = */ 2266
	},
	/* [165] = */ {
		/* .str_file = */ 2266
	},
	/* [166] = */ {
		/* .str_file = */ 2266
	},
	/* [167] = */ {
		/* .str_file = */ 2260
	},
	/* [168] = */ {
		/* .str_file = */ 2260
	},
	/* [169] = */ {
		/* .str_file = */ -1
	},
	/* [170] = */ {
		/* .str_file = */ 2260
	},
	/* [171] = */ {
		/* .str_file = */ 2272
	},
	/* [172] = */ {
		/* .str_file = */ 2272
	},
	/* [173] = */ {
		/* .str_file = */ 2272
	},
	/* [174] = */ {
		/* .str_file = */ 2272
	},
	/* [175] = */ {
		/* .str_file = */ 2272
	},
	/* [176] = */ {
		/* .str_file = */ 2260
	},
	/* [177] = */ {
		/* .str_file = */ 2272
	},
	/* [178] = */ {
		/* .str_file = */ 2112
	},
	/* [179] = */ {
		/* .str_file = */ 2274
	},
	/* [180] = */ {
		/* .str_file = */ 2274
	},
	/* [181] = */ {
		/* .str_file = */ 2274
	},
	/* [182] = */ {
		/* .str_file = */ 2252
	},
	/* [183] = */ {
		/* .str_file = */ 2274
	},
	/* [184] = */ {
		/* .str_file = */ 2274
	},
	/* [185] = */ {
		/* .str_file = */ 2252
	},
	/* [186] = */ {
		/* .str_file = */ 2272
	},
	/* [187] = */ {
		/* .str_file = */ 2274
	},
	/* [188] = */ {
		/* .str_file = */ 2260
	},
	/* [189] = */ {
		/* .str_file = */ 2260
	},
	/* [190] = */ {
		/* .str_file = */ 2260
	},
	/* [191] = */ {
		/* .str_file = */ -1
	},
	/* [192] = */ {
		/* .str_file = */ 2266
	},
	/* [193] = */ {
		/* .str_file = */ 2274
	},
	/* [194] = */ {
		/* .str_file = */ 2274
	},
	/* [195] = */ {
		/* .str_file = */ 2274
	},
	/* [196] = */ {
		/* .str_file = */ 2274
	},
	/* [197] = */ {
		/* .str_file = */ 2274
	},
	/* [198] = */ {
		/* .str_file = */ 2274
	},
	/* [199] = */ {
		/* .str_file = */ 2274
	},
	/* [200] = */ {
		/* .str_file = */ 2274
	},
	/* [201] = */ {
		/* .str_file = */ 2278
	},
	/* [202] = */ {
		/* .str_file = */ 2278
	},
	/* [203] = */ {
		/* .str_file = */ 2260
	},
	/* [204] = */ {
		/* .str_file = */ 2278
	},
	/* [205] = */ {
		/* .str_file = */ -1
	},
	/* [206] = */ {
		/* .str_file = */ 2266
	},
	/* [207] = */ {
		/* .str_file = */ 2266
	},
	/* [208] = */ {
		/* .str_file = */ 2266
	},
	/* [209] = */ {
		/* .str_file = */ 2266
	},
	/* [210] = */ {
		/* .str_file = */ 2266
	},
	/* [211] = */ {
		/* .str_file = */ 2272
	},
	/* [212] = */ {
		/* .str_file = */ 2272
	},
	/* [213] = */ {
		/* .str_file = */ 2272
	},
	/* [214] = */ {
		/* .str_file = */ 2272
	},
	/* [215] = */ {
		/* .str_file = */ 2272
	},
	/* [216] = */ {
		/* .str_file = */ 2272
	},
	/* [217] = */ {
		/* .str_file = */ -1
	},
	/* [218] = */ {
		/* .str_file = */ 2513
	},
	/* [219] = */ {
		/* .str_file = */ 2615
	},
	/* [220] = */ {
		/* .str_file = */ 2513
	},
	/* [221] = */ {
		/* .str_file = */ 2513
	},
	/* [222] = */ {
		/* .str_file = */ 2615
	},
	/* [223] = */ {
		/* .str_file = */ 2513
	},
	/* [224] = */ {
		/* .str_file = */ 2513
	},
	/* [225] = */ {
		/* .str_file = */ 2615
	},
	/* [226] = */ {
		/* .str_file = */ 2615
	},
	/* [227] = */ {
		/* .str_file = */ 2615
	},
	/* [228] = */ {
		/* .str_file = */ 2615
	},
	/* [229] = */ {
		/* .str_file = */ 2615
	},
	/* [230] = */ {
		/* .str_file = */ 2615
	},
	/* [231] = */ {
		/* .str_file = */ 2615
	},
	/* [232] = */ {
		/* .str_file = */ 2264
	},
	/* [233] = */ {
		/* .str_file = */ 2617
	},
	/* [234] = */ {
		/* .str_file = */ 2619
	},
	/* [235] = */ {
		/* .str_file = */ 2619
	},
	/* [236] = */ {
		/* .str_file = */ 2619
	},
	/* [237] = */ {
		/* .str_file = */ 2044
	},
	/* [238] = */ {
		/* .str_file = */ 2046
	},
	/* [239] = */ {
		/* .str_file = */ 2264
	}
};

static int bgm_act_flg = 0;
static MAP_BGM_SAVE map_bgmSave;
static int bgm_room_id_save;
static int bgm_play_id;
static int now_str_file;
static int bgm_now_sector;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3bb050;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (int *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f19f0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3f19f8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0x3bb098,_max);
  }
  return (uint **)0x0;
}

void map_bgmInit() {
	int i;
	
  _MAP_BGM_DAT *p_Var1;
  int *piVar2;
  int iVar3;
  
  bgm_play_id = -1;
  iVar3 = 0;
  bgm_act_flg = 1;
  bgm_room_id_save = -1;
  now_str_file = -1;
  map_bgmSave.disable_cnt = 0;
  bgm_now_sector = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,0xf0);
    p_Var1 = map_bgm_tbl + iVar3;
    piVar2 = map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData + iVar3;
                    /* end of inlined section */
    iVar3 = iVar3 + 1;
    *piVar2 = p_Var1->str_file;
  } while (iVar3 < 0xf0);
  return;
}

void map_bgmChangeTbl(int iRoomID, int iStrFileNo) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (iStrFileNo < 0x7e9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iRoomID,0xf0);
    map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData[iRoomID] = -1;
  }
  else {
                    /* end of inlined section */
    if (iStrFileNo < 0xc0e) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iRoomID,0xf0);
      map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData[iRoomID] = iStrFileNo;
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iRoomID,0xf0);
      map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData[iRoomID] = map_bgm_tbl[iRoomID].str_file;
    }
  }
  return;
}

static int map_bgmPlayIn(int iNowRoomId, int iInTime) {
  int iVar1;
  int *piVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0);
  piVar2 = map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData + iNowRoomId;
  if ((*piVar2 < 0x7e9) ||
     (_fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0), 0xc0d < *piVar2)) {
                    /* end of inlined section */
    iVar1 = -1;
  }
  else {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0);
    iVar1 = StreamAutoPlayNonReset
                      (*piVar2,*piVar2 + -1,0x15,0,1,0x3200,iInTime,0x14,(_SND_3D_SET *)0x0,
                       bgm_now_sector);
  }
  return iVar1;
}

static int map_bgmPlaySub() {
	int now_room_id;
	
  uint iNowRoomId;
  int iVar1;
  int *piVar2;
  
  iNowRoomId = GetPlyrRoomID__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (iNowRoomId < 0xf0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0);
                    /* end of inlined section */
    iVar1 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    piVar2 = map_bgmSave.aMapWrkBGMTbl.field0_0x0.m_aData + iNowRoomId;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (now_str_file != *piVar2) {
                    /* end of inlined section */
      StreamAutoFadeOut(bgm_play_id,0x3c);
      bgm_now_sector = 0;
      bgm_play_id = map_bgmPlayIn__Fii(iNowRoomId,0x14);
      bgm_room_id_save = iNowRoomId;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iNowRoomId,0xf0);
      now_str_file = *piVar2;
                    /* end of inlined section */
      iVar1 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    }
  }
  else {
    printf("ROOM_ID_OVER[%d] : map_bgm.c\n");
    iVar1 = 1;
  }
                    /* end of inlined section */
  return iVar1;
}

void map_bgmMain() {
  if ((bgm_act_flg != 0) && (map_bgmSave.disable_cnt == 0)) {
    map_bgmPlaySub__Fv();
  }
  return;
}

void map_bgmFadeOut(int fade_time, int target_vol) {
  if (bgm_act_flg != 0) {
    map_bgmSave.disable_cnt = map_bgmSave.disable_cnt + 1;
    if (target_vol == 0) {
      if (bgm_play_id != -1) {
        bgm_now_sector = StreamAutoGetNowSector(bgm_play_id);
        StreamAutoFadeOut(bgm_play_id,fade_time);
        bgm_play_id = -1;
      }
    }
    else {
      StreamAutoFade(bgm_play_id,target_vol,fade_time);
    }
  }
  return;
}

void map_bgmRelease(int fade_out_time) {
  StreamAutoFadeOut(bgm_play_id,fade_out_time);
  bgm_act_flg = 0;
  return;
}

void map_bgmFadeIn(int fade_time) {
  int iVar1;
  
  if ((bgm_act_flg != 0) &&
     ((iVar1 = map_bgmSave.disable_cnt + -1, map_bgmSave.disable_cnt < 1 ||
      (map_bgmSave.disable_cnt = iVar1, iVar1 < 1)))) {
    if (bgm_play_id == -1) {
      iVar1 = map_bgmPlaySub__Fv();
      if ((iVar1 == 0) && ((uint)bgm_room_id_save < 0xf0)) {
        bgm_play_id = map_bgmPlayIn__Fii(bgm_room_id_save,fade_time);
      }
    }
    else {
      StreamAutoFade(bgm_play_id,0x3200,fade_time);
    }
  }
  return;
}

void map_bgmSetSave(MC_SAVE_DATA *data) {
  data->size = 0x3c4;
  data->addr = (uchar *)&map_bgmSave;
  return;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (int *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from map_bgm.c */
  return;
}

static void global constructors keyed to map_bgmInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
