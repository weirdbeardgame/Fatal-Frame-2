// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MORPH_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MORPH_H

struct PHEAD {
	u_int HeaderSections;
	u_int UniqHeaderSize;
	float *pUniqVertex[4];
	float *pUniqNormal[4];
	u_int *pUniqList;
	u_int CommonHeaderSize;
	float *pCommonVertex[4];
	float *pCommonNormal[4];
	u_int *pCommonList;
	u_int WeightedHeaderSize;
	float *pWeightedVertex[4];
	float *pWeightedNormal[4];
	u_int *pWeightedList;
};

typedef struct {
	int obj1_id;
	int obj2_id;
} MORPH_DAT;

extern MORPH_DAT ch017_morph[2];
extern MORPH_DAT ch020_morph[2];
extern MORPH_DAT ch030_morph[2];
extern MORPH_DAT ch041_morph[14];
extern MORPH_DAT *morph_dat[78];
extern unsigned char MORPH_CTRL type_info node[8];

int MorphInit();
int MorphSetRate(ANI_CTRL *ani_ctrl, float rate);
float MorphGetRate(ANI_CTRL *ani_ctrl);
int IsMorphEnable(ANI_CTRL *ani_ctrl);
float MorphGetAlpha2(float alpha);
float MorphGetAlpha1(float alpha);
int MorphCheckId1(int id);
int MorphCheckId2(int id);
int MorphSetCtrl(void *ani_hndl, int mdl_no);
int MorphDell(void *ani_hndl);
int MorphRun(ANI_CTRL *ani_ctrl, u_int *mpk_p);
int MorphReset(ANI_CTRL *ani_ctrl, u_int *mpk_p);
MORPH_CTRL* MORPH_CTRL * _fixed_array_verifyrange<MORPH_CTRL>(size_t v, size_t _max);
type_info& MORPH_CTRL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MORPH_H
