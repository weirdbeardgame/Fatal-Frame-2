// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_H

typedef struct {
	u_short scene_no;
	u_short mdl_no;
	float aura_size;
	float aura_rate;
	u_int aura_rgba;
	SCN_ENE_EF_PDF pdf1;
	SCN_ENE_EF_PDF pdf2;
	float pdf_dist;
	float aura_pos_ajst;
	int mdl_alpha;
} SCN_ENE_EFCT;

typedef struct {
	ANI_CTRL *pMdlAnm;
	SCN_ENE_EFCT *ene_efct;
	void *efct_addr[4];
	char prefix[9];
	u_int mdl_no;
	u_int mdl_alpha;
	u_int scn_mdl_no;
	u_int *mdl_addr;
	u_int *mdl_addr_db;
	u_int *mot_addr;
	u_int *mim_addr;
	u_int *mim_buf_addr;
	u_int *pk2_addr;
	u_int disp_flg;
} SCN_ANM_MDL;

typedef struct {
	float min;
	float max;
	float near;
	float far;
	int r;
	int g;
	int b;
	int pad;
} SCENE_FOG;

struct fixed_array<SCN_ANM_MDL,8> : fixed_array_base<SCN_ANM_MDL,8,SCN_ANM_MDL[8]> {
};

struct fixed_array<SCN_ANM_MDL,14> : fixed_array_base<SCN_ANM_MDL,14,SCN_ANM_MDL[14]> {
};

struct fixed_array<int,8> : fixed_array_base<int,8,int[8]> {
};

typedef struct {
	fixed_array<SCN_ANM_MDL,8> man_mdl;
	fixed_array<SCN_ANM_MDL,14> furn_mdl;
	fixed_array<SCN_ANM_MDL,8> item_mdl;
	fixed_array<SCN_ANM_MDL,8> door_mdl;
	fixed_array<int,8> man_mdl_tex;
	FOD_CTRL fod_ctrl;
	SCENE_FOG fog;
	FOD_CAMERA_DATA CameraData;
	int man_mdl_num;
	int door_num;
	int furn_num;
	int item_num;
	u_int *scn_data_addr;
	u_int *light_rev_addr;
	u_int *effect_addr;
	u_int *pMimBuf;
	int scene_no;
	int room_no;
	int sub_room_no;
	int count_flg;
	int mirror_flg;
	int init_flg;
	float fNearZBak;
	float fFarZBak;
	int DrawAneFlg;
	int DrawImoutoFlg;
	int DoubleBufferId;
	int AreaNoBak;
	int MonotoneEnableBak;
	int *pPlayerAccessoryPk2;
	int *pSisterAccessoryPk2;
} SCENE_CTRL;

typedef struct {
	u_int *scn_file_addr;
	u_int file_num;
	u_int *ofs_top_addr;
	u_int *hdr_addr;
	u_int *cam_fod_addr;
	u_int *lit_fod_addr;
	u_int *eff_fod_addr;
	u_int *man_mot_addr;
	u_int *man_mim_addr;
	u_int *furn_mot_addr;
	u_int *door_mot_addr;
	u_int *item_mot_addr;
} SCENE_FILE;

extern fixed_array<SCENE_CTRL,2> scene_ctrl;
extern SCENE_LOAD_CTRL scene_load;
extern int scn_vib_time0;
extern int scn_vib_time1;
extern unsigned char SCENE_CTRL type_info node[8];
extern unsigned char SCN_ANM_MDL type_info node[8];
extern unsigned char FOD_LIT_SERIAL type_info node[8];
extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char float [3] type_info node[8];
extern unsigned char AREA_PREFIX_TO_NO type_info node[8];
extern SCENE_FILE scene_file;
extern G3DLIGHT PlayerLightBackup;

int SceneAllLoad(int scene_no, u_int *load_addr);
int SceneDataLoadWait();
void SceneInitializeIngame();
void SceneInitAfterModelLoad(int MimInit);
void SceneDraw(int scene_no);
int SceneIsEnd();
void SceneEndProc();
void SceneReleaseEffect(SCENE_CTRL *sc);
int GetFileNoFromSceneNo(int scene_no);
int SceneDecisionMovie(int scene_no);
u_int GetPrefixNo(char *pfx);
int PrefixToNo(char *pPrefix, int num);
void SceneSetSquare(int pri, float x, float y, float w, float h, u_char r, u_char g, u_char b, u_char a);
void SceneCheckModelEntry(SCENE_CTRL *sc);
void InitSceneWork();
int SceneRoomNoGet();
int SceneSubRoomNoGet();
void SceneCountFlgSet(int flg);
int SceneIsPlay();
SCENE_CTRL* SceneCtrlGet(int buf_no);
void SceneFodSetNowFrame(int scene_id, int frame);
void SceneFodSetNowRezo(int scene_id, int reso);
void SceneFodSetFrame(int scene_id, int frame);
FOD_LIGHT* SceneFodLightPtrGet(int scene_id);
void SceneGetModelPDeformPos(float *Position, int ModelId, float Dist);
int SceneManModelNoChange(int ModelNo);
void SceneChangeLightParameter(int LightType, int LightNo, int ModelType, int ModelId, float r, float g, float b, float Power, float Cone);
void SceneChangeHandSpotLightParameter(float r, float g, float b, float Power, float Cone);
ANI_CTRL* SceneGetAniCtrl(int ModelId);
int SceneEffectDataFileNoGet(int scene_no);
void SceneManModelLegPositionGet(float *LegPos, int ModelId);
void SceneManModelHipPositionGet(float *HipPos, int ModelId);
SCENE_CTRL* SCENE_CTRL * _fixed_array_verifyrange<SCENE_CTRL>(size_t v, size_t _max);
SCN_ANM_MDL* SCN_ANM_MDL * _fixed_array_verifyrange<SCN_ANM_MDL>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
FOD_LIT_SERIAL* FOD_LIT_SERIAL * _fixed_array_verifyrange<FOD_LIT_SERIAL>(size_t v, size_t _max);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
AREA_PREFIX_TO_NO* AREA_PREFIX_TO_NO * _fixed_array_verifyrange<AREA_PREFIX_TO_NO>(size_t v, size_t _max);
type_info& SCENE_CTRL type_info function();
type_info& SCN_ANM_MDL type_info function();
type_info& FOD_LIT_SERIAL type_info function();
type_info& G3DLIGHT type_info function();
type_info& float [3] type_info function();
type_info& AREA_PREFIX_TO_NO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_H
