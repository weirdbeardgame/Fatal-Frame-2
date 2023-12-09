// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSKY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSKY_H

typedef struct {
	float hight;
	float scale_min;
	float scale_max;
	float scale_now;
	int frame_now;
	int frame;
	int fr;
	int fg;
	int fb;
	int fa;
} MAP_SKY_ST;

typedef struct {
	float len;
	float speed;
	float offset_y;
	int offset_y2;
	int move_y;
	float scale;
	int fog_r;
	int fog_g;
	int fog_b;
	int fog_al;
	MAP_SKY_ST sky_stat[3];
} MAP_SKY_DB;


u_long MapSkyGetTex0(u_int top_addr);
void MapSkySetAlpha(int iAlpha);
void MapSkySetTim2Vram(u_int *top_addr);
void MapSkyDraw(int &ivec[4], float ry, MAP_SKY_DB *ep);
void MapSkyRegist();
void MapSkyProc();
u_int MapSkyInit(u_int mst_addr);
u_int* unsigned int * _fixed_array_verifyrange<unsigned int>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPSKY_H
