// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_TORCH_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_TORCH_H

typedef struct {
	int LifeTime;
	int AppearNumMax;
	int AppearNumMin;
	int Range;
	int SpeedXMax;
	int SpeedXMin;
	int SpeedYMax;
	int SpeedYMin;
	int SpeedZMax;
	int SpeedZMin;
	int Scale;
	int StartScale;
	int EndScale;
	int StartAlpha;
	int EndAlpha;
	int R;
	int G;
	int B;
	int AlphaBlendA;
	int AlphaBlendB;
	int AlphaBlendC;
	int AlphaBlendD;
	int AlphaBlendFIX;
	int FreaSize;
	int FreaR;
	int FreaG;
	int FreaB;
	int FreaAlpha;
	int ParticleFollowMove;
} TORCH2_PARAMETER;

typedef struct {
	int Range1;
	int Range2;
	int StartScale1;
	int StartScale2;
	int Frame1;
	int Frame2;
	int EndFrame;
	int IntervalMax;
	int IntervalMin;
} TORCH2_BURST_PARAMETER;

typedef struct {
	int LifeTimeMax;
	int LifeTimeMin;
	int AppearNumMax;
	int AppearNumMin;
	int SpeedXMax;
	int SpeedXMin;
	int SpeedYMax;
	int SpeedYMin;
	int SpeedZMax;
	int SpeedZMin;
	int AccelYMax;
	int AccelYMin;
	int BrakeRate;
	int StartScale;
	int EndScale;
	int StartAlpha;
	int EndAlpha;
	int R;
	int G;
	int B;
} TORCH2_SPARK_PARAMETER;

typedef struct {
	fixed_array<PARTICLE,200> particles;
	float BasePos[4];
	float WindMax[4];
	int head;
	int BurstCount;
	int BurstInterval;
	int WindCount;
	int WindInterval;
	float AlphaRate;
	short int max;
	short int disp;
	short int blife;
	short int Type;
	short int SeReqFlg;
} TORCH_CTRL;

extern TORCH2_PARAMETER TorchType00;
extern TORCH2_PARAMETER TorchType01;
extern TORCH2_PARAMETER TorchType02;
extern TORCH2_PARAMETER TorchType03;
extern TORCH2_PARAMETER TorchType04;
extern TORCH2_PARAMETER TorchType05;
extern TORCH2_PARAMETER TorchType06;
extern TORCH2_PARAMETER TorchType07;
extern TORCH2_PARAMETER TorchType08;
extern TORCH2_BURST_PARAMETER TorchBurstType00;
extern TORCH2_BURST_PARAMETER TorchBurstType01;
extern TORCH2_BURST_PARAMETER TorchBurstType02;
extern TORCH2_BURST_PARAMETER TorchBurstType03;
extern TORCH2_BURST_PARAMETER TorchBurstType04;
extern TORCH2_BURST_PARAMETER TorchBurstType05;
extern TORCH2_BURST_PARAMETER TorchBurstType06;
extern TORCH2_BURST_PARAMETER TorchBurstType07;
extern TORCH2_BURST_PARAMETER TorchBurstType08;
extern TORCH2_SPARK_PARAMETER TorchSparkType00;
extern TORCH2_SPARK_PARAMETER TorchSparkType01;
extern TORCH2_SPARK_PARAMETER TorchSparkType02;
extern TORCH2_SPARK_PARAMETER TorchSparkType03;
extern TORCH2_SPARK_PARAMETER TorchSparkType04;
extern TORCH2_SPARK_PARAMETER TorchSparkType05;
extern TORCH2_SPARK_PARAMETER TorchSparkType06;
extern TORCH2_SPARK_PARAMETER TorchSparkType07;
extern TORCH2_SPARK_PARAMETER TorchSparkType08;
extern reference_fixed_array<TORCH2_PARAMETER *,9> pTorchParamPtr;
extern reference_fixed_array<TORCH2_BURST_PARAMETER *,9> pTorchBurstParamPtr;
extern reference_fixed_array<TORCH2_SPARK_PARAMETER *,9> pTorchSparkParamPtr;
extern unsigned char TORCH2_PARAMETER * type_info node[12];
extern unsigned char TORCH2_BURST_PARAMETER * type_info node[12];
extern unsigned char TORCH2_SPARK_PARAMETER * type_info node[12];
extern unsigned char PARTICLE type_info node[8];
extern unsigned char TORCH2_PARAMETER type_info node[8];
extern unsigned char TORCH2_BURST_PARAMETER type_info node[8];
extern unsigned char TORCH2_SPARK_PARAMETER type_info node[8];
extern TORCH2_BIGFREA_CTRL Torch2BigFreaCtrl;

TORCH2_PARAMETER* EffOthTorch2ParameterPtrGet(int Type);
TORCH2_BURST_PARAMETER* EffOthTorch2BurstParameterPtrGet(int Type);
TORCH2_SPARK_PARAMETER* EffOthTorch2SparkParameterPtrGet(int Type);
void TorchPartInit(TORCH_CTRL *pTc, int LifeTime, float *BasePos, int Type, int SeReqFlg);
void SetTorch2(EFFECT_CONT *ec);
void ContTorch2(TORCH_CTRL *pTc, float *pos, int Depth, TORCH2_PARAMETER *pParam, TORCH2_BURST_PARAMETER *pBurstParam);
void* EffectSetTorch2(sceVu0FVECTOR *pPosition, int Type);
void* EffectSetTorch2NoSE(sceVu0FVECTOR *pPosition, int Type);
void EffectResetTorch2(void *pTorch2);
float EffectTorch2GetAlphaRate(void *pTorch2);
void EffectTorch2SetAlphaRate(void *pTorch2, float AlphaRate);
void SetSpark(EFFECT_CONT *ec);
void EffectTorch2BigFreaInit();
void EffectTorch2BigFreaMain();
void EffectTorch2BigFreaReq(float *Position);
void EffectTorch2BigFreaCut();
void SetTorch2BigFrea(EFFECT_CONT *ec);
TORCH2_PARAMETER** TORCH2_PARAMETER * * _fixed_array_verifyrange<TORCH2_PARAMETER *>(size_t v, size_t _max);
TORCH2_BURST_PARAMETER** TORCH2_BURST_PARAMETER * * _fixed_array_verifyrange<TORCH2_BURST_PARAMETER *>(size_t v, size_t _max);
TORCH2_SPARK_PARAMETER** TORCH2_SPARK_PARAMETER * * _fixed_array_verifyrange<TORCH2_SPARK_PARAMETER *>(size_t v, size_t _max);
PARTICLE* PARTICLE * _fixed_array_verifyrange<PARTICLE>(size_t v, size_t _max);
float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max);
type_info& TORCH2_PARAMETER * type_info function();
type_info& TORCH2_BURST_PARAMETER * type_info function();
type_info& TORCH2_SPARK_PARAMETER * type_info function();
type_info& PARTICLE type_info function();
type_info& TORCH2_PARAMETER type_info function();
type_info& TORCH2_BURST_PARAMETER type_info function();
type_info& TORCH2_SPARK_PARAMETER type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_EFFECT_EFFECT_TORCH_H
