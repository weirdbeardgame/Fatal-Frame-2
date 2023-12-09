// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_ACCESSORY_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_ACCESSORY_H

typedef float sceVu0FMATRIX[4][4];

struct SGDCOORDINATE {
	float matCoord[4][4];
	float matLocalWorld[4][4];
	float _matWork[4][4];
	float vRot[4];
	SGDCOORDINATE *pParent;
	unsigned int bCalc;
	unsigned int edge_check;
	int bInViewvolume;
};

struct C_PARTICLE {
	sceVu0FVECTOR p;
	sceVu0FVECTOR old;
	sceVu0FVECTOR v;
	sceVu0FVECTOR org;
	sceVu0FVECTOR c_old;
	int s_flg;
};

struct SPRING {
	u_short p1;
	u_short p2;
	float ldef;
};

struct ROPE_CTRL {
	C_PARTICLE *particle;
	SPRING *spring;
	ROPE_DAT *rdat;
	sceVu0FVECTOR dir;
	sceVu0FVECTOR top;
	float pow;
	u_int furn_id;
	u_char p_num;
	u_char spring_num;
	u_char stat;
	u_char move_mode;
};

struct WIND_CTRL {
	sceVu0FVECTOR dir;
	float pow;
	int cycle;
	int strong;
	int weak;
	int sta;
};

struct CLOTH_CTRL {
	C_PARTICLE *particle;
	SPRING *spring;
	CLOTH_DAT *cdat;
	sceVu0FVECTOR old_bone_pos;
	sceVu0FMATRIX old_w2l;
	u_short p_num;
	u_short spring_num;
	u_short w;
	u_short h;
	u_char reset_flg;
	u_char pad;
	WIND_CTRL w_ctrl;
};

struct COLLISION_CTRL {
	sceVu0FMATRIX old_w2c[5];
};

struct ACS_ALPHA {
	short int alpha;
	short int stat;
};

struct C_ACS_CTRL {
	CLOTH_CTRL *c_cloth_ctrl;
	u_int *addr;
	int mdl_no;
	int key;
};

struct ENE_COLLISION {
	ANI_CTRL *ani_ctrl;
	u_short mdl_no;
};

extern fixed_array<fixed_array<SPRING, 20>,9> rope_spring;
extern fixed_array<fixed_array<C_PARTICLE, 20>,10> rope_particle;
extern unsigned char C_PARTICLE type_info node[8];
extern unsigned char fixed_array<C_PARTICLE, 20> type_info node[12];
extern unsigned char SPRING type_info node[8];
extern unsigned char fixed_array<SPRING, 20> type_info node[12];
extern unsigned char float [3][3] type_info node[8];
extern unsigned char ENE_COLLISION type_info node[8];
extern unsigned char C_ACS_CTRL type_info node[8];
extern unsigned char fixed_array<C_ACS_CTRL, 15> type_info node[12];
extern unsigned char COLLISION_DAT type_info node[8];
extern unsigned char TUBE type_info node[8];
extern unsigned char fixed_array_base<C_PARTICLE, 20, C_PARTICLE [19]> type_info node[8];
extern unsigned char fixed_array_base<SPRING, 20, SPRING [19]> type_info node[8];
extern unsigned char fixed_array_base<C_ACS_CTRL, 15, C_ACS_CTRL [14]> type_info node[8];

