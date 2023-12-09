// STATUS: NOT STARTED

#include "effect_torch.h"

struct fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **> {
protected:
	TORCH2_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_PARAMETER*& operator[]();
	TORCH2_PARAMETER*& operator[]();
	TORCH2_PARAMETER** data();
	TORCH2_PARAMETER** begin();
	TORCH2_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_PARAMETER *,9> : fixed_array_base<TORCH2_PARAMETER *,9,TORCH2_PARAMETER **> {
};

struct fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **> {
protected:
	TORCH2_BURST_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_BURST_PARAMETER*& operator[]();
	TORCH2_BURST_PARAMETER*& operator[]();
	TORCH2_BURST_PARAMETER** data();
	TORCH2_BURST_PARAMETER** begin();
	TORCH2_BURST_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_BURST_PARAMETER *,9> : fixed_array_base<TORCH2_BURST_PARAMETER *,9,TORCH2_BURST_PARAMETER **> {
};

struct fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **> {
protected:
	TORCH2_SPARK_PARAMETER **m_aData;
	
public:
	fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TORCH2_SPARK_PARAMETER*& operator[]();
	TORCH2_SPARK_PARAMETER*& operator[]();
	TORCH2_SPARK_PARAMETER** data();
	TORCH2_SPARK_PARAMETER** begin();
	TORCH2_SPARK_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<TORCH2_SPARK_PARAMETER *,9> : fixed_array_base<TORCH2_SPARK_PARAMETER *,9,TORCH2_SPARK_PARAMETER **> {
};

typedef struct {
	float Position[4];
	short int Count;
	short int Cycle;
	short int ExecFlg;
} TORCH2_BIGFREA_CTRL;

TORCH2_PARAMETER TorchType00 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 284,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 25,
	/* .EndAlpha = */ 0,
	/* .R = */ 181,
	/* .G = */ 89,
	/* .B = */ 67,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType01 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 124,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 31,
	/* .EndAlpha = */ 0,
	/* .R = */ 55,
	/* .G = */ 29,
	/* .B = */ 21,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType02 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 171,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 84,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 25,
	/* .EndAlpha = */ 0,
	/* .R = */ 181,
	/* .G = */ 89,
	/* .B = */ 67,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType03 = {
	/* .LifeTime = */ 1000,
	/* .AppearNumMax = */ 3,
	/* .AppearNumMin = */ 0,
	/* .Range = */ 96,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 989,
	/* .SpeedYMin = */ 701,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 97,
	/* .StartScale = */ 121,
	/* .EndScale = */ 1000,
	/* .StartAlpha = */ 38,
	/* .EndAlpha = */ 0,
	/* .R = */ 21,
	/* .G = */ 21,
	/* .B = */ 21,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 1,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType04 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 100,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 30,
	/* .EndAlpha = */ 0,
	/* .R = */ 55,
	/* .G = */ 29,
	/* .B = */ 21,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType05 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 202,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 25,
	/* .EndAlpha = */ 0,
	/* .R = */ 57,
	/* .G = */ 63,
	/* .B = */ 66,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType06 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 284,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 25,
	/* .EndAlpha = */ 0,
	/* .R = */ 181,
	/* .G = */ 89,
	/* .B = */ 67,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType07 = {
	/* .LifeTime = */ 51,
	/* .AppearNumMax = */ 7,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 219,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 280,
	/* .StartScale = */ 496,
	/* .EndScale = */ 18,
	/* .StartAlpha = */ 18,
	/* .EndAlpha = */ 0,
	/* .R = */ 68,
	/* .G = */ 72,
	/* .B = */ 139,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 303,
	/* .FreaR = */ 75,
	/* .FreaG = */ 77,
	/* .FreaB = */ 191,
	/* .FreaAlpha = */ 68,
	/* .ParticleFollowMove = */ 80
};

TORCH2_PARAMETER TorchType08 = {
	/* .LifeTime = */ 50,
	/* .AppearNumMax = */ 6,
	/* .AppearNumMin = */ 1,
	/* .Range = */ 140,
	/* .SpeedXMax = */ 1031,
	/* .SpeedXMin = */ 974,
	/* .SpeedYMax = */ 889,
	/* .SpeedYMin = */ 868,
	/* .SpeedZMax = */ 1011,
	/* .SpeedZMin = */ 981,
	/* .Scale = */ 284,
	/* .StartScale = */ 358,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 25,
	/* .EndAlpha = */ 0,
	/* .R = */ 181,
	/* .G = */ 89,
	/* .B = */ 67,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0,
	/* .FreaSize = */ 140,
	/* .FreaR = */ 50,
	/* .FreaG = */ 50,
	/* .FreaB = */ 50,
	/* .FreaAlpha = */ 89,
	/* .ParticleFollowMove = */ 80
};

TORCH2_BURST_PARAMETER TorchBurstType00 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 300,
	/* .IntervalMin = */ 150
};

TORCH2_BURST_PARAMETER TorchBurstType01 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 0,
	/* .IntervalMin = */ 0
};

TORCH2_BURST_PARAMETER TorchBurstType02 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 0,
	/* .IntervalMin = */ 0
};

TORCH2_BURST_PARAMETER TorchBurstType03 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 0,
	/* .IntervalMin = */ 0
};

TORCH2_BURST_PARAMETER TorchBurstType04 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 300,
	/* .IntervalMin = */ 150
};

TORCH2_BURST_PARAMETER TorchBurstType05 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 141,
	/* .IntervalMin = */ 74
};

TORCH2_BURST_PARAMETER TorchBurstType06 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 300,
	/* .IntervalMin = */ 150
};

TORCH2_BURST_PARAMETER TorchBurstType07 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 300,
	/* .IntervalMin = */ 150
};

TORCH2_BURST_PARAMETER TorchBurstType08 = {
	/* .Range1 = */ 419,
	/* .Range2 = */ 149,
	/* .StartScale1 = */ 666,
	/* .StartScale2 = */ 246,
	/* .Frame1 = */ 3,
	/* .Frame2 = */ 33,
	/* .EndFrame = */ 50,
	/* .IntervalMax = */ 300,
	/* .IntervalMin = */ 150
};

TORCH2_SPARK_PARAMETER TorchSparkType00 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1056,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 23,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 127,
	/* .EndAlpha = */ 0,
	/* .R = */ 185,
	/* .G = */ 76,
	/* .B = */ 66
};

TORCH2_SPARK_PARAMETER TorchSparkType01 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1004,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 48,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 100,
	/* .EndAlpha = */ 0,
	/* .R = */ 75,
	/* .G = */ 35,
	/* .B = */ 21
};

TORCH2_SPARK_PARAMETER TorchSparkType02 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1004,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 48,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 100,
	/* .EndAlpha = */ 0,
	/* .R = */ 75,
	/* .G = */ 35,
	/* .B = */ 21
};

