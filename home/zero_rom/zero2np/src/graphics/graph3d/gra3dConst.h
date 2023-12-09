// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DCONST_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DCONST_H

typedef unsigned int G3DCOLOR;

struct XVECTOR {
	float x;
	float y;
	float z;
	float w;
	
	float* __opPf();
	float* __opPCf();
	float& operator[]();
	XVECTOR();
	XVECTOR();
	XVECTOR();
	XVECTOR();
	XVECTOR& operator=();
	XVECTOR& operator+();
	XVECTOR& operator+=();
	XVECTOR& operator-();
	XVECTOR& operator-();
	XVECTOR& operator-=();
	XVECTOR& operator*();
	XVECTOR& operator*=();
	XVECTOR& operator/();
	XVECTOR& operator/=();
	XVECTOR& operator*();
	XVECTOR& operator*=();
};

struct XMATRIX {
	union {
		struct {
			float __11;
			float __12;
			float __13;
			float __14;
			float __21;
			float __22;
			float __23;
			float __24;
			float __31;
			float __32;
			float __33;
			float __34;
			float __41;
			float __42;
			float __43;
			float __44;
		};
		float m[4][4];
	};
	
	XMATRIX& operator=();
	XMATRIX();
	float&[4][4] __opRA3_A3_f();
	float&[4][4] __opRA3_A3_Cf();
	XMATRIX();
	XMATRIX();
	XMATRIX();
	XVECTOR& operator[]();
	XVECTOR& operator[]();
	XMATRIX operator*();
	XMATRIX& operator*=();
	XVECTOR operator*();
	XMATRIX operator*();
	XMATRIX& operator*=();
};

extern unsigned int g_uiMustBeSetValue;
extern G3DCOLOR g_colWhite;
extern G3DCOLOR g_colBlack;
extern G3DCOLOR g_colGray;
extern G3DCOLOR g_colRed;
extern G3DCOLOR g_colGreen;
extern G3DCOLOR g_colBlue;
extern G3DCOLOR g_colSkyblue;
extern G3DCOLOR g_colPurple;
extern G3DCOLOR g_colYellow;
extern float g_v1000[4];
extern float g_v0100[4];
extern float g_v0010[4];
extern float g_v1001[4];
extern float g_v0101[4];
extern float g_v0011[4];
extern float g_v0111[4];
extern float g_v1011[4];
extern float g_v1101[4];
extern float g_v0110[4];
extern float g_v1010[4];
extern float g_v1100[4];
extern float g_v0001[4];
extern float g_v1110[4];
extern float g_v1111[4];
extern float g_v0000[4];
extern float g_v111_1[4];
extern XVECTOR g_xv0000;
extern float g_matUnit[4][4];
extern float g_VUmatUnit[4][4];
extern G3DMATERIAL g_NullMaterial;
extern G3DLIGHT g_NullLight;
extern float g_matUnitScaled[4][4];
extern float g_vConvertSI2PS[4];
extern float g_vConvertPS2SI[4];
extern float g_matConvertSI2PS[4][4];
extern float g_matConvertPS2SI[4][4];
extern XMATRIX g_xmatConvertSI2PS;
extern XMATRIX g_xmatConvertPS2SI;
extern GRA3DCAMERA g_CameraDefault;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_GRA3DCONST_H
