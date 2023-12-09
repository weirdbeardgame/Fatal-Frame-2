// STATUS: NOT STARTED

#include "effect_oth.h"

typedef enum {
	CANDLE_FLAME_INIT = 0,
	CANDLE_FLAME_START1 = 1,
	CANDLE_FLAME_START2 = 2,
	CANDLE_FLAME_NORMAL = 3,
	CANDLE_FLAME_YURAMEKI = 4,
	CANDLE_FLAME_FUKKI = 5
} CANDLE_FLAME_FLOW;

typedef enum {
	CANDLE_LOAD_IDLE = 0,
	CANDLE_LOAD_WAIT = 1,
	CANDLE_LOAD_EXEC = 2,
	CANDLE_LOAD_CANCEL = 3
} MANY_CANDLE_LOAD_CTRL_STATUS;

typedef struct {
	float Offset[4];
	u_int *pLoadBuf;
	int Status;
	int LoadId;
	int PackNum;
	void *pEffRet[5];
} MANY_CANDLE_LOAD_CTRL;

typedef struct {
	char FileId[4];
	int DataNum;
	int Pad[2];
} MANY_CANDLE_POS_DATA_HEADER;

typedef enum {
	DOOR_SEAL_STATUS_IDLE = 0,
	DOOR_SEAL_STATUS_PRELOAD_WAIT = 1,
	DOOR_SEAL_STATUS_SOUL_IN = 2,
	DOOR_SEAL_STATUS_SOUL_KEEP = 3,
	DOOR_SEAL_STATUS_DEFORM_IN = 4,
	DOOR_SEAL_STATUS_DEFORM_KEEP = 5,
	DOOR_SEAL_STATUS_SOUL_OUT = 6,
	DOOR_SEAL_STATUS_DEFORM_OUT = 7
} DOOR_SEAL_DISAPPEAR_STATUS;

typedef struct {
	int Counter;
	int Status;
	float AlphaRate;
	EFFECT_CONT EffectCont;
	EFFECT_CONT EffectContBlur;
	float BasePos[4];
	float DeformSpeed;
	float DeformRate;
	float DeformAlphaRate;
	int StreamId;
} DOOR_SEAL_DISAPPEAR_CTRL;