TORCH2_SPARK_PARAMETER TorchSparkType03 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1004,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 48,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 100,
	/* .EndAlpha = */ 0,
	/* .R = */ 75,
	/* .G = */ 35,
	/* .B = */ 21
};

TORCH2_SPARK_PARAMETER TorchSparkType04 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1004,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 48,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 100,
	/* .EndAlpha = */ 0,
	/* .R = */ 75,
	/* .G = */ 35,
	/* .B = */ 21
};

TORCH2_SPARK_PARAMETER TorchSparkType05 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1056,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 23,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 127,
	/* .EndAlpha = */ 0,
	/* .R = */ 51,
	/* .G = */ 55,
	/* .B = */ 78
};

TORCH2_SPARK_PARAMETER TorchSparkType06 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1056,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 23,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 127,
	/* .EndAlpha = */ 0,
	/* .R = */ 185,
	/* .G = */ 76,
	/* .B = */ 66
};

TORCH2_SPARK_PARAMETER TorchSparkType07 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1056,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 23,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 127,
	/* .EndAlpha = */ 0,
	/* .R = */ 185,
	/* .G = */ 76,
	/* .B = */ 66
};

TORCH2_SPARK_PARAMETER TorchSparkType08 = {
	/* .LifeTimeMax = */ 87,
	/* .LifeTimeMin = */ 3,
	/* .AppearNumMax = */ 18,
	/* .AppearNumMin = */ 13,
	/* .SpeedXMax = */ 1051,
	/* .SpeedXMin = */ 951,
	/* .SpeedYMax = */ 1056,
	/* .SpeedYMin = */ 897,
	/* .SpeedZMax = */ 1053,
	/* .SpeedZMin = */ 950,
	/* .AccelYMax = */ 1000,
	/* .AccelYMin = */ 981,
	/* .BrakeRate = */ 848,
	/* .StartScale = */ 23,
	/* .EndScale = */ 0,
	/* .StartAlpha = */ 127,
	/* .EndAlpha = */ 0,
	/* .R = */ 185,
	/* .G = */ 76,
	/* .B = */ 66
};

reference_fixed_array<TORCH2_PARAMETER *,9> pTorchParamPtr = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

reference_fixed_array<TORCH2_BURST_PARAMETER *,9> pTorchBurstParamPtr = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

reference_fixed_array<TORCH2_SPARK_PARAMETER *,9> pTorchSparkParamPtr = {
	/* base class 0 = */ {
		/* .m_aData = */ NULL
	}
};

unsigned char TORCH2_PARAMETER * type_info node[12];
unsigned char TORCH2_BURST_PARAMETER * type_info node[12];
unsigned char TORCH2_SPARK_PARAMETER * type_info node[12];
unsigned char PARTICLE type_info node[8];
unsigned char TORCH2_PARAMETER type_info node[8];
unsigned char TORCH2_BURST_PARAMETER type_info node[8];
unsigned char TORCH2_SPARK_PARAMETER type_info node[8];

TORCH2_BIGFREA_CTRL Torch2BigFreaCtrl = {
	/* .Position = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .Count = */ 0,
	/* .Cycle = */ 0,
	/* .ExecFlg = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a8350;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf22TORCH2_SPARK_PARAMETER(0x3f00b0,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf22TORCH2_SPARK_PARAMETER(0x3f00b8,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf22TORCH2_SPARK_PARAMETER(0x3a8398,_max);
  }
  return (uint **)0x0;
}

TORCH2_PARAMETER* EffOthTorch2ParameterPtrGet(int Type) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (8 < (uint)Type) {
    Type = 0;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP16TORCH2_PARAMETER_UiUi_PX01(Type,9);
  return *(TORCH2_PARAMETER **)((int)pTorchParamPtr.field0_0x0.m_aData + Type * 4);
}

TORCH2_BURST_PARAMETER* EffOthTorch2BurstParameterPtrGet(int Type) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (8 < (uint)Type) {
    Type = 0;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP22TORCH2_BURST_PARAMETER_UiUi_PX01(Type,9);
  return *(TORCH2_BURST_PARAMETER **)((int)pTorchBurstParamPtr.field0_0x0.m_aData + Type * 4);
}

TORCH2_SPARK_PARAMETER* EffOthTorch2SparkParameterPtrGet(int Type) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (8 < (uint)Type) {
    Type = 0;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP22TORCH2_SPARK_PARAMETER_UiUi_PX01(Type,9);
  return *(TORCH2_SPARK_PARAMETER **)((int)pTorchSparkParamPtr.field0_0x0.m_aData + Type * 4);
}

void TorchPartInit(TORCH_CTRL *pTc, int LifeTime, float *BasePos, int Type, int SeReqFlg) {
	int i;
	
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  TORCH_CTRL *pTVar5;
  int iVar6;
  
  pTVar5 = pTc;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].position[0] = 0.0;
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].position[1] = 0.0;
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].position[2] = 0.0;
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].position[3] = 1.0;
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].color[3] = 0.0;
                    /* end of inlined section */
    iVar6 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,200);
    (pTVar5->particles).field0_0x0.m_aData[0].lifetime = 0;
                    /* end of inlined section */
    pTVar5 = (TORCH_CTRL *)((pTVar5->particles).field0_0x0.m_aData + 1);
    iVar2 = iVar6;
  } while (iVar6 < 200);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar1 = *(undefined8 *)BasePos;
  fVar3 = BasePos[2];
  fVar4 = BasePos[3];
  pTc->BasePos[0] = (float)uVar1;
  pTc->BasePos[1] = (float)((ulong)uVar1 >> 0x20);
  pTc->BasePos[2] = fVar3;
  pTc->BasePos[3] = fVar4;
                    /* end of inlined section */
  pTc->head = 0;
  pTc->BurstCount = 0;
  iVar2 = EffOthTorch2BurstIntervalTimeGet__Fi((int)(short)pTc->Type);
  pTc->WindCount = 0;
  pTc->BurstInterval = iVar2;
  iVar2 = EffOthTorch2WindIntervalTimeGet__Fv();
  pTc->SeReqFlg = (ushort)SeReqFlg;
  pTc->blife = (ushort)LifeTime;
  pTc->Type = (ushort)Type;
  pTc->WindInterval = iVar2;
  pTc->AlphaRate = 1.0;
  pTc->max = (ushort)(LifeTime << 1);
  pTc->disp = 0;
  return;
}

