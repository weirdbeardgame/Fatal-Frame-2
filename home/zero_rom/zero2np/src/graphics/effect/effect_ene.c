// STATUS: NOT STARTED

#include "effect_ene.h"

typedef struct {
	float EneMposP0[4];
	ENE_DMG_BLUR_CONTRAST_PARAMETER *pBlurContrast;
	int Flow;
	int EneWrkNo;
	int HitEffecType;
	int Counter;
	int ContrastColor;
	int ContrastAlpha;
	int BlurScale;
	int BlurRot;
	u_char BlurAlpha;
} ENE_HIT_EFFECT_CTRL;

struct fixed_array_base<ENDMG1,10,ENDMG1[10]> {
protected:
	ENDMG1 m_aData[10];
	
public:
	fixed_array_base<ENDMG1,10,ENDMG1[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENDMG1& operator[]();
	ENDMG1& operator[]();
	ENDMG1* data();
	ENDMG1* begin();
	ENDMG1* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENDMG1,10> : fixed_array_base<ENDMG1,10,ENDMG1[10]> {
};

struct fixed_array_base<float[4][4],12,float[12][4][4]> {
protected:
	float m_aData[12][4][4];
	
public:
	fixed_array_base<float[4][4],12,float[12][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],12> : fixed_array_base<float[4][4],12,float[12][4][4]> {
};

struct fixed_array_base<float[4],12,float[12][4]> {
protected:
	float m_aData[12][4];
	
public:
	fixed_array_base<float[4],12,float[12][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],12> : fixed_array_base<float[4],12,float[12][4]> {
};

typedef struct {
	fixed_array<float[4][4],12> wmtx;
	fixed_array<float[4],12> opos;
} TAIL_DMG2_DAT;

typedef struct {
	int sw;
	int num;
	int top;
	int dummy;
} SWORD_LINE;

struct fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **> {
protected:
	ENE_DMG_LARGE_HIT_PARAMETER **m_aData;
	
public:
	fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_DMG_LARGE_HIT_PARAMETER*& operator[]();
	ENE_DMG_LARGE_HIT_PARAMETER*& operator[]();
	ENE_DMG_LARGE_HIT_PARAMETER** data();
	ENE_DMG_LARGE_HIT_PARAMETER** begin();
	ENE_DMG_LARGE_HIT_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_DMG_LARGE_HIT_PARAMETER *,38> : fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER *,38,ENE_DMG_LARGE_HIT_PARAMETER **> {
};

struct fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **> {
protected:
	ENE_DMG_BLUR_CONTRAST_PARAMETER **m_aData;
	
public:
	fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_DMG_BLUR_CONTRAST_PARAMETER*& operator[]();
	ENE_DMG_BLUR_CONTRAST_PARAMETER*& operator[]();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** data();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** begin();
	ENE_DMG_BLUR_CONTRAST_PARAMETER** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20> : fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20,ENE_DMG_BLUR_CONTRAST_PARAMETER **> {
};

struct fixed_array_base<SPRT_DAT,14,SPRT_DAT *> {
protected:
	SPRT_DAT *m_aData;
	
public:
	fixed_array_base<SPRT_DAT,14,SPRT_DAT *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SPRT_DAT& operator[]();
	SPRT_DAT& operator[]();
	SPRT_DAT* data();
	SPRT_DAT* begin();
	SPRT_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<SPRT_DAT,14> : fixed_array_base<SPRT_DAT,14,SPRT_DAT *> {
};

struct fixed_array_base<float[4],4,float[4][4]> {
protected:
	float m_aData[4][4];
	
public:
	fixed_array_base<float[4],4,float[4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],4> : fixed_array_base<float[4],4,float[4][4]> {
};

struct fixed_array_base<unsigned int,4,unsigned int[4]> {
protected:
	u_int m_aData[4];
	
public:
	fixed_array_base<unsigned int,4,unsigned int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<unsigned int,4> : fixed_array_base<unsigned int,4,unsigned int[4]> {
};

struct fixed_array_base<long unsigned int,4,long unsigned int[4]> {
protected:
	u_long m_aData[4];
	
public:
	fixed_array_base<long unsigned int,4,long unsigned int[4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_long& operator[]();
	u_long& operator[]();
	u_long* data();
	u_long* begin();
	u_long* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<long unsigned int,4> : fixed_array_base<long unsigned int,4,long unsigned int[4]> {
};

struct fixed_array_base<unsigned int,4,unsigned int *> {
protected:
	u_int *m_aData;
	
public:
	fixed_array_base<unsigned int,4,unsigned int *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_int& operator[]();
	u_int& operator[]();
	u_int* data();
	u_int* begin();
	u_int* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<unsigned int,4> : fixed_array_base<unsigned int,4,unsigned int *> {
};

struct fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]> {
protected:
	TAIL_DMG2_DAT m_aData[48];
	
public:
	fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	TAIL_DMG2_DAT& operator[]();
	TAIL_DMG2_DAT& operator[]();
	TAIL_DMG2_DAT* data();
	TAIL_DMG2_DAT* begin();
	TAIL_DMG2_DAT* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<TAIL_DMG2_DAT,48> : fixed_array_base<TAIL_DMG2_DAT,48,TAIL_DMG2_DAT[48]> {
};

struct fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]> {
protected:
	NEW_PERTICLE m_aData[48];
	
public:
	fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	NEW_PERTICLE& operator[]();
	NEW_PERTICLE& operator[]();
	NEW_PERTICLE* data();
	NEW_PERTICLE* begin();
	NEW_PERTICLE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<NEW_PERTICLE,48> : fixed_array_base<NEW_PERTICLE,48,NEW_PERTICLE[48]> {
};

struct fixed_array_base<float[4],30,float[30][4]> {
protected:
	float m_aData[30][4];
	
public:
	fixed_array_base<float[4],30,float[30][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],30> : fixed_array_base<float[4],30,float[30][4]> {
};

typedef struct {
	float MposP0[4];
	u_char flow;
	u_char alp;
	u_char chance;
	int scl;
	int rot;
	int cntcol;
	int cntalp;
	u_int cnt;
	float x;
	float y;
	float dist;
	int almx;
	int scmx;
	int rtmx;
	int ccmx;
	int camx;
	int DmgType;
} ENE_DMG_EFF;

struct fixed_array_base<int,30,int[30]> {
protected:
	int m_aData[30];
	
public:
	fixed_array_base<int,30,int[30]>& operator=();
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

struct fixed_array<int,30> : fixed_array_base<int,30,int[30]> {
};

struct fixed_array_base<int[4],30,int[30][4]> {
protected:
	int m_aData[30][4];
	
public:
	fixed_array_base<int[4],30,int[30][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int&[4] operator[]();
	int&[4] operator[]();
	int*[4] data();
	int*[4] begin();
	int*[4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int[4],30> : fixed_array_base<int[4],30,int[30][4]> {
};

struct fixed_array_base<long unsigned int,30,long unsigned int[30]> {
protected:
	u_long m_aData[30];
	
public:
	fixed_array_base<long unsigned int,30,long unsigned int[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	u_long& operator[]();
	u_long& operator[]();
	u_long* data();
	u_long* begin();
	u_long* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<long unsigned int,30> : fixed_array_base<long unsigned int,30,long unsigned int[30]> {
};

struct fixed_array_base<float[4],256,float[256][4]> {
protected:
	float m_aData[256][4];
	
public:
	fixed_array_base<float[4],256,float[256][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4] operator[]();
	float&[4] operator[]();
	sceVu0FVECTOR* data();
	sceVu0FVECTOR* begin();
	sceVu0FVECTOR* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4],256> : fixed_array_base<float[4],256,float[256][4]> {
};

struct fixed_array_base<int,256,int[256]> {
protected:
	int m_aData[256];
	
public:
	fixed_array_base<int,256,int[256]>& operator=();
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

struct fixed_array<int,256> : fixed_array_base<int,256,int[256]> {
};

ENE_DMG_LARGE_HIT_PARAMETER SmallHit = {
	/* .CenterRgba = */ {
		/* [0] = */ 222,
		/* [1] = */ 206,
		/* [2] = */ 255,
		/* [3] = */ 177
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 121,
		/* [1] = */ 188,
		/* [2] = */ 243,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 68,
	/* .LastScale = */ 120,
	/* .AllFrame = */ 30,
	/* .MoveDist = */ 16,
	/* .Distance = */ 901,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER LargeHitType00 = {
	/* .CenterRgba = */ {
		/* [0] = */ 188,
		/* [1] = */ 216,
		/* [2] = */ 255,
		/* [3] = */ 156
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 201,
		/* [2] = */ 255,
		/* [3] = */ 47
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 472,
	/* .AllFrame = */ 29,
	/* .MoveDist = */ 259,
	/* .Distance = */ 971,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 1,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPAType00 = {
	/* .CenterRgba = */ {
		/* [0] = */ 233,
		/* [1] = */ 227,
		/* [2] = */ 191,
		/* [3] = */ 94
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 233,
		/* [1] = */ 227,
		/* [2] = */ 191,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 95,
	/* .LastScale = */ 284,
	/* .AllFrame = */ 15,
	/* .MoveDist = */ 327,
	/* .Distance = */ 975,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPBType00 = {
	/* .CenterRgba = */ {
		/* [0] = */ 241,
		/* [1] = */ 189,
		/* [2] = */ 113,
		/* [3] = */ 56
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 241,
		/* [1] = */ 189,
		/* [2] = */ 113,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 167,
	/* .AllFrame = */ 46,
	/* .MoveDist = */ 0,
	/* .Distance = */ 1000,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER SlowHitAType00 = {
	/* .CenterRgba = */ {
		/* [0] = */ 100,
		/* [1] = */ 68,
		/* [2] = */ 146,
		/* [3] = */ 125
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 73,
		/* [1] = */ 75,
		/* [2] = */ 78,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 176,
	/* .AllFrame = */ 35,
	/* .MoveDist = */ 0,
	/* .Distance = */ 940,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER SlowHitBType00 = {
	/* .CenterRgba = */ {
		/* [0] = */ 73,
		/* [1] = */ 72,
		/* [2] = */ 73,
		/* [3] = */ 13
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 73,
		/* [1] = */ 72,
		/* [2] = */ 73,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 169,
	/* .AllFrame = */ 33,
	/* .MoveDist = */ 948,
	/* .Distance = */ 946,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 203,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 12
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 203,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 961,
	/* .AllFrame = */ 8,
	/* .MoveDist = */ 13,
	/* .Distance = */ 946,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 197
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 819,
	/* .AllFrame = */ 31,
	/* .MoveDist = */ 625,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCA = {
	/* .CenterRgba = */ {
		/* [0] = */ 203,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 40
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 203,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 33
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 961,
	/* .AllFrame = */ 8,
	/* .MoveDist = */ 13,
	/* .Distance = */ 946,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 197
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 819,
	/* .AllFrame = */ 31,
	/* .MoveDist = */ 625,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPA = {
	/* .CenterRgba = */ {
		/* [0] = */ 203,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 84
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 207,
		/* [1] = */ 154,
		/* [2] = */ 93,
		/* [3] = */ 84
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 961,
	/* .AllFrame = */ 8,
	/* .MoveDist = */ 13,
	/* .Distance = */ 946,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 197
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 125,
		/* [2] = */ 180,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 819,
	/* .AllFrame = */ 31,
	/* .MoveDist = */ 625,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 145,
		/* [1] = */ 152,
		/* [2] = */ 111,
		/* [3] = */ 67
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 175,
		/* [1] = */ 175,
		/* [2] = */ 114,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 30,
	/* .AllFrame = */ 11,
	/* .MoveDist = */ 0,
	/* .Distance = */ 974,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 0,
	/* .CaptureNumber = */ 0,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 156,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 113
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 172,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 29,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCA = {
	/* .CenterRgba = */ {
		/* [0] = */ 145,
		/* [1] = */ 152,
		/* [2] = */ 111,
		/* [3] = */ 153
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 175,
		/* [1] = */ 175,
		/* [2] = */ 114,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 30,
	/* .AllFrame = */ 11,
	/* .MoveDist = */ 0,
	/* .Distance = */ 974,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCB = {
	/* .CenterRgba = */ {
		/* [0] = */ 156,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 113
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 172,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 29,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 8,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPA = {
	/* .CenterRgba = */ {
		/* [0] = */ 184,
		/* [1] = */ 255,
		/* [2] = */ 193,
		/* [3] = */ 0
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 188,
		/* [1] = */ 255,
		/* [2] = */ 182,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 98,
	/* .LastScale = */ 209,
	/* .AllFrame = */ 17,
	/* .MoveDist = */ 320,
	/* .Distance = */ 1001,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPB = {
	/* .CenterRgba = */ {
		/* [0] = */ 156,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 113
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 172,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 29,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 8,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 100,
		/* [1] = */ 158,
		/* [2] = */ 126,
		/* [3] = */ 145
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 100,
		/* [1] = */ 158,
		/* [2] = */ 126,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 100,
	/* .AllFrame = */ 33,
	/* .MoveDist = */ 0,
	/* .Distance = */ 1000,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 163,
		/* [2] = */ 159,
		/* [3] = */ 255
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 127,
		/* [2] = */ 159,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 501,
	/* .AllFrame = */ 35,
	/* .MoveDist = */ 636,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ViewHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 247,
		/* [2] = */ 175,
		/* [3] = */ 108
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 233,
		/* [2] = */ 177,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 105,
	/* .AllFrame = */ 31,
	/* .MoveDist = */ 0,
	/* .Distance = */ 1001,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER ViewHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 127,
		/* [2] = */ 159,
		/* [3] = */ 39
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 127,
		/* [2] = */ 159,
		/* [3] = */ 43
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 231,
	/* .AllFrame = */ 1,
	/* .MoveDist = */ 0,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 206,
		/* [1] = */ 101,
		/* [2] = */ 63,
		/* [3] = */ 255
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 196,
		/* [1] = */ 119,
		/* [2] = */ 114,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 171,
	/* .AllFrame = */ 4,
	/* .MoveDist = */ 27,
	/* .Distance = */ 974,
	/* .RotVal = */ 3654,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 234,
		/* [1] = */ 110,
		/* [2] = */ 107,
		/* [3] = */ 219
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 114,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 9,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3483,
	/* .CaptureInterval = */ 5,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCA = {
	/* .CenterRgba = */ {
		/* [0] = */ 206,
		/* [1] = */ 101,
		/* [2] = */ 63,
		/* [3] = */ 255
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 196,
		/* [1] = */ 119,
		/* [2] = */ 114,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 171,
	/* .AllFrame = */ 4,
	/* .MoveDist = */ 27,
	/* .Distance = */ 974,
	/* .RotVal = */ 3654,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCB = {
	/* .CenterRgba = */ {
		/* [0] = */ 234,
		/* [1] = */ 110,
		/* [2] = */ 107,
		/* [3] = */ 219
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 114,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 9,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3483,
	/* .CaptureInterval = */ 5,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPA = {
	/* .CenterRgba = */ {
		/* [0] = */ 206,
		/* [1] = */ 101,
		/* [2] = */ 63,
		/* [3] = */ 255
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 196,
		/* [1] = */ 119,
		/* [2] = */ 114,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 171,
	/* .AllFrame = */ 4,
	/* .MoveDist = */ 27,
	/* .Distance = */ 974,
	/* .RotVal = */ 3654,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPB = {
	/* .CenterRgba = */ {
		/* [0] = */ 234,
		/* [1] = */ 110,
		/* [2] = */ 107,
		/* [3] = */ 219
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 114,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 9,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3483,
	/* .CaptureInterval = */ 5,
	/* .CaptureNumber = */ 6,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 152,
		/* [2] = */ 111,
		/* [3] = */ 32
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 126,
		/* [1] = */ 175,
		/* [2] = */ 114,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 10,
	/* .AllFrame = */ 8,
	/* .MoveDist = */ 1,
	/* .Distance = */ 985,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 0,
	/* .CaptureNumber = */ 0,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 194
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 103,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 123
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 8,
	/* .MoveDist = */ 881,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 0,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitSCA = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 152,
		/* [2] = */ 111,
		/* [3] = */ 153
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 126,
		/* [1] = */ 175,
		/* [2] = */ 114,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 10,
	/* .AllFrame = */ 11,
	/* .MoveDist = */ 0,
	/* .Distance = */ 974,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitSCB = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 113
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 103,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 10,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 3,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitSPA = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 152,
		/* [2] = */ 111,
		/* [3] = */ 153
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 126,
		/* [1] = */ 175,
		/* [2] = */ 114,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 101,
	/* .LastScale = */ 10,
	/* .AllFrame = */ 11,
	/* .MoveDist = */ 0,
	/* .Distance = */ 974,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER RenHitSPB = {
	/* .CenterRgba = */ {
		/* [0] = */ 114,
		/* [1] = */ 153,
		/* [2] = */ 107,
		/* [3] = */ 113
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 103,
		/* [1] = */ 161,
		/* [2] = */ 111,
		/* [3] = */ 0
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 104,
	/* .LastScale = */ 308,
	/* .AllFrame = */ 10,
	/* .MoveDist = */ 62,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 3,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER TsuiHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 247,
		/* [2] = */ 193,
		/* [3] = */ 94
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 255,
		/* [1] = */ 233,
		/* [2] = */ 204,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 180,
	/* .LastScale = */ 100,
	/* .AllFrame = */ 83,
	/* .MoveDist = */ 0,
	/* .Distance = */ 1001,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER TsuiHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 127,
		/* [2] = */ 159,
		/* [3] = */ 39
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 116,
		/* [1] = */ 127,
		/* [2] = */ 159,
		/* [3] = */ 43
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 262,
	/* .LastScale = */ 312,
	/* .AllFrame = */ 1,
	/* .MoveDist = */ 0,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 1,
	/* .CaptureNumber = */ 1,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER FuuHitA = {
	/* .CenterRgba = */ {
		/* [0] = */ 184,
		/* [1] = */ 255,
		/* [2] = */ 193,
		/* [3] = */ 0
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 188,
		/* [1] = */ 255,
		/* [2] = */ 182,
		/* [3] = */ 255
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 98,
	/* .LastScale = */ 209,
	/* .AllFrame = */ 17,
	/* .MoveDist = */ 320,
	/* .Distance = */ 1001,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_LARGE_HIT_PARAMETER FuuHitB = {
	/* .CenterRgba = */ {
		/* [0] = */ 133,
		/* [1] = */ 226,
		/* [2] = */ 159,
		/* [3] = */ 0
	},
	/* .OutsideRgba = */ {
		/* [0] = */ 144,
		/* [1] = */ 233,
		/* [2] = */ 159,
		/* [3] = */ 154
	},
	/* .VertexNumW = */ 17,
	/* .VertexNumH = */ 15,
	/* .Size = */ 100,
	/* .LastScale = */ 336,
	/* .AllFrame = */ 10,
	/* .MoveDist = */ 351,
	/* .Distance = */ 992,
	/* .RotVal = */ 3600,
	/* .CaptureInterval = */ 2,
	/* .CaptureNumber = */ 2,
	/* .AlphaBlendA = */ 0,
	/* .AlphaBlendB = */ 2,
	/* .AlphaBlendC = */ 0,
	/* .AlphaBlendD = */ 1,
	/* .AlphaBlendFIX = */ 0
};

ENE_DMG_BLUR_CONTRAST_PARAMETER SmallHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 2,
	/* .KeepTime = */ 12,
	/* .OutTime = */ 9,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 0,
	/* .PadVibrateOnFlg = */ 0,
	/* .PadVibrateFrame = */ 0
};

ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHit_Blur = {
	/* .StartFrame = */ 5,
	/* .InTime = */ 0,
	/* .KeepTime = */ 24,
	/* .OutTime = */ 0,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1207,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 15,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 11,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 16,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 2,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 2
};

ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHitSP_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 0,
	/* .KeepTime = */ 12,
	/* .OutTime = */ 0,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1283,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 30,
	/* .MaxContrastColor = */ 48,
	/* .MinContrastAlpha = */ 27,
	/* .MaxContrastAlpha = */ 37,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 11,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 10
};

ENE_DMG_BLUR_CONTRAST_PARAMETER SlowHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 27,
	/* .KeepTime = */ 27,
	/* .OutTime = */ 78,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 4,
	/* .PadVibrateOnFlg = */ 0,
	/* .PadVibrateFrame = */ 4
};

ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHit_Blur = {
	/* .StartFrame = */ 6,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1820,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSC_Blur = {
	/* .StartFrame = */ 6,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1820,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSP_Blur = {
	/* .StartFrame = */ 6,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1820,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSC_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSP_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER ParalyzeHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 2,
	/* .KeepTime = */ 8,
	/* .OutTime = */ 8,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1392,
	/* .MinBlurAlpha = */ 75,
	/* .MaxBlurAlpha = */ 129,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1820,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 5,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 5
};

ENE_DMG_BLUR_CONTRAST_PARAMETER ViewHit_Blur = {
	/* .StartFrame = */ 7,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1080,
	/* .MinBlurAlpha = */ 0,
	/* .MaxBlurAlpha = */ 64,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1820,
	/* .BlurOnFlg = */ 0,
	/* .MinContrastColor = */ 0,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 0,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 0,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 6,
	/* .PadVibrateOnFlg = */ 0,
	/* .PadVibrateFrame = */ 6
};

ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 95,
	/* .MaxBlurAlpha = */ 93,
	/* .MinBlurRot = */ 1571,
	/* .MaxBlurRot = */ 2073,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSC_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 95,
	/* .MaxBlurAlpha = */ 93,
	/* .MinBlurRot = */ 1571,
	/* .MaxBlurRot = */ 2073,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSP_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 95,
	/* .MaxBlurAlpha = */ 93,
	/* .MinBlurRot = */ 1571,
	/* .MaxBlurRot = */ 2073,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER RenHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSC_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSP_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 20,
	/* .KeepTime = */ 20,
	/* .OutTime = */ 20,
	/* .MinBlurScale = */ 1030,
	/* .MaxBlurScale = */ 1683,
	/* .MinBlurAlpha = */ 35,
	/* .MaxBlurAlpha = */ 21,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 42,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 74,
	/* .MaxContrastAlpha = */ 140,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 1,
	/* .CameraShakeFrame = */ 7,
	/* .PadVibrateOnFlg = */ 1,
	/* .PadVibrateFrame = */ 7
};

ENE_DMG_BLUR_CONTRAST_PARAMETER TsuiHit_Blur = {
	/* .StartFrame = */ 7,
	/* .InTime = */ 5,
	/* .KeepTime = */ 23,
	/* .OutTime = */ 23,
	/* .MinBlurScale = */ 1000,
	/* .MaxBlurScale = */ 1194,
	/* .MinBlurAlpha = */ 60,
	/* .MaxBlurAlpha = */ 127,
	/* .MinBlurRot = */ 1800,
	/* .MaxBlurRot = */ 1800,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 49,
	/* .MaxContrastColor = */ 80,
	/* .MinContrastAlpha = */ 63,
	/* .MaxContrastAlpha = */ 80,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 6,
	/* .PadVibrateOnFlg = */ 0,
	/* .PadVibrateFrame = */ 6
};

ENE_DMG_BLUR_CONTRAST_PARAMETER FuuHit_Blur = {
	/* .StartFrame = */ 0,
	/* .InTime = */ 2,
	/* .KeepTime = */ 48,
	/* .OutTime = */ 27,
	/* .MinBlurScale = */ 910,
	/* .MaxBlurScale = */ 1405,
	/* .MinBlurAlpha = */ 16,
	/* .MaxBlurAlpha = */ 92,
	/* .MinBlurRot = */ 1783,
	/* .MaxBlurRot = */ 1808,
	/* .BlurOnFlg = */ 1,
	/* .MinContrastColor = */ 32,
	/* .MaxContrastColor = */ 64,
	/* .MinContrastAlpha = */ 45,
	/* .MaxContrastAlpha = */ 158,
	/* .ContrastOnFlg = */ 1,
	/* .CameraShakeOnFlg = */ 0,
	/* .CameraShakeFrame = */ 6,
	/* .PadVibrateOnFlg = */ 0,
	/* .PadVibrateFrame = */ 6
};

fixed_array<ENDMG1,10> enedmg1 = {
	/* base class 0 = */ {
		/* .m_aData = */ {
			/* [0] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [1] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [2] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [3] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [4] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [5] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [6] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [7] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [8] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			},
			/* [9] = */ {
				/* .wbpos = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							},
							/* [1] = */ {
								/* [0] = */ 0.f,
								/* [1] = */ 0.f,
								/* [2] = */ 0.f,
								/* [3] = */ 0.f
							}
						}
					}
				},
				/* .scw = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .sch = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .rot_z = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .alp = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0.f,
							/* [1] = */ 0.f,
							/* [2] = */ 0.f,
							/* [3] = */ 0.f
						}
					}
				},
				/* .cnt = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .flow = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0
						}
					}
				},
				/* .enedmg_no = */ 0,
				/* .enedmg1_flg = */ 0,
				/* .enedmg_chance = */ 0,
				/* .dummy = */ 0
			}
		}
	}
};

ENE_DMG_LARGE_HIT_CTRL EneDmgLargeHitCtrl = {
	/* .Work = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ {
					/* .CenterPos = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .AlphaBlend = */ 0,
					/* .Scale = */ 0.f,
					/* .LastScale = */ 0.f,
					/* .MoveDist = */ 0.f,
					/* .Distance = */ 0.f,
					/* .RotVal = */ 0.f,
					/* .VertexNumW = */ 0,
					/* .VertexNumH = */ 0,
					/* .NowFrame = */ 0,
					/* .AllFrame = */ 0,
					/* .CaptureInterval = */ 0,
					/* .CaptureNumber = */ 0,
					/* .CenterRgba = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ 0,
								/* [1] = */ 0,
								/* [2] = */ 0,
								/* [3] = */ 0
							}
						}
					},
					/* .OutsideRgba = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ 0,
								/* [1] = */ 0,
								/* [2] = */ 0,
								/* [3] = */ 0
							}
						}
					},
					/* .InitCenterAlpha = */ 0,
					/* .InitOutsideAlpha = */ 0,
					/* .Delay = */ 0
				},
				/* [1] = */ {
					/* .CenterPos = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .AlphaBlend = */ 0,
					/* .Scale = */ 0.f,
					/* .LastScale = */ 0.f,
					/* .MoveDist = */ 0.f,
					/* .Distance = */ 0.f,
					/* .RotVal = */ 0.f,
					/* .VertexNumW = */ 0,
					/* .VertexNumH = */ 0,
					/* .NowFrame = */ 0,
					/* .AllFrame = */ 0,
					/* .CaptureInterval = */ 0,
					/* .CaptureNumber = */ 0,
					/* .CenterRgba = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ 0,
								/* [1] = */ 0,
								/* [2] = */ 0,
								/* [3] = */ 0
							}
						}
					},
					/* .OutsideRgba = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ 0,
								/* [1] = */ 0,
								/* [2] = */ 0,
								/* [3] = */ 0
							}
						}
					},
					/* .InitCenterAlpha = */ 0,
					/* .InitOutsideAlpha = */ 0,
					/* .Delay = */ 0
				}
			}
		}
	},
	/* .Status = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ 0,
				/* [1] = */ 0
			}
		}
	}
};

float enedmg2_sp = 1.3f;
int SEC0 = 1;
int SEC1 = 2;
int SEC2 = 4;
int SEC3 = 10;
int SEC4 = 30;
int SEC5 = 15;
static reference_fixed_array<ENE_DMG_LARGE_HIT_PARAMETER *,38> pLargeHitParameter;
static reference_fixed_array<ENE_DMG_BLUR_CONTRAST_PARAMETER *,20> pLargeHitBlurParameter;
static fixed_array<TAIL_DMG2_DAT,48> enedmg2_tail;
static fixed_array<NEW_PERTICLE,48> new_perticle;
static reference_fixed_array<int,3> alp;
static reference_fixed_array<int,3> scl;
static reference_fixed_array<int,3> rot;
static reference_fixed_array<int,3> ccol;
static reference_fixed_array<int,3> calp;
unsigned char ENDMG1 type_info node[8];
unsigned char ENE_WRK type_info node[8];
unsigned char float [3] type_info node[8];
unsigned char SPRT_DAT type_info node[8];
unsigned char NEW_PERTICLE type_info node[8];
unsigned char float [3][3] type_info node[8];
unsigned char TAIL_DMG2_DAT type_info node[8];
unsigned char ENEDMG_PARTICLE_ONE type_info node[8];
unsigned char int [3] type_info node[8];
unsigned char ENE_DMG_LARGE_HIT type_info node[8];
unsigned char ENE_DMG_LARGE_HIT_PARAMETER * type_info node[12];
unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER * type_info node[12];
unsigned char ENE_DMG_LARGE_HIT_PARAMETER type_info node[8];
unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER type_info node[8];

ENDMG2 enedmg2 = {
	/* .enedmg_no = */ 0,
	/* .enedmg2_flg = */ 0,
	/* .enedmg_chance = */ 0
};

ENE_HIT_EFFECT_CTRL EneHitEffectCtrl = {
	/* .EneMposP0 = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .pBlurContrast = */ NULL,
	/* .Flow = */ 0,
	/* .EneWrkNo = */ 0,
	/* .HitEffecType = */ 0,
	/* .Counter = */ 0,
	/* .ContrastColor = */ 0,
	/* .ContrastAlpha = */ 0,
	/* .BlurScale = */ 0,
	/* .BlurRot = */ 0,
	/* .BlurAlpha = */ 0
};

int eneseal_status = 0;
int enedmg_status = 0;
static int EneDmgParticleSuctionNum;

SWORD_LINE sw_line = {
	/* .sw = */ 0,
	/* .num = */ 0,
	/* .top = */ 0,
	/* .dummy = */ 0
};

ENE_DMG_EFF ene_dmg_eff = {
	/* .MposP0 = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .flow = */ 0,
	/* .alp = */ 0,
	/* .chance = */ 0,
	/* .scl = */ 0,
	/* .rot = */ 0,
	/* .cntcol = */ 0,
	/* .cntalp = */ 0,
	/* .cnt = */ 0,
	/* .x = */ 0.f,
	/* .y = */ 0.f,
	/* .dist = */ 0.f,
	/* .almx = */ 0,
	/* .scmx = */ 0,
	/* .rtmx = */ 0,
	/* .ccmx = */ 0,
	/* .camx = */ 0,
	/* .DmgType = */ 0
};

SINGLE_LINK_LIST EneParticleList = {
	/* .ElemSize = */ 0,
	/* .RegCount = */ 0,
	/* .pBeginCell = */ NULL,
	/* .pEndCell = */ NULL
};

SINGLE_LINK_LIST EffectEndParticleList = {
	/* .ElemSize = */ 0,
	/* .RegCount = */ 0,
	/* .pBeginCell = */ NULL,
	/* .pEndCell = */ NULL
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a5e20;
	
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  int in_a3_lo;
  int in_t0_lo;
  float in_f13;
  float in_f12;
  float in_f14;
  
  if (_max <= v) {
    __tf31ENE_DMG_BLUR_CONTRAST_PARAMETER
              ((ENEDMG_PARTICLE_ONE *)s_void__003efd48,in_f12,in_f13,_max,v,in_a3_lo,in_f14,in_t0_lo
              );
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  int in_a3_lo;
  int in_t0_lo;
  float in_f13;
  float in_f12;
  float in_f14;
  
  if (_max <= v) {
    __tf31ENE_DMG_BLUR_CONTRAST_PARAMETER
              ((ENEDMG_PARTICLE_ONE *)s_char__003efd50,in_f12,in_f13,_max,v,in_a3_lo,in_f14,in_t0_lo
              );
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  int in_a3_lo;
  int in_t0_lo;
  float in_f13;
  float in_f12;
  float in_f14;
  
  if (_max <= v) {
    __tf31ENE_DMG_BLUR_CONTRAST_PARAMETER
              ((ENEDMG_PARTICLE_ONE *)"unsigned int*",in_f12,in_f13,_max,v,in_a3_lo,in_f14,in_t0_lo)
    ;
  }
  return (uint **)0x0;
}

void InitEffectEne() {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  EneDmgLargeHitCtrlInit__Fv();
  EneDmgParticleWorkInit__Fv();
  EffectEndParticleWorkInit__Fv();
  EneDmgScreenWorkInit__Fv();
  EneHitEffectCtrlInit__Fv();
  piVar3 = &enedmg1.field0_0x0.m_aData[0].enedmg1_flg;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z6ENDMG1_UiUi_PX01(iVar1,10);
    *piVar3 = 0;
                    /* end of inlined section */
    piVar3 = piVar3 + 0x24;
    iVar1 = iVar2;
  } while (iVar2 < 10);
  enedmg2.enedmg2_flg = 0;
  sw_line.num = 1;
  sw_line.top = 0;
  enedmg_status = 0;
  eneseal_status = 0;
  sw_line.sw = 0;
  EneDmgParticleSuctionNum = 0;
  return;
}

void InitEffectEneEF() {
  return;
}

static sceVu0FVECTOR* EfGetMpos(int eneno, int id) {
	static float work[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	};
	
  float (*pafVar1) [4];
  
  if ((uint)id < 10) {
                    /* WARNING: Could not recover jumptable at 0x001421d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pafVar1 = (float (*) [4])(*(code *)(&PTR_LAB_003a5e80)[id])(eneno);
    return pafVar1;
  }
                    /* end of inlined section */
  return (float (*) [4])work_997;
}

static u_short EfGetDmgOld(int eneno) {
  return 0;
}

static void SetEneDmgEffect1_Sub2(int num) {
	static reference_fixed_array<SPRT_DAT,14> camdat;
	static u_char rgb[2][2][3][3] = {
		/* [0] = */ {
			/* [0] = */ {
				/* [0] = */ {
					/* [0] = */ 128,
					/* [1] = */ 128,
					/* [2] = */ 128
				},
				/* [1] = */ {
					/* [0] = */ 255,
					/* [1] = */ 32,
					/* [2] = */ 32
				},
				/* [2] = */ {
					/* [0] = */ 255,
					/* [1] = */ 240,
					/* [2] = */ 255
				}
			},
			/* [1] = */ {
				/* [0] = */ {
					/* [0] = */ 73,
					/* [1] = */ 138,
					/* [2] = */ 234
				},
				/* [1] = */ {
					/* [0] = */ 255,
					/* [1] = */ 80,
					/* [2] = */ 48
				},
				/* [2] = */ {
					/* [0] = */ 255,
					/* [1] = */ 250,
					/* [2] = */ 255
				}
			}
		},
		/* [1] = */ {
			/* [0] = */ {
				/* [0] = */ {
					/* [0] = */ 128,
					/* [1] = */ 128,
					/* [2] = */ 128
				},
				/* [1] = */ {
					/* [0] = */ 106,
					/* [1] = */ 106,
					/* [2] = */ 106
				},
				/* [2] = */ {
					/* [0] = */ 106,
					/* [1] = */ 106,
					/* [2] = */ 106
				}
			},
			/* [1] = */ {
				/* [0] = */ {
					/* [0] = */ 148,
					/* [1] = */ 148,
					/* [2] = */ 148
				},
				/* [1] = */ {
					/* [0] = */ 128,
					/* [1] = */ 128,
					/* [2] = */ 128
				},
				/* [2] = */ {
					/* [0] = */ 128,
					/* [1] = */ 128,
					/* [2] = */ 128
				}
			}
		}
	};
	fixed_array<float[4],4> wpos;
	float cpos[4];
	int i;
	int j;
	int n;
	int st;
	float rot_x;
	float rot_y;
	float fx;
	float fy;
	float fz;
	float scmax;
	fixed_array<float,4> scl;
	float wlm[4][4];
	float slm[4][4];
	int mono;
	fixed_array<int,4> clip;
	fixed_array<unsigned int,4> tw;
	fixed_array<unsigned int,4> th;
	fixed_array<long unsigned int,4> tex0;
	float ppos[4][4][4];
	float bpos[4];
	sceVu0IVECTOR ivec[4][4];
	U32DATA ts[4][4];
	U32DATA tt[4][4];
	U32DATA tq[4][4];
	float dist[4];
	float bww[4];
	float bhh[4];
	float szw[4];
	float szh[4];
	reference_fixed_array<unsigned int,4> textbl;
	u_int clpz1;
	u_int clpz2;
	ENDMG1 *dmg1;
	int ndpkt;
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	
  uint uVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  float (*pafVar6) [4];
  int iVar7;
  float (*pafVar8) [4];
  ENDMG1 *pEVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  fixed_array<int,4> *pfVar13;
  int *piVar14;
  fixed_array<int,4> *pfVar15;
  int *piVar16;
  fixed_array<float,4> *pfVar17;
  float *pfVar18;
  int iVar19;
  float fVar20;
  fixed_array<float[4],4> wpos;
  float cpos [4];
  float rot_x;
  float rot_y;
  fixed_array<float,4> scl;
  float wlm [4] [4];
  float slm [4] [4];
  fixed_array<int,4> clip;
  fixed_array<unsigned_int,4> tw;
  fixed_array<unsigned_int,4> th;
  fixed_array<long_unsigned_int,4> tex0;
  float ppos [4] [4] [4];
  float bpos [4];
  int ivec [4] [4] [4];
  U32DATA ts [4] [4];
  U32DATA tt [4] [4];
  U32DATA tq [4] [4];
  float dist [4];
  float bww [4];
  float bhh [4];
  float szw [4];
  float szh [4];
  reference_fixed_array<unsigned_int,4> textbl;
  int st;
  int mono;
  uint clpz2;
  ENDMG1 *dmg1;
  Q_WORDDATA *pbuf;
  GRA3DCAMERA *pCam;
  float (*cam_pos) [4];
  fixed_array<float,4> *local_98;
  fixed_array<float,4> *local_94;
  
  if (__tmp_10_1008 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_10_1008 = 1;
    camdat_1007 = &DAT_003a5ea8;
  }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar1 = (int)dist + 7U & 7;
  puVar2 = (ulong *)(((int)dist + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6068 >> (7 - uVar1) * 8;
  dist._0_8_ = DAT_003a6068;
  uVar1 = (int)dist + 0xfU & 7;
  puVar2 = (ulong *)(((int)dist + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6070 >> (7 - uVar1) * 8;
  dist._8_8_ = DAT_003a6070;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar1 = (int)bww + 7U & 7;
  puVar2 = (ulong *)(((int)bww + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6078 >> (7 - uVar1) * 8;
  bww._0_8_ = DAT_003a6078;
  uVar1 = (int)bww + 0xfU & 7;
  puVar2 = (ulong *)(((int)bww + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6080 >> (7 - uVar1) * 8;
  bww._8_8_ = DAT_003a6080;
  uVar1 = (int)bhh + 7U & 7;
  puVar2 = (ulong *)(((int)bhh + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6088 >> (7 - uVar1) * 8;
  bhh._0_8_ = DAT_003a6088;
  uVar1 = (int)bhh + 0xfU & 7;
  puVar2 = (ulong *)(((int)bhh + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6090 >> (7 - uVar1) * 8;
  bhh._8_8_ = DAT_003a6090;
  uVar1 = (int)szw + 7U & 7;
  puVar2 = (ulong *)(((int)szw + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a6098 >> (7 - uVar1) * 8;
  szw._0_8_ = DAT_003a6098;
  uVar1 = (int)szw + 0xfU & 7;
  puVar2 = (ulong *)(((int)szw + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a60a0 >> (7 - uVar1) * 8;
  szw._8_8_ = DAT_003a60a0;
  uVar1 = (int)szh + 7U & 7;
  puVar2 = (ulong *)(((int)szh + 7U) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a60a8 >> (7 - uVar1) * 8;
  szh._0_8_ = DAT_003a60a8;
  uVar1 = (int)szh + 0xfU & 7;
  puVar2 = (ulong *)(((int)szh + 0xfU) - uVar1);
  *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | DAT_003a60b0 >> (7 - uVar1) * 8;
  szh._8_8_ = DAT_003a60b0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  gra3dGetCamera__Fv();
  pafVar6 = gra3dcamGetPosition__Fv();
  iVar7 = EffWrkStopFlgGet__Fv();
  if (iVar7 != 0) {
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z6ENDMG1_UiUi_PX01(num,10);
  iVar7 = num * 0x90;
  pEVar9 = enedmg1.field0_0x0.m_aData + num;
                    /* end of inlined section */
  if (enedmg1.field0_0x0.m_aData[num].enedmg1_flg == 0) {
    return;
  }
  EffWrkMonochroModeGet__Fv();
  EffWrkMonochroModeSet__Fi(0);
  if (enedmg1.field0_0x0.m_aData[num].enedmg1_flg == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pafVar8 = EfGetMpos__Fii(enedmg1.field0_0x0.m_aData[num].enedmg_no,0);
    uVar3 = *(undefined8 *)*pafVar8;
    fVar10 = (*pafVar8)[2];
    fVar11 = (*pafVar8)[3];
    (pEVar9->wbpos).field0_0x0.m_aData[0] = (float)uVar3;
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[1] = (float)((ulong)uVar3 >> 0x20);
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[2] = fVar10;
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[3] = fVar11;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    pafVar8 = EfGetMpos__Fii(enedmg1.field0_0x0.m_aData[num].enedmg_no,0);
    uVar3 = *(undefined8 *)*pafVar8;
    fVar10 = (*pafVar8)[2];
    fVar11 = (*pafVar8)[3];
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[1][0] = (float)uVar3;
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[1][1] = (float)((ulong)uVar3 >> 0x20);
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[1][2] = fVar10;
    enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[1][3] = fVar11;
                    /* end of inlined section */
    iVar19 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar19,4);
      iVar12 = iVar19 * 4;
      *(undefined4 *)(iVar7 + 0x2e4a30 + iVar12) = 0;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar19,4);
      *(undefined4 *)(iVar7 + 0x2e4a40 + iVar12) = 0;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar19,4);
      *(undefined4 *)(iVar7 + 0x2e4a60 + iVar12) = 0;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar19,4);
      *(undefined4 *)(iVar7 + 0x2e4a80 + iVar12) = 0;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar19,4);
      *(undefined4 *)(iVar7 + 0x2e4a70 + iVar12) = 0;
      iVar19 = iVar19 + 1;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      enedmg1.field0_0x0.m_aData[num].rot_z.field0_0x0.m_aData[0] = 0.0;
    } while (iVar19 < 2);
    enedmg_status = 0;
    enedmg1.field0_0x0.m_aData[num].enedmg1_flg = 2;
  }
  local_94 = &enedmg1.field0_0x0.m_aData[num].sch;
  local_98 = &enedmg1.field0_0x0.m_aData[num].scw;
  pfVar15 = &enedmg1.field0_0x0.m_aData[num].flow;
  sVar5 = EfGetDmgOld__Fi(enedmg1.field0_0x0.m_aData[num].enedmg_no);
  if (sVar5 < 10) {
    iVar7 = 10;
  }
  else if (sVar5 < 0x51) {
    iVar7 = (int)sVar5;
  }
  else {
    iVar7 = 0x50;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  fVar10 = (float)(iVar7 + -10) / 70.0 + DAT_003eda14;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
  iVar7 = (pfVar15->field0_0x0).m_aData[0];
  if (iVar7 == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    pfVar13 = &enedmg1.field0_0x0.m_aData[num].cnt;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    fVar11 = 1.0;
    pfVar17 = &enedmg1.field0_0x0.m_aData[num].alp;
    (local_98->field0_0x0).m_aData[0] =
         ((float)(pfVar13->field0_0x0).m_aData[0] * fVar10 * 0.5) / 40.0 + 1.0;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    (local_94->field0_0x0).m_aData[0] =
         ((float)(pfVar13->field0_0x0).m_aData[0] * fVar10) / 40.0 + fVar11;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    (pfVar17->field0_0x0).m_aData[0] =
         80.0 - ((float)(pfVar13->field0_0x0).m_aData[0] * 80.0) / 40.0;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    if ((pfVar13->field0_0x0).m_aData[0] < 0x28) {
LAB_001429b0:
      pfVar15 = &enedmg1.field0_0x0.m_aData[num].cnt;
                    /* end of inlined section */
      iVar7 = EffWrkStopFlgGet__Fv();
      if (iVar7 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
        (pfVar15->field0_0x0).m_aData[0] = (pfVar15->field0_0x0).m_aData[0] + 1;
      }
    }
    else {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
      (pfVar15->field0_0x0).m_aData[0] = (pfVar15->field0_0x0).m_aData[0] + 1;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
      (pfVar13->field0_0x0).m_aData[0] = 0;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
      (pfVar17->field0_0x0).m_aData[0] = 0.0;
    }
  }
  else if ((iVar7 < 2) && (iVar7 == 0)) {
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    pfVar17 = &enedmg1.field0_0x0.m_aData[num].alp;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    (local_94->field0_0x0).m_aData[0] = 1.0;
    (local_98->field0_0x0).m_aData[0] = 1.0;
    pfVar13 = &enedmg1.field0_0x0.m_aData[num].cnt;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
    (pfVar17->field0_0x0).m_aData[0] = 0.0;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    if ((pfVar13->field0_0x0).m_aData[0] < 0xf) goto LAB_001429b0;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    (pfVar15->field0_0x0).m_aData[0] = (pfVar15->field0_0x0).m_aData[0] + 1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,4);
    (pfVar13->field0_0x0).m_aData[0] = 0;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(0,4);
                    /* end of inlined section */
    (pfVar17->field0_0x0).m_aData[0] = 80.0;
    SetEneDmgEffect2__Fv();
  }
  piVar16 = enedmg1.field0_0x0.m_aData[num].flow.field0_0x0.m_aData + 1;
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
  iVar7 = *piVar16;
  if (iVar7 == 1) {
    pfVar18 = enedmg1.field0_0x0.m_aData[num].rot_z.field0_0x0.m_aData + 1;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    *pfVar18 = *pfVar18 + DAT_003eda18;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    if (DAT_003eda1c <= *pfVar18) {
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
      *pfVar18 = *pfVar18 - DAT_003eda20;
    }
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    piVar14 = enedmg1.field0_0x0.m_aData[num].cnt.field0_0x0.m_aData + 1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
    pfVar18 = enedmg1.field0_0x0.m_aData[num].alp.field0_0x0.m_aData + 1;
    *pfVar18 = 64.0 - ((float)*piVar14 * 64.0) / 40.0;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
    if (0x27 < *piVar14) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
      *piVar16 = *piVar16 + 1;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
      *piVar14 = 0;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
      *pfVar18 = 0.0;
      goto LAB_00142c1c;
    }
  }
  else {
    if (1 < iVar7) {
      if (iVar7 == 2) {
        enedmg1.field0_0x0.m_aData[num].enedmg1_flg = 0;
      }
      goto LAB_00142c1c;
    }
    if (iVar7 != 0) goto LAB_00142c1c;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    pfVar18 = enedmg1.field0_0x0.m_aData[num].alp.field0_0x0.m_aData + 1;
    enedmg1.field0_0x0.m_aData[num].sch.field0_0x0.m_aData[1] = 1.0;
    enedmg1.field0_0x0.m_aData[num].scw.field0_0x0.m_aData[1] = 1.0;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
    *pfVar18 = 0.0;
    piVar14 = enedmg1.field0_0x0.m_aData[num].cnt.field0_0x0.m_aData + 1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
    if (0xe < *piVar14) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
      *piVar16 = *piVar16 + 1;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
      *piVar14 = 0;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(1,4);
      *pfVar18 = 64.0;
      goto LAB_00142c1c;
    }
  }
  piVar16 = enedmg1.field0_0x0.m_aData[num].cnt.field0_0x0.m_aData + 1;
                    /* end of inlined section */
  iVar7 = EffWrkStopFlgGet__Fv();
  if (iVar7 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,4);
                    /* end of inlined section */
    *piVar16 = *piVar16 + 1;
  }
LAB_00142c1c:
  SetSprFile2__FUiUi(0x1fa8000,0);
  uVar3 = *(undefined8 *)*pafVar6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar10 = (*pafVar6)[2];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,2,ppos);
  uVar4 = *(undefined8 *)(pEVar9->wbpos).field0_0x0.m_aData;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  fVar11 = (float)uVar4 - (float)uVar3;
  fVar20 = (float)((ulong)uVar4 >> 0x20) - (float)((ulong)uVar3 >> 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  fVar10 = enedmg1.field0_0x0.m_aData[num].wbpos.field0_0x0.m_aData[2] - fVar10;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  _qmtc2(fVar11 * fVar11 + fVar20 * fVar20 + fVar10 * fVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void SetEneDmgEffect1_Sub() {
	int i;
	
  int iVar1;
  int num;
  
  num = 0;
  do {
    iVar1 = num + 1;
    SetEneDmgEffect1_Sub2__Fi(num);
    num = iVar1;
  } while (iVar1 < 10);
  return;
}

static void SetEneDmgEffect2_Sub2(NEW_PERTICLE *np, float *bpos1, float *bpos2, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, int b2) {
	u_char b2;
	int i;
	int n;
	fixed_array<int,10> tbl;
	float fx;
	float fy;
	float fz;
	float f1;
	float f2;
	float rot_z;
	float r1l;
	float r2l;
	float r2r;
	fixed_array<float[4],30> wwpos;
	float bpos3[4];
	float opos1[4];
	float wpos[3][4];
	fixed_array<float[4],3> wkpos;
	float rot[4];
	float wlm[4][4];
	float rottt[4];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	float *pv0;
	
  fixed_array<int,10> tbl;
  fixed_array<float[4],30> wwpos;
  float bpos3 [4];
  float opos1 [4];
  float wpos [3] [4];
  fixed_array<float[4],3> wkpos;
  float rot [4];
  float wlm [4] [4];
  float rottt [4];
  
  gra3dGetCamera__Fv();
  gra3dcamGetPosition__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  _qmtc2((*bpos2 - *bpos1) * (*bpos2 - *bpos1) + (bpos2[1] - bpos1[1]) * (bpos2[1] - bpos1[1]) +
         (bpos2[2] - bpos1[2]) * (bpos2[2] - bpos1[2]));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void SetEneDmgEffect2_Sub() {
	int fl;
	u_char rgb1[3][8];
	u_char rgb2[3][8];
	int mono;
	int c;
	int i;
	int j;
	int k;
	int n;
	int nyoro_num;
	float fx;
	float fy;
	float fz;
	float f1;
	float rot_z;
	float span1;
	float span2;
	float r1l;
	float r2l;
	float r1r;
	float r2r;
	static float bpos1[4];
	float bpos2[4];
	float opos1[4];
	float rot[4];
	float wpos[4];
	float ppp2[4];
	float ppp[4];
	float wlm[4][4];
	NEW_PERTICLE *np;
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	DRAW_ENV de;
	float rot_x;
	float rot_y;
	float f;
	
  uchar *puVar1;
  uint uVar2;
  GRA3DCAMERA *pGVar3;
  float (*p0) [4];
  int iVar4;
  float (*pafVar5) [4];
  uchar rgb1 [3] [8];
  uchar rgb2 [3] [8];
  float bpos2 [4];
  float opos1 [4];
  float rot [4];
  float wpos [4];
  float ppp2 [4];
  float ppp [4];
  float wlm [4] [4];
  DRAW_ENV de;
  float rot_x;
  float rot_y;
  int mono;
  int c;
  int j;
  int k;
  int nyoro_num;
  GRA3DCAMERA *pCam;
  float (*cam_pos) [4];
  
  puVar1 = rgb1 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6130 >> (7 - uVar2) * 8
  ;
  rgb1[0] = DAT_003a6130;
  puVar1 = rgb1[1] + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6138 >> (7 - uVar2) * 8
  ;
  rgb1[1] = DAT_003a6138;
  puVar1 = rgb1[2] + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6140 >> (7 - uVar2) * 8
  ;
  rgb1[2] = DAT_003a6140;
  puVar1 = rgb2 + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6148 >> (7 - uVar2) * 8
  ;
  rgb2[0] = DAT_003a6148;
  puVar1 = rgb2[1] + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6150 >> (7 - uVar2) * 8
  ;
  rgb2[1] = DAT_003a6150;
  puVar1 = rgb2[2] + 7;
  uVar2 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar2) =
       *(ulong *)(puVar1 + -uVar2) & -1L << (uVar2 + 1) * 8 | (ulong)DAT_003a6158 >> (7 - uVar2) * 8
  ;
  rgb2[2] = DAT_003a6158;
  ppp2._0_8_ = DAT_003a6170;
  ppp2._8_8_ = DAT_003a6178;
  ppp._0_8_ = DAT_003a6180;
  ppp._8_8_ = DAT_003a6188;
  pGVar3 = gra3dGetCamera__Fv();
  p0 = gra3dcamGetPosition__Fv();
  iVar4 = EffWrkStopFlgGet__Fv();
  if ((iVar4 == 0) && (enedmg2.enedmg2_flg != 0)) {
    ppp2[1] = ppp2[1] * (pGVar3->fFov / DAT_003eda5c);
    ppp2[0] = ppp2[0] * (pGVar3->fFov / DAT_003eda5c);
    EffWrkMonochroModeGet__Fv();
    EffWrkMonochroModeSet__Fi(0);
    if (enedmg2.enedmg2_flg == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      pafVar5 = EfGetMpos__Fii(enedmg2.enedmg_no,0);
      DAT_00423478 = (*pafVar5)[2];
      DAT_0042347c = (*pafVar5)[3];
      bpos1_1118 = (float)*(undefined8 *)*pafVar5;
      DAT_00423474 = (float)((ulong)*(undefined8 *)*pafVar5 >> 0x20);
                    /* end of inlined section */
      enedmg2.enedmg2_flg = 2;
    }
    EfGetDmgOld__Fi(enedmg2.enedmg_no);
    sceVu0UnitMatrix(wlm);
    if (plyr_wrk.cmn_wrk.mode == '\x06') {
      GetTrgtRot__FPCfT0Pfi((float *)p0,pGVar3->vTarget,rot,3);
      sceVu0RotMatrixX(rot[0],wlm,wlm);
      sceVu0RotMatrixY(rot[1],wlm,wlm);
      sceVu0TransMatrix(wlm,wlm,p0);
      sceVu0ApplyMatrix(bpos2,wlm,ppp2);
    }
    else {
      sceVu0RotMatrixX(plyr_wrk.cmn_wrk.mbox.rot[0],wlm,wlm);
      sceVu0RotMatrixY(plyr_wrk.cmn_wrk.mbox.rot[1],wlm,wlm);
      sceVu0TransMatrix(wlm,wlm,0x33cda0);
      sceVu0ApplyMatrix(bpos2,wlm,ppp);
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    _qmtc2((bpos2[0] - bpos1_1118) * (bpos2[0] - bpos1_1118) +
           (bpos2[1] - DAT_00423474) * (bpos2[1] - DAT_00423474) +
           (bpos2[2] - DAT_00423478) * (bpos2[2] - DAT_00423478));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

void SetEneDmgEffect2() {
  enedmg2.enedmg2_flg = 1;
  return;
}

static void EneDmgParticleWorkInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&EneParticleList,0xf50);
  return;
}

static void EffectEndParticleWorkInit() {
  SingleLinkListInit__FP16SINGLE_LINK_LISTUi(&EffectEndParticleList,0xf50);
  return;
}

static void EneDmgScreenWorkInit() {
  memset(&ene_dmg_eff,0,0x50);
  return;
}

static void EneHitEffectCtrlInit() {
  memset(&EneHitEffectCtrl,0,0x40);
  return;
}

void EneHitEffectReq(int EneWrkNo, float *EneMposP0, int HitEffectLabel) {
	ENE_HIT_EFFECT_CTRL *pCtrl;
	
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  EneHitEffectCtrl.EneMposP0[2] = EneMposP0[2];
  EneHitEffectCtrl.EneMposP0[3] = EneMposP0[3];
  EneHitEffectCtrl.EneMposP0[0] = (float)*(undefined8 *)EneMposP0;
  EneHitEffectCtrl.EneMposP0[1] = (float)((ulong)*(undefined8 *)EneMposP0 >> 0x20);
  EneHitEffectCtrl.EneWrkNo = EneWrkNo;
                    /* end of inlined section */
  EneHitEffectCtrl.pBlurContrast = EffEneDmgLargeHitBlurParameterPtrGet__Fi(HitEffectLabel);
  EneHitEffectCtrl.HitEffecType = HitEffectLabel;
  EneHitEffectCtrl.Flow = 1;
  EneHitEffectCtrl.BlurAlpha = '\0';
  EneHitEffectCtrl.Counter = 0;
  EneHitEffectCtrl.ContrastColor = 0;
  EneHitEffectCtrl.ContrastAlpha = 0;
  EneHitEffectCtrl.BlurScale = 0;
  EneHitEffectCtrl.BlurRot = 0;
  return;
}

void EneHitEffectMain() {
	ENE_HIT_EFFECT_CTRL *pCtrl;
	int AllTime;
	int NowTime;
	int EneWrkNo;
	int HitEffectLabel;
	float Progress;
	int NowTime;
	float tx;
	float ty;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float tx;
  float ty;
  
  iVar2 = EneHitEffectCtrl.HitEffecType;
  iVar1 = EneHitEffectCtrl.EneWrkNo;
  if (EneHitEffectCtrl.Flow == 1) {
    if (EneHitEffectCtrl.Counter == SEC0) {
      EneDmgLargeHitAllOff__Fv();
      switch(iVar2) {
      case 0:
        EneDmgLargeHitReq__Fi(0);
        break;
      case 1:
        EneDmgLargeHitReq__Fi(1);
        break;
      case 2:
        EneDmgLargeHitReq__Fi(2);
        EneDmgLargeHitReq__Fi(3);
        break;
      case 3:
        IgEffectSubFuncSlowReq__Fi(iVar1);
        break;
      case 4:
        IgEffectSubFuncZeroReq__Fii(iVar1,0);
        break;
      case 5:
        IgEffectSubFuncZeroReq__Fii(iVar1,1);
        break;
      case 6:
        IgEffectSubFuncZeroReq__Fii(iVar1,2);
        break;
      case 7:
        IgEffectSubFuncKokuReq__Fii(iVar1,0);
        break;
      case 8:
        IgEffectSubFuncKokuReq__Fii(iVar1,1);
        break;
      case 9:
        IgEffectSubFuncKokuReq__Fii(iVar1,2);
        break;
      case 10:
        IgEffectSubFuncParalyzeReq__Fi(iVar1);
        break;
      case 0xb:
        IgEffectSubFuncViewReq__Fi(iVar1);
        break;
      case 0xc:
        IgEffectSubFuncMetsuReq__Fii(iVar1,0);
        break;
      case 0xd:
        IgEffectSubFuncMetsuReq__Fii(iVar1,1);
        break;
      case 0xe:
        IgEffectSubFuncMetsuReq__Fii(iVar1,2);
        break;
      case 0xf:
        IgEffectSubFuncRenReq__Fii(iVar1,0);
        break;
      case 0x10:
        IgEffectSubFuncRenReq__Fii(iVar1,1);
        break;
      case 0x11:
        IgEffectSubFuncRenReq__Fii(iVar1,2);
        break;
      case 0x12:
        IgEffectSubFuncTsuiReq__Fi(iVar1);
        break;
      case 0x13:
        IgEffectSubFuncFuuReq__Fi(iVar1);
      }
    }
    EneHitEffectCtrl.Counter = EneHitEffectCtrl.Counter + 1;
    if (SEC0 + 1 <= EneHitEffectCtrl.Counter) {
      EneHitEffectCtrl.Flow = EneHitEffectCtrl.Flow + 1;
      EneHitEffectCtrl.Counter = 0;
    }
    goto LAB_00145270;
  }
  if (EneHitEffectCtrl.Flow < 2) {
    return;
  }
  if (EneHitEffectCtrl.Flow != 2) {
    if (EneHitEffectCtrl.Flow == 3) {
      EneHitEffectCtrl.Flow = 0;
      EneHitEffectCtrl.Counter = 0;
    }
    goto LAB_00145270;
  }
  if (EneHitEffectCtrl.Counter < (EneHitEffectCtrl.pBlurContrast)->StartFrame) {
    EneHitEffectCtrl.ContrastColor = 0;
    EneHitEffectCtrl.ContrastAlpha = 0;
    EneHitEffectCtrl.BlurScale = 0;
    EneHitEffectCtrl.BlurRot = 0;
    EneHitEffectCtrl.BlurAlpha = '\0';
  }
  else {
    iVar1 = (EneHitEffectCtrl.pBlurContrast)->InTime;
    iVar2 = EneHitEffectCtrl.Counter - (EneHitEffectCtrl.pBlurContrast)->StartFrame;
    if (iVar2 < iVar1) {
      if (iVar1 == 0) {
        fVar3 = 1.0;
        iVar1 = (EneHitEffectCtrl.pBlurContrast)->BlurOnFlg;
      }
      else {
        fVar3 = (float)iVar2 / (float)iVar1;
        iVar1 = (EneHitEffectCtrl.pBlurContrast)->BlurOnFlg;
      }
    }
    else {
      fVar3 = 1.0;
      iVar1 = iVar1 + (EneHitEffectCtrl.pBlurContrast)->KeepTime;
      if (iVar2 < iVar1) {
        iVar1 = (EneHitEffectCtrl.pBlurContrast)->BlurOnFlg;
      }
      else {
        if ((EneHitEffectCtrl.pBlurContrast)->OutTime == 0) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = 1.0 - (float)(iVar2 - iVar1) / (float)(EneHitEffectCtrl.pBlurContrast)->OutTime;
        }
        iVar1 = (EneHitEffectCtrl.pBlurContrast)->BlurOnFlg;
      }
    }
    if (iVar1 == 0) {
      iVar1 = (EneHitEffectCtrl.pBlurContrast)->ContrastOnFlg;
    }
    else {
      EneHitEffectCtrl.BlurScale =
           (int)((float)((EneHitEffectCtrl.pBlurContrast)->MaxBlurScale -
                        (EneHitEffectCtrl.pBlurContrast)->MinBlurScale) * fVar3 +
                (float)(EneHitEffectCtrl.pBlurContrast)->MinBlurScale);
      EneHitEffectCtrl.BlurRot =
           (int)((float)((EneHitEffectCtrl.pBlurContrast)->MaxBlurRot -
                        (EneHitEffectCtrl.pBlurContrast)->MinBlurRot) * fVar3 +
                (float)(EneHitEffectCtrl.pBlurContrast)->MinBlurRot);
      EneHitEffectCtrl.BlurAlpha =
           (uchar)(int)((float)((EneHitEffectCtrl.pBlurContrast)->MaxBlurAlpha -
                               (EneHitEffectCtrl.pBlurContrast)->MinBlurAlpha) * fVar3 +
                       (float)(EneHitEffectCtrl.pBlurContrast)->MinBlurAlpha);
      iVar1 = (EneHitEffectCtrl.pBlurContrast)->ContrastOnFlg;
    }
    if (iVar1 != 0) {
      EneHitEffectCtrl.ContrastColor =
           (int)((float)((EneHitEffectCtrl.pBlurContrast)->MaxContrastColor -
                        (EneHitEffectCtrl.pBlurContrast)->MinContrastColor) * fVar3 +
                (float)(EneHitEffectCtrl.pBlurContrast)->MinContrastColor);
      EneHitEffectCtrl.ContrastAlpha =
           (int)((float)((EneHitEffectCtrl.pBlurContrast)->MaxContrastAlpha -
                        (EneHitEffectCtrl.pBlurContrast)->MinContrastAlpha) * fVar3 +
                (float)(EneHitEffectCtrl.pBlurContrast)->MinContrastAlpha);
    }
  }
  EneHitEffectCtrl.Counter = EneHitEffectCtrl.Counter + 1;
  if ((EneHitEffectCtrl.pBlurContrast)->StartFrame + (EneHitEffectCtrl.pBlurContrast)->OutTime +
      (EneHitEffectCtrl.pBlurContrast)->KeepTime + (EneHitEffectCtrl.pBlurContrast)->InTime <
      EneHitEffectCtrl.Counter) {
    EneHitEffectCtrl.Flow = 3;
  }
  iVar1 = EneHitEffectCtrl.Counter - (EneHitEffectCtrl.pBlurContrast)->StartFrame;
  if ((EneHitEffectCtrl.pBlurContrast)->CameraShakeOnFlg == 0) {
LAB_00145220:
    iVar2 = (EneHitEffectCtrl.pBlurContrast)->PadVibrateOnFlg;
  }
  else {
    if (iVar1 == (EneHitEffectCtrl.pBlurContrast)->CameraShakeFrame) {
      ReqFreqCamera__Fv();
      goto LAB_00145220;
    }
    iVar2 = (EneHitEffectCtrl.pBlurContrast)->PadVibrateOnFlg;
  }
  if ((iVar2 != 0) && (iVar1 == (EneHitEffectCtrl.pBlurContrast)->PadVibrateFrame)) {
    SetVibrate__Fiii(0,0x1e,1);
    SetVibrate__Fiii(1,0x28,0xff);
  }
LAB_00145270:
  if (1 < EneHitEffectCtrl.Flow) {
    if ((EneHitEffectCtrl.pBlurContrast)->BlurOnFlg != 0) {
      GetCamI2DPos__FPCfPfT1(EneHitEffectCtrl.EneMposP0,&tx,&ty);
      SetEffects__Fiie(3,1);
    }
    if ((EneHitEffectCtrl.pBlurContrast)->ContrastOnFlg != 0) {
      SetEffects__Fiie(0xd,1);
    }
  }
  return;
}

void EneDmgScreenEffectReq(float *EneMposP0, int DmgType, int EneStatus, float DistPE) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  ene_dmg_eff.MposP0[0] = (float)*(undefined8 *)EneMposP0;
  ene_dmg_eff.MposP0[1] = (float)((ulong)*(undefined8 *)EneMposP0 >> 0x20);
  ene_dmg_eff.MposP0[2] = EneMposP0[2];
  ene_dmg_eff.MposP0[3] = EneMposP0[3];
                    /* end of inlined section */
  ene_dmg_eff.chance = (byte)(EneStatus >> 0xc) & 1;
  if (DmgType == 4) {
    ene_dmg_eff.chance = '\x02';
  }
  ene_dmg_eff.DmgType = DmgType;
  ene_dmg_eff.flow = '\x01';
  if (DAT_003eda88 < DistPE) {
    ene_dmg_eff.dist = DAT_003eda88;
    return;
  }
  ene_dmg_eff.dist = DistPE;
  return;
}

int EneDmgParticleEffectReq(ENE_DMG_PARTICLE_REQ *pEneDmgReq) {
	ENEDMG_P_WRK ParticleWork;
	float l;
	
  _SLL_CELL *p_Var1;
  int iVar2;
  float fVar3;
  _ENEDMG_P_WRK ParticleWork;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  ParticleWork.StartPos[0] = pEneDmgReq->StartPos[0];
  ParticleWork.StartPos[1] = pEneDmgReq->StartPos[1];
  ParticleWork.StartPos[2] = pEneDmgReq->StartPos[2];
  ParticleWork.StartPos[3] = pEneDmgReq->StartPos[3];
                    /* end of inlined section */
  ParticleWork.Num = pEneDmgReq->ParticleNum;
  ParticleWork.pEndPos = pEneDmgReq->pEndPos;
  if (0x30 < ParticleWork.Num) {
    ParticleWork.Num = 0x30;
  }
  ParticleWork.pTailWrk = (ENEDMG_P_TAIL_WRK *)EFFECT_MALLOC__Fi(ParticleWork.Num * 0x330);
  fVar3 = pEneDmgReq->DistPE;
  if (fVar3 < 500.0) {
    ParticleWork.SpeedRate = DAT_003eda8c;
  }
  else if (2000.0 < fVar3) {
    ParticleWork.SpeedRate = DAT_003eda90;
  }
  else {
    ParticleWork.SpeedRate = (fVar3 - 500.0) / DAT_003eda94 + DAT_003eda98;
  }
  ParticleWork.SuctionFlg = pEneDmgReq->SuctionFlg;
  ParticleWork.flow = 1;
  ParticleWork.Type = 0;
  if (ParticleWork.pTailWrk == (ENEDMG_P_TAIL_WRK *)0x0) {
    iVar2 = 0;
  }
  else {
    p_Var1 = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EneParticleList,&ParticleWork);
    if (p_Var1 == (_SLL_CELL *)0x0) {
      EFFECT_FREE__FPv(ParticleWork.pTailWrk);
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
  }
  return iVar2;
}

int EffectEndParticleEffectReq(ENE_DMG_PARTICLE_REQ *pEneDmgReq) {
	ENEDMG_P_WRK ParticleWork;
	float SpeedRate;
	
  _SLL_CELL *p_Var1;
  _ENEDMG_P_WRK ParticleWork;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  ParticleWork.StartPos[2] = pEneDmgReq->StartPos[2];
  ParticleWork.StartPos[3] = pEneDmgReq->StartPos[3];
  ParticleWork.StartPos[0] = (float)*(undefined8 *)pEneDmgReq->StartPos;
  ParticleWork.StartPos[1] = (float)((ulong)*(undefined8 *)pEneDmgReq->StartPos >> 0x20);
                    /* end of inlined section */
  ParticleWork.Num = pEneDmgReq->ParticleNum;
  ParticleWork.pEndPos = pEneDmgReq->pEndPos;
  if (0x30 < ParticleWork.Num) {
    ParticleWork.Num = 0x30;
  }
  ParticleWork.EffectType = pEneDmgReq->EffectType;
  ParticleWork.Type = 1;
  ParticleWork.SpeedRate = DAT_003eda9c;
  ParticleWork.pTailWrk = (ENEDMG_P_TAIL_WRK *)0x0;
  ParticleWork.flow = 1;
  ParticleWork.SuctionFlg = 0;
  p_Var1 = SingleLinkListAddEnd__FP16SINGLE_LINK_LISTPCv(&EneParticleList,&ParticleWork);
  return (int)(p_Var1 != (_SLL_CELL *)0x0);
}

static void EneDmgParticleEffectCut(SINGLE_LINK_LIST *pSLL, SLL_CELL *pCell) {
  void *pvVar1;
  
  if (pCell != (_SLL_CELL *)0x0) {
    pvVar1 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
    if (*(void **)((int)pvVar1 + 0xf24) != (void *)0x0) {
      EFFECT_FREE__FPv(*(void **)((int)pvVar1 + 0xf24));
    }
    SingleLinkListRemove__FP16SINGLE_LINK_LISTP9_SLL_CELL(pSLL,pCell);
  }
  return;
}

void EneDmgParticleEndPosSet(float *pEndPos[4]) {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	ENEDMG_P_WRK *pTmpWork;
	
  _SLL_CELL *p_Var1;
  void *pvVar2;
  _SLL_CELL *pCell;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (EneParticleList.RegCount != 0) {
    p_Var1 = EneParticleList.pBeginCell;
                    /* end of inlined section */
  }
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    pvVar2 = SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
                    /* end of inlined section */
    if (*(int *)((int)pvVar2 + 0xf3c) == 0) {
      *(float (**) [4])((int)pvVar2 + 0xf20) = pEndPos;
    }
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

void EneDmgMain() {
	float tx;
	float ty;
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *pCell;
  float fVar1;
  reference_fixed_array<int,3> rVar2;
  reference_fixed_array<int,3> rVar3;
  _SLL_CELL *p_Var4;
  int iVar5;
  float tx;
  float ty;
  
  switch(ene_dmg_eff.flow) {
  case '\0':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ene_dmg_eff.cnt = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.alp = *(uchar *)alp.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.scl = *(int *)scl.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.rot = *(int *)rot.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.cntcol = *(int *)ccol.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
    ene_dmg_eff.cntalp = *(int *)calp.field0_0x0.m_aData;
    break;
  case '\x01':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp = *(uchar *)alp.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.scl = *(int *)scl.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.rot = *(int *)rot.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.cntcol = *(int *)ccol.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.cntalp = *(int *)calp.field0_0x0.m_aData;
                    /* end of inlined section */
                    /* end of inlined section */
    if (ene_dmg_eff.cnt == SEC0) {
      if (ene_dmg_eff.DmgType == 2) {
        iVar5 = 1;
      }
      else {
        if (ene_dmg_eff.DmgType < 3) goto LAB_0014578c;
        EneDmgLargeHitReq__Fi(2);
        iVar5 = 3;
      }
      EneDmgLargeHitReq__Fi(iVar5);
    }
LAB_0014578c:
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
    if (ene_dmg_eff.cnt < SEC0 + 5U) break;
    if (2 < ene_dmg_eff.DmgType) {
      ReqFreqCamera__Fv();
      SetVibrate__Fiii(0,0x1e,1);
      SetVibrate__Fiii(1,0x28,0xff);
    }
    goto LAB_00145fac;
  case '\x02':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar2 = alp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar3 = alp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
    fVar1 = DAT_003edaa0;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.almx =
         *(int *)((int)rVar2.field0_0x0.m_aData + 4) -
         (int)(((float)(*(int *)((int)rVar3.field0_0x0.m_aData + 4) -
                       *(int *)((int)alp.field0_0x0.m_aData + 8)) * ene_dmg_eff.dist) / DAT_003edaa0
              );
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar2 = scl;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar3 = scl;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
    ene_dmg_eff.scmx =
         *(int *)((int)rVar2.field0_0x0.m_aData + 4) -
         (int)(((float)(*(int *)((int)rVar3.field0_0x0.m_aData + 4) -
                       *(int *)((int)scl.field0_0x0.m_aData + 8)) * ene_dmg_eff.dist) / fVar1);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar2 = rot;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar3 = rot;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
    ene_dmg_eff.rtmx =
         *(int *)((int)rVar2.field0_0x0.m_aData + 4) -
         (int)(((float)(*(int *)((int)rVar3.field0_0x0.m_aData + 4) -
                       *(int *)((int)rot.field0_0x0.m_aData + 8)) * ene_dmg_eff.dist) / fVar1);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar2 = ccol;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar3 = ccol;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
    ene_dmg_eff.ccmx =
         *(int *)((int)rVar2.field0_0x0.m_aData + 4) -
         (int)(((float)(*(int *)((int)rVar3.field0_0x0.m_aData + 4) -
                       *(int *)((int)ccol.field0_0x0.m_aData + 8)) * ene_dmg_eff.dist) / fVar1);
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar2 = calp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,3);
    rVar3 = calp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(2,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ene_dmg_eff.flow = ene_dmg_eff.flow + '\x01';
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.camx =
         *(int *)((int)rVar2.field0_0x0.m_aData + 4) -
         (int)(((float)(*(int *)((int)rVar3.field0_0x0.m_aData + 4) -
                       *(int *)((int)calp.field0_0x0.m_aData + 8)) * ene_dmg_eff.dist) / fVar1);
                    /* end of inlined section */
    goto LAB_00145a68;
  case '\x03':
LAB_00145a68:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp = *(uchar *)alp.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    rVar2 = scl;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    if (SEC1 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.scl =
         *(int *)rVar2.field0_0x0.m_aData +
         (int)((ene_dmg_eff.scmx - *(int *)scl.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC1;
                    /* end of inlined section */
    if (ene_dmg_eff.DmgType < 2) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      rVar2 = rot;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      if (SEC1 == 0) {
        trap(7);
      }
      ene_dmg_eff.rot =
           *(int *)rVar2.field0_0x0.m_aData +
           (int)((ene_dmg_eff.rtmx - *(int *)rot.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC1;
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      ene_dmg_eff.rot = *(int *)rot.field0_0x0.m_aData;
    }
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    rVar2 = ccol;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC1 == 0) {
      trap(7);
    }
    ene_dmg_eff.cntcol =
         *(int *)rVar2.field0_0x0.m_aData +
         ((ene_dmg_eff.ccmx - *(int *)ccol.field0_0x0.m_aData) * ene_dmg_eff.cnt) / (uint)SEC1;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    rVar2 = calp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    iVar5 = (ene_dmg_eff.camx - *(int *)calp.field0_0x0.m_aData) * ene_dmg_eff.cnt;
                    /* end of inlined section */
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC1 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.cntalp = *(int *)rVar2.field0_0x0.m_aData + iVar5 / SEC1;
                    /* end of inlined section */
    if ((uint)SEC1 <= ene_dmg_eff.cnt) {
      ene_dmg_eff.cnt = 0;
      ene_dmg_eff.flow = ene_dmg_eff.flow + '\x01';
    }
    break;
  case '\x04':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    rVar2 = alp;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC2 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ene_dmg_eff.scl = ene_dmg_eff.scmx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp =
         *(char *)rVar2.field0_0x0.m_aData +
         (char)((int)((ene_dmg_eff.almx - *(int *)alp.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC2)
    ;
    iVar5 = ene_dmg_eff.rtmx;
                    /* end of inlined section */
    if (1 < ene_dmg_eff.DmgType) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      iVar5 = *(int *)rot.field0_0x0.m_aData;
    }
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
    ene_dmg_eff.cntcol = ene_dmg_eff.ccmx;
    ene_dmg_eff.cntalp = ene_dmg_eff.camx;
    ene_dmg_eff.rot = iVar5;
    if (ene_dmg_eff.cnt < (uint)SEC2) break;
    goto LAB_00145d60;
  case '\x05':
    ene_dmg_eff.alp = (uchar)ene_dmg_eff.almx;
    ene_dmg_eff.scl = ene_dmg_eff.scmx;
    iVar5 = ene_dmg_eff.rtmx;
    if (1 < ene_dmg_eff.DmgType) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      iVar5 = *(int *)rot.field0_0x0.m_aData;
    }
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
    ene_dmg_eff.cntcol = ene_dmg_eff.ccmx;
    ene_dmg_eff.cntalp = ene_dmg_eff.camx;
    ene_dmg_eff.rot = iVar5;
    if (ene_dmg_eff.cnt < (uint)SEC3) break;
LAB_00145d60:
    ene_dmg_eff.cnt = 0;
    ene_dmg_eff.flow = ene_dmg_eff.flow + '\x01';
    ene_dmg_eff.cntcol = ene_dmg_eff.ccmx;
    ene_dmg_eff.cntalp = ene_dmg_eff.camx;
    break;
  case '\x06':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC4 == 0) {
      trap(7);
    }
                    /* end of inlined section */
    ene_dmg_eff.scl = ene_dmg_eff.scmx;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp =
         (uchar)ene_dmg_eff.almx -
         (char)((int)((ene_dmg_eff.almx - *(int *)alp.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC4)
    ;
    iVar5 = ene_dmg_eff.rtmx;
                    /* end of inlined section */
    if (1 < ene_dmg_eff.DmgType) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      iVar5 = *(int *)rot.field0_0x0.m_aData;
    }
    ene_dmg_eff.rot = iVar5;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC4 == 0) {
      trap(7);
    }
    ene_dmg_eff.cntcol =
         ene_dmg_eff.ccmx -
         ((ene_dmg_eff.ccmx - *(int *)ccol.field0_0x0.m_aData) * ene_dmg_eff.cnt) / (uint)SEC4;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    iVar5 = (ene_dmg_eff.camx - *(int *)calp.field0_0x0.m_aData) * ene_dmg_eff.cnt;
                    /* end of inlined section */
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    if (SEC4 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.cntalp = ene_dmg_eff.camx - iVar5 / SEC4;
                    /* end of inlined section */
    if (ene_dmg_eff.cnt < (uint)SEC4) break;
    goto LAB_00145fa8;
  case '\a':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp = *(uchar *)alp.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    if (SEC5 == 0) {
      trap(7);
    }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.scl =
         ene_dmg_eff.scmx -
         (int)((ene_dmg_eff.scmx - *(int *)scl.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC5;
                    /* end of inlined section */
    if (ene_dmg_eff.DmgType < 2) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      if (SEC5 == 0) {
        trap(7);
      }
      ene_dmg_eff.rot =
           ene_dmg_eff.rtmx -
           (int)((ene_dmg_eff.rtmx - *(int *)rot.field0_0x0.m_aData) * ene_dmg_eff.cnt) / SEC5;
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
      ene_dmg_eff.rot = *(int *)rot.field0_0x0.m_aData;
    }
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.cntcol = *(int *)ccol.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ene_dmg_eff.cnt = ene_dmg_eff.cnt + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.cntalp = *(int *)calp.field0_0x0.m_aData;
                    /* end of inlined section */
                    /* end of inlined section */
    if (ene_dmg_eff.cnt < (uint)SEC5) break;
LAB_00145fa8:
    ene_dmg_eff.cnt = 0;
LAB_00145fac:
    ene_dmg_eff.flow = ene_dmg_eff.flow + '\x01';
    break;
  case '\b':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_dmg_eff.alp = *(uchar *)alp.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.scl = *(int *)scl.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.rot = *(int *)rot.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.cntcol = *(int *)ccol.field0_0x0.m_aData;
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,3);
    ene_dmg_eff.cntalp = *(int *)calp.field0_0x0.m_aData;
                    /* end of inlined section */
    ene_dmg_eff.flow = '\0';
  }
  if (1 < ene_dmg_eff.flow) {
    GetCamI2DPos__FPCfPfT1(ene_dmg_eff.MposP0,&tx,&ty);
    SetEffects__Fiie(3,1);
    SetEffects__Fiie(0xd,1);
                    /* inlined from ../../common/SingleLinkList.h */
  }
  p_Var4 = (_SLL_CELL *)0x0;
  if (EneParticleList.RegCount != 0) {
    p_Var4 = EneParticleList.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var4, pCell != (_SLL_CELL *)0x0) {
    EneDmgParticle__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EneParticleList,pCell);
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var4 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var4 = pCell->pNext;
    }
  }
                    /* end of inlined section */
  EneDmgLargeHitCtrlMain__Fv();
  return;
}

void EffectEndParticleMain() {
	SLL_CELL *pCell;
	SINGLE_LINK_LIST *pSLL;
	
  _SLL_CELL *pCell;
  _SLL_CELL *p_Var1;
  
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
                    /* end of inlined section */
                    /* inlined from ../../common/SingleLinkList.h */
  p_Var1 = (_SLL_CELL *)0x0;
  if (EffectEndParticleList.RegCount != 0) {
    p_Var1 = EffectEndParticleList.pBeginCell;
  }
                    /* end of inlined section */
  while (pCell = p_Var1, pCell != (_SLL_CELL *)0x0) {
    EneDmgParticle__FP16SINGLE_LINK_LISTP9_SLL_CELL(&EffectEndParticleList,pCell);
                    /* inlined from ../../common/SingleLinkList.h */
    p_Var1 = (_SLL_CELL *)0x0;
    if (pCell != (_SLL_CELL *)0x0) {
      p_Var1 = pCell->pNext;
    }
  }
  return;
}

int IsActiveEneDmgParticle() {
	SINGLE_LINK_LIST *pSLL;
	
                    /* inlined from ../../common/SingleLinkList.h */
  return (int)(EneParticleList.RegCount != 0);
}

static void EneDmgParticleColorGet(int *Color, int Type, int EffectType) {
	static sceVu0IVECTOR HitDamegeCol = {
		/* [0] = */ 63,
		/* [1] = */ 96,
		/* [2] = */ 255,
		/* [3] = */ 0
	};
	static sceVu0IVECTOR EffectEndCol[5] = {
		/* [0] = */ {
			/* [0] = */ 229,
			/* [1] = */ 87,
			/* [2] = */ 230,
			/* [3] = */ 0
		},
		/* [1] = */ {
			/* [0] = */ 74,
			/* [1] = */ 255,
			/* [2] = */ 74,
			/* [3] = */ 0
		},
		/* [2] = */ {
			/* [0] = */ 218,
			/* [1] = */ 236,
			/* [2] = */ 79,
			/* [3] = */ 0
		},
		/* [3] = */ {
			/* [0] = */ 224,
			/* [1] = */ 243,
			/* [2] = */ 22,
			/* [3] = */ 0
		},
		/* [4] = */ {
			/* [0] = */ 49,
			/* [1] = */ 221,
			/* [2] = */ 95,
			/* [3] = */ 0
		}
	};
	
  int iVar1;
  
  if (Type == 1) {
    if (4 < EffectType) {
      EffectType = 0;
    }
    iVar1 = EffectType * 0x10;
    *Color = *(int *)(EffectEndCol_1198 + iVar1);
    Color[1] = *(int *)(EffectEndCol_1198 + iVar1 + 4);
    Color[2] = *(int *)(EffectEndCol_1198 + iVar1 + 8);
    Color[3] = *(int *)(EffectEndCol_1198 + iVar1 + 0xc);
    return;
  }
  *Color = HitDamegeCol_1197;
  Color[1] = DAT_002e50c4;
  Color[2] = DAT_002e50c8;
  Color[3] = DAT_002e50cc;
  return;
}

static int EneDmgParticleSpreadTimeGet(int Type) {
  int iVar1;
  
  iVar1 = 0x36;
  if (Type != 1) {
    iVar1 = 0xf;
  }
  return iVar1;
}

static void EneDmgParticle(SINGLE_LINK_LIST *pSLL, SLL_CELL *pCell) {
	ENEDMG_P_WRK *edp;
	sceVu0IVECTOR Color;
	int SpreadTime;
	int i;
	float rot_x;
	float rot_y;
	float &cam_dir[4];
	float AlphaRate;
	
  _ENEDMG_P_WRK *pEneDmgPWrk;
  int iVar1;
  float (*dir) [4];
  _ENEDMG_P_WRK *p_Var2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int Color [4];
  float rot_x;
  float rot_y;
  
  pEneDmgPWrk = (_ENEDMG_P_WRK *)SingleLinkListCellBodyPtr__FPC9_SLL_CELL(pCell);
  iVar1 = EneDmgParticleSpreadTimeGet__Fi(pEneDmgPWrk->Type);
  dir = gra3dcamGetDirection__Fv();
  if (pEneDmgPWrk->flow == -1) {
    return;
  }
  EneDmgParticleColorGet__FPiii(Color,pEneDmgPWrk->Type,pEneDmgPWrk->EffectType);
  iVar5 = pEneDmgPWrk->flow;
  switch(iVar5) {
  default:
    goto switchD_00146308_caseD_0;
  case 1:
    iVar4 = pEneDmgPWrk->cnt + 1;
    pEneDmgPWrk->cnt = iVar4;
    if (1 < iVar4) {
      iVar5 = iVar5 + 1;
      pEneDmgPWrk->cnt = 0;
      pEneDmgPWrk->flow = iVar5;
    }
    goto switchD_00146308_caseD_0;
  case 2:
    iVar4 = pEneDmgPWrk->Num;
    if (0 < iVar4) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      p_Var2 = pEneDmgPWrk;
      iVar5 = 0;
      do {
                    /* end of inlined section */
        iVar3 = iVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
        EneDmgParticleOneInit__FP19ENEDMG_PARTICLE_ONEPffi
                  ((ENEDMG_PARTICLE_ONE *)p_Var2,pEneDmgPWrk->StartPos,pEneDmgPWrk->SpeedRate,
                   pEneDmgPWrk->Type);
                    /* end of inlined section */
        iVar4 = pEneDmgPWrk->Num;
        p_Var2 = (_ENEDMG_P_WRK *)((p_Var2->particle).field0_0x0.m_aData + 1);
        iVar5 = iVar3;
      } while (iVar3 < iVar4);
      iVar5 = pEneDmgPWrk->flow;
    }
    pEneDmgPWrk->cnt = 0;
    pEneDmgPWrk->flow = iVar5 + 1;
    break;
  case 3:
  case 4:
    iVar4 = pEneDmgPWrk->Num;
    break;
  case 5:
    iVar5 = EffWrkStopFlgGet__Fv();
    if (iVar5 != 0) {
      iVar5 = pEneDmgPWrk->flow;
      goto switchD_00146308_caseD_0;
    }
    iVar5 = EneDmgParticleSuction__FP13_ENEDMG_P_WRK(pEneDmgPWrk);
    if (iVar5 != 0) {
      iVar5 = pEneDmgPWrk->flow;
      goto switchD_00146308_caseD_0;
    }
    goto LAB_00146450;
  }
  iVar5 = 0;
  p_Var2 = pEneDmgPWrk;
  if (0 < iVar4) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar4 = iVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      EneDmgParticleOneUpdate__FP19ENEDMG_PARTICLE_ONE((ENEDMG_PARTICLE_ONE *)p_Var2);
                    /* end of inlined section */
      p_Var2 = (_ENEDMG_P_WRK *)((p_Var2->particle).field0_0x0.m_aData + 1);
      iVar5 = iVar4;
    } while (iVar4 < pEneDmgPWrk->Num);
  }
  iVar5 = pEneDmgPWrk->cnt + 1;
  pEneDmgPWrk->cnt = iVar5;
  if (iVar1 <= iVar5) {
    if (pEneDmgPWrk->SuctionFlg != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(0,0x30);
      EneDmgParticleSuctionInit__FP13_ENEDMG_P_WRKPCfT1
                (pEneDmgPWrk,(pEneDmgPWrk->particle).field0_0x0.m_aData[0].rpos,
                 (float *)pEneDmgPWrk->pEndPos);
                    /* end of inlined section */
      pEneDmgPWrk->flow = 5;
      iVar5 = 5;
      pEneDmgPWrk->cnt = 0;
      goto switchD_00146308_caseD_0;
    }
LAB_00146450:
    EneDmgParticleEffectCut__FP16SINGLE_LINK_LISTP9_SLL_CELL(pSLL,pCell);
  }
  iVar5 = pEneDmgPWrk->flow;
switchD_00146308_caseD_0:
  if ((2 < iVar5) && (iVar4 = 0, p_Var2 = pEneDmgPWrk, 0 < pEneDmgPWrk->Num)) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar4,0x30);
      if ((p_Var2->particle).field0_0x0.m_aData[0].anm_count < 100) {
        _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar4,0x30);
        (p_Var2->particle).field0_0x0.m_aData[0].anm_count =
             (p_Var2->particle).field0_0x0.m_aData[0].anm_count + 1;
                    /* end of inlined section */
        iVar5 = pEneDmgPWrk->Num;
      }
      else {
        iVar5 = pEneDmgPWrk->Num;
      }
      iVar4 = iVar4 + 1;
      p_Var2 = (_ENEDMG_P_WRK *)((p_Var2->particle).field0_0x0.m_aData + 1);
    } while (iVar4 < iVar5);
    iVar5 = pEneDmgPWrk->flow;
  }
  if (1 < iVar5) {
    fVar6 = 1.0;
    if (pEneDmgPWrk->SuctionFlg == 0) {
      fVar6 = (float)(iVar1 - pEneDmgPWrk->cnt) / (float)iVar1;
    }
    iVar1 = 0;
    Vector2Rot__FPCfPfT1((float *)dir,&rot_x,&rot_y);
    p_Var2 = pEneDmgPWrk;
    if (0 < pEneDmgPWrk->Num) {
      do {
        iVar5 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar1,0x30);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        EneDmgParticleOneDraw__FP19ENEDMG_PARTICLE_ONEffiiifi
                  (rot_x,rot_y,fVar6,p_Var2,Color[0],Color[1],Color[2],pEneDmgPWrk->Type);
                    /* end of inlined section */
        p_Var2 = (_ENEDMG_P_WRK *)((p_Var2->particle).field0_0x0.m_aData + 1);
        iVar1 = iVar5;
      } while (iVar5 < pEneDmgPWrk->Num);
    }
  }
  return;
}

static float EneDmgParticleSizeWGet(int Type) {
	float ParticleSizeW;
	
  float fVar1;
  
  fVar1 = DAT_003edaa4;
  if (Type != 1) {
    fVar1 = DAT_003edaa8;
  }
  return fVar1;
}

static float EneDmgParticleSizeHGet(int Type) {
	float ParticleSizeH;
	
  float fVar1;
  
  fVar1 = DAT_003edaac;
  if (Type != 1) {
    fVar1 = DAT_003edab0;
  }
  return fVar1;
}

static int EneDmgParticleAnmCountGet(int Type) {
	int AnmCount;
	
  int iVar1;
  
  iVar1 = 0x14;
  if (Type != 1) {
                    /* inlined from effect.h */
    iVar1 = rand();
    iVar1 = (int)(-((float)iVar1 / DAT_003edab4) * 14.0) + -7;
  }
                    /* end of inlined section */
  return iVar1;
}

static float EneDmgParticleAlphaGet(int Type) {
	float Alpha;
	
  float fVar1;
  
  fVar1 = 138.0;
  if (Type != 1) {
    fVar1 = DAT_003edab8;
  }
  return fVar1;
}

static void EneDmgParticleOneInit(ENEDMG_PARTICLE_ONE *pEneParticle, float *Center, float SpeedRate, int Type) {
	float *pv0;
	
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = DAT_003edabc;
  pEneParticle->rrad = 0.0;
  iVar3 = rand();
  pEneParticle->rrot = ((float)iVar3 * DAT_003edac0) / fVar5 - DAT_003edac4;
  iVar3 = rand();
  pEneParticle->racc = (SpeedRate * 40.0 * (float)iVar3) / fVar5 + SpeedRate * 40.0;
  iVar3 = rand();
  fVar2 = DAT_003edacc;
  fVar4 = DAT_003edac8;
  pEneParticle->AlphaRate = 1.0;
  pEneParticle->rbrk = ((float)iVar3 * fVar4) / fVar5 + fVar2;
  iVar3 = EneDmgParticleAnmCountGet__Fi(Type);
  pEneParticle->anm_count = iVar3;
  fVar5 = EneDmgParticleAlphaGet__Fi(Type);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pEneParticle->ralp = fVar5;
  uVar1 = *(undefined8 *)Center;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar5 = Center[2];
  fVar4 = Center[3];
  pEneParticle->rpos[0] = (float)uVar1;
  pEneParticle->rpos[1] = (float)((ulong)uVar1 >> 0x20);
  pEneParticle->rpos[2] = fVar5;
  pEneParticle->rpos[3] = fVar4;
  return;
}

static int EneDmgParticleOneUpdate(ENEDMG_PARTICLE_ONE *pEneParticle) {
	int ret;
	
  bool bVar1;
  float fVar2;
  
  fVar2 = pEneParticle->racc;
  bVar1 = DAT_003edad0 < fVar2;
  if (bVar1) {
    pEneParticle->rrad = pEneParticle->rrad + fVar2;
    pEneParticle->racc = fVar2 * pEneParticle->rbrk;
  }
  return (uint)bVar1;
}

static void EneDmgParticleSuctionInit(ENEDMG_P_WRK *pEneDmgPWrk, float *Start, float *End) {
	float wlm[4][4];
	float zero[4];
	float rot_x;
	float rot_y;
	int i;
	
  undefined8 uVar1;
  float (*dir) [4];
  int iVar2;
  ENEDMG_P_TAIL_WRK *pEneDmgTail;
  float fVar3;
  float fVar4;
  _ENEDMG_P_WRK *pParticle;
  int iVar5;
  int iVar6;
  float wlm [4] [4];
  float zero [4];
  float rot_x;
  float rot_y;
  
  memset(zero,0,0x10);
  zero[3] = 1.0;
  dir = gra3dcamGetDirection__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  uVar1 = *(undefined8 *)Start;
  fVar3 = Start[2];
  fVar4 = Start[3];
  pEneDmgPWrk->StartPos[0] = (float)uVar1;
  pEneDmgPWrk->StartPos[1] = (float)((ulong)uVar1 >> 0x20);
  pEneDmgPWrk->StartPos[2] = fVar3;
  pEneDmgPWrk->StartPos[3] = fVar4;
  uVar1 = *(undefined8 *)End;
  fVar3 = End[2];
  fVar4 = End[3];
  pEneDmgPWrk->EndPos[0] = (float)uVar1;
  pEneDmgPWrk->EndPos[1] = (float)((ulong)uVar1 >> 0x20);
  pEneDmgPWrk->EndPos[2] = fVar3;
  pEneDmgPWrk->EndPos[3] = fVar4;
                    /* end of inlined section */
  Vector2Rot__FPCfPfT1((float *)dir,&rot_x,&rot_y);
  fVar3 = DAT_003edad4;
  if (0 < pEneDmgPWrk->Num) {
    iVar6 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pParticle = pEneDmgPWrk;
    iVar5 = 0;
    do {
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      (pParticle->particle).field0_0x0.m_aData[0].cnt_f = DAT_003edad8;
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
                    /* inlined from effect.h */
      iVar2 = rand();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from effect.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      (pParticle->particle).field0_0x0.m_aData[0].cnt_spd =
           ((float)iVar2 / fVar3) * DAT_003edadc + DAT_003edae0;
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      (pParticle->particle).field0_0x0.m_aData[0].rrad_max =
           (pParticle->particle).field0_0x0.m_aData[0].rrad;
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
                    /* inlined from effect.h */
      iVar2 = rand();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from effect.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      (pParticle->particle).field0_0x0.m_aData[0].rot_spd =
           ((float)iVar2 / fVar3) * DAT_003edae4 - DAT_003edae8;
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      zero[0] = (pParticle->particle).field0_0x0.m_aData[0].rrad;
                    /* end of inlined section */
                    /* end of inlined section */
      sceVu0UnitMatrix(wlm);
      sceVu0TransMatrix(wlm,wlm,zero);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      sceVu0RotMatrixZ((pParticle->particle).field0_0x0.m_aData[0].rrot,wlm,wlm);
                    /* end of inlined section */
      sceVu0RotMatrixX(rot_x,wlm,wlm);
      sceVu0RotMatrixY(rot_y,wlm,wlm);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
      sceVu0TransMatrix(wlm,wlm,(pParticle->particle).field0_0x0.m_aData[0].rpos);
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      (pParticle->particle).field0_0x0.m_aData[0].Center[0] = (float)wlm[3]._0_8_;
      (pParticle->particle).field0_0x0.m_aData[0].Center[1] = SUB84(wlm[3]._0_8_,4);
      (pParticle->particle).field0_0x0.m_aData[0].Center[2] = wlm[3][2];
      (pParticle->particle).field0_0x0.m_aData[0].Center[3] = wlm[3][3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar2 = iVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z19ENEDMG_PARTICLE_ONE_UiUi_PX01(iVar5,0x30);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pEneDmgTail = (ENEDMG_P_TAIL_WRK *)
                    ((int)(pEneDmgPWrk->pTailWrk->LwMatrix).field0_0x0.m_aData + iVar6);
      iVar6 = iVar6 + 0x330;
      EneDmgParticleSuctionTailInit__FP17ENEDMG_P_TAIL_WRKP19ENEDMG_PARTICLE_ONE
                (pEneDmgTail,(ENEDMG_PARTICLE_ONE *)pParticle);
                    /* end of inlined section */
      pParticle = (_ENEDMG_P_WRK *)((pParticle->particle).field0_0x0.m_aData + 1);
      iVar5 = iVar2;
    } while (iVar2 < pEneDmgPWrk->Num);
  }
  return;
}

static int EneDmgParticleSuction(ENEDMG_P_WRK *pEneDmgPWrk) {
	float SubVec[4];
	int i;
	float fx;
	float fy;
	float fz;
	float r1l;
	int end_count;
	
  float (*pafVar1) [4];
  float fVar2;
  float fVar3;
  float fVar4;
  float SubVec [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  pafVar1 = pEneDmgPWrk->pEndPos;
  fVar2 = (*pafVar1)[1];
  fVar3 = (*pafVar1)[2];
  fVar4 = (*pafVar1)[3];
  pEneDmgPWrk->EndPos[0] = (*pafVar1)[0];
  pEneDmgPWrk->EndPos[1] = fVar2;
  pEneDmgPWrk->EndPos[2] = fVar3;
  pEneDmgPWrk->EndPos[3] = fVar4;
                    /* end of inlined section */
  fVar2 = pEneDmgPWrk->EndPos[0] - pEneDmgPWrk->StartPos[0];
  fVar3 = pEneDmgPWrk->EndPos[1] - pEneDmgPWrk->StartPos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  fVar4 = pEneDmgPWrk->EndPos[2] - pEneDmgPWrk->StartPos[2];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  _qmtc2(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static int EneDmgParticleSuctionOne(ENEDMG_PARTICLE_ONE *pParticle, float *StartPos, float *SubVec, float Length, float LengthDiv6) {
	float bpos3[4];
	float f2;
	float PosRate;
	float RotRate;
	int ret;
	
  float fVar1;
  float bpos3 [4];
  
  fVar1 = sinf(((pParticle->cnt_f * DAT_003edaec) / 90.0) * 0.5);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  _qmtc2(1.0 - fVar1 * fVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

static void EneDmgParticleSuctionTailInit(ENEDMG_P_TAIL_WRK *pEneDmgTail, ENEDMG_PARTICLE_ONE *pParticle) {
	int i;
	
  float fVar1;
  float fVar2;
  float fVar3;
  fixed_array<float[4],10> *pfVar4;
  int iVar5;
  ENEDMG_P_TAIL_WRK *pEVar6;
  
  iVar5 = 0;
  pfVar4 = &pEneDmgTail->OldPos;
  pEneDmgTail->Top = 1;
  pEneDmgTail->NumMax = 10;
  pEneDmgTail->Num = 1;
  pEVar6 = pEneDmgTail;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(iVar5,10);
    sceVu0UnitMatrix(pEVar6);
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar5,10);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar1 = pParticle->Center[1];
    fVar2 = pParticle->Center[2];
    fVar3 = pParticle->Center[3];
    (pfVar4->field0_0x0).m_aData[0] = pParticle->Center[0];
    (pfVar4->field0_0x0).m_aData[1] = fVar1;
    (pfVar4->field0_0x0).m_aData[2] = fVar2;
    (pfVar4->field0_0x0).m_aData[3] = fVar3;
                    /* end of inlined section */
    iVar5 = iVar5 + 1;
    pfVar4 = (fixed_array<float[4],10> *)(pfVar4->field0_0x0).m_aData[1];
    pEVar6 = (ENEDMG_P_TAIL_WRK *)(pEVar6->LwMatrix).field0_0x0.m_aData[1];
  } while (iVar5 < pEneDmgTail->NumMax);
  return;
}

static int EneDmgParticleSuctionTail(ENEDMG_P_TAIL_WRK *pEneDmgTail, ENEDMG_PARTICLE_ONE *pParticle) {
	float wlm[4][4];
	float wpos[3][4];
	fixed_array<float[4],30> wwpos;
	float rot[4];
	float rottt[4];
	GRA3DCAMERA *pCam;
	float &cam_pos[4];
	fixed_array<int,10> tbl;
	int i;
	int n;
	int ret;
	u_char rgb2[3][3];
	u_char alpha;
	
  uchar *puVar1;
  float afVar2 [4];
  GRA3DCAMERA *pGVar3;
  float (*pafVar4) [4];
  uint uVar5;
  int iVar6;
  float (*paafVar7) [4] [4];
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float (*pafVar13) [4];
  float (*pafVar14) [4];
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  float wlm [4] [4];
  float wpos [3] [4];
  fixed_array<float[4],30> wwpos;
  float rot [4];
  float rottt [4];
  fixed_array<int,10> tbl;
  uchar rgb2 [3] [3];
  ENEDMG_PARTICLE_ONE *local_60;
  int ret;
  
  ret = 0;
  wpos[0]._0_8_ = DAT_003a6260;
  wpos[0]._8_8_ = DAT_003a6268;
  wpos[1]._0_8_ = DAT_003a6270;
  wpos[1]._8_8_ = DAT_003a6278;
  wpos[2]._0_8_ = DAT_003a6280;
  wpos[2]._8_8_ = DAT_003a6288;
  pGVar3 = gra3dGetCamera__Fv();
  pafVar4 = gra3dcamGetPosition__Fv();
  puVar1 = rgb2[2] + 1;
  uVar5 = (uint)puVar1 & 7;
  local_60 = pParticle;
  *(ulong *)(puVar1 + -uVar5) =
       *(ulong *)(puVar1 + -uVar5) & -1L << (uVar5 + 1) * 8 | DAT_003a6290 >> (7 - uVar5) * 8;
  rgb2[0][0] = (undefined)DAT_003a6290;
  rgb2[0][1] = DAT_003a6290._1_1_;
  rgb2[0][2] = DAT_003a6290._2_1_;
  rgb2[1][0] = DAT_003a6290._3_1_;
  rgb2[1][1] = DAT_003a6290._4_1_;
  rgb2[1][2] = DAT_003a6290._5_1_;
  rgb2[2][0] = DAT_003a6290._6_1_;
  rgb2[2][1] = DAT_003a6290._7_1_;
  rgb2[2][2] = DAT_003a6298;
  uVar5 = 1;
  if (pEneDmgTail != (ENEDMG_P_TAIL_WRK *)0x0) {
    if (local_60 == (ENEDMG_PARTICLE_ONE *)0x0) {
      uVar5 = 1;
    }
    else {
      iVar6 = pEneDmgTail->Top;
      if (0 < pEneDmgTail->NumMax) {
        piVar8 = (int *)&tbl;
        iVar11 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar9 = iVar11 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar11,10);
          *piVar8 = iVar6;
                    /* end of inlined section */
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + 1;
          if (iVar6 < 0) {
            iVar12 = pEneDmgTail->NumMax;
            iVar6 = iVar12 + -1;
          }
          else {
            iVar12 = pEneDmgTail->NumMax;
          }
          iVar11 = iVar9;
        } while (iVar9 < iVar12);
      }
      piVar8 = (int *)&tbl;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(1,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(tbl.field0_0x0.m_aData[1],10);
      GetTrgtRot__FPCfT0Pfi
                ((float *)(pEneDmgTail->OldPos).field0_0x0.m_aData[tbl.field0_0x0.m_aData[1]],
                 local_60->Center,rot,3);
                    /* end of inlined section */
      for (; rot[0] < DAT_003edb00; rot[0] = rot[0] + DAT_003edb04) {
      }
      for (; DAT_003edb08 <= rot[0]; rot[0] = rot[0] - DAT_003edb0c) {
      }
      for (; rot[1] < DAT_003edb10; rot[1] = rot[1] + DAT_003edb14) {
      }
      for (; DAT_003edb18 <= rot[1]; rot[1] = rot[1] - DAT_003edb1c) {
      }
      GetTrgtRot__FPCfT0Pfi((float *)pafVar4,pGVar3->vTarget,rottt,3);
      sceVu0UnitMatrix(wlm);
      sceVu0RotMatrixY(rottt[1],wlm,wlm);
      sceVu0RotMatrixX(rottt[0],wlm,wlm);
      sceVu0TransMatrix(wlm,wlm,local_60);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,10);
      _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(tbl.field0_0x0.m_aData[0],10);
      paafVar7 = (pEneDmgTail->LwMatrix).field0_0x0.m_aData[tbl.field0_0x0.m_aData[0]];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      auVar15 = _lqc2((undefined  [16])wlm[0]);
      auVar16 = _lqc2((undefined  [16])wlm[1]);
      auVar17 = _lqc2((undefined  [16])wlm[2]);
      auVar18 = _lqc2((undefined  [16])wlm[3]);
      afVar2 = (float  [4])_sqc2(auVar15);
      (*paafVar7)[0] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar16);
      (*paafVar7)[1] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar17);
      (*paafVar7)[2] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar18);
      (*paafVar7)[3] = afVar2;
                    /* end of inlined section */
      iVar6 = pEneDmgTail->Num;
      iVar11 = 0;
      if (0 < iVar6) {
        pafVar13 = wwpos.field0_0x0.m_aData[1];
        pafVar14 = wwpos.field0_0x0.m_aData[2];
        iVar12 = 0;
        pafVar4 = (float (*) [4])&wwpos;
        iVar9 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar12,0x1e);
          iVar11 = iVar11 + 1;
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar9,10);
          iVar6 = *piVar8;
          _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(iVar6,10);
          sceVu0ApplyMatrix(pafVar4,(pEneDmgTail->LwMatrix).field0_0x0.m_aData[iVar6],wpos);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar12 + 1,0x1e);
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar9,10);
          iVar6 = *piVar8;
          _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(iVar6,10);
          sceVu0ApplyMatrix(pafVar13,(pEneDmgTail->LwMatrix).field0_0x0.m_aData[iVar6],wpos[1]);
          pafVar13 = pafVar13[3];
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar12 + 2,0x1e);
          iVar10 = iVar9 + 1;
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar9,10);
          iVar6 = *piVar8;
                    /* end of inlined section */
          iVar12 = iVar12 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(iVar6,10);
          piVar8 = piVar8 + 1;
          sceVu0ApplyMatrix(pafVar14,(pEneDmgTail->LwMatrix).field0_0x0.m_aData[iVar6],wpos[2]);
                    /* end of inlined section */
          iVar6 = pEneDmgTail->Num;
          pafVar14 = pafVar14[3];
          pafVar4 = pafVar4[3];
          iVar9 = iVar10;
        } while (iVar10 < iVar6);
      }
      if (iVar11 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x1e);
        DrawNewPerticleSub__FiPA3_fUcUcUcUcUcUcUc
                  (iVar11,(float (*) [4])&wwpos,rgb2[0][0],rgb2[0][1],rgb2[0][2],rgb2[0][0],
                   rgb2[0][1],rgb2[0][2],0x19);
        iVar6 = pEneDmgTail->Num;
      }
                    /* end of inlined section */
      iVar11 = iVar6 + -1;
      if (local_60->cnt_f < 90.0) {
        iVar11 = pEneDmgTail->NumMax;
        iVar9 = iVar6 + 1;
        if (iVar11 <= iVar6 + 1) {
          iVar9 = iVar11;
        }
        if (iVar11 == 0) {
          trap(7);
        }
        pEneDmgTail->Num = iVar9;
        pEneDmgTail->Top = (pEneDmgTail->Top + 1) % iVar11;
        uVar5 = ret;
      }
      else {
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        pEneDmgTail->Num = iVar11;
        uVar5 = (uint)(iVar11 == 0);
      }
    }
  }
  return uVar5;
}

static void DrawNewPerticleSub(int num, sceVu0FVECTOR *pos, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, int a) {
	u_char a;
	u_int clpz2;
	u_char rr1;
	u_char gg1;
	u_char bb1;
	u_char rr2;
	u_char gg2;
	u_char bb2;
	int i;
	int j;
	int k;
	int alp;
	int cl;
	int tagnum;
	int cnt;
	fixed_array<int,30> clip;
	fixed_array<int[4],30> ivec;
	fixed_array<long unsigned int,30> xyzf;
	u_long rgbaq1;
	u_long rgbaq2;
	u_long reg;
	int ndpkt;
	Q_WORDDATA *pbuf;
	GRA3DCAMERA *pCam;
	
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  Q_WORDDATA *pQVar5;
  GRA3DCAMERA *pGVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int (*paiVar11) [4];
  Q_WORDDATA *pQVar12;
  ulong uVar13;
  fixed_array<int,30> *pfVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  fixed_array<int,30> clip;
  fixed_array<int[4],30> ivec;
  fixed_array<long_unsigned_int,30> xyzf;
  _DRAW_ENV_5 local_110;
  int local_e0;
  float (*local_dc) [4];
  uint local_d8;
  uint clpz2;
  uchar rr1;
  uchar bb1;
  int i;
  int j;
  int tagnum;
  int cnt;
  ulong rgbaq2;
  ulong reg;
  int ndpkt;
  Q_WORDDATA *pbuf;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  int *local_68;
  ulong *local_64;
  int local_60;
  
  pfVar14 = &clip;
  uVar9 = (ulong)g1;
  uVar10 = (ulong)r2;
  uVar13 = (ulong)g2;
  uVar15 = (ulong)b2;
  clpz2 = 0xff0000;
  local_d8 = a & 0xff;
  local_e0 = num;
  local_dc = pos;
  pGVar6 = gra3dGetCamera__Fv();
  clpz2 = clpz2 | 0xffff;
  iVar7 = EffWrkMonochroModeGet__Fv();
  _rr1 = (uint)r1;
  _bb1 = (uint)b1;
  if (iVar7 != 0) {
    uVar9 = (long)(int)((_rr1 + g1 + _bb1) / 3) & 0xff;
    uVar13 = (long)(int)(((uint)r2 + (uint)g2 + (uint)b2) / 3) & 0xff;
    _rr1 = (uint)uVar9;
    uVar15 = uVar13;
    uVar10 = uVar13;
    _bb1 = _rr1;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar18 = local_e0 * 2;
                    /* end of inlined section */
  rgbaq2 = uVar10 | uVar13 << 8 | uVar15 << 0x10;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar7 = local_e0 * 3;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(0,0x1e);
  i = 0;
  sceVu0RotTransPersN(&ivec,pGVar6->matWorldScreen,local_dc,iVar7,1);
                    /* end of inlined section */
  if (0 < iVar7) {
    puVar16 = (ulong *)&xyzf;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar7 = i;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(i,0x1e);
      iVar1 = i;
      paiVar11 = ivec.field0_0x0.m_aData[iVar7];
      *(undefined4 *)pfVar14 = 1;
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar1,0x1e);
      if (((uint)(*paiVar11)[0] < 0x80) ||
         (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e), 0xff80 < (uint)(*paiVar11)[0])) {
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(i,0x1e);
        *(undefined4 *)pfVar14 = 0;
      }
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e);
      if (((uint)ivec.field0_0x0.m_aData[iVar7][1] < 0x80) ||
         (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e),
         0xff80 < (uint)ivec.field0_0x0.m_aData[iVar7][1])) {
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(i,0x1e);
        *(undefined4 *)pfVar14 = 0;
      }
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e);
      if ((ivec.field0_0x0.m_aData[iVar7][2] == 0) ||
         (_fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e),
         clpz2 < (uint)ivec.field0_0x0.m_aData[iVar7][2])) {
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(i,0x1e);
        *(undefined4 *)pfVar14 = 0;
      }
      pfVar14 = (fixed_array<int,30> *)((int)pfVar14 + 4);
      _fixed_array_verifyrange__H1ZUl_UiUi_PX01(i,0x1e);
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e);
      iVar1 = (*paiVar11)[0];
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(i,0x1e);
      iVar4 = i;
      iVar2 = ivec.field0_0x0.m_aData[iVar7][1];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      i = i + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar4,0x1e);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      bVar3 = i < iVar18 + local_e0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      *puVar16 = (long)iVar1 | (long)iVar2 << 0x10 | (long)ivec.field0_0x0.m_aData[iVar7][2] << 0x20
      ;
      puVar16 = puVar16 + 1;
                    /* end of inlined section */
    } while (bVar3);
  }
  local_80 = uVar9 << 8;
  local_88 = (long)(int)_bb1 << 0x10;
  tagnum = 2;
  ndpkt = 3;
  local_110.alpha = DAT_003a62a0;
  local_110.test = DAT_003a62b8;
  reg = 0;
  cnt = 0;
  local_110.tex1 = DAT_003a62a8;
  j = 0;
  local_110.clamp = DAT_003a62b0;
  local_110.zbuf = DAT_003a62c0;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_110);
  pbuf = StartDmaDirectTrans__Fv();
  Reserve2DPacket__FUi(0x10);
  pbuf->ul64[0] = 0x2400400000008001;
  pbuf->ul64[1] = 0xf0;
  pbuf[1].ul64[0] = 0x14c;
  *(undefined8 *)((int)pbuf + 0x18) = 0;
  do {
    i = 0;
    if (0 < local_e0) {
      local_68 = clip.field0_0x0.m_aData + j;
      local_60 = cnt << 3;
      lVar8 = (long)local_60;
      local_64 = xyzf.field0_0x0.m_aData + j;
      pQVar12 = pbuf + ndpkt;
      local_70 = (long)(int)_rr1 & 0xff;
      local_78 = local_88 | local_80;
      lVar17 = lVar8;
      lVar19 = lVar8;
      iVar7 = j;
      do {
        if (local_e0 == 0) {
          trap(7);
        }
        iVar18 = (int)(((local_e0 - i) + -1) * local_d8) / local_e0;
        if (plyr_wrk.cmn_wrk.mode != '\x06') {
          if (local_e0 == 0) {
            trap(7);
          }
          iVar18 = (i * iVar18) / local_e0;
        }
        uVar10 = local_70 | (long)iVar18 << 0x18 | local_78;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        ndpkt = ndpkt + 1;
                    /* end of inlined section */
        uVar15 = uVar10;
        if (j == 0) {
          uVar15 = rgbaq2;
        }
        pQVar12->ul64[0] = uVar15;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZUl_UiUi_PX01(iVar7,0x1e);
        pQVar12->ul64[1] = *local_64;
                    /* end of inlined section */
        if (i == 0) {
          iVar18 = 0;
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7 + -3,0x1e);
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7 + -2,0x1e);
          iVar18 = local_68[-3];
          iVar1 = local_68[-2];
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x1e);
          iVar18 = iVar18 + iVar1 + *local_68;
        }
                    /* end of inlined section */
        if (iVar18 < 3) {
          uVar15 = 0xc1L << lVar17;
        }
        else {
          uVar15 = 0x41L << lVar8;
        }
        reg = reg | uVar15;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        uVar15 = rgbaq2;
        if (j == 0) {
          uVar15 = uVar10;
        }
        pQVar12[1].ul64[0] = uVar15;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        local_60 = local_60 + 8;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZUl_UiUi_PX01(iVar7 + 1,0x1e);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        cnt = cnt + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        *(ulong *)((int)pQVar12 + 0x18) = xyzf.field0_0x0.m_aData[iVar7 + 1];
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        ndpkt = ndpkt + 1;
                    /* end of inlined section */
        if (i == 0) {
          iVar18 = 0;
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7 + -2,0x1e);
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7,0x1e);
          iVar18 = *(int *)((int)&clip + (iVar7 + -2) * 4);
          iVar1 = clip.field0_0x0.m_aData[iVar7];
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar7 + 1,0x1e);
          iVar18 = iVar18 + iVar1 + clip.field0_0x0.m_aData[iVar7 + 1];
        }
        iVar1 = tagnum;
                    /* end of inlined section */
        if (iVar18 < 3) {
          uVar15 = 0xc1L << (long)local_60;
        }
        else {
          uVar15 = 0x41L << (long)((int)lVar19 + 8);
        }
        reg = reg | uVar15;
        lVar19 = (long)((int)lVar19 + 0x10);
        lVar17 = (long)((int)lVar17 + 0x10);
        cnt = cnt + 1;
        lVar8 = (long)((int)lVar8 + 0x10);
        local_60 = local_60 + 8;
        pQVar5 = pQVar12 + 2;
        if (7 < cnt) {
          iVar18 = cnt * 2;
          tagnum = ndpkt;
          cnt = 0;
          pbuf[iVar1].ul64[0] = (long)iVar18 << 0x3c | 0x400400000008001;
          lVar19 = 0;
          lVar17 = 0;
          lVar8 = 0;
          pbuf[iVar1].ul64[1] = reg;
          reg = 0;
          local_60 = 0;
          ndpkt = ndpkt + 1;
          pQVar5 = pQVar12 + 3;
        }
        pQVar12 = pQVar5;
        iVar7 = iVar7 + 3;
        i = i + 1;
        local_68 = local_68 + 3;
        local_64 = local_64 + 3;
      } while (i < local_e0);
    }
    j = j + 1;
  } while (j < 2);
  if (cnt < 1) {
    ndpkt = ndpkt + -1;
  }
  else {
    pbuf[tagnum].ul64[1] = reg;
    pbuf[tagnum].ul64[0] = (long)(cnt << 1) << 0x3c | 0x400400000008001;
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pbuf + ndpkt);
  return;
}

int EneDmgParticleSuctionNumGet() {
  return EneDmgParticleSuctionNum;
}

static void EneDmgLargeHitCtrlInit() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<int,2> *pfVar3;
  
  pfVar3 = &EneDmgLargeHitCtrl.Status;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
    (pfVar3->field0_0x0).m_aData[0] = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<int,2> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

static void EneDmgLargeHitCtrlMain() {
	int i;
	ENE_DMG_LARGE_HIT *pLargeHit;
	float ProgressRate;
	float NowScale;
	float RotZ;
	
  uint uVar1;
  int iVar2;
  ENE_DMG_LARGE_HIT_CTRL *pLargeHit;
  fixed_array<int,2> *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,2);
  if (EneDmgLargeHitCtrl.Status.field0_0x0.m_aData[0] != 0) {
    _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(0,2);
                    /* end of inlined section */
    if (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].NowFrame == 0) {
      LocalCopyLtoB__Fiii(0,0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
      EffImageHalf32__FPUiUiUi((uint *)0x1e79b00,0x280,0x1c0);
    }
    else if ((EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureNumber != 0) &&
            (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureInterval != 0)) {
      if (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureInterval == 0) {
        trap(7);
      }
      if ((int)EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].NowFrame %
          (int)EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureInterval == 0) {
        LocalCopyLtoB__Fiii(0,0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
        EffImageHalf32__FPUiUiUi((uint *)0x1e79b00,0x280,0x1c0);
        EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureNumber =
             EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].CaptureNumber - 1;
      }
    }
  }
  pfVar3 = &EneDmgLargeHitCtrl.Status;
  iVar2 = 0;
  pLargeHit = &EneDmgLargeHitCtrl;
  fVar7 = DAT_003edb20;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,2);
    if ((pfVar3->field0_0x0).m_aData[0] != 0) {
      _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar2,2);
      _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar2,2);
      if (*(int *)&pLargeHit->Work == 0) {
        uVar1 = *(uint *)&pLargeHit->Work;
        if ((int)uVar1 < 0) {
          fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar4 = fVar4 + fVar4;
          uVar1 = *(uint *)&pLargeHit->Work;
        }
        else {
          fVar4 = (float)uVar1;
          uVar1 = *(uint *)&pLargeHit->Work;
        }
        if ((int)uVar1 < 0) {
          fVar6 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar6 = fVar6 + fVar6;
        }
        else {
          fVar6 = (float)uVar1;
        }
        fVar4 = fVar4 / fVar6;
        fVar6 = *(float *)&pLargeHit->Work;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        (pLargeHit->Work).field0_0x0.m_aData[0].CenterPos[2] = -*(float *)&pLargeHit->Work * fVar4;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        fVar6 = (fVar6 - 1.0) * fVar4 + 1.0;
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(3,4);
        uVar1 = *(uint *)&pLargeHit->Work;
        if ((int)uVar1 < 0) {
          fVar5 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar1;
        }
        (((fixed_array<unsigned_char,4> *)&pLargeHit->Work)->field0_0x0).m_aData[3] =
             (uchar)(int)(fVar5 * (1.0 - fVar4));
        _fixed_array_verifyrange__H1ZUc_UiUi_PX01(3,4);
        uVar1 = *(uint *)&pLargeHit->Work;
        if ((int)uVar1 < 0) {
          fVar5 = (float)(uVar1 & 1 | uVar1 >> 1);
          fVar5 = fVar5 + fVar5;
        }
        else {
          fVar5 = (float)uVar1;
        }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        (((fixed_array<unsigned_char,4> *)&pLargeHit->Work)->field0_0x0).m_aData[3] =
             (uchar)(int)(fVar5 * (1.0 - fVar4));
                    /* end of inlined section */
        for (fVar4 = *(float *)&pLargeHit->Work * fVar4; fVar7 < fVar4; fVar4 = fVar4 - DAT_003edb24
            ) {
        }
        for (; fVar4 < DAT_003edb28; fVar4 = fVar4 + DAT_003edb2c) {
        }
        EneDmgLargeHitEffectDisp__FP17ENE_DMG_LARGE_HITff
                  ((ENE_DMG_LARGE_HIT *)pLargeHit,fVar6,fVar4);
        uVar1 = *(uint *)&pLargeHit->Work + 1;
        *(uint *)&pLargeHit->Work = uVar1;
        if (*(uint *)&pLargeHit->Work <= uVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,2);
          (pfVar3->field0_0x0).m_aData[0] = 0;
        }
      }
      else {
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar2,2);
                    /* end of inlined section */
        *(int *)&pLargeHit->Work = *(int *)&pLargeHit->Work + -1;
      }
    }
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    pfVar3 = (fixed_array<int,2> *)((pfVar3->field0_0x0).m_aData + 1);
    pLargeHit = (ENE_DMG_LARGE_HIT_CTRL *)((pLargeHit->Work).field0_0x0.m_aData + 1);
  } while (iVar2 < 2);
  return;
}

void EneDmgLargeHitReq(int EffectType) {
	int i;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,2);
    piVar1 = EneDmgLargeHitCtrl.Status.field0_0x0.m_aData + iVar3;
    if (*piVar1 == 0) {
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,2);
                    /* end of inlined section */
                    /* end of inlined section */
      *piVar1 = 1;
      switch(EffectType) {
      case 0:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectSmallInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 1:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 2:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectSP_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 3:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectSP_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 4:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectSlow_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 5:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectSlow_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 6:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZero_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 7:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZero_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 8:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZeroSC_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 9:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZeroSC_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 10:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZeroSP_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0xb:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectZeroSP_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0xc:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKoku_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0xd:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKoku_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0xe:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKokuSC_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0xf:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKokuSC_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x10:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKokuSP_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x11:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectKokuSP_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x12:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectParalyze_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x13:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectParalyze_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x14:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectView_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x15:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectView_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x16:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsu_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x17:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsu_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x18:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsuSC_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x19:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsuSC_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1a:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsuSP_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1b:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectMetsuSP_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1c:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRen_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1d:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRen_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1e:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRenSC_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x1f:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRenSC_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x20:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRenSP_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x21:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectRenSP_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x22:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectTsui_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x23:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectTsui_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x24:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectFuu_AInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
                    /* end of inlined section */
        break;
      case 0x25:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar2 = iVar3 * 2;
        _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
        EneDmgLargeHitEffectFuu_BInit__FP17ENE_DMG_LARGE_HIT
                  (EneDmgLargeHitCtrl.Work.field0_0x0.m_aData + iVar3);
        break;
      default:
        iVar2 = iVar3 << 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      }
      _fixed_array_verifyrange__H1Z17ENE_DMG_LARGE_HIT_UiUi_PX01(iVar3,2);
                    /* end of inlined section */
      *(uchar (*) [4])
       (&EneDmgLargeHitCtrl.Work.field0_0x0.m_aData[0].OutsideRgba)[(iVar2 + iVar3) * 8 + 3].
       field0_0x0.m_aData = (uchar  [4])0x1;
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

void EneDmgLargeHitAllOff() {
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<int,2> *pfVar3;
  
  pfVar3 = &EneDmgLargeHitCtrl.Status;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar1,2);
    (pfVar3->field0_0x0).m_aData[0] = 0;
                    /* end of inlined section */
    pfVar3 = (fixed_array<int,2> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar1 = iVar2;
  } while (iVar2 < 2);
  return;
}

static void EneDmgLargeHitInit(ENE_DMG_LARGE_HIT *pLargeHit, ENE_DMG_LARGE_HIT_PARAMETER *pLHParam) {
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,4);
  (pLargeHit->CenterRgba).field0_0x0.m_aData[0] = *(uchar *)pLHParam->CenterRgba;
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(1,4);
  (pLargeHit->CenterRgba).field0_0x0.m_aData[1] = *(uchar *)(pLHParam->CenterRgba + 1);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(2,4);
  (pLargeHit->CenterRgba).field0_0x0.m_aData[2] = *(uchar *)(pLHParam->CenterRgba + 2);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(3,4);
  (pLargeHit->CenterRgba).field0_0x0.m_aData[3] = *(uchar *)(pLHParam->CenterRgba + 3);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,4);
  (pLargeHit->OutsideRgba).field0_0x0.m_aData[0] = *(uchar *)pLHParam->OutsideRgba;
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(1,4);
  (pLargeHit->OutsideRgba).field0_0x0.m_aData[1] = *(uchar *)(pLHParam->OutsideRgba + 1);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(2,4);
  (pLargeHit->OutsideRgba).field0_0x0.m_aData[2] = *(uchar *)(pLHParam->OutsideRgba + 2);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(3,4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  (pLargeHit->OutsideRgba).field0_0x0.m_aData[3] = *(uchar *)(pLHParam->OutsideRgba + 3);
  fVar6 = DAT_003edb30;
                    /* end of inlined section */
  pLargeHit->VertexNumW = pLHParam->VertexNumW;
  pLargeHit->VertexNumH = pLHParam->VertexNumH;
  iVar8 = pLHParam->Size;
  iVar7 = pLHParam->LastScale;
  pLargeHit->NowFrame = 0;
  pLargeHit->AllFrame = pLHParam->AllFrame;
  iVar9 = pLHParam->MoveDist;
  pLargeHit->InitCenterAlpha = pLHParam->CenterRgba[3];
  uVar1 = pLHParam->OutsideRgba[3];
  pLargeHit->Scale = (float)iVar8 / 100.0;
  pLargeHit->InitOutsideAlpha = uVar1;
  iVar10 = pLHParam->Distance;
  pLargeHit->CaptureInterval = pLHParam->CaptureInterval;
  pLargeHit->LastScale = (float)iVar7 / 100.0;
  pLargeHit->CaptureNumber = pLHParam->CaptureNumber;
  iVar7 = pLHParam->RotVal;
  iVar8 = pLHParam->AlphaBlendFIX;
  iVar2 = pLHParam->AlphaBlendC;
  iVar3 = pLHParam->AlphaBlendA;
  iVar4 = pLHParam->AlphaBlendB;
  iVar5 = pLHParam->AlphaBlendD;
  pLargeHit->MoveDist = (float)iVar9 / 10.0;
  pLargeHit->Distance = (float)iVar10 / 10.0;
  pLargeHit->AlphaBlend =
       (long)iVar3 | (long)iVar8 << 0x20 | (long)iVar2 << 4 | (long)iVar4 << 2 | (long)iVar5 << 6;
  pLargeHit->RotVal = (float)(iVar7 + -0xe10) * fVar6;
  pLargeHit->CenterPos[0] = 0.0;
  pLargeHit->CenterPos[3] = 1.0;
  pLargeHit->CenterPos[1] = 0.0;
  pLargeHit->CenterPos[2] = 0.0;
  return;
}

static void EneDmgLargeHitEffectSmallInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(1);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectSP_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(2);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectSP_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(3);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectSlow_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(4);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectSlow_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(5);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZero_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(6);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZero_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(7);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZeroSC_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(8);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZeroSC_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(9);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZeroSP_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(10);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectZeroSP_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0xb);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKoku_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0xc);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKoku_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0xd);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKokuSC_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0xe);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKokuSC_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0xf);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKokuSP_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x10);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectKokuSP_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x11);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsu_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x16);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsu_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x17);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsuSC_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x18);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsuSC_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x19);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsuSP_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1a);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectMetsuSP_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1b);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRen_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1c);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRen_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1d);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRenSC_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1e);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRenSC_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x1f);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRenSP_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x20);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectRenSP_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x21);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectParalyze_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x12);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectParalyze_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x13);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectView_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x14);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectView_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x15);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectTsui_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x22);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectTsui_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x23);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectFuu_AInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x24);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectFuu_BInit(ENE_DMG_LARGE_HIT *pLargeHit) {
  ENE_DMG_LARGE_HIT_PARAMETER *pLHParam;
  
  pLHParam = EffEneDmgLargeHitParameterPtrGet__Fi(0x25);
  EneDmgLargeHitInit__FP17ENE_DMG_LARGE_HITPC27ENE_DMG_LARGE_HIT_PARAMETER(pLargeHit,pLHParam);
  return;
}