struct fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> {
protected:
	EFF_LEAF m_aData[6];
	
public:
	fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFF_LEAF& operator[]();
	EFF_LEAF& operator[]();
	EFF_LEAF* data();
	EFF_LEAF* begin();
	EFF_LEAF* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFF_LEAF,6> : fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> {
};

struct fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]> {
protected:
	HEAT_HAZE m_aData[4];
	
public:
	fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,4> : fixed_array_base<HEAT_HAZE,4,HEAT_HAZE[4]> {
};

struct fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]> {
protected:
	HEAT_HAZE m_aData[1];
	
public:
	fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,1> : fixed_array_base<HEAT_HAZE,1,HEAT_HAZE[1]> {
};

struct fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]> {
protected:
	HEAT_HAZE m_aData[5];
	
public:
	fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HEAT_HAZE& operator[]();
	HEAT_HAZE& operator[]();
	HEAT_HAZE* data();
	HEAT_HAZE* begin();
	HEAT_HAZE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<HEAT_HAZE,5> : fixed_array_base<HEAT_HAZE,5,HEAT_HAZE[5]> {
};

struct fixed_array_base<int[4],480,int[480][4]> {
protected:
	int m_aData[480][4];
	
public:
	fixed_array_base<int[4],480,int[480][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	sceVu0IVECTOR* data();
	sceVu0IVECTOR* begin();
	sceVu0IVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],480> : fixed_array_base<int[4],480,int[480][4]> {
};

struct fixed_array_base<int,120,int[120]> {
protected:
	int m_aData[120];
	
public:
	fixed_array_base<int,120,int[120]>& operator=();
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

struct fixed_array<int,120> : fixed_array_base<int,120,int[120]> {
};

typedef struct {
	float Position[4];
	int Flow;
	float Rot;
	float fCounter;
	int ScaleCounter0;
	int ScaleCounter1;
	int AlphaCounter0;
	int AlphaCounter1;
	int ItemNo;
	int Type;
} ITEM_EFFECT_DATA;

struct fixed_array_base<int,16,int[16]> {
protected:
	int m_aData[16];
	
public:
	fixed_array_base<int,16,int[16]>& operator=();
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

struct fixed_array<int,16> : fixed_array_base<int,16,int[16]> {
};

struct fixed_array_base<int,64,int[64]> {
protected:
	int m_aData[64];
	
public:
	fixed_array_base<int,64,int[64]>& operator=();
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

struct fixed_array<int,64> : fixed_array_base<int,64,int[64]> {
};

typedef struct {
	float LightningDirection[4];
	float ThunderPosition[4];
	int LightningStatus;
	int LightningTime;
	int LightningFlg;
	int ThunderStatus;
	int ThunderTime;
} THUNDER_LIGHT_CTRL;

typedef struct {
	float Position[4];
	float Target[4];
	float Fov;
	float Roll;
} DOOR_SEAL_CAMERA_BACKUP;

HAZE_PARAMETER HazeParameter = {
	/* .AreaRadius = */ 8414,
	/* .MaxY = */ 10461,
	/* .MinY = */ 8614,
	/* .Frequency = */ 20,
	/* .SpeedXMax = */ 1100,
	/* .SpeedXMin = */ 920,
	/* .SpeedYMax = */ 1111,
	/* .SpeedYMin = */ 917,
	/* .SpeedZMax = */ 1046,
	/* .SpeedZMin = */ 956,
	/* .AllSpeedX_1 = */ 1000,
	/* .AllSpeedY_1 = */ 992,
	/* .AllSpeedZ_1 = */ 1141,
	/* .AllSpeedX_2 = */ 1000,
	/* .AllSpeedY_2 = */ 955,
	/* .AllSpeedZ_2 = */ 916,
	/* .AllSpeedX_3 = */ 1003,
	/* .AllSpeedY_3 = */ 960,
	/* .AllSpeedZ_3 = */ 1140,
	/* .AllSpeedTime_1 = */ 95,
	/* .AllSpeedTime_2 = */ 95,
	/* .AllSpeedTime_3 = */ 95,
	/* .Alpha = */ 20,
	/* .AlphaInTime = */ 124,
	/* .AlphaKeepTime = */ 576,
	/* .AlphaOutTime = */ 133,
	/* .StartScale = */ 510,
	/* .EndScale = */ 556,
	/* .R = */ 48,
	/* .G = */ 48,
	/* .B = */ 48,
	/* .RotZMax = */ 36,
	/* .RotZMin = */ 30,
	/* .RotZTime = */ 239,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 1,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .OffsetX = */ 10000,
	/* .OffsetY = */ 10000,
	/* .OffsetZ = */ 10000
};

HAZE_PARAMETER KusabiHazeParameter = {
	/* .AreaRadius = */ 463,
	/* .MaxY = */ 10037,
	/* .MinY = */ 8998,
	/* .Frequency = */ 42,
	/* .SpeedXMax = */ 1254,
	/* .SpeedXMin = */ 757,
	/* .SpeedYMax = */ 1000,
	/* .SpeedYMin = */ 850,
	/* .SpeedZMax = */ 1050,
	/* .SpeedZMin = */ 950,
	/* .AllSpeedX_1 = */ 1000,
	/* .AllSpeedY_1 = */ 1000,
	/* .AllSpeedZ_1 = */ 1000,
	/* .AllSpeedX_2 = */ 1000,
	/* .AllSpeedY_2 = */ 1000,
	/* .AllSpeedZ_2 = */ 1000,
	/* .AllSpeedX_3 = */ 1000,
	/* .AllSpeedY_3 = */ 1000,
	/* .AllSpeedZ_3 = */ 1000,
	/* .AllSpeedTime_1 = */ 100,
	/* .AllSpeedTime_2 = */ 100,
	/* .AllSpeedTime_3 = */ 100,
	/* .Alpha = */ 103,
	/* .AlphaInTime = */ 9,
	/* .AlphaKeepTime = */ 0,
	/* .AlphaOutTime = */ 111,
	/* .StartScale = */ 239,
	/* .EndScale = */ 480,
	/* .R = */ 47,
	/* .G = */ 44,
	/* .B = */ 43,
	/* .RotZMax = */ 36,
	/* .RotZMin = */ 30,
	/* .RotZTime = */ 239,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .OffsetX = */ 10000,
	/* .OffsetY = */ 10226,
	/* .OffsetZ = */ 10160
};

HAZE_PARAMETER SaeHazeParameter = {
	/* .AreaRadius = */ 463,
	/* .MaxY = */ 9946,
	/* .MinY = */ 9154,
	/* .Frequency = */ 42,
	/* .SpeedXMax = */ 1254,
	/* .SpeedXMin = */ 757,
	/* .SpeedYMax = */ 1000,
	/* .SpeedYMin = */ 850,
	/* .SpeedZMax = */ 1050,
	/* .SpeedZMin = */ 950,
	/* .AllSpeedX_1 = */ 1000,
	/* .AllSpeedY_1 = */ 1000,
	/* .AllSpeedZ_1 = */ 1000,
	/* .AllSpeedX_2 = */ 1000,
	/* .AllSpeedY_2 = */ 1000,
	/* .AllSpeedZ_2 = */ 1000,
	/* .AllSpeedX_3 = */ 1000,
	/* .AllSpeedY_3 = */ 1000,
	/* .AllSpeedZ_3 = */ 1000,
	/* .AllSpeedTime_1 = */ 100,
	/* .AllSpeedTime_2 = */ 100,
	/* .AllSpeedTime_3 = */ 100,
	/* .Alpha = */ 103,
	/* .AlphaInTime = */ 9,
	/* .AlphaKeepTime = */ 0,
	/* .AlphaOutTime = */ 111,
	/* .StartScale = */ 239,
	/* .EndScale = */ 480,
	/* .R = */ 10,
	/* .G = */ 255,
	/* .B = */ 255,
	/* .RotZMax = */ 36,
	/* .RotZMin = */ 30,
	/* .RotZTime = */ 239,
	/* .AlphaBlendA = */ 1,
	/* .AlphaBlendB = */ 0,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .OffsetX = */ 10000,
	/* .OffsetY = */ 10226,
	/* .OffsetZ = */ 10160
};

int stop_lf = 0;
static int haze_stop = 0;

DOOR_SEAL_DISAPPEAR_CTRL DoorSealDisappearCtrl = {
	/* .Counter = */ 0,
	/* .Status = */ 0,
	/* .AlphaRate = */ 0.f,
	/* .EffectCont = */ {
		/* .dat = */ {
			/* .ul128 = */ VECTOR(0.f, 0.f, 0.f, 0.f),
			/* .ul64 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0
			},
			/* .ui32 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .fl32 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .us16 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0
			},
			/* .uc8 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0
			},
			/* .fv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .iv = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			}
		},
		/* .Pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pnt = */ {
			/* [0] = */ NULL,
			/* [1] = */ NULL,
			/* [2] = */ NULL,
			/* [3] = */ NULL,
			/* [4] = */ NULL,
			/* [5] = */ NULL
		},
		/* .fw = */ {
			/* base class 0 = */ {
				/* .m_aData = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f
				}
			}
		},
		/* .z = */ 0,
		/* .flow = */ 0,
		/* .cnt = */ 0,
		/* .in = */ 0,
		/* .keep = */ 0,
		/* .out = */ 0,
		/* .max = */ 0,
		/* .r = */ 0,
		/* .g = */ 0,
		/* .b = */ 0,
		/* .a = */ 0
	},
	/* .EffectContBlur = */ {
		/* .dat = */ {
			/* .ul128 = */ VECTOR(0.f, 0.f, 0.f, 0.f),
			/* .ul64 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0
			},
			/* .ui32 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			},
			/* .fl32 = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .us16 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0
			},
			/* .uc8 = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0
			},
			/* .fv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .iv = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0
			}
		},
		/* .Pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pnt = */ {
			/* [0] = */ NULL,
			/* [1] = */ NULL,
			/* [2] = */ NULL,
			/* [3] = */ NULL,
			/* [4] = */ NULL,
			/* [5] = */ NULL
		},
		/* .fw = */ {
			/* base class 0 = */ {
				/* .m_aData = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f
				}
			}
		},
		/* .z = */ 0,
		/* .flow = */ 0,
		/* .cnt = */ 0,
		/* .in = */ 0,
		/* .keep = */ 0,
		/* .out = */ 0,
		/* .max = */ 0,
		/* .r = */ 0,
		/* .g = */ 0,
		/* .b = */ 0,
		/* .a = */ 0
	},
	/* .BasePos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .DeformSpeed = */ 0.f,
	/* .DeformRate = */ 0.f,
	/* .DeformAlphaRate = */ 0.f,
	/* .StreamId = */ 0
};

static float CandlePolyDat[4][4] = {
	/* [0] = */ {
		/* [0] = */ 0.965643f,
		/* [1] = */ -0.136467f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* [1] = */ {
		/* [0] = */ 0.965643f,
		/* [1] = */ 1.93681788f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* [2] = */ {
		/* [0] = */ -0.965643f,
		/* [1] = */ -0.136467f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	},
	/* [3] = */ {
		/* [0] = */ -0.965643f,
		/* [1] = */ 1.93681788f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	}
};

float CandleFlameScaleData[150][2] = {
	/* [0] = */ {
		/* [0] = */ 0.999935f,
		/* [1] = */ 1.0001359f
	},
	/* [1] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.00034499f
	},
	/* [2] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.00337696f
	},
	/* [3] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.00915098f
	},
	/* [4] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.01719499f
	},
	/* [5] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.02704096f
	},
	/* [6] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.03821599f
	},
	/* [7] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.05025089f
	},
	/* [8] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.05025089f
	},
	/* [9] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.07501698f
	},
	/* [10] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.08680797f
	},
	/* [11] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.0975759f
	},
	/* [12] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.10685194f
	},
	/* [13] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.11416495f
	},
	/* [14] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.11904395f
	},
	/* [15] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.12101889f
	},
	/* [16] = */ {
		/* [0] = */ 1.00000298f,
		/* [1] = */ 1.11958098f
	},
	/* [17] = */ {
		/* [0] = */ 1.00022793f,
		/* [1] = */ 1.11181498f
	},
	/* [18] = */ {
		/* [0] = */ 1.00072896f,
		/* [1] = */ 1.09727299f
	},
	/* [19] = */ {
		/* [0] = */ 1.00139499f,
		/* [1] = */ 1.07756698f
	},
	/* [20] = */ {
		/* [0] = */ 1.00211692f,
		/* [1] = */ 1.05431294f
	},
	/* [21] = */ {
		/* [0] = */ 1.00278294f,
		/* [1] = */ 1.02912498f
	},
	/* [22] = */ {
		/* [0] = */ 1.0032829f,
		/* [1] = */ 1.00361693f
	},
	/* [23] = */ {
		/* [0] = */ 1.0035069f,
		/* [1] = */ 0.979404f
	},
	/* [24] = */ {
		/* [0] = */ 1.00334394f,
		/* [1] = */ 0.958099961f
	},
	/* [25] = */ {
		/* [0] = */ 1.002684f,
		/* [1] = */ 0.941319942f
	},
	/* [26] = */ {
		/* [0] = */ 1.00141597f,
		/* [1] = */ 0.93067795f
	},
	/* [27] = */ {
		/* [0] = */ 0.999438941f,
		/* [1] = */ 0.927556f
	},
	/* [28] = */ {
		/* [0] = */ 0.996881962f,
		/* [1] = */ 0.927985966f
	},
	/* [29] = */ {
		/* [0] = */ 0.993871f,
		/* [1] = */ 0.929917f
	},
	/* [30] = */ {
		/* [0] = */ 0.990464f,
		/* [1] = */ 0.933231f
	},
	/* [31] = */ {
		/* [0] = */ 0.986722946f,
		/* [1] = */ 0.937809944f
	},
	/* [32] = */ {
		/* [0] = */ 0.982706964f,
		/* [1] = */ 0.943536f
	},
	/* [33] = */ {
		/* [0] = */ 0.978476f,
		/* [1] = */ 0.950292945f
	},
	/* [34] = */ {
		/* [0] = */ 0.97409f,
		/* [1] = */ 0.957962f
	},
	/* [35] = */ {
		/* [0] = */ 0.969607949f,
		/* [1] = */ 0.966425955f
	},
	/* [36] = */ {
		/* [0] = */ 0.965091944f,
		/* [1] = */ 0.975567f
	},
	/* [37] = */ {
		/* [0] = */ 0.960601f,
		/* [1] = */ 0.985267f
	},
	/* [38] = */ {
		/* [0] = */ 0.956194f,
		/* [1] = */ 0.995408952f
	},
	/* [39] = */ {
		/* [0] = */ 0.951932967f,
		/* [1] = */ 1.00587595f
	},
	/* [40] = */ {
		/* [0] = */ 0.947877f,
		/* [1] = */ 1.01654899f
	},
	/* [41] = */ {
		/* [0] = */ 0.944084942f,
		/* [1] = */ 1.02731097f
	},
	/* [42] = */ {
		/* [0] = */ 0.940618f,
		/* [1] = */ 1.03804493f
	},
	/* [43] = */ {
		/* [0] = */ 0.937535942f,
		/* [1] = */ 1.04863191f
	},
	/* [44] = */ {
		/* [0] = */ 0.934899f,
		/* [1] = */ 1.05895495f
	},
	/* [45] = */ {
		/* [0] = */ 0.932767f,
		/* [1] = */ 1.06889689f
	},
	/* [46] = */ {
		/* [0] = */ 0.931198955f,
		/* [1] = */ 1.07833898f
	},
	/* [47] = */ {
		/* [0] = */ 0.930256963f,
		/* [1] = */ 1.087165f
	},
	/* [48] = */ {
		/* [0] = */ 0.929999f,
		/* [1] = */ 1.09525597f
	},
	/* [49] = */ {
		/* [0] = */ 0.930542f,
		/* [1] = */ 1.1033479f
	},
	/* [50] = */ {
		/* [0] = */ 0.931908965f,
		/* [1] = */ 1.11220896f
	},
	/* [51] = */ {
		/* [0] = */ 0.934017956f,
		/* [1] = */ 1.12171888f
	},
	/* [52] = */ {
		/* [0] = */ 0.936786f,
		/* [1] = */ 1.1317569f
	},
	/* [53] = */ {
		/* [0] = */ 0.940130949f,
		/* [1] = */ 1.14220691f
	},
	/* [54] = */ {
		/* [0] = */ 0.943968952f,
		/* [1] = */ 1.1529479f
	},
	/* [55] = */ {
		/* [0] = */ 0.948218942f,
		/* [1] = */ 1.16386199f
	},
	/* [56] = */ {
		/* [0] = */ 0.952797f,
		/* [1] = */ 1.17482793f
	},
	/* [57] = */ {
		/* [0] = */ 0.957621f,
		/* [1] = */ 1.18572891f
	},
	/* [58] = */ {
		/* [0] = */ 0.962608f,
		/* [1] = */ 1.19644392f
	},
	/* [59] = */ {
		/* [0] = */ 0.967676f,
		/* [1] = */ 1.20685494f
	},
	/* [60] = */ {
		/* [0] = */ 0.972741961f,
		/* [1] = */ 1.21684289f
	},
	/* [61] = */ {
		/* [0] = */ 0.977722943f,
		/* [1] = */ 1.22628796f
	},
	/* [62] = */ {
		/* [0] = */ 0.982538f,
		/* [1] = */ 1.2350719f
	},
	/* [63] = */ {
		/* [0] = */ 0.987102f,
		/* [1] = */ 1.24307489f
	},
	/* [64] = */ {
		/* [0] = */ 0.991333961f,
		/* [1] = */ 1.25017893f
	},
	/* [65] = */ {
		/* [0] = */ 0.99514997f,
		/* [1] = */ 1.2562629f
	},
	/* [66] = */ {
		/* [0] = */ 0.998469f,
		/* [1] = */ 1.26120889f
	},
	/* [67] = */ {
		/* [0] = */ 1.00120699f,
		/* [1] = */ 1.26489794f
	},
	/* [68] = */ {
		/* [0] = */ 1.00328195f,
		/* [1] = */ 1.26720989f
	},
	/* [69] = */ {
		/* [0] = */ 1.00461197f,
		/* [1] = */ 1.2680279f
	},
	/* [70] = */ {
		/* [0] = */ 1.00511289f,
		/* [1] = */ 1.26722991f
	},
	/* [71] = */ {
		/* [0] = */ 1.00470793f,
		/* [1] = */ 1.26466691f
	},
	/* [72] = */ {
		/* [0] = */ 1.00345993f,
		/* [1] = */ 1.25961697f
	},
	/* [73] = */ {
		/* [0] = */ 1.00146294f,
		/* [1] = */ 1.25201297f
	},
	/* [74] = */ {
		/* [0] = */ 0.998780966f,
		/* [1] = */ 1.24211395f
	},
	/* [75] = */ {
		/* [0] = */ 0.995478f,
		/* [1] = */ 1.23017693f
	},
	/* [76] = */ {
		/* [0] = */ 0.991615f,
		/* [1] = */ 1.21646094f
	},
	/* [77] = */ {
		/* [0] = */ 0.987257957f,
		/* [1] = */ 1.2012229f
	},
	/* [78] = */ {
		/* [0] = */ 0.98247f,
		/* [1] = */ 1.18472099f
	},
	/* [79] = */ {
		/* [0] = */ 0.977314f,
		/* [1] = */ 1.16721296f
	},
	/* [80] = */ {
		/* [0] = */ 0.971854f,
		/* [1] = */ 1.14895689f
	},
	/* [81] = */ {
		/* [0] = */ 0.966154f,
		/* [1] = */ 1.13021195f
	},
	/* [82] = */ {
		/* [0] = */ 0.960275948f,
		/* [1] = */ 1.11123395f
	},
	/* [83] = */ {
		/* [0] = */ 0.954283953f,
		/* [1] = */ 1.09228289f
	},
	/* [84] = */ {
		/* [0] = */ 0.948242962f,
		/* [1] = */ 1.07361495f
	},
	/* [85] = */ {
		/* [0] = */ 0.942213953f,
		/* [1] = */ 1.05548799f
	},
	/* [86] = */ {
		/* [0] = */ 0.936262965f,
		/* [1] = */ 1.03816199f
	},
	/* [87] = */ {
		/* [0] = */ 0.930452f,
		/* [1] = */ 1.02189291f
	},
	/* [88] = */ {
		/* [0] = */ 0.924845f,
		/* [1] = */ 1.00693893f
	},
	/* [89] = */ {
		/* [0] = */ 0.919505954f,
		/* [1] = */ 0.993558943f
	},
	/* [90] = */ {
		/* [0] = */ 0.914496958f,
		/* [1] = */ 0.982009947f
	},
	/* [91] = */ {
		/* [0] = */ 0.909882963f,
		/* [1] = */ 0.97255f
	},
	/* [92] = */ {
		/* [0] = */ 0.905726969f,
		/* [1] = */ 0.965437949f
	},
	/* [93] = */ {
		/* [0] = */ 0.902093f,
		/* [1] = */ 0.96093f
	},
	/* [94] = */ {
		/* [0] = */ 0.898975968f,
		/* [1] = */ 0.959467947f
	},
	/* [95] = */ {
		/* [0] = */ 0.896024f,
		/* [1] = */ 0.962094963f
	},
	/* [96] = */ {
		/* [0] = */ 0.893195f,
		/* [1] = */ 0.968533f
	},
	/* [97] = */ {
		/* [0] = */ 0.890504956f,
		/* [1] = */ 0.978301f
	},
	/* [98] = */ {
		/* [0] = */ 0.887976f,
		/* [1] = */ 0.990915954f
	},
	/* [99] = */ {
		/* [0] = */ 0.885624945f,
		/* [1] = */ 1.005898f
	},
	/* [100] = */ {
		/* [0] = */ 0.883470953f,
		/* [1] = */ 1.02276492f
	},
	/* [101] = */ {
		/* [0] = */ 0.881534f,
		/* [1] = */ 1.04103398f
	},
	/* [102] = */ {
		/* [0] = */ 0.879830956f,
		/* [1] = */ 1.06022596f
	},
	/* [103] = */ {
		/* [0] = */ 0.878383f,
		/* [1] = */ 1.07985699f
	},
	/* [104] = */ {
		/* [0] = */ 0.877207f,
		/* [1] = */ 1.09944594f
	},
	/* [105] = */ {
		/* [0] = */ 0.876324f,
		/* [1] = */ 1.11851299f
	},
	/* [106] = */ {
		/* [0] = */ 0.875750959f,
		/* [1] = */ 1.13657391f
	},
	/* [107] = */ {
		/* [0] = */ 0.875507951f,
		/* [1] = */ 1.15314889f
	},
	/* [108] = */ {
		/* [0] = */ 0.875613f,
		/* [1] = */ 1.16775596f
	},
	/* [109] = */ {
		/* [0] = */ 0.876086f,
		/* [1] = */ 1.17991292f
	},
	/* [110] = */ {
		/* [0] = */ 0.876944959f,
		/* [1] = */ 1.18913889f
	},
	/* [111] = */ {
		/* [0] = */ 0.878209949f,
		/* [1] = */ 1.19495189f
	},
	/* [112] = */ {
		/* [0] = */ 0.879896f,
		/* [1] = */ 1.19694793f
	},
	/* [113] = */ {
		/* [0] = */ 0.881947f,
		/* [1] = */ 1.19700992f
	},
	/* [114] = */ {
		/* [0] = */ 0.884313f,
		/* [1] = */ 1.196172f
	},
	/* [115] = */ {
		/* [0] = */ 0.886974f,
		/* [1] = */ 1.1944859f
	},
	/* [116] = */ {
		/* [0] = */ 0.889907956f,
		/* [1] = */ 1.19200289f
	},
	/* [117] = */ {
		/* [0] = */ 0.893093944f,
		/* [1] = */ 1.18877494f
	},
	/* [118] = */ {
		/* [0] = */ 0.896510959f,
		/* [1] = */ 1.18485296f
	},
	/* [119] = */ {
		/* [0] = */ 0.900136f,
		/* [1] = */ 1.18028796f
	},
	/* [120] = */ {
		/* [0] = */ 0.903948963f,
		/* [1] = */ 1.17513299f
	},
	/* [121] = */ {
		/* [0] = */ 0.907928f,
		/* [1] = */ 1.16943789f
	},
	/* [122] = */ {
		/* [0] = */ 0.912050962f,
		/* [1] = */ 1.16325593f
	},
	/* [123] = */ {
		/* [0] = */ 0.916299f,
		/* [1] = */ 1.15663695f
	},
	/* [124] = */ {
		/* [0] = */ 0.920648f,
		/* [1] = */ 1.14963293f
	},
	/* [125] = */ {
		/* [0] = */ 0.925076962f,
		/* [1] = */ 1.14229596f
	},
	/* [126] = */ {
		/* [0] = */ 0.929565966f,
		/* [1] = */ 1.13467789f
	},
	/* [127] = */ {
		/* [0] = */ 0.929565966f,
		/* [1] = */ 1.13467789f
	},
	/* [128] = */ {
		/* [0] = */ 0.938635945f,
		/* [1] = */ 1.11880195f
	},
	/* [129] = */ {
		/* [0] = */ 0.938635945f,
		/* [1] = */ 1.11880195f
	},
	/* [130] = */ {
		/* [0] = */ 0.947684944f,
		/* [1] = */ 1.10241699f
	},
	/* [131] = */ {
		/* [0] = */ 0.952147961f,
		/* [1] = */ 1.09416199f
	},
	/* [132] = */ {
		/* [0] = */ 0.956542969f,
		/* [1] = */ 1.085935f
	},
	/* [133] = */ {
		/* [0] = */ 0.960845947f,
		/* [1] = */ 1.07778692f
	},
	/* [134] = */ {
		/* [0] = */ 0.965037942f,
		/* [1] = */ 1.06977f
	},
	/* [135] = */ {
		/* [0] = */ 0.969095945f,
		/* [1] = */ 1.06193399f
	},
	/* [136] = */ {
		/* [0] = */ 0.972999f,
		/* [1] = */ 1.05433095f
	},
	/* [137] = */ {
		/* [0] = */ 0.976726f,
		/* [1] = */ 1.047014f
	},
	/* [138] = */ {
		/* [0] = */ 0.980255961f,
		/* [1] = */ 1.04003298f
	},
	/* [139] = */ {
		/* [0] = */ 0.983566f,
		/* [1] = */ 1.03344f
	},
	/* [140] = */ {
		/* [0] = */ 0.986636f,
		/* [1] = */ 1.02728689f
	},
	/* [141] = */ {
		/* [0] = */ 0.989443958f,
		/* [1] = */ 1.02162397f
	},
	/* [142] = */ {
		/* [0] = */ 0.991969f,
		/* [1] = */ 1.01650393f
	},
	/* [143] = */ {
		/* [0] = */ 0.994188964f,
		/* [1] = */ 1.01197898f
	},
	/* [144] = */ {
		/* [0] = */ 0.996081948f,
		/* [1] = */ 1.00809789f
	},
	/* [145] = */ {
		/* [0] = */ 0.997629f,
		/* [1] = */ 1.004915f
	},
	/* [146] = */ {
		/* [0] = */ 0.998806953f,
		/* [1] = */ 1.00248098f
	},
	/* [147] = */ {
		/* [0] = */ 0.999594f,
		/* [1] = */ 1.00084591f
	},
	/* [148] = */ {
		/* [0] = */ 0.999969959f,
		/* [1] = */ 1.00006294f
	},
	/* [149] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.00065494f
	}
};

float CandleFlameScaleData2[75][2] = {
	/* [0] = */ {
		/* [0] = */ 0.542633f,
		/* [1] = */ 0.650426f
	},
	/* [1] = */ {
		/* [0] = */ 0.480804f,
		/* [1] = */ 0.561570942f
	},
	/* [2] = */ {
		/* [0] = */ 0.341887981f,
		/* [1] = */ 0.363259971f
	},
	/* [3] = */ {
		/* [0] = */ 0.195741f,
		/* [1] = */ 0.157871991f
	},
	/* [4] = */ {
		/* [0] = */ 0.11222f,
		/* [1] = */ 0.047789f
	},
	/* [5] = */ {
		/* [0] = */ 0.142718986f,
		/* [1] = */ 0.284504f
	},
	/* [6] = */ {
		/* [0] = */ 0.251764f,
		/* [1] = */ 0.66534096f
	},
	/* [7] = */ {
		/* [0] = */ 0.381288975f,
		/* [1] = */ 0.690426f
	},
	/* [8] = */ {
		/* [0] = */ 0.473353f,
		/* [1] = */ 0.690992f
	},
	/* [9] = */ {
		/* [0] = */ 0.494225979f,
		/* [1] = */ 0.679896f
	},
	/* [10] = */ {
		/* [0] = */ 0.497095972f,
		/* [1] = */ 0.659154f
	},
	/* [11] = */ {
		/* [0] = */ 0.490185976f,
		/* [1] = */ 0.630784f
	},
	/* [12] = */ {
		/* [0] = */ 0.475844979f,
		/* [1] = */ 0.596805f
	},
	/* [13] = */ {
		/* [0] = */ 0.456424f,
		/* [1] = */ 0.559233963f
	},
	/* [14] = */ {
		/* [0] = */ 0.456424f,
		/* [1] = */ 0.559233963f
	},
	/* [15] = */ {
		/* [0] = */ 0.411746f,
		/* [1] = */ 0.48139f
	},
	/* [16] = */ {
		/* [0] = */ 0.391190976f,
		/* [1] = */ 0.445151985f
	},
	/* [17] = */ {
		/* [0] = */ 0.374959f,
		/* [1] = */ 0.413393974f
	},
	/* [18] = */ {
		/* [0] = */ 0.365401f,
		/* [1] = */ 0.388135f
	},
	/* [19] = */ {
		/* [0] = */ 0.364869f,
		/* [1] = */ 0.371391982f
	},
	/* [20] = */ {
		/* [0] = */ 0.374499f,
		/* [1] = */ 0.365183f
	},
	/* [21] = */ {
		/* [0] = */ 0.388183f,
		/* [1] = */ 0.371525973f
	},
	/* [22] = */ {
		/* [0] = */ 0.40447f,
		/* [1] = */ 0.39169398f
	},
	/* [23] = */ {
		/* [0] = */ 0.423082978f,
		/* [1] = */ 0.423645973f
	},
	/* [24] = */ {
		/* [0] = */ 0.443745f,
		/* [1] = */ 0.465727985f
	},
	/* [25] = */ {
		/* [0] = */ 0.46618f,
		/* [1] = */ 0.51641f
	},
	/* [26] = */ {
		/* [0] = */ 0.490107983f,
		/* [1] = */ 0.574158967f
	},
	/* [27] = */ {
		/* [0] = */ 0.515253961f,
		/* [1] = */ 0.637445f
	},
	/* [28] = */ {
		/* [0] = */ 0.541339f,
		/* [1] = */ 0.704733968f
	},
	/* [29] = */ {
		/* [0] = */ 0.568087f,
		/* [1] = */ 0.774497f
	},
	/* [30] = */ {
		/* [0] = */ 0.568087f,
		/* [1] = */ 0.774497f
	},
	/* [31] = */ {
		/* [0] = */ 0.622459948f,
		/* [1] = */ 0.915312946f
	},
	/* [32] = */ {
		/* [0] = */ 0.649530947f,
		/* [1] = */ 0.983302951f
	},
	/* [33] = */ {
		/* [0] = */ 0.676155f,
		/* [1] = */ 1.04763794f
	},
	/* [34] = */ {
		/* [0] = */ 0.702055f,
		/* [1] = */ 1.10678792f
	},
	/* [35] = */ {
		/* [0] = */ 0.72695297f,
		/* [1] = */ 1.15922093f
	},
	/* [36] = */ {
		/* [0] = */ 0.750571966f,
		/* [1] = */ 1.20340395f
	},
	/* [37] = */ {
		/* [0] = */ 0.772635f,
		/* [1] = */ 1.23780692f
	},
	/* [38] = */ {
		/* [0] = */ 0.792865f,
		/* [1] = */ 1.26086295f
	},
	/* [39] = */ {
		/* [0] = */ 0.810982943f,
		/* [1] = */ 1.27129197f
	},
	/* [40] = */ {
		/* [0] = */ 0.826714f,
		/* [1] = */ 1.27028191f
	},
	/* [41] = */ {
		/* [0] = */ 0.839777946f,
		/* [1] = */ 1.25953794f
	},
	/* [42] = */ {
		/* [0] = */ 0.851111948f,
		/* [1] = */ 1.24076498f
	},
	/* [43] = */ {
		/* [0] = */ 0.861933947f,
		/* [1] = */ 1.21566689f
	},
	/* [44] = */ {
		/* [0] = */ 0.872253954f,
		/* [1] = */ 1.18594992f
	},
	/* [45] = */ {
		/* [0] = */ 0.882082f,
		/* [1] = */ 1.15331793f
	},
	/* [46] = */ {
		/* [0] = */ 0.882082f,
		/* [1] = */ 1.15331793f
	},
	/* [47] = */ {
		/* [0] = */ 0.900307f,
		/* [1] = */ 1.0861299f
	},
	/* [48] = */ {
		/* [0] = */ 0.908723f,
		/* [1] = */ 1.0549829f
	},
	/* [49] = */ {
		/* [0] = */ 0.91669f,
		/* [1] = */ 1.02774096f
	},
	/* [50] = */ {
		/* [0] = */ 0.924218f,
		/* [1] = */ 1.00610793f
	},
	/* [51] = */ {
		/* [0] = */ 0.931315958f,
		/* [1] = */ 0.99179095f
	},
	/* [52] = */ {
		/* [0] = */ 0.937994957f,
		/* [1] = */ 0.984554946f
	},
	/* [53] = */ {
		/* [0] = */ 0.944265962f,
		/* [1] = */ 0.979068f
	},
	/* [54] = */ {
		/* [0] = */ 0.95014f,
		/* [1] = */ 0.9748f
	},
	/* [55] = */ {
		/* [0] = */ 0.955625f,
		/* [1] = */ 0.971658f
	},
	/* [56] = */ {
		/* [0] = */ 0.960733f,
		/* [1] = */ 0.969547f
	},
	/* [57] = */ {
		/* [0] = */ 0.965474963f,
		/* [1] = */ 0.968373954f
	},
	/* [58] = */ {
		/* [0] = */ 0.965474963f,
		/* [1] = */ 0.968373954f
	},
	/* [59] = */ {
		/* [0] = */ 0.973898947f,
		/* [1] = */ 0.968465f
	},
	/* [60] = */ {
		/* [0] = */ 0.973898947f,
		/* [1] = */ 0.968465f
	},
	/* [61] = */ {
		/* [0] = */ 0.980978966f,
		/* [1] = */ 0.971174955f
	},
	/* [62] = */ {
		/* [0] = */ 0.980978966f,
		/* [1] = */ 0.971174955f
	},
	/* [63] = */ {
		/* [0] = */ 0.986799955f,
		/* [1] = */ 0.97575295f
	},
	/* [64] = */ {
		/* [0] = */ 0.986799955f,
		/* [1] = */ 0.97575295f
	},
	/* [65] = */ {
		/* [0] = */ 0.991444f,
		/* [1] = */ 0.981444955f
	},
	/* [66] = */ {
		/* [0] = */ 0.991444f,
		/* [1] = */ 0.981444955f
	},
	/* [67] = */ {
		/* [0] = */ 0.994993f,
		/* [1] = */ 0.987499f
	},
	/* [68] = */ {
		/* [0] = */ 0.994993f,
		/* [1] = */ 0.987499f
	},
	/* [69] = */ {
		/* [0] = */ 0.99753195f,
		/* [1] = */ 0.993160963f
	},
	/* [70] = */ {
		/* [0] = */ 0.99753195f,
		/* [1] = */ 0.993160963f
	},
	/* [71] = */ {
		/* [0] = */ 0.999142945f,
		/* [1] = */ 0.997678f
	},
	/* [72] = */ {
		/* [0] = */ 0.999142945f,
		/* [1] = */ 0.997678f
	},
	/* [73] = */ {
		/* [0] = */ 0.999908f,
		/* [1] = */ 1.00029695f
	},
	/* [74] = */ {
		/* [0] = */ 1.f,
		/* [1] = */ 1.00066f
	}
};

static fixed_array<EFF_LEAF,6> eff_leaf;
static fixed_array<HEAT_HAZE,4> ene_particle;
static fixed_array<HEAT_HAZE,1> amu_particle;
static fixed_array<HEAT_HAZE,5> torch_particle;
unsigned char HEAT_HAZE type_info node[8];
unsigned char MANY_CANDLE_PARTICLE type_info node[8];
unsigned char int [3] type_info node[8];
unsigned char PARTICLE type_info node[8];
unsigned char EFF_LEAF type_info node[8];
unsigned char EFF_LEAF_ONE type_info node[8];
unsigned char HAZE_PARTICLE type_info node[8];
static int init_pond;
static int init_hhaze;
static int init_newitem;
static int init_torch;
static int init_smoke;
static void *amulet_fire_ret;
static int amulet_fire_flow;
static int amulet_fire_cnt;

MANY_CANDLE_LOAD_CTRL ManyCandleLoadCtrl = {
	/* .Offset = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pLoadBuf = */ NULL,
	/* .Status = */ 0,
	/* .LoadId = */ 0,
	/* .PackNum = */ 0,
	/* .pEffRet = */ {
		/* [0] = */ NULL,
		/* [1] = */ NULL,
		/* [2] = */ NULL,
		/* [3] = */ NULL,
		/* [4] = */ NULL
	}
};

SINGLE_LINK_LIST ItemEffectList = {
	/* .ElemSize = */ 0,
	/* .RegCount = */ 0,
	/* .pBeginCell = */ NULL,
	/* .pEndCell = */ NULL
};

THUNDER_LIGHT_CTRL ThunderLightCtrl = {
	/* .LightningDirection = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .ThunderPosition = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .LightningStatus = */ 0,
	/* .LightningTime = */ 0,
	/* .LightningFlg = */ 0,
	/* .ThunderStatus = */ 0,
	/* .ThunderTime = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a6b30;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13HAZE_PARTICLE(0x3efe30,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13HAZE_PARTICLE(0x3efe38,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf13HAZE_PARTICLE(0x3a6b78,_max);
  }
  return (uint **)0x0;
}

void InitEffectOth() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<HEAT_HAZE,5> *pfVar3;
  
  init_torch = 1;
  init_pond = 1;
  init_hhaze = 1;
  init_newitem = 1;
  pfVar3 = &torch_particle;
  iVar1 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,5);
    ((HEAT_HAZE *)pfVar3)->flag = 0;
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,5);
    ((HEAT_HAZE *)pfVar3)->cnt = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<HEAT_HAZE,5> *)((int)pfVar3 + 0x3e90);
    iVar1 = iVar2;
  } while (iVar2 < 5);
  init_smoke = 1;
  amulet_fire_cnt = -1;
  amulet_fire_flow = -1;
  haze_stop = 0;
  amulet_fire_ret = (void *)0x0;
  ItemEffectCtrlInit__Fv();
  EffectThunderLightInit__Fv();
  EffectManyCandleLoadInit__FP21MANY_CANDLE_LOAD_CTRL(&ManyCandleLoadCtrl);
  DoorSealDisappearInit__Fv();
  return;
}

void InitEffectOthEF() {
  EffectManyCandleLoadMain__FP21MANY_CANDLE_LOAD_CTRL(&ManyCandleLoadCtrl);
  DoorSealDisappearMain__FP24DOOR_SEAL_DISAPPEAR_CTRL(&DoorSealDisappearCtrl);
  return;
}

void* CallFire(void *pos, u_char r, u_char g, u_char b, float scale) {
	static float rate = 1.f;
	
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x16,2);
  return pvVar1;
}

void* CallFire2(void *pos, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x15,2);
  return pvVar1;
}

void* CallFire3(void *pos, int type, u_char r, u_char g, u_char b, float scl, u_char r2, u_char g2, u_char b2, float scl2) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x15,2);
  return pvVar1;
}

static void SubCandleFlame(EFFECT_CONT *ec) {
	static float RandVal = 0.f;
	float LocalWorld[4][4];
	float TmpMatrix[4][4];
	float LocalScreen[2][4][4];
	float ScaleMatrix[2][4][4];
	sceVu0IVECTOR ivec[2][4];
	float vpos[4];
	float FreaPos[4];
	float wpos[4][4];
	float ReqScale;
	float ScaleAnimeW[2];
	float ScaleAnimeH[2];
	int Alpha[2];
	int DispFlameNum;
	float rot_x;
	float rot_y;
	int i;
	int j;
	int ClipFlg;
	u_char mr;
	u_char mg;
	u_char mb;
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	int Flame1Count;
	u_int ScaleAnmFrame;
	int ScaleAnmType;
	u_long tex0[2];
	int TexNo;
	
  undefined8 *puVar1;
  bool bVar2;
  int (*paiVar3) [4];
  int (*paiVar4) [4];
  int (*paiVar5) [4];
  GRA3DCAMERA *pGVar6;
  float (*pafVar7) [4];
  int iVar8;
  float *pfVar9;
  int *piVar10;
  uint uVar11;
  int (*paiVar12) [4];
  ulong Tex0;
  float *pfVar13;
  float (*paafVar14) [4] [4];
  int iVar15;
  int (*pIvec) [4] [4];
  uint uVar16;
  float (*paafVar17) [4] [4];
  ulong *puVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float Scale;
  float LocalWorld [4] [4];
  float TmpMatrix [4] [4];
  float LocalScreen [2] [4] [4];
  float ScaleMatrix [2] [4] [4];
  int ivec [2] [4] [4];
  float vpos [4];
  float FreaPos [4];
  float wpos [4] [4];
  float ScaleAnimeW [2];
  float ScaleAnimeH [2];
  int Alpha [2];
  float rot_x;
  float rot_y;
  ulong tex0 [2];
  _DRAW_ENV_5 local_b0;
  int DispFlameNum;
  uchar mr;
  uchar mg;
  uchar mb;
  float *local_70;
  float *local_6c;
  
  DispFlameNum = 2;
  wpos[0]._0_8_ = DAT_003a6b90;
  wpos[0]._8_8_ = DAT_003a6b98;
  wpos[1]._0_8_ = DAT_003a6ba0;
  wpos[1]._8_8_ = DAT_003a6ba8;
  wpos[2]._0_8_ = DAT_003a6bb0;
  wpos[2]._8_8_ = DAT_003a6bb8;
  wpos[3]._0_8_ = DAT_003a6bc0;
  wpos[3]._8_8_ = DAT_003a6bc8;
  pGVar6 = gra3dGetCamera__Fv();
  pafVar7 = gra3dcamGetPosition__Fv();
  iVar8 = EffWrkMonochroModeGet__Fv();
  if (iVar8 == 0) {
    _mr = (uint)(ec->dat).uc8[2];
    _mg = (uint)(ec->dat).uc8[3];
    _mb = (uint)(ec->dat).uc8[4];
  }
  else {
    _mr = ((uint)(ec->dat).uc8[2] + (uint)(ec->dat).uc8[3] + (uint)(ec->dat).uc8[4]) / 3 & 0xff;
    _mg = _mr;
    _mb = _mr;
  }
  Scale = (float)(ec->dat).ui32[2];
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
    return;
  }
  local_70 = (ec->fw).field0_0x0.m_aData + 1;
  local_6c = (ec->fw).field0_0x0.m_aData + 2;
  iVar8 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
                    /* end of inlined section */
    pfVar9 = ScaleAnimeW + iVar8;
    pfVar13 = ScaleAnimeH + iVar8;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar8 = iVar8 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    *pfVar9 = *local_70;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(2,3);
                    /* end of inlined section */
                    /* end of inlined section */
    *pfVar13 = *local_6c;
  } while (iVar8 < 2);
  uVar16 = ec->flow;
  switch(uVar16) {
  case 0:
    DispFlameNum = 2;
    iVar8 = 0;
    do {
      iVar19 = iVar8 + 1;
      ScaleAnimeW[iVar8] = 1.0;
      Alpha[iVar8] = 0x80;
      ScaleAnimeH[iVar8] = 1.0;
      iVar8 = iVar19;
    } while (iVar19 < 2);
    break;
  case 1:
    uVar16 = ec->cnt;
    if ((int)uVar16 < 0) {
      fVar21 = (float)(uVar16 & 1 | uVar16 >> 1);
      fVar21 = fVar21 + fVar21;
    }
    else {
      fVar21 = (float)uVar16;
    }
    ScaleAnimeW[0] = (fVar21 * 20.0) / 6.0 + 25.0;
    if ((int)uVar16 < 0) {
      fVar21 = (float)(uVar16 & 1 | uVar16 >> 1);
      fVar21 = fVar21 + fVar21;
    }
    else {
      fVar21 = (float)uVar16;
    }
    iVar8 = 0;
    DispFlameNum = 2;
    piVar10 = Alpha;
    ScaleAnimeH[0] = (fVar21 * 35.0) / 6.0 + 25.0;
    do {
      iVar8 = iVar8 + 1;
      *piVar10 = 0x80;
      piVar10 = piVar10 + 1;
      ScaleAnimeW[1] = ScaleAnimeW[0];
      ScaleAnimeH[1] = ScaleAnimeH[0];
    } while (iVar8 < 2);
    break;
  case 2:
    uVar16 = ec->cnt;
    if ((int)uVar16 < 0) {
      fVar21 = (float)(uVar16 & 1 | uVar16 >> 1);
      fVar21 = fVar21 + fVar21;
    }
    else {
      fVar21 = (float)uVar16;
    }
    ScaleAnimeW[0] = (fVar21 * -20.0) / 9.0 + 45.0;
    if ((int)uVar16 < 0) {
      fVar21 = (float)(uVar16 & 1 | uVar16 >> 1);
      fVar21 = fVar21 + fVar21;
    }
    else {
      fVar21 = (float)uVar16;
    }
    iVar8 = 0;
    DispFlameNum = 2;
    piVar10 = Alpha;
    ScaleAnimeH[0] = (fVar21 * -35.0) / 9.0 + 60.0;
    do {
      iVar8 = iVar8 + 1;
      *piVar10 = 0x80;
      piVar10 = piVar10 + 1;
      ScaleAnimeW[1] = ScaleAnimeW[0];
      ScaleAnimeH[1] = ScaleAnimeH[0];
    } while (iVar8 < 2);
    break;
  case 3:
  case 5:
    if (uVar16 == 3) {
      iVar8 = 0x96;
    }
    else {
      iVar8 = 0x4b;
    }
    uVar16 = (uint)(uVar16 != 3);
    DispFlameNum = 2;
    iVar19 = ec->cnt - 5;
    iVar19 = (uint)(iVar19 < 0) * iVar8 + iVar19;
    fVar21 = CandleFlameScaleWGet__Fii(uVar16,ec->cnt);
    ScaleAnimeW[0] = fVar21 * 25.0;
    fVar21 = CandleFlameScaleHGet__Fii(uVar16,ec->cnt);
    ScaleAnimeH[0] = fVar21 * 25.0;
    fVar21 = CandleFlameScaleWGet__Fii(uVar16,iVar19);
    ScaleAnimeW[1] = fVar21 * 25.0;
    fVar21 = CandleFlameScaleHGet__Fii(uVar16,iVar19);
    ScaleAnimeH[1] = fVar21 * 25.0;
    uVar16 = ec->in;
    Alpha[0] = 0x80;
    if (uVar16 < 10) {
      Alpha[1] = (int)(uVar16 * -0x40) / 10 + 0x80;
    }
    else {
      Alpha[1] = (int)((uVar16 - 10) * 0x40) / 10 + 0x40;
    }
    break;
  case 4:
    iVar8 = 0;
    do {
      iVar19 = iVar8 + 1;
      ScaleAnimeW[iVar8] = 25.0;
      Alpha[iVar8] = 0x80;
      ScaleAnimeH[iVar8] = 25.0;
      iVar8 = iVar19;
    } while (iVar19 < 2);
    DispFlameNum = 1;
  }
  puVar1 = (undefined8 *)ec->pnt[0];
  vpos[2] = *(float *)(puVar1 + 1);
  vpos[3] = *(float *)((int)puVar1 + 0xc);
  vpos[0] = (float)*puVar1;
  vpos[1] = (float)((ulong)*puVar1 >> 0x20);
                    /* end of inlined section */
  iVar8 = 0;
  Get2PosRot__FPCfT0PfT2((float *)pafVar7,pGVar6->vTarget,&rot_x,&rot_y);
  sceVu0UnitMatrix(LocalWorld);
  sceVu0RotMatrixX(DAT_003edd0c,LocalWorld,LocalWorld);
  sceVu0RotMatrixY(rot_y,LocalWorld,LocalWorld);
  sceVu0TransMatrix(LocalWorld,LocalWorld,vpos);
  sceVu0MulMatrix(TmpMatrix,pGVar6->matWorldScreen,LocalWorld);
  if (DispFlameNum != 0) {
    paafVar14 = ScaleMatrix;
    paafVar17 = LocalScreen;
    do {
      sceVu0UnitMatrix(paafVar14);
      pfVar9 = ScaleAnimeH + iVar8;
      fVar21 = ScaleAnimeW[iVar8];
      iVar8 = iVar8 + 1;
      (*paafVar14)[0] = fVar21 * Scale;
      (*paafVar14)[2][2] = fVar21 * Scale;
      (*paafVar14)[1][1] = *pfVar9 * Scale;
      sceVu0MulMatrix(paafVar17,TmpMatrix,paafVar14);
      paafVar14 = paafVar14[1];
      paafVar17 = paafVar17[1];
    } while (iVar8 < DispFlameNum);
  }
  iVar8 = 0;
  if (DispFlameNum != 0) {
    iVar19 = 0;
    while( true ) {
      iVar20 = 3;
      iVar15 = (int)ivec + iVar19;
      pafVar7 = wpos;
      do {
        iVar20 = iVar20 + -1;
        sceVu0RotTransPers(iVar15,(int)LocalScreen + iVar19,pafVar7,1);
        iVar15 = iVar15 + 0x10;
        pafVar7 = pafVar7[1];
      } while (-1 < iVar20);
      iVar8 = iVar8 + 1;
      if (DispFlameNum <= iVar8) break;
      iVar19 = iVar8 * 0x40;
    }
  }
  paiVar12 = (int (*) [4])ivec;
  bVar2 = false;
  iVar8 = 3;
  do {
    paiVar3 = (int (*) [4])*paiVar12;
    iVar8 = iVar8 + -1;
    paiVar4 = (int (*) [4])*paiVar12;
    paiVar5 = (int (*) [4])*paiVar12;
    paiVar12 = paiVar12[1];
    if (0x8000 < (*paiVar3)[0] - 0x4000U) {
      bVar2 = true;
    }
    if (0x8000 < (*paiVar4)[1] - 0x4000U) {
      bVar2 = true;
    }
    if (0xfffff00 < (*paiVar5)[2] - 0xffU) {
      bVar2 = true;
    }
  } while (-1 < iVar8);
  if (!bVar2) {
    local_b0.alpha = DAT_003a6bd0;
    local_b0.tex1 = DAT_003a6bd8;
    local_b0.clamp = DAT_003a6be0;
    local_b0.test = DAT_003a6be8;
    local_b0.zbuf = DAT_003a6bf0;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_b0);
    iVar8 = EffWrkStopFlgGet__Fv();
    if (iVar8 == 0) {
                    /* inlined from effect.h */
      iVar8 = rand();
      RandVal_1004 = (float)(int)(((float)iVar8 / DAT_003edd10) * 8.0);
                    /* inlined from ../graph3d/g3dxVu0.h */
    }
    FreaPos[0] = vpos[0];
    FreaPos[2] = vpos[2];
    FreaPos[3] = vpos[3];
                    /* end of inlined section */
    FreaPos[1] = vpos[1] + DAT_003edd14;
    DrawFrea__FPffiiiii(FreaPos,Scale,ec->z,_mr,_mg,_mb,(int)(RandVal_1004 * 0.5 + 5.0));
    if (ec->flow == 4) {
      iVar8 = EffWrkMonochroModeGet__Fv();
      uVar16 = ec->keep;
      iVar19 = EffWrkMonochroModeGet__Fv();
      iVar15 = uVar16 * 2 + iVar8 + 0x12;
      tex0[0] = effdat[iVar15 + iVar19].tex0;
      iVar8 = EffWrkMonochroModeGet__Fv();
      tex0[1] = effdat[iVar15 + iVar8].tex0;
    }
    else {
      iVar8 = EffWrkMonochroModeGet__Fv();
      tex0[0] = effdat[iVar8 + 0x30].tex0;
      iVar8 = EffWrkMonochroModeGet__Fv();
      tex0[1] = effdat[iVar8 + 0x32].tex0;
    }
    if (DispFlameNum != 0) {
      piVar10 = Alpha;
      puVar18 = tex0;
      Tex0 = tex0[0];
      iVar8 = DispFlameNum;
      pIvec = ivec;
      while( true ) {
        puVar18 = puVar18 + 1;
        iVar19 = *piVar10;
        piVar10 = piVar10 + 1;
        iVar8 = iVar8 + -1;
        CandleFlameMakePacket__FPA3_iUlUiiiii((int (*) [4])pIvec,Tex0,ec->z,_mr,_mg,_mb,iVar19);
        if (iVar8 == 0) break;
        Tex0 = *puVar18;
        pIvec = pIvec[1];
      }
    }
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
    *local_70 = ScaleAnimeW[0];
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(2,3);
    *local_6c = ScaleAnimeH[0];
  }
                    /* end of inlined section */
  iVar8 = EffWrkStopFlgGet__Fv();
  if (iVar8 == 0) {
    ec->cnt = ec->cnt + 1;
    uVar16 = ec->flow;
  }
  else {
    uVar16 = ec->flow;
  }
  switch(uVar16) {
  case 0:
    ec->in = 0;
    ec->flow = 3;
    break;
  case 1:
    if (ec->cnt < 7) {
      return;
    }
    ec->cnt = 0;
    ec->flow = 2;
    return;
  case 2:
    if (ec->cnt < 10) {
      return;
    }
    ec->in = 0;
    ec->flow = 3;
    break;
  case 3:
  case 5:
    uVar11 = 0x96;
    if (uVar16 != 3) {
      uVar11 = 0x4b;
    }
    if (ec->cnt < uVar11) {
      uVar16 = ec->in;
    }
    else {
      ec->cnt = 0;
      if (uVar16 == 5) {
        ec->flow = 3;
      }
      uVar16 = ec->in;
    }
    ec->in = uVar16 + 1;
    if (uVar16 + 1 < 0x14) {
      return;
    }
    ec->in = 0;
    return;
  case 4:
    uVar16 = ec->keep;
    if (1 < ec->cnt) {
      ec->cnt = 0;
      ec->keep = uVar16 + 1;
      uVar16 = ec->keep;
    }
    if (uVar16 < 0xf) {
      return;
    }
    ec->keep = 0;
    ec->flow = 5;
    ec->in = 0;
    break;
  default:
    goto switchD_00152988_caseD_6;
  }
  ec->cnt = 0;
switchD_00152988_caseD_6:
  return;
}

static float CandleFlameScaleWGet(int Type, int Frame) {
	float RetVal;
	
  if (Type == 0) {
    return CandleFlameScaleData[Frame][0];
  }
  return CandleFlameScaleData2[Frame][0];
}

static float CandleFlameScaleHGet(int Type, int Frame) {
	float RetVal;
	
  if (Type == 0) {
    return CandleFlameScaleData[Frame][1];
  }
  return CandleFlameScaleData2[Frame][1];
}

static void CandleFlameMakePacket(sceVu0IVECTOR *pIvec, u_long Tex0, u_int Depth, int R, int G, int B, int Alpha) {
	float st[4][2];
	Q_WORDDATA *pbuf;
	int i;
	U32DATA ts;
	U32DATA tt;
	U32DATA tq;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  Q_WORDDATA *pQVar5;
  undefined4 uVar6;
  Q_WORDDATA *pQVar7;
  float (*pafVar8) [2];
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float st [4] [2];
  U32DATA ts;
  U32DATA tt;
  U32DATA tq;
  
  pafVar8 = st;
  puVar1 = (undefined *)((int)st + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6c38 >> (7 - uVar2) * 8;
  st[0] = DAT_003a6c38;
  puVar1 = (undefined *)((int)st[1] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6c40 >> (7 - uVar2) * 8;
  st[1] = DAT_003a6c40;
  puVar1 = (undefined *)((int)st[2] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6c48 >> (7 - uVar2) * 8;
  st[2] = DAT_003a6c48;
  puVar1 = (undefined *)((int)st[3] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6c50 >> (7 - uVar2) * 8;
  st[3] = DAT_003a6c50;
  pQVar5 = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  pQVar5->ul64[0] = 0x1000000000008002;
  iVar9 = 0;
  pQVar5->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar5 + 0x18) = 0x3f;
  pQVar5[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar5 + 0x28) = 6;
  pQVar5[2].ul64[0] = Tex0;
  *(undefined8 *)((int)pQVar5 + 0x38) = 0x412;
  pQVar5[3].ul64[0] = 0x302e400000008004;
  pQVar7 = pQVar5 + 4;
  do {
    iVar11 = (*pIvec)[3];
    fVar10 = *(float *)pafVar8;
    fVar13 = *(float *)((int)pafVar8 + 4);
    pafVar8 = (float (*) [2])((int)pafVar8 + 8);
    pQVar7->ui32[3] = 0;
    bVar4 = 1 < iVar9;
    uVar6 = 0x8000;
    iVar9 = iVar9 + 1;
    fVar12 = 1.0 / (float)iVar11;
    if (bVar4) {
      uVar6 = 0;
    }
    pQVar7->fl32[2] = fVar12;
    pQVar7->fl32[0] = fVar12 * fVar10;
    pQVar7->fl32[1] = fVar12 * fVar13;
    pQVar7[1].iv[0] = R;
    *(int *)((int)pQVar7 + 0x14) = G;
    *(int *)((int)pQVar7 + 0x18) = B;
    *(int *)((int)pQVar7 + 0x1c) = Alpha;
    pQVar7[2].iv[0] = (*pIvec)[0];
    iVar11 = (*pIvec)[1];
    pIvec = pIvec[1];
    *(uint *)((int)pQVar7 + 0x28) = Depth;
    *(int *)((int)pQVar7 + 0x24) = iVar11;
    *(undefined4 *)((int)pQVar7 + 0x2c) = uVar6;
    pQVar7 = pQVar7 + 3;
  } while (iVar9 < 4);
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar5 + 0x10);
  return;
}

void DrawFrea(float *Position, float Scale, int Depth, int R, int G, int B, int Alpha) {
	float LocalWorld[4][4];
	float TmpMatrix[4][4];
	float LocalScreen[4][4];
	float ScaleMatrix[4][4];
	sceVu0IVECTOR ivec[4];
	float frea_pos[4][4];
	float st[4][2];
	float rot_x;
	float rot_y;
	Q_WORDDATA *pbuf;
	int ndpkt;
	int i;
	int ClipFlg;
	GRA3DCAMERA *pCam;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  GRA3DCAMERA *pGVar8;
  float (*v1) [4];
  Q_WORDDATA *pQVar9;
  int iVar10;
  undefined4 uVar11;
  int (*paiVar12) [4];
  ulong uVar13;
  Q_WORDDATA *pQVar14;
  int (*paiVar15) [4];
  float (*pafVar16) [2];
  int iVar17;
  int iVar18;
  float LocalWorld [4] [4];
  float TmpMatrix [4] [4];
  float LocalScreen [4] [4];
  float ScaleMatrix [4] [4];
  int ivec [4] [4];
  float frea_pos [4] [4];
  float st [4] [2];
  float rot_x;
  float rot_y;
  float local_78;
  float local_74;
  float local_70;
  
  iVar17 = 0;
  frea_pos[2]._0_8_ = DAT_003a6c80;
  frea_pos[2]._8_8_ = DAT_003a6c88;
  frea_pos[0]._0_8_ = DAT_003a6c60;
  frea_pos[0]._8_8_ = DAT_003a6c68;
  frea_pos[1]._0_8_ = DAT_003a6c70;
  frea_pos[1]._8_8_ = DAT_003a6c78;
  frea_pos[3]._0_8_ = DAT_003a6c90;
  frea_pos[3]._8_8_ = DAT_003a6c98;
  puVar1 = (undefined *)((int)st + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6ca0 >> (7 - uVar2) * 8;
  st[0] = DAT_003a6ca0;
  puVar1 = (undefined *)((int)st[1] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6ca8 >> (7 - uVar2) * 8;
  st[1] = DAT_003a6ca8;
  puVar1 = (undefined *)((int)st[2] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6cb0 >> (7 - uVar2) * 8;
  st[2] = DAT_003a6cb0;
  puVar1 = (undefined *)((int)st[3] + 7);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6cb8 >> (7 - uVar2) * 8;
  st[3] = DAT_003a6cb8;
  pGVar8 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  Get2PosRot__FPCfT0PfT2((float *)v1,pGVar8->vTarget,&rot_x,&rot_y);
  sceVu0UnitMatrix(LocalWorld);
  sceVu0RotMatrixX(rot_x,LocalWorld,LocalWorld);
  sceVu0RotMatrixY(rot_y,LocalWorld,LocalWorld);
  sceVu0TransMatrix(LocalWorld,LocalWorld,Position);
  sceVu0MulMatrix(TmpMatrix,pGVar8->matWorldScreen,LocalWorld);
  sceVu0UnitMatrix(ScaleMatrix);
  ScaleMatrix[0][0] = Scale * 25.0;
  ScaleMatrix[1][1] = ScaleMatrix[0][0];
  ScaleMatrix[2][2] = ScaleMatrix[0][0];
  sceVu0MulMatrix(LocalScreen,TmpMatrix,ScaleMatrix);
  paiVar15 = ivec;
  iVar10 = 0;
  do {
    iVar17 = iVar17 + 1;
    sceVu0RotTransPers((int)*paiVar15 + iVar10,LocalScreen,(int)frea_pos + iVar10,1);
    iVar10 = iVar17 * 0x10;
  } while (iVar17 < 4);
  bVar4 = false;
  iVar10 = 3;
  paiVar12 = paiVar15;
  do {
    piVar5 = *paiVar12;
    iVar10 = iVar10 + -1;
    piVar6 = *paiVar12;
    piVar7 = *paiVar12;
    paiVar12 = paiVar12[1];
    if (0x8000 < *piVar5 - 0x4000U) {
      bVar4 = true;
    }
    if (0x8000 < piVar6[1] - 0x4000U) {
      bVar4 = true;
    }
    if (0xfffff00 < piVar7[2] - 0xffU) {
      bVar4 = true;
    }
  } while (-1 < iVar10);
  if (!bVar4) {
    iVar17 = 0;
    pQVar9 = StartDmaDirectTrans__Fv();
    Reserve2DPacket__FUi(0x10);
    pQVar9->ul64[0] = 0x1000000000008002;
    pQVar9->ul64[1] = 0xe;
    *(undefined8 *)((int)pQVar9 + 0x18) = 0x3f;
    pQVar9[1].ul64[0] = 0;
    iVar10 = EffWrkMonochroModeGet__Fv();
    uVar13 = effdat[iVar10 + 0x4c].tex0;
    *(undefined8 *)((int)pQVar9 + 0x28) = 6;
    pafVar16 = st;
    pQVar9[2].ul64[0] = uVar13;
    pQVar9[3].ul64[0] = 0x302e400000008004;
    *(undefined8 *)((int)pQVar9 + 0x38) = 0x412;
    iVar10 = 4;
    pQVar14 = pQVar9 + 4;
    do {
      iVar18 = (*paiVar15)[3];
      local_78 = (*pafVar16)[0];
      local_74 = (*pafVar16)[1];
      pafVar16 = pafVar16[1];
      pQVar14->ui32[3] = 0;
      bVar4 = 1 < iVar17;
      uVar11 = 0x8000;
      iVar17 = iVar17 + 1;
      local_70 = 1.0 / (float)iVar18;
      if (bVar4) {
        uVar11 = 0;
      }
      iVar10 = iVar10 + 3;
      local_78 = local_70 * local_78;
      pQVar14->fl32[2] = local_70;
      local_74 = local_70 * local_74;
      pQVar14->fl32[0] = local_78;
      pQVar14->fl32[1] = local_74;
      pQVar14[1].iv[0] = R;
      *(int *)((int)pQVar14 + 0x14) = G;
      *(int *)((int)pQVar14 + 0x18) = B;
      *(int *)((int)pQVar14 + 0x1c) = Alpha;
      pQVar14[2].iv[0] = (*paiVar15)[0];
      iVar18 = (*paiVar15)[1];
      paiVar15 = paiVar15[1];
      *(int *)((int)pQVar14 + 0x28) = Depth;
      *(int *)((int)pQVar14 + 0x24) = iVar18;
      *(undefined4 *)((int)pQVar14 + 0x2c) = uVar11;
      pQVar14 = pQVar14 + 3;
    } while (iVar17 < 4);
    EndDmaDirectTrans__FP10Q_WORDDATA(pQVar9 + iVar10);
  }
  return;
}

void EffOthCandleFlameYuramekiReq(EFFECT_CONT *pEffCont, float *PlayerPos) {
	float CandlePos[4];
	float TmpVector[4];
	float Distance;
	
  undefined8 *puVar1;
  float CandlePos [4];
  float TmpVector [4];
  
  if ((((pEffCont->dat).uc8[0] == '\x15') && (pEffCont->flow != 4)) && (pEffCont->flow != 5)) {
                    /* inlined from ../graph3d/g3dxVu0.h */
    puVar1 = (undefined8 *)pEffCont->pnt[0];
    CandlePos[2] = *(float *)(puVar1 + 1);
    CandlePos[3] = *(float *)((int)puVar1 + 0xc);
    CandlePos[0] = (float)*puVar1;
    CandlePos[1] = (float)((ulong)*puVar1 >> 0x20);
                    /* end of inlined section */
    sceVu0SubVector(TmpVector,CandlePos,PlayerPos);
    sceVu0MulVector(TmpVector,TmpVector,TmpVector);
    if (TmpVector[0] + TmpVector[1] + TmpVector[2] <= DAT_003edd18) {
      pEffCont->flow = 4;
      pEffCont->cnt = 0;
      pEffCont->keep = 0;
    }
  }
  return;
}

void EffOthCandleFlameFlareUpReq(EFFECT_CONT *pEffCont) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (pEffCont != (EFFECT_CONT *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
    (pEffCont->fw).field0_0x0.m_aData[1] = 25.0;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(2,3);
    (pEffCont->fw).field0_0x0.m_aData[2] = 25.0;
                    /* end of inlined section */
    pEffCont->flow = 1;
    pEffCont->in = 0;
    pEffCont->cnt = 0;
  }
  return;
}

void SetFire(EFFECT_CONT *ec) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* end of inlined section */
  (ec->fw).field0_0x0.m_aData[0] = 1.0;
  SubCandleFlame__FP11EFFECT_CONT(ec);
  return;
}

static void EffectManyCandleLoadInit(MANY_CANDLE_LOAD_CTRL *pLoadCtrl) {
	int i;
	
  void **ppvVar1;
  int iVar2;
  
  pLoadCtrl->Status = 0;
  pLoadCtrl->pLoadBuf = (uint *)0x0;
  iVar2 = 4;
  pLoadCtrl->PackNum = 0;
  pLoadCtrl->LoadId = -1;
  ppvVar1 = pLoadCtrl->pEffRet + 4;
  do {
    iVar2 = iVar2 + -1;
    *ppvVar1 = (void *)0x0;
    ppvVar1 = ppvVar1 + -1;
  } while (-1 < iVar2);
  return;
}

static void EffectManyCandleLoadMain(MANY_CANDLE_LOAD_CTRL *pLoadCtrl) {
  int iVar1;
  
  iVar1 = pLoadCtrl->Status;
  if (iVar1 != 2) {
    if (iVar1 < 3) {
      if ((iVar1 == 1) && (iVar1 = IsLoadEnd__Fi(pLoadCtrl->LoadId), iVar1 != 0)) {
        EffectManyCandleLoadAllEffectReq__FP21MANY_CANDLE_LOAD_CTRL(pLoadCtrl);
        pLoadCtrl->Status = 2;
      }
    }
    else if ((iVar1 == 3) && (iVar1 = IsLoadEnd__Fi(pLoadCtrl->LoadId), iVar1 != 0)) {
      EffectManyCandleLoadEnd__FP21MANY_CANDLE_LOAD_CTRL(pLoadCtrl);
    }
  }
  return;
}

void EffectManyCandleLoadReq(float *Offset) {
	MANY_CANDLE_LOAD_CTRL *pLoadCtrl;
	
  if (ManyCandleLoadCtrl.Status == 0) {
    ManyCandleLoadCtrl.pLoadBuf = (uint *)EFFECT_MALLOC__Fi(0x2300);
    if (ManyCandleLoadCtrl.pLoadBuf != (uint *)0x0) {
      ManyCandleLoadCtrl.LoadId = LoadReq__FiUi(0x1183,(uint)ManyCandleLoadCtrl.pLoadBuf);
      ManyCandleLoadCtrl.Status = 1;
                    /* inlined from ../graph3d/g3dxVu0.h */
      ManyCandleLoadCtrl.Offset[0] = *Offset;
      ManyCandleLoadCtrl.Offset[1] = Offset[1];
      ManyCandleLoadCtrl.Offset[2] = Offset[2];
      ManyCandleLoadCtrl.Offset[3] = Offset[3];
    }
  }
                    /* end of inlined section */
  return;
}

void EffectManyCandleLoadCut() {
	MANY_CANDLE_LOAD_CTRL *pLoadCtrl;
	int i;
	
  void *pEffect;
  void **ppvVar1;
  int iVar2;
  
  if (ManyCandleLoadCtrl.Status != 0) {
    if (ManyCandleLoadCtrl.Status == 1) {
      ManyCandleLoadCtrl.Status = 3;
    }
    else if ((ManyCandleLoadCtrl.Status == 2) && (iVar2 = 0, 0 < ManyCandleLoadCtrl.PackNum)) {
      ppvVar1 = ManyCandleLoadCtrl.pEffRet;
      pEffect = ManyCandleLoadCtrl.pEffRet[0];
      while( true ) {
        ppvVar1 = ppvVar1 + 1;
        iVar2 = iVar2 + 1;
        EffectManyCandleCut__FPv(pEffect);
        if (ManyCandleLoadCtrl.PackNum <= iVar2) break;
        pEffect = *ppvVar1;
      }
    }
    EffectManyCandleLoadEnd__FP21MANY_CANDLE_LOAD_CTRL(&ManyCandleLoadCtrl);
  }
  return;
}

static void EffectManyCandleLoadAllEffectReq(MANY_CANDLE_LOAD_CTRL *pLoadCtrl) {
	MANY_CANDLE_POS_DATA_HEADER *pHeader;
	int i;
	
  int iVar1;
  uint *puVar2;
  void *pvVar3;
  int iVar4;
  void **ppvVar5;
  
  ppvVar5 = pLoadCtrl->pEffRet;
  iVar1 = Pk2GetNum__FPUi(pLoadCtrl->pLoadBuf);
  pLoadCtrl->PackNum = iVar1;
  for (iVar1 = 0; iVar4 = Pk2GetNum__FPUi(pLoadCtrl->pLoadBuf), iVar1 < iVar4; iVar1 = iVar1 + 1) {
    puVar2 = Pk2GetAddr__FPUii(pLoadCtrl->pLoadBuf,iVar1);
    pvVar3 = EffectManyCandleReq__FPA3_fT0ii
                       (pLoadCtrl->Offset,(float (*) [4])(puVar2 + 4),puVar2[1],iVar1);
    *ppvVar5 = pvVar3;
    ppvVar5 = ppvVar5 + 1;
  }
  return;
}

static void EffectManyCandleLoadEnd(MANY_CANDLE_LOAD_CTRL *pLoadCtrl) {
  EFFECT_FREE__FPv(pLoadCtrl->pLoadBuf);
  EffectManyCandleLoadInit__FP21MANY_CANDLE_LOAD_CTRL(pLoadCtrl);
  return;
}

void SetManyCandle(EFFECT_CONT *ec) {
  MANY_CANDLE_CTRL *pMVar1;
  void *pvVar2;
  
  pMVar1 = (MANY_CANDLE_CTRL *)ec->pnt[1];
  if (pMVar1 == (MANY_CANDLE_CTRL *)0x0) {
    pMVar1 = (MANY_CANDLE_CTRL *)EFFECT_MALLOC__Fi(0xf30);
    ec->pnt[1] = pMVar1;
    if (pMVar1 == (MANY_CANDLE_CTRL *)0x0) {
      ResetEffects__FPv(ec);
      pMVar1 = (MANY_CANDLE_CTRL *)ec->pnt[1];
    }
    else {
      ManyCandleCtrlInit__FP16MANY_CANDLE_CTRLPA3_fT1ii
                (pMVar1,(float (*) [4])ec->pnt[0],(float (*) [4])ec->pnt[2],(ec->dat).iv[1],
                 (ec->dat).iv[2]);
      pMVar1 = (MANY_CANDLE_CTRL *)ec->pnt[1];
    }
  }
  pvVar2 = ManyCandleCtrl__FP16MANY_CANDLE_CTRL(pMVar1);
  ec->pnt[1] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void* EffectManyCandleReq(float *pCenterPos[4], float *pPos[4], int DataNum, int Id) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x20,2);
  return pvVar1;
}

void EffectManyCandleCut(void *pEffect) {
  if (pEffect != (void *)0x0) {
    EFFECT_FREE__FPv(*(void **)((int)pEffect + 0x24));
    ResetEffects__FPv(pEffect);
  }
  return;
}

static void ManyCandleCtrlInit(MANY_CANDLE_CTRL *pMc, float *pCenterPos[4], float *pParticlePos[4], int DataNum, int Id) {
	int i;
	
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MANY_CANDLE_CTRL *pMVar7;
  int iVar8;
  float fVar9;
  
  if (pMc != (MANY_CANDLE_CTRL *)0x0) {
                    /* inlined from ../graph3d/g3dxVu0.h */
    uVar1 = *(undefined8 *)*pCenterPos;
    fVar3 = (*pCenterPos)[2];
    fVar5 = (*pCenterPos)[3];
    pMc->CenterPos[0] = (float)uVar1;
    pMc->CenterPos[1] = (float)((ulong)uVar1 >> 0x20);
    pMc->CenterPos[2] = fVar3;
    pMc->CenterPos[3] = fVar5;
                    /* end of inlined section */
    pMc->Id = Id;
    pMc->G = 0x80;
    pMc->B = 0x82;
    pMc->R = 0x80;
    pMc->DataNum = DataNum;
    fVar3 = DAT_003edd1c;
    if (0 < DataNum) {
      fVar5 = 25.0;
      fVar9 = 149.0;
      pMVar7 = pMc;
      iVar2 = 0;
      do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
        uVar1 = *(undefined8 *)*pParticlePos;
                    /* inlined from ../graph3d/g3dxVu0.h */
        fVar4 = (*pParticlePos)[2];
        fVar6 = (*pParticlePos)[3];
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[0] = (float)uVar1;
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[1] = (float)((ulong)uVar1 >> 0x20);
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[2] = fVar4;
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[3] = fVar6;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
                    /* end of inlined section */
        pParticlePos = pParticlePos[1];
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[0] =
             (pMVar7->Particles).field0_0x0.m_aData[0].Position[0] * fVar5;
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[1] =
             (pMVar7->Particles).field0_0x0.m_aData[0].Position[1] * -25.0;
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
        (pMVar7->Particles).field0_0x0.m_aData[0].Position[2] =
             (pMVar7->Particles).field0_0x0.m_aData[0].Position[2] * -25.0;
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
        (pMVar7->Particles).field0_0x0.m_aData[0].Alpha = 0;
                    /* end of inlined section */
        iVar8 = iVar2 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
                    /* inlined from effect.h */
        iVar2 = rand();
        (pMVar7->Particles).field0_0x0.m_aData[0].Count = (int)(((float)iVar2 / fVar3) * fVar9);
                    /* end of inlined section */
        pMVar7 = (MANY_CANDLE_CTRL *)((pMVar7->Particles).field0_0x0.m_aData + 1);
        iVar2 = iVar8;
      } while (iVar8 < pMc->DataNum);
    }
  }
  return;
}

static void* ManyCandleCtrl(MANY_CANDLE_CTRL *pCandleCtrl) {
	float WorkMat[4][4];
	float LocalWorld[4][4];
	float LocalScreen[4][4];
	float BaseMat[4][4];
	float FreaBaseMat[4][4];
	GRA3DCAMERA *pCam;
	float &CamPos[4];
	float RotX;
	float RotY;
	fixed_array<int[4],480> ivec;
	fixed_array<int[4],480> ivecFrea;
	int PolyNo;
	int i;
	int j;
	fixed_array<int,120> Order;
	fixed_array<int,120> ToPolyNo;
	int ColorR;
	int ColorG;
	int ColorB;
	u_long Tex0;
	u_long FreaTex0;
	float FlameScale;
	float FreaScale;
	float FreaOffsetY;
	float FreaPosition[4];
	int ClipFlg;
	int Count;
	int BufNo;
	int BufNo;
	int Key;
	
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  GRA3DCAMERA *pGVar5;
  float (*pafVar6) [4];
  int iVar7;
  int *piVar8;
  int iVar9;
  int (*paiVar10) [4];
  int iVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float WorkMat [4] [4];
  float LocalWorld [4] [4];
  float LocalScreen [4] [4];
  float BaseMat [4] [4];
  float FreaBaseMat [4] [4];
  float RotX;
  float RotY;
  fixed_array<int[4],480> ivec;
  fixed_array<int[4],480> ivecFrea;
  fixed_array<int,120> Order;
  fixed_array<int,120> ToPolyNo;
  _DRAW_ENV_5 local_f0;
  float FreaPosition [4];
  MANY_CANDLE_CTRL *local_b0;
  int PolyNo;
  int ColorR;
  int ColorG;
  int ColorB;
  ulong Tex0;
  ulong FreaTex0;
  int local_88;
  float (*local_80) [4];
  
  pGVar5 = gra3dGetCamera__Fv();
  pafVar6 = gra3dcamGetPosition__Fv();
  iVar7 = EffWrkMonochroModeGet__Fv();
  PolyNo = 0;
  Tex0 = effdat[iVar7 + 0x30].tex0;
  fVar14 = 3.0;
  iVar7 = EffWrkMonochroModeGet__Fv();
  fVar15 = 50.0;
  FreaTex0 = effdat[iVar7 + 0x4c].tex0;
  local_b0 = (MANY_CANDLE_CTRL *)0x0;
  if (pCandleCtrl != (MANY_CANDLE_CTRL *)0x0) {
    iVar7 = EffWrkMonochroModeGet__Fv();
    if (iVar7 == 0) {
      ColorR = pCandleCtrl->R;
      ColorG = pCandleCtrl->G;
      ColorB = pCandleCtrl->B;
    }
    else {
      ColorR = (pCandleCtrl->R + pCandleCtrl->G + pCandleCtrl->B) / 3;
      ColorG = ColorR;
      ColorB = ColorR;
    }
    iVar7 = 0;
    local_f0.alpha = DAT_003a6bd0;
    local_f0.tex1 = DAT_003a6bd8;
    local_f0.clamp = DAT_003a6be0;
    local_f0.test = DAT_003a6be8;
    local_f0.zbuf = DAT_003a6bf0;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_f0);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(0,0x78);
                    /* end of inlined section */
    Get2PosRot__FPCfT0PfT2((float *)pafVar6,pGVar5->vTarget,&RotX,&RotY);
    sceVu0UnitMatrix(WorkMat);
    WorkMat[1][1] = -25.0;
    WorkMat[2][2] = 25.0;
    WorkMat[0][0] = 25.0;
    sceVu0RotMatrixY(RotY,BaseMat,WorkMat);
    sceVu0UnitMatrix(WorkMat);
    WorkMat[0][0] = 25.0;
    WorkMat[2][2] = 25.0;
    WorkMat[1][1] = 25.0;
    sceVu0RotMatrixX(RotX,WorkMat,WorkMat);
    sceVu0RotMatrixY(RotY,FreaBaseMat,WorkMat);
    local_b0 = pCandleCtrl;
    if (0 < pCandleCtrl->DataNum) {
      local_80 = pGVar5->matWorldScreen;
      local_88 = 0xffffff;
      do {
        iVar11 = (pCandleCtrl->Particles).field0_0x0.m_aData[0].Count;
        sceVu0UnitMatrix(WorkMat);
        WorkMat[1][1] = CandleFlameScaleData[iVar11][1] * 1.0;
        WorkMat[0][0] = CandleFlameScaleData[iVar11][0] * 1.0;
        bVar4 = false;
        iVar11 = 0;
        WorkMat[2][2] = WorkMat[0][0];
        sceVu0MulMatrix(WorkMat,BaseMat,WorkMat);
        sceVu0TransMatrix(LocalWorld,WorkMat,pCandleCtrl);
        sceVu0MulMatrix(LocalScreen,local_80,LocalWorld);
        pafVar6 = CandlePolyDat;
        do {
                    /* end of inlined section */
          iVar9 = PolyNo * 4 + iVar11;
          iVar11 = iVar11 + 1;
          paiVar10 = ivec.field0_0x0.m_aData[iVar9];
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          sceVu0RotTransPers(paiVar10,LocalScreen,pafVar6,0);
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if (((*paiVar10)[0] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0), 0xc000 < (*paiVar10)[0])) {
                    /* end of inlined section */
            bVar4 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if ((ivec.field0_0x0.m_aData[iVar9][1] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0),
             0xc000 < ivec.field0_0x0.m_aData[iVar9][1])) {
                    /* end of inlined section */
            bVar4 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if ((ivec.field0_0x0.m_aData[iVar9][2] < 0xff) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0),
             local_88 < ivec.field0_0x0.m_aData[iVar9][2])) {
                    /* end of inlined section */
            bVar4 = true;
          }
          pafVar6 = pafVar6[1];
        } while (iVar11 < 4);
        uVar3 = *(undefined8 *)(pCandleCtrl->Particles).field0_0x0.m_aData[0].Position;
                    /* inlined from ../graph3d/g3dxVu0.h */
        FreaPosition[2] = (pCandleCtrl->Particles).field0_0x0.m_aData[0].Position[2];
        FreaPosition[3] = (pCandleCtrl->Particles).field0_0x0.m_aData[0].Position[3];
        FreaPosition[0] = (float)uVar3;
                    /* end of inlined section */
        FreaPosition[1] = (float)((ulong)uVar3 >> 0x20) + fVar15;
        iVar11 = 0;
        sceVu0UnitMatrix(WorkMat);
        WorkMat[0][0] = fVar14;
        WorkMat[1][1] = fVar14;
        WorkMat[2][2] = fVar14;
        sceVu0MulMatrix(WorkMat,FreaBaseMat,WorkMat);
        sceVu0TransMatrix(LocalWorld,WorkMat,FreaPosition);
        sceVu0MulMatrix(LocalScreen,local_80,LocalWorld);
        pafVar6 = CandlePolyDat;
        do {
                    /* end of inlined section */
          iVar9 = PolyNo * 4 + iVar11;
          iVar11 = iVar11 + 1;
          paiVar10 = ivecFrea.field0_0x0.m_aData[iVar9];
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          sceVu0RotTransPers(paiVar10,LocalScreen,pafVar6,0);
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if (((*paiVar10)[0] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0), 0xc000 < (*paiVar10)[0])) {
                    /* end of inlined section */
            bVar4 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if ((ivecFrea.field0_0x0.m_aData[iVar9][1] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0),
             0xc000 < ivecFrea.field0_0x0.m_aData[iVar9][1])) {
                    /* end of inlined section */
            bVar4 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0);
          if ((ivecFrea.field0_0x0.m_aData[iVar9][2] < 0xff) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9,0x1e0),
             0xffffff < ivecFrea.field0_0x0.m_aData[iVar9][2])) {
                    /* end of inlined section */
            bVar4 = true;
          }
          pafVar6 = pafVar6[1];
        } while (iVar11 < 4);
        if (!bVar4) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(PolyNo,0x78);
          piVar8 = ToPolyNo.field0_0x0.m_aData + PolyNo;
          PolyNo = PolyNo + 1;
          *piVar8 = iVar7;
                    /* end of inlined section */
        }
        iVar7 = iVar7 + 1;
        pCandleCtrl = (MANY_CANDLE_CTRL *)((pCandleCtrl->Particles).field0_0x0.m_aData + 1);
      } while (iVar7 < local_b0->DataNum);
    }
    iVar7 = 0;
    if (0 < PolyNo) {
      piVar8 = (int *)&Order;
      do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        *piVar8 = iVar7;
                    /* end of inlined section */
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 1;
      } while (iVar7 < PolyNo);
    }
    iVar11 = PolyNo + -1;
    iVar7 = 0;
    if (0 < iVar11) {
      do {
        iVar9 = iVar7 + 1;
        if (iVar9 < PolyNo) {
          piVar12 = Order.field0_0x0.m_aData + iVar7;
          piVar8 = Order.field0_0x0.m_aData + iVar7 + 1;
          iVar13 = iVar9;
          do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
            iVar1 = *piVar12;
            _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar1 << 2,0x1e0);
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar13,0x78);
            iVar2 = *piVar8;
            _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar2 << 2,0x1e0);
            if (ivec.field0_0x0.m_aData[iVar2 * 4][2] < ivec.field0_0x0.m_aData[iVar1 * 4][2]) {
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar13,0x78);
              iVar1 = *piVar8;
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar13,0x78);
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
              *piVar8 = *piVar12;
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
              *piVar12 = iVar1;
            }
                    /* end of inlined section */
            iVar13 = iVar13 + 1;
            piVar8 = piVar8 + 1;
          } while (iVar13 < PolyNo);
        }
        iVar7 = iVar9;
      } while (iVar9 < iVar11);
    }
    iVar7 = 0;
    if (0 < PolyNo) {
      piVar8 = (int *)&Order;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      do {
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        iVar11 = *piVar8;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x78);
        iVar11 = ToPolyNo.field0_0x0.m_aData[iVar11];
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        iVar9 = *piVar8;
        _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9 << 2,0x1e0);
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        iVar13 = *piVar8;
        _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar13 << 2,0x1e0);
        CandleFlameMakePacket__FPA3_iUlUiiiii
                  (ivecFrea.field0_0x0.m_aData[iVar9 * 4],FreaTex0,
                   ivecFrea.field0_0x0.m_aData[iVar13 * 4][2],ColorR,ColorG,ColorB,
                   (local_b0->Particles).field0_0x0.m_aData[iVar11].FreaAlpha);
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        iVar11 = *piVar8;
        _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar11 << 2,0x1e0);
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x78);
        iVar9 = *piVar8;
                    /* end of inlined section */
        iVar7 = iVar7 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar9 << 2,0x1e0);
                    /* end of inlined section */
        piVar8 = piVar8 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        CandleFlameMakePacket__FPA3_iUlUiiiii
                  (ivec.field0_0x0.m_aData[iVar11 * 4],Tex0,ivec.field0_0x0.m_aData[iVar9 * 4][2],
                   ColorR,ColorG,ColorB,0x7f);
                    /* end of inlined section */
      } while (iVar7 < PolyNo);
    }
    iVar7 = EffWrkStopFlgGet__Fv();
    if (iVar7 == 0) {
      ManyCandleParticleUpdate__FP16MANY_CANDLE_CTRL(local_b0);
    }
  }
  return local_b0;
}