void SetTorch2(EFFECT_CONT *ec) {
	float pos[4];
	TORCH2_PARAMETER *pParam;
	TORCH2_BURST_PARAMETER *pBurstParam;
	
  undefined8 *puVar1;
  TORCH2_PARAMETER *pParam;
  TORCH_CTRL *pTc;
  float pos [4];
  _DRAW_ENV_5 local_50;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  puVar1 = (undefined8 *)ec->pnt[0];
  pos[2] = *(float *)(puVar1 + 1);
  pos[3] = *(float *)((int)puVar1 + 0xc);
  pos[0] = (float)*puVar1;
  pos[1] = (float)((ulong)*puVar1 >> 0x20);
                    /* end of inlined section */
  pParam = EffOthTorch2ParameterPtrGet__Fi((uint)(ec->dat).uc8[2]);
  if (ec->pnt[1] == (void *)0x0) {
    pTc = (TORCH_CTRL *)EFFECT_MALLOC__Fi(0x3ed0);
    ec->pnt[1] = pTc;
    if (pTc == (TORCH_CTRL *)0x0) {
      ResetEffects__FPv(ec);
      return;
    }
    TorchPartInit__FP10TORCH_CTRLiPfii
              (pTc,pParam->LifeTime,pos,(uint)(ec->dat).uc8[2],(uint)(ec->dat).uc8[4]);
  }
  local_50.tex1 = DAT_003a83b0;
  local_50.clamp = DAT_003a83b8;
  local_50.test = DAT_003a83c0;
  local_50.alpha = DAT_003a83a8;
  local_50.zbuf = DAT_003a83c8;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_50);
  ContTorch2__FP10TORCH_CTRLPfiP16TORCH2_PARAMETERP22TORCH2_BURST_PARAMETER
            ((TORCH_CTRL *)ec->pnt[1],pos,ec->z,pParam,&TorchBurstType00);
  return;
}

void ContTorch2(TORCH_CTRL *pTc, float *pos, int Depth, TORCH2_PARAMETER *pParam, TORCH2_BURST_PARAMETER *pBurstParam) {
	float work[4][4];
	float local_clip[4][4];
	float local_world[4][4];
	float local_screen[4][4];
	float ppos[4];
	float pvel[4];
	float wpos[4];
	float Diff[4];
	float Wind[4];
	GRA3DCAMERA *pCam;
	int i;
	float Range;
	float StartScale;
	float FreaSize;
	float FreaAlpha;
	int FreaR;
	int FreaG;
	int FreaB;
	u_long AlphaBlend;
	float WholeScale;
	int ParticleNum;
	
  undefined8 uVar1;
  GRA3DCAMERA *pGVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  float ppos [4];
  float pvel [4];
  float wpos [4];
  float Diff [4];
  float Wind [4];
  float Range;
  float StartScale;
  int local_98;
  int FreaB;
  ulong AlphaBlend;
  
  local_98 = Depth;
  memset(ppos,0,0x10);
  ppos[3] = 1.0;
  memset(pvel,0,0x10);
  fVar9 = 100.0;
  memset(Wind,0,0x10);
  pGVar2 = gra3dGetCamera__Fv();
  iVar8 = pParam->FreaSize;
  AlphaBlend = (long)pParam->AlphaBlendA | (long)pParam->AlphaBlendFIX << 0x20 |
               (long)pParam->AlphaBlendC << 4 | (long)pParam->AlphaBlendB << 2 |
               (long)pParam->AlphaBlendD << 6;
  FreaB = pParam->FreaB;
  fVar11 = (float)pParam->FreaAlpha;
  iVar4 = pParam->FreaR;
  fVar10 = (float)pParam->Scale / fVar9;
  iVar5 = pParam->FreaG;
  if (pTc == (TORCH_CTRL *)0x0) {
    printf("Particle Buffer is Full : in ContTorch()\n");
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
    sceVu0SubVector(Diff,pos,pTc->BasePos);
    uVar1 = *(undefined8 *)pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar6 = pos[2];
    fVar7 = pos[3];
    pTc->BasePos[0] = (float)uVar1;
    pTc->BasePos[1] = (float)((ulong)uVar1 >> 0x20);
    pTc->BasePos[2] = fVar6;
    pTc->BasePos[3] = fVar7;
                    /* end of inlined section */
    Torch2BasePosMoveInfluence__FP8PARTICLEPffii
              ((PARTICLE *)pTc,Diff,fVar10,(int)(short)pTc->blife,pParam->ParticleFollowMove);
    if (pBurstParam == (TORCH2_BURST_PARAMETER *)0x0) {
      Range = (float)pParam->Range / fVar9;
      StartScale = (float)pParam->StartScale / fVar9;
    }
    else {
      EffOthTorch2BurstReqCtrl__FP10TORCH_CTRLff(pTc,fVar10,pTc->AlphaRate);
      iVar3 = Torch2BurstRangeAndStartScaleGet__FPfT0iP16TORCH2_PARAMETERP22TORCH2_BURST_PARAMETER
                        (&Range,&StartScale,pTc->BurstCount,pParam,pBurstParam);
      if (iVar3 == 0) {
        pTc->BurstCount = 0;
      }
    }
    Torch2WindReqCtrl__FP10TORCH_CTRL(pTc);
    iVar3 = Torch2WindVectorGet__FPfT0i(Wind,pTc->WindMax,pTc->WindCount);
    if (iVar3 == 0) {
      pTc->WindCount = 0;
    }
    sceVu0UnitMatrix(work);
    work[0][0] = fVar10 * 25.0;
    work[1][1] = work[0][0];
    work[2][2] = work[0][0];
    sceVu0TransMatrix(local_world,work,pos);
    sceVu0MulMatrix((float (*) [4] [4])local_screen,pGVar2->matWorldScreen,local_world);
    sceVu0MulMatrix((float (*) [4] [4])local_clip,pGVar2->matWorldClipPolygon,local_world);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    wpos[2] = pos[2];
    wpos[3] = pos[3];
    wpos[0] = (float)*(undefined8 *)pos;
                    /* end of inlined section */
    wpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20) - 20.0;
    DrawFrea__FPffiiiii(wpos,(((float)iVar8 / 1000.0) * (float)(int)(short)pTc->disp * DAT_003ee0d4
                             * StartScale) / 200.0,local_98,iVar4,iVar5,FreaB,
                        (int)((fVar11 * (float)(int)(short)pTc->disp) / 200.0));
    iVar4 = EffWrkMonochroModeGet__Fv();
    iVar8 = draw_distortion_particles2__FPA3_A3_fT0iP8PARTICLEfUlUl
                      ((float (*) [4] [4])local_screen,(float (*) [4] [4])local_clip,200,
                       (PARTICLE *)pTc,(fVar10 * DAT_003ee0d8) / pGVar2->fFov,
                       effdat[iVar4 + 0x4e].tex0,AlphaBlend);
    iVar4 = pParam->AppearNumMax;
    iVar5 = pParam->AppearNumMin;
                    /* inlined from effect.h */
    pTc->disp = (ushort)iVar8;
    iVar8 = rand();
    iVar4 = (int)((float)(iVar4 - iVar5) * ((float)iVar8 / DAT_003ee0dc) +
                 (float)pParam->AppearNumMin);
                    /* end of inlined section */
    fVar9 = DAT_003ee0dc;
    if (0 < iVar4) {
      do {
                    /* inlined from effect.h */
        iVar4 = iVar4 + -1;
        iVar5 = rand();
                    /* end of inlined section */
        ppos[1] = 0.0;
                    /* inlined from effect.h */
        ppos[0] = ((float)iVar5 / fVar9 - 0.5) * Range;
        iVar3 = rand();
                    /* end of inlined section */
        iVar5 = pParam->SpeedXMax;
                    /* inlined from effect.h */
                    /* end of inlined section */
        iVar8 = pParam->SpeedXMin;
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
        ppos[2] = ((float)iVar3 / fVar9 - 0.5) * Range;
        iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
        fVar10 = (float)(pParam->SpeedYMax - pParam->SpeedYMin);
                    /* inlined from effect.h */
        pvel[0] = (((float)(iVar5 - iVar8) * ((float)iVar3 / fVar9) + (float)pParam->SpeedXMin) -
                  1000.0) / 1000.0 + Wind[0];
        iVar3 = rand();
                    /* end of inlined section */
        iVar5 = pParam->SpeedZMax;
                    /* inlined from effect.h */
                    /* end of inlined section */
        iVar8 = pParam->SpeedZMin;
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
        pvel[1] = ((fVar10 * ((float)iVar3 / fVar9) + (float)pParam->SpeedYMin) - 1000.0) / 1000.0 +
                  Wind[1];
        iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
        pvel[2] = (((float)(iVar5 - iVar8) * ((float)iVar3 / fVar9) + (float)pParam->SpeedZMin) -
                  1000.0) / 1000.0 + Wind[2];
                    /* end of inlined section */
        Torch2AddParticle__FP10TORCH_CTRLPfT1fffff
                  (pTc,ppos,pvel,(float)pParam->R,(float)pParam->G,(float)pParam->B,
                   (float)pParam->StartAlpha * pTc->AlphaRate,StartScale);
      } while (iVar4 != 0);
    }
    Torch2UpdateParticles__FP8PARTICLEiffff
              ((PARTICLE *)pTc,(int)(short)pTc->blife,(float)pParam->StartAlpha * pTc->AlphaRate,
               (float)pParam->EndAlpha * pTc->AlphaRate,StartScale,(float)pParam->EndScale / 100.0);
    if (pTc->BurstCount < 1) {
      iVar4 = pTc->WindCount;
    }
    else {
      pTc->BurstCount = pTc->BurstCount + 1;
      iVar4 = pTc->WindCount;
    }
    if (0 < iVar4) {
      pTc->WindCount = iVar4 + 1;
    }
  }
  return;
}