static void EneDmgLargeHitEffectDisp(ENE_DMG_LARGE_HIT *pLargeHit, float Scale, float RotZ) {
	float LocalWorldMat[4][4];
	float LocalScreenMat[4][4];
	float RotScaleMat[4][4];
	float stqparam[3][4];
	fixed_array<float[4],256> VtxBuf;
	fixed_array<float[4],256> StqBuf;
	float Pos[4];
	int VertexNum;
	float EffectW;
	float EffectH;
	int i;
	float RotX;
	float RotY;
	GRA3DCAMERA *pCam;
	
  float afVar1 [4];
  undefined auVar2 [16];
  undefined auVar3 [12];
  GRA3DCAMERA *pGVar4;
  float (*pafVar5) [4];
  float (*pafVar6) [4];
  int iVar7;
  int VertexNum;
  float Height;
  float Width;
  undefined in_vf0 [16];
  undefined extraout_vf4 [16];
  undefined extraout_vf5 [16];
  undefined extraout_vf6 [16];
  undefined extraout_vf7 [16];
  undefined extraout_vf8 [16];
  undefined extraout_vf9 [16];
  undefined extraout_vf10 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined4 uVar10;
  float LocalWorldMat [4] [4];
  float LocalScreenMat [4] [4];
  float RotScaleMat [4] [4];
  float stqparam [3] [4];
  fixed_array<float[4],256> VtxBuf;
  fixed_array<float[4],256> StqBuf;
  float Pos [4];
  float RotX;
  float RotY;
  _DRAW_ENV_5 local_c0;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  pGVar4 = gra3dGetCamera__Fv();
  pafVar5 = gra3dcamGetDirection__Fv();
  pafVar6 = gra3dcamGetPosition__Fv();
  LocalCopyBtoL__Fiii(2,0,0x2bc0);
  sceVu0ScaleVector(pLargeHit->Distance,Pos,pafVar5);
  sceVu0AddVector(Pos,Pos,pafVar6);
  VertexNum = (pLargeHit->VertexNumW + pLargeHit->VertexNumH) * 2 + -2;
  Vector2Rot__FPCfPfT1((float *)pafVar5,&RotX,&RotY);
  sceVu0UnitMatrix(LocalWorldMat);
  LocalWorldMat[0][0] = 25.0;
  LocalWorldMat[2][2] = 25.0;
  LocalWorldMat[1][1] = 25.0;
  sceVu0RotMatrixX(RotX,LocalWorldMat,LocalWorldMat);
  sceVu0RotMatrixY(RotY,LocalWorldMat,LocalWorldMat);
  sceVu0TransMatrix(LocalWorldMat,LocalWorldMat,Pos);
  sceVu0MulMatrix(LocalScreenMat,pGVar4->matWorldScreen,LocalWorldMat);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/gra3dVu0.h */
  _lqc2((undefined  [16])LocalScreenMat[0]);
  _lqc2((undefined  [16])LocalScreenMat[1]);
  _lqc2((undefined  [16])LocalScreenMat[2]);
  _lqc2((undefined  [16])LocalScreenMat[3]);
  auVar8._4_4_ = DAT_003edb38;
  auVar8._0_4_ = DAT_003edb34;
  auVar8._8_4_ = 0x3f800000;
  auVar8._12_4_ = stqparam[0][3];
                    /* inlined from effect_obj.h */
  _lqc2(auVar8);
  auVar3._4_8_ = 0;
  auVar3._0_4_ = DAT_003edb3c;
  auVar9._12_4_ = DAT_003edb40;
  auVar9._0_12_ = auVar3 << 0x20;
  _lqc2(auVar9);
  auVar2._8_4_ = 0x3f800000;
  auVar2._0_8_ = 0x3b0000003a800000;
  auVar2._12_4_ = 0x3d800000;
  _lqc2(auVar2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar7 = 0;
  Width = pLargeHit->Scale * DAT_003edb48;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  Height = pLargeHit->Scale * DAT_003edb44;
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x100);
  EneDmgLargeHitMakeVertex__FPA3_fPfffUiUi
            ((float (*) [4])&VtxBuf,pLargeHit->CenterPos,Width,Height,pLargeHit->VertexNumW,
             pLargeHit->VertexNumH);
                    /* end of inlined section */
  if (0 < VertexNum) {
    do {
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x100);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x100);
      pafVar5 = VtxBuf.field0_0x0.m_aData[iVar7];
      pafVar6 = StqBuf.field0_0x0.m_aData[iVar7];
      afVar1[0] = *(float *)((int)pafVar5 + 0);
      afVar1[1] = *(float *)((int)pafVar5 + 4);
      afVar1[2] = *(float *)((int)pafVar5 + 8);
      afVar1[3] = *(float *)((int)pafVar5 + 0xc);
                    /* inlined from effect_obj.h */
      auVar8 = _lqc2((undefined  [16])afVar1);
      auVar8 = _vmulbc(auVar8,extraout_vf8);
      _vmulabc(extraout_vf7,in_vf0);
      _vmaddabc(extraout_vf6,auVar8);
      _vmaddabc(extraout_vf5,auVar8);
      auVar8 = _vmaddbc(extraout_vf4,auVar8);
      _vdiv(in_vf0,0,auVar8,0);
      uVar10 = _vwaitq();
      auVar8 = _vmulq(auVar8,uVar10);
      auVar8 = _vsub(auVar8,extraout_vf8);
      auVar8 = _vmaxbc(auVar8,extraout_vf9);
      auVar8 = _vminibc(auVar8,extraout_vf9);
      auVar8 = _vmaxbc(auVar8,extraout_vf9);
      auVar8 = _vminibc(auVar8,extraout_vf9);
      auVar9 = _vmulq(extraout_vf10,uVar10);
      _vmul(auVar8,auVar9);
      auVar8 = _vmulq(extraout_vf10,uVar10);
      auVar8 = _vmulbc(auVar8,extraout_vf10);
      afVar1 = (float  [4])_sqc2(auVar8);
      *(float *)((int)pafVar6 + 0) = afVar1[0];
      *(float *)((int)pafVar6 + 4) = afVar1[1];
      *(float *)((int)pafVar6 + 8) = afVar1[2];
      *(float *)((int)pafVar6 + 0xc) = afVar1[3];
                    /* end of inlined section */
      iVar7 = iVar7 + 1;
    } while (iVar7 < VertexNum);
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  sceVu0UnitMatrix(RotScaleMat);
  RotScaleMat[0][0] = Scale;
  RotScaleMat[1][1] = Scale;
  RotScaleMat[2][2] = Scale;
  sceVu0RotMatrixZ(RotZ,RotScaleMat,RotScaleMat);
  sceVu0MulMatrix(LocalWorldMat,LocalWorldMat,RotScaleMat);
  local_c0.alpha = pLargeHit->AlphaBlend;
  local_c0.test = 0x3000d;
  local_c0.zbuf = 0x10a000118;
  local_78 = 0x3000d;
  local_70 = 0x10a000118;
  local_c0.tex1 = 0x161;
  local_c0.clamp = 5;
  local_88 = 0x161;
  local_80 = 5;
  local_90 = local_c0.alpha;
  SetDrawEnv__FiPC11_DRAW_ENV_5(0,&local_c0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x100);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,4);
  _fixed_array_verifyrange__H1ZUc_UiUi_PX01(0,4);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x100);
  EneDmgLargeHitMakePacket__FPA3_fiT0PUcT3T0Ul
            ((float (*) [4])&VtxBuf,VertexNum,LocalWorldMat,(uchar *)&pLargeHit->CenterRgba,
             (uchar *)&pLargeHit->OutsideRgba,(float (*) [4])&StqBuf,0x2000000264116bc0);
  return;
}