static void ManyCandleParticleUpdate(MANY_CANDLE_CTRL *pCandleCtrl) {
	int i;
	
  float fVar1;
  int iVar2;
  MANY_CANDLE_CTRL *pMVar3;
  int iVar4;
  float fVar5;
  
  fVar1 = DAT_003edd20;
  if (0 < pCandleCtrl->DataNum) {
    fVar5 = 4.0;
    pMVar3 = pCandleCtrl;
    iVar2 = 0;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar4 = iVar2 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z20MANY_CANDLE_PARTICLE_UiUi_PX01(iVar2,0x78);
                    /* end of inlined section */
      iVar2 = (pMVar3->Particles).field0_0x0.m_aData[0].Count + 1;
      (pMVar3->Particles).field0_0x0.m_aData[0].Count = iVar2;
      if (0x95 < iVar2) {
        (pMVar3->Particles).field0_0x0.m_aData[0].Count = 0;
      }
                    /* inlined from effect.h */
      iVar2 = rand();
      (pMVar3->Particles).field0_0x0.m_aData[0].FreaAlpha =
           (int)(((float)iVar2 / fVar1) * fVar5 + 17.0);
                    /* end of inlined section */
      pMVar3 = (MANY_CANDLE_CTRL *)((pMVar3->Particles).field0_0x0.m_aData + 1);
      iVar2 = iVar4;
    } while (iVar4 < pCandleCtrl->DataNum);
  }
  return;
}

void EffectCandleFlameDraw(float *Position, int *Color, float Scale, int Count) {
	float WorkMat[4][4];
	float LocalWorld[4][4];
	float LocalScreen[4][4];
	GRA3DCAMERA *pCam;
	float &CamPos[4];
	float RotX;
	float RotY;
	sceVu0IVECTOR ivec[4];
	int i;
	int ColorR;
	int ColorG;
	int ColorB;
	u_long Tex0;
	int ClipFlg;
	
  bool bVar1;
  int *piVar2;
  GRA3DCAMERA *pGVar3;
  float (*pafVar4) [4];
  int iVar5;
  int (*paiVar6) [4];
  ulong Tex0_00;
  int iVar7;
  float WorkMat [4] [4];
  float LocalWorld [4] [4];
  float LocalScreen [4] [4];
  float RotX;
  float RotY;
  int ivec [4] [4];
  int ColorR;
  int ColorG;
  ulong Tex0;
  
  pGVar3 = gra3dGetCamera__Fv();
  pafVar4 = gra3dcamGetPosition__Fv();
  iVar5 = EffWrkMonochroModeGet__Fv();
  Tex0_00 = effdat[iVar5 + 0x30].tex0;
  iVar5 = EffWrkMonochroModeGet__Fv();
  if (iVar5 == 0) {
    ColorR = *Color;
    ColorG = Color[1];
    iVar5 = Color[2];
  }
  else {
    iVar5 = (*Color + Color[1] + Color[2]) / 3;
    ColorR = iVar5;
    ColorG = iVar5;
  }
  Get2PosRot__FPCfT0PfT2((float *)pafVar4,pGVar3->vTarget,&RotX,&RotY);
  sceVu0UnitMatrix(WorkMat);
  bVar1 = false;
  iVar7 = 0;
  WorkMat[0][0] = CandleFlameScaleData[Count][0] * 25.0 * Scale;
  WorkMat[1][1] = CandleFlameScaleData[Count][1] * -25.0 * Scale;
  WorkMat[2][2] = WorkMat[0][0];
  sceVu0RotMatrixY(RotY,WorkMat,WorkMat);
  sceVu0TransMatrix(LocalWorld,WorkMat,Position);
  sceVu0MulMatrix(LocalScreen,pGVar3->matWorldScreen,LocalWorld);
  pafVar4 = CandlePolyDat;
  paiVar6 = ivec;
  do {
    sceVu0RotTransPers(paiVar6,LocalScreen,pafVar4,0);
    iVar7 = iVar7 + 1;
    piVar2 = *paiVar6;
    if (0x8000 < (*paiVar6)[0] - 0x4000U) {
      bVar1 = true;
    }
    if (0x8000 < (*paiVar6)[1] - 0x4000U) {
      bVar1 = true;
    }
    paiVar6 = paiVar6[1];
    if (0xffff00 < piVar2[2] - 0xffU) {
      bVar1 = true;
    }
    pafVar4 = pafVar4[1];
  } while (iVar7 < 4);
  if (!bVar1) {
    CandleFlameMakePacket__FPA3_iUlUiiiii(ivec,Tex0_00,ivec[0][2],ColorR,ColorG,iVar5,Color[3]);
  }
  return;
}

void SetHalo(EFFECT_CONT *ec) {
  SubHalo__FPfiiUiUcUcUcUcf
            ((float *)ec->pnt[0],(uint)(ec->dat).uc8[2],(uint)(ec->dat).uc8[6],ec->z,
             (ec->dat).uc8[3],(ec->dat).uc8[4],(ec->dat).uc8[5],'d',(ec->dat).fl32[2]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SubHalo(float *p, int type, int textp, u_int z, u_char r, u_char g, u_char b, u_char alp, float sc) {
	float wlm[4][4];
	float slm[4][4];
	int ipos[4];
	sceVu0IVECTOR ivec[4];
	float vpos[4];
	float wpos[4][4];
	static int rnbk = 0;
	static float scw = 25.f;
	static float sch = 25.f;
	float f;
	float rot_x;
	float rot_y;
	int i;
	int rn;
	int w;
	int n;
	GRA3DCAMERA *pCam;
	
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  GRA3DCAMERA *pGVar5;
  float (*pafVar6) [4];
  int iVar7;
  int (*paiVar8) [4];
  int iVar9;
  int iVar10;
  float w;
  float wlm [4] [4];
  float slm [4] [4];
  int ipos [4];
  int ivec [4] [4];
  float vpos [4];
  float wpos [4] [4];
  float rot_x;
  float rot_y;
  uint local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  
  local_70 = (uint)r;
  local_6c = (uint)g;
  wpos[0]._0_8_ = DAT_003a6cc0;
  wpos[0]._8_8_ = DAT_003a6cc8;
  wpos[1]._0_8_ = DAT_003a6cd0;
  wpos[1]._8_8_ = DAT_003a6cd8;
  wpos[2]._0_8_ = DAT_003a6ce0;
  wpos[2]._8_8_ = DAT_003a6ce8;
  wpos[3]._0_8_ = DAT_003a6cf0;
  wpos[3]._8_8_ = DAT_003a6cf8;
  local_78 = type;
  local_74 = textp;
  pGVar5 = gra3dGetCamera__Fv();
  pafVar6 = gra3dcamGetDirection__Fv();
                    /* inlined from ../graph3d/g3dxVu0.h */
  vpos[2] = p[2];
  vpos[3] = p[3];
  vpos[0] = (float)*(undefined8 *)p;
  vpos[1] = (float)((ulong)*(undefined8 *)p >> 0x20);
                    /* end of inlined section */
  Vector2Rot__FPCfPfT1((float *)pafVar6,&rot_x,&rot_y);
  bVar1 = false;
  iVar10 = 0;
  sceVu0UnitMatrix(wlm);
  wlm[0][0] = scw_1099 * sc;
  wlm[1][1] = sch_1100 * sc;
  wlm[2][2] = wlm[0][0];
  sceVu0RotMatrixX(rot_x,wlm,wlm);
  sceVu0RotMatrixY(rot_y,wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,vpos);
  sceVu0MulMatrix(slm,pGVar5->matWorldScreen,wlm);
  paiVar8 = ivec;
  pafVar6 = wpos;
  do {
    sceVu0RotTransPers(paiVar8,slm,pafVar6,0);
    piVar2 = *paiVar8;
    piVar3 = *paiVar8;
    iVar10 = iVar10 + 1;
    piVar4 = *paiVar8;
    paiVar8 = paiVar8[1];
    if (0x5000 < *piVar2 - 0x5800U) {
      bVar1 = true;
    }
    if (0x3800 < piVar3[1] - 0x6400U) {
      bVar1 = true;
    }
    pafVar6 = pafVar6[1];
    if (0xffff00 < piVar4[2] - 0xffU) {
      bVar1 = true;
    }
  } while (iVar10 < 4);
  if (!bVar1) {
    iVar7 = (ivec[3][0] - ivec[0][0]) / 2;
    iVar10 = (ivec[3][1] - ivec[0][1]) / 2;
    if (iVar10 < iVar7) {
      iVar10 = iVar7;
    }
    ipos[0] = (ivec[0][0] + ivec[3][0]) / 2;
    ipos[1] = (ivec[0][1] + ivec[3][1]) / 2;
    ipos[2] = (ivec[0][2] + ivec[3][2]) / 2;
    w = (float)iVar10 * 0.0625;
    ipos[3] = 0;
    iVar10 = EffWrkStopFlgGet__Fv();
    if (iVar10 == 0) {
      if (((local_78 ^ 1) & 1) == 0) {
        iVar10 = rand();
        rnbk_1098 = (int)(((float)iVar10 / DAT_003edd28) * 6.0 + 3.0);
                    /* end of inlined section */
      }
      else {
                    /* inlined from effect.h */
        iVar10 = rand();
        rnbk_1098 = (int)(((float)iVar10 / DAT_003edd24) * 9.0);
      }
    }
    iVar10 = rnbk_1098;
    iVar7 = EffWrkMonochroModeGet__Fv();
    iVar9 = local_74 * 2;
    SetEffSQITex__FiPiiffUcUcUcUc
              (iVar9 + iVar7 + 0xc,ipos,1,w + w,w + w,(uchar)local_70,(uchar)local_6c,b,
               (uchar)((int)((iVar10 / 2 + 7) * (uint)alp) / 100));
    iVar7 = EffWrkMonochroModeGet__Fv();
    SetEffSQITex__FiPiiffUcUcUcUc
              (iVar9 + iVar7 + 0xc,ipos,1,w,w,(uchar)local_70,(uchar)local_6c,b,
               (uchar)((int)((iVar10 + 3) * (uint)alp) / 100));
  }
  return;
}

void InitHeatHaze() {
	int i;
	
  int iVar1;
  fixed_array<HEAT_HAZE,4> *pfVar2;
  fixed_array<HEAT_HAZE,5> *pfVar3;
  
  iVar1 = 0;
  pfVar2 = &ene_particle;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,4);
    if ((((HEAT_HAZE *)pfVar2)->flag & 0x80) == 0) {
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,4);
      ((HEAT_HAZE *)pfVar2)->flag = 0;
                    /* end of inlined section */
    }
    else {
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,4);
      ((HEAT_HAZE *)pfVar2)->flag = ((HEAT_HAZE *)pfVar2)->flag & 0x7f;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<HEAT_HAZE,4> *)((int)pfVar2 + 0x3e90);
  } while (iVar1 < 4);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(0,1);
  if ((amu_particle.field0_0x0.m_aData[0].flag & 0x80) == 0) {
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(0,1);
    amu_particle.field0_0x0.m_aData[0].flag = 0;
  }
  else {
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(0,1);
    amu_particle.field0_0x0.m_aData[0].flag = amu_particle.field0_0x0.m_aData[0].flag & 0x7f;
  }
                    /* end of inlined section */
  iVar1 = 0;
  pfVar3 = &torch_particle;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,5);
    if ((((HEAT_HAZE *)pfVar3)->flag & 0x80) == 0) {
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,5);
      ((HEAT_HAZE *)pfVar3)->flag = 0;
                    /* end of inlined section */
    }
    else {
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar1,5);
      ((HEAT_HAZE *)pfVar3)->flag = ((HEAT_HAZE *)pfVar3)->flag & 0x7f;
    }
    iVar1 = iVar1 + 1;
    pfVar3 = (fixed_array<HEAT_HAZE,5> *)((int)pfVar3 + 0x3e90);
  } while (iVar1 < 5);
  return;
}