static void Torch2BasePosMoveInfluence(PARTICLE *pPartTop, float *Diff, float WholeScale, int InitLifeTime, int ParticleFollowMove) {
	float LocalDiff[4];
	int i;
	
  int iVar1;
  float LocalDiff [4];
  
  iVar1 = 199;
  sceVu0ScaleVector(1.0 / (WholeScale * 25.0),LocalDiff,Diff);
  do {
    if ((pPartTop->lifetime != 0) &&
       (pPartTop->lifetime <= (InitLifeTime * ParticleFollowMove) / 100)) {
      sceVu0SubVector(pPartTop,pPartTop,LocalDiff);
    }
    iVar1 = iVar1 + -1;
    pPartTop = pPartTop + 1;
  } while (-1 < iVar1);
  return;
}

static void Torch2AddParticle(TORCH_CTRL *pTc, float *pos, float *vel, float r, float g, float b, float a, float Scale) {
	PARTICLE *p;
	
  int iVar1;
  PARTICLE *pPVar2;
  float fVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,200);
                    /* end of inlined section */
  fVar3 = *pos;
  pPVar2 = (pTc->particles).field0_0x0.m_aData + pTc->head;
  pPVar2->lifetime = (int)(short)pTc->blife;
  pPVar2->position[0] = fVar3;
  iVar1 = pTc->head;
  pPVar2->position[1] = pos[1];
  fVar3 = pos[2];
  pPVar2->position[3] = 1.0;
  pPVar2->position[2] = fVar3;
  pPVar2->velocity[0] = *vel;
  pPVar2->velocity[1] = vel[1];
  fVar3 = vel[2];
  pPVar2->Scale = Scale;
  pPVar2->color[0] = r;
  pPVar2->color[1] = g;
  pPVar2->color[2] = b;
  pPVar2->color[3] = a;
  pPVar2->velocity[2] = fVar3;
  pPVar2->velocity[3] = 0.0;
  pPVar2->alp_step = 0.0;
  pTc->head = (iVar1 + 1) % 200;
  return;
}

static void Torch2UpdateParticles(PARTICLE *pPartTop, int InitLifeTime, float StartAlpha, float EndAlpha, float StartScale, float EndScale) {
	int i;
	float Progress;
	
  int iVar1;
  float fVar2;
  float fVar3;
  
  if ((pPartTop != (PARTICLE *)0x0) && (InitLifeTime != 0)) {
    fVar3 = (float)InitLifeTime;
    iVar1 = 199;
    do {
      fVar2 = 1.0 - (float)pPartTop->lifetime / fVar3;
      if (pPartTop->lifetime == 0) {
        pPartTop->color[3] = 0.0;
      }
      else {
        sceVu0AddVector(pPartTop,pPartTop,pPartTop->velocity);
        pPartTop->lifetime = pPartTop->lifetime + -1;
        pPartTop->color[3] = (EndAlpha - StartAlpha) * fVar2 + StartAlpha;
        pPartTop->Scale = (EndScale - StartScale) * fVar2 + StartScale;
      }
      iVar1 = iVar1 + -1;
      pPartTop = pPartTop + 1;
    } while (-1 < iVar1);
  }
  return;
}

static void* EffectSetTorch2Sub(sceVu0FVECTOR *pPosition, int Type, int SeReqFlg) {
	void *pEffRet;
	
  void *DeleteKey;
  
  DeleteKey = SetEffects__Fiie(0x1c,2);
  if ((DeleteKey != (void *)0x0) && (SeReqFlg != 0)) {
    EffectSndPlayDeleteKey__FiiiiPA3_fUi(0xcc9,0,0,0,pPosition,(uint)DeleteKey);
    EffectSndFileReadyReq__Fi(0xcff);
  }
  return DeleteKey;
}

