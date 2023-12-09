// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_SCN_TEST_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_SCN_TEST_H

typedef struct {
	u_int type;
	float sclx;
	float scly;
	u_int alpha;
	float rate;
	float trate;
} SCN_ENE_EF_PDF;

typedef enum {
	SCN_DB_EFF_Z_DEP = 0,
	SCN_DB_EFF_MONO = 1,
	SCN_DB_EFF_SEPIA = 2,
	SCN_DB_EFF_FLG_ONLY = 2,
	SCN_DB_EFF_DITHER = 3,
	SCN_DB_EFF_BLUR_N = 4,
	SCN_DB_EFF_BLUR_B = 5,
	SCN_DB_EFF_BLUR_W = 6,
	SCN_DB_EFF_DEFORM = 7,
	SCN_DB_EFF_FOCUS = 8,
	SCN_DB_EFF_CONTRAST1 = 9,
	SCN_DB_EFF_CONTRAST2 = 10,
	SCN_DB_EFF_CONTRAST3 = 11,
	SCN_DB_EFF_NEGA = 12,
	SCN_DB_EFF_FADE_FRAME = 13,
	SCN_DB_EFF_CROSS_FADE = 14,
	SCN_DB_EFF_FADE_SCR = 15,
	SCN_DB_EFF_SHIBATA = 16,
	SCN_DB_EFF_MAX = 17
} SCN_DB_EFF_TYPE;

extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char float [3] type_info node[8];
extern unsigned char FOD_LIT_SERIAL type_info node[8];
extern unsigned char SCN_ANM_MDL type_info node[8];
extern SCN_TEST_WRK scn_test_wrk;
extern SCN_TEST_PDEFORM ScnTestPdeform[2];

void SceneTestInit();
int SceneTestMain();
void SceneTestDrawCrossLine(float *CenterPos, float LineLength, int r, int g, int b, int a);
int SceneTestIsMenuMode();
int SceneTestEffectFlgGet(SCN_DB_EFF_TYPE type);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
FOD_LIT_SERIAL* FOD_LIT_SERIAL * _fixed_array_verifyrange<FOD_LIT_SERIAL>(size_t v, size_t _max);
SCN_ANM_MDL* SCN_ANM_MDL * _fixed_array_verifyrange<SCN_ANM_MDL>(size_t v, size_t _max);
type_info& G3DLIGHT type_info function();
type_info& float [3] type_info function();
type_info& FOD_LIT_SERIAL type_info function();
type_info& SCN_ANM_MDL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_SCN_TEST_H