static int draw_distortion_particles(float *local_screen[4][4], float *local_clip[4][4], int fr, int t_particles, PARTICLE *pParticles, float psize, float distortion_amount, int type) {
	int i;
	int n;
	int num;
	u_long *d;
	u_long areg;
	u_long treg;
	float y_correction;
	float rr;
	float gg;
	float bb;
	float warp_add[4];
	float screen_size[4];
	float particle_size[4];
	int dtex;
	float ones[4];
	float st_add[4];
	float st_scale[4];
	int ndpkt;
	Q_WORDDATA *pbuf;
	DRAW_ENV_5 env;
	unsigned int clip_flags;
	
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Q_WORDDATA *pQVar9;
  int iVar10;
  undefined (*pauVar11) [16];
  ulong uVar12;
  Q_WORDDATA *pQVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined extraout_vf2 [16];
  undefined extraout_vf3 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf7 [16];
  undefined auVar25 [16];
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined extraout_vf19 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined extraout_vf24 [16];
  undefined extraout_vf25 [16];
  undefined extraout_vf26 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined extraout_vf28 [16];
  undefined extraout_vf29 [16];
  undefined extraout_vf30 [16];
  undefined extraout_vf31 [16];
  float warp_add [4];
  float screen_size [4];
  float particle_size [4];
  float ones [4];
  float st_add [4];
  float st_scale [4];
  _DRAW_ENV_5 env;
  
  lVar14 = 0;
  lVar16 = 0;
  uVar20 = 0;
  fVar22 = distortion_amount + 0.0;
  memset(warp_add,0,0x10);
  uVar8 = DAT_003a6d38;
  uVar7 = DAT_003a6d30;
  uVar6 = DAT_003a6d28;
  uVar5 = DAT_003a6d20;
  uVar4 = DAT_003a6d18;
  uVar3 = DAT_003a6d10;
  uVar2 = DAT_003a6d08;
  uVar1 = DAT_003a6d00;
  switch(type + -1) {
  default:
    lVar18 = 0;
    break;
  case 1:
  case 2:
  case 3:
    lVar18 = 1;
  }
  warp_add[0] = fVar22;
  if (((lVar18 != 0) && (type < 7)) && (0 < type)) {
    LocalCopyLtoL__Fiii(1,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x3480);
  }
  if (type == 2) {
    lVar16 = 0x30003;
  }
  else {
    if (type < 3) {
      if (type != 1) goto LAB_00154a0c;
    }
    else if (6 < type) goto LAB_00154a0c;
    lVar16 = 0x50003;
  }
LAB_00154a0c:
  switch(type + -1) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
    lVar14 = 0x48;
    break;
  case 5:
    lVar14 = 0x44;
  }
  iVar15 = 4;
  env.zbuf = 0x10a000118;
  env.tex1 = 0x161;
  env.clamp = 0;
  env.alpha = lVar14;
  env.test = lVar16;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&env);
  Reserve2DPacket__FUi(0x10);
  pQVar9 = StartDmaDirectTrans__Fv();
  pQVar9->ul64[0] = 0x1000000000008001;
  pQVar9->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar9 + 0x18) = 0x3f;
  pQVar9[1].ul64[0] = 0;
  _lqc2((undefined  [16])(*param_1)[0]);
  _lqc2((undefined  [16])(*param_1)[1]);
  _lqc2((undefined  [16])(*param_1)[2]);
  _lqc2((undefined  [16])(*param_1)[3]);
  _lqc2((undefined  [16])(*param_2)[0]);
  _lqc2((undefined  [16])(*param_2)[1]);
  _lqc2((undefined  [16])(*param_2)[2]);
  _lqc2((undefined  [16])(*param_2)[3]);
  auVar28._4_4_ = psize * 0.5;
  auVar28._0_4_ = psize;
  auVar28._8_4_ = uVar20;
  auVar28._12_4_ = uVar20;
  _lqc2(auVar28);
  auVar25._4_4_ = warp_add[1];
  auVar25._8_4_ = warp_add[2];
  auVar25._12_4_ = warp_add[3];
  auVar25._0_4_ = warp_add[0];
  _lqc2(auVar25);
  auVar30._8_8_ = uVar6;
  auVar30._0_8_ = uVar5;
  _lqc2(auVar30);
  auVar29._8_8_ = uVar8;
  auVar29._0_8_ = uVar7;
  _lqc2(auVar29);
  auVar27._8_8_ = uVar4;
  auVar27._0_8_ = uVar3;
  _lqc2(auVar27);
  auVar26._8_8_ = uVar2;
  auVar26._0_8_ = uVar1;
  _lqc2(auVar26);
  iVar17 = 0;
  if (0 < t_particles) {
    fVar22 = 3.0;
    pQVar13 = pQVar9 + 2;
    do {
      if (0.0 < pParticles->color[3]) {
        iVar17 = iVar17 + 1;
        fVar23 = pParticles->color[0];
        fVar21 = pParticles->color[1];
        fVar24 = pParticles->color[2];
        iVar10 = EffWrkMonochroModeGet__Fv();
        if (iVar10 != 0) {
          fVar19 = (fVar23 + fVar21 + fVar24) / fVar22;
          pParticles->color[0] = fVar19;
          pParticles->color[2] = fVar19;
          pParticles->color[1] = fVar19;
        }
        auVar25 = _lqc2(*(undefined (*) [16])pParticles->position);
        auVar28 = _lqc2(*(undefined (*) [16])pParticles->color);
        _vmulabc(extraout_vf28,auVar25);
        _vmaddabc(extraout_vf29,auVar25);
        _vmaddabc(extraout_vf30,auVar25);
        auVar26 = _vmaddbc(extraout_vf31,auVar25);
        _vclip(auVar26,auVar26);
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        uVar12 = _cfc2(in_vc2);
        if ((uVar12 & 0x3f) == 0) {
          _vmulabc(extraout_vf4,auVar25);
          _vmaddabc(extraout_vf5,auVar25);
          _vmaddabc(extraout_vf6,auVar25);
          auVar25 = _vmaddbc(extraout_vf7,auVar25);
          _vdiv(in_vf0,0,auVar25,0);
          uVar20 = _vwaitq();
          auVar27 = _vmulq(auVar25,uVar20);
          auVar25 = _vmulq(extraout_vf3,uVar20);
          auVar26 = _vadd(auVar27,extraout_vf25);
          auVar30 = _vadd(auVar26,extraout_vf2);
          auVar26 = _vsub(auVar30,auVar25);
          auVar26 = _vsub(auVar26,extraout_vf19);
          _vmax(auVar26,in_vf0);
          auVar25 = _vadd(auVar30,auVar25);
          auVar25 = _vadd(auVar25,extraout_vf19);
          _vmini(auVar25,extraout_vf24);
          pQVar13->ul64[0] = (lVar18 << 4 | 0x4dU) << 0x2f | 0xe000400000008001;
          pQVar13->ul64[1] = 0x42424242421421;
          pauVar11 = (undefined (*) [16])(pQVar9->ul64 + iVar15 + 2);
          auVar25 = _vftoi0(auVar28);
          auVar25 = _sqc2(auVar25);
          *pauVar11 = auVar25;
          auVar25 = _vmove(extraout_vf19);
          auVar25 = _sqc2(auVar25);
          pauVar11[3] = auVar25;
          auVar28 = _vmove(extraout_vf19);
          auVar25 = _vmul(auVar28,extraout_vf26);
          _vmove(auVar25);
          auVar26 = _vmove(in_vf0);
          auVar30 = _vmove(in_vf0);
          _vmove(auVar28);
          auVar28 = _vmove(in_vf0);
          auVar29 = _vmove(in_vf0);
          auVar25 = _vmove(extraout_vf19);
          auVar31 = _vmul(auVar25,extraout_vf26);
          auVar25 = _sqc2(auVar31);
          pauVar11[1] = auVar25;
          auVar25 = _vftoi4(auVar27);
          auVar25 = _sqc2(auVar25);
          pauVar11[2] = auVar25;
          auVar25 = _vsub(auVar31,auVar30);
          auVar25 = _sqc2(auVar25);
          pauVar11[4] = auVar25;
          auVar25 = _vsub(auVar27,auVar29);
          auVar25 = _vftoi4(auVar25);
          auVar25 = _sqc2(auVar25);
          pauVar11[5] = auVar25;
          auVar25 = _vadd(auVar31,auVar26);
          auVar25 = _sqc2(auVar25);
          pauVar11[6] = auVar25;
          auVar25 = _vadd(auVar27,auVar28);
          auVar25 = _vftoi4(auVar25);
          auVar25 = _sqc2(auVar25);
          pauVar11[7] = auVar25;
          auVar25 = _vadd(auVar31,auVar30);
          auVar25 = _sqc2(auVar25);
          pauVar11[8] = auVar25;
          auVar25 = _vadd(auVar27,auVar29);
          auVar25 = _vftoi4(auVar25);
          auVar25 = _sqc2(auVar25);
          pauVar11[9] = auVar25;
          auVar25 = _vsub(auVar31,auVar26);
          auVar25 = _sqc2(auVar25);
          pauVar11[10] = auVar25;
          auVar25 = _vsub(auVar27,auVar28);
          auVar25 = _vftoi4(auVar25);
          auVar25 = _sqc2(auVar25);
          pauVar11[0xb] = auVar25;
          auVar25 = _vsub(auVar31,auVar30);
          auVar25 = _sqc2(auVar25);
          pauVar11[0xc] = auVar25;
          auVar25 = _vsub(auVar27,auVar29);
          auVar25 = _vftoi4(auVar25);
          auVar25 = _sqc2(auVar25);
          pauVar11[0xd] = auVar25;
          pQVar13 = pQVar13 + 0xf;
          iVar15 = iVar15 + 0x1e;
          pParticles->color[0] = fVar23;
        }
        else {
          pParticles->color[0] = fVar23;
        }
        pParticles->color[1] = fVar21;
        pParticles->color[2] = fVar24;
      }
      t_particles = t_particles + -1;
      pParticles = pParticles + 1;
    } while (t_particles != 0);
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar9 + (iVar15 + 1) / 2);
  return iVar17;
}

int draw_distortion_particles2(float *local_screen[4][4], float *local_clip[4][4], int t_particles, PARTICLE *pParticles, float psize, u_long Tex0, u_long AlphaBlend) {
	float screen_size[4];
	float particle_size[4];
	float stq[5][4];
	float ones[4];
	float st_add[4];
	float st_scale[4];
	Q_WORDDATA *pbuf;
	int ndpkt;
	int i;
	int num;
	float rr;
	float gg;
	float bb;
	float FogDivVec[4];
	float FogSubVec[4];
	unsigned int clip_flags;
	sceVu0IVECTOR *pVec1;
	sceVu0IVECTOR *pVec2;
	int ClipFlg;
	
  bool bVar1;
  undefined auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float (*pafVar11) [4];
  undefined8 *puVar12;
  Q_WORDDATA *pQVar13;
  int iVar14;
  Q_WORDDATA *pQVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  float (*pafVar21) [4];
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 in_vc2;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf7 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined extraout_vf19 [16];
  undefined auVar33 [16];
  undefined extraout_vf24 [16];
  undefined extraout_vf25 [16];
  undefined extraout_vf26 [16];
  undefined extraout_vf27 [16];
  undefined extraout_vf28 [16];
  undefined extraout_vf29 [16];
  undefined extraout_vf30 [16];
  undefined extraout_vf31 [16];
  undefined4 uVar34;
  float screen_size [4];
  float particle_size [4];
  float stq [5] [4];
  float ones [4];
  float st_add [4];
  float st_scale [4];
  float FogDivVec [4];
  float FogSubVec [4];
  PARTICLE *local_80;
  ulong local_78;
  
  uVar4 = DAT_003a6d88;
  uVar3 = DAT_003a6d80;
  memset(particle_size,0,0x10);
  uVar10 = DAT_003a6e08;
  uVar9 = DAT_003a6e00;
  uVar8 = DAT_003a6df8;
  uVar7 = DAT_003a6df0;
  uVar6 = DAT_003a6de8;
  uVar5 = DAT_003a6de0;
  pafVar11 = stq;
  puVar12 = &DAT_003a6d90;
  local_80 = pParticles;
  local_78 = AlphaBlend;
  do {
    puVar20 = puVar12;
    pafVar21 = pafVar11;
    uVar17 = puVar20[1];
    uVar18 = puVar20[2];
    uVar19 = puVar20[3];
    *(undefined8 *)*pafVar21 = *puVar20;
    *(undefined8 *)(*pafVar21 + 2) = uVar17;
    *(undefined8 *)pafVar21[1] = uVar18;
    *(undefined8 *)(pafVar21[1] + 2) = uVar19;
    pafVar11 = pafVar21[2];
    puVar12 = puVar20 + 4;
  } while (puVar20 + 4 != (undefined8 *)&UNK_003a6dd0);
  iVar22 = 4;
  uVar17 = puVar20[5];
  *(undefined8 *)pafVar21[2] = _UNK_003a6dd0;
  *(undefined8 *)(pafVar21[2] + 2) = uVar17;
  memset(FogDivVec,0,0x10);
  FogDivVec[3] = 0.015625;
  memset(FogSubVec,0,0x10);
  FogSubVec[3] = 255.0;
  Reserve2DPacket__FUi(0x10);
  pQVar13 = StartDmaDirectTrans__Fv();
  pQVar13->ul64[0] = 0x1000000000008003;
  pQVar13->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar13 + 0x18) = 0x3f;
  pQVar13[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar13 + 0x28) = 6;
  pQVar13[2].ul64[0] = Tex0;
  *(undefined8 *)((int)pQVar13 + 0x38) = 0x42;
  pQVar13[3].ul64[0] = local_78;
  _lqc2((undefined  [16])(*param_1)[0]);
  _lqc2((undefined  [16])(*param_1)[1]);
  _lqc2((undefined  [16])(*param_1)[2]);
  _lqc2((undefined  [16])(*param_1)[3]);
  _lqc2((undefined  [16])(*param_2)[0]);
  _lqc2((undefined  [16])(*param_2)[1]);
  _lqc2((undefined  [16])(*param_2)[2]);
  _lqc2((undefined  [16])(*param_2)[3]);
  auVar33._8_8_ = uVar8;
  auVar33._0_8_ = uVar7;
  _lqc2(auVar33);
  auVar30._8_8_ = uVar10;
  auVar30._0_8_ = uVar9;
  _lqc2(auVar30);
  auVar29._8_8_ = uVar6;
  auVar29._0_8_ = uVar5;
  _lqc2(auVar29);
  auVar28._8_8_ = uVar4;
  auVar28._0_8_ = uVar3;
  _lqc2(auVar28);
  iVar23 = 0;
  if (0 < t_particles) {
    do {
      if (0.0 < local_80->color[3]) {
        iVar23 = iVar23 + 1;
        fVar26 = local_80->color[0];
        fVar25 = local_80->color[1];
        fVar27 = local_80->color[2];
        iVar14 = EffWrkMonochroModeGet__Fv();
        if (iVar14 == 0) {
          fVar24 = local_80->Scale;
        }
        else {
          fVar24 = (fVar26 + fVar25 + fVar27) / 3.0;
          local_80->color[0] = fVar24;
          local_80->color[2] = fVar24;
          local_80->color[1] = fVar24;
          fVar24 = local_80->Scale;
        }
        particle_size[0] = psize * fVar24;
        auVar28 = _lqc2(*(undefined (*) [16])local_80->position);
        auVar33 = _lqc2(*(undefined (*) [16])local_80->color);
        _vmulabc(extraout_vf28,auVar28);
        _vmaddabc(extraout_vf29,auVar28);
        _vmaddabc(extraout_vf30,auVar28);
        auVar29 = _vmaddbc(extraout_vf31,auVar28);
        _vclip(auVar29,auVar29);
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        _vnop();
        uVar16 = _cfc2(in_vc2);
        if ((uVar16 & 0x3f) == 0) {
          auVar31._4_4_ = particle_size[0];
          auVar31._0_4_ = particle_size[0];
          auVar31._8_4_ = particle_size[2];
          auVar31._12_4_ = particle_size[3];
          auVar29 = _lqc2(auVar31);
          auVar32._12_4_ = FogDivVec[3];
          auVar32._0_4_ = FogDivVec[0];
          auVar32._4_4_ = FogDivVec[1];
          auVar32._8_4_ = FogDivVec[2];
          auVar31 = _lqc2(auVar32);
          auVar2._12_4_ = FogSubVec[3];
          auVar2._0_4_ = FogSubVec[0];
          auVar2._4_4_ = FogSubVec[1];
          auVar2._8_4_ = FogSubVec[2];
          auVar32 = _lqc2(auVar2);
          _vmulabc(extraout_vf4,auVar28);
          _vmaddabc(extraout_vf5,auVar28);
          _vmaddabc(extraout_vf6,auVar28);
          auVar28 = _vmaddbc(extraout_vf7,auVar28);
          _vdiv(in_vf0,0,auVar28,0);
          uVar34 = _vwaitq();
          auVar30 = _vmove(auVar28);
          auVar30 = _vmul(auVar30,auVar31);
          auVar30 = _vsub(auVar32,auVar30);
          auVar30 = _vmax(auVar30,in_vf0);
          auVar31 = _vftoi4(auVar30);
          auVar30 = _vmulq(auVar28,uVar34);
          auVar28 = _vmulq(auVar29,uVar34);
          auVar29 = _vadd(auVar30,extraout_vf25);
          auVar29 = _vsub(auVar29,auVar28);
          auVar29 = _vsub(auVar29,extraout_vf19);
          _vmax(auVar29,in_vf0);
          auVar28 = _vadd(extraout_vf27,auVar28);
          auVar28 = _vadd(auVar28,extraout_vf19);
          _vmini(auVar28,extraout_vf24);
          pQVar15 = pQVar13 + iVar22;
          pQVar15->ul64[0] = 0xe03ec00000008001;
          pQVar15->ul64[1] = 0x42424242421421;
          auVar28 = _vftoi0(auVar33);
          auVar28 = _sqc2(auVar28);
          pQVar15[1].ul128 = (uint16)auVar28;
          auVar28 = _vmove(extraout_vf19);
          auVar28 = _sqc2(auVar28);
          pQVar15[4].ul128 = (uint16)auVar28;
          auVar29 = _vmove(extraout_vf19);
          auVar28 = _vmul(auVar29,extraout_vf26);
          _vmove(auVar28);
          _vmove(in_vf0);
          _vmove(in_vf0);
          _vmove(auVar29);
          auVar29 = _vmove(in_vf0);
          auVar33 = _vmove(in_vf0);
          auVar28 = _lqc2((undefined  [16])stq[4]);
          auVar28 = _sqc2(auVar28);
          pQVar15[2].ul128 = (uint16)auVar28;
          _vftoi4(auVar30);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[3].ul128 = (uint16)auVar28;
          auVar28 = _lqc2((undefined  [16])stq[0]);
          auVar28 = _sqc2(auVar28);
          pQVar15[5].ul128 = (uint16)auVar28;
          auVar28 = _vsub(auVar30,auVar29);
          auVar28 = _vsub(auVar28,auVar33);
          _vftoi4(auVar28);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[6].ul128 = (uint16)auVar28;
          auVar28 = _lqc2((undefined  [16])stq[1]);
          auVar28 = _sqc2(auVar28);
          pQVar15[7].ul128 = (uint16)auVar28;
          auVar28 = _vadd(auVar30,auVar29);
          auVar28 = _vsub(auVar28,auVar33);
          _vftoi4(auVar28);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[8].ul128 = (uint16)auVar28;
          auVar28 = _lqc2((undefined  [16])stq[2]);
          auVar28 = _sqc2(auVar28);
          pQVar15[9].ul128 = (uint16)auVar28;
          auVar28 = _vadd(auVar30,auVar29);
          auVar28 = _vadd(auVar28,auVar33);
          _vftoi4(auVar28);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[10].ul128 = (uint16)auVar28;
          auVar28 = _lqc2((undefined  [16])stq[3]);
          auVar28 = _sqc2(auVar28);
          pQVar15[0xb].ul128 = (uint16)auVar28;
          auVar28 = _vsub(auVar30,auVar29);
          auVar28 = _vadd(auVar28,auVar33);
          _vftoi4(auVar28);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[0xc].ul128 = (uint16)auVar28;
          auVar28 = _lqc2((undefined  [16])stq[0]);
          auVar28 = _sqc2(auVar28);
          pQVar15[0xd].ul128 = (uint16)auVar28;
          auVar28 = _vsub(auVar30,auVar29);
          auVar28 = _vsub(auVar28,auVar33);
          _vftoi4(auVar28);
          auVar28 = _vmove(auVar31);
          auVar28 = _sqc2(auVar28);
          pQVar15[0xe].ul128 = (uint16)auVar28;
          bVar1 = false;
          if ((pQVar13[iVar22 + 6].iv[0] < 0x4000) || (0xc000 < pQVar13[iVar22 + 10].iv[0])) {
            bVar1 = true;
            iVar14 = *(int *)((int)pQVar13 + iVar22 * 0x10 + 100);
          }
          else {
            iVar14 = *(int *)((int)pQVar13 + iVar22 * 0x10 + 100);
          }
          if ((iVar14 < 0x4000) || (0xc000 < *(int *)((int)pQVar13 + iVar22 * 0x10 + 0xa4))) {
            bVar1 = true;
            iVar14 = *(int *)((int)pQVar13 + iVar22 * 0x10 + 0x68);
          }
          else {
            iVar14 = *(int *)((int)pQVar13 + iVar22 * 0x10 + 0x68);
          }
          if (0xfffff00 < iVar14 - 0xffU) {
            bVar1 = true;
          }
          if (!bVar1) {
            iVar22 = iVar22 + 0xf;
          }
          local_80->color[0] = fVar26;
        }
        else {
          local_80->color[0] = fVar26;
        }
        local_80->color[1] = fVar25;
        local_80->color[2] = fVar27;
        particle_size[1] = particle_size[0];
      }
      t_particles = t_particles + -1;
      local_80 = local_80 + 1;
    } while (t_particles != 0);
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar13 + iVar22);
  return iVar23;
}

void add_particle(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a) {
	float oolife;
	PARTICLE *p;
	
  ushort uVar1;
  int iVar2;
  PARTICLE *pPVar3;
  float fVar4;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
  uVar1 = hh->blife;
  fVar4 = *pos;
  pPVar3 = (hh->particles).field0_0x0.m_aData + hh->head;
  pPVar3->lifetime = (int)(short)uVar1;
  pPVar3->position[0] = fVar4;
  iVar2 = hh->head;
  pPVar3->position[1] = pos[1];
  fVar4 = pos[2];
  pPVar3->position[3] = 1.0;
  pPVar3->position[2] = fVar4;
  pPVar3->velocity[0] = *vel;
  pPVar3->velocity[1] = vel[1];
  fVar4 = vel[2];
  pPVar3->color[0] = r;
  pPVar3->color[1] = g;
  pPVar3->color[2] = b;
  pPVar3->color[3] = a;
  pPVar3->velocity[2] = fVar4;
  pPVar3->alp_step = -(a * (1.0 / (float)(int)(short)uVar1));
  pPVar3->velocity[3] = 0.0;
  hh->head = (iVar2 + 1) % 200;
  return;
}

void update_particles(PARTICLE *prt) {
	int i;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = 199;
  do {
    iVar1 = prt->lifetime;
    if (iVar1 == 0) {
      prt->color[3] = 0.0;
    }
    else {
      fVar4 = prt->velocity[2];
      fVar7 = prt->position[0];
      fVar9 = prt->position[1];
      fVar8 = prt->color[3];
      fVar6 = prt->velocity[0];
      fVar3 = prt->velocity[1];
      fVar5 = prt->alp_step;
      prt->velocity[2] = fVar4 + 0.0;
      prt->position[2] = prt->position[2] + fVar4;
      prt->lifetime = iVar1 + -1;
      prt->position[0] = fVar7 + fVar6;
      prt->position[1] = fVar9 + fVar3;
      prt->color[3] = fVar8 + fVar5;
    }
    iVar2 = iVar2 + -1;
    prt = prt + 1;
  } while (-1 < iVar2);
  return;
}

void add_particle2(int type, HEAT_HAZE *hh, float *pos, float *vel, float r, float g, float b, float a) {
	PARTICLE *p;
	
  int iVar1;
  PARTICLE *pPVar2;
  float fVar3;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
  fVar3 = *pos;
  pPVar2 = (hh->particles).field0_0x0.m_aData + hh->head;
  pPVar2->lifetime = (int)(short)hh->blife;
  pPVar2->position[0] = fVar3;
  iVar1 = hh->head;
  pPVar2->position[1] = pos[1];
  fVar3 = pos[2];
  pPVar2->position[3] = 1.0;
  pPVar2->position[2] = fVar3;
  pPVar2->velocity[0] = *vel;
  pPVar2->velocity[1] = vel[1];
  fVar3 = vel[2];
  pPVar2->color[0] = r;
  pPVar2->color[1] = g;
  pPVar2->color[2] = b;
  pPVar2->alp_step = a;
  pPVar2->velocity[2] = fVar3;
  pPVar2->velocity[3] = 0.0;
  pPVar2->color[3] = 0.0;
  hh->head = (iVar1 + 1) % 200;
  return;
}

void update_particles2(HEAT_HAZE *hh, float lng, float arate) {
	int i;
	float a;
	float f;
	float f2;
	float center;
	
  int iVar1;
  float fVar2;
  HEAT_HAZE *pHVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
  fVar2 = DAT_003edd2c;
                    /* end of inlined section */
  fVar11 = arate;
  if ((lng <= 800.0) && (fVar11 = 0.0, 500.0 <= lng)) {
    fVar11 = ((lng - 500.0) / 300.0) * arate;
  }
  iVar4 = 199;
  pHVar3 = hh;
  do {
    fVar7 = DAT_003edd30;
    iVar1 = (pHVar3->particles).field0_0x0.m_aData[0].lifetime;
    if (iVar1 == 0) {
      (pHVar3->particles).field0_0x0.m_aData[0].color[3] = 0.0;
    }
    else {
      fVar6 = (pHVar3->particles).field0_0x0.m_aData[0].position[1];
      fVar5 = (pHVar3->particles).field0_0x0.m_aData[0].position[2];
      fVar8 = (pHVar3->particles).field0_0x0.m_aData[0].velocity[1];
      fVar9 = (float)((short)hh->blife - iVar1) / (float)(int)(short)hh->blife;
      fVar10 = (pHVar3->particles).field0_0x0.m_aData[0].velocity[2];
      (pHVar3->particles).field0_0x0.m_aData[0].position[0] =
           (pHVar3->particles).field0_0x0.m_aData[0].position[0] +
           (pHVar3->particles).field0_0x0.m_aData[0].velocity[0];
      (pHVar3->particles).field0_0x0.m_aData[0].position[1] = fVar6 + fVar8;
      (pHVar3->particles).field0_0x0.m_aData[0].position[2] = fVar5 + fVar10;
      if (fVar9 <= fVar2) {
        fVar7 = ((pHVar3->particles).field0_0x0.m_aData[0].alp_step * fVar9) / fVar2;
      }
      else {
        fVar7 = ((pHVar3->particles).field0_0x0.m_aData[0].alp_step * (1.0 - fVar9)) / fVar7;
      }
      (pHVar3->particles).field0_0x0.m_aData[0].color[3] = fVar7 * fVar11;
      (pHVar3->particles).field0_0x0.m_aData[0].lifetime = iVar1 + -1;
    }
    iVar4 = iVar4 + -1;
    pHVar3 = (HEAT_HAZE *)((pHVar3->particles).field0_0x0.m_aData + 1);
  } while (-1 < iVar4);
  return;
}

