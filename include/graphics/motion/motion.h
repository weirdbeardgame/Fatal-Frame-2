#ifndef MOTION_H
#define MOTION_H

#include "sgd_types.h"

typedef u_short ANI_CODE;

struct C_PARTICLE
{ // 0x60
    /* 0x00 */ sceVu0FVECTOR p;
    /* 0x10 */ sceVu0FVECTOR old;
    /* 0x20 */ sceVu0FVECTOR v;
    /* 0x30 */ sceVu0FVECTOR org;
    /* 0x40 */ sceVu0FVECTOR c_old;
    /* 0x50 */ int s_flg;
};

struct SPRING
{ // 0x8
    /* 0x0 */ u_short p1;
    /* 0x2 */ u_short p2;
    /* 0x4 */ float ldef;
};

struct ROPE_DAT
{ // 0x14
    /* 0x00 */ float *vtx;
    /* 0x04 */ float gravity;
    /* 0x08 */ float Kd;
    /* 0x0c */ float Ke;
    /* 0x10 */ u_int fixed_num;
};

struct ROPE_CTRL
{ // 0x40
    /* 0x00 */ C_PARTICLE *particle;
    /* 0x04 */ SPRING *spring;
    /* 0x08 */ ROPE_DAT *rdat;
    /* 0x10 */ sceVu0FVECTOR dir;
    /* 0x20 */ sceVu0FVECTOR top;
    /* 0x30 */ float pow;
    /* 0x34 */ u_int furn_id;
    /* 0x38 */ u_char p_num;
    /* 0x39 */ u_char spring_num;
    /* 0x3a */ u_char stat;
    /* 0x3b */ u_char move_mode;
};

struct WIND_CTRL
{ // 0x30
    /* 0x00 */ sceVu0FVECTOR dir;
    /* 0x10 */ float pow;
    /* 0x14 */ int cycle;
    /* 0x18 */ int strong;
    /* 0x1c */ int weak;
    /* 0x20 */ int sta;
};

struct CLOTH
{ // 0x10
    /* 0x0 */ float gravity;
    /* 0x4 */ float Kd;
    /* 0x8 */ float Ke;
    /* 0xc */ u_char w;
    /* 0xd */ u_char h;
    /* 0xe */ u_char type;
};

struct CLOTH_DAT
{ // 0x10
    /* 0x0 */ CLOTH *dat;
    /* 0x4 */ sceVu0FVECTOR *rist_vtx;
    /* 0x8 */ u_char bone_id;
    /* 0x9 */ u_char bone_id2;
    /* 0xa */ u_char sgd_id;
    /* 0xb */ u_char flg;
    /* 0xc */ int b_point;
};

struct CLOTH_CTRL
{ // 0xa0
    /* 0x00 */ C_PARTICLE *particle;
    /* 0x04 */ SPRING *spring;
    /* 0x08 */ CLOTH_DAT *cdat;
    /* 0x10 */ sceVu0FVECTOR old_bone_pos;
    /* 0x20 */ sceVu0FMATRIX old_w2l;
    /* 0x60 */ u_short p_num;
    /* 0x62 */ u_short spring_num;
    /* 0x64 */ u_short w;
    /* 0x66 */ u_short h;
    /* 0x68 */ u_char reset_flg;
    /* 0x69 */ u_char pad;
    /* 0x70 */ WIND_CTRL w_ctrl;
};

struct COLLISION_CTRL
{ // 0x140
    /* 0x000 */ sceVu0FMATRIX old_w2c[5];
};

struct ACS_ALPHA
{ // 0x4
    /* 0x0 */ short int alpha;
    /* 0x2 */ short int stat;
};

struct CMOVE_CTRL
{ // 0x14
    /* 0x00 */ u_int type;
    /* 0x04 */ u_int furn_id;
    /* 0x08 */ u_int timer;
    /* 0x0c */ u_int req;
    /* 0x10 */ u_char alpha;
};

