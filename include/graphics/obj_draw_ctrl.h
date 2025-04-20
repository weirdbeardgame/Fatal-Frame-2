#ifndef OBJ_DRAW_CTRL_H
#define OBJ_DRAW_CTRL_H

/* 00226930 0000001c */ void InitDrawFLG();
/* 00226950 0000005c */ void SetDrawFLGAllON();
/* 002269b0 0000005c */ void SetDrawFLGAllOFF();
/* 00226a10 0000000c */ int GetPlyrDrawFLG();
/* 00226a20 00000020 */ void SetPlyrDrawFLG(/* a0 4 */ int sw);
/* 00226a40 0000000c */ int GetSisDrawFLG();
/* 00226a50 00000020 */ void SetSisDrawFLG(/* a0 4 */ int sw);
/* 00226a70 0000000c */ int GetEneDrawFLG();
/* 00226a80 00000020 */ void SetEneDrawFLG(/* a0 4 */ int sw);
/* 00226aa0 0000000c */ int GetEffDrawFLG();
/* 00226ab0 00000020 */ void SetEffDrawFLG(/* a0 4 */ int sw);
/* 00226ad0 0000000c */ int GetRoomDrawFLG();
/* 00226ae0 00000020 */ void SetRoomDrawFLG(/* a0 4 */ int sw);
/* 00226b00 0000000c */ int GetObjDrawFLG();
/* 00226b10 00000020 */ void SetObjDrawFLG(/* a0 4 */ int sw);
/* 00226b30 0000000c */ int GetSkyDrawFLG();
/* 00226b40 00000020 */ void SetSkyDrawFLG(/* a0 4 */ int sw);
/* 00226b60 0000000c */ int GetSdwDrawFLG();
/* 00226b70 00000020 */ void SetSdwDrawFLG(/* a0 4 */ int sw);
/* 00226b90 0000000c */ int GetSdwSrcDrawFLG();
/* 00226ba0 00000020 */ void SetSdwSrcDrawFLG(/* a0 4 */ int sw);
/* 00226bc0 0000005c */ void SetDrawFLG_PL_GameOver();
/* 00226c20 0000005c */ void SetDrawFLG_SI_GameOver();

#endif // OBJ_DRAW_CTRL_H
