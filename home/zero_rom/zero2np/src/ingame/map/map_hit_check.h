// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HIT_CHECK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HIT_CHECK_H

int MapHitCheck(float *v0, float *now, float *old, float r, int kai);
int MapHitLineCheck(float *pos1, int kai1, float *pos2, int kai2, float r);
int MapHitCollisionLine(float *v0, float *v1, float *a, float *b, float len, float r);
int MapHitCollisionPoint(float *v0, float *v1, float *a, float len, float r);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_HIT_CHECK_H