struct COLLISION_DAT
{ // 0x8
    /* 0x0 */ void *dat;
    /* 0x4 */ u_char type;
    /* 0x5 */ u_char bone_id;
};

struct FURNMDL_DAT
{ // 0x8
    /* 0x0 */ CLOTH_DAT *cdat;
    /* 0x4 */ COLLISION_DAT *collision;
};

struct C_ACS_CTRL
{ // 0x10
    /* 0x0 */ CLOTH_CTRL *c_cloth_ctrl;
    /* 0x4 */ u_int *addr;
    /* 0x8 */ int mdl_no;
    /* 0xc */ int key;
};

typedef struct
{ // 0x20
    /* 0x00 */ u_char file_id[4];
    /* 0x04 */ u_int map_flg;
    /* 0x08 */ u_int bone_num;
    /* 0x0c */ u_int trans_num;
    /* 0x10 */ u_int frame_num;
    /* 0x14 */ u_int interp_frame;
    /* 0x18 */ u_int flg;
    /* 0x1c */ u_int si_frame;
} MOT_FILE_HEADER;

typedef struct
{ // 0x2
    /* 0x0 */ u_char parent_id;
    /* 0x1 */ u_char trans_id;
} MOT_ID_TABLE;

typedef struct
{ // 0x4
    /* 0x0 */ u_int *frame_addr;
} MOT_ADDR_TABLE;

struct ANI_BUF
{ // 0x8
    /* 0x0 */ ANI_CODE code;
    /* 0x2 */ u_short cnt;
    /* 0x4 */ u_int stat;
};

struct ANI_CODE_CTRL
{ // 0x6c
    /* 0x00 */ int playnum;
    /* 0x04 */ int stat;
    /* 0x08 */ int loop_rest;
    /* 0x0c */ int timer;
    /* 0x10 */ ANI_BUF buf[10];
    /* 0x60 */ ANI_CODE *code_head;
    /* 0x64 */ ANI_CODE *code_now;
    /* 0x68 */ ANI_CODE *loop_start;
};

struct RST_DATA
{ // 0x30
    /* 0x00 */ sceVu0FVECTOR rot;
    /* 0x10 */ sceVu0FVECTOR scale;
    /* 0x20 */ sceVu0FVECTOR trans;
};

struct MOT_CTRL
{ // 0x38
    /* 0x00 */ u_int *top;
    /* 0x04 */ u_int *dat;
    /* 0x08 */ u_int play_id;
    /* 0x0c */ int cnt;
    /* 0x10 */ int all_cnt;
    /* 0x14 */ int inp_allcnt;
    /* 0x18 */ float inp_cnt;
    /* 0x1c */ float old_mot_cnt;
    /* 0x20 */ int reso;
    /* 0x24 */ int reso_cnt;
    /* 0x28 */ int next_flg;
    /* 0x2c */ int end_flg;
    /* 0x30 */ RST_DATA *rst0;
    /* 0x34 */ RST_DATA *rst1;
};

typedef struct
{ // 0x20
    /* 0x00 */ u_char file_id[4];
    /* 0x04 */ u_int map_flg;
    /* 0x08 */ u_int key_num;
    /* 0x0c */ u_int frame_num;
    /* 0x10 */ u_int parts_no;
    /* 0x14 */ u_int flg;
    /* 0x18 */ u_char w_name[8];
} MIM_FILE_HEADER;

typedef struct
{ // 0x8
    /* 0x0 */ u_int *wav_addr;
    /* 0x4 */ u_int *key_addr;
} MIM_ADDR_TABLE;

struct MIME_DAT
{ // 0x14
    /* 0x00 */ sceVu0FVECTOR *vtx;
    /* 0x04 */ sceVu0FVECTOR *pkt;
    /* 0x08 */ u_int *dat;
    /* 0x0c */ u_int vtx_num;
    /* 0x10 */ u_int p_no;
};

