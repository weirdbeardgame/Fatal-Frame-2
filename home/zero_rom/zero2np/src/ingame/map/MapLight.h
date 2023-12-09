// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLIGHT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLIGHT_H

struct fixed_array<G3DLIGHT,39> : fixed_array_base<G3DLIGHT,39,G3DLIGHT[39]> {
};

struct fixed_array<GRA3DLIGHTSTATUS,39> : fixed_array_base<GRA3DLIGHTSTATUS,39,GRA3DLIGHTSTATUS[39]> {
};

struct fixed_array<int,3> : fixed_array_base<int,3,int[3]> {
};

struct GRA3DLIGHTDATA {
	float vAmbient[4];
	fixed_array<G3DLIGHT,39> aLight;
	fixed_array<GRA3DLIGHTSTATUS,39> aStatus;
	fixed_array<int,3> aiNumInitial;
	int aiPad[1];
};

extern float MapLightPower;
extern float MapLightIntens[2];
extern float MapLightDiff[2];
extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];

void MapLightLed(GRA3DLIGHTDATA *light);
void MapLightPreRenderObj(void *hdl, int buff_id);
void MapLightPreRenderObj2(void *hdl, int room_no);
void MapLightSetPlayerOnly();
void MapLightSetPlayerReal();
void MapLightMakeRoomReal(GRA3DLIGHTDATA *LD, GRA3DLIGHTDATA *mst);
void MapLightSetLight(int buff_id, int *mdl_addr, void *obj_hdl, int pre_flg);
void MapLightRePreRender(int buff_id, int reg_id);
void MapLightSelect(GRA3DLIGHTDATA *pLightMst, float *vPos, int iStart, int iEnd);
void MapLightSelectEnable(GRA3DLIGHTDATA *pLightMst, float *vPos);
void MapLightMakeDualDirect(GRA3DLIGHTDATA *pLightOut, GRA3DLIGHTDATA *pLight1, GRA3DLIGHTDATA *pLight2);
int MapLightUpdate(GRA3DLIGHTDATA *pOutLight, MAP_LIGHT_DAT *pUpLight, int iStart, int iEnd);
void MapLightMakeDual(GRA3DLIGHTDATA *out, GRA3DLIGHTDATA *light1, GRA3DLIGHTDATA *light2, float *vCenPos);
void MapLightSetScale(GRA3DLIGHTDATA *out, GRA3DLIGHTDATA *mst);
GRA3DLIGHTDATA* MapMeiGetLight();
int MapMeiCheck(MLOAD_HEAD *hp);
void MapMeiRegistLightOne(G3DLIGHT *lp);
void MapMeiInit(GRA3DLIGHTDATA *mst);
void MapMeiTerm();
int MapMeiProc();
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& G3DLIGHT type_info function();
type_info& GRA3DLIGHTSTATUS type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAPLIGHT_H
