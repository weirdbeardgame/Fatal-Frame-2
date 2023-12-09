// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_FOD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_FOD_H

struct fixed_array<unsigned char,8> : fixed_array_base<unsigned char,8,unsigned char[8]> {
};

typedef struct {
	u_int frame;
	u_int size;
	fixed_array<unsigned char,8> anm;
} FOD_CAM_FRAME;

typedef struct {
	float vPosition[4];
	float vTarget[4];
	float fRoll;
	float fFov;
	float fNearZ;
	float fFarZ;
} FOD_CAMERA_DATA;

typedef struct {
	u_int frame;
	u_int size;
	u_int pad[2];
} FOD_LIT_FRAME;

typedef struct {
	u_char light_no;
	u_char light_type;
	u_char anm_flg;
	char pad;
	char light_name[28];
} FOD_LIT_SERIAL;

struct fixed_array<FOD_LIT_SERIAL,36> : fixed_array_base<FOD_LIT_SERIAL,36,FOD_LIT_SERIAL[36]> {
};

struct fixed_array<G3DLIGHT,36> : fixed_array_base<G3DLIGHT,36,G3DLIGHT[36]> {
};

struct fixed_array<float[4],6> : fixed_array_base<float[4],6,float[6][4]> {
};

typedef struct {
	fixed_array<FOD_LIT_SERIAL,36> lit_serial;
	fixed_array<G3DLIGHT,36> all_lit;
	fixed_array<float[4],6> amb;
	u_int *lit_top;
	u_int ilit_num;
	u_int slit_num;
	u_int plit_num;
	u_int all_lit_num;
	int hand_spot_no;
} FOD_LIGHT;

typedef struct {
	u_int frame_no;
	u_int size;
	u_char zdepth;
	u_char mono;
	u_char sepia;
	u_char color_change;
	u_int pad;
} FOD_EFF_FRAME;

typedef union {
	FOD_EF_DITHER dither;
	FOD_EF_BLUR blur;
	FOD_EF_DEFORM deform;
	FOD_EF_FOCUS focus;
	FOD_EF_CONTRAST contrast;
	FOD_EF_NEGA nega;
	FOD_EF_F_FRAME f_frame;
	FOD_EF_LENZ_F lenz_f;
	FOD_EF_CROSS_F cross_f;
	FOD_EF_P_DEFORM1 pdf1;
	FOD_EF_P_DEFORM2 pdf2;
	FOD_EF_P_DEFORM3 pdf3;
	FOD_EF_FADE_SCR fade_scr;
	FOD_EF_FADE_MDL fade_mdl;
	FOD_EF_FIRE fire;
	FOD_EF_ITEM item;
	FOD_EF_AMULET amulet;
	FOD_EF_ENEMY enemy;
	FOD_EF_VIBRATE vibrate;
	u_char unit[16];
} FOD_EFF_DATA;

typedef struct {
	FOD_EFF_DATA *fix[12];
	float lenz_pos[4];
	float lenz_rot[4];
	float pdf_pos[4];
	float pdf_spd;
	float pdf_rate;
	float pdf_trate;
	void *pdf_p;
	u_int fix_eff_num;
	u_int fade_mdl_cnt;
	u_int fire_num;
	u_int mono_flg;
} FOD_EFF_PARAM;

typedef struct {
	u_int file_id;
	float version;
	u_int reso;
	u_int frame;
} FOD_FILE_HDR;

typedef struct {
	FOD_LIGHT fod_light;
	FOD_FILE_HDR *cam_file_hdr;
	FOD_CAM_FRAME *cam_frame_top;
	FOD_CAM_FRAME *cam_frame;
	FOD_CAM_FRAME *cam_frame_next;
	FOD_FILE_HDR *lit_file_hdr;
	FOD_LIT_FRAME *lit_frame_top;
	FOD_LIT_FRAME *lit_frame;
	FOD_LIT_FRAME *lit_frame_next;
	FOD_FILE_HDR *eff_file_hdr;
	FOD_EFF_FRAME *eff_frame_top;
	FOD_EFF_FRAME *eff_frame;
	u_int now_frame;
	u_int frame_max;
	u_int now_reso;
	u_char resolution;
	u_char end_flg;
	float float_now_frame;
	int cut_timing_index;
} FOD_CTRL;

extern GRA3DLIGHTDATA FodLight;
extern unsigned char FOD_LIT_SERIAL type_info node[8];
extern unsigned char float [3] type_info node[8];
extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];
extern float fod_cmn_mtx[4][4];
extern FOD_EFF_PARAM eff_param;

void FodInit(FOD_CTRL *fc, u_int *tcp, u_int *tlp, u_int *tep, float *offset);
int FodNextFrame(FOD_CTRL *fc, int SceneNo);
void FodSetFrame(FOD_CTRL *fc, u_int frame);
void FodSetMyLight(FOD_LIGHT *fl, char *pfx, float *eye);
void FodChangeFodLightToGra3dLight(GRA3DLIGHTDATA *pGra3dLight, FOD_LIGHT *fl, char *pfx, float *eye);
void FodSetSpotLights(G3DLIGHT *sl, u_int num);
void FodGetToSgLight(FOD_LIGHT *pFodLignt, FOD_LIT_FRAME *pFodLitFrame, float *offset);
void FodGetDropSpotPos(FOD_LIGHT *fl, char *pfx, float *lp, float *li);
void FodGetFirstCam(FOD_CAMERA_DATA *pFodCam, FOD_CTRL *pFodCtrl, float *offset);
void FodGetCamData(FOD_CAMERA_DATA *pFodCam, FOD_CAM_FRAME *pFodCamFrame, float *offset);
GRA3DLIGHTDATA* FodGetGra3DLight();
FOD_LIT_SERIAL* FOD_LIT_SERIAL * _fixed_array_verifyrange<FOD_LIT_SERIAL>(size_t v, size_t _max);
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);
type_info& FOD_LIT_SERIAL type_info function();
type_info& float [3] type_info function();
type_info& G3DLIGHT type_info function();
type_info& GRA3DLIGHTSTATUS type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_FOD_H