void* ContHeatHaze(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate) {
	static float pcnt1;
	static float pcnt2;
	int n1;
	int i;
	float f;
	float fw1;
	float lng;
	float escl;
	float wpos[4];
	float local_clip[4][4];
	float local_world[4][4];
	float local_screen[4][4];
	float work[4][4];
	float ppos[4];
	float pvel[4];
	GRA3DCAMERA *pCam;
	float &cam_dir[4];
	float &cam_pos[4];
	float zero_vec[4];
	float fx;
	float fy;
	float fz;
	float rx;
	float rz;
	float fx;
	float fy;
	float fz;
	float rate;
	float fx;
	float fy;
	float fz;
	float rate;
	
  uint uVar1;
  double dVar2;
  GRA3DCAMERA *pGVar3;
  float (*pafVar4) [4];
  int iVar5;
  fixed_array<HEAT_HAZE,4> *pfVar6;
  int iVar7;
  uchar alp;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float wpos [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float work [4] [4];
  float ppos [4];
  float pvel [4];
  float zero_vec [4];
  float local_d0;
  undefined4 local_cc;
  float rx;
  float rz;
  int local_b8;
  float (*cam_dir) [4];
  
  local_b8 = st;
  memset(ppos,0,0x10);
  ppos[3] = 1.0;
  memset(pvel,0,0x10);
  pGVar3 = gra3dGetCamera__Fv();
  cam_dir = gra3dcamGetDirection__Fv();
  pafVar4 = gra3dcamGetPosition__Fv();
  memset(zero_vec,0,0x10);
  fVar8 = DAT_003edd34;
  zero_vec[3] = 1.0;
  if (addr == (void *)0x0) {
    printf("Particle Buffer is Full : in ContHeatHaze()\n");
    return (void *)0x0;
  }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
  *(ushort *)((int)addr + 0x3e88) = *(ushort *)((int)addr + 0x3e88) | 0xff;
  if (type == 0) {
    return addr;
  }
  if (init_hhaze != 0) {
    pcnt1_1134 = 0;
    pcnt2_1135 = 0;
    pfVar6 = &ene_particle;
    iVar5 = 0;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar5,4);
      ((HEAT_HAZE *)pfVar6)->flag = 0;
                    /* end of inlined section */
      iVar7 = iVar5 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar5,4);
      ((HEAT_HAZE *)pfVar6)->cnt = 0;
                    /* end of inlined section */
      pfVar6 = (fixed_array<HEAT_HAZE,4> *)((int)pfVar6 + 0x3e90);
      iVar5 = iVar7;
    } while (iVar7 < 4);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(0,1);
    amu_particle.field0_0x0.m_aData[0].flag = 0;
    _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(0,1);
    amu_particle.field0_0x0.m_aData[0].cnt = 0;
                    /* end of inlined section */
    init_hhaze = 0;
  }
  if (type == 2) {
    GetTrgtRot__FPCfT0Pfi(zero_vec,(float *)cam_dir,&local_d0,3);
    sceVu0UnitMatrix(work);
    work[0][0] = pGVar3->fFov * 25.0;
    work[1][1] = work[0][0];
    work[2][2] = work[0][0];
    sceVu0RotMatrixX(local_d0,work,work);
    sceVu0RotMatrixY(local_cc,work,work);
    sceVu0TransMatrix(local_world,work,pos);
    sceVu0MulMatrix(local_screen,pGVar3->matWorldScreen,local_world);
    sceVu0MulMatrix(local_clip,pGVar3->matWorldClipPolygon,local_world);
  }
  else if (type < 3) {
    if (type == 1) {
LAB_00155918:
      if (pos2 != (float *)0x0) {
        Get2PosRot2__FPCfT0PfT2(pos2,pos,&rx,&rz);
      }
      fVar8 = *pos - (*pafVar4)[0];
      fVar9 = pos[1] - (*pafVar4)[1];
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
      fVar10 = pos[2] - (*pafVar4)[2];
                    /* inlined from ../graph3d/g3dxVu0.h */
      _qmtc2(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (type < 5) goto LAB_00155918;
  if (type == 2) {
                    /* inlined from ../graph3d/g3dxVu0.h */
    wpos[2] = pos[2];
    wpos[3] = pos[3];
    wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
    wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 20.0;
    fVar9 = ((float)(int)*(short *)((int)addr + 0x3e8c) * 80.0) /
            (float)(int)*(short *)((int)addr + 0x3e8a);
    alp = (uchar)(int)fVar9;
    if (2.147484e+09 <= fVar9) {
      alp = (uchar)(int)(fVar9 - 2.147484e+09);
    }
    SubHalo__FPfiiUiUcUcUcUcf
              (wpos,0,0,0,'0','0',0xff,alp,
               ((float)(int)*(short *)((int)addr + 0x3e8c) * 0.5) /
               (float)(int)*(short *)((int)addr + 0x3e8a));
    fVar9 = size / pGVar3->fFov;
    uVar1 = (uint)sys_wrk.count;
LAB_00155ed8:
    iVar5 = draw_distortion_particles__FPA3_A3_fT0iiP8PARTICLEffi
                      ((float (*) [4] [4])local_screen,(float (*) [4] [4])local_clip,uVar1 & 1,200,
                       (PARTICLE *)addr,fVar9,-1.0,type);
    *(short *)((int)addr + 0x3e8c) = (short)iVar5;
  }
  else if (type < 3) {
    if (type == 1) {
                    /* inlined from ../graph3d/g3dxVu0.h */
      wpos[2] = pos[2];
      wpos[3] = pos[3];
      wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
      wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 10.0;
      SubHalo__FPfiiUiUcUcUcUcf(wpos,1,0,0,'(','(','n','n',DAT_003edd38);
      uVar1 = (uint)sys_wrk.count;
      fVar9 = (size * fVar8) / pGVar3->fFov;
      goto LAB_00155ed8;
    }
  }
  else {
    if (type == 3) {
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
      fVar8 = *pos - (*pafVar4)[0];
      fVar10 = pos[1] - (*pafVar4)[1];
      fVar9 = pos[2] - (*pafVar4)[2];
                    /* inlined from ../graph3d/g3dxVu0.h */
      _qmtc2(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (type == 4) {
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
      fVar8 = *pos - (*pafVar4)[0];
      fVar10 = pos[1] - (*pafVar4)[1];
      fVar9 = pos[2] - (*pafVar4)[2];
                    /* inlined from ../graph3d/g3dxVu0.h */
      _qmtc2(fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar5 = EffWrkStopFlgGet__Fv();
  fVar12 = DAT_003edd74;
  fVar10 = DAT_003edd6c;
  fVar9 = DAT_003edd64;
  if (iVar5 != 0) {
    return addr;
  }
  if (local_b8 != 0) goto LAB_0015641c;
  if (type == 2) {
    iVar5 = 0;
    fVar11 = 0.5;
    fVar8 = DAT_003edd68;
    fVar13 = DAT_003edd70;
    do {
                    /* inlined from effect.h */
      iVar5 = iVar5 + 1;
      iVar7 = rand();
                    /* end of inlined section */
      ppos[1] = 0.0;
                    /* inlined from effect.h */
      ppos[0] = ((float)iVar7 / fVar9 - fVar11) * fVar8;
      iVar7 = rand();
      ppos[2] = ((float)iVar7 / fVar9 - fVar11) * fVar8;
      iVar7 = rand();
      pvel[0] = ((float)iVar7 / fVar9 - fVar11) * fVar10;
      iVar7 = rand();
      pvel[1] = fVar12 - ((float)iVar7 / fVar9) * fVar13;
      iVar7 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
      pvel[2] = ((float)iVar7 / fVar9 - fVar11) * fVar10;
                    /* end of inlined section */
      add_particle__FiP9HEAT_HAZEPfT2ffff(2,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
    } while (iVar5 < 1);
    iVar5 = *(int *)((int)addr + 0x3e84);
LAB_00156414:
    iVar5 = iVar5 + 1;
  }
  else if (type < 3) {
    uVar1 = *(uint *)((int)addr + 0x3e84);
    if (type == 1) {
      iVar5 = uVar1 + 1;
      if ((((int)uVar1 / 0x19 & 1U) == 0) && (iVar5 = uVar1 + 1, (uVar1 & 1) == 0)) {
                    /* inlined from effect.h */
        iVar5 = rand();
        fVar9 = DAT_003edd58;
        fVar8 = DAT_003edd54;
        dVar2 = DAT_003a6e40;
        fVar10 = 0.5;
                    /* end of inlined section */
        ppos[1] = 0.0;
                    /* inlined from effect.h */
        ppos[0] = ((float)iVar5 / DAT_003edd54 - 0.5) * DAT_003edd58;
        iVar5 = rand();
        ppos[2] = ((float)iVar5 / fVar8 - fVar10) * fVar9;
        iVar5 = rand();
        pvel[0] = (float)((double)((float)iVar5 / fVar8 - fVar10) * dVar2);
        iVar5 = rand();
        pvel[1] = DAT_003edd60 - ((float)iVar5 / fVar8) * DAT_003edd5c;
        iVar5 = rand();
        pvel[2] = (float)((double)((float)iVar5 / fVar8 - fVar10) * dVar2);
                    /* end of inlined section */
                    /* end of inlined section */
        add_particle__FiP9HEAT_HAZEPfT2ffff(1,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
        iVar5 = *(int *)((int)addr + 0x3e84);
        goto LAB_00156414;
      }
    }
    else {
      iVar5 = uVar1 + 1;
    }
  }
  else if (type == 3) {
    iVar5 = *(uint *)((int)addr + 0x3e84) + 1;
    if ((*(uint *)((int)addr + 0x3e84) & 1) == 0) {
                    /* inlined from effect.h */
      iVar5 = rand();
      fVar9 = DAT_003edd78;
      fVar12 = 1.5;
                    /* end of inlined section */
      ppos[1] = 0.0;
                    /* inlined from effect.h */
      ppos[0] = ((float)iVar5 / DAT_003edd78 - 0.5) * 1.5 * fVar8;
      fVar10 = DAT_003edd7c;
      iVar5 = rand();
      ppos[2] = ((float)iVar5 / fVar9 - 0.5) * fVar12 * fVar8;
      iVar5 = rand();
      pvel[0] = ((float)iVar5 / fVar9 - 0.5) * fVar10 * fVar8;
      iVar5 = rand();
      pvel[1] = (DAT_003edd84 - ((float)iVar5 / fVar9) * DAT_003edd80) * fVar8;
      iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
      fVar9 = (float)iVar5 / fVar9;
      iVar5 = 3;
                    /* end of inlined section */
                    /* end of inlined section */
LAB_001563fc:
                    /* inlined from effect.h */
      pvel[2] = (fVar9 - 0.5) * fVar10 * fVar8;
                    /* end of inlined section */
      add_particle2__FiP9HEAT_HAZEPfT2ffff(iVar5,(HEAT_HAZE *)addr,ppos,pvel,r,g,b,a);
      iVar5 = *(int *)((int)addr + 0x3e84);
      goto LAB_00156414;
    }
  }
  else {
    uVar1 = *(uint *)((int)addr + 0x3e84);
    if (type == 4) {
      iVar5 = uVar1 + 1;
      if ((uVar1 & 3) == 0) {
                    /* inlined from effect.h */
        iVar5 = rand();
        fVar9 = DAT_003edd88;
        fVar12 = 1.5;
                    /* end of inlined section */
        ppos[1] = 0.0;
                    /* inlined from effect.h */
        ppos[0] = ((float)iVar5 / DAT_003edd88 - 0.5) * 1.5 * fVar8;
        fVar10 = DAT_003edd8c;
        iVar5 = rand();
        ppos[2] = ((float)iVar5 / fVar9 - 0.5) * fVar12 * fVar8;
        iVar5 = rand();
        pvel[0] = ((float)iVar5 / fVar9 - 0.5) * fVar10 * fVar8;
        iVar5 = rand();
        pvel[1] = (DAT_003edd94 - ((float)iVar5 / fVar9) * DAT_003edd90) * fVar8;
        iVar5 = rand();
                    /* inlined from effect.h */
        fVar9 = (float)iVar5 / fVar9;
                    /* end of inlined section */
        iVar5 = 4;
                    /* end of inlined section */
        goto LAB_001563fc;
      }
    }
    else {
      iVar5 = uVar1 + 1;
    }
  }
  *(int *)((int)addr + 0x3e84) = iVar5;
LAB_0015641c:
  if (0 < type) {
    if (type < 3) {
      if (local_b8 != 0) {
        update_particles__FP8PARTICLE((PARTICLE *)addr);
        update_particles__FP8PARTICLE((PARTICLE *)addr);
        update_particles__FP8PARTICLE((PARTICLE *)addr);
        update_particles__FP8PARTICLE((PARTICLE *)addr);
      }
      update_particles__FP8PARTICLE((PARTICLE *)addr);
    }
    else if (type < 5) {
      if (local_b8 == 0) {
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
      }
      else {
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
        update_particles2__FP9HEAT_HAZEff((HEAT_HAZE *)addr,0.0,arate);
      }
    }
  }
  return addr;
}

void SetPartInit(HEAT_HAZE *addr, int type, int lifetime) {
	int j;
	
  ushort uVar1;
  HEAT_HAZE *pHVar2;
  int iVar3;
  ushort uVar4;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
  iVar3 = 199;
  pHVar2 = addr;
  do {
    iVar3 = iVar3 + -1;
    (pHVar2->particles).field0_0x0.m_aData[0].position[0] = 0.0;
    (pHVar2->particles).field0_0x0.m_aData[0].position[1] = 0.0;
    (pHVar2->particles).field0_0x0.m_aData[0].position[2] = 0.0;
    (pHVar2->particles).field0_0x0.m_aData[0].position[3] = 1.0;
    (pHVar2->particles).field0_0x0.m_aData[0].color[3] = 0.0;
    (pHVar2->particles).field0_0x0.m_aData[0].lifetime = 0;
    pHVar2 = (HEAT_HAZE *)((pHVar2->particles).field0_0x0.m_aData + 1);
  } while (-1 < iVar3);
  addr->flag = 1;
  addr->head = 0;
  addr->cnt = 0;
  addr->disp = 0;
  if (5 < type - 1U) {
    return;
  }
  uVar4 = (ushort)lifetime;
  switch(type) {
  case 1:
    uVar1 = 100;
    uVar4 = 200;
    break;
  case 2:
    uVar1 = 200;
    goto LAB_0015662c;
  case 3:
    addr->blife = uVar4;
    addr->max = (ushort)(lifetime / 2);
    return;
  case 4:
    uVar1 = 0x4b;
    uVar4 = 300;
    break;
  case 5:
    uVar1 = (ushort)(lifetime << 1);
LAB_0015662c:
    addr->blife = uVar4;
    addr->max = uVar1;
    return;
  case 6:
    addr->blife = uVar4;
    if (lifetime < 0) {
      lifetime = lifetime + 7;
    }
    addr->max = (ushort)(lifetime >> 3);
    return;
  }
  addr->blife = uVar4;
  addr->max = uVar1;
  return;
}

void* GetEnePartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  fixed_array<HEAT_HAZE,4> *addr_00;
  int iVar2;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    addr_00 = &ene_particle;
    bVar1 = false;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    iVar2 = 0;
    do {
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar2,4);
                    /* end of inlined section */
      if (((HEAT_HAZE *)addr_00)->flag == 0) {
        SetPartInit__FP9HEAT_HAZEii((HEAT_HAZE *)addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      addr_00 = (fixed_array<HEAT_HAZE,4> *)((int)addr_00 + 0x3e90);
    } while ((iVar2 + 1 < 4) && (iVar2 = iVar2 + 1, !bVar1));
  }
  return addr;
}

void* GetAmuPartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  fixed_array<HEAT_HAZE,1> *addr_00;
  int iVar2;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    addr_00 = &amu_particle;
    bVar1 = false;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    iVar2 = 0;
    do {
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar2,1);
                    /* end of inlined section */
      if (((HEAT_HAZE *)addr_00)->flag == 0) {
        SetPartInit__FP9HEAT_HAZEii((HEAT_HAZE *)addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      addr_00 = (fixed_array<HEAT_HAZE,1> *)((HEAT_HAZE *)addr_00 + 1);
    } while ((iVar2 + 1 < 1) && (iVar2 = iVar2 + 1, !bVar1));
  }
  return addr;
}

void* GetTorchPartAddr(void *addr, int type, int lifetime) {
	int i;
	int n;
	void *ret;
	
  bool bVar1;
  int iVar2;
  fixed_array<HEAT_HAZE,5> *addr_00;
  
  if (addr == (void *)0x0) {
    addr = (HEAT_HAZE *)0x0;
    addr_00 = &torch_particle;
    iVar2 = 0;
    bVar1 = false;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Z9HEAT_HAZE_UiUi_PX01(iVar2,5);
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      if (((HEAT_HAZE *)addr_00)->flag == 0) {
        printf("Set Torch work no = [%d]\n");
        SetPartInit__FP9HEAT_HAZEii((HEAT_HAZE *)addr_00,type,lifetime);
        bVar1 = true;
        addr = addr_00;
      }
      addr_00 = (fixed_array<HEAT_HAZE,5> *)((int)addr_00 + 0x3e90);
    } while ((iVar2 < 5) && (!bVar1));
  }
  return addr;
}

static void ItemEffectCtrlInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&ItemEffectList,0x40);
  return;
}

static void ItemEffectReqSub(float *Pos, int ItemNo, int Type) {
	SINGLE_LINK_LIST *pList;
	ITEM_EFFECT_DATA ItemEffectData;
	
  ITEM_EFFECT_DATA ItemEffectData;
  
  ItemEffectData.fCounter = 0.0;
  ItemEffectData.Flow = 0;
  ItemEffectData.Rot = 0.0;
  ItemEffectData.ScaleCounter0 = 0;
  ItemEffectData.ScaleCounter1 = 0;
  ItemEffectData.AlphaCounter0 = 0;
  ItemEffectData.AlphaCounter1 = 0;
                    /* inlined from ../graph3d/g3dxVu0.h */
  ItemEffectData.Position[2] = Pos[2];
  ItemEffectData.Position[3] = Pos[3];
  ItemEffectData.Position[0] = (float)*(undefined8 *)Pos;
  ItemEffectData.Position[1] = (float)((ulong)*(undefined8 *)Pos >> 0x20);
  ItemEffectData.ItemNo = ItemNo;
  ItemEffectData.Type = Type;
                    /* end of inlined section */
  SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&ItemEffectList,&ItemEffectData);
  return;
}

void ItemEffectReq(float *Pos, int ItemNo, int EffectType) {
  ItemEffectReqSub__FPfii(Pos,ItemNo,EffectType);
  return;
}

void ItemEffectCut(int ItemNo) {
	SINGLE_LINK_LIST *pList;
	SLL_CELL *pCell;
	
  void *pvVar1;
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var2;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  pCell = (_SLL_CELL *)0x0;
  if (ItemEffectList.RegCount != 0) {
    pCell = ItemEffectList.pBeginCell;
  }
                    /* end of inlined section */
  if (pCell != (_SLL_CELL *)0x0) {
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var2 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var2 = pCell->pNext;
    }
    while( true ) {
                    /* end of inlined section */
      pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
      if (*(int *)((int)pvVar1 + 0x2c) == ItemNo) {
        SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(&ItemEffectList,pCell);
      }
      if (p_Var2 == (_SLL_CELL *)0x0) break;
      pCell = p_Var2;
      p_Var2 = p_Var2->pNext;
    }
  }
  return;
}

void ItemEffectAllCut() {
  SingleLinkListAllCellFree__FP16SINGLE_LINK_LIST(&ItemEffectList);
  return;
}

static int ItemEffectGetChangeVal(int NowFrame, int TotalFrame, int MinVal, int MaxVal) {
	int RetVal;
	float Progress;
	
  float fVar1;
  
  if (NowFrame < TotalFrame) {
    if (TotalFrame < 1) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = (float)NowFrame / (float)TotalFrame;
    }
    return (int)((float)(MaxVal - MinVal) * fVar1 + (float)MinVal);
  }
  if (TotalFrame < 1) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (float)(NowFrame - TotalFrame) / (float)TotalFrame;
  }
  return (int)((float)(MinVal - MaxVal) * fVar1 + (float)MaxVal);
}

void ItemEffectDrawOne(int ItemNo) {
	DRAW_ENV DrawEnv00;
	DRAW_ENV DrawEnv01;
	SLL_CELL *pCell;
	ITEM_EFFECT_DATA *pRetData;
	SINGLE_LINK_LIST *pSLL;
	DRAW_ENV *pDrawEnv;
	int flow;
	int flg;
	float rot_z;
	float cnt;
	float wait;
	float out;
	float rot_x;
	float rot_y;
	float size;
	float wpos[4];
	sceVu0FMATRIX wlm[5];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	DRAW_ENV *pDrawEnv;
	float LocalWorld[4][4];
	GRA3DCAMERA *pCam;
	float &CamPos[4];
	float RotX;
	float RotY;
	
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  GRA3DCAMERA *pGVar4;
  float (*pafVar5) [4];
  int iVar6;
  int iVar7;
  int iVar8;
  _SLL_CELL *pCell;
  float (*paafVar9) [4] [4];
  float (*wlm_00) [4] [4];
  float (*wlm_01) [4] [4];
  float (*wlm_02) [4] [4];
  uchar uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  DRAW_ENV DrawEnv00;
  DRAW_ENV DrawEnv01;
  float rot_x;
  float rot_y;
  float wpos [4];
  float wlm [5] [4] [4];
  float LocalWorld [4] [4];
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
  DrawEnv00.tex1 = DAT_003a6e88;
  DrawEnv00.alpha = DAT_003a6e90;
  DrawEnv00.zbuf = DAT_003a6e98;
  DrawEnv00.test = DAT_003a6ea0;
  DrawEnv00.clamp = DAT_003a6ea8;
  DrawEnv00.prim = DAT_003a6eb0;
  DrawEnv01.tex1 = DAT_003a6eb8;
  DrawEnv01.alpha = DAT_003a6ec0;
  DrawEnv01.zbuf = DAT_003a6ec8;
  DrawEnv01.test = DAT_003a6ed0;
  DrawEnv01.clamp = DAT_003a6ed8;
                    /* inlined from ../../common/SingleLinkList.h */
  DrawEnv01.prim = _DAT_003a6ee0;
  pCell = (_SLL_CELL *)0x0;
  if (ItemEffectList.RegCount != 0) {
    pCell = ItemEffectList.pBeginCell;
  }
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
  while ((puVar3 = (undefined8 *)0x0, pCell != (_SLL_CELL *)0x0 &&
         (puVar3 = (undefined8 *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell),
         *(int *)((int)puVar3 + 0x2c) != ItemNo))) {
    pCell = pCell->pNext;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  if (*(int *)(puVar3 + 6) != 0) {
    pGVar4 = gra3dGetCamera__Fv();
    pafVar5 = gra3dcamGetPosition__Fv();
    iVar8 = *(int *)((int)puVar3 + 0x1c) + 1;
    *(int *)((int)puVar3 + 0x1c) = iVar8;
    if (0x9a < iVar8) {
      *(undefined4 *)((int)puVar3 + 0x1c) = 0;
    }
    iVar8 = *(int *)(puVar3 + 4);
    *(int *)(puVar3 + 4) = iVar8 + 1;
    if (0x2c < iVar8 + 1) {
      *(undefined4 *)(puVar3 + 4) = 0;
    }
    iVar8 = *(int *)((int)puVar3 + 0x24) + 1;
    *(int *)((int)puVar3 + 0x24) = iVar8;
    if (0x8e < iVar8) {
      *(undefined4 *)((int)puVar3 + 0x24) = 0;
    }
    iVar8 = *(int *)(puVar3 + 5);
    *(int *)(puVar3 + 5) = iVar8 + 1;
    if (0x4a < iVar8 + 1) {
      *(undefined4 *)(puVar3 + 5) = 0;
    }
    iVar8 = ItemEffectGetChangeVal__Fiiii(*(int *)((int)puVar3 + 0x1c),0x4d,0x16,0x16);
    iVar6 = ItemEffectGetChangeVal__Fiiii(*(int *)(puVar3 + 4),0x16,0x3b,0x50);
    fVar18 = (float)iVar6;
    iVar6 = ItemEffectGetChangeVal__Fiiii(*(int *)((int)puVar3 + 0x24),0x47,0x20,0x44);
    iVar7 = ItemEffectGetChangeVal__Fiiii(*(int *)(puVar3 + 5),0x25,0x19,0x3b);
    Get2PosRot__FPCfT0PfT2((float *)pafVar5,pGVar4->vTarget,&rot_y,&rot_x);
    fVar18 = fVar18 / 100.0;
    sceVu0UnitMatrix(LocalWorld);
    fVar15 = ((float)iVar8 / 100.0) * 100.0;
    sceVu0RotMatrixX(rot_y,LocalWorld,LocalWorld);
    sceVu0RotMatrixY(rot_x,LocalWorld,LocalWorld);
    fVar18 = fVar18 * 100.0;
    sceVu0TransMatrix(LocalWorld,LocalWorld,puVar3);
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              (LocalWorld,&DrawEnv01,0x36,fVar15,fVar15,'6','B',0xb5,(uchar)iVar6);
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              (LocalWorld,&DrawEnv01,0x38,fVar18,fVar18,'d','{',0xea,(uchar)iVar7);
    goto LAB_00157404;
  }
  pGVar4 = gra3dGetCamera__Fv();
  pafVar5 = gra3dcamGetPosition__Fv();
  fVar18 = 0.0;
                    /* inlined from ../graph3d/g3dxVu0.h */
  wpos[2] = *(float *)(puVar3 + 1);
  wpos[3] = *(float *)((int)puVar3 + 0xc);
  wpos[0] = (float)*puVar3;
  wpos[1] = (float)((ulong)*puVar3 >> 0x20);
                    /* end of inlined section */
  iVar8 = *(int *)(puVar3 + 2);
  fVar12 = *(float *)(puVar3 + 3);
  fVar15 = *(float *)((int)puVar3 + 0x14);
  iVar6 = GetCornHitCheck__FPff(wpos,1200.0);
  if (iVar6 == 0) {
    iVar7 = EffWrkStopFlgGet__Fv();
    if ((iVar7 == 0) && (fVar15 = fVar15 + DAT_003edd98, DAT_003edd9c < fVar15)) {
      fVar15 = fVar15 - DAT_003edda0;
    }
    fVar16 = 60.0;
    fVar14 = 30.0;
    fVar11 = fVar14;
    if (iVar8 == 1) {
LAB_00156d78:
      bVar1 = fVar11 < fVar12;
      fVar14 = fVar11;
    }
    else {
      if (1 < iVar8) {
LAB_00156d58:
        fVar13 = fVar12;
        fVar11 = fVar14;
        fVar17 = fVar16;
        if (iVar8 != 2) goto LAB_00156d94;
        goto LAB_00156d78;
      }
      fVar13 = fVar12;
      fVar17 = fVar16;
      if (iVar8 != 0) goto LAB_00156d94;
      bVar1 = 60.0 < fVar12;
      fVar11 = 60.0;
    }
LAB_00156d80:
    fVar13 = fVar11;
    fVar11 = fVar14;
    fVar17 = fVar16;
    if (!bVar1) {
      fVar13 = fVar12;
    }
  }
  else {
    iVar7 = EffWrkStopFlgGet__Fv();
    if ((iVar7 == 0) && (fVar15 = fVar15 + DAT_003edda4, DAT_003edda8 < fVar15)) {
      fVar15 = fVar15 - DAT_003eddac;
    }
    fVar16 = 10.0;
    fVar14 = 20.0;
    fVar11 = fVar14;
    if (iVar8 == 1) goto LAB_00156d78;
    if (1 < iVar8) goto LAB_00156d58;
    fVar13 = fVar12;
    fVar11 = 20.0;
    fVar17 = 10.0;
    if (iVar8 == 0) {
      bVar1 = 10.0 < fVar12;
      fVar11 = 10.0;
      goto LAB_00156d80;
    }
  }
LAB_00156d94:
  Get2PosRot__FPCfT0PfT2((float *)pafVar5,pGVar4->vTarget,&rot_x,&rot_y);
  if (iVar8 == 1) {
    fVar18 = fVar13 / fVar11;
    if (fVar11 <= fVar13) {
      fVar13 = 0.0;
      iVar8 = 2;
    }
    else {
LAB_00156e48:
      iVar7 = EffWrkStopFlgGet__Fv();
      if (iVar7 == 0) {
        fVar13 = fVar13 + 1.0;
      }
    }
  }
  else if (iVar8 < 2) {
    if (iVar8 == 0) {
      fVar18 = 0.0;
      if (fVar13 < fVar17) goto LAB_00156e48;
      fVar13 = 0.0;
      iVar8 = 1;
    }
  }
  else if (iVar8 == 2) {
    fVar18 = (fVar11 - fVar13) / fVar11;
    if (fVar13 < fVar11) goto LAB_00156e48;
    fVar13 = 0.0;
    iVar8 = 0;
  }
  uVar2 = DAT_003eddb0;
  if (iVar6 == 0) {
    sceVu0UnitMatrix(wlm);
    sceVu0RotMatrixX(rot_x,wlm,wlm);
    sceVu0RotMatrixY(rot_y,wlm,wlm);
    sceVu0TransMatrix(wlm,wlm,wpos);
    paafVar9 = wlm[1];
    sceVu0UnitMatrix(paafVar9);
    sceVu0RotMatrixZ(fVar15,paafVar9,paafVar9);
    sceVu0RotMatrixX(rot_x,paafVar9,paafVar9);
    sceVu0RotMatrixY(rot_y,paafVar9,paafVar9);
    sceVu0TransMatrix(paafVar9,paafVar9,wpos);
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])paafVar9,&DrawEnv00,0x50,fVar18 * 120.0,fVar18 * 120.0,0xb4,0xb4,0xb4,
               'P');
    fVar18 = fVar18 * 48.0;
    uVar10 = (uchar)(int)fVar18;
    if (2.147484e+09 <= fVar18) {
      uVar10 = (uchar)(int)(fVar18 - 2.147484e+09);
    }
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])wlm,&DrawEnv00,0x52,54.0,54.0,0xb4,0xb4,0xb4,uVar10);
    *(float *)((int)puVar3 + 0x14) = fVar15;
  }
  else {
    sceVu0UnitMatrix(wlm);
    sceVu0RotMatrixX(rot_x,wlm,wlm);
    sceVu0RotMatrixY(rot_y,wlm,wlm);
    sceVu0TransMatrix(wlm,wlm,wpos);
    paafVar9 = wlm[1];
    sceVu0UnitMatrix(paafVar9);
    sceVu0RotMatrixZ(fVar15,paafVar9,paafVar9);
    sceVu0RotMatrixX(rot_x,paafVar9,paafVar9);
    sceVu0RotMatrixY(rot_y,paafVar9,paafVar9);
    sceVu0TransMatrix(paafVar9,paafVar9,wpos);
    wlm_00 = wlm[2];
    sceVu0UnitMatrix(wlm_00);
    sceVu0RotMatrixX(fVar15,wlm_00,wlm_00);
    sceVu0RotMatrixY(uVar2,wlm_00,wlm_00);
    sceVu0TransMatrix(wlm_00,wlm_00,wpos);
    wlm_01 = wlm[3];
    sceVu0UnitMatrix(wlm_01);
    sceVu0RotMatrixY(fVar15,wlm_01,wlm_01);
    sceVu0RotMatrixZ(uVar2,wlm_01,wlm_01);
    sceVu0TransMatrix(wlm_01,wlm_01,wpos);
    wlm_02 = wlm[4];
    sceVu0UnitMatrix(wlm_02);
    sceVu0RotMatrixX(uVar2,wlm_02,wlm_02);
    sceVu0RotMatrixZ(fVar15,wlm_02,wlm_02);
    sceVu0TransMatrix(wlm_02,wlm_02,wpos);
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])paafVar9,&DrawEnv00,0x50,fVar18 * 150.0,fVar18 * 150.0,0xff,0xff,0xff,
               'P');
    fVar12 = fVar18 * 64.0;
    uVar10 = (uchar)(int)fVar12;
    if (2.147484e+09 <= fVar12) {
      uVar10 = (uchar)(int)(fVar12 - 2.147484e+09);
    }
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])wlm_00,&DrawEnv00,0x52,78.0,78.0,0xf0,0xf0,0xff,uVar10);
    fVar12 = fVar18 * 64.0;
    uVar10 = (uchar)(int)fVar12;
    if (2.147484e+09 <= fVar12) {
      uVar10 = (uchar)(int)(fVar12 - 2.147484e+09);
    }
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])wlm_01,&DrawEnv00,0x52,78.0,78.0,0xf0,0xff,0xf0,uVar10);
    fVar18 = fVar18 * 64.0;
    uVar10 = (uchar)(int)fVar18;
    if (2.147484e+09 <= fVar18) {
      uVar10 = (uchar)(int)(fVar18 - 2.147484e+09);
    }
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              ((float (*) [4])wlm_02,&DrawEnv00,0x52,78.0,78.0,0xff,0xf0,0xf0,uVar10);
    *(float *)((int)puVar3 + 0x14) = fVar15;
  }
  *(int *)(puVar3 + 2) = iVar8;
  *(float *)(puVar3 + 3) = fVar13;
LAB_00157404:
  gra3dSetGsRegisterDefault__Fv();
  return;
}

