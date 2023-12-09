// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_FINDER_CAMERA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_FINDER_CAMERA_H

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void FinderModeCameraCtrl();
void ReqPointSearchCamera();
void PointSearchCameraCtrl();
void ReqFinderCamera();
void FinderInCameraCtrl();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CAMERA_FINDER_CAMERA_H