static void EneDmgLargeHitMakeVertex(sceVu0FVECTOR *pVtxBuf, float *Center, float Width, float Height, u_int VertexNumW, u_int VertexNumH) {
	int VertexCount;
	float CalcX;
	float CalcY;
	float VertexUnitW;
	float VertexUnitH;
	u_int i;
	
  undefined8 uVar1;
  float (*pafVar2) [4];
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  uVar8 = VertexNumW - 1;
  uVar7 = VertexNumH - 1;
  if ((int)uVar8 < 0) {
    fVar9 = (float)(uVar8 & 1 | uVar8 >> 1);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)uVar8;
  }
  if ((int)uVar7 < 0) {
    fVar10 = (float)(uVar7 & 1 | uVar7 >> 1);
    fVar10 = fVar10 + fVar10;
  }
  else {
    fVar10 = (float)uVar7;
  }
  uVar1 = *(undefined8 *)Center;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar5 = Center[2];
  fVar6 = Center[3];
  (*pVtxBuf)[0] = (float)uVar1;
  (*pVtxBuf)[1] = (float)((ulong)uVar1 >> 0x20);
  (*pVtxBuf)[2] = fVar5;
  (*pVtxBuf)[3] = fVar6;
                    /* end of inlined section */
  iVar4 = 1;
  uVar3 = 0;
  fVar5 = -Width * 0.5;
  if (uVar8 != 0) {
    pafVar2 = pVtxBuf[1];
    do {
      uVar3 = uVar3 + 1;
      (*pafVar2)[0] = fVar5;
      (*pafVar2)[1] = -Height * 0.5;
      (*pafVar2)[2] = 0.0;
      fVar5 = fVar5 + Width / fVar9;
      (*pafVar2)[3] = 1.0;
      pafVar2 = pafVar2[1];
      iVar4 = iVar4 + 1;
    } while (uVar3 < uVar8);
  }
  uVar3 = 0;
  fVar5 = -Height * 0.5;
  if (uVar7 != 0) {
    pafVar2 = pVtxBuf[iVar4];
    do {
      uVar3 = uVar3 + 1;
      (*pafVar2)[1] = fVar5;
      (*pafVar2)[0] = Width * 0.5;
      (*pafVar2)[2] = 0.0;
      fVar5 = fVar5 + Height / fVar10;
      (*pafVar2)[3] = 1.0;
      pafVar2 = pafVar2[1];
      iVar4 = iVar4 + 1;
    } while (uVar3 < uVar7);
  }
  uVar7 = 0;
  fVar5 = Width * 0.5;
  if (uVar8 != 0) {
    pafVar2 = pVtxBuf[iVar4];
    do {
      uVar7 = uVar7 + 1;
      (*pafVar2)[0] = fVar5;
      (*pafVar2)[1] = Height * 0.5;
      (*pafVar2)[2] = 0.0;
      fVar5 = fVar5 - Width / fVar9;
      (*pafVar2)[3] = 1.0;
      pafVar2 = pafVar2[1];
      iVar4 = iVar4 + 1;
    } while (uVar7 < uVar8);
  }
  uVar7 = 0;
  fVar9 = Height * 0.5;
  if (VertexNumH != 0) {
    pafVar2 = pVtxBuf[iVar4];
    do {
      uVar7 = uVar7 + 1;
      (*pafVar2)[1] = fVar9;
      (*pafVar2)[0] = -Width * 0.5;
      (*pafVar2)[2] = 0.0;
      fVar9 = fVar9 - Height / fVar10;
      (*pafVar2)[3] = 1.0;
      pafVar2 = pafVar2[1];
    } while (uVar7 < VertexNumH);
  }
  return;
}