void SetEneFire(EFFECT_CONT *ec) {
	float r;
	float g;
	float b;
	float a;
	float s;
	float t;
	float ar;
	u_int col;
	u_int ty;
	float pos1[4];
	float pos2[4];
	
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  float *pfVar4;
  void *pvVar5;
  int type;
  float fVar6;
  float b;
  float fVar7;
  float fVar8;
  float fVar9;
  float size;
  float arate;
  float pos1 [4];
  float pos2 [4];
  
                    /* WARNING: Load size is inaccurate */
  uVar1 = *ec->pnt[1];
  uVar3 = uVar1 >> 0x18;
  if ((int)uVar3 < 0) {
    fVar8 = (float)(uVar3 & 1 | uVar1 >> 0x19);
    fVar8 = fVar8 + fVar8;
  }
  else {
    fVar8 = (float)uVar3;
  }
  uVar3 = uVar1 >> 0x10 & 0xff;
  if ((int)uVar3 < 0) {
    fVar9 = (float)(uVar1 >> 0x10 & 1 | uVar3 >> 1);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)uVar3;
  }
  b = (float)(uVar1 >> 8 & 0xff);
  uVar3 = uVar1 & 0xff;
  if ((int)uVar3 < 0) {
    fVar7 = (float)(uVar1 & 1 | uVar3 >> 1);
    fVar7 = fVar7 + fVar7;
    pfVar4 = (float *)ec->pnt[2];
  }
  else {
    fVar7 = (float)uVar3;
    pfVar4 = (float *)ec->pnt[2];
  }
  uVar1 = (ec->dat).iv[3];
  size = *pfVar4;
  if ((int)uVar1 < 0) {
    fVar6 = (float)(uVar1 & 1 | uVar1 >> 1);
    fVar6 = fVar6 + fVar6;
    pfVar4 = (float *)ec->pnt[5];
  }
  else {
    fVar6 = (float)uVar1;
    pfVar4 = (float *)ec->pnt[5];
  }
  type = 4;
  arate = *pfVar4;
  if ((ec->dat).uc8[2] == '\0') {
    type = 3;
  }
                    /* inlined from ../graph3d/g3dxVu0.h */
  puVar2 = (undefined8 *)ec->pnt[0];
  pos1[2] = *(float *)(puVar2 + 1);
  pos1[3] = *(float *)((int)puVar2 + 0xc);
  pos1[0] = (float)*puVar2;
  pos1[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  puVar2 = (undefined8 *)ec->pnt[4];
  pfVar4 = pos2;
  if (puVar2 == (undefined8 *)0x0) {
    pvVar5 = GetEnePartAddr__FPvii(ec->pnt[3],type,(int)fVar6);
    ec->pnt[3] = pvVar5;
    pfVar4 = (float *)0x0;
  }
  else {
                    /* inlined from ../graph3d/g3dxVu0.h */
    pos2[2] = *(float *)(puVar2 + 1);
    pos2[3] = *(float *)((int)puVar2 + 0xc);
    pos2[0] = (float)*puVar2;
    pos2[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
    pvVar5 = GetEnePartAddr__FPvii(ec->pnt[3],type,(int)fVar6);
    ec->pnt[3] = pvVar5;
  }
  pvVar5 = ContHeatHaze__FPviPfT2iffffff(pvVar5,type,pos1,pfVar4,0,fVar8,fVar9,b,fVar7,size,arate);
  ec->pnt[3] = pvVar5;
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void CallAmuletFire() {
  amulet_fire_flow = 0;
  amulet_fire_cnt = 0;
  return;
}

void* ContTorch(void *addr, int type, float *pos, float *pos2, int st, float r, float g, float b, float a, float size, float arate, int tp2, float ar, float sr) {
	float rrate;
	float escl;
	float ysp1;
	float ysp2;
	int i;
	int j;
	float wind;
	float work[4][4];
	float local_clip[4][4];
	float local_world[4][4];
	float local_screen[4][4];
	float ppos[4];
	float pvel[4];
	float wpos[4];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	float fx;
	float fy;
	float fz;
	float rx;
	float rz;
	
  float (*pafVar1) [4];
  float fVar2;
  float fVar3;
  float fVar4;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float ppos [4];
  float pvel [4];
  float wpos [4];
  float rx;
  float rz;
  int local_c8;
  float local_c4;
  float local_c0;
  float ysp1;
  float ysp2;
  
  local_c8 = st;
  local_c4 = r;
  local_c0 = a;
  memset(ppos,0,0x10);
  ppos[3] = 1.0;
  memset(pvel,0,0x10);
  gra3dGetCamera__Fv();
  pafVar1 = gra3dcamGetPosition__Fv();
  init_torch = 0;
  ysp1 = DAT_003eddb4;
  ysp2 = DAT_003eddb8;
  if (addr != (void *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
    *(ushort *)((int)addr + 0x3e88) = *(ushort *)((int)addr + 0x3e88) | 0xff;
    if (pos2 != (float *)0x0) {
      Get2PosRot2__FPCfT0PfT2(pos2,pos,&rx,&rz);
    }
    fVar3 = *pos - (*pafVar1)[0];
    fVar4 = pos[1] - (*pafVar1)[1];
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
    fVar2 = pos[2] - (*pafVar1)[2];
                    /* inlined from ../graph3d/g3dxVu0.h */
    _qmtc2(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  printf("Particle Buffer is Full : in ContTorch()\n");
  return (void *)0x0;
}

void SetTorch(EFFECT_CONT *ec) {
	float pos[4];
	int st;
	int life;
	float tr;
	float tg;
	float tb;
	float sr;
	float ar;
	int torch_type;
	
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  uint tp2;
  int st;
  float b;
  float g;
  float sr;
  float r;
  float ar;
  float pos [4];
  
  st = 1;
  g = 6.0;
  b = 32.0;
  if ((ec->dat).uc8[2] == '\x03') {
    if ((ec->dat).uc8[3] == '\0') {
      tp2 = 3;
    }
    else {
      tp2 = 4;
      (ec->dat).uc8[3] = (ec->dat).uc8[3] + 0xff;
    }
  }
  else {
    tp2 = (uint)(ec->dat).uc8[2];
  }
  sr = 1.0;
                    /* WARNING: Load size is inaccurate */
  if ((float *)ec->pnt[2] != (float *)0x0) {
    sr = *ec->pnt[2];
  }
  ar = 1.0;
                    /* WARNING: Load size is inaccurate */
  if ((float *)ec->pnt[3] != (float *)0x0) {
    ar = *ec->pnt[3];
  }
  switch(tp2) {
  case 0:
    r = 80.0;
    g = 48.0;
    b = 16.0;
    st = 1;
    break;
  case 1:
    g = 32.0;
    st = 1;
    b = 80.0;
    r = 32.0;
    break;
  case 2:
    g = 6.0;
    st = 1;
    b = 60.0;
    r = 6.0;
    break;
  case 3:
    r = 80.0;
    g = 48.0;
    b = 16.0;
    st = 1;
    sr = DAT_003ede44;
    ar = DAT_003ede40;
    break;
  case 4:
    r = 80.0;
    st = 3;
    g = 48.0;
    b = 16.0;
    sr = 4.5;
    ar = 0.5;
    break;
  default:
    puVar2 = (undefined8 *)ec->pnt[0];
    r = g;
    goto LAB_00158358;
  }
                    /* inlined from ../graph3d/g3dxVu0.h */
  puVar2 = (undefined8 *)ec->pnt[0];
LAB_00158358:
  pos[2] = *(float *)(puVar2 + 1);
  pos[3] = *(float *)((int)puVar2 + 0xc);
  pos[0] = (float)*puVar2;
  pos[1] = (float)((ulong)*puVar2 >> 0x20);
                    /* end of inlined section */
  pvVar3 = GetTorchPartAddr__FPvii(ec->pnt[1],5,(int)(sr * 50.0));
  ec->pnt[1] = pvVar3;
  pvVar3 = ContTorch__FPviPfT2iffffffiff
                     (pvVar3,5,pos,(float *)0x0,st,r,g,b,128.0,DAT_003ede48,1.0,tp2,ar,sr);
  bVar1 = (ec->dat).uc8[1];
  ec->pnt[1] = pvVar3;
  if ((bVar1 & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void CloudOfDustCtrlInit(CLOUD_OF_DUST_CTRL *pCod, float *BasePos) {
	int i;
	
  float fVar1;
  float fVar2;
  float fVar3;
  CLOUD_OF_DUST_CTRL *pCVar4;
  int iVar5;
  int iVar6;
  
  if (pCod != (CLOUD_OF_DUST_CTRL *)0x0) {
    pCVar4 = pCod;
    iVar5 = 0;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].position[0] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].position[1] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].position[2] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].position[3] = 1.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].color[3] = 0.0;
                    /* end of inlined section */
      iVar6 = iVar5 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar5,0x1e);
      (pCVar4->particles).field0_0x0.m_aData[0].lifetime = 0;
                    /* end of inlined section */
      pCVar4 = (CLOUD_OF_DUST_CTRL *)((pCVar4->particles).field0_0x0.m_aData + 1);
      iVar5 = iVar6;
    } while (iVar6 < 0x1e);
                    /* inlined from ../graph3d/g3dxVu0.h */
    fVar1 = BasePos[1];
    fVar2 = BasePos[2];
    fVar3 = BasePos[3];
    pCod->Pos[0] = *BasePos;
    pCod->Pos[1] = fVar1;
    pCod->Pos[2] = fVar2;
    pCod->Pos[3] = fVar3;
                    /* end of inlined section */
    pCod->head = 0;
    pCod->BrakeRate = 0.75;
    pCod->cnt = 0;
    pCod->disp = 0;
    pCod->blife = 0;
  }
  return;
}

static void AddCloudOfDustRunParticle(CLOUD_OF_DUST_CTRL *pCod) {
	PARTICLE *pPart;
	
  float fVar1;
  float fVar2;
  int iVar3;
  PARTICLE *pPVar4;
  float fVar5;
  float fVar6;
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,0x1e);
  fVar6 = DAT_003ede50;
  fVar1 = DAT_003ede4c;
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  pPVar4 = (pCod->particles).field0_0x0.m_aData + pCod->head;
                    /* inlined from effect.h */
  fVar5 = 1000.0;
                    /* end of inlined section */
  pPVar4->position[3] = 1.0;
  pPVar4->position[0] = 0.0;
  pPVar4->position[1] = 0.0;
  fVar2 = DAT_003ede54;
                    /* inlined from effect.h */
  pPVar4->position[2] = 0.0;
  iVar3 = rand();
  pPVar4->velocity[0] = ((((float)iVar3 / fVar1) * 100.0 + fVar6) - fVar5) / 100.0;
  iVar3 = rand();
  pPVar4->velocity[1] = ((((float)iVar3 / fVar1) * 5.0 + fVar2) - fVar5) / 100.0;
  iVar3 = rand();
                    /* end of inlined section */
  pPVar4->acceleration[0] = 0.0;
                    /* inlined from effect.h */
  pPVar4->velocity[2] = ((((float)iVar3 / fVar1) * 100.0 + fVar6) - fVar5) / 100.0;
  iVar3 = rand();
                    /* end of inlined section */
  pPVar4->color[1] = 50.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pPVar4->color[2] = 47.0;
  pPVar4->color[3] = 23.0;
  pPVar4->color[0] = 50.0;
  pPVar4->acceleration[2] = 0.0;
  pPVar4->alp_step = 0.0;
                    /* inlined from effect.h */
  pPVar4->acceleration[1] = ((((float)iVar3 / fVar1) * 15.0 + fVar2) - fVar5) / fVar5;
  iVar3 = rand();
                    /* end of inlined section */
  pPVar4->Scale = 3.0;
                    /* inlined from effect.h */
  iVar3 = (int)(((float)iVar3 / fVar1) * 27.0 + 20.0);
                    /* end of inlined section */
  pPVar4->lifetime = iVar3;
                    /* inlined from effect.h */
  pPVar4->BaseLifeTime = iVar3;
                    /* end of inlined section */
  pCod->head = (pCod->head + 1) % 0x1e;
  return;
}

int UpdateCloudOfDustParticles(PARTICLE *pPtop, float BrakeRate, int StartAlpha, int EndAlpha, float StartScale, float EndScale) {
	int i;
	int LeftNum;
	float Progress;
	
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  if (pPtop != (PARTICLE *)0x0) {
    iVar2 = 0x1d;
    iVar3 = 0;
    do {
      if (pPtop->BaseLifeTime == 0) {
        fVar4 = 1.0;
      }
      else {
        fVar4 = 1.0 - (float)pPtop->lifetime / (float)pPtop->BaseLifeTime;
      }
      pfVar1 = pPtop->velocity;
      if (pPtop->lifetime == 0) {
        pPtop->color[3] = 0.0;
      }
      else {
        sceVu0AddVector(pPtop,pPtop,pfVar1);
        sceVu0ScaleVector(BrakeRate,pfVar1,pfVar1);
        sceVu0AddVector(pfVar1,pfVar1,pPtop->acceleration);
        iVar3 = iVar3 + 1;
        pPtop->lifetime = pPtop->lifetime + -1;
        pPtop->color[3] = (float)(EndAlpha - StartAlpha) * fVar4 + (float)StartAlpha;
        pPtop->Scale = (EndScale - StartScale) * fVar4 + StartScale;
      }
      iVar2 = iVar2 + -1;
      pPtop = pPtop + 1;
    } while (-1 < iVar2);
  }
  return iVar3;
}

static void* CloudOfDustCtrl(CLOUD_OF_DUST_CTRL *pCod, float size) {
	float work[4][4];
	float local_clip[4][4];
	float local_world[4][4];
	float local_screen[4][4];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	float RotX;
	float RotY;
	
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  int iVar2;
  CLOUD_OF_DUST_CTRL *pCVar3;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float RotX;
  float RotY;
  
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pCVar3 = (CLOUD_OF_DUST_CTRL *)0x0;
  if (pCod != (CLOUD_OF_DUST_CTRL *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,0x1e);
                    /* end of inlined section */
    Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
    sceVu0UnitMatrix(work);
    work[0][0] = 25.0;
    work[2][2] = 25.0;
    work[1][1] = 25.0;
    sceVu0RotMatrixX(RotX,work,work);
    sceVu0RotMatrixY(RotY,work,work);
    sceVu0TransMatrix(local_world,work,pCod->Pos);
    sceVu0MulMatrix((float (*) [4] [4])local_screen,pGVar1->matWorldScreen,local_world);
    sceVu0MulMatrix((float (*) [4] [4])local_clip,pGVar1->matWorldClipPolygon,local_world);
    iVar2 = EffWrkMonochroModeGet__Fv();
    iVar2 = draw_distortion_particles2__FPA3_A3_fT0iP8PARTICLEfUlUl
                      ((float (*) [4] [4])local_screen,(float (*) [4] [4])local_clip,0x1e,
                       (PARTICLE *)pCod,size / pGVar1->fFov,effdat[iVar2 + 0x10].tex0,0x44);
    pCod->disp = (ushort)iVar2;
    iVar2 = EffWrkStopFlgGet__Fv();
    pCVar3 = pCod;
    if ((iVar2 == 0) &&
       (iVar2 = UpdateCloudOfDustParticles__FP8PARTICLEfiiff
                          ((PARTICLE *)pCod,pCod->BrakeRate,0x17,0,DAT_003ede58,DAT_003ede5c),
       iVar2 == 0)) {
      pCVar3 = (CLOUD_OF_DUST_CTRL *)0x0;
      EFFECT_FREE__FPv(pCod);
    }
  }
  return pCVar3;
}

void SetDust(EFFECT_CONT *ec) {
	int ReqNum;
	int i;
	
  int iVar1;
  CLOUD_OF_DUST_CTRL *pCVar2;
  void *pvVar3;
  int iVar4;
  
                    /* inlined from effect.h */
  iVar1 = rand();
                    /* end of inlined section */
  pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
                    /* inlined from effect.h */
  iVar1 = (int)(((float)iVar1 / DAT_003ede60) * 4.0 + 3.0);
                    /* end of inlined section */
  if (pCVar2 == (CLOUD_OF_DUST_CTRL *)0x0) {
    pCVar2 = (CLOUD_OF_DUST_CTRL *)EFFECT_MALLOC__Fi(0x990);
    ec->pnt[1] = pCVar2;
    if (pCVar2 == (CLOUD_OF_DUST_CTRL *)0x0) {
      ResetEffects__FPv(ec);
      pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
    }
    else {
      iVar4 = 0;
      CloudOfDustCtrlInit__FP18CLOUD_OF_DUST_CTRLPf(pCVar2,(float *)ec->pnt[0]);
      if (iVar1 < 1) {
        pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
      }
      else {
        pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
        while( true ) {
          iVar4 = iVar4 + 1;
          AddCloudOfDustRunParticle__FP18CLOUD_OF_DUST_CTRL(pCVar2);
          if (iVar1 <= iVar4) break;
          pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
        }
        pCVar2 = (CLOUD_OF_DUST_CTRL *)ec->pnt[1];
      }
    }
  }
  pvVar3 = CloudOfDustCtrl__FP18CLOUD_OF_DUST_CTRLf(pCVar2,DAT_003ede64);
  ec->pnt[1] = pvVar3;
  if (pvVar3 == (void *)0x0) {
    ResetEffects__FPv(ec);
  }
  return;
}

void SetDustLeaf(float *pos, int type) {
	u_char rgb1[3];
	u_char rgb2[3];
	u_char mr;
	u_char mg;
	u_char mb;
	u_char mrr;
	u_char mrg;
	u_char mrb;
	int i;
	int num;
	int status;
	int leaf_num;
	float angr;
	float wvx;
	float wvy;
	float mv1x;
	float mangr;
	EFF_LEAF *lep;
	
  bool bVar1;
  undefined8 uVar2;
  fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> *pfVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  fixed_array<EFF_LEAF,6> *pfVar8;
  fixed_array<EFF_LEAF_ONE,16> *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  uchar uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uchar rgb1 [3];
  uchar rgb2 [3];
  uchar mb;
  uchar mrr;
  uchar mrg;
  uchar mrb;
  
  if (type == 0) {
    uVar12 = (uint)DAT_003efe88;
    iVar10 = 8;
    _mrr = 2;
    uVar13 = (uint)DAT_003efe89;
    _mrg = 2;
    _mb = (uint)DAT_003efe8a;
    fVar17 = 20.0;
    fVar15 = 180.0;
    _mrb = 2;
  }
  else {
    fVar17 = 34.0;
    uVar12 = 0x1c;
    fVar15 = 104.0;
    uVar13 = 0x18;
    _mb = 0x14;
    iVar10 = 0x10;
    _mrr = 1;
    _mrg = 1;
    _mrb = 1;
  }
  pfVar8 = &eff_leaf;
  for (iVar5 = 0; iVar11 = -1, iVar5 < 6; iVar5 = iVar5 + 1) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8EFF_LEAF_UiUi_PX01(iVar5,6);
    pfVar3 = (fixed_array_base<EFF_LEAF,6,EFF_LEAF[6]> *)&((EFF_LEAF *)pfVar8)->flag;
    pfVar8 = (fixed_array<EFF_LEAF,6> *)((int)pfVar8 + 0x520);
    iVar11 = iVar5;
    if (pfVar3->m_aData[0].flag == 0) break;
  }
  if (iVar11 != -1) {
    if ((plyr_wrk.cmn_wrk.st.sta & 1) == 0) {
      if ((plyr_wrk.cmn_wrk.st.sta & 2) == 0) {
        if ((plyr_wrk.cmn_wrk.st.sta & 4) == 0) {
          if ((plyr_wrk.cmn_wrk.st.sta & 8) == 0) {
            fVar17 = fVar17 * DAT_003ede80;
            fVar18 = DAT_003ede84;
          }
          else {
            fVar17 = fVar17 * DAT_003ede78;
            fVar18 = DAT_003ede7c;
          }
        }
        else {
          fVar17 = fVar17 * DAT_003ede70;
          fVar18 = DAT_003ede74;
        }
      }
      else {
        fVar17 = fVar17 * DAT_003ede68;
        fVar18 = DAT_003ede6c;
      }
    }
    else {
      fVar18 = 20.0;
    }
    _fixed_array_verifyrange__H1Z8EFF_LEAF_UiUi_PX01(iVar11,6);
    _fixed_array_verifyrange__H1Z8EFF_LEAF_UiUi_PX01(iVar11,6);
    _fixed_array_verifyrange__H1Z12EFF_LEAF_ONE_UiUi_PX01(0,0x10);
    fVar4 = DAT_003ede88;
                    /* end of inlined section */
    fVar15 = fVar15 * DAT_003ede88;
    eff_leaf.field0_0x0.m_aData[iVar11].flag = 1;
    eff_leaf.field0_0x0.m_aData[iVar11].type = type;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    pfVar9 = &eff_leaf.field0_0x0.m_aData[iVar11].lo;
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
    fVar15 = fVar15 / 180.0;
    uVar2 = *(undefined8 *)pos;
                    /* inlined from ../graph3d/g3dxVu0.h */
    fVar6 = pos[2];
    fVar7 = pos[3];
    eff_leaf.field0_0x0.m_aData[iVar11].bpos[0] = (float)uVar2;
    eff_leaf.field0_0x0.m_aData[iVar11].bpos[1] = (float)((ulong)uVar2 >> 0x20);
    eff_leaf.field0_0x0.m_aData[iVar11].bpos[2] = fVar6;
    eff_leaf.field0_0x0.m_aData[iVar11].bpos[3] = fVar7;
    fVar6 = DAT_003ede8c;
                    /* end of inlined section */
    if (iVar10 != 0) {
      fVar21 = (float)_mrr;
      fVar20 = (float)_mrg;
      fVar19 = (float)_mrb;
      fVar7 = DAT_003ede90;
      do {
                    /* inlined from effect.h */
        iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
        fVar14 = (0.0 - fVar15 * ((float)iVar5 / fVar6)) + fVar15 * 0.5;
                    /* end of inlined section */
        bVar1 = fVar14 < DAT_003ede94;
                    /* end of inlined section */
        (pfVar9->field0_0x0).m_aData[0].mang = fVar14;
        if (bVar1) {
          fVar14 = fVar14 + fVar7;
        }
        else if (fVar4 < fVar14) {
          fVar14 = fVar14 - fVar7;
        }
        (pfVar9->field0_0x0).m_aData[0].mang = fVar14;
        (pfVar9->field0_0x0).m_aData[0].cnt = 0.0;
        (pfVar9->field0_0x0).m_aData[0].pos[0] = 0.0;
        (pfVar9->field0_0x0).m_aData[0].pos[1] = 0.0;
                    /* inlined from effect.h */
        (pfVar9->field0_0x0).m_aData[0].pos[2] = 0.0;
        iVar5 = rand();
        (pfVar9->field0_0x0).m_aData[0].vel[0] = ((float)iVar5 / fVar6) * 10.0 + fVar17;
        iVar5 = rand();
                    /* end of inlined section */
        (pfVar9->field0_0x0).m_aData[0].fl = 0;
                    /* inlined from effect.h */
        (pfVar9->field0_0x0).m_aData[0].vel[1] = ((float)iVar5 / fVar6) * 15.0 + fVar18;
        iVar5 = rand();
        (pfVar9->field0_0x0).m_aData[0].ang[0] = ((float)iVar5 / fVar6) * fVar7 - fVar4;
        iVar5 = rand();
        (pfVar9->field0_0x0).m_aData[0].ang[1] = ((float)iVar5 / fVar6) * fVar7 - fVar4;
        iVar5 = rand();
        fVar14 = fVar21 * ((float)iVar5 / fVar6) + (float)uVar12;
        uVar16 = (uchar)(int)fVar14;
        if (2.147484e+09 <= fVar14) {
          uVar16 = (uchar)(int)(fVar14 - 2.147484e+09);
        }
        (pfVar9->field0_0x0).m_aData[0].r = uVar16;
        iVar5 = rand();
        fVar14 = fVar20 * ((float)iVar5 / fVar6) + (float)uVar13;
        uVar16 = (uchar)(int)fVar14;
        if (2.147484e+09 <= fVar14) {
          uVar16 = (uchar)(int)(fVar14 - 2.147484e+09);
        }
        (pfVar9->field0_0x0).m_aData[0].g = uVar16;
        iVar5 = rand();
        fVar14 = fVar19 * ((float)iVar5 / fVar6) + (float)_mb;
        uVar16 = (uchar)(int)fVar14;
        if (2.147484e+09 <= fVar14) {
          uVar16 = (uchar)(int)(fVar14 - 2.147484e+09);
        }
        (pfVar9->field0_0x0).m_aData[0].b = uVar16;
                    /* end of inlined section */
        if (eff_leaf.field0_0x0.m_aData[iVar11].type == 0) {
          uVar16 = 0x80;
        }
        else {
          uVar16 = '\x1c';
        }
        (pfVar9->field0_0x0).m_aData[0].a = uVar16;
        iVar10 = iVar10 + -1;
        pfVar9 = (fixed_array<EFF_LEAF_ONE,16> *)((pfVar9->field0_0x0).m_aData + 1);
      } while (iVar10 != 0);
    }
  }
  return;
}

void SetLeaf(float *pos) {
  SetDustLeaf__FPfi(pos,0);
  return;
}

void SetDust2(float *pos) {
  SetDustLeaf__FPfi(pos,1);
  return;
}

void RunLeafSub(EFF_LEAF *lep) {
	float f;
	float ss;
	float cc;
	float fw2;
	int i;
	int j;
	int k;
	int w;
	int th;
	int tw;
	fixed_array<int,16> so;
	int leaf_num;
	int disp[32];
	float grv1y;
	u_char rr;
	u_char gg;
	u_char bb;
	u_long tx0;
	float rot_x;
	float rot_y;
	int ivec[16][5][4];
	float wlm[4][4];
	float slm[4][4];
	float bpos[4];
	float wpos[4];
	float ppos[2][5][4];
	Q_WORDDATA *pbuf;
	int ndpkt;
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	
  int iVar1;
  bool bVar2;
  bool bVar3;
  fixed_array_base<EFF_LEAF_ONE,16,EFF_LEAF_ONE[16]> *pfVar4;
  int *piVar5;
  int (*paiVar6) [4];
  undefined8 *puVar7;
  int iVar8;
  Q_WORDDATA *pQVar9;
  float (*pafVar10) [4];
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  Q_WORDDATA *pQVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float *pfVar20;
  int (*paiVar21) [4];
  fixed_array<int,16> *pfVar22;
  fixed_array<EFF_LEAF_ONE,16> *pfVar23;
  int *piVar24;
  ulong uVar25;
  int *piVar26;
  Q_WORDDATA *pQVar27;
  int iVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  fixed_array<int,16> so;
  int disp [32];
  float rot_x;
  float rot_y;
  int ivec [16] [5] [4];
  float wlm [4] [4];
  float slm [4] [4];
  float bpos [4];
  float wpos [4];
  float ppos [2] [5] [4];
  _DRAW_ENV_5 local_d0;
  EFF_LEAF *local_a0;
  int th;
  int tw;
  int leaf_num;
  GRA3DCAMERA *pCam;
  float (*cam_pos) [4];
  fixed_array<EFF_LEAF_ONE,16> *local_88;
  int local_84;
  float (*local_80) [4];
  fixed_array<int,16> *local_7c;
  
  pfVar22 = &so;
  puVar7 = &DAT_003a6f60;
  pafVar10 = (float (*) [4])ppos;
  fVar36 = 3.0;
  local_a0 = lep;
  do {
    uVar13 = puVar7[1];
    uVar15 = puVar7[2];
    uVar16 = puVar7[3];
    *(undefined8 *)*(float (*) [4])*pafVar10 = *puVar7;
    *(undefined8 *)(*(float (*) [4])*pafVar10 + 2) = uVar13;
    *(undefined8 *)pafVar10[1] = uVar15;
    *(undefined8 *)(pafVar10[1] + 2) = uVar16;
    puVar7 = puVar7 + 4;
    pafVar10 = pafVar10[2];
  } while (puVar7 != &DAT_003a7000);
  pCam = gra3dGetCamera__Fv();
  cam_pos = gra3dcamGetPosition__Fv();
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z12EFF_LEAF_ONE_UiUi_PX01(0,0x10);
                    /* end of inlined section */
  leaf_num = 8;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  pfVar23 = &local_a0->lo;
                    /* end of inlined section */
  if (local_a0->type != 0) {
    leaf_num = 0xc;
  }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
  bpos[2] = local_a0->bpos[2];
  bpos[3] = local_a0->bpos[3];
  bpos[0] = (float)*(undefined8 *)local_a0->bpos;
  bpos[1] = (float)((ulong)*(undefined8 *)local_a0->bpos >> 0x20);
                    /* end of inlined section */
  iVar28 = 0;
  local_88 = pfVar23;
  if (leaf_num != 0) {
    local_80 = pCam->matWorldScreen;
    do {
      local_84 = iVar28 << 2;
      fVar33 = (pfVar23->field0_0x0).m_aData[0].cnt;
      fVar32 = (pfVar23->field0_0x0).m_aData[0].vel[1];
      fVar35 = (pfVar23->field0_0x0).m_aData[0].mang;
      (pfVar23->field0_0x0).m_aData[0].pos[0] = (pfVar23->field0_0x0).m_aData[0].vel[0] * fVar33;
      fVar32 = -fVar32 * fVar33 + fVar36 * fVar33 * fVar33;
      (pfVar23->field0_0x0).m_aData[0].pos[1] = fVar32;
      if (0.0 < fVar32) {
        (pfVar23->field0_0x0).m_aData[0].fl = 2;
      }
      else if ((pfVar23->field0_0x0).m_aData[0].opos[1] < fVar32) {
        (pfVar23->field0_0x0).m_aData[0].fl = 1;
      }
      else {
        (pfVar23->field0_0x0).m_aData[0].fl = 0;
      }
      fVar32 = DAT_003ede98;
      if ((local_a0->type != 0) && (fVar32 = DAT_003ede9c, (pfVar23->field0_0x0).m_aData[0].fl < 1))
      {
        fVar32 = DAT_003edea0;
      }
      iVar8 = EffWrkStopFlgGet__Fv();
      if ((iVar8 == 0) && (stop_lf == 0)) {
        (pfVar23->field0_0x0).m_aData[0].cnt = (pfVar23->field0_0x0).m_aData[0].cnt + fVar32;
      }
                    /* inlined from ../graph3d/g3dxVu0.h */
      pfVar20 = (pfVar23->field0_0x0).m_aData[0].pos;
      uVar13 = *(undefined8 *)pfVar20;
      fVar32 = (pfVar23->field0_0x0).m_aData[0].pos[2];
      fVar33 = (pfVar23->field0_0x0).m_aData[0].pos[3];
      (pfVar23->field0_0x0).m_aData[0].opos[0] = (float)uVar13;
      (pfVar23->field0_0x0).m_aData[0].opos[1] = (float)((ulong)uVar13 >> 0x20);
      (pfVar23->field0_0x0).m_aData[0].opos[2] = fVar32;
      (pfVar23->field0_0x0).m_aData[0].opos[3] = fVar33;
      wpos[0] = bpos[0];
      wpos[1] = bpos[1];
      wpos[2] = bpos[2];
      wpos[3] = bpos[3];
                    /* end of inlined section */
      fVar32 = sinf(fVar35);
      fVar33 = cosf(fVar35);
      fVar35 = *pfVar20;
      fVar34 = (pfVar23->field0_0x0).m_aData[0].pos[2];
      wpos[1] = wpos[1] + (pfVar23->field0_0x0).m_aData[0].pos[1];
      wpos[2] = wpos[2] + fVar35 * fVar32 + fVar34 * fVar33;
      wpos[0] = wpos[0] + (fVar35 * fVar33 - fVar34 * fVar32);
      sceVu0UnitMatrix(wlm);
      wlm[2][2] = 4.0;
      wlm[1][1] = 4.0;
      wlm[0][0] = 4.0;
      if (local_a0->type == 0) {
        sceVu0RotMatrixX((pfVar23->field0_0x0).m_aData[0].ang[0],wlm,wlm);
        sceVu0RotMatrixY((pfVar23->field0_0x0).m_aData[0].ang[1],wlm,wlm);
      }
      else {
        Get2PosRot__FPCfT0PfT2((float *)cam_pos,pCam->vTarget,&rot_x,&rot_y);
        sceVu0RotMatrixX(rot_x,wlm,wlm);
        sceVu0RotMatrixY(rot_y,wlm,wlm);
      }
      sceVu0TransMatrix(wlm,wlm,wpos);
      bVar3 = false;
      sceVu0MulMatrix(slm,local_80,wlm);
      paiVar21 = ivec[local_84 + iVar28];
      iVar8 = 0;
      do {
        iVar31 = iVar8 + 1;
        sceVu0RotTransPers(paiVar21,slm,ppos[local_a0->type][iVar8],0);
        piVar24 = *paiVar21;
        piVar26 = *paiVar21;
        piVar5 = *paiVar21;
        paiVar21 = paiVar21[1];
        if (0x8000 < *piVar24 - 0x4000U) {
          bVar3 = true;
        }
        if (0x8000 < piVar26[1] - 0x4000U) {
          bVar3 = true;
        }
        if (0xffff00 < piVar5[2] - 0xffU) {
          bVar3 = true;
        }
        iVar8 = iVar31;
      } while (iVar31 < 5);
      iVar28 = iVar28 + 1;
      bVar2 = iVar28 < leaf_num;
      *(uint *)((int)disp + local_84) = (uint)!bVar3;
      pfVar23 = (fixed_array<EFF_LEAF_ONE,16> *)((pfVar23->field0_0x0).m_aData + 1);
    } while (bVar2);
  }
  iVar28 = 0;
  pfVar23 = local_88;
  for (iVar8 = leaf_num; iVar8 != 0; iVar8 = iVar8 + -1) {
    pfVar4 = &pfVar23->field0_0x0;
    pfVar23 = (fixed_array<EFF_LEAF_ONE,16> *)((pfVar23->field0_0x0).m_aData + 1);
    iVar28 = iVar28 + pfVar4->m_aData[0].fl;
  }
  if (iVar28 / 2 == leaf_num) {
    local_a0->flag = 0;
  }
  iVar28 = 0;
  if (leaf_num != 0) {
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar28,0x10);
      *(int *)pfVar22 = iVar28;
                    /* end of inlined section */
      iVar28 = iVar28 + 1;
      pfVar22 = (fixed_array<int,16> *)((int)pfVar22 + 4);
    } while (iVar28 < leaf_num);
  }
  iVar8 = leaf_num + -1;
  iVar28 = 0;
  if (0 < iVar8) {
    do {
      iVar31 = iVar28 + 1;
      if (iVar31 < leaf_num) {
        piVar26 = so.field0_0x0.m_aData + iVar28;
        piVar24 = so.field0_0x0.m_aData + iVar28 + 1;
        iVar29 = iVar31;
        do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar28,0x10);
          iVar1 = *piVar26;
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar29,0x10);
          if (ivec[*piVar24][4][2] < ivec[iVar1][4][2]) {
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar29,0x10);
            iVar1 = *piVar24;
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar29,0x10);
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar28,0x10);
            *piVar24 = *piVar26;
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar28,0x10);
            *piVar26 = iVar1;
          }
                    /* end of inlined section */
          iVar29 = iVar29 + 1;
          piVar24 = piVar24 + 1;
        } while (iVar29 < leaf_num);
      }
      iVar28 = iVar31;
    } while (iVar31 < iVar8);
  }
  iVar28 = EffWrkMonochroModeGet__Fv();
  iVar31 = 3;
  uVar25 = effdat[iVar28 + 10].tex0;
  iVar28 = EffWrkMonochroModeGet__Fv();
  iVar8 = 0;
  tw = (uint)(ushort)effdat[iVar28 + 10].w << 4;
  iVar28 = EffWrkMonochroModeGet__Fv();
  th = (uint)(ushort)effdat[iVar28 + 10].h << 4;
  local_d0.clamp = DAT_003a7010;
  local_d0.test = DAT_003a7018;
  local_d0.alpha = DAT_003a7000;
  local_d0.tex1 = DAT_003a7008;
  local_d0.zbuf = DAT_003a7020;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_d0);
  pQVar9 = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  pQVar9->ul64[0] = 0x1000000000008002;
  pQVar9->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar9 + 0x18) = 0x3f;
  pQVar9[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar9 + 0x28) = 6;
  pQVar9[2].ul64[0] = uVar25;
  iVar28 = 0x30;
  if (leaf_num != 0) {
    pQVar27 = pQVar9 + 3;
    pfVar23 = local_88;
    local_7c = &so;
    do {
      if ((pfVar23->field0_0x0).m_aData[0].fl != 2) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar8,0x10);
        iVar28 = *(int *)local_7c;
                    /* end of inlined section */
        if (disp[iVar28] != 0) {
          pQVar27->ul64[0] = 0x30ae400000008004;
          iVar31 = iVar31 + 1;
          pQVar27->ul64[1] = 0x431;
          pQVar27 = pQVar27 + 1;
          iVar29 = EffWrkMonochroModeGet__Fv();
          if (iVar29 == 0) {
            uVar17 = (uint)(local_88->field0_0x0).m_aData[iVar28].b;
            uVar18 = (uint)(local_88->field0_0x0).m_aData[iVar28].r;
            uVar19 = (uint)(local_88->field0_0x0).m_aData[iVar28].g;
          }
          else {
            uVar17 = ((uint)(local_88->field0_0x0).m_aData[iVar28].r +
                      (uint)(local_88->field0_0x0).m_aData[iVar28].g +
                     (uint)(local_88->field0_0x0).m_aData[iVar28].b) / 3 & 0xff;
            uVar18 = uVar17;
            uVar19 = uVar17;
          }
          paiVar21 = (int (*) [4])ivec[iVar28];
          uVar30 = 0;
          pQVar14 = pQVar9 + iVar31;
          do {
            pQVar14->ui32[0] = uVar18;
            pQVar14->ui32[1] = uVar19;
            pQVar14->ui32[2] = uVar17;
            uVar11 = 8;
            if ((uVar30 & 1) != 0) {
              uVar11 = tw - 8;
            }
            uVar12 = 0x8000;
            pQVar14->ui32[3] = (uint)(local_88->field0_0x0).m_aData[iVar28].a;
            iVar29 = 8;
            if ((int)uVar30 / 2 != 0) {
              iVar29 = th + -8;
            }
            *(int *)((int)pQVar14 + 0x14) = iVar29;
            if (1 < (int)uVar30) {
              uVar12 = 0;
            }
            pQVar14[1].ui32[0] = uVar11;
            uVar30 = uVar30 + 1;
            *(undefined4 *)((int)pQVar14 + 0x18) = 0;
            *(undefined4 *)((int)pQVar14 + 0x1c) = 0;
            pQVar27 = pQVar27 + 3;
            iVar31 = iVar31 + 3;
            pQVar14[2].ui32[0] = (*(int (*) [4])*paiVar21)[0];
            *(int *)((int)pQVar14 + 0x24) = (*(int (*) [4])*paiVar21)[1];
            paiVar6 = (int (*) [4])*paiVar21;
            paiVar21 = paiVar21[1];
            *(int *)((int)pQVar14 + 0x28) = (*paiVar6)[2];
            *(undefined4 *)((int)pQVar14 + 0x2c) = uVar12;
            pQVar14 = pQVar14 + 3;
          } while ((int)uVar30 < 4);
        }
      }
      iVar8 = iVar8 + 1;
      pfVar23 = (fixed_array<EFF_LEAF_ONE,16> *)((pfVar23->field0_0x0).m_aData + 1);
      local_7c = (fixed_array<int,16> *)((int)local_7c + 4);
    } while (iVar8 < leaf_num);
    iVar28 = iVar31 << 4;
  }
  EndDmaDirectTrans__FP10Q_WORDDATA((Q_WORDDATA *)((int)pQVar9 + iVar28));
  return;
}

