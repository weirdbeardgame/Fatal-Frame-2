// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENE_MOT_CTRL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENE_MOT_CTRL_H

extern unsigned char ENE_MOT_CTRL type_info node[8];
extern unsigned char ENE_MOT_WRK ** type_info node[12];
extern unsigned char ENE_MOT_WRK * type_info node[12];
extern unsigned char ENE_MOT_WRK type_info node[8];

void InitEneMotAlgCtrl(ENE_WRK *ew);
void EneMotAlgCtrl(ENE_WRK *ew);
void ClearEneMotAttr(ENE_WRK *ew);
void SetEneMotAttr(ENE_WRK *ew, ENE_MOT_WRK *emw);
ENE_MOT_CTRL* ENE_MOT_CTRL * _fixed_array_verifyrange<ENE_MOT_CTRL>(size_t v, size_t _max);
ENE_MOT_WRK*** ENE_MOT_WRK ** * _fixed_array_verifyrange<ENE_MOT_WRK **>(size_t v, size_t _max);
type_info& ENE_MOT_CTRL type_info function();
type_info& ENE_MOT_WRK ** type_info function();
type_info& ENE_MOT_WRK * type_info function();
type_info& ENE_MOT_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ENEMY_ENE_MOT_CTRL_H