void EneDmgLargeHitMakePacket(sceVu0FVECTOR *pVertexBuf, int VertexNum, float *LocalWorldMat[4], u_char *pCenterRgba, u_char *pOutsideRgba, sceVu0FVECTOR *pStq, u_long tex0) {
	fixed_array<int[4],256> VertexBuf_I;
	fixed_array<int,256> clip;
	Q_WORDDATA *pPacket;
	int i;
	u_long *plong;
	GRA3DCAMERA *pCam;
	
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float afVar7 [4];
  float afVar8 [4];
  float afVar9 [4];
  float afVar10 [4];
  float afVar11 [4];
  float afVar12 [4];
  float afVar13 [4];
  float afVar14 [4];
  GRA3DCAMERA *pGVar15;
  uint uVar16;
  Q_WORDDATA *pQVar17;
  ulong uVar18;
  int *piVar19;
  Q_WORDDATA *pQVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float (*pafVar24) [4];
  fixed_array<int[4],256> *pfVar25;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  fixed_array<int[4],256> VertexBuf_I;
  fixed_array<int,256> clip;
  float (*local_60) [4];
  
  pfVar25 = &VertexBuf_I;
  pGVar15 = gra3dGetCamera__Fv();
  afVar7[0] = *(float *)((int)pGVar15->matWorldScreen[0] + 0);
  afVar7[1] = *(float *)((int)pGVar15->matWorldScreen[0] + 4);
  afVar7[2] = *(float *)((int)pGVar15->matWorldScreen[0] + 8);
  afVar7[3] = *(float *)((int)pGVar15->matWorldScreen[0] + 0xc);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/gra3dVu0.h */
  auVar26 = _lqc2((undefined  [16])afVar7);
  afVar8[0] = *(float *)((int)pGVar15->matWorldScreen[1] + 0);
  afVar8[1] = *(float *)((int)pGVar15->matWorldScreen[1] + 4);
  afVar8[2] = *(float *)((int)pGVar15->matWorldScreen[1] + 8);
  afVar8[3] = *(float *)((int)pGVar15->matWorldScreen[1] + 0xc);
  auVar27 = _lqc2((undefined  [16])afVar8);
  afVar9[0] = *(float *)((int)pGVar15->matWorldScreen[2] + 0);
  afVar9[1] = *(float *)((int)pGVar15->matWorldScreen[2] + 4);
  afVar9[2] = *(float *)((int)pGVar15->matWorldScreen[2] + 8);
  afVar9[3] = *(float *)((int)pGVar15->matWorldScreen[2] + 0xc);
  auVar28 = _lqc2((undefined  [16])afVar9);
  afVar10[0] = *(float *)((int)pGVar15->matWorldScreen[3] + 0);
  afVar10[1] = *(float *)((int)pGVar15->matWorldScreen[3] + 4);
  afVar10[2] = *(float *)((int)pGVar15->matWorldScreen[3] + 8);
  afVar10[3] = *(float *)((int)pGVar15->matWorldScreen[3] + 0xc);
  auVar29 = _lqc2((undefined  [16])afVar10);
  auVar30 = _lqc2((undefined  [16])*LocalWorldMat);
  auVar31 = _lqc2((undefined  [16])LocalWorldMat[1]);
  auVar32 = _lqc2((undefined  [16])LocalWorldMat[2]);
  auVar33 = _lqc2((undefined  [16])LocalWorldMat[3]);
  _vmulabc(auVar26,auVar30);
  _vmaddabc(auVar27,auVar30);
  _vmaddabc(auVar28,auVar30);
  _vmaddbc(auVar29,auVar30);
  _vmulabc(auVar26,auVar31);
  _vmaddabc(auVar27,auVar31);
  _vmaddabc(auVar28,auVar31);
  _vmaddbc(auVar29,auVar31);
  _vmulabc(auVar26,auVar32);
  _vmaddabc(auVar27,auVar32);
  _vmaddabc(auVar28,auVar32);
  _vmaddbc(auVar29,auVar32);
  _vmulabc(auVar26,auVar33);
  _vmaddabc(auVar27,auVar33);
  _vmaddabc(auVar28,auVar33);
  _vmaddbc(auVar29,auVar33);
  afVar11[0] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 0);
  afVar11[1] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 4);
  afVar11[2] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 8);
  afVar11[3] = *(float *)((int)pGVar15->matWorldClipPolygon[0] + 0xc);
  auVar26 = _lqc2((undefined  [16])afVar11);
  afVar12[0] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 0);
  afVar12[1] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 4);
  afVar12[2] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 8);
  afVar12[3] = *(float *)((int)pGVar15->matWorldClipPolygon[1] + 0xc);
  auVar27 = _lqc2((undefined  [16])afVar12);
  afVar13[0] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 0);
  afVar13[1] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 4);
  afVar13[2] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 8);
  afVar13[3] = *(float *)((int)pGVar15->matWorldClipPolygon[2] + 0xc);
  auVar28 = _lqc2((undefined  [16])afVar13);
  afVar14[0] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 0);
  afVar14[1] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 4);
  afVar14[2] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 8);
  afVar14[3] = *(float *)((int)pGVar15->matWorldClipPolygon[3] + 0xc);
  auVar29 = _lqc2((undefined  [16])afVar14);
  _vmulabc(auVar26,auVar30);
  _vmaddabc(auVar27,auVar30);
  _vmaddabc(auVar28,auVar30);
  _vmaddbc(auVar29,auVar30);
  _vmulabc(auVar26,auVar31);
  _vmaddabc(auVar27,auVar31);
  _vmaddabc(auVar28,auVar31);
  _vmaddbc(auVar29,auVar31);
  _vmulabc(auVar26,auVar32);
  _vmaddabc(auVar27,auVar32);
  _vmaddabc(auVar28,auVar32);
  _vmaddbc(auVar29,auVar32);
  _vmulabc(auVar26,auVar33);
  _vmaddabc(auVar27,auVar33);
  _vmaddabc(auVar28,auVar33);
  _vmaddbc(auVar29,auVar33);
                    /* end of inlined section */
  local_60 = pStq;
  if (0 < VertexNum) {
    piVar19 = (int *)&clip;
    iVar22 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar22,0x100);
      uVar16 = CalcPartsDeformXYZ__FPiPf
                         ((int *)VertexBuf_I.field0_0x0.m_aData[iVar22],(float *)pVertexBuf[iVar22])
      ;
      iVar21 = iVar22 + 1;
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar22,0x100);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      *piVar19 = uVar16 & 0x3f;
      piVar19 = piVar19 + 1;
      iVar22 = iVar21;
                    /* end of inlined section */
    } while (iVar21 < VertexNum);
  }
  iVar22 = 0;
  pQVar17 = StartDmaDirectTrans__Fv();
  pQVar17->ul64[0] = 0x1000000000008002;
  pQVar17->ul64[1] = 0xe;
  *(undefined8 *)((int)pQVar17 + 0x18) = 0x3f;
  pQVar17[1].ul64[0] = 0;
  *(undefined8 *)((int)pQVar17 + 0x28) = 6;
  pQVar17[2].ul64[0] = tex0;
  pQVar17[3].ul64[0] = 0x2400400000008001;
  *(undefined8 *)((int)pQVar17 + 0x38) = 0xf0;
  *(undefined8 *)((int)pQVar17 + 0x48) = 0;
  pQVar17[4].ul64[0] = 0x5d;
  pQVar17 = pQVar17 + 5;
  pQVar20 = pQVar17;
  pafVar24 = local_60;
  if (0 < VertexNum) {
    do {
      if (iVar22 < 2) {
        uVar18 = 0xc12;
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zi_UiUi_PX01(0,0x100);
        if (((clip.field0_0x0.m_aData[0] == 0) ||
            (_fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar22 + -1,0x100),
            *(int *)((int)&clip + (iVar22 + -1) * 4) == 0)) ||
           (_fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar22,0x100),
           clip.field0_0x0.m_aData[iVar22] == 0)) {
                    /* end of inlined section */
          uVar18 = 0x412;
        }
        else {
          uVar18 = 0xc12;
        }
      }
      pQVar20->ul64[1] = uVar18;
      pQVar20->ul64[0] = 0x3400000000008001;
      pQVar20[1].ui32[0] = (uint)(*pafVar24)[0];
      *(float *)((int)pQVar20 + 0x14) = (*pafVar24)[1];
      if (iVar22 == 0) {
        bVar1 = pCenterRgba[2];
        bVar2 = pCenterRgba[1];
        fVar6 = (*local_60)[2];
        bVar3 = *pCenterRgba;
        bVar4 = pCenterRgba[3];
      }
      else {
        bVar1 = pOutsideRgba[2];
        bVar2 = pOutsideRgba[1];
        fVar6 = (*pafVar24)[2];
        bVar3 = *pOutsideRgba;
        bVar4 = pOutsideRgba[3];
      }
      *(ulong *)((int)pQVar20 + 0x18) =
           (ulong)bVar3 | (ulong)(uint)fVar6 << 0x20 | (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 |
           (ulong)bVar4 << 0x18;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar22,0x100);
      iVar21 = *(int *)pfVar25;
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar22,0x100);
      iVar5 = *(int *)((int)pfVar25 + 4);
                    /* end of inlined section */
      iVar23 = iVar22 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_i_UiUi_PX01(iVar22,0x100);
      iVar22 = *(int *)((int)pfVar25 + 8);
                    /* end of inlined section */
      pfVar25 = (fixed_array<int[4],256> *)((int)pfVar25 + 0x10);
      *(undefined8 *)((int)pQVar20 + 0x28) = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pQVar17 = pQVar20 + 3;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
      pQVar20[2].ul64[0] = (long)iVar21 | (long)iVar5 << 0x10 | (long)iVar22 << 0x20;
      pQVar20 = pQVar17;
      pafVar24 = pafVar24[1];
      iVar22 = iVar23;
    } while (iVar23 < VertexNum);
  }
  EndDmaDirectTrans__FP10Q_WORDDATA(pQVar17);
  return;
}