void RunLeaf() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<EFF_LEAF,6> *lep;
  
  lep = &eff_leaf;
  iVar1 = 0;
  do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8EFF_LEAF_UiUi_PX01(iVar1,6);
    iVar2 = iVar1 + 1;
    if (((EFF_LEAF *)lep)->flag != 0) {
      _fixed_array_verifyrange__H1Z8EFF_LEAF_UiUi_PX01(iVar1,6);
      RunLeafSub__FP8EFF_LEAF((EFF_LEAF *)lep);
    }
                    /* end of inlined section */
    lep = (fixed_array<EFF_LEAF,6> *)((int)lep + 0x520);
    iVar1 = iVar2;
  } while (iVar2 < 6);
  return;
}

void* EffectHazeReq(float *CenterPos) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x21,2);
  return pvVar1;
}

void EffectHazeReqId(float *CenterPos, int Id) {
  SetEffects__Fiie(0x21,2);
  return;
}

void* EffectKusabiHazeReq(float *pCenterPos[4], float *pRot[4], float *pAlphaRate) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x21,2);
  return pvVar1;
}

void* EffectSaeHazeReq(float *pCenterPos[4], float *pRot[4], float *pAlphaRate) {
  void *pvVar1;
  
  pvVar1 = SetEffects__Fiie(0x21,2);
  return pvVar1;
}

void EffectSaeHazSetNoDrawFlg(int iFlg) {
  haze_stop = iFlg;
  return;
}

void EffectHazeCut(void *pEffect) {
  if (pEffect != (void *)0x0) {
    EFFECT_FREE__FPv(*(void **)((int)pEffect + 0x24));
    ResetEffects__FPv(pEffect);
  }
  return;
}

void EffectHazeCutId(int Id) {
	int i;
	HAZE_CTRL *pHazeCtrl;
	
  EFFECT_CONT *pEffect;
  int iVar1;
  
  iVar1 = 0x2f;
  pEffect = EffectGetBufferTopAdrs__Fv();
  do {
    if ((((pEffect->dat).uc8[0] == '!') && (pEffect->pnt[1] != (void *)0x0)) &&
       (*(int *)((int)pEffect->pnt[1] + 0x1014) == Id)) {
      EffectHazeCut__FPv(pEffect);
    }
    iVar1 = iVar1 + -1;
    pEffect = pEffect + 1;
  } while (-1 < iVar1);
  return;
}

void EffectKusabiHazeCut(void *pEffect) {
  EffectHazeCut__FPv(pEffect);
  return;
}

void EffectSaeHazeCut(void *pEffect) {
  EffectHazeCut__FPv(pEffect);
  return;
}

static void HazeCtrlInit(HAZE_CTRL *pHc, float *pBasePos[4], float *pRot[4], int Id, int Type, float *pAlphaRate) {
	int i;
	
  HAZE_CTRL *pHVar1;
  int iVar2;
  int iVar3;
  
  if (pHc != (HAZE_CTRL *)0x0) {
    pHVar1 = pHc;
    iVar2 = 0;
    do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Position[0] = 0.0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Position[1] = 0.0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Position[2] = 0.0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Position[3] = 1.0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Alpha = 0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Lifetime = 0;
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].Scale = 0.0;
                    /* end of inlined section */
      iVar3 = iVar2 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
      (pHVar1->Particles).field0_0x0.m_aData[0].RotZ = 0.0;
                    /* end of inlined section */
      pHVar1 = (HAZE_CTRL *)((pHVar1->Particles).field0_0x0.m_aData + 1);
      iVar2 = iVar3;
    } while (iVar3 < 0x40);
    pHc->Type = (ushort)Type;
    pHc->pPos = pBasePos;
    pHc->pRot = pRot;
    pHc->pAlphaRate = pAlphaRate;
    pHc->Id = Id;
    pHc->AllVelocityTime = 0;
    pHc->AllVelocityStatus = 0;
    pHc->disp = 0;
  }
  return;
}

static void* HazeCtrl(HAZE_CTRL *pHazeCtrl, float size) {
	float WorkMat[4][4];
	float LocalWorld[4][4];
	float LocalScreen[4][4];
	float BaseMat[4][4];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	float RotX;
	float RotY;
	fixed_array<int[4],256> ivec;
	int PolyNo;
	float PolyDat[4][4];
	int i;
	int j;
	fixed_array<int,64> Order;
	fixed_array<int,64> ToPolyNo;
	HAZE_PARAMETER *pHazeParam;
	int ColorR;
	int ColorG;
	int ColorB;
	float AlphaRate;
	int ClipFlg;
	int BufNo;
	int Key;
	HAZE_PARTICLE *pPart;
	sceVu0IVECTOR *pIvec;
	u_long Tex0;
	int Alpha;
	float st[4][2];
	Q_WORDDATA *pbuf;
	int i;
	U32DATA ts;
	U32DATA tt;
	U32DATA tq;
	float AllVelocity[4];
	
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  bool bVar6;
  float *pfVar7;
  GRA3DCAMERA *pGVar8;
  float (*pafVar9) [4];
  HAZE_PARAMETER *pHVar10;
  int iVar11;
  Q_WORDDATA *pQVar12;
  int *piVar13;
  undefined4 uVar14;
  Q_WORDDATA *pQVar15;
  float (*pafVar16) [2];
  int iVar17;
  ulong uVar18;
  float (*pafVar19) [4];
  int *piVar20;
  HAZE_CTRL *pHVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float WorkMat [4] [4];
  float LocalWorld [4] [4];
  float LocalScreen [4] [4];
  float BaseMat [4] [4];
  float RotX;
  float RotY;
  fixed_array<int[4],256> ivec;
  float PolyDat [4] [4];
  fixed_array<int,64> Order;
  fixed_array<int,64> ToPolyNo;
  _DRAW_ENV_5 local_130;
  ulong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  float st [4] [2];
  float AllVelocity [4];
  HAZE_CTRL *local_a0;
  GRA3DCAMERA *pCam;
  int PolyNo;
  int ColorR;
  int ColorG;
  int ColorB;
  U32DATA ts;
  U32DATA tt;
  U32DATA tq;
  int *local_74;
  int local_70;
  
  pGVar8 = gra3dGetCamera__Fv();
  pafVar9 = gra3dcamGetPosition__Fv();
  PolyNo = 0;
  local_a0 = (HAZE_CTRL *)0x0;
  PolyDat[0][0] = (float)DAT_003a7030;
  PolyDat[0][1] = DAT_003a7030._4_4_;
  PolyDat[0][2] = (float)DAT_003a7038;
  PolyDat[0][3] = DAT_003a7038._4_4_;
  PolyDat[1][0] = (float)DAT_003a7040;
  PolyDat[1][1] = DAT_003a7040._4_4_;
  PolyDat[1][2] = (float)DAT_003a7048;
  PolyDat[1][3] = DAT_003a7048._4_4_;
  PolyDat[2][0] = (float)DAT_003a7050;
  PolyDat[2][1] = DAT_003a7050._4_4_;
  PolyDat[2][2] = (float)DAT_003a7058;
  PolyDat[2][3] = DAT_003a7058._4_4_;
  PolyDat[3][0] = (float)DAT_003a7060;
  PolyDat[3][1] = DAT_003a7060._4_4_;
  PolyDat[3][2] = (float)DAT_003a7068;
  PolyDat[3][3] = DAT_003a7068._4_4_;
  if (pHazeCtrl != (HAZE_CTRL *)0x0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(0,0x40);
                    /* end of inlined section */
    pHVar10 = EffectHazeGetParameterPtr__Fi((int)(short)pHazeCtrl->Type);
    iVar11 = EffWrkMonochroModeGet__Fv();
    if ((iVar11 == 0) || (pHazeCtrl->Type == 2)) {
      ColorR = pHVar10->R;
      ColorG = pHVar10->G;
      ColorB = pHVar10->B;
    }
    else {
      ColorR = (pHVar10->R + pHVar10->G + pHVar10->B) / 3;
      ColorG = ColorR;
      ColorB = ColorR;
    }
    local_130.alpha =
         (long)pHVar10->AlphaBlendA | (long)pHVar10->AlphaBlendFIX << 0x20 |
         (long)pHVar10->AlphaBlendC << 4 | (long)pHVar10->AlphaBlendB << 2 |
         (long)pHVar10->AlphaBlendD << 6;
    local_130.tex1 = 0x161;
    local_130.test = 0x5000d;
    local_130.zbuf = 0x10a000118;
    local_f8 = 0x161;
    local_f0 = 0;
    local_e8 = 0x5000d;
    local_e0 = 0x10a000118;
    local_130.clamp = 0;
    local_100 = local_130.alpha;
    SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_130);
    if (pHazeCtrl->pAlphaRate == (float *)0x0) {
      fVar28 = 1.0;
    }
    else {
      fVar28 = *pHazeCtrl->pAlphaRate;
      if (fVar28 == 0.0) {
        iVar11 = 0;
        piVar13 = &(pHazeCtrl->Particles).field0_0x0.m_aData[0].Lifetime;
        do {
          iVar11 = iVar11 + 1;
          *piVar13 = 0;
          piVar13 = piVar13 + 0x10;
        } while (iVar11 < 0x40);
      }
    }
    iVar11 = 0;
    Get2PosRot__FPCfT0PfT2((float *)pafVar9,pGVar8->vTarget,&RotX,&RotY);
    sceVu0UnitMatrix(WorkMat);
    WorkMat[0][0] = 25.0;
    WorkMat[2][2] = 25.0;
    WorkMat[1][1] = 25.0;
    sceVu0RotMatrixX(RotX,WorkMat,WorkMat);
    sceVu0RotMatrixY(RotY,BaseMat,WorkMat);
    local_70 = 0;
    local_74 = (int *)&ToPolyNo;
    pHVar21 = pHazeCtrl;
    do {
      bVar6 = false;
      if ((pHVar21->Particles).field0_0x0.m_aData[0].Lifetime != 0) {
        sceVu0UnitMatrix(WorkMat);
        WorkMat[0][0] = (pHVar21->Particles).field0_0x0.m_aData[0].Scale;
        iVar22 = 0;
        WorkMat[1][1] = WorkMat[0][0];
        WorkMat[2][2] = WorkMat[0][0];
        sceVu0RotMatrixZ((pHVar21->Particles).field0_0x0.m_aData[0].RotZ,WorkMat,WorkMat);
        sceVu0MulMatrix(WorkMat,BaseMat,WorkMat);
        sceVu0TransMatrix(LocalWorld,WorkMat,pHVar21);
        sceVu0MulMatrix(LocalScreen,pGVar8->matWorldScreen,LocalWorld);
        pafVar9 = PolyDat;
        do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar17 = local_70 + iVar22;
          iVar22 = iVar22 + 1;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          pafVar19 = PolyDat[iVar17 + -0x100];
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          sceVu0RotTransPers(pafVar19,LocalScreen,pafVar9,0);
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100);
          if (((int)(*pafVar19)[0] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100),
             0xc000 < (int)(*pafVar19)[0])) {
                    /* end of inlined section */
            bVar6 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100);
          if (((int)PolyDat[iVar17 + -0x100][1] < 0x4000) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100),
             0xc000 < (int)PolyDat[iVar17 + -0x100][1])) {
                    /* end of inlined section */
            bVar6 = true;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          }
          _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100);
          if (((int)PolyDat[iVar17 + -0x100][2] < 0xff) ||
             (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17,0x100),
             0xffffff < (int)PolyDat[iVar17 + -0x100][2])) {
                    /* end of inlined section */
            bVar6 = true;
          }
          pafVar9 = pafVar9[1];
        } while (iVar22 < 4);
        if (!bVar6) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          local_70 = local_70 + 4;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(PolyNo,0x40);
          *local_74 = iVar11;
                    /* end of inlined section */
          local_74 = local_74 + 1;
          PolyNo = PolyNo + 1;
        }
      }
      iVar11 = iVar11 + 1;
      pHVar21 = (HAZE_CTRL *)((pHVar21->Particles).field0_0x0.m_aData + 1);
    } while (iVar11 < 0x40);
    iVar11 = 0;
    local_a0 = pHazeCtrl;
    if (0 < PolyNo) {
      piVar13 = (int *)&Order;
      do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
        *piVar13 = iVar11;
                    /* end of inlined section */
        iVar11 = iVar11 + 1;
        piVar13 = piVar13 + 1;
      } while (iVar11 < PolyNo);
    }
    iVar22 = PolyNo + -1;
    iVar11 = 0;
    if (0 < iVar22) {
      do {
        iVar17 = iVar11 + 1;
        if (iVar17 < PolyNo) {
          piVar20 = Order.field0_0x0.m_aData + iVar11;
          piVar13 = Order.field0_0x0.m_aData + iVar11 + 1;
          iVar23 = iVar17;
          do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
            iVar2 = *piVar20;
            _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar2 << 2,0x100);
            _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar23,0x40);
            iVar3 = *piVar13;
            _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar3 << 2,0x100);
            if ((int)PolyDat[iVar3 * 4 + -0x100][2] < (int)PolyDat[iVar2 * 4 + -0x100][2]) {
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar23,0x40);
              iVar2 = *piVar13;
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar23,0x40);
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
              *piVar13 = *piVar20;
              _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
              *piVar20 = iVar2;
            }
                    /* end of inlined section */
            iVar23 = iVar23 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar23 < PolyNo);
        }
        iVar11 = iVar17;
      } while (iVar17 < iVar22);
    }
    iVar11 = 0;
    if (0 < PolyNo) {
      piVar13 = (int *)&Order;
      do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
        iVar22 = *piVar13;
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar22,0x40);
        iVar22 = ToPolyNo.field0_0x0.m_aData[iVar22];
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,0x40);
        iVar17 = *piVar13;
        _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar17 << 2);
        pafVar9 = PolyDat[iVar17 * 4 + -0x100];
                    /* end of inlined section */
        iVar17 = EffWrkMonochroModeGet__Fv();
        iVar22 = (local_a0->Particles).field0_0x0.m_aData[iVar22].Alpha;
        puVar1 = (undefined *)((int)st + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003a7070 >> (7 - uVar4) * 8;
        st[0][0] = DAT_003a7070[0];
        st[0][1] = DAT_003a7070[1];
        puVar1 = (undefined *)((int)st[1] + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003a7078 >> (7 - uVar4) * 8;
        st[1][0] = DAT_003a7078[0];
        st[1][1] = DAT_003a7078[1];
        puVar1 = (undefined *)((int)st[2] + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003a7080 >> (7 - uVar4) * 8;
        st[2][0] = DAT_003a7080[0];
        st[2][1] = DAT_003a7080[1];
        puVar1 = (undefined *)((int)st[3] + 7);
        uVar4 = (uint)puVar1 & 7;
        puVar5 = (ulong *)(puVar1 + -uVar4);
        *puVar5 = *puVar5 & -1L << (uVar4 + 1) * 8 | (ulong)DAT_003a7088 >> (7 - uVar4) * 8;
        st[3][0] = DAT_003a7088[0];
        st[3][1] = DAT_003a7088[1];
        fVar25 = (float)iVar22 * fVar28;
        uVar18 = effdat[iVar17 + 0x54].tex0;
        pQVar12 = StartDmaDirectTrans__Fv();
        Reserve2DPacket__FUi(0x10);
        pQVar12->ul64[0] = 0x1000000000008002;
        iVar22 = 0;
        pQVar12->ul64[1] = 0xe;
        *(undefined8 *)((int)pQVar12 + 0x18) = 0x3f;
        pQVar12[1].ul64[0] = 0;
        *(undefined8 *)((int)pQVar12 + 0x28) = 6;
        pQVar12[2].ul64[0] = uVar18;
        *(undefined8 *)((int)pQVar12 + 0x38) = 0x412;
        pQVar12[3].ul64[0] = 0x302e400000008004;
        pafVar16 = st;
        pQVar15 = pQVar12 + 4;
        do {
          fVar26 = (*pafVar9)[3];
          fVar24 = (*pafVar16)[0];
          fVar27 = (*pafVar16)[1];
          pafVar16 = pafVar16[1];
          pQVar15->ui32[3] = 0;
          bVar6 = 1 < iVar22;
          uVar14 = 0x8000;
          iVar22 = iVar22 + 1;
          fVar26 = 1.0 / (float)(int)fVar26;
          if (bVar6) {
            uVar14 = 0;
          }
          pQVar15->fl32[2] = fVar26;
          pQVar15->fl32[0] = fVar26 * fVar24;
          pQVar15->fl32[1] = fVar26 * fVar27;
          pQVar15[1].iv[0] = ColorR;
          *(int *)((int)pQVar15 + 0x14) = ColorG;
          *(int *)((int)pQVar15 + 0x1c) = (int)fVar25;
          *(int *)((int)pQVar15 + 0x18) = ColorB;
          pQVar15[2].iv[0] = (int)(*pafVar9)[0];
          *(float *)((int)pQVar15 + 0x24) = (*pafVar9)[1];
          pfVar7 = *pafVar9;
          pafVar9 = pafVar9[1];
          *(float *)((int)pQVar15 + 0x28) = pfVar7[2];
          *(undefined4 *)((int)pQVar15 + 0x2c) = uVar14;
          pQVar15 = pQVar15 + 3;
        } while (iVar22 < 4);
        iVar11 = iVar11 + 1;
        EndDmaDirectTrans__FP10Q_WORDDATA(pQVar12 + 0x10);
        piVar13 = piVar13 + 1;
      } while (iVar11 < PolyNo);
    }
    iVar11 = EffWrkStopFlgGet__Fv();
    if (iVar11 == 0) {
      EffectHazeParticleReqOneFrame__FP9HAZE_CTRL(local_a0);
      GetHazeAllVelocity__FPfP9HAZE_CTRL(AllVelocity,local_a0);
      HazeAllVelocityCtrl__FP9HAZE_CTRL(local_a0);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(0,0x40);
      iVar11 = UpdateHazeParticles__FP13HAZE_PARTICLEPfi
                         ((HAZE_PARTICLE *)local_a0,AllVelocity,(int)(short)local_a0->Type);
      local_a0->disp = (ushort)iVar11;
                    /* end of inlined section */
    }
  }
  return local_a0;
}

void SetHaze(EFFECT_CONT *ec) {
  HAZE_CTRL *pHVar1;
  void *pvVar2;
  
  if (haze_stop == 0) {
    pHVar1 = (HAZE_CTRL *)ec->pnt[1];
    if (pHVar1 == (HAZE_CTRL *)0x0) {
      pHVar1 = (HAZE_CTRL *)EFFECT_MALLOC__Fi(0x1020);
      ec->pnt[1] = pHVar1;
      if (pHVar1 == (HAZE_CTRL *)0x0) {
        ResetEffects__FPv(ec);
        pHVar1 = (HAZE_CTRL *)ec->pnt[1];
      }
      else {
        HazeCtrlInit__FP9HAZE_CTRLPA3_fT1iiPf
                  (pHVar1,(float (*) [4])ec->pnt[0],(float (*) [4])ec->pnt[2],(ec->dat).iv[1],
                   (ec->dat).iv[2],(float *)ec->pnt[3]);
        pHVar1 = (HAZE_CTRL *)ec->pnt[1];
      }
    }
    pvVar2 = HazeCtrl__FP9HAZE_CTRLf(pHVar1,DAT_003edea4);
    ec->pnt[1] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      ResetEffects__FPv(ec);
    }
  }
  return;
}

static void EffectHazeParticleReqOneFrame(HAZE_CTRL *pHazeCtrl) {
	HAZE_PARTICLE *pParticle;
	HAZE_PARAMETER *pHazeParam;
	float Offset[4];
	float Frequency;
	float RandVal;
	int ReqNum;
	int i;
	
  ushort uVar1;
  HAZE_PARAMETER *pHVar2;
  int iVar3;
  HAZE_PARTICLE *pHazeParticle;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float Offset [4];
  undefined auStack_90 [64];
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  
  fVar6 = 100.0;
  pHVar2 = EffectHazeGetParameterPtr__Fi((int)(short)pHazeCtrl->Type);
  iVar7 = pHVar2->Frequency;
  iVar4 = (int)((float)iVar7 / fVar6);
  fVar5 = (float)iVar4 * fVar6;
                    /* inlined from effect.h */
  iVar3 = rand();
                    /* end of inlined section */
  if (((float)iVar3 / DAT_003edea8) * fVar6 <= (float)iVar7 - fVar5) {
    iVar4 = iVar4 + 1;
  }
  if (pHazeCtrl->pRot == (float (*) [4])0x0) {
    Offset[0] = 0.0;
    Offset[1] = 0.0;
    Offset[2] = 0.0;
    Offset[3] = 0.0;
  }
  else {
    local_48 = (float)(pHVar2->OffsetZ + -10000);
    local_50 = (float)(pHVar2->OffsetX + -10000);
    local_4c = (float)(pHVar2->OffsetY + -10000);
    local_44 = 0x3f800000;
    sceVu0UnitMatrix(auStack_90);
    sceVu0RotMatrixY((*pHazeCtrl->pRot)[1],auStack_90,auStack_90);
    sceVu0ApplyMatrix(Offset,auStack_90,&local_50);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    uVar1 = pHazeCtrl->disp;
    while ((short)uVar1 < 0x40) {
      pHazeParticle = EffectHazeGetParticleBuf__FP9HAZE_CTRL(pHazeCtrl);
      if (pHazeParticle != (HAZE_PARTICLE *)0x0) {
        EffectHazeInitParticle__FP13HAZE_PARTICLEPfT1i
                  (pHazeParticle,(float *)pHazeCtrl->pPos,Offset,(int)(short)pHazeCtrl->Type);
        pHazeCtrl->disp = pHazeCtrl->disp + 1;
      }
      iVar3 = iVar3 + 1;
      if (iVar4 <= iVar3) {
        return;
      }
      uVar1 = pHazeCtrl->disp;
    }
  }
  return;
}

static HAZE_PARTICLE* EffectHazeGetParticleBuf(HAZE_CTRL *pHazeCtrl) {
	HAZE_PARTICLE *pRetBuf;
	int i;
	
  HAZE_PARTICLE *pHVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (0x3f < iVar2) {
      return (HAZE_PARTICLE *)0x0;
    }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
    pHVar1 = (pHazeCtrl->Particles).field0_0x0.m_aData + iVar2;
    if (pHVar1->Lifetime == 0) break;
    iVar2 = iVar2 + 1;
  }
  _fixed_array_verifyrange__H1Z13HAZE_PARTICLE_UiUi_PX01(iVar2,0x40);
  return pHVar1;
                    /* end of inlined section */
}

static void EffectHazeInitParticle(HAZE_PARTICLE *pHazeParticle, float *CenterPos, float *Offset, int HazeType) {
	HAZE_PARAMETER *pHazeParam;
	float matWork[4][4];
	float vWork[4];
	float RotY;
	float Length;
	int LifeTime;
	float Scale;
	float MaxY;
	float MinY;
	float SpeedXMax;
	float SpeedXMin;
	float SpeedYMax;
	float SpeedYMin;
	float SpeedZMax;
	float SpeedZMin;
	float RotZMax;
	float RotZMin;
	float RotZTime;
	
  int iVar1;
  int iVar2;
  float fVar3;
  HAZE_PARAMETER *pHVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float matWork [4] [4];
  float vWork [4];
  float RotZMax;
  float RotZMin;
  
  pHVar4 = EffectHazeGetParameterPtr__Fi(HazeType);
                    /* inlined from effect.h */
  iVar5 = rand();
  fVar3 = DAT_003edeac;
  fVar10 = ((float)iVar5 / DAT_003edeac + (float)iVar5 / DAT_003edeac) * DAT_003edeb0 - DAT_003edeb0
  ;
  iVar6 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  iVar5 = pHVar4->SpeedZMax;
  fVar9 = (float)pHVar4->RotZMax * DAT_003edeb4;
  iVar1 = pHVar4->AlphaInTime;
  iVar19 = pHVar4->StartScale;
  vWork[0] = 0.0;
                    /* inlined from effect.h */
  vWork[2] = ((float)iVar6 / fVar3) * (float)pHVar4->AreaRadius;
                    /* end of inlined section */
  vWork[1] = 0.0;
  iVar6 = pHVar4->AlphaKeepTime;
  fVar8 = (float)pHVar4->RotZMin * DAT_003edeb4;
  iVar2 = pHVar4->AlphaOutTime;
  vWork[3] = 1.0;
  fVar16 = (float)(pHVar4->SpeedZMin + -1000) / 100.0;
  fVar18 = (float)(pHVar4->MinY + -10000);
  fVar20 = (float)pHVar4->RotZTime;
  fVar14 = (float)(pHVar4->SpeedXMin + -1000) / 100.0;
  fVar11 = (float)(pHVar4->MaxY + -10000) - fVar18;
  fVar17 = (float)(pHVar4->SpeedYMin + -1000) / 100.0;
  fVar12 = (float)(pHVar4->SpeedYMax + -1000) / 100.0;
  fVar13 = (float)(pHVar4->SpeedXMax + -1000) / 100.0 - fVar14;
  sceVu0UnitMatrix(matWork);
  fVar12 = fVar12 - fVar17;
  sceVu0RotMatrixY(fVar10,matWork,matWork);
  sceVu0ApplyMatrix(pHazeParticle,matWork,vWork);
                    /* inlined from effect.h */
  iVar7 = rand();
                    /* end of inlined section */
  fVar15 = (float)(iVar5 + -1000) / 100.0 - fVar16;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pHazeParticle->Position[1] = fVar11 * ((float)iVar7 / fVar3) + fVar18;
  sceVu0AddVector(pHazeParticle,pHazeParticle,CenterPos);
  sceVu0AddVector(pHazeParticle,pHazeParticle,Offset);
                    /* inlined from effect.h */
  iVar5 = rand();
  pHazeParticle->Velocity[0] = fVar13 * ((float)iVar5 / fVar3) + fVar14;
  iVar5 = rand();
  pHazeParticle->Velocity[1] = fVar12 * ((float)iVar5 / fVar3) + fVar17;
  iVar5 = rand();
                    /* end of inlined section */
  pHazeParticle->Velocity[3] = 0.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pHazeParticle->Lifetime = iVar1 + iVar6 + iVar2;
  fVar10 = pHazeParticle->Velocity[3];
  pHazeParticle->Scale = (float)iVar19 / 100.0;
  pHazeParticle->Alpha = 0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pHazeParticle->RotZ = fVar10;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pHazeParticle->Velocity[2] = fVar15 * ((float)iVar5 / fVar3) + fVar16;
  if (fVar20 == fVar10) {
    pHazeParticle->RotZSpeed = fVar10;
  }
  else {
                    /* inlined from effect.h */
    iVar5 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
    pHazeParticle->RotZSpeed = ((fVar9 - fVar8) * ((float)iVar5 / fVar3) + fVar8) / fVar20;
    iVar5 = rand();
    if ((float)iVar5 / fVar3 + (float)iVar5 / fVar3 < 1.0) {
                    /* end of inlined section */
      pHazeParticle->RotZSpeed = -pHazeParticle->RotZSpeed;
    }
  }
  return;
}