void* EffectSetTorch2(sceVu0FVECTOR *pPosition, int Type) {
  void *pvVar1;
  
  pvVar1 = EffectSetTorch2Sub__FPA3_fii(pPosition,Type,1);
  return pvVar1;
}

void* EffectSetTorch2NoSE(sceVu0FVECTOR *pPosition, int Type) {
  void *pvVar1;
  
  pvVar1 = EffectSetTorch2Sub__FPA3_fii(pPosition,Type,0);
  return pvVar1;
}

void EffectResetTorch2(void *pTorch2) {
	TORCH_CTRL *pTorchCtrl;
	int SeReqFlg;
	
  short sVar1;
  
  sVar1 = 0;
  if (pTorch2 != (void *)0x0) {
    if (*(int *)((int)pTorch2 + 0x24) != 0) {
      sVar1 = *(short *)(*(int *)((int)pTorch2 + 0x24) + 0x3ec0);
    }
    if (sVar1 != 0) {
      EffectSndStopDeleteKey__FUii((uint)pTorch2,1);
      EffectSndFileRelease__Fi(0xcc9);
      EffectSndFileRelease__Fi(0xcff);
    }
    EFFECT_FREE__FPv(*(void **)((int)pTorch2 + 0x24));
    ResetEffects__FPv(pTorch2);
  }
  return;
}

float EffectTorch2GetAlphaRate(void *pTorch2) {
	TORCH_CTRL *pTc;
	float AlphaRate;
	
  float fVar1;
  
  fVar1 = 0.0;
  if ((pTorch2 != (void *)0x0) && (*(int *)((int)pTorch2 + 0x24) != 0)) {
    fVar1 = *(float *)(*(int *)((int)pTorch2 + 0x24) + 0x3eb4);
  }
  return fVar1;
}

void EffectTorch2SetAlphaRate(void *pTorch2, float AlphaRate) {
	TORCH_CTRL *pTc;
	
  if ((pTorch2 != (void *)0x0) && (*(int *)((int)pTorch2 + 0x24) != 0)) {
    *(float *)(*(int *)((int)pTorch2 + 0x24) + 0x3eb4) = AlphaRate;
  }
  return;
}

static void TorchSparkPartInit(SPARK_CTRL *pSc, int Type, float BrakeRate, float WholeScale, float AlphaRate) {
	int i;
	
  SPARK_CTRL *pSVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (pSc != (SPARK_CTRL *)0x0) {
    fVar4 = 1.0;
    pSVar1 = pSc;
    iVar2 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].position[0] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].position[1] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].position[2] = 0.0;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].position[3] = fVar4;
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].color[3] = 0.0;
                    /* end of inlined section */
      iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(iVar2,0x32);
      (pSVar1->particles).field0_0x0.m_aData[0].lifetime = 0;
                    /* end of inlined section */
      pSVar1 = (SPARK_CTRL *)((pSVar1->particles).field0_0x0.m_aData + 1);
      iVar2 = iVar3;
    } while (iVar3 < 0x32);
    pSc->AlphaRate = AlphaRate;
    pSc->Type = (ushort)Type;
    pSc->BrakeRate = BrakeRate;
    pSc->WholeScale = WholeScale;
    pSc->head = 0;
    pSc->cnt = 0;
    pSc->disp = 0;
    pSc->blife = 0;
  }
  return;
}

void SetSpark(EFFECT_CONT *ec) {
	int ReqNum;
	TORCH2_SPARK_PARAMETER *pSparkParam;
	int i;
	
  TORCH2_SPARK_PARAMETER *pSparkParam;
  int iVar1;
  void *pvVar2;
  int iVar3;
  SPARK_CTRL *pSVar4;
  int iVar5;
  
  pSparkParam = EffOthTorch2SparkParameterPtrGet__Fi((uint)(ec->dat).uc8[2]);
  iVar5 = pSparkParam->AppearNumMax;
  iVar3 = pSparkParam->AppearNumMin;
                    /* inlined from effect.h */
  iVar1 = rand();
                    /* end of inlined section */
  pSVar4 = (SPARK_CTRL *)ec->pnt[1];
                    /* inlined from effect.h */
  iVar5 = (int)((float)(iVar5 - iVar3) * ((float)iVar1 / DAT_003ee0e0) +
               (float)pSparkParam->AppearNumMin);
                    /* end of inlined section */
  if (pSVar4 == (SPARK_CTRL *)0x0) {
    pvVar2 = EFFECT_MALLOC__Fi(0xfc0);
    ec->pnt[1] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      ResetEffects__FPv(ec);
      pSVar4 = (SPARK_CTRL *)ec->pnt[1];
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
                    /* end of inlined section */
      iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      TorchSparkPartInit__FP10SPARK_CTRLifff
                ((SPARK_CTRL *)ec->pnt[1],(uint)(ec->dat).uc8[2],
                 (float)pSparkParam->BrakeRate / 1000.0,(ec->fw).field0_0x0.m_aData[0],
                 (ec->fw).field0_0x0.m_aData[1]);
                    /* end of inlined section */
      if (iVar5 < 1) {
        pSVar4 = (SPARK_CTRL *)ec->pnt[1];
      }
      else {
        pSVar4 = (SPARK_CTRL *)ec->pnt[1];
        while( true ) {
          iVar3 = iVar3 + 1;
          AddSparkParticle__FP10SPARK_CTRLfP22TORCH2_SPARK_PARAMETER(pSVar4,3.0,pSparkParam);
          if (iVar5 <= iVar3) break;
          pSVar4 = (SPARK_CTRL *)ec->pnt[1];
        }
        pSVar4 = (SPARK_CTRL *)ec->pnt[1];
      }
    }
  }
  pvVar2 = ContTorchSpark__FP10SPARK_CTRLPfffP22TORCH2_SPARK_PARAMETER
                     (pSVar4,ec->Pos,DAT_003ee0e4,DAT_003ee0e8,pSparkParam);
  ec->pnt[1] = pvVar2;
  if (pvVar2 == (void *)0x0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void* ContTorchSpark(SPARK_CTRL *pSc, float *pos, float size, float sr, TORCH2_SPARK_PARAMETER *pSparkParam) {
	float work[4][4];
	float local_clip[4][4];
	float local_world[4][4];
	float local_screen[4][4];
	GRA3DCAMERA *pCam;
	
  GRA3DCAMERA *pGVar1;
  int iVar2;
  SPARK_CTRL *pSVar3;
  float work [4] [4];
  float local_clip [4] [4];
  float local_world [4] [4];
  float local_screen [4] [4];
  
  pGVar1 = gra3dGetCamera__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pSVar3 = (SPARK_CTRL *)0x0;
  if (pSc != (SPARK_CTRL *)0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,0x32);
                    /* end of inlined section */
    sceVu0UnitMatrix(work);
    work[0][0] = pSc->WholeScale * 25.0;
    work[1][1] = work[0][0];
    work[2][2] = work[0][0];
    sceVu0TransMatrix(local_world,work,pos);
    sceVu0MulMatrix((float (*) [4] [4])local_screen,pGVar1->matWorldScreen,local_world);
    sceVu0MulMatrix((float (*) [4] [4])local_clip,pGVar1->matWorldClipPolygon,local_world);
    iVar2 = EffWrkMonochroModeGet__Fv();
    iVar2 = draw_distortion_particles2__FPA3_A3_fT0iP8PARTICLEfUlUl
                      ((float (*) [4] [4])local_screen,(float (*) [4] [4])local_clip,0x32,
                       (PARTICLE *)pSc,(size * sr * pSc->WholeScale) / pGVar1->fFov,
                       effdat[iVar2 + 0x4e].tex0,0x48);
    pSc->disp = (ushort)iVar2;
    iVar2 = EffWrkStopFlgGet__Fv();
    pSVar3 = pSc;
    if ((iVar2 == 0) &&
       (iVar2 = UpdateSparkParticles__FP8PARTICLEffP22TORCH2_SPARK_PARAMETER
                          ((PARTICLE *)pSc,pSc->BrakeRate,pSc->AlphaRate,pSparkParam), iVar2 == 0))
    {
      pSVar3 = (SPARK_CTRL *)0x0;
      EFFECT_FREE__FPv(pSc);
    }
  }
  return pSVar3;
}

