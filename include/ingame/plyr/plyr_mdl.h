#ifndef PLYR_MDL_H
#define PLYR_MDL_H
#include "sgd_types.h"
#include "man_data.h"

struct GRA3DEMULATIONLIGHTDATACREATIONDATA
{ // 0x40
    /* 0x00 */ float vStaticDirLightColor[4];
    /* 0x10 */ float fAngleScale;
    /* 0x14 */ float fDiffuseScale;
    /* 0x18 */ float fMaplightScale;
    /* 0x1c */ int bEnableSelfreflection;
    /* 0x20 */ int bEmulateSelfreflection;
    /* 0x24 */ int bEnableFlashlight;
    /* 0x28 */ int bEmulateFlashlight;
    /* 0x2c */ int bEnableFlashlight2;
    /* 0x30 */ int bEmulateFlashlight2;
    /* 0x34 */ int bEnableStaticDirLight;
};

struct PLYR_PLYR_DATA : MAN_DATA
{ // 0x3c
    /* 0x30 */ int plyr_cam_mdl_p;
    /* 0x34 */ int plyr_light_mdl_p;
    /* 0x38 */ u_char plyr_cam_alpha;
    /* 0x39 */ u_char plyr_light_alpha;

private:
    /* 0x3a:0 */ unsigned int plyr_req_other_mdl : 1;
    /* 0x3a:1 */ unsigned int plyr_init_ok : 1;

public:
    PLYR_PLYR_DATA &operator=(const PLYR_PLYR_DATA &rval);
    PLYR_PLYR_DATA();
    ~PLYR_PLYR_DATA();
    /* vtable[1] */ virtual int Setup();
    /* vtable[2] */ virtual int IsReady();
    void Release();
    void Initialize();

private:
    void Init();
};

extern PLYR_PLYR_DATA plyr_data;

int IsReadyPlyrMdl();
void DrawGirl(int in_mirror);

GRA3DEMULATIONLIGHTDATACREATIONDATA *_GetEmulationLightdataCreationDataRef()

#endif // PLYR_MDL_H
