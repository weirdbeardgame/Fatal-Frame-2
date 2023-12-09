// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_EVENT_CAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_EVENT_CAMERA_H

typedef struct {
	float LocalPosition[4];
	float LocalTarget[4];
	float Roll;
	float Proj;
} VCI_CAMERA_POINT;

extern unsigned char float [3] type_info node[8];

void EventCameraReq();
void EventCameraInitCtrlReq();
void EventCameraSetVCIAddress(u_int *pData);
void EventCameraSetPosition(float *Position);
void EventCameraSetTarget(float *Target);
void EventCameraSetPositionObjId(int Type, int Id);
void EventCameraSetTargetObjId(int Type, int Id);
void EventCameraSetPositionOffset(float *Offset);
void EventCameraSetTargetOffset(float *Offset);
void EventCameraSetFov(float Fov);
void EventCameraSetRoll(float Roll);
void EventCameraSetMargin(float Margin);
void EventCameraCut();
void EventCameraSetWorldFlg(int Flg);
int EventCameraMain();
int EventCameraVCIPlay();
int EventCameraVCIPlayIsEnd();
void EventCameraVCICtrlInit(u_int *pDataTop);
int EventCameraGetDataNum(u_int *pData);
void EventCameraGetPosition(float *Position, u_int *pData, int PointNo);
void EventCameraGetTarget(float *Target, u_int *pData, int PointNo);
void EventCameraGetOneData(VCI_CAMERA_POINT *pOut, u_int *pData, int PointNo);
int EventCameraCheckFileId(u_int *pData);
void EventCameraVCIReq(int CamNo);
void CalcBezierPoint(float *Point, int n, float t, float *pControlPoint[4]);
void CalcHermitePoint(float *HermiteVector, float *Point0, float *Point1, float *Direction0, float *Direction1, float ParamU);
void EventCameraTest();
float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max);
type_info& float [3] type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_EVENT_CAMERA_H
