// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MOTION_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MOTION_H

typedef unsigned int u_int;

struct CMOVE_CTRL {
	u_int type;
	u_int furn_id;
	u_int timer;
	u_int req;
	u_char alpha;
};

struct ANI_CODE_CTRL {
	int playnum;
	int stat;
	int loop_rest;
	int timer;
	ANI_BUF buf[10];
	ANI_CODE *code_head;
	ANI_CODE *code_now;
	ANI_CODE *loop_start;
};

struct MOT_CTRL {
	u_int *top;
	u_int *dat;
	u_int play_id;
	int cnt;
	int all_cnt;
	int inp_allcnt;
	float inp_cnt;
	float old_mot_cnt;
	int reso;
	int reso_cnt;
	int next_flg;
	int end_flg;
	RST_DATA *rst0;
	RST_DATA *rst1;
};

struct NECK_CTRL_WORK {
	sceVu0FMATRIX neck_lw;
	sceVu0FMATRIX neck_p_lw;
	sceVu0FMATRIX chest_lw;
	int flg;
};

struct ANI_CTRL {
	ANI_CODE_CTRL anm;
	MOT_CTRL mot;
	sceVu0FVECTOR pbak;
	sceVu0FVECTOR rbak;
	u_int *mdl_p;
	u_int *pk2_p;
	u_int *mpk_p;
	HeaderSection *base_p;
	u_int *anm_p;
	u_int *mtop;
	u_int *mdat;
	u_int *tanm_p;
	u_int *bwc_p;
	MIME_CTRL *mim;
	MIME_CTRL *bgmim;
	WMIM_CTRL *wmim;
	CLOTH_CTRL *cloth_ctrl;
	COLLISION_CTRL *collision_ctrl;
	u_int mot_num;
	u_int mim_num;
	u_int bg_num;
	u_int wmim_num;
	u_short ftype;
	u_short interp_flg;
	void *pkt_p;
	int use;
	int mdl_no;
	int anm_no;
	sceVu0FVECTOR eye_rots[2];
	sceVu0FVECTOR neck_rot;
	sceVu0FVECTOR chest_rot;
	NECK_CTRL_WORK neck_work;
};

typedef struct {
	u_int *mdl_p;
	u_int flg;
	u_int mdl_no;
	int offset;
} ENE_VRAM_CTRL;

typedef struct {
	u_char msn_no;
	u_char step;
} MSN_PLYR_INIT;

extern unsigned char float [3][3] type_info node[8];
extern unsigned char RST_DATA type_info node[8];
extern MIME_CTRL mim_chodo[20];
extern u_char mim_chodo_se[20];
extern MIME_DAT mim_cdat[2][20];
extern ANI_CTRL ani_mdl[50];
extern ANI_MDL_CTRL ani_mdl_ctrl[50];
extern ACS_ALPHA plyracs_ctrl[2];
extern ROPE_CTRL rope_ctrl[20];
extern CMOVE_CTRL cmove_ctrl[10];
extern ENE_VRAM_CTRL ene_vram_ctrl[4];
extern ENE_VRAM_CTRL ene_vram_bak[4];
extern MSN_PLYR_INIT plyr_init_ctrl;
extern char plyr_mdl_no;
extern u_char mim_mepati_id;
extern u_char mim_nigiri_l_id;
extern u_char mim_nigiri_r_id;
extern float now_frot_x;

