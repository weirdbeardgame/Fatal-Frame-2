#ifndef PLAYER_H
#define PLAYER_H
#include "sgd_types.h"

enum _SHUTTER_CHANCE_STATE
{
    SHUTTER_CHANCE_NONE = 0,
    SHUTTER_CHANCE_NORMAL = 1,
    SHUTTER_CHANCE_SP = 2,
    SHUTTER_CHANCE_STATE_MAX = 3,
    SHUTTER_CHANCE_FORCE_DWORD = -1
};

typedef _SHUTTER_CHANCE_STATE SHUTTER_CHANCE_STATE;

struct MOVE_BOX
{ // 0xa0
    /* 0x00 */ float mloop;
    /* 0x10 */ sceVu0FVECTOR pos;
    /* 0x20 */ sceVu0FVECTOR bpos;
    /* 0x30 */ sceVu0FVECTOR mv;
    /* 0x40 */ sceVu0FVECTOR bmv;
    /* 0x50 */ sceVu0FVECTOR rot;
    /* 0x60 */ sceVu0FVECTOR brot;
    /* 0x70 */ sceVu0FVECTOR spd;
    /* 0x80 */ sceVu0FVECTOR rspd;
    /* 0x90 */ sceVu0FVECTOR trot;
};

struct STATUS_DAT
{ // 0x40
    /* 0x00 */ ulong sta;
    /* 0x08 */ ulong sta_old;
    /* 0x10 */ ulong mvsta;
    /* 0x18 */ u_short hp;
    /* 0x1a */ u_short sp;
    /* 0x1c */ u_short hpmax;
    /* 0x1e */ u_short spmax;
    /* 0x20 */ u_short hp_recover_time;
    /* 0x22 */ u_short sp_recover_time;
    /* 0x24 */ u_short sp_down_fl;
    /* 0x26 */ u_short dmg;
    /* 0x28 */ u_short rhspdmg;
    /* 0x2a */ u_short rhpdmg;
    /* 0x2c */ u_short rspdmg;
    /* 0x2e */ u_short dmg_old;
    /* 0x30 */ u_short dmg_type;
    /* 0x32 */ u_char dmg_cam_flag;
    /* 0x34 */ u_short dwalk_tm;
    /* 0x36 */ u_short cond;
    /* 0x38 */ u_short cond_old;
    /* 0x3a */ u_short cond_tm;
    /* 0x3c */ u_short invisible_timer;
};

typedef struct
{ // 0xc
    /* 0x0 */ u_char area_no;
    /* 0x1 */ u_char area_old;
    /* 0x2 */ u_char room_id;
    /* 0x3 */ u_char room_old;
    /* 0x4 */ u_char camera_no;
    /* 0x5 */ u_char camera_no_old;
    /* 0x8 */ float hight;
} PROOM_INFO;

struct PLCMN_WRK
{ // 0x110
    /* 0x000 */ MOVE_BOX mbox;
    /* 0x0a0 */ STATUS_DAT st;
    /* 0x0e0 */ PROOM_INFO pr_info;
    /* 0x0ec */ u_char mode;
    /* 0x0ed */ u_char atk_eneno;
    /* 0x0ee */ u_char atk_pos;
    /* 0x0ef */ u_char atk_rot;
    /* 0x0f0 */ float near_ene_dist;
    /* 0x0f4 */ float near_ene_dist_old;
    /* 0x0f8 */ u_char near_ene_no;
    /* 0x0fa */ short int floor;
    /* 0x100 */ float headpos[4];
};

// TODO: Move to proper Header

struct _SND_3D_SET
{ // 0xc
    /* 0x0 */ sceVu0FVECTOR *pos;
    /* 0x4 */ sceVu0FVECTOR *vel;
    /* 0x8 */ sceVu0FVECTOR *dir;
};

typedef _SND_3D_SET SND_3D_SET;

struct CEneTracer
{ // 0x4
private:
    /* 0x0 */ // CWaitVariable<short int> mWaitCnt;
    /* 0x2 */ // CWrkVariable<char, 0, 10> mTraceEne;

public:
    CEneTracer &operator=(const CEneTracer &rval);
    CEneTracer();
    ~CEneTracer();
    int Init();
    void Work();
    void Req();
};

struct PLYR_WRK
{ // 0x380
    /* 0x000 */ PLCMN_WRK cmn_wrk;
    /* 0x110 */ u_char modedead;
    /* 0x111 */ u_char anime_no;
    /* 0x112 */ u_char charge_num;
    /* 0x114 */ float charge_rate;
    /* 0x118 */ float charge_deg;
    /* 0x11c */ float frot_x;
    /* 0x120 */ short int fp[2];
    /* 0x124 */ u_short no_photo_tm;
    /* 0x126 */ u_short shutter_tm;
    /* 0x128 */ u_short vib_time_sm;
    /* 0x12a */ u_short vib_time_bg;
    /* 0x130 */ float spd[4];
    /* 0x140 */ float old_spd[4];
    /* 0x150 */ float fhp[5][4];
    /* 0x1a0 */ float prot;
    /* 0x1a4 */ u_short fene_tm;
    /* 0x1a6 */ u_short bonus_sta;
    /* 0x1a8 */ u_short avoid_tm;
    /* 0x1aa */ u_short avoid_flg;
    /* 0x1ac */ u_short avoid_st;
    /* 0x1ae */ u_short avoid_sp;
    /* 0x1b0 */ u_char door_flg;
    /* 0x1b2 */ u_short door_no;
    /* 0x1c0 */ float bwp[4];
    /* 0x1d0 */ float spot_pos[4];
    /* 0x1e0 */ float spot_rot[4];
    /* 0x1f0 */ G3DLIGHT fl;
    /* 0x260 */ G3DLIGHT fl2;
    /* 0x2d0 */ G3DLIGHT reflectionlight;
    /* 0x340 */ float maplight_scale;
    /* 0x344 */ SND_3D_SET s3d;
    /* 0x350 */ float fl_pow;
    /* 0x354 */ int finder_tm;
    /* 0x358 */ char finder_lock_cnt;
    /* 0x359 */ char move_lock_cnt;
    /* 0x35a */ char action_lock_cnt;
    /* 0x35b */ char shutter_lock_cnt;
    /* 0x35c */ char run_lock_cnt;
    /* 0x35e */ CEneTracer ene_tracer;
    /* 0x364 */ int ane_curse_lock;
    /* 0x368 */ float hit_rad;
    /* 0x36c */ SHUTTER_CHANCE_STATE preShutterChanceState;
    /* 0x370 */ SHUTTER_CHANCE_STATE nowShutterChanceState;
};

extern PLYR_WRK plyr_wrk;

#endif // PLAYER_H