static void GetHazeAllVelocity(float *Velocity, HAZE_CTRL *pHazeCtrl) {
	HAZE_PARAMETER *pHazeParam;
	float SpeedX;
	float SpeedY;
	float SpeedZ;
	float SpeedX1;
	float SpeedY1;
	float SpeedZ1;
	float SpeedX2;
	float SpeedY2;
	float SpeedZ2;
	float SpeedX3;
	float SpeedY3;
	float SpeedZ3;
	float Progress;
	
  HAZE_PARAMETER *pHVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pHVar1 = EffectHazeGetParameterPtr__Fi((int)(short)pHazeCtrl->Type);
  fVar9 = (float)pHazeCtrl->AllVelocityTime / 60.0;
  fVar11 = (float)(pHVar1->AllSpeedZ_3 + -1000) / 100.0;
  fVar10 = (float)(pHVar1->AllSpeedX_1 + -1000) / 100.0;
  fVar8 = (float)(pHVar1->AllSpeedY_1 + -1000) / 100.0;
  fVar7 = (float)(pHVar1->AllSpeedZ_1 + -1000) / 100.0;
  fVar5 = (float)(pHVar1->AllSpeedX_2 + -1000) / 100.0;
  fVar6 = (float)(pHVar1->AllSpeedY_2 + -1000) / 100.0;
  fVar3 = (float)(pHVar1->AllSpeedZ_2 + -1000) / 100.0;
  fVar4 = (float)(pHVar1->AllSpeedX_3 + -1000) / 100.0;
  fVar2 = (float)(pHVar1->AllSpeedY_3 + -1000) / 100.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  switch(pHazeCtrl->AllVelocityStatus) {
  case 0:
    fVar12 = fVar7;
    fVar13 = fVar10;
    fVar14 = fVar8;
    break;
  case 1:
    fVar12 = (fVar3 - fVar7) * fVar9 + fVar7;
    fVar13 = (fVar5 - fVar10) * fVar9 + fVar10;
    fVar14 = (fVar6 - fVar8) * fVar9 + fVar8;
    break;
  case 2:
    fVar12 = fVar3;
    fVar13 = fVar5;
    fVar14 = fVar6;
    break;
  case 3:
    fVar12 = (fVar11 - fVar3) * fVar9 + fVar3;
    fVar13 = (fVar4 - fVar5) * fVar9 + fVar5;
    fVar14 = (fVar2 - fVar6) * fVar9 + fVar6;
    break;
  case 4:
    fVar12 = fVar11;
    fVar13 = fVar4;
    fVar14 = fVar2;
    break;
  case 5:
    fVar12 = (fVar7 - fVar11) * fVar9 + fVar11;
    fVar13 = (fVar10 - fVar4) * fVar9 + fVar4;
    fVar14 = (fVar8 - fVar2) * fVar9 + fVar2;
  }
  *Velocity = fVar13;
  Velocity[1] = fVar14;
  Velocity[2] = fVar12;
  Velocity[3] = 0.0;
  return;
}

static void HazeAllVelocityCtrl(HAZE_CTRL *pHazeCtrl) {
	HAZE_PARAMETER *pHazeParam;
	int Type1Time;
	int Type2Time;
	int Type3Time;
	
  int iVar1;
  int iVar2;
  HAZE_PARAMETER *pHVar3;
  int iVar4;
  
  pHVar3 = EffectHazeGetParameterPtr__Fi((int)(short)pHazeCtrl->Type);
  iVar4 = pHVar3->AllSpeedTime_3;
  iVar1 = pHVar3->AllSpeedTime_1;
  iVar2 = pHVar3->AllSpeedTime_2;
  pHazeCtrl->AllVelocityTime = pHazeCtrl->AllVelocityTime + 1;
  switch(pHazeCtrl->AllVelocityStatus) {
  case 0:
    if (pHazeCtrl->AllVelocityTime < iVar1) {
      return;
    }
    iVar4 = 1;
    break;
  case 1:
    if (pHazeCtrl->AllVelocityTime < 0x3c) {
      return;
    }
    iVar4 = 2;
    break;
  case 2:
    if (pHazeCtrl->AllVelocityTime < iVar2) {
      return;
    }
    iVar4 = 3;
    break;
  case 3:
    if (pHazeCtrl->AllVelocityTime < 0x3c) {
      return;
    }
    iVar4 = 4;
    break;
  case 4:
    if (pHazeCtrl->AllVelocityTime < iVar4) {
      return;
    }
    iVar4 = 5;
    break;
  case 5:
    if (0x3b < pHazeCtrl->AllVelocityTime) {
      pHazeCtrl->AllVelocityStatus = 0;
      pHazeCtrl->AllVelocityTime = 0;
    }
  default:
    goto switchD_0015ae14_caseD_6;
  }
  pHazeCtrl->AllVelocityTime = 0;
  pHazeCtrl->AllVelocityStatus = iVar4;
switchD_0015ae14_caseD_6:
  return;
}

static int UpdateHazeParticles(HAZE_PARTICLE *pPtop, float *AllVelocity, int HazeType) {
	HAZE_PARAMETER *pHazeParam;
	int BaseLifeTime;
	float StartScale;
	float EndScale;
	int AlphaMax;
	int i;
	int LeftNum;
	float Progress;
	float AlphaRate;
	int Time;
	
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  HAZE_PARAMETER *pHVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pHVar5 = EffectHazeGetParameterPtr__Fi(HazeType);
  iVar1 = pHVar5->AlphaInTime;
  iVar13 = pHVar5->EndScale;
  iVar2 = pHVar5->AlphaOutTime;
  iVar9 = iVar1 + pHVar5->AlphaKeepTime;
  iVar3 = pHVar5->Alpha;
  iVar11 = 0;
  fVar16 = (float)pHVar5->StartScale / 100.0;
  iVar8 = iVar9 + iVar2;
  if (pPtop != (HAZE_PARTICLE *)0x0) {
    iVar10 = 0x3f;
    fVar15 = DAT_003edeb8;
    iVar11 = 0;
    do {
      iVar6 = pPtop->Lifetime;
      if (iVar8 == 0) {
        fVar14 = 1.0;
        fVar12 = 0.0;
      }
      else {
        fVar12 = 1.0;
        iVar7 = iVar8 - iVar6;
        fVar14 = 1.0 - (float)iVar6 / (float)iVar8;
        if (iVar7 < iVar1) {
          if (iVar1 != 0) {
            fVar12 = (float)iVar7 / (float)iVar1;
          }
        }
        else {
          fVar12 = 1.0;
          if (iVar9 <= iVar7) {
            if (iVar2 == 0) {
              fVar12 = 0.0;
            }
            else {
              fVar12 = 1.0 - (float)(iVar7 - iVar9) / (float)iVar2;
            }
          }
        }
      }
      if (iVar6 == 0) {
        pPtop->Alpha = 0;
      }
      else {
        pPtop->Alpha = (int)((float)iVar3 * fVar12);
        pPtop->Scale = ((float)iVar13 / 100.0 - fVar16) * fVar14 + fVar16;
        sceVu0AddVector(pPtop,pPtop,pPtop->Velocity);
        sceVu0AddVector(pPtop,pPtop,AllVelocity);
        fVar12 = pPtop->RotZ + pPtop->RotZSpeed;
        bVar4 = DAT_003edebc < fVar12;
        pPtop->RotZ = fVar12;
        if (bVar4) {
          pPtop->RotZ = fVar12 - fVar15;
        }
        if (pPtop->RotZ < DAT_003edec0) {
          pPtop->RotZ = pPtop->RotZ + fVar15;
          iVar6 = pPtop->Lifetime;
        }
        else {
          iVar6 = pPtop->Lifetime;
        }
        iVar11 = iVar11 + 1;
        pPtop->Lifetime = iVar6 + -1;
      }
      iVar10 = iVar10 + -1;
      pPtop = pPtop + 1;
    } while (-1 < iVar10);
  }
  return iVar11;
}

HAZE_PARAMETER* EffectHazeGetParameterPtr(int Type) {
	HAZE_PARAMETER *pRetPara;
	
  if (Type == 0) {
    return &HazeParameter;
  }
  if (Type != 1) {
    return &SaeHazeParameter;
  }
  return &KusabiHazeParameter;
}

HAZE_PARAMETER* EffectHazeGetParameterPtrOrg(int Type) {
	HAZE_PARAMETER *pRetPara;
	
  if (Type == 0) {
    return &HazeParameter;
  }
  if (Type != 1) {
    return &SaeHazeParameter;
  }
  return &KusabiHazeParameter;
}

static void EffectThunderLightInit() {
	THUNDER_LIGHT_CTRL *pTlCtrl;
	
  ThunderLightCtrl.ThunderTime = 0;
  ThunderLightCtrl.LightningStatus = 0;
  ThunderLightCtrl.LightningTime = 0;
  ThunderLightCtrl.LightningFlg = 0;
  ThunderLightCtrl.ThunderStatus = 0;
  return;
}

void EffectThunderLightReq(float *LightningDirection, int DelayTime, float *ThunderPosition) {
	THUNDER_LIGHT_CTRL *pTlCtrl;
	
                    /* inlined from ../graph3d/g3dxVu0.h */
  ThunderLightCtrl.LightningDirection[0] = (float)*(undefined8 *)LightningDirection;
  ThunderLightCtrl.LightningDirection[1] = (float)((ulong)*(undefined8 *)LightningDirection >> 0x20)
  ;
  ThunderLightCtrl.LightningDirection[2] = LightningDirection[2];
  ThunderLightCtrl.ThunderPosition[0] = (float)*(undefined8 *)ThunderPosition;
  ThunderLightCtrl.ThunderPosition[1] = (float)((ulong)*(undefined8 *)ThunderPosition >> 0x20);
  ThunderLightCtrl.ThunderPosition[2] = ThunderPosition[2];
  ThunderLightCtrl.ThunderPosition[3] = ThunderPosition[3];
                    /* end of inlined section */
  ThunderLightCtrl.ThunderTime = DelayTime;
  ThunderLightCtrl.ThunderStatus = 4;
  ThunderLightCtrl.LightningDirection[3] = 0.0;
  ThunderLightCtrl.LightningStatus = 4;
  ThunderLightCtrl.LightningTime = 0;
  ThunderLightCtrl.LightningFlg = 0;
  return;
}

void EffectThunderLightExec() {
	THUNDER_LIGHT_CTRL *pTlCtrl;
	SND_3D_SET Snd3d;
	
  _SND_3D_SET Snd3d;
  
  if (ThunderLightCtrl.LightningStatus == 2) {
    ThunderLightCtrl.LightningTime = ThunderLightCtrl.LightningTime + -1;
    if (ThunderLightCtrl.LightningTime == 0) {
      ThunderLightCtrl.LightningStatus = 3;
      ThunderLightCtrl.LightningTime = 0xc;
    }
    goto LAB_0015b2dc;
  }
  if (ThunderLightCtrl.LightningStatus < 3) {
    if (ThunderLightCtrl.LightningStatus != 1) goto LAB_0015b2dc;
  }
  else {
    if (ThunderLightCtrl.LightningStatus == 3) {
      ThunderLightCtrl.LightningFlg = 1;
      ThunderLightCtrl.LightningTime = ThunderLightCtrl.LightningTime + -1;
      if (ThunderLightCtrl.LightningTime == 0) {
        ThunderLightCtrl.LightningStatus = 0;
        ThunderLightCtrl.LightningFlg = 0;
      }
      goto LAB_0015b2dc;
    }
    if ((ThunderLightCtrl.LightningStatus != 4) ||
       (ThunderLightCtrl.LightningTime = ThunderLightCtrl.LightningTime + -1,
       ThunderLightCtrl.LightningTime != -1)) goto LAB_0015b2dc;
    ThunderLightCtrl.LightningStatus = 1;
    ThunderLightCtrl.LightningTime = 2;
  }
  ThunderLightCtrl.LightningFlg = 1;
  ThunderLightCtrl.LightningTime = ThunderLightCtrl.LightningTime + -1;
  if (ThunderLightCtrl.LightningTime == 0) {
    ThunderLightCtrl.LightningFlg = 0;
    ThunderLightCtrl.LightningTime = 2;
    ThunderLightCtrl.LightningStatus = 2;
  }
LAB_0015b2dc:
  if (ThunderLightCtrl.ThunderStatus == 2) {
    if (ThunderLightCtrl.ThunderTime + -1 != 0) {
      ThunderLightCtrl.ThunderTime = ThunderLightCtrl.ThunderTime + -1;
      return;
    }
    ThunderLightCtrl.ThunderStatus = 3;
    ThunderLightCtrl.ThunderTime = 0x2d;
    return;
  }
  if (ThunderLightCtrl.ThunderStatus < 3) {
    if (ThunderLightCtrl.ThunderStatus != 1) {
      return;
    }
  }
  else {
    if (ThunderLightCtrl.ThunderStatus == 3) {
      ThunderLightCtrl.ThunderTime = ThunderLightCtrl.ThunderTime + -1;
      VibrateRequest1__FUsUs(0,1);
      if (ThunderLightCtrl.ThunderTime != 0) {
        return;
      }
      ThunderLightCtrl.ThunderStatus = 0;
      return;
    }
    if (ThunderLightCtrl.ThunderStatus != 4) {
      return;
    }
    ThunderLightCtrl.ThunderTime = ThunderLightCtrl.ThunderTime + -1;
    if (ThunderLightCtrl.ThunderTime != -1) {
      return;
    }
    memset(&Snd3d,0,0xc);
    Snd3d.pos = (float (*) [4])ThunderLightCtrl.ThunderPosition;
    snd_utilAutoBDPlay(0xd0d,0xd0c,0,0,0x3200,0x1000,0,&Snd3d);
    ThunderLightCtrl.ThunderStatus = 1;
    ThunderLightCtrl.ThunderTime = 2;
  }
  ThunderLightCtrl.ThunderTime = ThunderLightCtrl.ThunderTime + -1;
  VibrateRequest1__FUsUs(0,1);
  if (ThunderLightCtrl.ThunderTime == 0) {
    ThunderLightCtrl.ThunderTime = 2;
    ThunderLightCtrl.ThunderStatus = 2;
  }
  return;
}

void EffectThunderLightSetRoomLight() {
	THUNDER_LIGHT_CTRL *pTlCtrl;
	G3DLIGHT TmpLight;
	
  G3DLIGHT TmpLight;
  
  if (ThunderLightCtrl.LightningFlg != 0) {
    EffectThunderLightGetG3dLight__FP8G3DLIGHT(&TmpLight);
    gra3dSetLight__FiPC8G3DLIGHT(1,&TmpLight);
    gra3dLightEnable__Fii(1,1);
    gra3dApplyLight__Fv();
  }
  return;
}

void EffectThunderLightGetG3dLight(G3DLIGHT *pLight) {
  float fVar1;
  undefined in_vf0 [16];
  undefined in_vf1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 uVar4;
  
  fVar1 = DAT_003edec4;
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pLight->vDiffuse[1] = DAT_003edec4;
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pLight->vDiffuse[0] = fVar1;
  pLight->vDiffuse[2] = 1.0;
  pLight->vDiffuse[3] = 1.0;
                    /* inlined from ../graph3d/g3dxVu0.h */
  auVar2 = _lqc2((undefined  [16])ThunderLightCtrl.LightningDirection);
  auVar3 = _vmul(auVar2,auVar2);
  _vnop();
  _vnop();
  _vnop();
  _vaddabc(auVar3,auVar3);
  auVar3 = _vmaddbc(in_vf1,auVar3);
  _vnop();
  _vnop();
  _vnop();
  uVar4 = _vrsqrt(in_vf0,auVar3);
  _vsubbc(in_vf0,in_vf0);
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  _vnop();
  auVar2 = _vmulq(auVar2,uVar4);
  auVar2 = _sqc2(auVar2);
  *(undefined (*) [16])pLight->vDirection = auVar2;
                    /* end of inlined section */
  pLight->fFalloff = 1.0;
  pLight->Type = G3DLIGHT_DIRECTIONAL;
  return;
}

int EffectThunderLightGetLightningFlg() {
	THUNDER_LIGHT_CTRL *pTlCtrl;
	
  return ThunderLightCtrl.LightningFlg;
}

void SetDoorSeal(EFFECT_CONT *ec) {
	float BasePos[4];
	
  float BasePos [4];
  
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
  BasePos[0] = (ec->fw).field0_0x0.m_aData[0];
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
  BasePos[1] = (ec->fw).field0_0x0.m_aData[1];
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(2,3);
  BasePos[2] = (ec->fw).field0_0x0.m_aData[2];
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  BasePos[3] = 1.0;
  SubDoorSeal__FPA3_fPff((float (*) [4])ec->pnt[0],BasePos,(ec->dat).fl32[1]);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void SubDoorSeal(float *pPosition[4], float *BasePos, float AlphaRate) {
	float LocalWorld[4][4];
	GRA3DCAMERA *pCam;
	float RotX;
	float RotY;
	DRAW_ENV DrawEnv;
	float Offset[4];
	
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  float LocalWorld [4] [4];
  float RotX;
  float RotY;
  DRAW_ENV DrawEnv;
  float Offset [4];
  
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  DrawEnv.tex1 = DAT_003a70c8;
  DrawEnv.alpha = DAT_003a70d0;
  DrawEnv.test = DAT_003a70e0;
  DrawEnv.clamp = DAT_003a70e8;
  DrawEnv.zbuf = DAT_003a70d8;
  DrawEnv.prim = DAT_003a70f0;
  memset(Offset,0,0x10);
  Offset[3] = 1.0;
  Get2PosRot__FPCfT0PfT2((float *)v1,BasePos,&RotX,&RotY);
  sceVu0UnitMatrix(LocalWorld);
  sceVu0RotMatrixX(RotX,LocalWorld,LocalWorld);
  sceVu0RotMatrixY(RotY,LocalWorld,LocalWorld);
  sceVu0ApplyMatrix(Offset,LocalWorld,Offset);
  sceVu0AddVector(pPosition,Offset,BasePos);
  Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
  sceVu0UnitMatrix(LocalWorld);
  sceVu0RotMatrixX(RotX,LocalWorld,LocalWorld);
  sceVu0RotMatrixY(RotY,LocalWorld,LocalWorld);
  sceVu0TransMatrix(LocalWorld,LocalWorld,pPosition);
  Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
            (LocalWorld,&DrawEnv,0x48,DAT_003edec8,DAT_003edecc,'d','_','g',
             (uchar)(int)(AlphaRate * 76.0));
  return;
}

static void DoorSealDisappearInit() {
	DOOR_SEAL_DISAPPEAR_CTRL *pCtrl;
	
  DoorSealDisappearCtrl.DeformAlphaRate = 0.0;
  DoorSealDisappearCtrl.Counter = 0;
  DoorSealDisappearCtrl.Status = 0;
  DoorSealDisappearCtrl.AlphaRate = 0.0;
  return;
}

void DoorSealDisappearReq() {
	DOOR_SEAL_DISAPPEAR_CTRL *pCtrl;
	
  if (DoorSealDisappearCtrl.Status == 0) {
    DoorSealDisappearCtrl.StreamId =
         StreamAutoPreload(0xa3f,0xa3e,0x11,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    DoorSealDisappearCtrl.Status = 1;
    DoorSealDisappearCtrl.DeformAlphaRate = 0.0;
    DoorSealDisappearCtrl.Counter = 0;
    DoorSealDisappearCtrl.AlphaRate = 0.0;
  }
  return;
}

int DoorSealDisappearIsEnd() {
	DOOR_SEAL_DISAPPEAR_CTRL *pCtrl;
	
  return (int)(DoorSealDisappearCtrl.Status == 0);
}

void DoorSealDisappearEndProc() {
	DOOR_SEAL_DISAPPEAR_CTRL *pCtrl;
	
  StreamAutoFadeOut(DoorSealDisappearCtrl.StreamId,1);
  DoorSealDisappearCtrl.Status = 0;
  DoorSealDisappearCtrl.DeformAlphaRate = 0.0;
  DoorSealDisappearCtrl.Counter = 0;
  DoorSealDisappearCtrl.AlphaRate = 0.0;
  return;
}

static void DoorSealDisappearMain(DOOR_SEAL_DISAPPEAR_CTRL *pCtrl) {
	int SoulInTime;
	int DeformInTime;
	int SoulOutTime;
	int DeformOutTime;
	
  int iVar1;
  int iVar2;
  
  iVar2 = pCtrl->Status;
  if (iVar2 == 1) {
    iVar2 = StreamAutoIsPreload(pCtrl->StreamId);
    if (iVar2 == 0) {
      iVar2 = pCtrl->Status;
    }
    else {
      pCtrl->Counter = 0;
      pCtrl->Status = 2;
      iVar2 = 2;
    }
  }
  if (iVar2 == 2) {
    iVar1 = pCtrl->Counter;
    if (iVar1 < 10) {
      pCtrl->Counter = iVar1 + 1;
      pCtrl->AlphaRate = (float)iVar1 / 10.0;
    }
    else {
      pCtrl->Status = 3;
      iVar2 = 3;
      pCtrl->AlphaRate = 1.0;
      pCtrl->Counter = 0;
    }
  }
  if (iVar2 == 3) {
    if (pCtrl->Counter < 0xf) {
      pCtrl->Counter = pCtrl->Counter + 1;
    }
    else {
      pCtrl->Counter = 0;
      pCtrl->Status = 4;
      StreamAutoPreloadPlay(pCtrl->StreamId);
      iVar2 = pCtrl->Status;
    }
  }
  if (iVar2 == 4) {
    iVar1 = pCtrl->Counter;
    if (iVar1 < 0x1e) {
      pCtrl->Counter = iVar1 + 1;
      pCtrl->DeformAlphaRate = (float)iVar1 / 30.0;
    }
    else {
      pCtrl->Status = 5;
      iVar2 = 5;
      pCtrl->DeformAlphaRate = 1.0;
      pCtrl->Counter = 0;
    }
  }
  if (iVar2 == 5) {
    if (pCtrl->Counter < 0x23) {
      pCtrl->Counter = pCtrl->Counter + 1;
    }
    else {
      pCtrl->Counter = 0;
      pCtrl->Status = 6;
      iVar2 = 6;
    }
  }
  if (iVar2 == 6) {
    iVar1 = pCtrl->Counter;
    if (iVar1 < 0x3e) {
      pCtrl->Counter = iVar1 + 1;
      pCtrl->AlphaRate = 1.0 - (float)iVar1 / 62.0;
    }
    else {
      pCtrl->Counter = 0;
      pCtrl->Status = 7;
      iVar2 = 7;
      pCtrl->AlphaRate = 0.0;
    }
  }
  if (iVar2 == 7) {
    iVar2 = pCtrl->Counter;
    if (iVar2 == 0x69) {
      pCtrl->DeformAlphaRate = 0.0;
      pCtrl->Status = 0;
      pCtrl->Counter = 0;
    }
    else {
      pCtrl->Counter = iVar2 + 1;
      pCtrl->DeformAlphaRate = 1.0 - (float)iVar2 / 105.0;
    }
  }
  return;
}

static void DoorSealDisappearCameraBackup(DOOR_SEAL_CAMERA_BACKUP *pBakBuf) {
  float (*pafVar1) [4];
  float (*pafVar2) [4];
  float fVar3;
  float fVar4;
  float fVar5;
  
  pafVar1 = gra3dcamGetPosition__Fv();
  pafVar2 = gra3dcamGetTarget__Fv();
                    /* inlined from ../graph3d/g3dxVu0.h */
  fVar3 = (*pafVar1)[1];
  fVar4 = (*pafVar1)[2];
  fVar5 = (*pafVar1)[3];
  pBakBuf->Position[0] = (*pafVar1)[0];
  pBakBuf->Position[1] = fVar3;
  pBakBuf->Position[2] = fVar4;
  pBakBuf->Position[3] = fVar5;
  fVar3 = (*pafVar2)[1];
  fVar4 = (*pafVar2)[2];
  fVar5 = (*pafVar2)[3];
  pBakBuf->Target[0] = (*pafVar2)[0];
  pBakBuf->Target[1] = fVar3;
  pBakBuf->Target[2] = fVar4;
  pBakBuf->Target[3] = fVar5;
                    /* end of inlined section */
  fVar3 = gra3dcamGetFov__Fv();
  pBakBuf->Fov = fVar3;
  fVar3 = gra3dcamGetRoll__Fv();
  pBakBuf->Roll = fVar3;
  return;
}

static void DoorSealDisappearCameraReturn(DOOR_SEAL_CAMERA_BACKUP *pBakBuf) {
  gra3dcamSetPosition__FPCf(pBakBuf->Position);
  gra3dcamSetTarget__FPCfi(pBakBuf->Target,1);
  gra3dcamSetRoll__Ff(pBakBuf->Roll);
  gra3dcamSetFov__Ff(pBakBuf->Fov);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,0);
  return;
}

static void DoorSealDisappearCameraSet() {
	static float DoorSealCameraPos[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ -500.f,
		/* [3] = */ 1.f
	};
	static float DoorSealCameraTgt[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 1.f
	};
	
  gra3dcamSetPosition__FPCf((float *)DoorSealCameraPos_1388);
  gra3dcamSetTarget__FPCfi((float *)&DoorSealCameraTgt_1389,1);
  gra3dcamSetRoll__Ff(0.0);
  gra3dcamSetFov__Ff(DAT_003eded0);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,0);
  return;
}

static void DoorSealDisappearPDeformParamSet(EFFECT_CONT *ec, float *pPos[4], int AlphaRate, float *pSpeed, float *pWaveRate) {
	float ScaleX;
	float ScaleY;
	int ColorR;
	int ColorB;
	float Speed;
	float WaveRate;
	
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar2 = DAT_003eded8;
  uVar1 = DAT_003eded4;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  ec->max = AlphaRate;
  (ec->dat).uc8[2] = '\x18';
  (ec->dat).uc8[4] = 0xff;
  (ec->dat).ui32[2] = uVar1;
  (ec->dat).ui32[3] = uVar2;
  (ec->dat).uc8[0] = '\x18';
  ec->pnt[0] = pPos;
  fVar3 = DAT_003ededc;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  (ec->dat).uc8[1] = '\x01';
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
  (ec->fw).field0_0x0.m_aData[0] = 0.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  (ec->fw).field0_0x0.m_aData[1] = 1.0;
                    /* end of inlined section */
  ec->pnt[2] = pSpeed;
  *pSpeed = fVar3;
  ec->pnt[4] = pWaveRate;
  *pWaveRate = 2.0;
  ec->cnt = 0;
  (ec->dat).uc8[5] = '\x01';
  ec->g = 0x96;
  ec->b = 0x97;
  ec->r = 0x96;
  ec->in = 0;
  ec->keep = 0;
  ec->out = 0;
  ec->pnt[1] = (void *)0x0;
  ec->pnt[5] = (void *)0x0;
  return;
}

static void DoorSealDisappearPDeformBlurParamSet(EFFECT_CONT *ec, float *pPos[4], int AlphaRate) {
	float ScaleX;
	float ScaleY;
	
  uint uVar1;
  
  uVar1 = DAT_003edee0;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  ec->max = AlphaRate;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  (ec->dat).uc8[1] = '\x01';
  (ec->dat).uc8[2] = '\'';
  (ec->dat).uc8[4] = 0xff;
  (ec->dat).ui32[2] = uVar1;
  (ec->dat).ui32[3] = 0x3f400000;
  ec->pnt[0] = pPos;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  (ec->dat).uc8[0] = '\x18';
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
  (ec->fw).field0_0x0.m_aData[0] = 0.0;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
                    /* end of inlined section */
  (ec->dat).uc8[5] = '\x01';
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  (ec->fw).field0_0x0.m_aData[1] = 1.0;
                    /* end of inlined section */
  ec->b = 0x80;
  ec->cnt = 0;
  ec->in = 0;
  ec->keep = 0;
  ec->out = 0;
  ec->pnt[1] = (void *)0x0;
  ec->pnt[2] = (void *)0x0;
  ec->pnt[4] = (void *)0x0;
  ec->pnt[5] = (void *)0x0;
  ec->r = 0x80;
  ec->g = 0x80;
  return;
}

void DoorSealDisappearDraw() {
	float LocalWorld[4][4];
	DOOR_SEAL_DISAPPEAR_CTRL *pCtrl;
	static DRAW_ENV DrawEnv = {
		/* .tex1 = */ 353,
		/* .alpha = */ 72,
		/* .zbuf = */ 4462739736,
		/* .test = */ 196621,
		/* .clamp = */ 0,
		/* .prim = */ 3470656831586598916
	};
	float BasePos[4];
	DOOR_SEAL_CAMERA_BACKUP CameraBak;
	int Alpha;
	int DeformAlphaMax;
	int BlurAlphaMax;
	float DitherAlpha;
	int DeformAlphaRate;
	int BlurAlphaRate;
	
  float fVar1;
  float LocalWorld [4] [4];
  float BasePos [4];
  DOOR_SEAL_CAMERA_BACKUP CameraBak;
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  if (DoorSealDisappearCtrl.Status != 0) {
    DoorSealDisappearCameraBackup__FP23DOOR_SEAL_CAMERA_BACKUP(&CameraBak);
    DoorSealDisappearCameraSet__Fv();
    DoorSealDisappearTexPosGet__FPf(BasePos);
    sceVu0UnitMatrix(LocalWorld);
    sceVu0RotMatrixX(DAT_003edee4,LocalWorld,LocalWorld);
    sceVu0TransMatrix(LocalWorld,LocalWorld,BasePos);
    Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
              (LocalWorld,(DRAW_ENV *)DrawEnv_1399,0x48,300.0,DAT_003edee8,0xa1,0xb5,0xd8,
               (uchar)(int)(DoorSealDisappearCtrl.AlphaRate * 97.0));
    SubDither3__FiffUcUc(1,DoorSealDisappearCtrl.DeformAlphaRate * 64.0,24.0,'@','@');
    fVar1 = DoorSealDisappearCtrl.DeformAlphaRate * 77.0;
                    /* inlined from ../graph3d/g3dxVu0.h */
    DoorSealDisappearCtrl.BasePos[2] = BasePos[2];
    DoorSealDisappearCtrl.BasePos[3] = BasePos[3];
    DoorSealDisappearCtrl.BasePos[0] = (float)BasePos._0_8_;
    DoorSealDisappearCtrl.BasePos[1] = SUB84(BasePos._0_8_,4);
                    /* end of inlined section */
    DoorSealDisappearPDeformBlurParamSet__FP11EFFECT_CONTPA3_fi
              (&DoorSealDisappearCtrl.EffectContBlur,(float (*) [4])DoorSealDisappearCtrl.BasePos,
               (int)(DoorSealDisappearCtrl.DeformAlphaRate * 85.0));
    SetPartsDeform__FP11EFFECT_CONT(&DoorSealDisappearCtrl.EffectContBlur);
    DoorSealDisappearPDeformParamSet__FP11EFFECT_CONTPA3_fiPfT3
              (&DoorSealDisappearCtrl.EffectCont,(float (*) [4])DoorSealDisappearCtrl.BasePos,
               (int)fVar1,&DoorSealDisappearCtrl.DeformSpeed,&DoorSealDisappearCtrl.DeformRate);
    SetPartsDeform__FP11EFFECT_CONT(&DoorSealDisappearCtrl.EffectCont);
    DoorSealDisappearCameraReturn__FP23DOOR_SEAL_CAMERA_BACKUP(&CameraBak);
  }
  return;
}

static void DoorSealDisappearTexPosGet(float *Position) {
	float OffsetX;
	float OffsetY;
	
  Position[1] = 12.0;
  Position[3] = 1.0;
  Position[2] = 0.0;
  *Position = 0.0;
  return;
}

HEAT_HAZE* HEAT_HAZE * _fixed_array_verifyrange<HEAT_HAZE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

MANY_CANDLE_PARTICLE* MANY_CANDLE_PARTICLE * _fixed_array_verifyrange<MANY_CANDLE_PARTICLE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

sceVu0IVECTOR* int [3] * _fixed_array_verifyrange<int [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PARTICLE* PARTICLE * _fixed_array_verifyrange<PARTICLE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

EFF_LEAF* EFF_LEAF * _fixed_array_verifyrange<EFF_LEAF>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

EFF_LEAF_ONE* EFF_LEAF_ONE * _fixed_array_verifyrange<EFF_LEAF_ONE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

HAZE_PARTICLE* HAZE_PARTICLE * _fixed_array_verifyrange<HAZE_PARTICLE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from effect_oth.c */
  return;
}

type_info& HEAT_HAZE type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& MANY_CANDLE_PARTICLE type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& int [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PARTICLE type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& EFF_LEAF type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& EFF_LEAF_ONE type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& HAZE_PARTICLE type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to HazeParameter() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