void motInitANI_CTRL();
void motFreeANI_CTRL(ANI_CTRL *ani_ctrl);
ANI_CTRL* motGetANI_CTRL();
void motReleaseOneAnm(void *ani_hndl);
void motResetMdl(int mdl_no);
void* motInitOneEnemyAnm(u_int *anm_p, u_int *mdl_p, u_int mdl_no, u_int anm_no);
u_int* motInitAniCtrlMalloc(ANI_CTRL *pAniCtrl, u_int *pAnim, u_int *pModel, u_int ModelNo, u_int AnimNo);
void motInitAniCtrlFree(ANI_CTRL *pAniCtrl);
void motInitOneEnemyMdl(u_int *mdl_p, u_int mdl_no);
ANI_CTRL* motSearchANI_CTRL(int ModelNo);
void motClearANI_CTRL(ANI_CTRL *pAniCtrl);
u_int motGetAniWorkArea(u_int *anm_p, u_int *mdl_p, u_int mdl_no);
u_int* motInitAniCtrl(ANI_CTRL *ani_ctrl, u_int *anm_p, u_int *mdl_p, u_int *pkt_p, u_int mdl_no, u_int anm_no);
u_int* motInitMotCtrlEx(MOT_CTRL *m_ctrl, u_int *mot_addr, u_int *rst_addr, int play_id);
u_int* motInitMotCtrl(MOT_CTRL *m_ctrl, u_int *mot_addr, u_int *rst_addr);
void motSetCoordCamera(ANI_CTRL *ani_ctrl);
u_char motSetCoord(ANI_CTRL *ani_ctrl, u_char work_id, u_char stop_fl);
u_int motGetNowFrame(MOT_CTRL *m_ctrl);
float motGetNowFramef(MOT_CTRL *m_ctrl);
void ReqAnm(void *ani_hndl, int flame, int anm_no, int anime_no);
void motSetAnime(ANI_CTRL *ani_ctrl, ANI_CODE **tbl, int req_no);
int motCheckInterp(ANI_CTRL *ani_ctrl);
int motGetMotReso();
void GetMdlNeckPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
u_int GetMdlBonePos(float *pos[4], void *ani_hndl);
void GetMdlWaistPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
void GetMdlHipPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
void GetMdlLegPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no);
void GetMdlShldPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr);
void GetPlyrFootPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr);
void GetPlyrAcsLightPos(float *pos, ANI_CTRL *ani_ctrl);
void GetToushuKatanaPos(float *p0, float *p1, ANI_CTRL *ani_ctrl);
int motGetGuujiTuePos(float *p0, ANI_CTRL *ani_ctrl, int flg);
int motGetKusabiPos(float *p0, ANI_CTRL *ani_ctrl, int flg);
int motGetTaimatuPos(float *p0, ANI_CTRL *ani_ctrl);
int motGetKuroreiPos(float *p0, ANI_CTRL *ani_ctrl);
int motGetBukiUpPos(float *p0, ANI_CTRL *ani_ctrl);
int motGetBukiDownPos(float *p0, ANI_CTRL *ani_ctrl);
int motGetBukiSpeAPos(float *p0, ANI_CTRL *ani_ctrl);
int motGetBukiSpeBPos(float *p0, ANI_CTRL *ani_ctrl);
int GetMdlHeightPos(void *ani_hndl, float *pos, float *rot, int mdl_no);
void motInitInterpAnime(ANI_CTRL *ani_ctrl, int flame);
void motInterpMatrix(float *interp[4], float *m0[4], float *m1[4], float rate);
void motMatrix2Quaternion(float *q, float *m[4]);
void motQuaternion2Matrix(float *m[4], float *q);
void motQuaternionSlerp(float *q, float *q1, float *q2, float rate);
void LocalRotMatrixX(float *m0[4], float *m1[4], float rx);
void LocalRotMatrixY(float *m0[4], float *m1[4], float ry);
void LocalRotMatrixZ(float *m0[4], float *m1[4], float rz);
void motInversKinematics(SGDCOORDINATE *cp, float *target, u_int *top_addr, u_char bone_id);
void motGetFrameDataRT(RST_DATA *rst, u_int *top_addr, u_int frame, u_int init_flg);
void motSetHierarchy(SGDCOORDINATE *coord, u_int *top_addr);
u_int* SceneInitAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p, u_int mdl_no);
u_int* SceneInitOtherAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p);
void motSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame);
void SceneSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame, u_int type);
void SceneSetCoordFrameF(ANI_CTRL *ani_ctrl, float frame, u_int type);
void motSetInvMatrix(float *m1[4], float *m0[4]);
u_int* motAlign128(u_int *addr);
void motPrintVector(char *str, float *vec);
void sceRotMatrixXYZ(float *m0[4], float *m1[4], float *rot);
void SetCoordinate(ANI_CTRL *ani_ctrl, float *mdl_pos, float *mdl_rot);
void SetRT2BaseMtx(ANI_CTRL *ani_ctrl, float *mdl_pos, float *mdl_rot);
void motGetLocalWorldMatrix(float *LocalWorld[4], u_int *mpk_p, int BoneId);
float*[4][4] float [3][3] * _fixed_array_verifyrange<float [3][3]>(size_t v, size_t _max);
RST_DATA* RST_DATA * _fixed_array_verifyrange<RST_DATA>(size_t v, size_t _max);
type_info& float [3][3] type_info function();
type_info& RST_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_MOTION_H