ENE_DMG_LARGE_HIT_PARAMETER* EffEneDmgLargeHitParameterPtrGet(int Label) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP27ENE_DMG_LARGE_HIT_PARAMETER_UiUi_PX01(Label,0x26);
  return *(ENE_DMG_LARGE_HIT_PARAMETER **)((int)pLargeHitParameter.field0_0x0.m_aData + Label * 4);
}

ENE_DMG_BLUR_CONTRAST_PARAMETER* EffEneDmgLargeHitBlurParameterPtrGet(int Label) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP31ENE_DMG_BLUR_CONTRAST_PARAMETER_UiUi_PX01(Label,0x14);
  return *(ENE_DMG_BLUR_CONTRAST_PARAMETER **)
          ((int)pLargeHitBlurParameter.field0_0x0.m_aData + Label * 4);
}

ENDMG1* ENDMG1 * _fixed_array_verifyrange<ENDMG1>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

sceVu0FVECTOR* float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

u_long* unsigned long * _fixed_array_verifyrange<unsigned long>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

SPRT_DAT* SPRT_DAT * _fixed_array_verifyrange<SPRT_DAT>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

u_int* unsigned int * _fixed_array_verifyrange<unsigned int>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

NEW_PERTICLE* NEW_PERTICLE * _fixed_array_verifyrange<NEW_PERTICLE>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