struct WMIM
{ // 0x30
    /* 0x00 */ u_char *name;
    /* 0x04 */ float mass;
    /* 0x08 */ float Ks;
    /* 0x0c */ float dec;
    /* 0x10 */ sceVu0FVECTOR pos;
    /* 0x20 */ sceVu0FVECTOR gravity;
};

struct WMIM_DAT
{ // 0x8
    /* 0x0 */ WMIM *dat;
    /* 0x4 */ u_char bone_id;
};

struct WMIM_CTRL
{ // 0x50
    /* 0x00 */ WMIM_DAT *wdat;
    /* 0x10 */ sceVu0FVECTOR v;
    /* 0x20 */ sceVu0FVECTOR w;
    /* 0x30 */ sceVu0FVECTOR pbak;
    /* 0x40 */ sceVu0FVECTOR old_pos;
};

typedef struct
{ // 0x8
    /* 0x0 */ u_int *addr;
    /* 0x4 */ u_char *dat;
} MIME_LOAD;

struct MIME_CTRL
{ // 0x1c
    /* 0x00 */ MIME_DAT *mdat;
    /* 0x04 */ int frame;
    /* 0x08 */ int reso;
    /* 0x0c */ u_short furn_id;
    /* 0x10 */ float cnt;
    /* 0x14 */ u_char weight_id;
    /* 0x15 */ u_char parts_id;
    /* 0x16 */ u_char loop;
    /* 0x17 */ u_char stat;
    /* 0x18 */ u_char rev;
    /* 0x19 */ u_char flg;
    /* 0x1a */ u_char pad;
};

struct NECK_CTRL_WORK
{ // 0xd0
    /* 0x00 */ sceVu0FMATRIX neck_lw;
    /* 0x40 */ sceVu0FMATRIX neck_p_lw;
    /* 0x80 */ sceVu0FMATRIX chest_lw;
    /* 0xc0 */ int flg;
};

struct ANI_CTRL
{ // 0x240
    /* 0x000 */ ANI_CODE_CTRL anm;
    /* 0x06c */ MOT_CTRL mot;
    /* 0x0b0 */ sceVu0FVECTOR pbak;
    /* 0x0c0 */ sceVu0FVECTOR rbak;
    /* 0x0d0 */ u_int *mdl_p;
    /* 0x0d4 */ u_int *pk2_p;
    /* 0x0d8 */ u_int *mpk_p;
    /* 0x0dc */ HeaderSection *base_p;
    /* 0x0e0 */ u_int *anm_p;
    /* 0x0e4 */ u_int *mtop;
    /* 0x0e8 */ u_int *mdat;
    /* 0x0ec */ u_int *tanm_p;
    /* 0x0f0 */ u_int *bwc_p;
    /* 0x0f4 */ MIME_CTRL *mim;
    /* 0x0f8 */ MIME_CTRL *bgmim;
    /* 0x0fc */ WMIM_CTRL *wmim;
    /* 0x100 */ CLOTH_CTRL *cloth_ctrl;
    /* 0x104 */ COLLISION_CTRL *collision_ctrl;
    /* 0x108 */ u_int mot_num;
    /* 0x10c */ u_int mim_num;
    /* 0x110 */ u_int bg_num;
    /* 0x114 */ u_int wmim_num;
    /* 0x118 */ u_short ftype;
    /* 0x11a */ u_short interp_flg;
    /* 0x11c */ void *pkt_p;
    /* 0x120 */ int use;
    /* 0x124 */ int mdl_no;
    /* 0x128 */ int anm_no;
    /* 0x130 */ sceVu0FVECTOR eye_rots[2];
    /* 0x150 */ sceVu0FVECTOR neck_rot;
    /* 0x160 */ sceVu0FVECTOR chest_rot;
    /* 0x170 */ NECK_CTRL_WORK neck_work;
};

#endif // MOTION_H