void InitPlyrAcsAlpha();
void DispPlyrAcs(u_int *base_p, u_int *mdl_p, ACS_ALPHA *acs_ctrl, u_int bone_id);
void PlyrAcsAlphaCtrl();
void acsInitRopeWork();
void acsRopeSetWork(u_int furn_id, u_char acs_no);
void acsRopeReleaseWork(u_int furn_id);
int acsRopeGetFurnID(u_int id);
float*[4] acsGetRopePos(u_int furn_id);
void acsInitRopeSub(u_int work_id, u_int furn_id, u_int type);
void acsRopeMoveRequest(u_int furn_id, u_char move_mode, float pow);
void acsRopeMoveStop(u_int furn_id);
u_char acsCheckRopeMoveExec(u_int furn_id);
ENE_COLLISION* acsGetRopeCollisionBuf();
int acsSetRopeCollision(ANI_CTRL *ani_ctrl, u_short mdl_no);
int acsDelRopeCollision(ANI_CTRL *ani_ctrl);
int acsRopeMakeCollision(COLLISION_DAT *collision, float *mtx[4], TUBE *tube, float scale);
void acsCalcCoordinate(SGDCOORDINATE *cp, ROPE_CTRL *rope);
void acsSetMoveDir(float *dir);
void acsRopeMoveCtrl(ROPE_CTRL *rope);
void acsRopeMoveWind(ROPE_CTRL *rope, char dir_cng);
void acsRopeMoveVib(ROPE_CTRL *rope);
void acsMoveRope(u_int furn_id, SGDCOORDINATE *furn_cp);
void acsMoveRopeEx(u_int furn_id, HeaderSection *sgd_p, float *mat[4]);
u_int* acsInitCloth(CLOTH_CTRL *cloth_top, COLLISION_CTRL *collision_ctrl, u_int *mpk_p, u_int *top_addr, int mdl_no, int chodo_flg);
u_int acsGetClothBufSize(u_int *mpk_p, int mdl_no);
void acsClothCtrl(ANI_CTRL *ani_ctrl, u_int *mpk_p, u_int mdl_no, u_char scene_flg);
void acsMoveCloth(float *vtx[4], CLOTH_CTRL *cloth, SGDCOORDINATE *cp, COLLISION_CTRL *collision_ctrl, COLLISION_DAT *collision, float scale, float collision_scale, u_char hip_id);
int acsResetCloth(ANI_CTRL *ani_ctrl);
int acsChodoInitCloth();
u_int* acsChodoSetCloth(u_int *mpk_p, int mdl_no, int id, u_int *top_addr, int key);
int acsChodoClothCtrl();
int acsChodoSetWind(int key, float rot, float pow, int cycle);
int acsChodoResetWind(int key);
int acsChodoDel(int id);
ENE_COLLISION* acsGetEneCollisionBuf();
int acsSetEneCollision(ANI_CTRL *ani_ctrl, u_short mdl_no);
int acsDelEneCollision(ANI_CTRL *ani_ctrl);
int acsChodoMakeCollision(COLLISION_DAT *collision, SGDCOORDINATE *cp, TUBE *tube, float scale);
u_char acsCheckCollisionSphere(SPHERE *sphere, float *current, float *relative_v, float Ke);
u_char acsCheckCollisionTube(TUBE *tube, float *current, float *relative_v, float *old_c, float Ke);
u_char acsCheckCollisionPlane(CPLANE *plane, float *current, float *relative_v, float Ke, int ofs);
void SetLWS2(SGDCOORDINATE *cp);
C_PARTICLE* C_PARTICLE * _fixed_array_verifyrange<C_PARTICLE>(size_t v, size_t _max);
fixed_array<C_PARTICLE,20>* fixed_array<C_PARTICLE, 20> * _fixed_array_verifyrange<fixed_array<C_PARTICLE, 20> >(size_t v, size_t _max);
SPRING* SPRING * _fixed_array_verifyrange<SPRING>(size_t v, size_t _max);
fixed_array<SPRING,20>* fixed_array<SPRING, 20> * _fixed_array_verifyrange<fixed_array<SPRING, 20> >(size_t v, size_t _max);
float*[4][4] float [3][3] * _fixed_array_verifyrange<float [3][3]>(size_t v, size_t _max);
ENE_COLLISION* ENE_COLLISION * _fixed_array_verifyrange<ENE_COLLISION>(size_t v, size_t _max);
C_ACS_CTRL* C_ACS_CTRL * _fixed_array_verifyrange<C_ACS_CTRL>(size_t v, size_t _max);
fixed_array<C_ACS_CTRL,15>* fixed_array<C_ACS_CTRL, 15> * _fixed_array_verifyrange<fixed_array<C_ACS_CTRL, 15> >(size_t v, size_t _max);
COLLISION_DAT* COLLISION_DAT * _fixed_array_verifyrange<COLLISION_DAT>(size_t v, size_t _max);
TUBE* TUBE * _fixed_array_verifyrange<TUBE>(size_t v, size_t _max);
type_info& C_PARTICLE type_info function();
type_info& fixed_array<C_PARTICLE, 20> type_info function();
type_info& SPRING type_info function();
type_info& fixed_array<SPRING, 20> type_info function();
type_info& float [3][3] type_info function();
type_info& ENE_COLLISION type_info function();
type_info& C_ACS_CTRL type_info function();
type_info& fixed_array<C_ACS_CTRL, 15> type_info function();
type_info& COLLISION_DAT type_info function();
type_info& TUBE type_info function();
type_info& fixed_array_base<C_PARTICLE, 20, C_PARTICLE [19]> type_info function();
type_info& fixed_array_base<SPRING, 20, SPRING [19]> type_info function();
type_info& fixed_array_base<C_ACS_CTRL, 15, C_ACS_CTRL [14]> type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_MOTION_ACCESSORY_H