static void AddSparkParticle(SPARK_CTRL *pSc, float Scale, TORCH2_SPARK_PARAMETER *pSparkParam) {
	PARTICLE *pPart;
	
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  PARTICLE *pPVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8PARTICLE_UiUi_PX01(0,0x32);
  fVar2 = DAT_003ee0ec;
                    /* end of inlined section */
  iVar8 = pSparkParam->SpeedXMin;
  iVar1 = pSparkParam->SpeedXMax;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pPVar5 = (pSc->particles).field0_0x0.m_aData + pSc->head;
  pPVar5->position[3] = 1.0;
  pPVar5->position[0] = 0.0;
  pPVar5->position[1] = 0.0;
                    /* inlined from effect.h */
  fVar7 = 1000.0;
  pPVar5->position[2] = 0.0;
  iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  fVar11 = (float)(pSparkParam->SpeedYMax - pSparkParam->SpeedYMin);
                    /* inlined from effect.h */
  pPVar5->velocity[0] =
       (((float)(iVar1 - iVar8) * ((float)iVar3 / fVar2) + (float)pSparkParam->SpeedXMin) - fVar7) /
       100.0;
  iVar3 = rand();
                    /* end of inlined section */
  iVar8 = pSparkParam->SpeedZMax;
  iVar1 = pSparkParam->SpeedZMin;
                    /* inlined from effect.h */
                    /* end of inlined section */
                    /* inlined from effect.h */
  pPVar5->velocity[1] =
       ((fVar11 * ((float)iVar3 / fVar2) + (float)pSparkParam->SpeedYMin) - fVar7) / 100.0;
  iVar4 = rand();
  iVar6 = pSparkParam->SpeedZMin;
                    /* end of inlined section */
  iVar3 = pSparkParam->AccelYMax;
  iVar9 = pSparkParam->AccelYMin;
  pPVar5->acceleration[0] = 0.0;
                    /* inlined from effect.h */
                    /* end of inlined section */
  fVar11 = (float)(iVar3 - iVar9);
                    /* inlined from effect.h */
  pPVar5->velocity[2] =
       (((float)(iVar8 - iVar1) * ((float)iVar4 / fVar2) + (float)iVar6) - fVar7) / 100.0;
  iVar3 = rand();
  iVar6 = pSparkParam->AccelYMin;
                    /* end of inlined section */
  iVar8 = pSparkParam->LifeTimeMax;
  iVar9 = pSparkParam->R;
  pPVar5->acceleration[2] = 0.0;
  iVar4 = pSparkParam->G;
  iVar1 = pSparkParam->LifeTimeMin;
  iVar10 = pSparkParam->B;
                    /* inlined from effect.h */
                    /* end of inlined section */
  pPVar5->color[0] = (float)iVar9;
  iVar9 = pSparkParam->StartAlpha;
  pPVar5->color[1] = (float)iVar4;
  pPVar5->color[2] = (float)iVar10;
                    /* inlined from effect.h */
  pPVar5->acceleration[1] = ((fVar11 * ((float)iVar3 / fVar2) + (float)iVar6) - fVar7) / fVar7;
                    /* end of inlined section */
  fVar7 = pSc->AlphaRate;
  pPVar5->alp_step = 0.0;
                    /* inlined from effect.h */
  pPVar5->color[3] = (float)iVar9 * fVar7;
  iVar3 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
  iVar8 = (int)((float)(iVar8 - iVar1) * ((float)iVar3 / fVar2) + (float)pSparkParam->LifeTimeMin);
                    /* end of inlined section */
  pPVar5->lifetime = iVar8;
                    /* inlined from effect.h */
  pPVar5->BaseLifeTime = iVar8;
                    /* end of inlined section */
  iVar8 = pSc->head;
  pPVar5->Scale = (float)(pSparkParam->StartScale / 100);
  pSc->head = (iVar8 + 1) % 0x32;
  return;
}

static int UpdateSparkParticles(PARTICLE *pPtop, float BrakeRate, float AlphaRate, TORCH2_SPARK_PARAMETER *pSparkParam) {
	float StartAlpha;
	float EndAlpha;
	float StartScale;
	float EndScale;
	int i;
	int LeftNum;
	float Progress;
	
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar3 = 0;
  iVar4 = pSparkParam->EndScale;
  fVar8 = (float)pSparkParam->StartAlpha * AlphaRate;
  fVar5 = (float)pSparkParam->StartScale / 100.0;
  fVar7 = (float)pSparkParam->EndAlpha * AlphaRate;
  if (pPtop != (PARTICLE *)0x0) {
    iVar2 = 0x31;
    iVar3 = 0;
    do {
      if (pPtop->BaseLifeTime == 0) {
        fVar6 = 1.0;
      }
      else {
        fVar6 = 1.0 - (float)pPtop->lifetime / (float)pPtop->BaseLifeTime;
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
        pPtop->color[3] = (fVar7 - fVar8) * fVar6 + fVar8;
        pPtop->Scale = ((float)iVar4 / 100.0 - fVar5) * fVar6 + fVar5;
      }
      iVar2 = iVar2 + -1;
      pPtop = pPtop + 1;
    } while (-1 < iVar2);
  }
  return iVar3;
}

