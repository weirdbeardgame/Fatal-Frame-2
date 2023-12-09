// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_HIT_CHECK_BASE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_HIT_CHECK_BASE_H

int HcBaseIsInTriXZ(float *target, float *tri0, float *tri1, float *tri2);
float HcBasePointLineXZ(float *p0, float *p1, float *v);
int HcBaseLineIntersect(float *line1_1, float *line1_2, float *line2_1, float *line2_2);
int HcBaseLineStraddle(float *e1, float *e2, float *a, float *b);
int HcBaseLineSide(float *p, float *e1, float *e2);
int HcBaseLineIntersect2(float *line1_1, float *line1_2, float *line2_1, float *line2_2);
int HcBaseIsLineHitFace(float *pos, float *a, float *b, float *v0, float *v1, float *v2);
int HcBaseIsNearSegTri(float *pos1, float *pos2, float *tri0, float *tri1, float *tri2);
int HcBasePointRectangle(float *len, float *pos, float *a, float *b, float *vec[4], float r);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_HIT_CHECK_BASE_H
