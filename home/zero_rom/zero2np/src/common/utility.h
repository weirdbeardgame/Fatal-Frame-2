// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY_H

struct POINT_T {
	float x;
	float y;
};

struct LINE_T {
	POINT_T a;
	POINT_T b;
};

void GetSquare(float *v0[4], float *v1[4]);
float GetDist(float x, float z);
float GetDistV(float *p0, float *p1);
float GetDistV2(float *p0, float *p1);
void RotFvector(float *rot, float *tv);
float CombRotate(float rot);
int CompVector(float *v1, float *v2);
void _SetVector(float *v, float x, float y, float z, float w);
void _ClearVector(float *v0);
int LineIntersect(LINE_T *e1, LINE_T *e2);
int LineStraddle(LINE_T *e, POINT_T *a, POINT_T *b);
int LineSide(POINT_T *p, LINE_T *e);
void Vu0SubOuterProduct(float *v0, float *v1, float *v2, float *v3);
void Vu0Normalize(float *v0, float *v1);
void Vu0ApplyMatrix(float *v0, float *m0[4], float *v1);
void Vu0MulVector(float *v0, float *v1, float *v2);
void Vu0FTOI0Vector(int *v0, float *v1);
u_int log_2(u_int n);
float log_10sub(float num);
u_int log_10(u_int num);
void _ftoi0(int *out, float *in);
void _ftoi4(int *out, float *in);
float GetVecLenUnitFrom2Point(float *bet, float *unit, float *from, float *to);
float GetLenUnitFromVec(float *unit, float *vec);
void PrintFVECTOR(char *str, float *vec);
void PrintMATRIX(float *m[4]);
int sceFprintf(int fd, char *str);
float GetRandValF(float max);
int GetRandValI(int max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_UTILITY_H
