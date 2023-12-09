// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPANIM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPANIM_H

struct RST_DATA {
	sceVu0FVECTOR rot;
	sceVu0FVECTOR scale;
	sceVu0FVECTOR trans;
};

extern unsigned char MAP_ANIM_CTL type_info node[8];
extern unsigned char ANI_CTRL type_info node[8];
extern unsigned char MAPMANIM_MATRIX type_info node[8];
extern unsigned char MAPMANIM_HEAD type_info node[8];

int MapAnimCheckPlay(int id);
void MapAnimSetFlg(int id, int flg);
void MapAnimDeleteFlg(int id, int flg);
short int MapAnimGetFlg(int id);
void MapAnimSetCallback(int anim_id, int (*func)(/* parameters unknown */), void *dat, void *dat2);
u_int* MapAnimRegstMim(int id, u_int *mim_p, u_int *pkt_p);
int MapAnimRegistEx(int play_id, u_int *mdl_p, u_int *mot_p, float *mat[4][4], float *offset, float *rot, int iFlg, int iFflg);
int MapAnimRegist(int play_id, u_int *mdl_p, u_int *mot_p, float *mat[4][4], float *offset, float *rot);
int MapAnimCall(int anim_id, int play_id);
void MapAnimDelete(int id);
void MapAnimDeleteBuffID(int buff_id);
void MapAnimDeleteAll();
void MapAnimGetRstMix(MAP_ANIM_CTL *pMapAniCtl, MOT_CTRL *pMotCtl);
void MapAnimMixRst(float *aRetMatrix[4], RST_DATA *pStartRst, RST_DATA *pEndRst, float fRate);
void MapAnimProc();
void MapAnimInit();
void MapManimDeleteOne(int id);
void MapManimDelete(int buff_id);
int MapManimSetAnim(int buff_id, char *mdl_addr, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame);
int MapManimSetAnimEx2(int buff_id, int mat_num, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame, int e_flg);
int MapManimSetAnimEx(int buff_id, char *mdl_addr, char *mot_addr, int *anim_id, float *offset, float *rot, int st_frame, int e_flg);
void MapManimSetMatrixSgdOne2(SGDFILEHEADER *pSGDHead, int id);
void MapManimUnitMatrix(int id);
void MapManimProc();
void MapManimInit();
MAP_ANIM_CTL* MAP_ANIM_CTL * _fixed_array_verifyrange<MAP_ANIM_CTL>(size_t v, size_t _max);
ANI_CTRL* ANI_CTRL * _fixed_array_verifyrange<ANI_CTRL>(size_t v, size_t _max);
MAPMANIM_MATRIX* MAPMANIM_MATRIX * _fixed_array_verifyrange<MAPMANIM_MATRIX>(size_t v, size_t _max);
MAPMANIM_HEAD* MAPMANIM_HEAD * _fixed_array_verifyrange<MAPMANIM_HEAD>(size_t v, size_t _max);
type_info& MAP_ANIM_CTL type_info function();
type_info& ANI_CTRL type_info function();
type_info& MAPMANIM_MATRIX type_info function();
type_info& MAPMANIM_HEAD type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPANIM_H
