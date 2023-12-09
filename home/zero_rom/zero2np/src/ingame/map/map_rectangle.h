// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_RECTANGLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_RECTANGLE_H

typedef struct {
	MB_OUT_SECTION head;
	int type;
	float Pos[3];
	float View[3];
	float Rrg;
	float RotZ;
	float Asobi;
} MDAT_CAM;

typedef struct {
	float Cam_Pos_X;
	float Cam_Pos_Y;
	float Cam_Pos_Z;
	float View_Pos_X;
	float View_Pos_Y;
	float View_Pos_Z;
	float Proj;
	float RotZ;
} MDAT_CAM_SP_ONE;

typedef struct {
	MB_OUT_SECTION head;
	int type;
	MDAT_CAM_SP_ONE st[4];
} MDAT_CAM_SP;


int MrecSetRegBuffID(int floor_id, float *pos, int buf_no);
int MrecInitCameraInfo();
int MrecSetCameraInfo(int floor, float *pos, int DataType);
int MrecIsCameraChange();
int MrecIsCameraHit();
int MrecGetCameraID();
int MrecGetCameraType();
int MrecGetCameraPos(float *pos);
int MrecGetCameraInterest(float *pos);
int MrecGetCameraRotZ(float *rot_z);
float MrecGetCameraPrj();
float MrecGetCameraAsobi();
MDAT_CAM_SP* MrecGetCameraSpInfo(MB_OUT_RECT **ppRect, void *pRectStat, int floor, float *Pos);
int MrecCheckOnSameCamRect(void *pRectStat, int floor, float *Pos, int DataType);
int MrecCheckHitRect(int floor, float *Pos, int DataType);
int MrecIsInEvent(float *pos, int label, int floor);
int MrecIsInEventSub(float *pos, int buf_id, int label);
int MrecIsHitRectangleNum(int buf_no);
float*[4] MrecGetRectPtr(int num, int buf_no);
int MrecSetHitRectInfo(int buf_no);
int MrecGetHitInfoIdNum();
int* MrecGetHitInfoRecNumList();
float*[4] MrecGetHitInfoRecVecter(int list_no, int rec_no);
int MrecLineCross(float *pos1, float *pos2, int list_no, int num);
int MrecIsInHitRectangle(float *pos1, float *pos2, float *pos3, float *pos4, int list_no, int num);
int MrecIsNearRectangle(float *boxmin, float *boxmax, int list_no, int num);
int MrecSetSEInfo(float *pos);
int MrecGetSeNo();
int MrecIsDoorRectangleNum();
int MrecPointDoorRectangle(float *len, float *pos, float *a, float *b, int num, float r);
int MrecSetDoorHitRectInfo(int buf_no);
int MrecGetDoorHitInfoIdNum();
int* MrecGetDoorHitInfoRecNumList();
float*[4] MrecGetDoorHitInfoRecVecter(int list_no, int rec_no);
int MrecCheckDoorHitSta(int list_no, int rec_no);
int MrecDoorLineCross(float *pos1, float *pos2, int list_no, int num);
int MrecIsNearDoorRectangle(float *boxmin, float *boxmax, int list_no, int num);
int MrecGetStaInfo(float *rot, int floor, float *pos);
float MrecGetStaRot(int rot);
int MrecIsInRectangle(float *pos, float *rec[4]);
MDAT_CAM* MrecGetCameraInfo();
int DrawCameraRect(float *pos);
int DrawCameraRectOne(int i, float *pos);
int DrawEventRect(float *pos);
int DrawEventRectOne(int i, float *pos);
int DrawMapHitRect(float *pos);
int DrawMapHitRectOne(int i, float *pos);
int DrawSeRect(float *pos);
int DrawSeRectOne(int i, float *pos);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_MAP_RECTANGLE_H