float*[4][4] float [3][3] * _fixed_array_verifyrange<float [3][3]>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

TAIL_DMG2_DAT* TAIL_DMG2_DAT * _fixed_array_verifyrange<TAIL_DMG2_DAT>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

ENEDMG_PARTICLE_ONE* ENEDMG_PARTICLE_ONE * _fixed_array_verifyrange<ENEDMG_PARTICLE_ONE>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

int*[4] int [3] * _fixed_array_verifyrange<int [3]>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

ENE_DMG_LARGE_HIT* ENE_DMG_LARGE_HIT * _fixed_array_verifyrange<ENE_DMG_LARGE_HIT>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

ENE_DMG_LARGE_HIT_PARAMETER** ENE_DMG_LARGE_HIT_PARAMETER * * _fixed_array_verifyrange<ENE_DMG_LARGE_HIT_PARAMETER *>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

ENE_DMG_BLUR_CONTRAST_PARAMETER** ENE_DMG_BLUR_CONTRAST_PARAMETER * * _fixed_array_verifyrange<ENE_DMG_BLUR_CONTRAST_PARAMETER *>(size_t v, size_t _max) {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	ENE_DMG_BLUR_CONTRAST_PARAMETER **ra;
	int *ra;
	
                    /* end of inlined section */
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pLargeHitParameter.field0_0x0.m_aData =
         (fixed_array_base<ENE_DMG_LARGE_HIT_PARAMETER_*,38,ENE_DMG_LARGE_HIT_PARAMETER_**>)
         &PTR_SmallHit_003a6368;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    pLargeHitBlurParameter.field0_0x0.m_aData =
         (fixed_array_base<ENE_DMG_BLUR_CONTRAST_PARAMETER_*,20,ENE_DMG_BLUR_CONTRAST_PARAMETER_**>)
         &PTR_SmallHit_Blur_003a6400;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    alp.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003a6450;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    scl.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003a6460;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    rot.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003a6470;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    ccol.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003a6480;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    calp.field0_0x0.m_aData = (fixed_array_base<int,3,int_*>)&DAT_003a6490;
  }
  return;
}

