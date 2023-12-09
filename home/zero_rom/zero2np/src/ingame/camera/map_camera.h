// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_MAP_CAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_MAP_CAMERA_H

extern u_short fior_tm;
extern u_short ori_fior_tm;

void CameraMain();
void CameraMainInit();
void MapCamSetEventCameraFlg(int Flg);
int MapCamGetEventCameraFlg();
int MapCamGetObjPosition(float *pos, int obj_id);
void ReqFinderInOverRap(u_short time);
void MapCamGra3dcamSetPositionAddOffset(float *Vector, int RoomNo);
void MapCamGra3dcamSetTargetAddOffset(float *Vector, int RoomNo);
void MapCamGra3dcamSetPositionMargin(float *Position, float *NowPosition, float margin);
void MapCamGra3dcamSetTargetMargin(float *Target, float *NowTarget, float margin);
void MapCamTargetChange(int no);
void MapCamSetFinCamera(float &rvPosition[4], float *pvTarget[4]);
void MapCamCutFinCamera();
void ReqPlyrApproachCameraCtrl(float *ipos, float offy, float dist);
void ReqPlyrDamageCameraCtrl(float *ipos, float offy, float dist, ENE_WRK *pEneWrk);
void ReqPlyrDeadCameraCtrl(float *ipos, float offy, float offy2, float dist, float *trot);
void ReqPlyrTalkCameraCtrl(float offy, float dist);
void EndPlyrApproachCameraCtrl();
void ApproachCameraCrossFadeSW(int sw);
int GetApproachCameraCrossFade();
void QuakeCameraStop();
void QuakeCameraReq(float Power, u_int Time, u_int LoopNum);
int QuakeCameraGetReq();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_MAP_CAMERA_H