static void EffOthTorch2BurstReqCtrl(TORCH_CTRL *pTc, float WholeScale, float AlphaRate) {
  int iVar1;
  
  iVar1 = pTc->BurstInterval;
  if (iVar1 == 0) {
    SetEffects__Fiie(0x1d,2);
    pTc->BurstCount = 1;
    iVar1 = EffOthTorch2BurstIntervalTimeGet__Fi((int)(short)pTc->Type);
    pTc->BurstInterval = iVar1;
    if (pTc->SeReqFlg != 0) {
      EffectSndPlay__FiiiiPA3_f(0xcff,0,0,0,(float (*) [4])pTc->BasePos);
      return;
    }
  }
  else if ((pTc->BurstCount == 0) && (0 < iVar1)) {
    pTc->BurstInterval = iVar1 + -1;
  }
  return;
}

static int EffOthTorch2BurstIntervalTimeGet(int Type) {
	TORCH2_BURST_PARAMETER *pBurstParam;
	int RetVal;
	
  int iVar1;
  int iVar2;
  TORCH2_BURST_PARAMETER *pTVar3;
  int iVar4;
  
  pTVar3 = EffOthTorch2BurstParameterPtrGet__Fi(Type);
  iVar1 = pTVar3->IntervalMax;
  if (iVar1 == 0) {
    iVar2 = pTVar3->IntervalMin;
    if (iVar2 == 0) {
      return -1;
    }
  }
  else {
    iVar2 = pTVar3->IntervalMin;
  }
                    /* inlined from effect.h */
  iVar4 = rand();
                    /* end of inlined section */
  return (int)((float)(iVar1 - iVar2) * ((float)iVar4 / DAT_003ee0f0) + (float)pTVar3->IntervalMin);
}

static int Torch2BurstRangeAndStartScaleGet(float *pRange, float *pStartScale, int Count, TORCH2_PARAMETER *pParam, TORCH2_BURST_PARAMETER *pBurstParam) {
	int Frame1;
	int Frame2;
	int EndFrame;
	float BaseRange;
	float Range1;
	float Range2;
	float BaseScale;
	float StartScale1;
	float StartScale2;
	int ExecFlg;
	float Progress;
	
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = pBurstParam->Frame1;
  iVar2 = pBurstParam->Frame2;
  iVar3 = pBurstParam->EndFrame;
  fVar9 = (float)pBurstParam->StartScale2 / 100.0;
  fVar5 = (float)pParam->Range / 100.0;
  fVar6 = (float)pBurstParam->Range1 / 100.0;
  fVar7 = (float)pBurstParam->Range2 / 100.0;
  fVar8 = (float)pParam->StartScale / 100.0;
  fVar4 = (float)pBurstParam->StartScale1 / 100.0;
  if (Count < 1) {
    *pRange = fVar5;
  }
  else {
    if (Count < iVar3) {
      if (Count < iVar1) {
        if (iVar1 == 0) {
          fVar7 = 1.0;
        }
        else {
          fVar7 = (float)Count / (float)iVar1;
        }
        fVar5 = (fVar6 - fVar5) * fVar7 + fVar5;
        fVar8 = (fVar4 - fVar8) * fVar7 + fVar8;
      }
      else if (Count < iVar2) {
        if (iVar2 == iVar1) {
          fVar8 = 1.0;
        }
        else {
          fVar8 = (float)(Count - iVar1) / (float)(iVar2 - iVar1);
        }
        fVar5 = (fVar7 - fVar6) * fVar8 + fVar6;
        fVar8 = (fVar9 - fVar4) * fVar8 + fVar4;
      }
      else {
        if (iVar3 == iVar2) {
          fVar4 = 1.0;
        }
        else {
          fVar4 = (float)(Count - iVar2) / (float)(iVar3 - iVar2);
        }
        fVar5 = (fVar5 - fVar7) * fVar4 + fVar7;
        fVar8 = (fVar8 - fVar9) * fVar4 + fVar9;
      }
      *pRange = fVar5;
      *pStartScale = fVar8;
      return 1;
    }
    *pRange = fVar5;
  }
  *pStartScale = fVar8;
  return 0;
}

static void Torch2WindVectorMake(float *Wind) {
	float TmpMat[4][4];
	float TmpVec[4];
	float RotX;
	float RotY;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float TmpMat [4] [4];
  float TmpVec [4];
  
  memset(TmpVec,0,0x10);
  fVar2 = DAT_003ee0f4;
                    /* inlined from effect.h */
  TmpVec[3] = 1.0;
  iVar1 = rand();
  TmpVec[2] = (((float)iVar1 / fVar2) * 0.0 + 15.0) / 100.0;
  iVar1 = rand();
  fVar3 = ((((float)iVar1 / fVar2) * 10.0 + 90.0) - 90.0) * DAT_003ee0f8;
  iVar1 = rand();
                    /* end of inlined section */
                    /* inlined from effect.h */
                    /* end of inlined section */
  fVar2 = ((float)iVar1 / fVar2) * DAT_003ee0fc - DAT_003ee100;
  sceVu0UnitMatrix(TmpMat);
  sceVu0RotMatrixX(fVar3,TmpMat,TmpMat);
  sceVu0RotMatrixY(fVar2,TmpMat,TmpMat);
  sceVu0ApplyMatrix(Wind,TmpMat,TmpVec);
  return;
}

static void Torch2WindReq(TORCH_CTRL *pTc) {
  Torch2WindVectorMake__FPf(pTc->WindMax);
  pTc->WindCount = 1;
  return;
}

static int EffOthTorch2WindIntervalTimeGet() {
  return -1;
}

static void Torch2WindReqCtrl(TORCH_CTRL *pTc) {
  int iVar1;
  
  iVar1 = pTc->WindInterval;
  if (iVar1 == 0) {
    Torch2WindReq__FP10TORCH_CTRL(pTc);
    iVar1 = EffOthTorch2WindIntervalTimeGet__Fv();
    pTc->WindInterval = iVar1;
  }
  else if ((pTc->WindCount == 0) && (0 < iVar1)) {
    pTc->WindInterval = iVar1 + -1;
  }
  return;
}

static int Torch2WindVectorGet(float *NowWind, float *WindMax, int Count) {
	int ExecFlg;
	int OutTime;
	
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  NowWind[3] = 1.0;
  *NowWind = 0.0;
  NowWind[1] = 0.0;
  NowWind[2] = 0.0;
  if (Count < 1) {
    return 0;
  }
  if (Count < 1) {
    fVar3 = (float)Count;
  }
  else {
    if (Count < 6) {
      uVar1 = *(undefined8 *)WindMax;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      fVar3 = WindMax[2];
      fVar2 = WindMax[3];
      *NowWind = (float)uVar1;
      NowWind[1] = (float)((ulong)uVar1 >> 0x20);
      NowWind[2] = fVar3;
      NowWind[3] = fVar2;
      return 1;
                    /* end of inlined section */
    }
    if (0x23 < Count) {
      return 0;
    }
    fVar3 = (float)(0x1e - (Count + -6)) / 30.0;
  }
  sceVu0ScaleVector(fVar3);
  return 1;
}

