// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_ZERO2_UTIL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_ZERO2_UTIL_H

typedef enum {
	YZ = 0,
	ZX = 1,
	XY = 2
} _PLANE3D;

typedef _PLANE3D PLANE3D;
int GetObjectPos(float *obj_pos, u_char obj_type, int obj_id);
void Zero2PrintWarningFunc(char *str);
void Zero2PrintAssertFunc(char *str);
void utilTim2SendVram(u_int *tim2_addr, int tbp, int cbp, int tw_2, int th_2);
void GetRandomPositionXZ(float *pos, float *o_pos, float max, float min);
float CalcAngle__FPCfN208_PLANE3D(float *vDirectionAxis, float *vDirection, float *vTop, PLANE3D plane_3d);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_ZERO2_UTIL_H
