// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_EFFECT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_EFFECT_H

extern unsigned char SCN_ANM_MDL type_info node[8];

void SceneEffectInit();
void SceneEffectMain(SCENE_CTRL *pSceneCtrl, u_int *pDataAddr);
void SceneEffectEnd();
void SceneMovieEffectMain(int NowFrame, u_int *pDataAddr);
SCN_ANM_MDL* SCN_ANM_MDL * _fixed_array_verifyrange<SCN_ANM_MDL>(size_t v, size_t _max);
type_info& SCN_ANM_MDL type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_SCENE_SCENE_EFFECT_H