void EneDmgParticleOneDraw(ENEDMG_PARTICLE_ONE *pEneParticle, float rot_x, float rot_y, int r, int g, int b, float AlphaRate, int Type) {
	float BouStartScaleX;
	float BouStartScaleY;
	float BouStartAlpha;
	float BouStartRot;
	float WakkaStartScaleX;
	float WakkaStartAlpha;
	float WakkaEndAlpha;
	DRAW_ENV de;
	float ParticleSizeW;
	float ParticleSizeH;
	float wlm[4][4];
	float RotMat[4][4];
	float LocalWorldMat2[4][4];
	float zero[4];
	float BouScaleX;
	float BouScaleY;
	float BouAlpha;
	float BouRot;
	float WakkaScaleX;
	float WakkaScaleY;
	float WakkaAlpha;
	float AlphaBase;
	
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENDMG1 type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_WRK type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& float [3] type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& SPRT_DAT type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& NEW_PERTICLE type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& float [3][3] type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& TAIL_DMG2_DAT type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENEDMG_PARTICLE_ONE type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& int [3] type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_DMG_LARGE_HIT type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_DMG_LARGE_HIT_PARAMETER * type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_DMG_BLUR_CONTRAST_PARAMETER * type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_DMG_LARGE_HIT_PARAMETER type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

type_info& ENE_DMG_BLUR_CONTRAST_PARAMETER type_info function() {
  DRAW_ENV de;
  float wlm [4] [4];
  float RotMat [4] [4];
  float LocalWorldMat2 [4] [4];
  float zero [4];
  
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)pEneParticle;
}

static void global constructors keyed to SmallHit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
