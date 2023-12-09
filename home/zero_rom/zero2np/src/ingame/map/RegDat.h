// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_REGDAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_REGDAT_H

typedef struct {
	short unsigned int RectID;
	short unsigned int size;
	int reg_id;
	int pad[2];
	float vec[4][4];
} MB_OUT_RECT;

typedef struct {
	char magic[4];
	int area_id;
	int kai;
	int pad;
	int reg_vec_num;
	MB_OUT_RECT *reg_vecp;
	int reg_st_num;
	MB_OUT_SECTION *reg_stp;
	float Pos[4];
} MB_OUT_HEAD;

extern unsigned char RD_REG_HEAD type_info node[8];
extern unsigned char RD_REG_ST_DAT type_info node[8];

int RegDatSetTopAddr(int buff_id, void *addr);
short unsigned int* RegDatGetStPtr(int buff_id, int reg_id);
unsigned int RegDatGetStLabel(int buff_id, int reg_id);
MB_OUT_RECT* RegDatGetVecPtr(int buff_id, int type);
int RegDatGetVecNum(int buff_id, int type);
MB_OUT_RECT* RegDatGetVecPtrStart(int buff_id);
int RegDatGetVecNumAll(int buff_id);
MB_OUT_RECT* RegDatGetNextVecPtr(MB_OUT_RECT *mst);
int RegDatGetStID4Label(int buff_id, int label);
short unsigned int* RegDatGetStPtr4Label(int buff_id, int label);
short unsigned int* RegDatGetStPtr4Label2(int label);
short unsigned int* RegDatGetStPtr4Label3(int label, int type);
int RegDatVecFind4Label(int buff_id, int label);
MB_OUT_RECT* RegDatVecNextFind(int buff_id);
int RegDatBuffID4Label(int labelID);
void RegDatDeleteBuffList(int id);
void RegDatDeleteAllBuffList();
void RegDatSetOffset(int buff_id, float x, float y, float z);
int RegDatRegist(char *mst);
void RegDatInit();
void RegDatDeleteBuff(int buff_id);
int RegDatCheckBuff(int buff_id);
MB_OUT_HEAD* RegDatGetHead(int buff_id);
int RegDatGetBuffIDG(int kai, float *vPos);
void* RegDatGetStat(int kai, float *vPos, int type);
void* RegDatGetRectAndStat(MB_OUT_RECT **ppRect, void *pRectStat, int kai, float *vPos, int type);
void* RegDatGetRectAndStat2(MB_OUT_RECT **ppRect, void *pStat, int buff_id, float *vPos, int type);
int RegDatCheckSameRectStat(void *pStat, int kai, float *vPos, int type);
int RegDatGetBuffID(float *vPos);
int* RegDatGetHitList();
int RegDatGetHitNum();
void RegDatAddNoRegistList(int id);
void RegDatResetNoRegistList();
void RegDatGetStPtrStart(int buff_id, int type);
MB_OUT_SECTION* RegDatGetNextStPtr(int buff_id);
RD_REG_HEAD* RD_REG_HEAD * _fixed_array_verifyrange<RD_REG_HEAD>(size_t v, size_t _max);
RD_REG_ST_DAT* RD_REG_ST_DAT * _fixed_array_verifyrange<RD_REG_ST_DAT>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& RD_REG_HEAD type_info function();
type_info& RD_REG_ST_DAT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_REGDAT_H