void EffectTorch2BigFreaInit() {
  Torch2BigFreaCtrl.ExecFlg = 0;
  Torch2BigFreaCtrl.Count = 0;
  Torch2BigFreaCtrl.Cycle = 0;
  return;
}

void EffectTorch2BigFreaMain() {
	float Position[4];
	float Offset[4];
	int Alpha;
	int AlphaMax;
	
  float Position [4];
  float Offset [4];
  
  if (Torch2BigFreaCtrl.ExecFlg != 0) {
    Offset[0] = 0.0;
    Offset[1] = 0.0;
    Offset[2] = 0.0;
    Offset[3] = 0.0;
    sceVu0AddVector(Position,0x2fde20,Offset);
    if (Torch2BigFreaCtrl.Cycle != 0) {
      if ((short)Torch2BigFreaCtrl.Count < (short)Torch2BigFreaCtrl.Cycle) {
        if (Torch2BigFreaCtrl.Cycle == 0) {
          trap(7);
        }
      }
      else if (Torch2BigFreaCtrl.Cycle == 0) {
        trap(7);
      }
    }
    SetEffects__Fiie(0x1e,1);
    Torch2BigFreaCtrl.Count = Torch2BigFreaCtrl.Count + 1;
    if ((int)(short)Torch2BigFreaCtrl.Cycle << 1 <= (int)(short)Torch2BigFreaCtrl.Count) {
      Torch2BigFreaCtrl.Count = 0;
    }
  }
  return;
}

void EffectTorch2BigFreaReq(float *Position) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  Torch2BigFreaCtrl.Position[0] = *Position;
  Torch2BigFreaCtrl.Position[1] = Position[1];
  Torch2BigFreaCtrl.Position[2] = Position[2];
  Torch2BigFreaCtrl.Position[3] = Position[3];
                    /* end of inlined section */
  Torch2BigFreaCtrl.Cycle = 0x37;
  Torch2BigFreaCtrl.ExecFlg = 1;
  Torch2BigFreaCtrl.Count = 0;
  return;
}

void EffectTorch2BigFreaCut() {
  Torch2BigFreaCtrl.ExecFlg = 0;
  return;
}

void SetTorch2BigFrea(EFFECT_CONT *ec) {
	float Position[4];
	float ScaleX;
	
  undefined8 *puVar1;
  float ScaleX;
  float Position [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  puVar1 = (undefined8 *)ec->pnt[0];
  Position[2] = *(float *)(puVar1 + 1);
  Position[3] = *(float *)((int)puVar1 + 0xc);
  Position[0] = (float)*puVar1;
  Position[1] = (float)((ulong)*puVar1 >> 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,3);
  ScaleX = (ec->fw).field0_0x0.m_aData[0];
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,3);
                    /* end of inlined section */
  Torch2BigFreaDraw__FPCfffiiii
            (Position,ScaleX,(ec->fw).field0_0x0.m_aData[1],(uint)ec->r,(uint)ec->g,(uint)ec->b,
             (uint)ec->a);
  if (((ec->dat).uc8[1] & 1) != 0) {
    ResetEffects__FPv(ec);
  }
  return;
}

static void Torch2BigFreaDraw(float *Position, float ScaleX, float ScaleY, int R, int G, int B, int Alpha) {
	float matWorldLocal[4][4];
	DRAW_ENV DrawEnv;
	GRA3DCAMERA *pCam;
	float RotX;
	float RotY;
	
  GRA3DCAMERA *pGVar1;
  float (*v1) [4];
  float matWorldLocal [4] [4];
  DRAW_ENV DrawEnv;
  float RotX;
  float RotY;
  
  DrawEnv.tex1 = DAT_003a8410;
  DrawEnv.alpha = DAT_003a8418;
  DrawEnv.zbuf = DAT_003a8420;
  DrawEnv.test = DAT_003a8428;
  DrawEnv.prim = DAT_003a8438;
  DrawEnv.clamp = DAT_003a8430;
  pGVar1 = gra3dGetCamera__Fv();
  v1 = gra3dcamGetPosition__Fv();
  Get2PosRot__FPCfT0PfT2((float *)v1,pGVar1->vTarget,&RotX,&RotY);
  sceVu0UnitMatrix(matWorldLocal);
  sceVu0RotMatrixX(RotX,matWorldLocal,matWorldLocal);
  sceVu0RotMatrixY(RotY,matWorldLocal,matWorldLocal);
  sceVu0TransMatrix(matWorldLocal,matWorldLocal,Position);
  Set3DPosTexure__FPA3_fP8DRAW_ENViffUcUcUcUc
            (matWorldLocal,&DrawEnv,0x42,ScaleX * 100.0,ScaleY * 100.0,(uchar)R,(uchar)G,(uchar)B,
             (uchar)Alpha);
  return;
}

TORCH2_PARAMETER** TORCH2_PARAMETER * * _fixed_array_verifyrange<TORCH2_PARAMETER *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

TORCH2_BURST_PARAMETER** TORCH2_BURST_PARAMETER * * _fixed_array_verifyrange<TORCH2_BURST_PARAMETER *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

TORCH2_SPARK_PARAMETER** TORCH2_SPARK_PARAMETER * * _fixed_array_verifyrange<TORCH2_SPARK_PARAMETER *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

PARTICLE* PARTICLE * _fixed_array_verifyrange<PARTICLE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	TORCH2_SPARK_PARAMETER **ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pTorchParamPtr.field0_0x0.m_aData =
         (fixed_array_base<TORCH2_PARAMETER_*,9,TORCH2_PARAMETER_**>)&PTR_TorchType00_003a8440;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pTorchBurstParamPtr.field0_0x0.m_aData =
         (fixed_array_base<TORCH2_BURST_PARAMETER_*,9,TORCH2_BURST_PARAMETER_**>)
         &PTR_TorchBurstType00_003a8468;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pTorchSparkParamPtr.field0_0x0.m_aData =
         (fixed_array_base<TORCH2_SPARK_PARAMETER_*,9,TORCH2_SPARK_PARAMETER_**>)
         &PTR_TorchSparkType00_003a8490;
  }
  return;
}

type_info& TORCH2_PARAMETER * type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& TORCH2_BURST_PARAMETER * type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& TORCH2_SPARK_PARAMETER * type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& PARTICLE type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& TORCH2_PARAMETER type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& TORCH2_BURST_PARAMETER type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& TORCH2_SPARK_PARAMETER type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void global constructors keyed to TorchType00() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
