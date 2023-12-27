// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/CBuff.c
// *****************************************************************************

/* sdata */ int CBuffNum;
/* sdata */ int CBuffMaxLen;
/* sdata */ int CBuffMaxNum;
/* sbss */ char *CBuffStr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/CDebugEdit.cpp
// *****************************************************************************

/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data */ __vtbl_ptr_type CEditRoot virtual table[12];
/* data */ __vtbl_ptr_type ctl::custom_allocator<IEditObject *> virtual table[4];
/* data */ __vtbl_ptr_type IEditObject virtual table[12];
/* sbss */ unsigned char IEditObject type_info node[8];
/* sbss */ unsigned char ctl::custom_allocator<IEditObject *> type_info node[8];
/* bss */ unsigned char CEditRoot type_info node[12];
/* sbss */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;
/* data */ bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *>>::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/ChrSort.c
// *****************************************************************************

/* sdata */ int ChrSortFlg;
/* sbss */ void *ChrSortHdl[2];
/* bss */ CHR_SORT_WORK ChrSortEnemList[32];
/* bss */ CHR_SORT_FLY_WORK ChrSortFlyList[32];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/DbFurnPre.c
// *****************************************************************************

/* sdata */ int DbFurnPreNameID;
/* sdata */ int DbFurnPreMdoelMax;
/* sdata */ int DbFurnPreBuffID;
/* sdata */ int DbFurnPreObjID;
/* sdata */ int DbFurnPreObjMax;
/* sdata */ float *DbFurnPrePos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/FileSt.c
// *****************************************************************************

/* data */ int FileStLabelList[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/FurnCtl.c
// *****************************************************************************

/* sdata */ int FurnCtlFindBuffID;
/* sdata */ int FurnCtlFindListID;
/* bss */ fixed_array<FURN_CTL, 48> FurnCtlList;
/* sbss */ unsigned char FURN_CTL type_info node[8];
/* bss */ char *FurnCtlWorkList[2][2];
/* bss */ FURN_WORK_HEAD FurnWorkList[32];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/FurnLoad.c
// *****************************************************************************

/* data */ FURN_LOAD_TBL FurnTbl[16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/IngameScene.c
// *****************************************************************************

/* data */ INGAME_SCENE_CTRL ingame_scene;
/* sdata */ u_int *pSceneMovieEffect;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapAnim.c
// *****************************************************************************

/* bss */ fixed_array<MAP_ANIM_CTL, 32> MapAnimCtl;
/* bss */ fixed_array<ANI_CTRL, 2> MapAnimMotCtl;
/* bss */ fixed_array<MAPMANIM_MATRIX, 255> MapManimMatrxList;
/* bss */ fixed_array<MAPMANIM_HEAD, 64> MapManimList;
/* sbss */ unsigned char MAP_ANIM_CTL type_info node[8];
/* sbss */ unsigned char ANI_CTRL type_info node[8];
/* sbss */ unsigned char MAPMANIM_MATRIX type_info node[8];
/* sbss */ unsigned char MAPMANIM_HEAD type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapDoor.c
// *****************************************************************************

/* data */ MLOAD_DOOR_DAT MapLoadDoorDatList[208];
/* sdata */ int MapDoorCtlID;
/* sdata */ u_int *MapDoorAnimPtr;
/* sdata */ int MapDoorAnimID;
/* sdata */ int MapDoorAnimType;
/* sdata */ int MapDoorRoomNo;
/* sdata */ int door_bank_id;
/* sdata */ int MapDoorSp;
/* sdata */ int MapDoorReqID;
/* sdata */ int MapDoorAnimEnd;
/* sdata */ int iBuffSw;
/* bss */ fixed_array<MAPDOOR_HEAD, 16> MapDoorList;
/* bss */ GRA3DLIGHTDATA MapDoorLight;
/* sbss */ unsigned char MAPDOOR_HEAD type_info node[8];
/* bss */ unsigned char MDAT_DOOR *type_info node[12];
/* sbss */ unsigned char MDAT_DOOR type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapDraw.c
// *****************************************************************************

/* sdata */ GRA3DLIGHTDATA *MapDrawRoomLihgtSp[2];
/* sdata */ int s_bEnableLightFlashlightOnly;
/* bss */ GRA3DLIGHTDATA MapDrawPS2CoordLight[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapFog.c
// *****************************************************************************

/* data */ MAP_FOG_HEAD MapFogDat[3];
/* sdata */ int MapFogFrame;
/* sdata */ int MapFogNowFrame;
/* sdata */ int MapFogFlg;
/* sdata */ float *MapFogRect[4];
/* sdata */ int MapFogLastRoom;
/* bss */ float MapFogBfoCam[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapHit.c
// *****************************************************************************

/* sdata */ float MapHitDoorZ;
/* sdata */ float MapHitColLen;
/* data */ float MapHitPoint[4][4];
/* bss */ fixed_array<MAPHIT_HEAD, 32> MapHitRecList;
/* sbss */ unsigned char MAPHIT_HEAD type_info node[8];
/* bss */ int (*MapHitCallBack[3])(/* parameters unknown */);
/* bss */ float MapHitDoorVec[2][4][4];
/* sbss */ int MapHitDoorID;
/* bss */ float MapHitColPoint[2][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLBuff.c
// *****************************************************************************

/* bss */ MAP_LBUFF_ST MapLBuffList[66][16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLight.c
// *****************************************************************************

/* data */ MAPMEI_FRAME MapMeiList[25];
/* sdata */ float MapLightPower;
/* sdata */ float MapLightIntens[2];
/* sdata */ float MapLightDiff[2];
/* sdata */ MAPMEI_HEAD *MapMeiNowHeadPtr;
/* bss */ GRA3DLIGHTDATA MapMeiWork[2];
/* sbss */ unsigned char G3DLIGHT type_info node[8];
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss */ MAPMEI_HEAD MapMeiHead[4];
/* bss */ MAPMEI_LIGHTONE MapMeiLightOneWork[39];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapLoad.c
// *****************************************************************************

/* sdata */ int MapLoadDrawID;
/* sdata */ int MapLoadMyPosLabel;
/* sdata */ int MapLoadStat;
/* sdata */ void *MapLoadDoorBuff;
/* sdata */ char *MapLoadFreeArea[2];
/* bss */ fixed_array<MLOAD_HEAD, 2> MapLoadBuff;
/* sbss */ unsigned char MLOAD_HEAD type_info node[8];
/* bss */ int MapLoadFileIDList[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapObj.c
// *****************************************************************************

/* sdata */ int MapObjSimiEnd;
/* sdata */ int MapObjSimiTime;
/* data */ MAPOBJ_EFF MapObjEffLabel[21];
/* sdata */ int MapObjFlg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapObjReg.c
// *****************************************************************************

/* sdata */ int MapObjSceneLoadFlg;
/* bss */ fixed_array<MAPOBJ_HEAD, 2> MapObjList;
/* sbss */ unsigned char MAPOBJ_HEAD type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapPut.c
// *****************************************************************************

/* bss */ fixed_array<MAPPUT_OBJ, 320> MapPutList;
/* sbss */ unsigned char MAPPUT_OBJ type_info node[8];
/* sbss */ MAPPUT_OBJ *MapPutSt;
/* sbss */ MAPPUT_OBJ *MapPutNowDraw;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSave.c
// *****************************************************************************

/* data */ MAPSAVE_HEAD MapSaveList[673];
/* bss */ MAPSAVE_JMP_TBL MapSaveJmp[673];
/* sbss */ int MapSaveJmpNum;
/* bss */ MAPSAVE_HEAD MapSaveFirstWork[673];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSky.c
// *****************************************************************************

/* data */ MAP_SKY_DB MapSkyDatList[18];
/* sdata */ MAP_SKY_DB *MapSkyDp;
/* sdata */ u_int MapSkyTopAddr;
/* sdata */ u_long MapSkyTex0;
/* sdata */ float MapSkyX;
/* sdata */ float MapSkyRotY;
/* sdata */ int MapSkyFlg;
/* sdata */ int MapSkyAlpha;
/* sdata */ int MapSkyFrame;
/* bss */ fixed_array<unsigned int, 12> MapSkyDatAddr;
/* bss */ float MapSkyPers[4][4];
/* rdata */ int s_iv1111[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MapSp.c
// *****************************************************************************

/* data */ MAPSP_KAZ_DB MapSpDbDat;
/* data */ DEBUG_MENU dbg_kaza_main;
/* sdata */ int MapSpMoviFlg;
/* sdata */ void *MapSpMoviHdl;
/* sdata */ float MapSpMoviRot;
/* sdata */ int MapSpMoveFlg;
/* sdata */ MDAT_OBJ *MapSpKageObjPtr;
/* sdata */ int MapSpKageBuffID;
/* sdata */ MAPOBJ_DAT *MapSpFusumaPtr;
/* sdata */ int MapSpFusumaBuffID;
/* bss */ fixed_array<MAPSP_KAZ_HEAD, 64> MapSpKazList;
/* bss */ fixed_array<MAPSP_KAZ_SPEED, 5> MapSpKazSpeed;
/* sbss */ unsigned char MAPSP_KAZ_HEAD type_info node[8];
/* sbss */ unsigned char MAPSP_KAZ_SPEED type_info node[8];
/* bss */ int (*MapSpFuncList[3])(/* parameters unknown */);
/* bss */ float MapSpMoviPos[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/MhCtl.c
// *****************************************************************************

/* data */ MH_CTL_DB_FLG mhdb;
/* data */ DEBUG_MENU dbg_room_main;
/* sdata */ int MhCtlLoadFlg;
/* sdata */ int MhCtlRegBuffID;
/* sdata */ int s_bDrewShadow;
/* sbss */ int mh_ctl_disp_lock_cnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/RegDat.c
// *****************************************************************************

/* sdata */ int RegDatNoRegNum;
/* sdata */ int RegDatHitNum;
/* bss */ fixed_array<RD_REG_HEAD, 8> RegDatBuff;
/* bss */ fixed_array<int, 8> RegDatHitList;
/* bss */ fixed_array<int, 8> RegDatNoRegList;
/* sbss */ unsigned char RD_REG_HEAD type_info node[8];
/* sbss */ unsigned char RD_REG_ST_DAT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/SpriteCmn.c
// *****************************************************************************

/* sdata */ SPRT_DAT *SpCmnCtlList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/accessory.c
// *****************************************************************************

/* data */ fixed_array<fixed_array<SPRING, 20>, 9> rope_spring;
/* data */ fixed_array<fixed_array<C_PARTICLE, 20>, 10> rope_particle;
/* bss */ fixed_array<fixed_array<C_ACS_CTRL, 15>, 2> c_acs_ctrl;
/* bss */ fixed_array<ENE_COLLISION, 13> ene_c;
/* sbss */ unsigned char C_PARTICLE type_info node[8];
/* bss */ unsigned char fixed_array<C_PARTICLE, 20> type_info node[12];
/* sbss */ unsigned char SPRING type_info node[8];
/* bss */ unsigned char fixed_array<SPRING, 20> type_info node[12];
/* sbss */ unsigned char float[3][3] type_info node[8];
/* sbss */ unsigned char ENE_COLLISION type_info node[8];
/* sbss */ unsigned char C_ACS_CTRL type_info node[8];
/* bss */ unsigned char fixed_array<C_ACS_CTRL, 15> type_info node[12];
/* sbss */ unsigned char COLLISION_DAT type_info node[8];
/* sbss */ unsigned char TUBE type_info node[8];
/* sbss */ unsigned char fixed_array_base<C_PARTICLE, 20, C_PARTICLE[19]> type_info node[8];
/* sbss */ unsigned char fixed_array_base<SPRING, 20, SPRING[19]> type_info node[8];
/* sbss */ unsigned char fixed_array_base<C_ACS_CTRL, 15, C_ACS_CTRL[14]> type_info node[8];
/* bss */ ENE_COLLISION rope_c[13];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/acs_dat.c
// *****************************************************************************

/* data */ SPHERE sphere_R35;
/* data */ SPHERE sphere_R50;
/* data */ SPHERE sphere_R70;
/* data */ SPHERE sphere_R100;
/* data */ SPHERE sphere_R150;
/* data */ SPHERE sphere_R200;
/* data */ TUBE tube_R150_H200;
/* data */ TUBE tube_R90_H200;
/* data */ SPHERE sphere_mio;
/* data */ SPHERE sphere_hako;
/* data */ TUBE tube_momol_mio;
/* data */ TUBE tube_momor_mio;
/* data */ SPHERE sphere_face;
/* data */ SPHERE sphere_rakka;
/* data */ SPHERE sphere_kubiore;
/* data */ TUBE tube_waningyou_head;
/* data */ TUBE tube_waningyou;
/* data */ TUBE tube_up_leg_l;
/* data */ TUBE tube_low_leg_l;
/* data */ TUBE tube_up_leg_r;
/* data */ TUBE tube_low_leg_r;
/* data */ TUBE tube_momol;
/* data */ TUBE tube_momor;
/* data */ TUBE tube_momo_sae;
/* data */ CPLANE plane_floor;
/* data */ CPLANE plane_ituki;
/* data */ WMIM mimacs_hair_dat0;
/* data */ WMIM_DAT ch000_wmim_tbl[2];
/* data */ WMIM mimacs_hair_dat1;
/* data */ WMIM_DAT ch001_wmim_tbl[2];
/* data */ WMIM mimacs_hair_dat3;
/* data */ WMIM_DAT ch003_wmim_tbl[2];
/* data */ WMIM mimacs_hair_dat17;
/* data */ WMIM_DAT ch017_wmim_tbl[2];
/* data */ WMIM mimacs_hair_dat30;
/* data */ WMIM_DAT ch030_wmim_tbl[2];
/* data */ WMIM mimacs_hair_dat39;
/* data */ WMIM_DAT ch039_wmim_tbl[2];
/* data */ float rope_vtx0[4];
/* data */ ROPE_DAT rope_dat0;
/* data */ float sudare_vtx0[4];
/* data */ ROPE_DAT sudare_dat0;
/* data */ float genkan_vtx000[4];
/* data */ ROPE_DAT fr_genkan000;
/* data */ float genkan_vtx001[4];
/* data */ ROPE_DAT fr_genkan001;
/* data */ float irori_vtx000[4];
/* data */ ROPE_DAT fr_irori_dentou000;
/* data */ float irori_vtx001[4];
/* data */ ROPE_DAT fr_irori_dentou001;
/* data */ float oozasiki_vtx000[4];
/* data */ ROPE_DAT fr_oozasiki_dentou000;
/* data */ float butuma_vtx000[4];
/* data */ ROPE_DAT fr_butuma_dentou000;
/* data */ float okunoma_vtx000[4];
/* data */ ROPE_DAT fr_okunoma_dentou000;
/* data */ float okunoma_vtx001[4];
/* data */ ROPE_DAT fr_okunoma_dentou001;
/* data */ float okunoma_vtx002[4];
/* data */ ROPE_DAT fr_okunoma_sudare000;
/* data */ ROPE_DAT fr_okunoma_sudare001;
/* data */ ROPE_DAT fr_okunoma_sudare002;
/* data */ float kyakuma_vtx000[4];
/* data */ ROPE_DAT fr_kyakuma_dentou000;
/* data */ float shouzi_vtx000[4];
/* data */ ROPE_DAT fr_shouzi000;
/* data */ float rry01_genkan_vtx[3][5];
/* data */ ROPE_DAT fr_rry01_genkan_turi000;
/* data */ ROPE_DAT fr_rry01_genkan_turi001;
/* data */ ROPE_DAT fr_rry01_genkan_turi002;
/* data */ float toumyou_vtx000[4];
/* data */ ROPE_DAT fr_rry00_toumyou000;
/* data */ ROPE_DAT fr_rry00_toumyou001;
/* data */ float rkh00_vtx000[4];
/* data */ float rkh00_vtx001[4];
/* data */ float rkh00_vtx002[4];
/* data */ ROPE_DAT fr_rkh00_rope001;
/* data */ ROPE_DAT fr_rkh00_rope002;
/* data */ ROPE_DAT fr_rkh00_rope003;
/* data */ ROPE_DAT fr_rkh00_rope004;
/* data */ float rtb08_vtx000[4];
/* data */ ROPE_DAT fr_rtb08_dentou000;
/* data */ float ry04_vtx000[4];
/* data */ ROPE_DAT fr_ry04_tourou000;
/* data */ ROPE_DAT fr_ry04_tourou001;
/* data */ float ry02_vtx000[2][4];
/* data */ ROPE_DAT fr_ry02_tourou000;
/* data */ ROPE_DAT fr_ry02_tourou001;
/* data */ ROPE_DAT fr_ry02_tourou002;
/* data */ ROPE_DAT *rope_tbl[32];
/* data */ CLOTH cloth_furisode3;
/* data */ CLOTH furisode_mio;
/* data */ CLOTH cloth_skirt;
/* data */ CLOTH cloth_skirt_mio;
/* data */ CLOTH cloth_skirt_mayu;
/* data */ CLOTH cloth_skirt_miya;
/* data */ CLOTH cloth_skirt_hako;
/* data */ CLOTH cloth_skirt_manto_hako;
/* data */ CLOTH cloth_manto_hako;
/* data */ CLOTH cloth_manto_kusa1;
/* data */ CLOTH cloth_manto_kusa2;
/* data */ CLOTH cloth_skirt_kusa1;
/* data */ CLOTH cloth_skirt_kusa2;
/* data */ CLOTH cloth_manto_rakka1;
/* data */ CLOTH cloth_manto_rakka2;
/* data */ CLOTH cloth_skirt_rakka1;
/* data */ CLOTH cloth_skirt_kubiore;
/* data */ CLOTH cloth_manto_waninngyou;
/* data */ CLOTH cloth_skirt_rakka2;
/* data */ CLOTH cloth_skirt_kusakoro2;
/* data */ CLOTH cloth_manto_noren;
/* data */ CLOTH cloth_irori_noren;
/* data */ CLOTH cloth_nuno_noren;
/* data */ CLOTH cloth_nuno_nuno;
/* data */ CLOTH cloth_genkan_noren;
/* data */ CLOTH cloth_genkan_noren2;
/* data */ CLOTH cloth_meian_noren;
/* data */ CLOTH cloth_okunoma_sudare;
/* data */ CLOTH cloth_meian_curtain;
/* data */ CLOTH cloth_skirt_suisi;
/* data */ CLOTH cloth_skirt_tama;
/* data */ CLOTH cloth_skirt_yami2;
/* data */ CLOTH cloth_skirt_sae;
/* data */ CLOTH cloth_skirt_imi1;
/* data */ CLOTH_DAT ch000_cloth[2];
/* data */ COLLISION_DAT ch000_collision[4];
/* data */ CLOTH_DAT ch001_cloth[2];
/* data */ COLLISION_DAT ch001_collision[4];
/* data */ CLOTH_DAT ch003_cloth[3];
/* data */ float ch004_rist_vtx0[4][4];
/* data */ float ch004_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch004_cloth[3];
/* data */ float ch006_rist_vtx0[4][4];
/* data */ float ch006_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch006_cloth[3];
/* data */ COLLISION_DAT ch006_collision[2];
/* data */ CLOTH_DAT ch011_cloth[3];
/* data */ float ch013_rist_vtx0[4][4];
/* data */ float ch013_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch013_cloth[4];
/* data */ COLLISION_DAT ch013_collision[2];
/* data */ CLOTH_DAT ch014_cloth[2];
/* data */ CLOTH_DAT ch017_cloth[2];
/* data */ COLLISION_DAT ch017_collision[4];
/* data */ CLOTH_DAT ch018_cloth[6];
/* data */ float ch019_rist_vtx0[4][4];
/* data */ float ch019_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch019_cloth[3];
/* data */ COLLISION_DAT ch019_collision[2];
/* data */ float ch020_rist_vtx0[4][4];
/* data */ float ch020_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch020_cloth[8];
/* data */ COLLISION_DAT ch020_collision[3];
/* data */ float ch021_rist_vtx0[4][4];
/* data */ float ch021_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch021_cloth[4];
/* data */ COLLISION_DAT ch021_collision[4];
/* data */ float ch022_rist_vtx0[4][4];
/* data */ float ch022_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch022_cloth[4];
/* data */ COLLISION_DAT ch022_collision[4];
/* data */ float ch024_rist_vtx0[4][4];
/* data */ float ch024_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch024_cloth[5];
/* data */ COLLISION_DAT ch024_collision[3];
/* data */ float ch025_rist_vtx0[4][4];
/* data */ float ch025_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch025_cloth[4];
/* data */ COLLISION_DAT ch025_collision[2];
/* data */ float ch026_rist_vtx0[4][4];
/* data */ float ch026_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch026_cloth[3];
/* data */ float ch027_rist_vtx0[4][4];
/* data */ float ch027_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch027_cloth[3];
/* data */ COLLISION_DAT ch027_collision[2];
/* data */ float ch028_rist_vtx0[4][4];
/* data */ float ch028_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch028_cloth[3];
/* data */ COLLISION_DAT ch028_collision[2];
/* data */ float ch029_rist_vtx0[4][4];
/* data */ float ch029_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch029_cloth[3];
/* data */ COLLISION_DAT ch029_collision[2];
/* data */ CLOTH_DAT ch030_cloth[2];
/* data */ COLLISION_DAT ch030_collision[6];
/* data */ float ch031_rist_vtx0[4][4];
/* data */ float ch031_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch031_cloth[3];
/* data */ COLLISION_DAT ch031_collision[2];
/* data */ CLOTH_DAT ch032_cloth[2];
/* data */ float ch033_rist_vtx0[4][4];
/* data */ float ch033_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch033_cloth[3];
/* data */ COLLISION_DAT ch033_collision[2];
/* data */ float ch038_rist_vtx0[4][4];
/* data */ float ch038_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch038_cloth[3];
/* data */ CLOTH_DAT ch039_cloth[3];
/* data */ float ch041_rist_vtx0[4][4];
/* data */ float ch041_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch041_cloth[3];
/* data */ float ch043_rist_vtx0[4][4];
/* data */ float ch043_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch043_cloth[3];
/* data */ float ch044_rist_vtx0[4][4];
/* data */ float ch044_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch044_cloth[3];
/* data */ float ch047_rist_vtx0[4][4];
/* data */ float ch047_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch047_cloth[3];
/* data */ float ch048_rist_vtx0[4][4];
/* data */ float ch048_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch048_cloth[3];
/* data */ CLOTH_DAT ch049_cloth[3];
/* data */ CLOTH_DAT ch053_cloth[2];
/* data */ CLOTH_DAT ch055_cloth[2];
/* data */ COLLISION_DAT ch055_collision[4];
/* data */ float ch058_rist_vtx0[4][4];
/* data */ float ch058_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch058_cloth[3];
/* data */ float ch064_rist_vtx0[4][4];
/* data */ float ch064_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch064_cloth[3];
/* data */ float ch065_rist_vtx0[4][4];
/* data */ float ch065_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch065_cloth[3];
/* data */ float ch066_rist_vtx0[4][4];
/* data */ float ch066_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch066_cloth[3];
/* data */ float ch067_rist_vtx0[4][4];
/* data */ float ch067_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch067_cloth[3];
/* data */ float ch068_rist_vtx0[4][4];
/* data */ float ch068_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch068_cloth[3];
/* data */ float ch069_rist_vtx0[4][4];
/* data */ float ch069_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch069_cloth[3];
/* data */ float ch070_rist_vtx0[4][4];
/* data */ float ch070_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch070_cloth[3];
/* data */ float ch071_rist_vtx0[4][4];
/* data */ float ch071_rist_vtx1[4][4];
/* data */ CLOTH_DAT ch071_cloth[3];
/* data */ float m999_rist_vtx0[4][4];
/* data */ CLOTH_DAT m999_cloth[3];
/* data */ COLLISION_DAT m999_collision[4];
/* data */ CLOTH_DAT f000_cloth[2];
/* data */ CLOTH_DAT fc_irori000[2];
/* data */ CLOTH_DAT fc_irori001[2];
/* data */ CLOTH_DAT fc_nuno000[2];
/* data */ CLOTH_DAT fc_nuno001[2];
/* data */ CLOTH_DAT fc_nuno002[2];
/* data */ CLOTH_DAT fc_genkan000[2];
/* data */ CLOTH_DAT fc_genkan001[2];
/* data */ CLOTH_DAT fc_genkan002[2];
/* data */ CLOTH_DAT fc_genkan003[2];
/* data */ CLOTH_DAT fc_genkan004[2];
/* data */ CLOTH_DAT fc_meian000[2];
/* data */ CLOTH_DAT fc_meian001[2];
/* data */ CLOTH_DAT fc_meian002[2];
/* data */ CLOTH_DAT fc_meian003[2];
/* data */ CLOTH_DAT fc_okunoma000[2];
/* data */ CLOTH_DAT fc_meian004[2];
/* data */ CLOTH_DAT fc_meian005[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album.c
// *****************************************************************************

/* data */ fixed_array<ALBUM_INFO, 2> album_info;
/* sdata */ void *(*AlbumMemGet)(/* parameters unknown */);
/* sdata */ void (*AlbumMemFree)(/* parameters unknown */);
/* sdata */ void *outgame_tex_addr;
/* sdata */ void *album_cmn_tex_addr;
/* sdata */ void *album_hensyu_tex_addr;
/* sdata */ void *album_sl_addr;
/* sdata */ void *album_slot_sl_addr;
/* sdata */ void *album_buff_addr;
/* sdata */ void *album_save_data_addr;
/* sdata */ char album_title_disp_flg;
/* sdata */ void (*album_mode_init_func[2])(/* parameters unknown */);
/* sdata */ int (*album_mode_main_func[2])(/* parameters unknown */);
/* sdata */ void (*album_mode_disp_func[2])(/* parameters unknown */);
/* sbss */ reference_fixed_array<int, 7> album_view_tex_tbl;
/* sbss */ unsigned char ALBUM_INFO type_info node[8];
/* sbss */ unsigned char PICTURE_WRK type_info node[8];
/* bss */ ALBUM_CTRL album_ctrl;
/* sbss */ ALBUM_DISP_CTRL album_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/dat/album_dat.c
// *****************************************************************************

/* rdata */ int album_name_x_tbl[7][5];
/* rdata */ int album_left_csr_x[7][5];
/* rdata */ int album_right_csr_x[7][5];
/* data */ SPRT_DAT album_tex[434];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_disp.c
// *****************************************************************************

/* sbss */ unsigned char ALBUM_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_edit.c
// *****************************************************************************

/* data */ void (*album_edit_mode_init_func[10])(/* parameters unknown */);
/* data */ void (*album_edit_mode_func[10])(/* parameters unknown */);
/* data */ void (*album_edit_mode_end_func[10])(/* parameters unknown */);
/* data */ void (*album_edit_mode_disp[10])(/* parameters unknown */);
/* sbss */ unsigned char ALBUM_INFO type_info node[8];
/* sbss */ unsigned char PICTURE_WRK type_info node[8];
/* sbss */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* bss */ ALBUM_EDIT_CTRL album_edit_ctrl;
/* bss */ ALBUM_EDIT_DISP album_edit_disp;
/* sbss */ ALBUM_COPY_CTRL album_copy_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_load.c
// *****************************************************************************

/* sdata */ void *album_load_buff_addr;
/* bss */ ALBUM_LOAD_CTRL album_load_ctrl;
/* sbss */ ALBUM_LOAD_DISP album_load_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_mem.c
// *****************************************************************************

/* bss */ ALBUM_MEM_CTRL album_mem_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_save.c
// *****************************************************************************

/* sdata */ void *album_save_buff_addr;
/* sbss */ unsigned char ALBUM_INFO type_info node[8];
/* bss */ ALBUM_SAVE_CTRL album_save_ctrl;
/* sbss */ ALBUM_SAVE_DISP album_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/album/prg/album_view.c
// *****************************************************************************

/* sdata */ void *album_view_tex_addr;
/* bss */ fixed_array<char, 16> disp_photo_no;
/* sbss */ reference_fixed_array<int, 7> album_view_tex_tbl;
/* sbss */ unsigned char ALBUM_INFO type_info node[8];
/* sbss */ unsigned char PICTURE_WRK type_info node[8];
/* sbss */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* sbss */ ALBUM_VIEW_CTRL album_view_ctrl;
/* sbss */ ALBUM_VIEW_DISP album_view_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/autoload.c
// *****************************************************************************

/* sdata */ void *auto_load_data_buff;
/* sbss */ AUTO_LOAD_CTRL auto_load_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/bonus_shot.c
// *****************************************************************************

/* sdata */ MyPoint aComboNumPoint[2];
/* sdata */ MyPoint aComboCharPoint[2];
/* sbss */ unsigned char CBonusShotOne type_info node[8];
/* rdata */ SHOT_NAME_TEX aShotTexTbl[5][9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/btn_sprt_dat.c
// *****************************************************************************

/* data */ SPRT_DAT btn_tex[15];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/cam_level_up_point.c
// *****************************************************************************

/* rdata */ int cam_base_status_point[3][4];
/* rdata */ int cam_sp_shot_point_tbl[10][4];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/camera_film.c
// *****************************************************************************

/* sdata */ unsigned char CCameraFilm::aFilmDamageTbl[5];
/* sdata */ unsigned char CCameraFilm::aFilmMinPercentTbl[5];
/* sdata */ unsigned char CCameraFilm::aFilmChargeSpdTbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/camera_menu.c
// *****************************************************************************

/* data */ DEBUG_CAMERA_MENU DebugCameraMenu;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/camera_power_up.c
// *****************************************************************************

/* rdata */ float CCameraPowerUp::aDistanceTbl[4];
/* rdata */ float CCameraPowerUp::aDmgTbl[4];
/* rdata */ float CCameraPowerUp::aRadiusTbl[4];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/cap_group_dat.c
// *****************************************************************************

/* data */ CAP_GROUP cap_group_A[3];
/* data */ BTN_GROUP btn_group_A[3];
/* data */ CAP_GROUP cap_group_B1[4];
/* data */ BTN_GROUP btn_group_B1[4];
/* data */ CAP_GROUP cap_group_B2[4];
/* data */ BTN_GROUP btn_group_B2[4];
/* data */ CAP_GROUP cap_group_C[4];
/* data */ BTN_GROUP btn_group_C[4];
/* data */ CAP_GROUP cap_group_D[4];
/* data */ BTN_GROUP btn_group_D[5];
/* data */ CAP_GROUP cap_group_E1[3];
/* data */ BTN_GROUP btn_group_E1[4];
/* data */ CAP_GROUP cap_group_E2[3];
/* data */ BTN_GROUP btn_group_E2[3];
/* data */ CAP_GROUP cap_group_F[2];
/* data */ BTN_GROUP btn_group_F[2];
/* data */ CAP_GROUP cap_group_H[5];
/* data */ BTN_GROUP btn_group_H[5];
/* data */ CAP_GROUP cap_group_I[4];
/* data */ BTN_GROUP btn_group_I[5];
/* data */ CAP_GROUP cap_group_J[5];
/* data */ BTN_GROUP btn_group_J[5];
/* data */ CAP_GROUP cap_group_K[3];
/* data */ BTN_GROUP btn_group_K[4];
/* data */ CAP_GROUP cap_group_L[2];
/* data */ BTN_GROUP btn_group_L[2];
/* data */ CAP_GROUP cap_group_M[4];
/* data */ BTN_GROUP btn_group_M[4];
/* data */ CAP_GROUP cap_group_N[2];
/* data */ BTN_GROUP btn_group_N[2];
/* rdata */ int cap_world_pos_x[15][5];
/* rdata */ int cap_world_pos_y[15][5];
/* data */ CAP_BTN_GROUP_CTRL cap_btn_group_ctrl[15];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/caption_dat.c
// *****************************************************************************

/* data */ SPRT_DAT caption_tex[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/center_circle.c
// *****************************************************************************

/* data */ unsigned char CCenterCircle::aRgb[4][3];
/* sdata */ char CCenterCircle::aMainAlpha[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/center_cross.c
// *****************************************************************************

/* sbss */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/chapter_sel.c
// *****************************************************************************

/* sbss */ CHAPTER_SEL_CTRL chapter_sel_ctrl;
/* rdata */ short int costume_tbl[9][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/charBB.c
// *****************************************************************************

/* rdata */ CHARBBDATA s_aCharBBData[78];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clear_flg.c
// *****************************************************************************

/* data */ CLEAR_FLG_CTRL clear_flg_ctrl;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clearmenu.c
// *****************************************************************************

/* sdata */ void *clear_bg_tex_addr;
/* sbss */ CLEAR_MENU_CTRL clear_menu_ctrl;
/* bss */ CLEAR_MENU_DISP clear_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/clearmenu_top.c
// *****************************************************************************

/* sdata */ void *clear_menu_tex_addr;
/* sdata */ char clear_menu_top_init_flg;
/* sbss */ CLEAR_MENU_TOP_CTRL clear_menu_top_ctrl;
/* sbss */ CLEAR_MENU_TOP_DISP clear_menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/compress/compress.c
// *****************************************************************************

/* data */ DCT_ROOT ZigZag[64];
/* sdata */ PHOTO_EXPAND photo_expand;
/* bss */ unsigned char pixelstrip[8][384];
/* bss */ float C[8][8];
/* bss */ float Ct[8][8];
/* sbss */ int InputRunLength;
/* sbss */ int OutputRunLength;
/* bss */ int quantum[8][8];
/* sbss */ char repair_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/crystal.c
// *****************************************************************************

/* data */ int crystal_stream[41];
/* bss */ fixed_array<char, 40> plyr_crystal;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/crystal_dat.c
// *****************************************************************************

/* data */ MOVIE_TITLE_DAT crystal_title_dummy[1];
/* data */ MOVIE_TITLE_DAT crystal_title_000[5];
/* data */ MOVIE_TITLE_DAT crystal_title_001[9];
/* data */ MOVIE_TITLE_DAT crystal_title_002[7];
/* data */ MOVIE_TITLE_DAT crystal_title_003[7];
/* data */ MOVIE_TITLE_DAT crystal_title_004[7];
/* data */ MOVIE_TITLE_DAT crystal_title_005[5];
/* data */ MOVIE_TITLE_DAT crystal_title_006[8];
/* data */ MOVIE_TITLE_DAT crystal_title_007[9];
/* data */ MOVIE_TITLE_DAT crystal_title_008[4];
/* data */ MOVIE_TITLE_DAT crystal_title_009[10];
/* data */ MOVIE_TITLE_DAT crystal_title_010[5];
/* data */ MOVIE_TITLE_DAT crystal_title_011[6];
/* data */ MOVIE_TITLE_DAT crystal_title_012[8];
/* data */ MOVIE_TITLE_DAT crystal_title_013[7];
/* data */ MOVIE_TITLE_DAT crystal_title_014[7];
/* data */ MOVIE_TITLE_DAT crystal_title_015[5];
/* data */ MOVIE_TITLE_DAT crystal_title_016[6];
/* data */ MOVIE_TITLE_DAT crystal_title_017[8];
/* data */ MOVIE_TITLE_DAT crystal_title_018[7];
/* data */ MOVIE_TITLE_DAT crystal_title_019[6];
/* data */ MOVIE_TITLE_DAT crystal_title_020[10];
/* data */ MOVIE_TITLE_DAT crystal_title_021[10];
/* data */ MOVIE_TITLE_DAT crystal_title_022[7];
/* data */ MOVIE_TITLE_DAT crystal_title_023[5];
/* data */ MOVIE_TITLE_DAT crystal_title_024[5];
/* data */ MOVIE_TITLE_DAT crystal_title_025[4];
/* data */ MOVIE_TITLE_DAT crystal_title_026[5];
/* data */ MOVIE_TITLE_DAT crystal_title_027[6];
/* data */ MOVIE_TITLE_DAT crystal_title_028[8];
/* data */ MOVIE_TITLE_DAT crystal_title_029[7];
/* data */ MOVIE_TITLE_DAT crystal_title_030[7];
/* data */ MOVIE_TITLE_DAT crystal_title_031[8];
/* data */ MOVIE_TITLE_DAT crystal_title_032[9];
/* data */ MOVIE_TITLE_DAT crystal_title_033[6];
/* data */ MOVIE_TITLE_DAT crystal_title_034[6];
/* data */ MOVIE_TITLE_DAT crystal_title_035[8];
/* data */ MOVIE_TITLE_DAT crystal_title_036[9];
/* data */ MOVIE_TITLE_DAT crystal_title_037[8];
/* data */ MOVIE_TITLE_DAT crystal_title_038[6];
/* data */ MOVIE_TITLE_DAT crystal_title_039[8];
/* data */ MOVIE_TITLE_DAT *crystal_title_dat[41];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/debug.c
// *****************************************************************************

/* sdata */ int dbg_spu_mem_disp;
/* sdata */ int dbg_system_mem_disp;
/* sdata */ int dbg_mdl_mem_disp;
/* sdata */ int dbg_cmn_mem_disp;
/* sdata */ int dbg_iop_mem_disp;
/* sdata */ int dbg_ene_no;
/* sdata */ int dbg_enemy_button_pre;
/* sdata */ int dbg_enemy_button;
/* data */ DEBUG_MENU_DATA dbg_menu_data[3];
/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* data */ bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>>>::_S_instanceless;
/* data */ bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent>>::_S_instanceless;
/* data */ bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *>>::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/debug_menu.c
// *****************************************************************************

/* data */ sceVu0IVECTOR s_ivBGColor;
/* data */ DEBUG_MENU dbg_menu_main;
/* data */ DEBUG_MENU dbg_disp_main;
/* data */ DEBUG_MENU dbg_item_main;
/* data */ DEBUG_MENU dbg_film_item;
/* data */ DEBUG_MENU dbg_recovery_item;
/* data */ DEBUG_MENU dbg_event_item;
/* data */ DEBUG_MENU dbg_event_item2;
/* data */ DEBUG_MENU dbg_event_item3;
/* data */ DEBUG_MENU dbg_event_item4;
/* data */ DEBUG_MENU dbg_mem_main;
/* data */ DEBUG_MENU dbg_ene_main;
/* sdata */ DEBUG_MENU *now_tree;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss */ unsigned char PLYR_ITEM type_info node[8];
/* data */ DEBUG_VAR debug_var;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/dmaVif1.c
// *****************************************************************************

/* sbss */ int vu1tag_num;
/* sbss */ float *objwork[4];
/* sbss */ float *objworkdbuf[2][4];
/* sbss */ sceDmaTag *cachetag;
/* sbss */ sceDmaTag *cachetagdbuf[2];
/* sbss */ int tagswap;
/* sbss */ int bVifBufResizeCnt;
/* sbss */ int iSaveNewTagMax;
/* sbss */ int numtag_save;
/* sbss */ sceDmaChan *s_pDmaChan_VIF1;
/* rdata */ int DummyFlushData[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/door/prg/door.c
// *****************************************************************************

/* bss */ fixed_array<DOOR_CTRL, 208> door_ctrl;
/* sbss */ unsigned char DOOR_CTRL type_info node[8];
/* sbss */ u_char lock_exe_step;
/* sdata */ DOOR_LOCK_STATE_CTRL lock_state_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/door/dat/door_lock_dat.c
// *****************************************************************************

/* data */ DOOR_LOCK_INFO door_lock_info[7];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/door_point_dat.c
// *****************************************************************************

/* data */ MAP_DOOR_POINT *menu_map_door_data[18];
/* rdata */ MAP_DOOR_POINT map_soto_door_point[13];
/* rdata */ MAP_DOOR_POINT map_os1_door_point[7];
/* rdata */ MAP_DOOR_POINT map_os2_door_point[2];
/* rdata */ MAP_DOOR_POINT map_os0_door_point[1];
/* rdata */ MAP_DOOR_POINT map_ks1_door_point[20];
/* rdata */ MAP_DOOR_POINT map_ks2_door_point[8];
/* rdata */ MAP_DOOR_POINT map_ks0_door_point[5];
/* rdata */ MAP_DOOR_POINT map_ry1_door_point[16];
/* rdata */ MAP_DOOR_POINT map_ry2_door_point[6];
/* rdata */ MAP_DOOR_POINT map_ry0_door_point[1];
/* rdata */ MAP_DOOR_POINT map_tb1_door_point[16];
/* rdata */ MAP_DOOR_POINT map_tb2_door_point[14];
/* rdata */ MAP_DOOR_POINT map_tb0_door_point[1];
/* rdata */ MAP_DOOR_POINT map_chika_door_point[2];
/* rdata */ MAP_DOOR_POINT map_kur_door_point[3];
/* rdata */ MAP_DOOR_POINT map_kuh_door_point[3];
/* rdata */ MAP_DOOR_POINT map_kuc_door_point[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/draw_env.c
// *****************************************************************************

/* sdata */ qword *(*context_packet_start[2])(/* parameters unknown */);
/* sdata */ void (*context_packet_end[2])(/* parameters unknown */);
/* bss */ long int draw_env_alpha[2];
/* bss */ long int draw_env_test[2];
/* bss */ long int draw_env_zbuf[2];
/* bss */ long int draw_env_tex1[2];
/* bss */ long int draw_env_clamp[2];
/* bss */ long int draw_env_scissor[2];
/* sbss */ long int draw_env_texa;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeException.c
// *****************************************************************************

/* data */ int s_abEnableExcCode[14];
/* data */ char *s_astrException[14];
/* data */ int s_aiDmaCatchChannel[3];
/* bss */ CCC_ERROR("Invalid reference type name.") s_iopExceptionData;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeFile.cpp
// *****************************************************************************

/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data */ __vtbl_ptr_type CFileName virtual table[3];
/* data */ __vtbl_ptr_type CStdioFile virtual table[8];
/* data */ __vtbl_ptr_type CFile virtual table[6];
/* sbss */ unsigned char CFile type_info node[8];
/* bss */ unsigned char CStdioFile type_info node[12];
/* bss */ unsigned char CFileName type_info node[12];
/* sbss */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>> type_info node[8];
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeFindFile.cpp
// *****************************************************************************

/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data */ __vtbl_ptr_type CFindFile virtual table[3];
/* data */ __vtbl_ptr_type ctl::custom_allocator<sce_dirent> virtual table[4];
/* data */ __vtbl_ptr_type ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>> virtual table[4];
/* sbss */ unsigned char ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>> type_info node[8];
/* sbss */ unsigned char ctl::custom_allocator<sce_dirent> type_info node[8];
/* sbss */ unsigned char CFindFile type_info node[8];
/* sbss */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;
/* data */ bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>>>::_S_instanceless;
/* data */ bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent>>::_S_instanceless;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/eeProfile.c
// *****************************************************************************

/* sdata */ int g_iCallStackCount;
/* data */ PROFILEFUNCTION g_aProfileFunction[256];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect.c
// *****************************************************************************

/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam00;
/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam01;
/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam02;
/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam03;
/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam04;
/* data */ SCREEN_EFFECT_PARAMETER ScreenEffectParam05;
/* data */ fixed_array<EFFECT_CONT, 64> efcnt;
/* data */ fixed_array<EFFECT_CONT, 48> efcntm;
/* data */ fixed_array<EFFECT_CONT, 64> efcnt_cnt;
/* data */ fixed_array<EFFECT_CONT, 48> efcntm_cnt;
/* sdata */ reference_fixed_array<SCREEN_EFFECT_PARAMETER *, 6> pScreenEffectParamPtr;
/* sdata */ void *pEffectHeapAdrs;
/* sbss */ unsigned char EFFECT_CONT type_info node[8];
/* bss */ unsigned char SCREEN_EFFECT_PARAMETER *type_info node[12];
/* sbss */ unsigned char SCREEN_EFFECT_PARAMETER type_info node[8];
/* data */ SBTSET msbtset;
/* sdata */ u_char g_bInterlace;
/* bss */ EFF_WRK eff_wrk;
/* sdata */ int look_debugmenu;
/* sbss */ int ScreenEffectStatus;
/* sbss */ int ScreenEffectNo;
/* bss */ MY_MALLOC EffectMallocWrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_butterfly.c
// *****************************************************************************

/* data */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType00;
/* data */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType01;
/* data */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType02;
/* data */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType03;
/* data */ BUTTERFLY_TARGET_PARAMETER ButterflyTargetType04;
/* data */ GRA3DLIGHTDATA ButterflyLight;
/* sdata */ reference_fixed_array<BUTTERFLY_TARGET_PARAMETER *, 5> pButterflyTargetParamPtr;
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss */ unsigned char BUTTERFLY_TARGET_PARAMETER *type_info node[12];
/* sbss */ unsigned char BUTTERFLY_TARGET_PARAMETER type_info node[8];
/* data */ BUTTERFLY_DISP_CTRL ButterFlyDispCtrl;
/* data */ BUTTERFLY_PARTICLE_CTRL ButterFlyParticleCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_ene.c
// *****************************************************************************

/* data */ ENE_DMG_LARGE_HIT_PARAMETER SmallHit;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitType00;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPAType00;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER LargeHitSPBType00;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER SlowHitAType00;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER SlowHitBType00;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSCB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ZeroHitSPB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSCB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER KokuHitSPB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ParalyzeHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ViewHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER ViewHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSCB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER MetsuHitSPB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSCA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSCB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSPA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER RenHitSPB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER TsuiHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER TsuiHitB;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER FuuHitA;
/* data */ ENE_DMG_LARGE_HIT_PARAMETER FuuHitB;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER SmallHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER LargeHitSP_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER SlowHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSC_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER ZeroHitSP_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSC_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER KokuHitSP_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER ParalyzeHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER ViewHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSC_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER MetsuHitSP_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSC_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER RenHitSP_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER TsuiHit_Blur;
/* data */ ENE_DMG_BLUR_CONTRAST_PARAMETER FuuHit_Blur;
/* data */ fixed_array<ENDMG1, 10> enedmg1;
/* data */ ENE_DMG_LARGE_HIT_CTRL EneDmgLargeHitCtrl;
/* sdata */ float enedmg2_sp;
/* sdata */ int SEC0;
/* sdata */ int SEC1;
/* sdata */ int SEC2;
/* sdata */ int SEC3;
/* sdata */ int SEC4;
/* sdata */ int SEC5;
/* sbss */ reference_fixed_array<ENE_DMG_LARGE_HIT_PARAMETER *, 38> pLargeHitParameter;
/* sbss */ reference_fixed_array<ENE_DMG_BLUR_CONTRAST_PARAMETER *, 20> pLargeHitBlurParameter;
/* bss */ fixed_array<TAIL_DMG2_DAT, 48> enedmg2_tail;
/* bss */ fixed_array<NEW_PERTICLE, 48> new_perticle;
/* sbss */ reference_fixed_array<int, 3> alp;
/* sbss */ reference_fixed_array<int, 3> scl;
/* sbss */ reference_fixed_array<int, 3> rot;
/* sbss */ reference_fixed_array<int, 3> ccol;
/* sbss */ reference_fixed_array<int, 3> calp;
/* sbss */ unsigned char ENDMG1 type_info node[8];
/* sbss */ unsigned char ENE_WRK type_info node[8];
/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ unsigned char SPRT_DAT type_info node[8];
/* sbss */ unsigned char NEW_PERTICLE type_info node[8];
/* sbss */ unsigned char float[3][3] type_info node[8];
/* sbss */ unsigned char TAIL_DMG2_DAT type_info node[8];
/* sbss */ unsigned char ENEDMG_PARTICLE_ONE type_info node[8];
/* sbss */ unsigned char int[3] type_info node[8];
/* sbss */ unsigned char ENE_DMG_LARGE_HIT type_info node[8];
/* bss */ unsigned char ENE_DMG_LARGE_HIT_PARAMETER *type_info node[12];
/* bss */ unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER *type_info node[12];
/* sbss */ unsigned char ENE_DMG_LARGE_HIT_PARAMETER type_info node[8];
/* sbss */ unsigned char ENE_DMG_BLUR_CONTRAST_PARAMETER type_info node[8];
/* data */ ENDMG2 enedmg2;
/* data */ ENE_HIT_EFFECT_CTRL EneHitEffectCtrl;
/* sdata */ int eneseal_status;
/* sdata */ int enedmg_status;
/* sbss */ int EneDmgParticleSuctionNum;
/* data */ SWORD_LINE sw_line;
/* data */ ENE_DMG_EFF ene_dmg_eff;
/* data */ SINGLE_LINK_LIST EneParticleList;
/* data */ SINGLE_LINK_LIST EffectEndParticleList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_obj.c
// *****************************************************************************

/* data */ fixed_array<EFFINFO2, 8> efi;
/* bss */ EFF_PARTSBLUR eff_partsblur;
/* sbss */ unsigned char EFFINFO2 type_info node[8];
/* sbss */ unsigned char int[3] type_info node[8];
/* sbss */ unsigned char EFFPOS type_info node[8];
/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ int init_pdef2;
/* rdata */ u_char pdeform_alpha1[289];
/* rdata */ u_char pdeform_alpha2[289];
/* data */ LIGHT_COME_IN_CTRL LightComeInCtrl;
/* data */ SINGLE_LINK_LIST WaterFlowList;
/* data */ SINGLE_LINK_LIST ModelAlphaChangeList;
/* data */ SINGLE_LINK_LIST TourouFreaList;
/* data */ SINGLE_LINK_LIST TourouBaseList;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_oth.c
// *****************************************************************************

/* data */ HAZE_PARAMETER HazeParameter;
/* data */ HAZE_PARAMETER KusabiHazeParameter;
/* data */ HAZE_PARAMETER SaeHazeParameter;
/* sdata */ int stop_lf;
/* sdata */ int haze_stop;
/* data */ DOOR_SEAL_DISAPPEAR_CTRL DoorSealDisappearCtrl;
/* data */ float CandlePolyDat[4][4];
/* data */ float CandleFlameScaleData[150][2];
/* data */ float CandleFlameScaleData2[75][2];
/* bss */ fixed_array<EFF_LEAF, 6> eff_leaf;
/* bss */ fixed_array<HEAT_HAZE, 4> ene_particle;
/* bss */ fixed_array<HEAT_HAZE, 1> amu_particle;
/* bss */ fixed_array<HEAT_HAZE, 5> torch_particle;
/* sbss */ unsigned char HEAT_HAZE type_info node[8];
/* sbss */ unsigned char MANY_CANDLE_PARTICLE type_info node[8];
/* sbss */ unsigned char int[3] type_info node[8];
/* sbss */ unsigned char PARTICLE type_info node[8];
/* sbss */ unsigned char EFF_LEAF type_info node[8];
/* sbss */ unsigned char EFF_LEAF_ONE type_info node[8];
/* sbss */ unsigned char HAZE_PARTICLE type_info node[8];
/* sbss */ int init_pond;
/* sbss */ int init_hhaze;
/* sbss */ int init_newitem;
/* sbss */ int init_torch;
/* sbss */ int init_smoke;
/* sbss */ void *amulet_fire_ret;
/* sbss */ int amulet_fire_flow;
/* sbss */ int amulet_fire_cnt;
/* data */ MANY_CANDLE_LOAD_CTRL ManyCandleLoadCtrl;
/* data */ SINGLE_LINK_LIST ItemEffectList;
/* data */ THUNDER_LIGHT_CTRL ThunderLightCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_pak.c
// *****************************************************************************

/* sdata */ int ndpkt;
/* sdata */ int ndpri;
/* bss */ u_int draw_pri[4096][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_rain.c
// *****************************************************************************

/* bss */ EFFECT_RAIN_CTRL RainCtrl;
/* bss */ EFFECT_SPRAY_CTRL SprayCtrl;
/* bss */ EFFECT_SPRAY_CTRL SprayCtrl2;
/* bss */ EFFECT_DROP_CTRL DropCtrl;
/* rdata */ SPRAY_APPEAR_DATA SprayRect[5];
/* rdata */ SPRAY_APPEAR_DATA SprayRect2[23];
/* rdata */ RAIN_HIT_BOX OutsideBox;
/* rdata */ RAIN_HIT_BOX InsideBox;
/* rdata */ float DropOfWaterPos[35][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_rdr.c
// *****************************************************************************

/* data */ fixed_array<BURN_FIRE, 30> burn_fire;
/* data */ fixed_array<EFFRDR_RSV, 10> pfire_rsv;
/* sbss */ unsigned char EFFRDR_RSV type_info node[8];
/* sbss */ unsigned char BURN_FIRE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_scr.c
// *****************************************************************************

/* data */ EFF_BLUR eff_blur;
/* data */ EFF_FOCUS eff_focus;
/* sdata */ EFF_DEFORM eff_deform;
/* sdata */ short int overlap_passflg[2];
/* sdata */ int SSC_BankNo;
/* bss */ SCREEN_SAVER_CTRL ScreenSaverCtrl;
/* sbss */ unsigned char SCREEN_SAVER_TEX type_info node[8];
/* sbss */ MAKE_DITHER_PATTERN_CTRL MakeDitherPatternCtrl;
/* bss */ DEFWORK dw[25][33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_sub.c
// *****************************************************************************

/* data */ SCRCTRL sc_col;
/* sbss */ unsigned char float[3] type_info node[8];
/* data */ SINGLE_LINK_LIST LeavesList;
/* sbss */ u_long128 *buf;
/* sbss */ u_long128 *buf2;
/* sbss */ u_long128 *bufz;
/* data */ EFFECT_SOUND_CTRL EffectSoundCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/effect_torch.c
// *****************************************************************************

/* data */ TORCH2_PARAMETER TorchType00;
/* data */ TORCH2_PARAMETER TorchType01;
/* data */ TORCH2_PARAMETER TorchType02;
/* data */ TORCH2_PARAMETER TorchType03;
/* data */ TORCH2_PARAMETER TorchType04;
/* data */ TORCH2_PARAMETER TorchType05;
/* data */ TORCH2_PARAMETER TorchType06;
/* data */ TORCH2_PARAMETER TorchType07;
/* data */ TORCH2_PARAMETER TorchType08;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType00;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType01;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType02;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType03;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType04;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType05;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType06;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType07;
/* data */ TORCH2_BURST_PARAMETER TorchBurstType08;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType00;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType01;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType02;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType03;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType04;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType05;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType06;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType07;
/* data */ TORCH2_SPARK_PARAMETER TorchSparkType08;
/* sdata */ reference_fixed_array<TORCH2_PARAMETER *, 9> pTorchParamPtr;
/* sdata */ reference_fixed_array<TORCH2_BURST_PARAMETER *, 9> pTorchBurstParamPtr;
/* sdata */ reference_fixed_array<TORCH2_SPARK_PARAMETER *, 9> pTorchSparkParamPtr;
/* bss */ unsigned char TORCH2_PARAMETER *type_info node[12];
/* bss */ unsigned char TORCH2_BURST_PARAMETER *type_info node[12];
/* bss */ unsigned char TORCH2_SPARK_PARAMETER *type_info node[12];
/* sbss */ unsigned char PARTICLE type_info node[8];
/* sbss */ unsigned char TORCH2_PARAMETER type_info node[8];
/* sbss */ unsigned char TORCH2_BURST_PARAMETER type_info node[8];
/* sbss */ unsigned char TORCH2_SPARK_PARAMETER type_info node[8];
/* data */ TORCH2_BIGFREA_CTRL Torch2BigFreaCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/ene_mot_ctrl.c
// *****************************************************************************

/* data */ ENE_MOT_WRK enemot_ch019anm002[2];
/* data */ ENE_MOT_WRK *enemot_ch019[17];
/* data */ ENE_MOT_WRK enemot_ch021anm010[3];
/* data */ ENE_MOT_WRK enemot_ch021anm011[3];
/* data */ ENE_MOT_WRK enemot_ch021anm012[3];
/* data */ ENE_MOT_WRK *enemot_ch021[13];
/* data */ ENE_MOT_WRK enemot_ch025anm016[3];
/* data */ ENE_MOT_WRK *enemot_ch025[13];
/* data */ ENE_MOT_WRK enemot_ch031anm000[2];
/* data */ ENE_MOT_WRK enemot_ch031anm002[2];
/* data */ ENE_MOT_WRK enemot_ch031anm014[2];
/* data */ ENE_MOT_WRK enemot_ch031anm015[2];
/* data */ ENE_MOT_WRK enemot_ch031anm016[2];
/* data */ ENE_MOT_WRK enemot_ch031anm017[2];
/* data */ ENE_MOT_WRK enemot_ch031anm018[2];
/* data */ ENE_MOT_WRK enemot_ch031anm019[2];
/* data */ ENE_MOT_WRK *enemot_ch031[15];
/* sbss */ reference_fixed_array<ENE_MOT_WRK **, 63> ene_mot_char_tbl;
/* bss */ fixed_array<ENE_MOT_CTRL, 10> ene_mot_ctrl;
/* sbss */ unsigned char ENE_MOT_CTRL type_info node[8];
/* bss */ unsigned char ENE_MOT_WRK **type_info node[12];
/* bss */ unsigned char ENE_MOT_WRK *type_info node[12];
/* sbss */ unsigned char ENE_MOT_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy.c
// *****************************************************************************

/* data */ fixed_array<ENE_WRK, 10> ene_wrk;
/* data */ DITHER_TYPE dit_type[9];
/* data */ DEFORM_TYPE def_type1[10];
/* data */ DEFORM_TYPE def_type2[10];
/* sdata */ reference_fixed_array<int, 3> ew_combo_tbl;
/* sbss */ unsigned char ENE_WRK type_info node[8];
/* sbss */ unsigned char G3DLIGHT type_info node[8];
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ unsigned char EFFECT_CONT type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss */ int earth_quake_cnt;
/* sbss */ int enemy_act_lock_cnt;
/* sbss */ int enemy_draw_lock_cnt;
/* sbss */ int enemy_anim_lock_cnt;
/* sbss */ int iPreNearestNoHP;
/* sbss */ int iPreNearestNo;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy_act.c
// *****************************************************************************

/* sdata */ int debug_alg;
/* data */ void (*CommJmpContTbl[74])(/* parameters unknown */);
/* data */ void (*CommJmpMoveTbl[22])(/* parameters unknown */);
/* data */ void (*CommJmpBrnchTbl[43])(/* parameters unknown */);
/* data */ void (*CommJmpEffTbl[6])(/* parameters unknown */);
/* data */ void (*BCommJmpTbl[8])(/* parameters unknown */);
/* sbss */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/enemy_dat.c
// *****************************************************************************

/* data */ ENE_DAT jene_dat[312];
/* sdata */ int g_iNumJeneDat;
/* data */ AENE_DAT aene_dat[205];
/* bss */ ENE_DAT_SAVE jene_dat_save[312];
/* bss */ ENE_DAT_SAVE aene_dat_save[205];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_change.c
// *****************************************************************************

/* bss */ fixed_array<EV_CHANGE_CTRL, 30> ev_change_ctrl;
/* sbss */ unsigned char EV_CHANGE_CTRL type_info node[8];
/* sbss */ unsigned char EVENT_STATE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_disp.c
// *****************************************************************************

/* bss */ EV_DISP2D_CTRL ev_disp2d_ctrl;
/* sbss */ EV_CHAPTER_DISP ev_chapter_disp;
/* bss */ EV_ITEM_NAME_DISP ev_item_name_disp;
/* sbss */ void *ev_disp2d_addr;
/* sbss */ void *chapter_load_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/dat/ev_disp_dat.c
// *****************************************************************************

/* data */ SPRT_DAT ev_disp2d_dat[2];
/* data */ SPRT_DAT ev_chapter_dat[2];
/* sdata */ reference_fixed_array<int, 11> chapter_tim_file;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_ene.c
// *****************************************************************************

/* bss */ ENE_LOAD_DATS ev_ene_dats[66][4];
/* bss */ ENE_DATS ene_dats[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_exe.c
// *****************************************************************************

/* bss */ fixed_array<EV_EXE_CTRL, 150> ev_exe_ctrl;
/* sbss */ unsigned char EV_EXE_CTRL type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_get.c
// *****************************************************************************

/* sbss */ unsigned char EVENT_STATE type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_macro.c
// *****************************************************************************

/* data */ EV_EXE_WRK ev_exe_wrk[173];
/* data */ IF_COND_WRK if_cond_wrk[8];
/* sdata */ char synchro_mode_flg;
/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data */ __vtbl_ptr_type CFileName virtual table[3];
/* bss */ fixed_array<EV_SOUND_CTRL, 30> ev_sound_ctrl;
/* bss */ fixed_array<EV_STREAM_CTRL, 2> ev_stream_ctrl;
/* bss */ fixed_array<EV_GHOST_CTRL, 10> ev_ghost_ctrl;
/* bss */ fixed_array<EV_SAVE_STREAM, 2> ev_save_stream;
/* bss */ fixed_array<EV_SAVE_OBJ_STREAM, 2> ev_save_obj_stream;
/* bss */ fixed_array<EV_SAVE_POS_STREAM, 2> ev_save_pos_stream;
/* bss */ unsigned char CFileName type_info node[12];
/* sbss */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss */ unsigned char EV_SAVE_STREAM type_info node[8];
/* sbss */ unsigned char EV_SAVE_OBJ_STREAM type_info node[8];
/* sbss */ unsigned char EV_SAVE_POS_STREAM type_info node[8];
/* sbss */ unsigned char EV_SOUND_CTRL type_info node[8];
/* sbss */ unsigned char EV_STREAM_CTRL type_info node[8];
/* sbss */ unsigned char EV_GHOST_CTRL type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>> type_info node[8];
/* sbss */ EV_CHOICE_CTRL ev_choice_ctrl;
/* sbss */ EV_EFF_CTRL ev_eff_ctrl;
/* sbss */ EV_SAVE_EFF_DITHER ev_save_eff_dither;
/* sbss */ EV_SAVE_SCREEN_EFFECT ev_save_screen_effect;
/* sbss */ int evPlyrLockCnt;
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_main.c
// *****************************************************************************

/* data */ EV_WRK ev_wrk;
/* sbss */ unsigned char EVENT_STATE type_info node[8];
/* data */ CEventSisterGazeWrk ev_sister_gaze;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_open.c
// *****************************************************************************

/* data */ EV_COND_WRK ev_cond_wrk[48];
/* bss */ fixed_array<EV_CTRL_CENTER, 250> ev_ctrl_center;
/* bss */ fixed_array<EV_PRI_CTRL, 250> ev_pri_ctrl;
/* sbss */ unsigned char EV_CTRL_CENTER type_info node[8];
/* sbss */ unsigned char EV_PRI_CTRL type_info node[8];
/* sdata */ EV_PHOTO_OBJ ev_photo_obj;
/* sbss */ EV_COND_CTRL ev_cond_ctrl;
/* sbss */ short int ev_pri_num;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_phase.c
// *****************************************************************************

/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_se.c
// *****************************************************************************

/* bss */ int ev_se_reg_files[66][5];
/* bss */ int sb_ids[2][5];
/* sbss */ int ev_se_toggle;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_sis.c
// *****************************************************************************

/* bss */ BIT_FLAGS<66> area_sis_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_talk.c
// *****************************************************************************

/* bss */ fixed_array<TALK_TBL, 8> talk_tbl;
/* sbss */ unsigned char TALK_TBL type_info node[8];
/* sbss */ unsigned char TALK_DATA type_info node[8];
/* bss */ TALK_EXE_CTRL talk_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/dat/ev_talk_dat.c
// *****************************************************************************

/* sdata */ reference_fixed_array<int, 8> talk_info;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/event/prg/ev_timer.c
// *****************************************************************************

/* bss */ EV_TIMER_CTRL ev_timer_ctrl;
/* sbss */ unsigned char REGIST_TIMER type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/event_camera.c
// *****************************************************************************

/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ VCI_CAMERA_CTRL vci_cam_ctrl;
/* bss */ EVENT_CAMERA_CTRL event_camera_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/fade.c
// *****************************************************************************

/* data */ FADE_MODE_CTRL fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/fene_entry.c
// *****************************************************************************

/* sdata */ int dbg_random_ghost;
/* rdata */ short int CFEneEntry::aResionAreaTbl[6];
/* rdata */ FUYU_GHOST_DATA CFEneEntry::aFuyuGhostTbl[6][11];
/* rdata */ float CFEneEntry::aFuyuAppearTbl[66][3][4];
/* sdata */ FUYU_GHOST_ONE_DATA fene_dat0[1];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat02_osaka[4];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat02_outdoor[6];
/* sdata */ FUYU_GHOST_ONE_DATA fene_dat02_kiryu[1];
/* sdata */ FUYU_GHOST_ONE_DATA fene_dat02_kureha[1];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat05_kurosawa[6];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat05_outdoor[5];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat05_osaka[4];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat05_kureha[3];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat07_kiryu[3];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat08_outdoor[5];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat08_kiryu[3];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat08_tachibana[3];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat08_osaka[5];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat08_kureha[3];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat09_outdoor[5];
/* rdata */ FUYU_GHOST_ONE_DATA fene_dat09_kurosawa[5];
/* sbss */ int FUYU_GHOST_ONE_DATA::mAppearNum;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/filament.c
// *****************************************************************************

/* sdata */ CBlinkSwitchVariable<char, 90, 118, 6, 90> mBlinkAlphaCore1;
/* sdata */ CBlinkSwitchVariable<char, 90, 112, 11, 90> mBlinkAlphaCore2;
/* sdata */ CBlinkSwitchVariable<char, 90, 116, 13, 90> mBlinkAlphaWhole1;
/* sdata */ CBlinkSwitchVariable<char, 75, 112, 17, 75> mBlinkAlphaWhole2;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/file.c
// *****************************************************************************

/* data */ FILE_DAT *file_dat_tbl[5];
/* bss */ PLYR_FILE plyr_file;
/* bss */ char *plyr_file_tbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/file_dat.c
// *****************************************************************************

/* data */ FILE_DAT file_pocketbook[42];
/* data */ FILE_DAT file_scrap[42];
/* data */ FILE_DAT file_oldbook[40];
/* data */ FILE_DAT file_photograph[26];
/* data */ FILE_DAT file_map[10];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/file_tex_dat.c
// *****************************************************************************

/* sdata */ int file_tex_pack[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/film_no.c
// *****************************************************************************

/* sdata */ MyPoint aTypeNumPoint[2];
/* sdata */ MyPoint aTypeCharPoint[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/finder.c
// *****************************************************************************

/* sdata */ int sp_chance_mode;
/* sdata */ int sp_chance_alpha;
/* sdata */ float sp_rot1;
/* sdata */ float sp_rot2;
/* sdata */ int finder_sound_bank_id;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss */ int finder_draw_lock;
/* data */ ENEDMGLINE_WRK enedmgline_wrk;
/* data */ INFO_WRK info_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/finder_camera.c
// *****************************************************************************

/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/enemy/fly_ctrl.c
// *****************************************************************************

/* data */ FLY_DATA fly_dat[6];
/* bss */ fixed_array<FLY_WRK, 40> fly_wrk;
/* sbss */ unsigned char FLY_WRK type_info node[8];
/* sbss */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/fod.c
// *****************************************************************************

/* data */ GRA3DLIGHTDATA FodLight;
/* sbss */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ unsigned char G3DLIGHT type_info node[8];
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* data */ float fod_cmn_mtx[4][4];
/* data */ FOD_EFF_PARAM eff_param;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/foot_se.c
// *****************************************************************************

/* data */ int se_footDatList[280][2];
/* data */ int foot_se_label_tbl[18];
/* bss */ FOOT_SE_MANAGE foot_se_manage[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/freq_camera.c
// *****************************************************************************

/* data */ float freqcam[14];
/* data */ float fovcam[3];
/* bss */ FREQ_CAM freq_cam_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/effect/g2d_debug.c
// *****************************************************************************

/* sdata */ int dither_alp;
/* sdata */ int dither_col;
/* sdata */ int sbtset_old;
/* sdata */ int hint_test_sw;
/* sdata */ int hint_test_posx;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/g2d_draw.c
// *****************************************************************************

/* sdata */ u_char gInterlace;
/* data */ PK2D_WRK pk2d_wrk;
/* sdata */ VIF1_GS_PACKET_CTRL vif1gs;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/g2d_main.c
// *****************************************************************************

/* data */ SPRT_DAT effdat[98];
/* data */ SPRT_DAT fntdat[6];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sdata */ G2D_WRK g2d_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dCore.c
// *****************************************************************************

/* sdata */ G3DCOREOBJECT *s_pObject;
/* sdata */ LPFUNC_SETGSREGISTER IG3DCompatible::s_pFuncSetGsRegister;
/* sdata */ LPFUNC_SETGSREGISTERS IG3DCompatible::s_pFuncSetGsRegisters;
/* sdata */ LPFUNC_GETGSREGISTERREF IG3DCompatible::s_pFuncGetGsRegisterRef;
/* sdata */ LPFUNC_SETTRANSFORM IG3DCompatible::s_pFuncSetTransform;
/* sdata */ LPFUNC_GETTRANSFORMREF IG3DCompatible::s_pFuncGetTransformRef;
/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;
/* rdata */ LPFUNC_CALCCOLORDATA s_apfCalcColorData[3];
/* rdata */ LPFUNC_LOADMATERIAL s_apfLoadMaterial[3];
/* rdata */ LPFUNC_LOADCOLOR s_apfLoadColor[3];
/* rdata */ LPFUNC_LOADCOLORCOEFF s_apfLoadColorCoeff[3];
/* rdata */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorDirectionalLight[3];
/* rdata */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorPointLight[3];
/* rdata */ LPFUNC_CALCVERTEXCOLOR s_apfCalcVertexColorSpotLight[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dDebug.c
// *****************************************************************************

/* sdata */ int s_bPrintConsoleInfinitely;
/* bss */ _G3DLINEINFO s_LineInfo;
/* bss */ sceGsDBuff db;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dDma.c
// *****************************************************************************

/* sdata */ int s_bOpened;
/* data */ _PACKET_SETGSREGISTER s_packetSetRegister;
/* sbss */ sceDmaChan *s_pDMAChan_VIF1;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dGsWrapper.c
// *****************************************************************************

/* sdata */ LPFUNC_ONDETECTPACKETDOESNOTTERMINATED s_pFuncOnDetectedPacketDoesNotTerminated;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dRenderTarget.cpp
// *****************************************************************************

/* data */ __vtbl_ptr_type CSprite virtual table[3];
/* data */ __vtbl_ptr_type CRenderTarget virtual table[3];
/* data */ __vtbl_ptr_type CAutoTransform<0> virtual table[4];
/* data */ __vtbl_ptr_type CAutoGsRegisters<3> virtual table[4];
/* data */ __vtbl_ptr_type IAutoState virtual table[3];
/* bss */ unsigned char IAutoState type_info node[12];
/* bss */ unsigned char CAutoGsRegisters<3> type_info node[12];
/* bss */ unsigned char CAutoTransform<0> type_info node[12];
/* bss */ unsigned char CRenderTarget type_info node[12];
/* sbss */ unsigned char CSprite type_info node[8];
/* sbss */ unsigned char IG3DCompatible type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dSprite.cpp
// *****************************************************************************

/* data */ __vtbl_ptr_type CSprite virtual table[3];
/* sbss */ unsigned char CSprite type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dTexture.cpp
// *****************************************************************************

/* data */ __vtbl_ptr_type CTexture virtual table[4];
/* data */ __vtbl_ptr_type IG3DResource virtual table[4];
/* sbss */ unsigned char IG3DResource type_info node[8];
/* bss */ unsigned char CTexture type_info node[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dVif1.c
// *****************************************************************************

/* bss */ G3DVIF1REGISTERLAYOUT s_Vif1RegisterLayout;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/g3dVu0Instance.cpp
// *****************************************************************************

/* sdata */ LPFUNC_VU0LOADMATRIX CVu0Matrix::s_pFuncLoadMatrix;
/* sdata */ LPFUNC_VU0APPLYMATRIXWITHOUTTRANS CVu0Matrix::s_pFuncApplyMatrixWithoutTrans;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/gallery.c
// *****************************************************************************

/* data */ void (*GalleryCtrlModule[3])(/* parameters unknown */);
/* data */ void (*GalleryDispModule[3])(/* parameters unknown */);
/* sdata */ void *gal_og_tex_addr;
/* sdata */ void *gal_cmn_tex_addr;
/* sdata */ void *gal_top_tex_addr;
/* sdata */ void *gal_view_tex_addr;
/* sdata */ void *gal_pic_tex_addr;
/* data */ GAL_CTRL gal_ctrl;
/* sdata */ GAL_CTRL *gc;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/gallery_dat.c
// *****************************************************************************

/* data */ SPRT_DAT gallery_tex[118];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/prg/game_data_save.c
// *****************************************************************************

/* sdata */ void *(*GameDataSaveMemGet)(/* parameters unknown */);
/* sdata */ void (*GameDataSaveMemFree)(/* parameters unknown */);
/* sdata */ void *save_load_tex_addr;
/* sdata */ void *outgame_cmn_tex_addr;
/* sdata */ void *game_data_buff_addr;
/* data */ void *game_data_save_snap_addr[5];
/* sbss */ reference_fixed_array<int, 5> game_data_save_snap_tex;
/* bss */ GAME_DATA_SAVE_CTRL game_data_save_ctrl;
/* sbss */ GAME_DATA_SAVE_DISP game_data_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/game_result.c
// *****************************************************************************

/* sdata */ void *clear_bg_tex_addr;
/* sdata */ void *clear_char_tex_addr;
/* sbss */ GAME_RESULT_CTRL game_result_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/prg/game_result_top.c
// *****************************************************************************

/* bss */ GAME_RESULT_TOP_CTRL game_result_top_ctrl;
/* bss */ GAME_RESULT_TOP_DISP game_result_top_disp;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/dat/gameclear_dat.c
// *****************************************************************************

/* data */ SPRT_DAT gameclear_tex[50];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover.c
// *****************************************************************************

/* sbss */ GAMEOVER_FADE_CTRL gameover_fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_dat.c
// *****************************************************************************

/* data */ SPRT_DAT gameover_tex[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu.c
// *****************************************************************************

/* sdata */ void *gameover_bg_tex_addr;
/* sbss */ GAMEOVER_MENU_CTRL gameover_menu_ctrl;
/* bss */ GAMEOVER_MENU_DISP gameover_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu_load.c
// *****************************************************************************

/* sdata */ void *gameover_load_tex_addr;
/* sdata */ void *gameover_load_cmn_tex_addr;
/* sdata */ void *load_data_buff;
/* data */ void *gameover_load_snap_addr[5];
/* sbss */ reference_fixed_array<int, 5> gameover_load_snap_tex;
/* sbss */ GAMEOVER_LOAD_CTRL gameover_load_ctrl;
/* sbss */ GAMEOVER_LOAD_DISP gameover_load_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/gameover/prg/gameover_menu_top.c
// *****************************************************************************

/* sdata */ void *gameover_menu_tex_addr;
/* sdata */ char gameover_menu_top_init_flg;
/* sbss */ GAMEOVER_MENU_TOP_CTRL gameover_menu_top_ctrl;
/* sbss */ GAMEOVER_MENU_TOP_DISP gameover_menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/ghost_seal_door.c
// *****************************************************************************

/* bss */ fixed_array<unsigned char, 9> ghost_seal_door_state;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/ghost_seal_door_dat.c
// *****************************************************************************

/* rdata */ GHOST_SEAL_DOOR_DATA ghost_seal_door_data[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/glob.c
// *****************************************************************************

/* data */ PAD_STRUCT pad[2];
/* data */ short unsigned int *key_now[32];
/* data */ short unsigned int *key_bak[32];
/* data */ SYS_WRK sys_wrk;
/* data */ OPTION_WRK opt_wrk;
/* data */ CAM_CUSTOM_WRK cam_custom_wrk;
/* data */ DEBUG_WRK debug_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/gphase.c
// *****************************************************************************

/* data */ void (*ini_func[94])(/* parameters unknown */);
/* data */ void (*end_func[94])(/* parameters unknown */);
/* data */ GPHASE_ENUM (*pre_func[94])(/* parameters unknown */);
/* data */ GPHASE_ENUM (*after_func[94])(/* parameters unknown */);
/* data */ GPHASE_DAT gphase_tbl[94];
/* bss */ GPHASE_SYS gphase_sys;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3d.c
// *****************************************************************************

/* sdata */ CVu0Matrix g_Vu0Matrix;
/* sdata */ int s_bEnableMonotoneDraw;
/* sdata */ int s_bUseScratchpad;
/* data */ GRA3DSCRATCHPADLAYOUT s_gra3dScratchpadLayoutDefault;
/* sdata */ GRA3DSCRATCHPADLAYOUT *s_pScratchpadLayout;
/* data */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;
/* bss */ G3DLIGHTMANAGE s_LightManage;
/* bss */ G3DLIGHTMANAGE s_WorkLightManage;
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* sbss */ unsigned char G3DLIGHT type_info node[8];
/* bss */ GRA3DCAMERA s_Camera;
/* bss */ G3DFOG s_Fog;
/* bss */ sceVu0IVECTOR s_ivFogColor;
/* bss */ float clip_value[4];
/* bss */ G3DLIGHT s_aLight[39];
/* bss */ G3DLIGHT s_WorkaLight[39];
/* bss */ float s_lmDiffuseLight[3][4];
/* bss */ float s_lmSpecularLight[3][4];
/* bss */ float s_lmDiffuseColor[3][4];
/* bss */ float s_lmSpecularColor[3][4];
/* sbss */ unsigned int s_uiMaterialPrimType;
/* bss */ SGDMATERIALCACHE s_aMaterialCache[3];
/* bss */ GRA3DVU1MATERIALCACHE_POINT s_aVu1MaterialCache_Point[1];
/* bss */ GRA3DVU1MATERIALCACHE_SPOT s_aVu1MaterialCache_Spot[1];
/* bss */ GRA3DVU1MATERIALPACKET_DIRECTIONAL s_MaterialPacketDirectional;
/* bss */ GRA3DVU1MATERIALPACKET_POINT s_MaterialPacketPoint;
/* bss */ GRA3DVU1MATERIALPACKET_SPOT s_MaterialPacketSpot;
/* sbss */ int s_bFogEnable;
/* rdata */ float clip_volume[4];
/* rdata */ float clip_volumev[4];
/* rdata */ G3DVIF1CMDDATA s_aVif1CmdData[6];
/* bss */ int s_bLightEnableList[39];
/* sdata */ LPFUNC_VIEWSCREENMATRIX s_apViewScreenMatrixFunc[2];
/* sdata */ LPFUNC_VIEWCLIPMATRIX s_apViewClipMatrixFunc[2];
/* sdata */ G3DINTFLOAT s_if_1_255;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dConst.c
// *****************************************************************************

/* sdata */ unsigned int g_uiMustBeSetValue;
/* sdata */ G3DCOLOR g_colWhite;
/* sdata */ G3DCOLOR g_colBlack;
/* sdata */ G3DCOLOR g_colGray;
/* sdata */ G3DCOLOR g_colRed;
/* sdata */ G3DCOLOR g_colGreen;
/* sdata */ G3DCOLOR g_colBlue;
/* sdata */ G3DCOLOR g_colSkyblue;
/* sdata */ G3DCOLOR g_colPurple;
/* sdata */ G3DCOLOR g_colYellow;
/* rdata */ float g_v1000[4];
/* rdata */ float g_v0100[4];
/* rdata */ float g_v0010[4];
/* rdata */ float g_v1001[4];
/* rdata */ float g_v0101[4];
/* rdata */ float g_v0011[4];
/* rdata */ float g_v0111[4];
/* rdata */ float g_v1011[4];
/* rdata */ float g_v1101[4];
/* rdata */ float g_v0110[4];
/* rdata */ float g_v1010[4];
/* rdata */ float g_v1100[4];
/* rdata */ float g_v0001[4];
/* rdata */ float g_v1110[4];
/* rdata */ float g_v1111[4];
/* rdata */ float g_v0000[4];
/* rdata */ float g_v111_1[4];
/* data */ XVECTOR g_xv0000;
/* rdata */ float g_matUnit[4][4];
/* rdata */ float g_VUmatUnit[4][4];
/* rdata */ G3DMATERIAL g_NullMaterial;
/* rdata */ G3DLIGHT g_NullLight;
/* rdata */ float g_matUnitScaled[4][4];
/* rdata */ float g_vConvertSI2PS[4];
/* rdata */ float g_vConvertPS2SI[4];
/* rdata */ float g_matConvertSI2PS[4][4];
/* rdata */ float g_matConvertPS2SI[4][4];
/* data */ XMATRIX g_xmatConvertSI2PS;
/* data */ XMATRIX g_xmatConvertPS2SI;
/* rdata */ GRA3DCAMERA g_CameraDefault;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dDebug.c
// *****************************************************************************

/* sbss */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dMisc.c
// *****************************************************************************

/* sdata */ int s_iObjdctIdDrawNoShadow;
/* sdata */ int s_bSpecialLightActive;
/* bss */ G3DLIGHT s_ProjectorSpot;
/* sbss */ unsigned char G3DLIGHT type_info node[8];
/* sbss */ unsigned char GRA3DLIGHTSTATUS type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dSGD.c
// *****************************************************************************

/* sdata */ float *s_pGlobalVertexBuffer[4];
/* sdata */ float *s_pGlobalNormalBuffer[4];
/* sdata */ int s_iGlobalBufferSize;
/* sbss */ unsigned char _LIGHTCOMPAREDATA type_info node[8];
/* sbss */ SGDPROCUNITHEADER *save_tri2_pointer;
/* sbss */ SGDPROCUNITHEADER *save_bw_pointer;
/* sbss */ SGDPROCUNITHEADER *s_ppuhVUVN;
/* sbss */ SGDCOORDINATE *s_pCoordBase;
/* sbss */ SGDFILEHEADER *s_pSGDTop;
/* bss */ CoordCache ccahe;
/* sbss */ int edge_check;
/* sdata */ _LIGHTCOMPAREDATA s_NullLightCompareData;
/* sbss */ SGDPROCUNITHEADER *previous_tri2_prim;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dSGDData.c
// *****************************************************************************

/* sdata */ int s_bEnableOptimizeTexture;
/* sbss */ unsigned char G3DLIGHT type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dShadow.c
// *****************************************************************************

/* data */ GRA3DSHADOWDEBUG g_gra3dShadowDebug;
/* sdata */ int shadow_apgnum;
/* data */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW s_gra3dScratchpadLayoutDefault;
/* sdata */ GRA3DSCRATCHPADLAYOUT_MAPSHADOW *s_pScratchpadLayout;
/* data */ GRA3DCAMERA s_Camera;
/* bss */ CRenderTarget s_RenderTarget;
/* bss */ fixed_stack<SGDFILEHEADER *, 40> s_stackpProjectModel;
/* bss */ unsigned char SGDFILEHEADER *type_info node[12];
/* sbss */ unsigned char SGDFILEHEADER type_info node[8];
/* bss */ float s_vDirection[4];
/* bss */ float s_matIP[4][4];
/* bss */ float s_matCull[4][4];
/* bss */ float s_avBB[9][4];
/* sbss */ SGDFILEHEADER *s_pSourceModel;
/* bss */ G3DLIGHT s_Light;
/* sbss */ float s_fFundamentScale;
/* sbss */ float s_fTextureScale;
/* sbss */ int s_iMaxTextureWidth;
/* sbss */ int s_iMaxTextureHeight;
/* rdata */ float s_matTransTexture[4][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph3d/gra3dTRI2.c
// *****************************************************************************

/* rdata */ SGDTRI2FILEHEADER s_TRI2FileHeaderDefault;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graphics.c
// *****************************************************************************

/* sdata */ int save_cross_line_cnt;
/* bss */ float save_cross_line_pos[10][4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/hina/hina_pzl.c
// *****************************************************************************

/* data */ void (*hina_pad_func[4])(/* parameters unknown */);
/* data */ void (*hina_disp_func[4])(/* parameters unknown */);
/* bss */ HINA_PZL_CTRL hina_pzl_ctrl;
/* bss */ HINA_PZL_DISP hina_pzl_disp;
/* sbss */ HINA_PZL_CROSS_DISP hina_pzl_cross_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/hp_bar.c
// *****************************************************************************

/* sdata */ float disp_hp_per;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/ingame.c
// *****************************************************************************

/* data */ INGAME_WRK ingame_wrk;
/* data */ CMovieRoom movie_room;
/* data */ CFEneEntry fene_entry;
/* sdata */ int iPauseLockTimer;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss */ int before_game_load_wait;
/* sbss */ int load_game_step;
/* sbss */ PHASE_CHANGE_REQS phase_change_reqs;
/* sbss */ PHASE_CANGE_REQ_OUTGAME OutPhaseChangeFlg;
/* sbss */ int story_effect_time;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/ingame_effect.c
// *****************************************************************************

/* bss */ fixed_array<SUBFUNC_PDEFORM_CTRL, 10> SubFuncPDeformCtrl;
/* sbss */ unsigned char SUBFUNC_PDEFORM_CTRL type_info node[8];
/* sbss */ unsigned char ENE_WRK type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* bss */ float ParticleEndPosFiner[4];
/* bss */ float ParticleEndPosNoFiner[4];
/* sbss */ ZERO_PARTICLE_CTRL ZeroParticleCtrl;
/* sbss */ int RenzFlareDispFlg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/item.c
// *****************************************************************************

/* data */ fixed_array<PLYR_ITEM, 58> plyr_item;
/* sbss */ unsigned char PLYR_ITEM type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/dat/item_dat.c
// *****************************************************************************

/* data */ ITEM_DAT item_dat[58];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kai/kai_pzl.c
// *****************************************************************************

/* sdata */ int KaiPzlGameMode;
/* sdata */ int KaiPzlKaiCsl;
/* sdata */ int KaiPzlKaiYesNo;
/* sdata */ int KaiPzlAnimTime;
/* sdata */ int KaiPzlCnt;
/* sdata */ int KaiPzlMsgNo;
/* sdata */ int KaiPzlState;
/* sdata */ int KaiPzlEneType;
/* sdata */ KAIPZL_MODE *KapPzlModeNowPtr;
/* data */ KAIPZL_MODE KaiPzlModeList[9];
/* data */ KAIPZL_ROT KaiPzlRotDat[2][2];
/* sdata */ int KapPzlFadeNext;
/* sbss */ int KaiPzlEnemID[2];
/* sbss */ int KaiPzlRotY[2];
/* bss */ int KaiPzlFadeSt[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza2/kaza2_pzl.c
// *****************************************************************************

/* data */ void (*kaza_pzl_pad_func[6])(/* parameters unknown */);
/* data */ void (*kaza_pzl_disp_func[6])(/* parameters unknown */);
/* bss */ KAZA_PZL_CTRL kaza_pzl_ctrl;
/* bss */ KAZA_PZL_DISP kaza_pzl_disp;
/* bss */ int *kaza2_panel_color[5];
/* rdata */ int kaza2_panel_label_tbl[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza/kaza_pzl.c
// *****************************************************************************

/* data */ void (*kaza_pzl_pad_func[5])(/* parameters unknown */);
/* data */ void (*kaza_pzl_disp_func[5])(/* parameters unknown */);
/* bss */ KAZA_PZL_CTRL kaza_pzl_ctrl;
/* bss */ KAZA_PZL_DISP kaza_pzl_disp;
/* bss */ int *kaza_panel_color[5];
/* rdata */ int kaza_panel_label_tbl[2][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/key_cnf.c
// *****************************************************************************

/* data */ u_short *default_key[32];
/* data */ u_short *default_key_bak[32];
/* data */ u_char key_type[32];
/* data */ short unsigned int *paddat_m[3][26];
/* data */ unsigned char *pushdat_m[3][26];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/lang_check.c
// *****************************************************************************

/* sdata */ void *lang_check_data_buff;
/* sbss */ LANG_CHECK_CTRL lang_check_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/lang_sel.c
// *****************************************************************************

/* sdata */ void *lang_sel_bg_addr;
/* sdata */ void *lang_sel_tex_addr;
/* sdata */ u_char set_language;
/* sbss */ LANG_SEL_CTRL lang_sel_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/lang_sl_dat.c
// *****************************************************************************

/* data */ SPRT_DAT lang_sl_tex[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/level_gem.c
// *****************************************************************************

/* sbss */ char plyr_level_gem;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/loadgame.c
// *****************************************************************************

/* sdata */ void *load_game_tex_addr;
/* sdata */ void *load_data_buff;
/* data */ void *load_game_snap_addr[5];
/* sbss */ reference_fixed_array<int, 5> load_game_snap_tex;
/* bss */ LOAD_GAME_CTRL load_game_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/loading/loading.c
// *****************************************************************************

/* sdata */ void *loading_tex_addr;
/* sbss */ LOADING_CTRL loading_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/loading/loading_dat.c
// *****************************************************************************

/* data */ SPRT_DAT loading_tex[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/logo.c
// *****************************************************************************

/* data */ SPRT_DAT logodat[3];
/* bss */ LOGO_WRK logo_wrk;
/* sbss */ void *tecmo_tex_addr;
/* sbss */ void *project_tex_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/m_plyr_camera.c
// *****************************************************************************

/* data */ CNPlyrCamera m_plyr_camera;
/* sbss */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/main/main.c
// *****************************************************************************

/* sdata */ int softreset_step_timer;
/* sbss */ int *SubTitleAddr;
/* sbss */ int soft_reset_disable;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/man_data.c
// *****************************************************************************

/* data */ int aBoneLabelTbl[16];
/* data */ __vtbl_ptr_type MAN_DATA virtual table[4];
/* sbss */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_area_dat.c
// *****************************************************************************

/* data */ MAP_AREA_DAT map_area_dat[260];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_bgm.c
// *****************************************************************************

/* data */ MAP_BGM_DAT map_bgm_tbl[240];
/* sdata */ int bgm_act_flg;
/* bss */ MAP_BGM_SAVE map_bgmSave;
/* sbss */ int bgm_room_id_save;
/* sbss */ int bgm_play_id;
/* sbss */ int now_str_file;
/* sbss */ int bgm_now_sector;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/camera/map_camera.c
// *****************************************************************************

/* sdata */ u_short fior_tm;
/* sdata */ u_short ori_fior_tm;
/* bss */ MAP_CAMERA_CTRL map_camera_ctrl;
/* bss */ APPROACH_CAMERA app_camera;
/* bss */ QUAKE_CAMERA_CTRL QuakeCameraCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_height.c
// *****************************************************************************

/* data */ float mh_l_scale_vec[4];
/* data */ float mh_b_scale_vec[4];
/* sbss */ fixed_array<MhCtrl *, 2> map_height_ctrl;
/* bss */ unsigned char MhCtrl *type_info node[12];
/* sbss */ unsigned char float[3] type_info node[8];
/* sbss */ unsigned char MhCtrl type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_rectangle.c
// *****************************************************************************

/* sdata */ MDAT_CAM *cam_info;
/* sdata */ int cam_change_flg;
/* sdata */ int cam_hit_flg;
/* sdata */ MDAT_SE *se_info;
/* data */ MapRecBufCtrl map_buf_ctrl[2];
/* data */ MapRecInfo map_rec_info;
/* data */ MapRecInfo map_door_rec_info;
/* data */ float sta_rot_tbl[6];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/map/map_reverb.c
// *****************************************************************************

/* data */ MAP_REVERB_DAT map_reverb_tbl[66];
/* sbss */ int rev_room_id_save;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_room_dat.c
// *****************************************************************************

/* data */ MAP_INFO_DAT map_info_dat[17];
/* data */ ROOM_INFO_DAT room_info_dat[265];
/* data */ HOUSE_INFO_DAT house_info_dat[11];
/* data */ AREA_MAP_TBL area_map_tbl[80];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/map_size_dat.c
// *****************************************************************************

/* data */ MAP_WORLD_POINT map_world_point[17];
/* data */ MAP_SIZE_DAT map_size_dat[17];
/* data */ MAP_SCALL_DAT map_scall_dat[17];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check.c
// *****************************************************************************

/* bss */ MC_CHECK_CTRL mc_check_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check_card.c
// *****************************************************************************

/* bss */ MC_INFO mc_info;
/* bss */ MC_CHECK_CARD_CTRL mc_check_card_ctrl;
/* sbss */ MC_CHECK_CARD_EVERY_FRAME mc_check_card_every_frame;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_check_dir.c
// *****************************************************************************

/* bss */ MC_CHECK_DIR_CTRL mc_check_dir_ctrl;
/* bss */ MC_DIR_INFO mc_dir_info;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_close.c
// *****************************************************************************

/* sbss */ MC_FILE_CLOSE_CTRL mc_file_close_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_all_file.c
// *****************************************************************************

/* bss */ MC_DEL_ALL_FILE_CTRL mc_del_all_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_dir.c
// *****************************************************************************

/* bss */ MC_DIR_DEL_CTRL mc_dir_del_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_del_file.c
// *****************************************************************************

/* bss */ MC_FILE_DEL_CTRL mc_file_del_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_format.c
// *****************************************************************************

/* bss */ MC_FORMAT_CTRL mc_format_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_icon.c
// *****************************************************************************

/* sdata */ void *icon_data_addr;
/* bss */ MC_ICON_CTRL mc_icon_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_icon_sys.c
// *****************************************************************************

/* bss */ MC_ICON_SYS_CTRL mc_icon_sys_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/mc_iconsys_dat.c
// *****************************************************************************

/* rdata */ int mc_bgcolor[4][4];
/* rdata */ float mc_lightdir[3][4];
/* rdata */ float mc_lightcol[3][4];
/* rdata */ float mc_ambient[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_load.c
// *****************************************************************************

/* bss */ MC_LOAD_CTRL mc_load_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make.c
// *****************************************************************************

/* bss */ MC_NEW_MAKE_CTRL mc_new_make_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_all_file.c
// *****************************************************************************

/* bss */ MC_MAKE_ALL_FILE_CTRL mc_make_all_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_dir.c
// *****************************************************************************

/* bss */ MC_MAKE_DIR_CTRL mc_make_dir_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_make_file.c
// *****************************************************************************

/* bss */ MC_MAKE_FILE_CTRL mc_make_file_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_open.c
// *****************************************************************************

/* bss */ MC_FILE_OPEN_CTRL mc_file_open_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_read.c
// *****************************************************************************

/* bss */ MC_FILE_READ_CTRL mc_file_read_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_save.c
// *****************************************************************************

/* bss */ MC_SAVE_CTRL mc_save_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_set_data.c
// *****************************************************************************

/* data */ void (**game_save_data[8])(/* parameters unknown */);
/* sdata */ void (**album_save_data[2])(/* parameters unknown */);
/* bss */ MC_PLAY_DATA_HEAD mc_play_data_head;
/* sbss */ unsigned char TIME_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/mc_title_dat.c
// *****************************************************************************

/* data */ char *game_dir_name[6];
/* data */ char *game_file_name[7];
/* sdata */ char *album1_file_name[1];
/* sdata */ char *album2_file_name[1];
/* sdata */ char *album3_file_name[1];
/* sdata */ char *album4_file_name[1];
/* sdata */ char *album5_file_name[1];
/* rdata */ char mc_icon_name[6][3][31];
/* rdata */ char mc_icon_title[29];
/* rdata */ char mc_icon_sub_title[6][64];
/* rdata */ int icon_data_label[6][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/prg/mc_write.c
// *****************************************************************************

/* bss */ MC_FILE_WRITE_CTRL mc_file_write_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mdldat.c
// *****************************************************************************

/* sdata */ ANI_CODE ch000anm000[4];
/* data */ ANI_CODE ch000anm001[5];
/* data */ ANI_CODE ch000anm002[9];
/* data */ ANI_CODE ch000anm003[9];
/* data */ ANI_CODE ch000anm004[9];
/* data */ ANI_CODE ch000anm005[9];
/* data */ ANI_CODE ch000anm006[11];
/* data */ ANI_CODE ch000anm007[11];
/* data */ ANI_CODE ch000anm008[11];
/* data */ ANI_CODE ch000anm009[11];
/* data */ ANI_CODE ch000anm010[8];
/* data */ ANI_CODE ch000anm011[8];
/* data */ ANI_CODE ch000anm012[11];
/* data */ ANI_CODE ch000anm013[11];
/* data */ ANI_CODE ch000anm014[11];
/* data */ ANI_CODE ch000anm015[11];
/* data */ ANI_CODE ch000anm016[7];
/* data */ ANI_CODE ch000anm017[7];
/* data */ ANI_CODE ch000anm018[7];
/* data */ ANI_CODE ch000anm019[7];
/* data */ ANI_CODE ch000anm020[7];
/* data */ ANI_CODE ch000anm021[7];
/* data */ ANI_CODE ch000anm022[7];
/* data */ ANI_CODE ch000anm023[7];
/* sdata */ ANI_CODE ch000anm024[2];
/* sdata */ ANI_CODE ch000anm025[2];
/* sdata */ ANI_CODE ch000anm026[2];
/* sdata */ ANI_CODE ch000anm027[2];
/* sdata */ ANI_CODE ch000anm028[2];
/* sdata */ ANI_CODE ch000anm029[2];
/* sdata */ ANI_CODE ch000anm030[2];
/* sdata */ ANI_CODE ch000anm031[2];
/* sdata */ ANI_CODE ch000anm032[4];
/* sdata */ ANI_CODE ch000anm033[4];
/* sdata */ ANI_CODE ch000anm034[4];
/* sdata */ ANI_CODE ch000anm035[4];
/* sdata */ ANI_CODE ch000anm036[2];
/* sdata */ ANI_CODE ch000anm037[2];
/* sdata */ ANI_CODE ch000anm038[2];
/* sdata */ ANI_CODE ch000anm039[2];
/* sdata */ ANI_CODE ch000anm040[2];
/* sdata */ ANI_CODE ch000anm041[2];
/* sdata */ ANI_CODE ch000anm042[2];
/* sdata */ ANI_CODE ch000anm043[2];
/* sdata */ ANI_CODE ch000anm044[2];
/* sdata */ ANI_CODE ch000anm045[2];
/* sdata */ ANI_CODE ch000anm046[2];
/* sdata */ ANI_CODE ch000anm047[2];
/* sdata */ ANI_CODE ch000anm048[2];
/* sdata */ ANI_CODE ch000anm049[2];
/* sdata */ ANI_CODE ch000anm050[3];
/* data */ ANI_CODE ch000anm051[5];
/* sdata */ ANI_CODE ch000anm052[3];
/* sdata */ ANI_CODE ch000anm053[3];
/* data */ ANI_CODE ch000anm054[5];
/* sdata */ ANI_CODE ch000anm055[3];
/* sdata */ ANI_CODE ch000anm056[3];
/* sdata */ ANI_CODE ch000anm057[3];
/* sdata */ ANI_CODE ch000anm058[3];
/* sdata */ ANI_CODE ch000anm059[3];
/* sdata */ ANI_CODE ch000anm060[2];
/* sdata */ ANI_CODE ch000anm061[2];
/* sdata */ ANI_CODE ch000anm062[2];
/* sdata */ ANI_CODE ch000anm063[2];
/* sdata */ ANI_CODE ch000anm064[2];
/* data */ ANI_CODE ch000anm065[5];
/* data */ ANI_CODE ch000anm066[5];
/* sdata */ ANI_CODE ch000anm067[2];
/* sdata */ ANI_CODE ch000anm068[4];
/* sdata */ ANI_CODE ch000anm069[2];
/* sdata */ ANI_CODE ch000anm070[2];
/* sdata */ ANI_CODE ch000anm071[2];
/* sdata */ ANI_CODE ch001anm000[4];
/* data */ ANI_CODE ch001anm001[9];
/* sdata */ ANI_CODE ch001anm002[4];
/* data */ ANI_CODE ch001anm003[7];
/* sdata */ ANI_CODE ch001anm004[3];
/* data */ ANI_CODE ch001anm005[6];
/* data */ ANI_CODE ch001anm006[11];
/* data */ ANI_CODE ch001anm007[5];
/* data */ ANI_CODE ch001anm008[7];
/* data */ ANI_CODE ch001anm009[7];
/* data */ ANI_CODE ch001anm010[9];
/* data */ ANI_CODE ch001anm011[9];
/* data */ ANI_CODE ch001anm012[9];
/* data */ ANI_CODE ch001anm013[9];
/* data */ ANI_CODE ch001anm014[7];
/* data */ ANI_CODE ch001anm015[7];
/* data */ ANI_CODE ch001anm016[9];
/* data */ ANI_CODE ch001anm017[9];
/* data */ ANI_CODE ch001anm018[7];
/* data */ ANI_CODE ch001anm019[7];
/* data */ ANI_CODE ch001anm020[7];
/* data */ ANI_CODE ch001anm021[7];
/* data */ ANI_CODE ch001anm022[7];
/* data */ ANI_CODE ch001anm023[7];
/* data */ ANI_CODE ch001anm024[7];
/* data */ ANI_CODE ch001anm025[7];
/* sdata */ ANI_CODE ch001anm026[2];
/* sdata */ ANI_CODE ch001anm027[2];
/* sdata */ ANI_CODE ch001anm028[3];
/* data */ ANI_CODE ch001anm029[5];
/* sdata */ ANI_CODE ch001anm030[3];
/* sdata */ ANI_CODE ch001anm031[3];
/* data */ ANI_CODE ch001anm032[5];
/* sdata */ ANI_CODE ch001anm033[3];
/* sdata */ ANI_CODE ch001anm034[3];
/* sdata */ ANI_CODE ch001anm035[3];
/* sdata */ ANI_CODE ch001anm036[2];
/* sdata */ ANI_CODE ch001anm037[2];
/* sdata */ ANI_CODE ch001anm038[2];
/* sdata */ ANI_CODE ch001anm039[2];
/* sdata */ ANI_CODE ch001anm040[2];
/* data */ ANI_CODE ch001anm041[6];
/* sdata */ ANI_CODE ch001anm042[2];
/* data */ ANI_CODE ch001anm043[11];
/* data */ ANI_CODE ch001anm044[5];
/* sdata */ ANI_CODE ch001anm045[3];
/* data */ ANI_CODE ch003anm000[6];
/* sdata */ ANI_CODE ch003anm002[4];
/* sdata */ ANI_CODE ch003anm006[4];
/* sdata */ ANI_CODE ch003anm010[2];
/* sdata */ ANI_CODE ch003anm011[2];
/* sdata */ ANI_CODE ch003anm012[2];
/* sdata */ ANI_CODE ch003anm013[2];
/* sdata */ ANI_CODE ch003anm015[2];
/* sdata */ ANI_CODE ch005anm000[4];
/* sdata */ ANI_CODE ch005anm001[4];
/* sdata */ ANI_CODE ch005anm002[4];
/* sdata */ ANI_CODE ch005anm003[4];
/* sdata */ ANI_CODE ch010anm000[4];
/* sdata */ ANI_CODE ch010anm002[4];
/* sdata */ ANI_CODE ch010anm006[3];
/* sdata */ ANI_CODE ch010anm007[2];
/* data */ ANI_CODE ch010anm008[5];
/* sdata */ ANI_CODE ch010anm009[2];
/* sdata */ ANI_CODE ch010anm010[3];
/* sdata */ ANI_CODE ch010anm011[3];
/* sdata */ ANI_CODE ch010anm012[3];
/* sdata */ ANI_CODE ch010anm013[3];
/* sdata */ ANI_CODE ch010anm015[2];
/* sdata */ ANI_CODE ch011anm000[4];
/* sdata */ ANI_CODE ch011anm002[4];
/* sdata */ ANI_CODE ch011anm006[3];
/* sdata */ ANI_CODE ch011anm007[2];
/* data */ ANI_CODE ch011anm008[5];
/* sdata */ ANI_CODE ch011anm009[2];
/* sdata */ ANI_CODE ch011anm010[3];
/* sdata */ ANI_CODE ch011anm011[3];
/* sdata */ ANI_CODE ch011anm013[3];
/* sdata */ ANI_CODE ch012anm000[4];
/* sdata */ ANI_CODE ch012anm002[4];
/* sdata */ ANI_CODE ch012anm010[2];
/* sdata */ ANI_CODE ch013anm000[4];
/* sdata */ ANI_CODE ch013anm002[4];
/* sdata */ ANI_CODE ch013anm006[3];
/* sdata */ ANI_CODE ch013anm007[2];
/* data */ ANI_CODE ch013anm008[5];
/* sdata */ ANI_CODE ch013anm009[2];
/* sdata */ ANI_CODE ch013anm010[2];
/* sdata */ ANI_CODE ch013anm011[2];
/* sdata */ ANI_CODE ch013anm012[2];
/* sdata */ ANI_CODE ch013anm013[2];
/* sdata */ ANI_CODE ch013anm014[4];
/* data */ ANI_CODE ch013anm015[6];
/* data */ ANI_CODE ch013anm016[5];
/* sdata */ ANI_CODE ch013anm017[2];
/* sdata */ ANI_CODE ch013anm018[4];
/* data */ ANI_CODE ch014anm000[5];
/* sdata */ ANI_CODE ch015anm000[4];
/* sdata */ ANI_CODE ch015anm002[4];
/* sdata */ ANI_CODE ch015anm004[4];
/* sdata */ ANI_CODE ch015anm005[4];
/* sdata */ ANI_CODE ch015anm006[3];
/* sdata */ ANI_CODE ch015anm007[2];
/* data */ ANI_CODE ch015anm008[5];
/* sdata */ ANI_CODE ch015anm009[2];
/* sdata */ ANI_CODE ch015anm010[3];
/* sdata */ ANI_CODE ch015anm011[3];
/* sdata */ ANI_CODE ch015anm012[3];
/* sdata */ ANI_CODE ch015anm013[3];
/* sdata */ ANI_CODE ch015anm014[4];
/* sdata */ ANI_CODE ch015anm015[2];
/* data */ ANI_CODE ch015anm016[7];
/* sdata */ ANI_CODE ch015anm017[3];
/* sdata */ ANI_CODE ch015anm018[2];
/* sdata */ ANI_CODE ch015anm019[2];
/* sdata */ ANI_CODE ch015anm020[2];
/* sdata */ ANI_CODE ch017anm000[4];
/* sdata */ ANI_CODE ch017anm002[4];
/* sdata */ ANI_CODE ch017anm004[4];
/* sdata */ ANI_CODE ch017anm005[4];
/* sdata */ ANI_CODE ch017anm006[2];
/* sdata */ ANI_CODE ch017anm007[2];
/* sdata */ ANI_CODE ch017anm008[4];
/* sdata */ ANI_CODE ch017anm009[2];
/* sdata */ ANI_CODE ch017anm010[2];
/* sdata */ ANI_CODE ch017anm011[2];
/* sdata */ ANI_CODE ch017anm012[2];
/* sdata */ ANI_CODE ch017anm013[2];
/* sdata */ ANI_CODE ch017anm014[4];
/* sdata */ ANI_CODE ch017anm015[2];
/* data */ ANI_CODE ch017anm016[6];
/* sdata */ ANI_CODE ch017anm017[2];
/* sdata */ ANI_CODE ch017anm018[2];
/* sdata */ ANI_CODE ch017anm019[2];
/* sdata */ ANI_CODE ch017anm020[2];
/* sdata */ ANI_CODE ch018anm000[4];
/* sdata */ ANI_CODE ch018anm002[4];
/* sdata */ ANI_CODE ch018anm006[2];
/* sdata */ ANI_CODE ch018anm007[2];
/* sdata */ ANI_CODE ch018anm008[4];
/* sdata */ ANI_CODE ch018anm014[4];
/* sdata */ ANI_CODE ch019anm000[4];
/* sdata */ ANI_CODE ch019anm002[4];
/* sdata */ ANI_CODE ch019anm006[3];
/* sdata */ ANI_CODE ch019anm007[2];
/* data */ ANI_CODE ch019anm008[5];
/* sdata */ ANI_CODE ch019anm009[2];
/* sdata */ ANI_CODE ch019anm010[2];
/* sdata */ ANI_CODE ch019anm011[2];
/* sdata */ ANI_CODE ch019anm012[2];
/* sdata */ ANI_CODE ch019anm013[2];
/* sdata */ ANI_CODE ch019anm014[4];
/* sdata */ ANI_CODE ch019anm015[2];
/* sdata */ ANI_CODE ch019anm016[2];
/* sdata */ ANI_CODE ch019anm017[2];
/* sdata */ ANI_CODE ch019anm018[3];
/* sdata */ ANI_CODE ch019anm019[3];
/* sdata */ ANI_CODE ch019anm020[2];
/* sdata */ ANI_CODE ch019anm021[4];
/* sdata */ ANI_CODE ch020anm000[4];
/* sdata */ ANI_CODE ch020anm002[4];
/* sdata */ ANI_CODE ch020anm006[2];
/* sdata */ ANI_CODE ch020anm007[2];
/* sdata */ ANI_CODE ch020anm008[4];
/* sdata */ ANI_CODE ch020anm009[2];
/* sdata */ ANI_CODE ch020anm010[2];
/* sdata */ ANI_CODE ch020anm011[2];
/* sdata */ ANI_CODE ch020anm012[2];
/* sdata */ ANI_CODE ch020anm013[2];
/* sdata */ ANI_CODE ch020anm014[2];
/* sdata */ ANI_CODE ch020anm015[2];
/* sdata */ ANI_CODE ch020anm016[2];
/* sdata */ ANI_CODE ch020anm017[2];
/* sdata */ ANI_CODE ch021anm000[4];
/* sdata */ ANI_CODE ch021anm002[4];
/* sdata */ ANI_CODE ch021anm006[2];
/* sdata */ ANI_CODE ch021anm007[2];
/* sdata */ ANI_CODE ch021anm008[4];
/* sdata */ ANI_CODE ch021anm009[2];
/* sdata */ ANI_CODE ch021anm010[2];
/* sdata */ ANI_CODE ch021anm011[2];
/* sdata */ ANI_CODE ch021anm012[2];
/* sdata */ ANI_CODE ch021anm013[2];
/* data */ ANI_CODE ch021anm014[5];
/* sdata */ ANI_CODE ch021anm015[2];
/* sdata */ ANI_CODE ch021anm016[4];
/* sdata */ ANI_CODE ch022anm000[4];
/* sdata */ ANI_CODE ch022anm002[4];
/* sdata */ ANI_CODE ch022anm006[3];
/* sdata */ ANI_CODE ch022anm007[2];
/* data */ ANI_CODE ch022anm008[5];
/* sdata */ ANI_CODE ch022anm009[2];
/* sdata */ ANI_CODE ch022anm010[3];
/* sdata */ ANI_CODE ch022anm011[3];
/* sdata */ ANI_CODE ch022anm012[3];
/* sdata */ ANI_CODE ch022anm013[3];
/* data */ ANI_CODE ch022anm014[5];
/* sdata */ ANI_CODE ch022anm015[3];
/* sdata */ ANI_CODE ch022anm016[4];
/* sdata */ ANI_CODE ch024anm000[4];
/* sdata */ ANI_CODE ch024anm002[4];
/* sdata */ ANI_CODE ch024anm006[2];
/* sdata */ ANI_CODE ch024anm007[2];
/* sdata */ ANI_CODE ch024anm008[4];
/* sdata */ ANI_CODE ch024anm009[2];
/* sdata */ ANI_CODE ch024anm010[2];
/* sdata */ ANI_CODE ch024anm011[2];
/* sdata */ ANI_CODE ch024anm012[2];
/* sdata */ ANI_CODE ch024anm013[2];
/* sdata */ ANI_CODE ch024anm014[2];
/* sdata */ ANI_CODE ch024anm015[2];
/* sdata */ ANI_CODE ch024anm016[2];
/* sdata */ ANI_CODE ch024anm017[2];
/* sdata */ ANI_CODE ch024anm018[2];
/* sdata */ ANI_CODE ch024anm019[4];
/* sdata */ ANI_CODE ch024anm020[2];
/* sdata */ ANI_CODE ch025anm000[4];
/* sdata */ ANI_CODE ch025anm002[4];
/* sdata */ ANI_CODE ch025anm006[3];
/* sdata */ ANI_CODE ch025anm007[2];
/* data */ ANI_CODE ch025anm008[5];
/* sdata */ ANI_CODE ch025anm009[2];
/* sdata */ ANI_CODE ch025anm010[3];
/* sdata */ ANI_CODE ch025anm011[3];
/* sdata */ ANI_CODE ch025anm012[3];
/* sdata */ ANI_CODE ch025anm013[3];
/* sdata */ ANI_CODE ch025anm014[2];
/* sdata */ ANI_CODE ch025anm015[2];
/* sdata */ ANI_CODE ch025anm016[4];
/* sdata */ ANI_CODE ch026anm000[4];
/* sdata */ ANI_CODE ch026anm002[4];
/* sdata */ ANI_CODE ch026anm003[4];
/* sdata */ ANI_CODE ch026anm004[4];
/* sdata */ ANI_CODE ch026anm005[4];
/* sdata */ ANI_CODE ch026anm006[2];
/* sdata */ ANI_CODE ch026anm007[2];
/* sdata */ ANI_CODE ch026anm008[4];
/* sdata */ ANI_CODE ch026anm009[2];
/* sdata */ ANI_CODE ch026anm010[2];
/* sdata */ ANI_CODE ch026anm011[2];
/* sdata */ ANI_CODE ch026anm012[2];
/* sdata */ ANI_CODE ch026anm013[2];
/* sdata */ ANI_CODE ch026anm014[2];
/* sdata */ ANI_CODE ch026anm015[4];
/* sdata */ ANI_CODE ch026anm016[4];
/* sdata */ ANI_CODE ch026anm017[2];
/* sdata */ ANI_CODE ch026anm018[2];
/* sdata */ ANI_CODE ch026anm019[2];
/* sdata */ ANI_CODE ch026anm020[2];
/* sdata */ ANI_CODE ch026anm021[2];
/* sdata */ ANI_CODE ch027anm000[4];
/* sdata */ ANI_CODE ch027anm002[4];
/* sdata */ ANI_CODE ch027anm004[4];
/* sdata */ ANI_CODE ch027anm005[4];
/* sdata */ ANI_CODE ch027anm006[3];
/* sdata */ ANI_CODE ch027anm007[2];
/* sdata */ ANI_CODE ch027anm008[4];
/* sdata */ ANI_CODE ch027anm009[2];
/* sdata */ ANI_CODE ch027anm010[2];
/* sdata */ ANI_CODE ch027anm011[2];
/* sdata */ ANI_CODE ch027anm012[2];
/* sdata */ ANI_CODE ch027anm013[2];
/* sdata */ ANI_CODE ch027anm014[2];
/* sdata */ ANI_CODE ch027anm015[2];
/* sdata */ ANI_CODE ch027anm016[2];
/* sdata */ ANI_CODE ch027anm017[4];
/* data */ ANI_CODE ch027anm018[5];
/* sdata */ ANI_CODE ch027anm019[4];
/* sdata */ ANI_CODE ch027anm020[2];
/* sdata */ ANI_CODE ch028anm000[4];
/* sdata */ ANI_CODE ch028anm002[4];
/* sdata */ ANI_CODE ch028anm004[4];
/* sdata */ ANI_CODE ch028anm005[4];
/* sdata */ ANI_CODE ch028anm006[3];
/* sdata */ ANI_CODE ch028anm007[2];
/* sdata */ ANI_CODE ch028anm008[4];
/* sdata */ ANI_CODE ch028anm009[2];
/* sdata */ ANI_CODE ch028anm010[2];
/* sdata */ ANI_CODE ch028anm011[2];
/* sdata */ ANI_CODE ch028anm012[2];
/* sdata */ ANI_CODE ch028anm013[2];
/* sdata */ ANI_CODE ch028anm014[2];
/* sdata */ ANI_CODE ch028anm015[2];
/* sdata */ ANI_CODE ch028anm016[2];
/* sdata */ ANI_CODE ch028anm017[4];
/* data */ ANI_CODE ch028anm018[5];
/* sdata */ ANI_CODE ch028anm019[4];
/* sdata */ ANI_CODE ch028anm020[2];
/* sdata */ ANI_CODE ch029anm000[4];
/* sdata */ ANI_CODE ch029anm002[4];
/* sdata */ ANI_CODE ch029anm004[4];
/* sdata */ ANI_CODE ch029anm005[4];
/* sdata */ ANI_CODE ch029anm006[3];
/* sdata */ ANI_CODE ch029anm007[2];
/* sdata */ ANI_CODE ch029anm008[4];
/* sdata */ ANI_CODE ch029anm009[2];
/* sdata */ ANI_CODE ch029anm010[2];
/* sdata */ ANI_CODE ch029anm011[2];
/* sdata */ ANI_CODE ch029anm012[2];
/* sdata */ ANI_CODE ch029anm013[2];
/* sdata */ ANI_CODE ch029anm014[2];
/* sdata */ ANI_CODE ch029anm015[2];
/* sdata */ ANI_CODE ch029anm016[2];
/* sdata */ ANI_CODE ch029anm017[4];
/* data */ ANI_CODE ch029anm018[5];
/* sdata */ ANI_CODE ch029anm019[4];
/* sdata */ ANI_CODE ch029anm020[2];
/* sdata */ ANI_CODE ch030anm000[4];
/* sdata */ ANI_CODE ch030anm002[4];
/* sdata */ ANI_CODE ch030anm004[4];
/* sdata */ ANI_CODE ch030anm005[4];
/* sdata */ ANI_CODE ch030anm006[2];
/* sdata */ ANI_CODE ch030anm007[2];
/* sdata */ ANI_CODE ch030anm008[4];
/* sdata */ ANI_CODE ch030anm009[2];
/* sdata */ ANI_CODE ch030anm010[2];
/* sdata */ ANI_CODE ch030anm011[2];
/* sdata */ ANI_CODE ch030anm012[2];
/* sdata */ ANI_CODE ch030anm013[2];
/* sdata */ ANI_CODE ch030anm014[2];
/* sdata */ ANI_CODE ch030anm015[4];
/* sdata */ ANI_CODE ch030anm016[2];
/* sdata */ ANI_CODE ch030anm017[2];
/* sdata */ ANI_CODE ch030anm018[2];
/* sdata */ ANI_CODE ch030anm019[2];
/* sdata */ ANI_CODE ch030anm020[4];
/* sdata */ ANI_CODE ch030anm021[2];
/* sdata */ ANI_CODE ch031anm000[4];
/* sdata */ ANI_CODE ch031anm002[4];
/* sdata */ ANI_CODE ch031anm003[4];
/* sdata */ ANI_CODE ch031anm004[4];
/* sdata */ ANI_CODE ch031anm005[4];
/* sdata */ ANI_CODE ch031anm010[2];
/* sdata */ ANI_CODE ch031anm011[2];
/* sdata */ ANI_CODE ch031anm012[2];
/* sdata */ ANI_CODE ch031anm013[2];
/* sdata */ ANI_CODE ch031anm014[2];
/* sdata */ ANI_CODE ch031anm015[2];
/* sdata */ ANI_CODE ch031anm016[2];
/* sdata */ ANI_CODE ch031anm017[3];
/* sdata */ ANI_CODE ch031anm018[2];
/* sdata */ ANI_CODE ch031anm019[2];
/* sdata */ ANI_CODE ch031anm020[2];
/* sdata */ ANI_CODE ch032anm000[4];
/* sdata */ ANI_CODE ch032anm002[4];
/* sdata */ ANI_CODE ch032anm006[3];
/* sdata */ ANI_CODE ch032anm007[2];
/* data */ ANI_CODE ch032anm008[5];
/* sdata */ ANI_CODE ch032anm009[2];
/* sdata */ ANI_CODE ch032anm010[3];
/* sdata */ ANI_CODE ch032anm011[3];
/* sdata */ ANI_CODE ch032anm012[3];
/* sdata */ ANI_CODE ch032anm013[3];
/* sdata */ ANI_CODE ch032anm014[2];
/* sdata */ ANI_CODE ch032anm015[2];
/* sdata */ ANI_CODE ch032anm016[2];
/* sdata */ ANI_CODE ch032anm017[2];
/* sdata */ ANI_CODE ch032anm018[2];
/* sdata */ ANI_CODE ch033anm000[4];
/* sdata */ ANI_CODE ch033anm002[4];
/* sdata */ ANI_CODE ch033anm003[4];
/* sdata */ ANI_CODE ch033anm004[4];
/* sdata */ ANI_CODE ch033anm005[4];
/* sdata */ ANI_CODE ch033anm006[2];
/* sdata */ ANI_CODE ch033anm007[2];
/* sdata */ ANI_CODE ch033anm008[4];
/* sdata */ ANI_CODE ch033anm009[2];
/* sdata */ ANI_CODE ch033anm014[2];
/* sdata */ ANI_CODE ch033anm015[4];
/* sdata */ ANI_CODE ch033anm016[2];
/* sdata */ ANI_CODE ch035anm000[4];
/* sdata */ ANI_CODE ch035anm002[4];
/* sdata */ ANI_CODE ch035anm003[4];
/* sdata */ ANI_CODE ch035anm004[4];
/* sdata */ ANI_CODE ch035anm005[4];
/* sdata */ ANI_CODE ch035anm010[3];
/* sdata */ ANI_CODE ch035anm011[3];
/* sdata */ ANI_CODE ch035anm012[3];
/* sdata */ ANI_CODE ch035anm013[3];
/* sdata */ ANI_CODE ch035anm014[3];
/* sdata */ ANI_CODE ch035anm015[3];
/* sdata */ ANI_CODE ch036anm000[4];
/* sdata */ ANI_CODE ch036anm002[4];
/* sdata */ ANI_CODE ch036anm003[4];
/* sdata */ ANI_CODE ch036anm004[4];
/* sdata */ ANI_CODE ch036anm005[4];
/* sdata */ ANI_CODE ch036anm010[3];
/* sdata */ ANI_CODE ch036anm011[3];
/* sdata */ ANI_CODE ch036anm012[3];
/* sdata */ ANI_CODE ch036anm013[3];
/* sdata */ ANI_CODE ch036anm014[3];
/* sdata */ ANI_CODE ch036anm015[3];
/* sdata */ ANI_CODE ch037anm000[4];
/* sdata */ ANI_CODE ch037anm002[4];
/* sdata */ ANI_CODE ch037anm003[4];
/* sdata */ ANI_CODE ch037anm004[4];
/* sdata */ ANI_CODE ch037anm005[4];
/* sdata */ ANI_CODE ch037anm010[3];
/* sdata */ ANI_CODE ch037anm011[3];
/* sdata */ ANI_CODE ch037anm012[3];
/* sdata */ ANI_CODE ch037anm013[3];
/* sdata */ ANI_CODE ch037anm014[2];
/* sdata */ ANI_CODE ch037anm015[2];
/* sdata */ ANI_CODE ch037anm016[3];
/* sdata */ ANI_CODE ch037anm017[3];
/* sdata */ ANI_CODE ch038anm000[4];
/* sdata */ ANI_CODE ch038anm002[4];
/* sdata */ ANI_CODE ch038anm006[3];
/* sdata */ ANI_CODE ch038anm007[2];
/* data */ ANI_CODE ch038anm008[5];
/* sdata */ ANI_CODE ch038anm009[2];
/* sdata */ ANI_CODE ch038anm010[3];
/* sdata */ ANI_CODE ch038anm011[3];
/* sdata */ ANI_CODE ch038anm012[3];
/* sdata */ ANI_CODE ch038anm013[3];
/* sdata */ ANI_CODE ch038anm014[2];
/* sdata */ ANI_CODE ch039anm000[4];
/* sdata 3f28b8 */ ANI_CODE ch039anm002[4];
/* sdata 3f28c0 */ ANI_CODE ch039anm006[3];
/* sdata 3f28c8 */ ANI_CODE ch039anm010[3];
/* sdata 3f28d0 */ ANI_CODE ch039anm011[3];
/* sdata 3f28d8 */ ANI_CODE ch039anm012[3];
/* sdata 3f28e0 */ ANI_CODE ch039anm013[3];
/* sdata 3f28e8 */ ANI_CODE ch039anm014[3];
/* data 31e958 */ ANI_CODE ch039anm015[5];
/* sdata 3f28f0 */ ANI_CODE ch039anm016[2];
/* sdata 3f28f8 */ ANI_CODE ch039anm017[2];
/* sdata 3f2900 */ ANI_CODE ch041anm000[4];
/* sdata 3f2908 */ ANI_CODE ch041anm002[4];
/* sdata 3f2910 */ ANI_CODE ch041anm004[4];
/* sdata 3f2918 */ ANI_CODE ch041anm005[4];
/* sdata 3f2920 */ ANI_CODE ch041anm006[2];
/* sdata 3f2928 */ ANI_CODE ch041anm007[2];
/* sdata 3f2930 */ ANI_CODE ch041anm008[4];
/* sdata 3f2938 */ ANI_CODE ch041anm009[2];
/* sdata 3f2940 */ ANI_CODE ch041anm010[2];
/* sdata 3f2948 */ ANI_CODE ch041anm011[2];
/* sdata 3f2950 */ ANI_CODE ch041anm012[2];
/* sdata 3f2958 */ ANI_CODE ch041anm013[2];
/* sdata 3f2960 */ ANI_CODE ch041anm014[2];
/* sdata 3f2968 */ ANI_CODE ch041anm016[2];
/* data 31e968 */ ANI_CODE ch041anm017[5];
/* sdata 3f2970 */ ANI_CODE ch041anm018[2];
/* sdata 3f2978 */ ANI_CODE arei_anm[2];
/* sdata 3f2980 */ ANI_CODE arei_anm1[2];
/* sdata 3f2988 */ ANI_CODE arei_anm2[2];
/* sdata 3f2990 */ ANI_CODE arei_loop_anm[4];
/* sdata 3f2998 */ ANI_CODE arei_loop_anm1[4];
/* sdata 3f29a0 */ ANI_CODE arei_loop_anm2[4];
/* data 31e978 */ ANI_CODE a031_anm000[5];
/* data 31e988 */ ANI_CODE a031_anm001[5];
/* sdata 3f29a8 */ ANI_CODE test_anm00[2];
/* sdata 3f29b0 */ ANI_CODE test_anm01[2];
/* sdata 3f29b8 */ ANI_CODE test_anm02[2];
/* sdata 3f29c0 */ ANI_CODE test_anm03[2];
/* sdata 3f29c8 */ ANI_CODE test_anm04[2];
/* sdata 3f29d0 */ ANI_CODE test_anm05[2];
/* sdata 3f29d8 */ ANI_CODE test_anm06[2];
/* sdata 3f29e0 */ ANI_CODE test_anm07[2];
/* sdata 3f29e8 */ ANI_CODE test_anm08[2];
/* sdata 3f29f0 */ ANI_CODE test_anm09[2];
/* sdata 3f29f8 */ ANI_CODE test_anm10[2];
/* sdata 3f2a00 */ ANI_CODE test_anm11[2];
/* sdata 3f2a08 */ ANI_CODE test_anm12[2];
/* sdata 3f2a10 */ ANI_CODE test_anm13[2];
/* sdata 3f2a18 */ ANI_CODE test_anm14[2];
/* sdata 3f2a20 */ ANI_CODE test_anm15[2];
/* sdata 3f2a28 */ ANI_CODE test_anm16[2];
/* sdata 3f2a30 */ ANI_CODE test_anm17[2];
/* sdata 3f2a38 */ ANI_CODE test_anm18[2];
/* sdata 3f2a40 */ ANI_CODE test_anm19[2];
/* data 31e998 */ ANI_CODE *ch000anm_tbl[73];
/* data 31eac0 */ ANI_CODE *ch001anm_tbl[47];
/* data 31eb80 */ ANI_CODE *ch003anm_tbl[23];
/* data 31ebe0 */ NECK_SPD ch003_neck_spd_tbl[22];
/* data 31ec38 */ ANI_CODE *ch005anm_tbl[5];
/* data 31ec50 */ ANI_CODE *ch010anm_tbl[23];
/* data 31ecb0 */ NECK_SPD ch010_neck_spd_tbl[22];
/* data 31ed08 */ ANI_CODE *ch011anm_tbl[23];
/* data 31ed68 */ NECK_SPD ch011_neck_spd_tbl[22];
/* data 31edc0 */ ANI_CODE *ch012anm_tbl[23];
/* data 31ee20 */ ANI_CODE *ch013anm_tbl[23];
/* data 31ee80 */ ANI_CODE *ch031_a195anm_tbl[23];
/* data 31eee0 */ NECK_SPD ch013_neck_spd_tbl[22];
/* data 31ef38 */ ANI_CODE *ch014anm_tbl[23];
/* data 31ef98 */ ANI_CODE *ch015anm_tbl[23];
/* data 31eff8 */ NECK_SPD ch015_neck_spd_tbl[22];
/* data 31f050 */ ANI_CODE *ch017anm_tbl[23];
/* data 31f0b0 */ NECK_SPD ch017_neck_spd_tbl[22];
/* data 31f108 */ ANI_CODE *ch018anm_tbl[23];
/* data 31f168 */ NECK_SPD ch018_neck_spd_tbl[22];
/* data 31f1c0 */ ANI_CODE *ch019anm_tbl[23];
/* data 31f220 */ ANI_CODE *ch019_a202anm_tbl[23];
/* data 31f280 */ NECK_SPD ch019_neck_spd_tbl[22];
/* data 31f2d8 */ ANI_CODE *ch020anm_tbl[23];
/* data 31f338 */ NECK_SPD ch020_neck_spd_tbl[22];
/* data 31f390 */ ANI_CODE *ch021anm_tbl[23];
/* data 31f3f0 */ NECK_SPD ch021_neck_spd_tbl[22];
/* data 31f448 */ ANI_CODE *ch022anm_tbl[23];
/* data 31f4a8 */ NECK_SPD ch022_neck_spd_tbl[22];
/* data 31f500 */ ANI_CODE *ch024anm_tbl[23];
/* data 31f560 */ ANI_CODE *ch024_a048anm_tbl[23];
/* data 31f5c0 */ ANI_CODE *ch024_a003anm_tbl[23];
/* data 31f620 */ ANI_CODE *ch024_a204anm_tbl[23];
/* data 31f680 */ NECK_SPD ch024_neck_spd_tbl[22];
/* data 31f6d8 */ ANI_CODE *ch025anm_tbl[23];
/* data 31f738 */ NECK_SPD ch025_neck_spd_tbl[22];
/* data 31f790 */ ANI_CODE *ch026anm_tbl[23];
/* data 31f7f0 */ NECK_SPD ch026_neck_spd_tbl[22];
/* data 31f848 */ ANI_CODE *ch027anm_tbl[23];
/* data 31f8a8 */ NECK_SPD ch027_neck_spd_tbl[22];
/* data 31f900 */ ANI_CODE *ch028anm_tbl[23];
/* data 31f960 */ NECK_SPD ch028_neck_spd_tbl[22];
/* data 31f9b8 */ ANI_CODE *ch029anm_tbl[23];
/* data 31fa18 */ NECK_SPD ch029_neck_spd_tbl[22];
/* data 31fa70 */ ANI_CODE *ch030anm_tbl[23];
/* data 31fad0 */ NECK_SPD ch030_neck_spd_tbl[22];
/* data 31fb28 */ ANI_CODE *ch031anm_tbl[23];
/* data 31fb88 */ ANI_CODE *ch031_a060anm_tbl[23];
/* data 31fbe8 */ NECK_SPD ch031_neck_spd_tbl[22];
/* data 31fc40 */ ANI_CODE *ch032anm_tbl[23];
/* data 31fca0 */ NECK_SPD ch032_neck_spd_tbl[22];
/* data 31fcf8 */ ANI_CODE *ch033anm_tbl[23];
/* data 31fd58 */ NECK_SPD ch033_neck_spd_tbl[22];
/* data 31fdb0 */ ANI_CODE *ch035anm_tbl[23];
/* data 31fe10 */ NECK_SPD ch035_neck_spd_tbl[22];
/* data 31fe68 */ ANI_CODE *ch036anm_tbl[23];
/* data 31fec8 */ NECK_SPD ch036_neck_spd_tbl[22];
/* data 31ff20 */ ANI_CODE *ch037anm_tbl[23];
/* data 31ff80 */ NECK_SPD ch037_neck_spd_tbl[22];
/* data 31ffd8 */ ANI_CODE *ch038anm_tbl[23];
/* data 320038 */ ANI_CODE *ch038_a050anm_tbl[23];
/* data 320098 */ NECK_SPD ch038_neck_spd_tbl[22];
/* data 3200f0 */ ANI_CODE *ch039anm_tbl[23];
/* data 320150 */ NECK_SPD ch039_neck_spd_tbl[22];
/* data 3201a8 */ ANI_CODE *ch041anm_tbl[23];
/* data 320208 */ NECK_SPD ch041_neck_spd_tbl[22];
/* sdata 3f2a48 */ ANI_CODE *arei_anm_tbl[2];
/* sdata 3f2a50 */ ANI_CODE *arei_loopanm_tbl[2];
/* data 320260 */ ANI_CODE *a017_arei_anm_tbl[3];
/* data 320270 */ ANI_CODE *ch046_arei_anm_tbl[4];
/* data 320280 */ ANI_CODE *a061_arei_anm_tbl[3];
/* data 320290 */ ANI_CODE *a031_arei_anm_tbl[3];
/* sdata 3f2a58 */ NECK_SPD a031_neck_spd_tbl[2];
/* sdata 3f2a60 */ ANI_CODE *a049_arei_anm_tbl[2];
/* sdata 3f2a68 */ NECK_SPD a049_neck_spd_tbl[1];
/* data 3202a0 */ ANI_CODE *a068_arei_anm_tbl[3];
/* data 3202b0 */ ANI_CODE *a095_arei_anm_tbl[3];
/* data 3202c0 */ ANI_CODE *a129_arei_anm_tbl[3];
/* data 3202d0 */ ANI_CODE *a130_arei_anm_tbl[3];
/* data 3202e0 */ ANI_CODE *a140_arei_anm_tbl[3];
/* data 3202f0 */ ANI_CODE *a141_arei_anm_tbl[3];
/* data 320300 */ ANI_CODE *a111_arei_anm_tbl[3];
/* data 320310 */ ANI_CODE *a145_arei_anm_tbl[3];
/* data 320320 */ ANI_CODE *a191_arei_anm_tbl[3];
/* data 320330 */ ANI_CODE *test_anm_tbl[21];
/* data 320388 */ MANMDL_DAT manmdl_dat[78];
/* data 320ad8 */ FURNMDL_DAT furn_mdl_dat[18];
/* data 320b68 */ ANI_TBL anm_tbl[171];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mdlwork.c
// *****************************************************************************

/* sdata 3f2ab4 */ u_int *plyr_clut_addr;
/* sdata 3f2ab8 */ u_int *plyr_bwc_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/mem_dbg.c
// *****************************************************************************

/* bss 4b5350 */ HEAP_WRK mem_dbg_heap_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/mem_util.c
// *****************************************************************************

/* bss 4b5370 */ HEAP_WRK mem_util_heap_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/memo.c
// *****************************************************************************

/* bss 4b5390 */ fixed_array<PLYR_MEMO, 20> plyr_memo;
/* sbss 3f5418 */ unsigned char PLYR_MEMO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu.c
// *****************************************************************************

/* data 321618 */ MENU_CTRL menu_ctrl[9];
/* sdata 3f2ae0 */ void *menu_caption_adrs;
/* data 321660 */ MENU_WRK menu_wrk;
/* sdata 3f2b00 */ char map_view_flg;
/* bss 4b5430 */ MENU_DISP_CTRL menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_edit.c
// *****************************************************************************

/* data 321670 */ void (*menu_cam_edit_pad[12])(/* parameters unknown */);
/* data 3216a0 */ void (*menu_cam_edit_disp_func[12])(/* parameters unknown */);
/* bss 4b5448 */ fixed_array<DISP_LENS_DATA, 10> disp_lens_data;
/* sbss 3f4dc0 */ reference_fixed_array<int, 3> base_msg_tbl;
/* sbss 3f4dc8 */ reference_fixed_array<int, 10> lens_msg_tbl;
/* sbss 3f5420 */ unsigned char DISP_LENS_DATA type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* bss 4b5470 */ MENU_CAM_EDIT_CTRL menu_cam_edit_ctrl;
/* sbss 3f4dd0 */ MENU_CAM_EDIT_DISP menu_cam_edit_disp;
/* sbss 3f4dd8 */ GEM_ANIM_CTRL base_gem_anim_ctrl;
/* sbss 3f4de0 */ GEM_ANIM_CTRL lens_gem_anim_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_main.c
// *****************************************************************************

/* sdata 3f2ba0 */ void *(*MenuCamMemGetFunc)(/* parameters unknown */);
/* sdata 3f2ba4 */ void (*MenuCamMemFreeFunc)(/* parameters unknown */);
/* sdata 3f2ba8 */ void *menu_cam_tex_addr;
/* sdata 3f2bac */ void *menu_cam_edit_tex_addr;
/* sdata 3f2bb0 */ void (*menu_cam_init_func[2])(/* parameters unknown */);
/* sdata 3f2bb8 */ int (*menu_cam_main_func[2])(/* parameters unknown */);
/* sdata 3f2bc0 */ void (*menu_cam_disp_func[2])(/* parameters unknown */);
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e08 */ MENU_CAM_MAIN_CTRL menu_cam_main_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cam_top.c
// *****************************************************************************

/* data 3216d0 */ void (*menu_cam_top_pad[4])(/* parameters unknown */);
/* data 3216e0 */ void (*menu_cam_top_disp_func[4])(/* parameters unknown */);
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f4e10 */ MENU_CAM_TOP_CTRL menu_cam_top_ctrl;
/* sbss 3f4e18 */ MENU_CAM_TOP_DISP menu_cam_top_disp;
/* rdata 3bd2e0 */ int film_name_tbl[6][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_camera_dat.c
// *****************************************************************************

/* data 3216f0 */ SPRT_DAT menu_camera_tex[299];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cmn.c
// *****************************************************************************

/* data 323c50 */ MENU_CROSS_FADE menu_cross_fade[2];
/* sdata 3f2c80 */ MENU_YES_NO_CTRL menu_yes_no_ctrl;
/* bss 4b5488 */ MENU_DBUFF_CTRL menu_dbuff_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_cmn_dat.c
// *****************************************************************************

/* data 323c68 */ SPRT_DAT menu_cmn_dat[46];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_cmn_disp.c
// *****************************************************************************

/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/menu_dat.c
// *****************************************************************************

/* sdata 3f2cd0 */ int DbmFileD;
/* sdata 3f2cd4 */ int DbmLiCnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_file.c
// *****************************************************************************

/* sdata 3f2d48 */ void *file_cmn_tex_addr;
/* sdata 3f2d4c */ void *file_top_tex_addr;
/* sdata 3f2d50 */ void *file_doc_tex_addr;
/* sdata 3f2d54 */ void *file_photo_tex_addr;
/* sdata 3f2d58 */ void *file_map_tex_addr;
/* sdata 3f2d5c */ void *photo_small_tex_addr;
/* sdata 3f2d60 */ void *map_small_tex_addr;
/* data 324228 */ void (*menu_file_pad[7])(/* parameters unknown */);
/* data 324248 */ void (*file_mode_disp[7])(/* parameters unknown */);
/* bss 4b5498 */ MENU_FILE_CTRL menu_file_ctrl;
/* bss 4b54f0 */ DISP_FILE_DATA disp_file_data;
/* sbss 3f5430 */ unsigned char MENU_REF_CTRL type_info node[8];
/* sbss 3f5428 */ unsigned char MENU_FILE_DATA type_info node[8];
/* sbss 3f4e20 */ MENU_FILE_DISP menu_file_disp;
/* rdata 3bdb00 */ int msg_type_tbl[5];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_file_dat.c
// *****************************************************************************

/* data 324268 */ SPRT_DAT menu_file_tex[75];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_glist_dat.c
// *****************************************************************************

/* data 324bc8 */ SPRT_DAT menu_glist_tex[36];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_item.c
// *****************************************************************************

/* sdata 3f2dd8 */ void *menu_item_tex_addr;
/* data 325048 */ void (*menu_item_pad_func[3])(/* parameters unknown */);
/* bss 4b59f0 */ fixed_array<DISP_ITEM_DATA, 58> disp_item;
/* sbss 3f5438 */ unsigned char DISP_ITEM_DATA type_info node[8];
/* bss 4b5bc0 */ MENU_ITEM_CTRL menu_item_ctrl;
/* sbss 3f4e28 */ MENU_ITEM_DISP menu_item_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_item_dat.c
// *****************************************************************************

/* data 325058 */ SPRT_DAT menu_item[106];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_map.c
// *****************************************************************************

/* sdata 3f2e20 */ void *menu_map_bg_addr;
/* sdata 3f2e24 */ void *map_data_addr;
/* sdata 3f2e28 */ void *snap_data_addr;
/* bss 4b5bd0 */ MENU_MAP_DISP menu_map_disp;
/* bss 4b5be8 */ MENU_MAP_CTRL menu_map_ctrl;
/* rdata 3be168 */ int map_label_tbl[8][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_map_dat.c
// *****************************************************************************

/* data 325d98 */ SPRT_DAT menu_map_tex[57];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_map_mapdata_dat.c
// *****************************************************************************

/* data 3264b8 */ SPRT_DAT menu_map_mapdata_tex[265];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_memo.c
// *****************************************************************************

/* sdata 3f2e78 */ void *menu_memo_tex_addr;
/* data 3285d8 */ void (*menu_memo_pad_func[3])(/* parameters unknown */);
/* data 3285e8 */ void (*menu_memo_disp_func[3])(/* parameters unknown */);
/* bss 4b5c00 */ fixed_array<DISP_MEMO_DATA, 20> disp_memo_data;
/* sbss 3f5440 */ unsigned char DISP_MEMO_DATA type_info node[8];
/* bss 4b5ca0 */ MENU_MEMO_CTRL menu_memo_ctrl;
/* sbss 3f4e30 */ MENU_MEMO_DISP menu_memo_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_memo_dat.c
// *****************************************************************************

/* data 3285f8 */ SPRT_DAT menu_memo_tex[64];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_photo.c
// *****************************************************************************

/* sdata 3f2ec0 */ void *menu_photo_tex_addr;
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* bss 4b5cb0 */ MENU_PHOTO_CTRL menu_photo_ctrl;
/* sbss 3f4e38 */ MENU_PHOTO_DISP menu_photo_disp;
/* rdata 3be8f8 */ int csr_num[8][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_photo_dat.c
// *****************************************************************************

/* data 328df8 */ SPRT_DAT menu_photo[221];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_radio.c
// *****************************************************************************

/* sdata 3f2f08 */ void *menu_radio_tex_addr;
/* sdata 3f2f0c */ int menu_radio_stream_id;
/* sdata 3f2f10 */ u_char crystal_title_debug_flg;
/* bss 4b5cc0 */ fixed_array<DISP_CRYSTAL_DATA, 40> disp_crystal_data;
/* sbss 3f5448 */ unsigned char DISP_CRYSTAL_DATA type_info node[8];
/* bss 4b5e00 */ MENU_RADIO_CTRL menu_radio_ctrl;
/* bss 4b5e18 */ MENU_RADIO_DISP menu_radio_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_radio_dat.c
// *****************************************************************************

/* rdata 3beb40 */ int play_cap_tbl[5];
/* rdata 3beb58 */ int stop_cap_tbl_1[5];
/* rdata 3beb70 */ int stop_cap_tbl_2[5];
/* data 32a998 */ SPRT_DAT menu_radio_tex[37];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_soul.c
// *****************************************************************************

/* sdata 3f2f70 */ void *menu_soul_tex_addr;
/* sdata 3f2f74 */ char list_comp_disp_flg;
/* bss 4b5e28 */ MENU_SOUL_CTRL menu_soul_ctrl;
/* bss 4b5e48 */ MENU_SOUL_DISP menu_soul_disp;
/* bss 4b5e58 */ fixed_array<DISP_SOUL_LIST_DATA, 176> disp_soul_list_data;
/* sbss 3f5450 */ unsigned char DISP_SOUL_LIST_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/menu_top.c
// *****************************************************************************

/* sdata 3f2fb8 */ void *chapter_title_tex_addr;
/* bss 4b63d8 */ MENU_TOP_DISP menu_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/menu_top_dat.c
// *****************************************************************************

/* data 32ae38 */ SPRT_DAT menu_top[83];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/message.c
// *****************************************************************************

/* data 32b898 */ u_short ascii_font_tbl[223];
/* data 32ba58 */ u_short ascii_font_tbl2[223];
/* data 32bc18 */ int wbyte_font_tbl0[8];
/* data 32bc38 */ int wbyte_font_tbl1[10];
/* data 32bc60 */ int wbyte_font_tbl2[26];
/* data 32bcc8 */ int wbyte_font_tbl3[26];
/* data 32bd30 */ int wbyte_font_tbl4[83];
/* data 32be80 */ int wbyte_font_tbl5[85];
/* data 32bfd8 */ int font_w_b0[210];
/* data 32c320 */ int font_w_b1[210];
/* data 32c668 */ int font_w_b2[210];
/* data 32c9b0 */ int font_w_b3[210];
/* data 32ccf8 */ int font_w_b4[210];
/* data 32d040 */ SPRT_DAT mesbox[8];
/* sdata 3f2fe0 */ int *mes_ex_nums[1];
/* sdata 3f2fe8 */ int (*mes_ex_num_tbl[1])(/* parameters unknown */);
/* sbss 3f4e40 */ DRAW_ENV_5 *change_msg_env;
/* rdata 3bfbd0 */ int msg_type_max_tbl[83];
/* bss 4b63f8 */ MES_DAT msdat;
/* sdata 3f3038 */ u_char *save_mes_addr;
/* sbss 3f4e48 */ MES_WRK mes_wrk;
/* sbss 3f4e50 */ MSG_DISP_CTRL msg_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/mim_dat.c
// *****************************************************************************

/* data 32d140 */ int ch000_mim_no_tbl[41];
/* data 32d1e8 */ int ch001_mim_no_tbl[41];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mis_sel_disp.c
// *****************************************************************************

/* sdata 3f30b4 */ int MisFadeNew;
/* sdata 3f30b8 */ int MisFadeOld;
/* sdata 3f30bc */ int MisFadeCnt;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_ctl.c
// *****************************************************************************

/* sdata 3f3108 */ int (*MisFunc)(/* parameters unknown */);
/* sdata 3f310c */ int MisClearTime;
/* sdata 3f3110 */ int MisTotalScore;
/* sdata 3f3114 */ int MisBestShot;
/* sdata 3f3118 */ int MisClearType;
/* sdata 3f311c */ int MisAnimTime;
/* sdata 3f3128 */ void *MisStTexPtr;
/* sdata 3f312c */ void *MisEnTexPtr;
/* sdata 3f3130 */ void *MisEnClearChrTexPtr;
/* sdata 3f3134 */ void *MisEnScreenPtr;
/* sbss 3f4e58 */ int MisDispID[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/mission_dat.c
// *****************************************************************************

/* data 32d3a8 */ SPRT_DAT mission_tex[174];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_disp.c
// *****************************************************************************

/* sdata 3f3178 */ int MisDispTimer;
/* sdata 3f317c */ int MisDispTimerCnt;
/* sdata 3f3180 */ int MisDispTimerSw;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_pause.c
// *****************************************************************************

/* bss 4b6448 */ PAUSE_CTRL pause_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/mission_sel.c
// *****************************************************************************

/* sdata 3f3208 */ void *mission_sel_tex_addr;
/* sdata 3f320c */ void *out_game_cmn_tex;
/* sdata 3f3210 */ int MissionYesNo;
/* sdata 3f3214 */ int MissionListTop;
/* sdata 3f3218 */ int MissionCsrY;
/* sdata 3f321c */ int MissionMode;
/* sdata 3f3220 */ int MissionMiniYCnt;
/* sdata 3f3224 */ int MissionMiniCsr;
/* sdata 3f3228 */ int MissionBlackOutCnt;
/* sdata 3f322c */ void *MissionSaveDatPtr;
/* bss 4b6458 */ MISSION_TBL MissionTblList[25];
/* sbss 3f5228 */ unsigned char PLYR_ITEM type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e60 */ MISSION_SEL_CTRL mission_sel_ctrl;
/* sbss 3f4e68 */ MISSION_SEL_DISP mission_sel_disp;
/* bss 4b67e0 */ int MissionList[25][4];
/* bss 4b6970 */ int MissionMdlWork[4];
/* bss 4b6980 */ int MissionGage[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/morph.c
// *****************************************************************************

/* data 32e9a8 */ MORPH_DAT ch017_morph[2];
/* data 32e9b8 */ MORPH_DAT ch020_morph[2];
/* data 32e9c8 */ MORPH_DAT ch030_morph[2];
/* data 32e9d8 */ MORPH_DAT ch041_morph[14];
/* data 32ea48 */ MORPH_DAT *morph_dat[78];
/* bss 4b6990 */ fixed_array<MORPH_CTRL, 15> morph_ctrl;
/* sbss 3f5458 */ unsigned char MORPH_CTRL type_info node[8];
/* sbss 3f4e6c */ ANI_CTRL *now_work;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/morph_dat.c
// *****************************************************************************

/* data 32eb80 */ MORPH_CODE morph_down[2];
/* data 32eb90 */ MORPH_CODE ch017morph006[3];
/* data 32eba8 */ MORPH_CODE ch017morph008[2];
/* data 32ebb8 */ MORPH_CODE ch017morph016[3];
/* data 32ebd0 */ MORPH_CODE ch020morph006[3];
/* data 32ebe8 */ MORPH_CODE ch020morph008[6];
/* data 32ec18 */ MORPH_CODE ch030morph006[3];
/* data 32ec30 */ MORPH_CODE ch030morph008[3];
/* data 32ec48 */ MORPH_CODE ch041morph000[2];
/* data 32ec58 */ MORPH_CODE ch041morph002[2];
/* data 32ec68 */ MORPH_CODE ch041morph004[2];
/* data 32ec78 */ MORPH_CODE ch041morph005[2];
/* data 32ec88 */ MORPH_CODE ch041morph006[3];
/* data 32eca0 */ MORPH_CODE ch041morph007[2];
/* data 32ecb0 */ MORPH_CODE ch041morph008[2];
/* data 32ecc0 */ MORPH_CODE ch041morph009[2];
/* data 32ecd0 */ MORPH_CODE ch041morph010[2];
/* data 32ece0 */ MORPH_CODE ch041morph011[2];
/* data 32ecf0 */ MORPH_CODE ch041morph012[2];
/* data 32ed00 */ MORPH_CODE ch041morph013[3];
/* data 32ed18 */ MORPH_CODE ch041morph014[3];
/* data 32ed30 */ MORPH_CODE ch041morph016[3];
/* data 32ed48 */ MORPH_CODE ch041morph017[3];
/* data 32ed60 */ MORPH_CODE ch041morph018[2];
/* data 32ed70 */ MORPH_CODE *ch017morph_tbl[23];
/* data 32edd0 */ MORPH_CODE *ch020morph_tbl[23];
/* data 32ee30 */ MORPH_CODE *ch030morph_tbl[23];
/* data 32ee90 */ MORPH_CODE *ch041morph_tbl[23];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/motion/motion.c
// *****************************************************************************

/* bss 4b9480 */ fixed_array<float[4][4], 60> m_start;
/* bss 4ba380 */ fixed_array<float[4][4], 60> m_end;
/* sbss 3f51a8 */ unsigned char float[3][3] type_info node[8];
/* sbss 3f5460 */ unsigned char RST_DATA type_info node[8];
/* data 32ef20 */ MIME_CTRL mim_chodo[20];
/* data 32f150 */ u_char mim_chodo_se[20];
/* data 32f168 */ MIME_DAT mim_cdat[2][20];
/* data 32f490 */ ANI_CTRL ani_mdl[50];
/* data 336510 */ ANI_MDL_CTRL ani_mdl_ctrl[50];
/* sdata 3f32f0 */ ACS_ALPHA plyracs_ctrl[2];
/* data 336770 */ ROPE_CTRL rope_ctrl[20];
/* data 336c70 */ CMOVE_CTRL cmove_ctrl[10];
/* data 336d38 */ ENE_VRAM_CTRL ene_vram_ctrl[4];
/* data 336d78 */ ENE_VRAM_CTRL ene_vram_bak[4];
/* sdata 3f32f8 */ MSN_PLYR_INIT plyr_init_ctrl;
/* sdata 3f32fa */ char plyr_mdl_no;
/* sdata 3f32fb */ u_char mim_mepati_id;
/* sdata 3f32fc */ u_char mim_nigiri_l_id;
/* sdata 3f32fd */ u_char mim_nigiri_r_id;
/* sdata 3f3300 */ float now_frot_x;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie.c
// *****************************************************************************

/* sdata 3f3348 */ int iMovieCnt;
/* bss 4bb280 */ playPssRsrcs rsrcs;
/* bss 4bb2c0 */ unsigned char temp_zero_bffer[2048];
/* sbss 3f4e70 */ int movie_audio_flg;
/* sbss 3f4e74 */ int bPause;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room_menu/prg/movie_projecter.c
// *****************************************************************************

/* data 336dc0 */ float ScreenPosition[2][4][4];
/* sbss 3f4e78 */ fixed_array<int, 2> SetFilmNo;
/* sdata 3f3398 */ int InitFilmNo[2];
/* sbss 3f4e80 */ MOVIE_PROJECTER_STATE now_state;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room.c
// *****************************************************************************

/* rdata 3c1790 */ DRAW_ENV_5 MovieDrawEnv;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/movie_room_menu/prg/movie_room_menu.c
// *****************************************************************************

/* data 336e40 */ DISP_FILM_REEL disp_film_reel[7];
/* data 336e98 */ void (*movie_room_menu_pad_func[6])(/* parameters unknown */);
/* data 336eb0 */ void (*movie_room_menu_disp_func[6])(/* parameters unknown */);
/* sbss 3f4e88 */ MOVIE_ROOM_MENU_CTRL movie_room_menu_ctrl;
/* sbss 3f4e90 */ MOVIE_ROOM_MENU_DISP movie_room_menu_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie_title.c
// *****************************************************************************

/* sbss 3f4e98 */ MOVIE_TITLE_CTRL movie_title_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/movie/movie_title_dat.c
// *****************************************************************************

/* data 336ec8 */ MOVIE_TITLE_DAT movie_001[1];
/* data 336ed8 */ MOVIE_TITLE_DAT movie_0010[24];
/* data 336ff8 */ MOVIE_TITLE_DAT movie_0020[5];
/* data 337038 */ MOVIE_TITLE_DAT movie_0110[4];
/* data 337068 */ MOVIE_TITLE_DAT movie_0120[6];
/* data 3370b0 */ MOVIE_TITLE_DAT movie_0121[5];
/* data 3370f0 */ MOVIE_TITLE_DAT movie_0122[4];
/* data 337120 */ MOVIE_TITLE_DAT movie_0130[2];
/* data 337138 */ MOVIE_TITLE_DAT movie_0131[8];
/* data 337198 */ MOVIE_TITLE_DAT movie_0132[5];
/* data 3371d8 */ MOVIE_TITLE_DAT movie_0133[1];
/* data 3371e8 */ MOVIE_TITLE_DAT movie_0140[10];
/* data 337260 */ MOVIE_TITLE_DAT movie_0141[4];
/* data 337290 */ MOVIE_TITLE_DAT movie_0150[4];
/* data 3372c0 */ MOVIE_TITLE_DAT movie_0160[1];
/* data 3372d0 */ MOVIE_TITLE_DAT movie_0170[3];
/* data 3372f8 */ MOVIE_TITLE_DAT movie_0180[7];
/* data 337350 */ MOVIE_TITLE_DAT movie_0190[3];
/* data 337378 */ MOVIE_TITLE_DAT movie_0200[1];
/* data 337388 */ MOVIE_TITLE_DAT movie_0201[1];
/* data 337398 */ MOVIE_TITLE_DAT movie_0210[6];
/* data 3373e0 */ MOVIE_TITLE_DAT movie_0220[5];
/* data 337420 */ MOVIE_TITLE_DAT movie_0230[1];
/* data 337430 */ MOVIE_TITLE_DAT movie_0231[2];
/* data 337448 */ MOVIE_TITLE_DAT movie_0240[2];
/* data 337460 */ MOVIE_TITLE_DAT movie_0310[1];
/* data 337470 */ MOVIE_TITLE_DAT movie_0330[16];
/* data 337530 */ MOVIE_TITLE_DAT movie_0340[4];
/* data 337560 */ MOVIE_TITLE_DAT movie_0350[14];
/* data 337608 */ MOVIE_TITLE_DAT movie_0351[11];
/* data 337690 */ MOVIE_TITLE_DAT movie_0352[9];
/* data 337700 */ MOVIE_TITLE_DAT movie_0410[2];
/* data 337718 */ MOVIE_TITLE_DAT movie_0510[1];
/* data 337728 */ MOVIE_TITLE_DAT movie_0520[3];
/* data 337750 */ MOVIE_TITLE_DAT movie_0610[2];
/* data 337768 */ MOVIE_TITLE_DAT movie_0611[9];
/* data 3377d8 */ MOVIE_TITLE_DAT movie_0620[4];
/* data 337808 */ MOVIE_TITLE_DAT movie_0720[5];
/* data 337848 */ MOVIE_TITLE_DAT movie_0721[9];
/* data 3378b8 */ MOVIE_TITLE_DAT movie_0730[5];
/* data 3378f8 */ MOVIE_TITLE_DAT movie_0731[2];
/* data 337910 */ MOVIE_TITLE_DAT movie_0810[2];
/* data 337928 */ MOVIE_TITLE_DAT movie_0820[6];
/* data 337970 */ MOVIE_TITLE_DAT movie_0910[4];
/* data 3379a0 */ MOVIE_TITLE_DAT movie_0920[12];
/* data 337a30 */ MOVIE_TITLE_DAT movie_0960[4];
/* data 337a60 */ MOVIE_TITLE_DAT movie_1010[4];
/* data 337a90 */ MOVIE_TITLE_DAT movie_1020[46];
/* data 337cb8 */ MOVIE_TITLE_DAT movie_1030[32];
/* data 337e38 */ MOVIE_TITLE_DAT movie_1040[3];
/* data 337e60 */ MOVIE_TITLE_DAT movie_1041[3];
/* data 337e88 */ MOVIE_TITLE_DAT movie_9205[4];
/* data 337eb8 */ MOVIE_TITLE_DAT movie_9206[2];
/* data 337ed0 */ MOVIE_TITLE_DAT movie_0930[5];
/* data 337f10 */ MOVIE_TITLE_DAT movie_promo02[41];
/* data 338100 */ MOVIE_TITLE_DAT movie_promo03[32];
/* data 338280 */ MOVIE_TITLE_DAT *movie_title_dat[72];
/* data 3383a0 */ SPRT_DAT movie_title_base_tex[3];
/* rdata 3c1a38 */ int every_disp_subtitles[33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/tim_dat/msg_box.c
// *****************************************************************************

/* data 338400 */ SPRT_DAT msg_box_tex[12];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_col_tbl.c
// *****************************************************************************

/* rdata 3c1ac0 */ MSG_COLOR msg_col[45];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_def_dat.c
// *****************************************************************************

/* data 338580 */ MSG_DEF_DATA msg_def_data[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_disp_dat.c
// *****************************************************************************

/* data 3385a0 */ MSG_DISP_DATA msg_disp_data[83];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/graph2d/msg_win_dat.c
// *****************************************************************************

/* data 338838 */ MSG_WIN_DAT msg_win_data[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_equip_tray.c
// *****************************************************************************

/* sdata 3f34b0 */ SUB_FUNC_SI_PARAM CNEquipTraySave::sub_func_si_param[4];
/* data 338878 */ SUB_FUNC_MAHI_PARAM CNEquipTraySave::sub_func_mahi_param[4];
/* sdata 3f34b8 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_oso_param[4];
/* sdata 3f34c0 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_seal_param[4];
/* sdata 3f34c8 */ SUB_FUNC_SUB_PARAM CNEquipTraySave::sub_func_trace_param[4];
/* data 338888 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_rei_param[4];
/* data 3388c8 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_koku_param[4];
/* data 338908 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_metsu_param[4];
/* data 338948 */ SUB_FUNC_KOUGEKI_PARAM CNEquipTraySave::sub_func_ren_param[4];
/* rdata 3c1c68 */ NEQUIP_FUNC_DAT CNEquipTrayWrk::equip_func_tbl[10];
/* sdata 3f34d0 */ char CNEquipTraySave::aStockMaxTbl[4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sdata 3f3508 */ int dbg_stock_num;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_finder_dat.c
// *****************************************************************************

/* data 338988 */ SPRT_DAT n_finder_dat[168];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/n_plyr_camera.c
// *****************************************************************************

/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4e9c */ int mIsSetup;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/newgame.c
// *****************************************************************************

/* sbss 3f4ea0 */ NEW_GAME_CTRL new_game_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/obj_draw_ctrl.c
// *****************************************************************************

/* data 339e88 */ OBJ_DRAW_FLG obj_draw_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/ol_load.c
// *****************************************************************************

/* data 339eb0 */ OL_LOAD ol_load;
/* data 369d78 */ Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::nilRep;
/* data 369d88 */ __vtbl_ptr_type ctl::custom_allocator<char> virtual table[4];
/* data 369e88 */ __vtbl_ptr_type CFileName virtual table[3];
/* bss 4cdad0 */ unsigned char CFileName type_info node[12];
/* sbss 3f5110 */ unsigned char ctl::custom_allocator<char> type_info node[8];
/* sbss 3f5468 */ unsigned char OL_LOAD_ONE type_info node[8];
/* sbss 3f5238 */ unsigned char basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>> type_info node[8];
/* bss 4bbac0 */ HEAP_WRK ol_load_heap_wrk;
/* data 3f49fc */ size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char>>::npos;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/option.c
// *****************************************************************************

/* data 33a090 */ void (*OptionCtrlModule[4])(/* parameters unknown */);
/* data 33a0a0 */ void (*OptionDispModule[4])(/* parameters unknown */);
/* sdata 3f3638 */ OPT_CTRL *oc;
/* sdata 3f363c */ void *opt_og_tex_addr;
/* sdata 3f3640 */ void *opt_top_tex_addr;
/* sdata 3f3644 */ void *opt_brn_tex_addr;
/* sdata 3f3648 */ void *opt_key_tex_addr;
/* data 33a0b0 */ OPT_CTRL opt_ctrl;
/* data 33a0f0 */ OPTION_WRK optm;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/option_dat.c
// *****************************************************************************

/* data 33a100 */ SPRT_DAT option_tex[231];
/* data 33bde0 */ SQAR_DAT option_sqr[21];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/outgame.c
// *****************************************************************************

/* sdata 3f36d0 */ int mFlgOnce;
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/outgame_dat.c
// *****************************************************************************

/* data 33bfd8 */ SPRT_DAT out_game_tex[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/pad.c
// *****************************************************************************

/* data 33c0d8 */ u_short sce_pad[16];
/* sdata 3f36d4 */ short unsigned int **paddat;
/* sdata 3f36d8 */ unsigned char **pushdat;
/* bss 4bbae0 */ ANALOG_PAD_CTRL analog_pad_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/pad_check.c
// *****************************************************************************

/* sbss 3f4eae */ char pad_check_step;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/pause/prg/pause.c
// *****************************************************************************

/* bss 4bbaf8 */ PAUSE_CTRL pause_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/pause/prg/pause_dat.c
// *****************************************************************************

/* data 33c0f8 */ SPRT_DAT pause_tex[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo.c
// *****************************************************************************

/* data 33c218 */ PFILE_WRK pfile_wrk;
/* bss 4bbb10 */ fixed_array<_HINT_PHOTO_REQ, 5> hint_photo_req;
/* sbss 3f5470 */ unsigned char _HINT_PHOTO_REQ type_info node[8];
/* sbss 3f51f0 */ unsigned char PICTURE_WRK type_info node[8];
/* sbss 3f5200 */ unsigned char _PICTURE_SUBJECT type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* rdata 3c2eb0 */ SPRT_DAT mayu_pk2_dat;
/* rdata 3c2ed0 */ SPRT_DAT kusabi_pk2_dat;
/* rdata 3c2ef0 */ SPRT_DAT hint_dat_one;
/* data 33c420 */ PHOTO_WRK photo_wrk;
/* sbss 3f4eb0 */ int name_msg_type;
/* sbss 3f4eb4 */ int name_msg_name;
/* sbss 3f4eb8 */ int hint_reqs_cnt;
/* sbss 3f4ebc */ int hint_req_no;
/* sbss 3f4ec0 */ void *photo_tmp_adrs;
/* sbss 3f4ec4 */ int photo_special_tex_file_no;
/* sbss 3f4ec8 */ int hint_mes_type;
/* sbss 3f4ecc */ int hint_mes_no;
/* sbss 3f4ed0 */ SPRT_DAT *p_hint_dat;
/* bss 4bbb30 */ float rare_ene_pos[4];
/* sbss 3f4ed4 */ int unlock_ghost;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo_dat.c
// *****************************************************************************

/* sdata 3f3848 */ float photo_rng_tbl[1];
/* sdata 3f3850 */ short unsigned int photo_frame_tbl[1][2];
/* data 33c430 */ float photo_dist_ratio[10];
/* data 33c458 */ float photo_center_ratio[10];
/* data 33c480 */ float photo_charge_ratio[4];
/* data 33c490 */ PhotoData photo_dat[72];
/* sdata 3f3870 */ float pd_default_spd;
/* sdata 3f3874 */ float pd_default_rate;
/* sdata 3f3878 */ float pdb_default_spd;
/* sdata 3f387c */ float pdb_default_rate;
/* sdata 3f3880 */ CSYSTEM_SND_BUF_PLAY furn_sound_player[2];
/* data 33cb50 */ SPRT_DAT hint_dat[4];
/* bss 4bbb40 */ BIT_FLAGS<72> photo_dat_save;
/* bss 4bbb50 */ PHOTO_DAT_OBJ_WRK pd_obj_wrk[4];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4ed8 */ MDAT_OBJ *p_centerest_obj;
/* sbss 3f4edc */ int seal_ghost_draw_lock;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/photo_make.c
// *****************************************************************************

/* data 33cbd0 */ SPRT_DAT photo_frame[14];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/play_data.c
// *****************************************************************************

/* bss 4bbbd0 */ PLAY_DATA_CTRL play_data;
/* sbss 3f4ee0 */ u_char play_timer;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/player.c
// *****************************************************************************

/* data 33cd90 */ PLYR_WRK plyr_wrk;
/* sdata 3f3960 */ PLCMN_WRK *pl_sta[2];
/* sdata 3f3968 */ u_short cam_cng_tm;
/* sdata 3f3970 */ CPLYR_SND_BUF_PLAY mio_deadly_player;
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];
/* sbss 3f4ef0 */ int gbLenzShot;
/* rdata 3c3df8 */ float aDmgRateByDifficulty[4];
/* sbss 3f4ef4 */ char look_at_pre_kaidan_flg;
/* sbss 3f4ef8 */ PLAYERFLASHLIGHTTYPE s_FlashlightType;
/* sbss 3f4efc */ int finder_off_lock_timer_cnt;
/* sbss 3f4f00 */ int iBusterCountThisTime;
/* rdata 3c3e08 */ float combo_point_mag[3];
/* rdata 3c3e18 */ float combo_sb_point_mag[3];
/* sbss 3f4f04 */ int door_anime_no;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/plyr_mdl.c
// *****************************************************************************

/* sdata 3f3a50 */ int g_iMaxPlayerAlpha;
/* sdata 3f3a54 */ int g_iMinPlayerAlpha;
/* sdata 3f3a58 */ int s_bUseDoorLight;
/* bss 4bbc70 */ PLYR_PLYR_DATA plyr_data;
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5160 */ unsigned char GRA3DLIGHTSTATUS type_info node[8];
/* bss 4bbcb0 */ MDL_REQ_SAVE plyr_mdl_req_save;
/* sbss 3f4f08 */ int ltd_mode;
/* sbss 3f4f0c */ int same_priority_count;
/* sbss 3f4f10 */ LOOK_TARGET_PRIORITY_MIO plyr_neck_now_priority;
/* sbss 3f4f14 */ LOOK_TARGET_PRIORITY_MIO pre_priority;
/* bss 4bbcc0 */ LOOK_AT_PARAM plyr_neck_now_param;
/* sbss 3f4f18 */ int plyr_neck_flg;
/* sbss 3f4f1c */ int plyr_neck_no_registered_cnt;
/* bss 4bbce0 */ GAME_COSTUME GameCostume;
/* data 36a050 */ __vtbl_ptr_type PLYR_PLYR_DATA virtual table[4];
/* bss 4cdbf0 */ unsigned char PLYR_PLYR_DATA type_info node[12];
/* sbss 3f5400 */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/plyr_room_info.c
// *****************************************************************************

/* bss 4bbcf0 */ fixed_array<ROOM_IN_INFO, 240> room_in_info;
/* sbss 3f5478 */ unsigned char ROOM_IN_INFO type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/puzzle.c
// *****************************************************************************

/* sbss 3f4f20 */ fixed_array<unsigned char, 6> clear_puzzle;
/* bss 4bbde0 */ PZL_EXE_CTRL pzl_exe_ctrl;
/* sbss 3f4f28 */ void *pzl_tex_addr;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/puzzle_dat.c
// *****************************************************************************

/* rdata 3c4528 */ int pzl_conf_msg[6][2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/hina/puzzle_hina_dat.c
// *****************************************************************************

/* data 33d110 */ int hina_first_pos[4][4];
/* sdata 3f3b00 */ int no_move_hina[2];
/* data 33d150 */ float hina_pos_x[4][4];
/* data 33d190 */ float hina_pos_y[4][4];
/* data 33d1d0 */ float hina_flea_pos_x[4][4];
/* data 33d210 */ float hina_flea_pos_y[4][4];
/* data 33d250 */ SPRT_DAT puzzle_hina_tex[45];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/kaza/puzzle_kaza_dat.c
// *****************************************************************************

/* sdata 3f3b20 */ reference_fixed_array<int, 4> kaza_panel_center;
/* sdata 3f3b28 */ reference_fixed_array<int, 4> kaza_panel_left_up;
/* sdata 3f3b30 */ reference_fixed_array<int, 4> kaza_panel_right_up;
/* sdata 3f3b38 */ reference_fixed_array<int, 4> kaza_panel_right_down;
/* sdata 3f3b40 */ reference_fixed_array<int, 4> kaza_panel_left_down;
/* sdata 3f3b48 */ reference_fixed_array<int, 4> kaza2_panel_center;
/* sdata 3f3b50 */ reference_fixed_array<int, 4> kaza2_panel_left_up;
/* sdata 3f3b58 */ reference_fixed_array<int, 4> kaza2_panel_right_up;
/* sdata 3f3b60 */ reference_fixed_array<int, 4> kaza2_panel_right_down;
/* sdata 3f3b68 */ reference_fixed_array<int, 4> kaza2_panel_left_down;
/* data 33d7f0 */ SPRT_DAT puzzle_kaza_tex[58];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/roku/puzzle_roku_dat.c
// *****************************************************************************

/* sdata 3f3b88 */ reference_fixed_array<int, 5> six_puzzle_answer;
/* data 33df30 */ int six_pzl_book_label[5][2];
/* data 33df58 */ float shelf_book_x[5];
/* data 33df70 */ SPRT_DAT puzzle_roku_tex[33];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/clear/dat/rank_time_dat.c
// *****************************************************************************

/* rdata 3c46c0 */ int rank_time_tbl[7][3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/puzzle/roku/roku_pzl.c
// *****************************************************************************

/* data 33e390 */ void (*six_pzl_pad_func[7])(/* parameters unknown */);
/* bss 4bbdf8 */ SIX_PZL_CTRL six_pzl_ctrl;
/* bss 4bbe40 */ SIX_PZL_DISP six_pzl_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/mc/dat/save_data.c
// *****************************************************************************

/* data 33e3b0 */ void (*save_system_data[3])(/* parameters unknown */);
/* data 33e3c0 */ void (*save_game_data[50])(/* parameters unknown */);
/* sdata 3f3c10 */ void (*save_play_data_head[2])(/* parameters unknown */);
/* data 33e488 */ void (*save_album_data[3])(/* parameters unknown */);
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/dat/save_load_dat.c
// *****************************************************************************

/* data 33e498 */ SPRT_DAT save_load_tex[60];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/menu/tim_dat/save_point_dat.c
// *****************************************************************************

/* data 33ec18 */ MAP_SAVE_POINT map_save_point[13];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/tim_dat/savepoint_dat.c
// *****************************************************************************

/* data 33ece8 */ SPRT_DAT savepoint_tex[16];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_fade_in.c
// *****************************************************************************

/* sbss 3f4f30 */ SAVE_POINT_FADE_IN_CTRL save_point_fade_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_fade_out.c
// *****************************************************************************

/* sdata 3f3c98 */ int save_point_fade_timer;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_main.c
// *****************************************************************************

/* sdata 3f3ce0 */ void *savepoint_bg_tex_addr;
/* sbss 3f4f38 */ SAVEPOINT_MAIN_CTRL savepoint_main_ctrl;
/* bss 4bbe50 */ SAVEPOINT_MAIN_DISP savepoint_main_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/savepoint/savepoint_top.c
// *****************************************************************************

/* sdata 3f3d28 */ void *savepoint_tex_addr;
/* sdata 3f3d2c */ char savepoint_top_init_flg;
/* sbss 3f4f40 */ SAVEPOINT_TOP_CTRL savepoint_top_ctrl;
/* sbss 3f4f48 */ SAVEPOINT_TOP_DISP savepoint_top_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene.c
// *****************************************************************************

/* data 33eef0 */ fixed_array<SCENE_CTRL, 2> scene_ctrl;
/* data 343150 */ SCENE_LOAD_CTRL scene_load;
/* sdata 3f3d70 */ int scn_vib_time0;
/* sdata 3f3d74 */ int scn_vib_time1;
/* sbss 3f4f60 */ reference_fixed_array<AREA_PREFIX_TO_NO, 10> area_prefix_to_no;
/* sbss 3f5480 */ unsigned char SCENE_CTRL type_info node[8];
/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* sbss 3f53c8 */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5290 */ unsigned char float[3] type_info node[8];
/* sbss 3f5490 */ unsigned char AREA_PREFIX_TO_NO type_info node[8];
/* data 343170 */ SCENE_FILE scene_file;
/* sbss 3f4f64 */ int scn_now_play_id;
/* data 3431a0 */ G3DLIGHT PlayerLightBackup;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene_dat.c
// *****************************************************************************

/* data 343210 */ SCENE_DATA_CMN scene_data_cmn[72];
/* data 343258 */ int *scene_cut_timing[71];
/* sdata 3f3e60 */ int sceneDummy_cut_timing[1];
/* rdata 3c57c0 */ int scene0110_cut_timing[7];
/* rdata 3c57e0 */ int scene0120_cut_timing[16];
/* rdata 3c5820 */ int scene0122_cut_timing[9];
/* rdata 3c5848 */ int scene0130_cut_timing[8];
/* rdata 3c5868 */ int scene0132_cut_timing[8];
/* rdata 3c5888 */ int scene0133_cut_timing[5];
/* rdata 3c58a0 */ int scene0140_cut_timing[19];
/* rdata 3c58f0 */ int scene0150_cut_timing[10];
/* rdata 3c5918 */ int scene0160_cut_timing[5];
/* sdata 3f3e68 */ int scene0170_cut_timing[2];
/* rdata 3c5930 */ int scene0190_cut_timing[4];
/* rdata 3c5940 */ int scene0210_cut_timing[5];
/* rdata 3c5958 */ int scene0231_cut_timing[10];
/* rdata 3c5980 */ int scene0240_cut_timing[7];
/* rdata 3c59a0 */ int scene0340_cut_timing[23];
/* rdata 3c5a00 */ int scene0350_cut_timing[24];
/* rdata 3c5a60 */ int scene0352_cut_timing[12];
/* rdata 3c5a90 */ int scene0410_cut_timing[5];
/* sdata 3f3e70 */ int scene0510_cut_timing[2];
/* rdata 3c5aa8 */ int scene0520_cut_timing[18];
/* rdata 3c5af0 */ int scene0610_cut_timing[11];
/* rdata 3c5b20 */ int scene0620_cut_timing[7];
/* rdata 3c5b40 */ int scene0720_cut_timing[14];
/* rdata 3c5b78 */ int scene0721_cut_timing[5];
/* rdata 3c5b90 */ int scene0730_cut_timing[14];
/* rdata 3c5bc8 */ int scene0820_cut_timing[7];
/* rdata 3c5be8 */ int scene1010_cut_timing[11];
/* rdata 3c5c18 */ int scene9001_cut_timing[4];
/* rdata 3c5c28 */ int scene9002_cut_timing[10];
/* rdata 3c5c50 */ int scene9101_cut_timing[8];
/* rdata 3c5c70 */ int scene9203_cut_timing[4];
/* rdata 3c5c80 */ int scene9204_cut_timing[4];
/* rdata 3c5c90 */ int scene9205_cut_timing[6];
/* rdata 3c5ca8 */ int scene9206_cut_timing[16];
/* rdata 3c5ce8 */ int scene9302_cut_timing[9];
/* rdata 3c5d10 */ int scene9303_cut_timing[10];
/* rdata 3c5d38 */ int scene9501_cut_timing[20];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/graphics/scene/scene_effect.c
// *****************************************************************************

/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* bss 4bbf70 */ SCENE_EFFECT_CTRL SceneEffectCtrl;
/* sbss 3f4f68 */ SCENE_FADE_MODEL_CTRL SceneFadeModelCtrl;
/* bss 4bbfb0 */ SINGLE_LINK_LIST ScenePDeformCtrl;
/* sbss 3f4f70 */ SCENE_ENE_AURA_CTRL SceneEneAuraCtrl;
/* sbss 3f4f78 */ SCENE_VIBRATION_CTRL SceneVibrationCtrl;
/* bss 4bbfc0 */ SINGLE_LINK_LIST SceneTorchCtrl;
/* bss 4bbfd0 */ SINGLE_LINK_LIST SceneHazeCtrl;
/* rdata 3c5e68 */ short int *(*SceneEffectFunc[27])(/* parameters unknown */);
/* rdata 3c5ee0 */ float SaeHazeOffset[4];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/scn_test.c
// *****************************************************************************

/* sdata 3f3f00 */ int mono_flg;
/* data 343380 */ char *scene_name[72];
/* data 3434a0 */ void (*SceneTestDebugMenu[16])(/* parameters unknown */);
/* data 3434e0 */ SCN_EFF_CTRL scn_eff_ctrl[17];
/* sbss 3f5158 */ unsigned char G3DLIGHT type_info node[8];
/* sbss 3f5290 */ unsigned char float[3] type_info node[8];
/* sbss 3f53c8 */ unsigned char FOD_LIT_SERIAL type_info node[8];
/* sbss 3f5488 */ unsigned char SCN_ANM_MDL type_info node[8];
/* data 3437d0 */ SCN_TEST_WRK scn_test_wrk;
/* data 3448f0 */ SCN_TEST_PDEFORM ScnTestPdeform[2];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/setup.c
// *****************************************************************************

/* sdata 3f4280 */ void *setup_bg_tex_addr;
/* sdata 3f4284 */ void *setup_font_tex_addr;
/* sdata 3f4288 */ void *mission_sel_tex_addr;
/* sbss 3f4f80 */ SETUP_CTRL setup_ctrl;
/* sbss 3f4f88 */ SETUP_DISP_CTRL setup_disp_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/setup_dat.c
// *****************************************************************************

/* data 344970 */ SPRT_DAT setup_tex[55];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/setup_menu.c
// *****************************************************************************

/* data 345050 */ void (*setup_menu_pad_func[3])(/* parameters unknown */);
/* data 345060 */ void (*setup_menu_disp_func[3])(/* parameters unknown */);
/* sdata 3f42d0 */ void (*setup_on_off_disp_func[2])(/* parameters unknown */);
/* bss 4bbfe0 */ SETUP_MENU_CTRL setup_menu_ctrl;
/* bss 4bbff0 */ SETUP_MENU_DISP setup_menu_disp;
/* rdata 3c6e48 */ COSTUME_TWIN_TBL costume_tbl[9];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_algo.c
// *****************************************************************************

/* data 345070 */ void (*SisCtrlTbl[20])(/* parameters unknown */);
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* data 3450c0 */ SIS_LOCAL_ALG sis_lalg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_mdl.c
// *****************************************************************************

/* bss 4bc040 */ SIS_DATA sis_data;
/* sbss 3f4f8c */ int ltd_mode;
/* sbss 3f4f90 */ int same_priority_count;
/* sbss 3f4f94 */ LOOK_TARGET_PRIORITY_MAYU sis_neck_now_priority;
/* sbss 3f4f98 */ LOOK_TARGET_PRIORITY_MAYU pre_priority;
/* bss 4bc080 */ LOOK_AT_PARAM sis_neck_now_param;
/* sbss 3f4f9c */ float sis_neck_now_dist;
/* sbss 3f4fa0 */ int sis_neck_flg;
/* sbss 3f4fa4 */ int sis_neck_no_registered_cnt;
/* data 36a070 */ __vtbl_ptr_type SIS_DATA virtual table[4];
/* bss 4cdc00 */ unsigned char SIS_DATA type_info node[12];
/* sbss 3f5400 */ unsigned char MAN_DATA type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sis_trpoint.c
// *****************************************************************************

/* data 3450d0 */ int room_point_num[63];
/* data 3451d0 */ sceVu0FVECTOR room_point_00[21];
/* data 345320 */ sceVu0FVECTOR room_point_02[18];
/* data 345440 */ sceVu0FVECTOR room_point_04[24];
/* data 3455c0 */ sceVu0FVECTOR room_point_06[14];
/* data 3456a0 */ sceVu0FVECTOR room_point_08[5];
/* data 3456f0 */ sceVu0FVECTOR room_point_09[6];
/* data 345750 */ sceVu0FVECTOR room_point_11[8];
/* data 3457d0 */ sceVu0FVECTOR room_point_12[5];
/* data 345820 */ sceVu0FVECTOR room_point_13[13];
/* data 3458f0 */ sceVu0FVECTOR room_point_14[27];
/* data 345aa0 */ sceVu0FVECTOR room_point_15[6];
/* data 345b00 */ sceVu0FVECTOR room_point_16[13];
/* data 345bd0 */ sceVu0FVECTOR room_point_17[11];
/* data 345c80 */ sceVu0FVECTOR room_point_18[22];
/* data 345de0 */ sceVu0FVECTOR room_point_40[5];
/* data 345e30 */ sceVu0FVECTOR room_point_41[15];
/* data 345f20 */ sceVu0FVECTOR room_point_42[15];
/* data 346010 */ sceVu0FVECTOR room_point_43[15];
/* data 346100 */ sceVu0FVECTOR room_point_44[10];
/* data 3461a0 */ sceVu0FVECTOR room_point_45[23];
/* data 346310 */ sceVu0FVECTOR room_point_46[21];
/* data 346460 */ sceVu0FVECTOR room_point_47[21];
/* data 3465b0 */ sceVu0FVECTOR room_point_48[21];
/* data 346700 */ sceVu0FVECTOR room_point_49[24];
/* data 346880 */ sceVu0FVECTOR room_point_50[6];
/* data 3468e0 */ sceVu0FVECTOR room_point_51[17];
/* data 3469f0 */ sceVu0FVECTOR room_point_52[6];
/* data 346a50 */ sceVu0FVECTOR room_point_53[11];
/* data 346b00 */ sceVu0FVECTOR room_point_54[14];
/* data 346be0 */ sceVu0FVECTOR room_point_55[17];
/* data 346cf0 */ sceVu0FVECTOR *room_point_pos[63];
/* data 346df0 */ int room_connect_00[22][22];
/* data 347580 */ int room_connect_02[19][19];
/* data 347b28 */ int room_connect_04[25][25];
/* data 3484f0 */ int room_connect_06[15][15];
/* data 348878 */ int room_connect_08[6][6];
/* data 348908 */ int room_connect_09[7][7];
/* data 3489d0 */ int room_connect_11[9][9];
/* data 348b18 */ int room_connect_12[6][6];
/* data 348ba8 */ int room_connect_13[14][14];
/* data 348eb8 */ int room_connect_14[28][28];
/* data 349af8 */ int room_connect_15[7][7];
/* data 349bc0 */ int room_connect_16[14][14];
/* data 349ed0 */ int room_connect_17[12][12];
/* data 34a110 */ int room_connect_18[23][23];
/* data 34a958 */ int room_connect_40[6][6];
/* data 34a9e8 */ int room_connect_41[16][16];
/* data 34ade8 */ int room_connect_42[16][16];
/* data 34b1e8 */ int room_connect_43[16][16];
/* data 34b5e8 */ int room_connect_44[11][11];
/* data 34b7d0 */ int room_connect_45[24][24];
/* data 34c0d0 */ int room_connect_46[22][22];
/* data 34c860 */ int room_connect_47[22][22];
/* data 34cff0 */ int room_connect_48[22][22];
/* data 34d780 */ int room_connect_49[25][25];
/* data 34e148 */ int room_connect_50[7][7];
/* data 34e210 */ int room_connect_51[18][18];
/* data 34e720 */ int room_connect_52[7][7];
/* data 34e7e8 */ int room_connect_53[12][12];
/* data 34ea28 */ int room_connect_54[15][15];
/* data 34edb0 */ int room_connect_55[18][18];
/* data 34f2c0 */ int *room_connect[63];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/sister.c
// *****************************************************************************

/* data 34f3c0 */ SIS_TRACE sis_trace;
/* data 34f980 */ SIS_ANI_TBL sis_ani001_tbl[3];
/* data 34f990 */ SIS_ANI_TBL sis_ani002_tbl[3];
/* sdata 3f43e0 */ SIS_ANI_TBL sis_ani003_tbl[2];
/* sdata 3f43e8 */ SIS_ANI_TBL sis_ani004_tbl[2];
/* data 34f9a0 */ SIS_ANI_TBL sis_ani005_tbl[4];
/* sdata 3f43f0 */ SIS_ANI_TBL sis_ani006_tbl[2];
/* sdata 3f43f8 */ SIS_ANI_TBL sis_ani007_tbl[2];
/* sdata 3f4400 */ SIS_ANI_TBL sis_ani008_tbl[2];
/* sdata 3f4408 */ SIS_ANI_TBL sis_ani998_tbl[2];
/* sdata 3f4410 */ SIS_ANI_TBL sis_ani999_tbl[2];
/* data 34f9c0 */ SIS_AREA_CHG_SUB sis_area_chg_ry00[3];
/* data 34fa20 */ SIS_AREA_CHG_SUB sis_area_chg_ry02[3];
/* data 34fa80 */ SIS_AREA_CHG_SUB sis_area_chg_ry04[3];
/* data 34fae0 */ SIS_AREA_CHG_SUB sis_area_chg_ry06[3];
/* data 34fb40 */ SIS_AREA_CHG_SUB sis_area_chg_ry08[2];
/* data 34fb80 */ SIS_AREA_CHG_SUB sis_area_chg_ry09[2];
/* data 34fbc0 */ SIS_AREA_CHG sis_area_chg[7];
/* sbss 3f4fb0 */ reference_fixed_array<SIS_ANI_TBL *, 10> sis_ani_tbl;
/* sbss 3f5290 */ unsigned char float[3] type_info node[8];
/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];
/* bss 4cdc10 */ unsigned char SIS_ANI_TBL *type_info node[12];
/* sbss 3f5498 */ unsigned char SIS_ANI_TBL type_info node[8];
/* data 34fc00 */ SIS_WRK sis_wrk;
/* sdata 3f4468 */ SIS_ALG_WORK sis_algo;
/* sdata 3f4470 */ SIS_SEARCH sis_search;
/* sdata 3f4478 */ SIS_MOTION sis_motion;
/* data 34fe50 */ float sistv[4];
/* sbss 3f4fb4 */ char look_at_pre_kaidan_flg;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/item/prg/soul_list.c
// *****************************************************************************

/* bss 4bc0a0 */ fixed_array<PLYR_SOUL_LIST, 176> plyr_soul_list;
/* sbss 3f54a0 */ unsigned char PLYR_SOUL_LIST type_info node[8];
/* sbss 3f5218 */ unsigned char CVariable<char, 0, 9> type_info node[8];
/* sbss 3f5210 */ unsigned char CVariable<char, 0, 3> type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/photo/spirit_gage.c
// *****************************************************************************

/* rdata 3c7ce0 */ CMIN_MAX<float> CSpiritGage::aDmgMultipleTbl[3];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/spr_stack.c
// *****************************************************************************

/* sdata 3f4590 */ CStackMem zero2_spr_stack;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/subtitle/subtitle.c
// *****************************************************************************

/* data 34fe80 */ SUBTITLE_CTRL SubTitleCtrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/os/system.c
// *****************************************************************************

/* data 34fea0 */ SND_3D_ENV s3d_env;
/* sdata 3f4618 */ int SYSTEM_VBLANK_WAIT_NUM;
/* data 34feb8 */ CD_DAT_TBL cd_dat_tbl[4491];
/* data 35d140 */ char *filename_path[54];
/* data 35d218 */ char file_ext_tbl[4491];
/* sdata 3f4628 */ sceGsDrawEnv1 *pdrawenv;
/* data 35e3b0 */ sceGsDBuff gdb;
/* sdata 3f462c */ int system_sound_bank_id;
/* bss 4bc620 */ HEAP_WRK system_heap_wrk;
/* sbss 3f4fb8 */ int vblank_sema;
/* rdata 3dd3d0 */ FNAME_DAT filename_dat[4491];
/* sbss 3f4fbc */ int draw_perf_count;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/save_load/prg/system_data_save.c
// *****************************************************************************

/* sdata 3f4700 */ void *(*SystemDataSaveMemGet)(/* parameters unknown */);
/* sdata 3f4704 */ void (*SystemDataSaveMemFree)(/* parameters unknown */);
/* sdata 3f4708 */ void *system_data_buff_addr;
/* sbss 3f4fc0 */ SYSTEM_DATA_SAVE_CTRL system_data_save_ctrl;
/* sbss 3f4fc8 */ SYSTEM_DATA_SAVE_DISP system_data_save_disp;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title.c
// *****************************************************************************

/* sdata 3f4770 */ void *title_bg_addr;
/* sdata 3f4774 */ void *title_logo_addr;
/* sdata 3f4778 */ void *outgame_cmn_tex_addr;
/* sdata 3f477c */ u_char title_bg_send_lock;
/* sdata 3f477d */ u_char title_move_movie_timer;
/* bss 4bc640 */ TITLE_WRK title_wrk;
/* sbss 3f4fd0 */ TITLE_DISP_CTRL title_disp_ctrl;
/* sbss 3f4fd8 */ char title_load_end;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/tim_dat/title_dat.c
// *****************************************************************************

/* rdata 3e6790 */ int title_left_x_tbl[8][5];
/* rdata 3e6830 */ int title_right_x_tbl[8][5];
/* rdata 3e68d0 */ int newgame_left_x_tbl[2][5];
/* rdata 3e68f8 */ int newgame_right_x_tbl[2][5];
/* data 35e5e0 */ SPRT_DAT title_top[29];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title_menu.c
// *****************************************************************************

/* sbss 3f4fe0 */ TITLE_MENU_CTRL title_menu_ctrl;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/outgame/title_movie.c
// *****************************************************************************

/* sbss 3f4fe8 */ TITLE_MOVIE_WRK title_movie_wrk;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/ingame/plyr/unit_ctl.c
// *****************************************************************************

/* sbss 3f5220 */ unsigned char ENE_WRK type_info node[8];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/common/utility2.c
// *****************************************************************************

/* sdata 3f48d0 */ void (*print_warning_func)(/* parameters unknown */);
/* sdata 3f48d4 */ void (*print_assert_func)(/* parameters unknown */);
/* bss 4bc658 */ char g_cComment[300];

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/system/pad/vib_manage.c
// *****************************************************************************

/* sbss 3f4ff0 */ int vib1_time;
/* sbss 3f4ff4 */ int vib2_time;
/* sbss 3f4ff8 */ int vib2_pow;

// *****************************************************************************
// FILE -- /home/zero_rom/zero2np/src/debug/zero2_perf.c
// *****************************************************************************

/* sdata 3f4908 */ C_ZERO2_PERF_CNT c_zero2_perf_cnt;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/fileload.c
// *****************************************************************************

/* sbss 3f5000 */ short unsigned int file_load_wrk_id;
/* sbss 3f5004 */ FILE_LOAD_WRK *file_load_wrk;
/* bss 4bd7c0 */ FILE_LOAD_SYS file_load_sys;
/* bss 4bd800 */ char iop_fileload_ret[64];
/* bss 4bd840 */ char iop_fileload_cmd[320];
/* bss 4bd980 */ sceSifClientData sif_cli_data_f;
/* sbss 3f5008 */ int load_th_idx;
/* sbss 3f500c */ int load_req_sema_id;
/* sbss 3f5010 */ int rpc_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/spu_mem.c
// *****************************************************************************

/* bss 4bd9a8 */ SPU_BUF spu_buf[50];
/* sbss 3f5014 */ int spu_mem_sema;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_buffer.c
// *****************************************************************************

/* bss 4bde58 */ SND_BUF_PLAYER snd_buf_player[48];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/ee_iop.c
// *****************************************************************************

/* sbss 3f5018 */ void *(*ee_iop_malloc)(/* parameters unknown */);
/* sbss 3f501c */ void (*ee_iop_free)(/* parameters unknown */);
/* bss 4be840 */ char iop_com_buffer[4096];
/* bss 4bf840 */ IOP_RET_STATUS iop_ret;
/* bss 4bfa00 */ char iop_ret_buffer[448];
/* sbss 3f5020 */ int iop_com_offset;
/* bss 4bfbc0 */ sceSifClientData sif_cli_data;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/ee_iop_q.c
// *****************************************************************************

/* bss 4bfc00 */ char iop_query_buffer[512];
/* bss 4bfe00 */ char iop_query_arg[512];
/* bss 4c0000 */ sceSifClientData sif_cli_data_q;
/* sbss 3f5024 */ int query_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/stream_auto.c
// *****************************************************************************

/* sdata 3f4978 */ int dbg_stream_enable_flg;
/* sbss 3f5028 */ int stream_queue_max;
/* sbss 3f502c */ STREAM_QUEUE *stream_wait_queue;
/* bss 4c0030 */ STREAM_QUEUE stream_play_queue[2];
/* sbss 3f5030 */ char stream_play_disable[2];
/* sbss 3f5032 */ char stream_play_disable_num;
/* sbss 3f5034 */ int stream_queue_id;
/* sbss 3f5038 */ int stream_wait_num;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_bank.c
// *****************************************************************************

/* sbss 3f503c */ int snd_bank_max;
/* sbss 3f5040 */ SND_BANK *snd_bank;
/* sbss 3f5044 */ SND_BANK_FILE *snd_bd_file;
/* sbss 3f5048 */ SND_BANK_FILE *snd_hxd_file;
/* sbss 3f504c */ int snd_bank_load_priority;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_3d.c
// *****************************************************************************

/* data 35e980 */ SND_3D_ENV snd_3d_env;
/* sdata 3f4992 */ char listner_set;
/* sbss 3f5050 */ float farthest_dist_calc;
/* sbss 3f5054 */ float nearest_dist_calc;
/* sbss 3f5058 */ float sound_speed;
/* sbss 3f505c */ float dist_unit;
/* bss 4c00f0 */ SND_3D_WRK snd_3d_wrk[30];
/* bss 4c0690 */ SND_3D_LISTENER snd_3d_listner;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/cddat.c
// *****************************************************************************

/* bss 4c07e0 */ char title_root_path[200];
/* sbss 3f5060 */ FNAME_DAT *p_fname_dat;
/* sbss 3f5064 */ char **p_filename_path;
/* sbss 3f5068 */ char *p_ext_lbl;
/* sbss 3f506c */ int project_file_num;
/* sbss 3f5070 */ CD_DAT_TBL *p_cd_dat;
/* bss 4c08a8 */ SET_CD_DAT set_cd_dat;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd.c
// *****************************************************************************

/* data 35e998 */ int eff_use_size_tbl[0];
/* bss 4c08b8 */ SOUND_SYS snd_sys;
/* sbss 3f5078 */ int effect_mode[2];
/* sbss 3f5080 */ int effect_adrs[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_pcmstream.c
// *****************************************************************************

/* data 35e9c0 */ SND_PCM_STREAM_WRK snd_pcm_stream_wrk[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/cmp_eeiop.c
// *****************************************************************************

/* sdata 3f49a8 */ void *tmp_buf_adrs;
/* sdata 3f49ac */ int cmp_th_idx;
/* sbss 3f5088 */ void *cmp_eeiop_stack;
/* bss 4c08d0 */ sceSifCmdData cmdbuffer[16];
/* bss 4c0990 */ LOAD_REQ_NEW decode_load_ee;
/* sbss 3f508c */ int cmp_eeiop_init_priority;
/* sbss 3f5090 */ int decode_sema_id;
/* sbss 3f5094 */ int decode_dat_sema_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_util.c
// *****************************************************************************

/* sbss 3f5098 */ AUTO_BD_WRK *auto_bd_wrk;
/* sbss 3f509c */ int auto_bd_wrk_max;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/file_stream.c
// *****************************************************************************

/* bss 4c0ac0 */ char iop_file_stm_ret[64];
/* bss 4c0b00 */ char iop_file_stm_arg[320];
/* bss 4c0c40 */ sceSifClientData sif_cli_data_s;
/* sbss 3f50a0 */ int file_stream_lock;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/hxd.c
// *****************************************************************************

/* data 35ec10 */ char *voice_type_name_tbl[0];
/* sdata 3f49b0 */ int hxd_file_id;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/spu_voice.c
// *****************************************************************************

/* sdata 3f49d0 */ int core_voices[2];

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/eeiop/snd_stream.c
// *****************************************************************************

/* bss 4c0c80 */ SND_STREAM_WRK snd_stream_wrk[2];
/* bss 4c1000 */ char header_buf_64[2][2048];
/* sbss 3f50a8 */ int irq_core_source[2];
/* sbss 3f50b0 */ int snd_stream_load_priority;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/encodes/encodes.c
// *****************************************************************************

/* data 35ec28 */ short int dad[4097];
/* data 360c30 */ short int lson[4097];
/* data 362c38 */ short int rson[4353];
/* data 364e40 */ unsigned char text[4113];
/* sdata 3f49d8 */ short int matchpos;
/* sdata 3f49da */ short int matchlen;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/my_strfile.c
// *****************************************************************************

/* sbss 3f50b4 */ int pss_block_read;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/playpss.c
// *****************************************************************************

/* sdata 3f49e0 */ int iPalVBlankCounter;
/* sdata 3f49f0 */ int iVTCounter;
/* bss 4c2000 */ char videoDecStack[2048];
/* sbss 3f50b8 */ PLAY_PSS_FLAGS Flags;
/* sbss 3f50bc */ int videoDecTh;
/* bss 4c2800 */ AudioDec audioDec;
/* sbss 3f50c0 */ int (*fileRead)(/* parameters unknown */);
/* sbss 3f50c4 */ int bgDuration;
/* sdata 3f49f4 */ int iMovieDecSema;
/* sbss 3f50c8 */ char *muxBuff;
/* sbss 3f50cc */ int muxBuffFullness;
/* sbss 3f50d0 */ char *demuxBuff;
/* sbss 3f50d4 */ int demuxBuffSize;
/* sbss 3f50d8 */ char *demuxBuffPast;
/* sbss 3f50dc */ char *demuxBuffPresent;
/* sbss 3f50e0 */ char *demuxBuffFuture;
/* sbss 3f50e4 */ sceIpuRGB32 *rsrcs_rgb32;
/* sbss 3f50e8 */ u_int *rsrcs_path3tag;
/* sbss 3f50ec */ int rsrcs_vram_adrs;
/* bss 4c2860 */ sceMpeg playpss_mp;
/* sbss 3f50f0 */ int audio_play_flg;
/* sdata 3f49f8 */ int hid_vblank;

// *****************************************************************************
// FILE -- /home/akira_koide/zero2np/src/system/playpss/audiodec.c
// *****************************************************************************

/* sbss 3f50f4 */ int AUTODMA_CH;
/* sbss 3f50f8 */ int audio_vol_percent;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/thread.c
// *****************************************************************************

/* data 367a80 */ int topId;
/* bss 4c33f0 */ int topSema;
/* bss 4c33f8 */ rqueue topArg;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/kprintf.c
// *****************************************************************************

/* data 367a84 */ int count;
/* data 367a88 */ void (*_putchar)(/* parameters unknown */);
/* bss 4c3800 */ char linebuf[128];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/sifcmd.c
// *****************************************************************************

/* data 367a8c */ int _cmd_init_check;
/* bss 4c3880 */ u_long128 _pckt_buffer[8];
/* bss 4c3900 */ u_long128 _send_buffer[4];
/* bss 4c3940 */ sceSifCmdCSData _csdata;
/* bss 4c3954 */ int sif0_handleid;
/* bss 4c3958 */ sceSifCmdDataTable _data_table;
/* bss 4c3980 */ sceSifCmdData _sys_buffer[32];
/* bss 4c3b00 */ unsigned int soft_reg[32];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/sifrpc.c
// *****************************************************************************

/* data 367a90 */ int _sceSifInitCheck;
/* bss 4c3b80 */ _sceRpcPacket _packet_buffer[32];
/* bss 4c4380 */ _sceRpcPacket _free_buffer[32];
/* bss 4c4b80 */ _sceRpcPacket _free_buffer2[32];
/* bss 4c5380 */ _sceRpcDataTable _data_table;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/filestub.c
// *****************************************************************************

/* data 367a98 */ int _sceFs_q[32];
/* data 367b18 */ unsigned int ee_retbuf_sel;
/* data 367b1c */ int _fs_init;
/* data 367b20 */ int _fs_rcv_bufdbl;
/* data 367b24 */ int _fs_semid;
/* data 367b28 */ int _fs_iob_semid;
/* data 367b2c */ int _fs_fsq_semid;
/* data 367b30 */ char *_fswildcard;
/* bss 4c5400 */ unsigned char _send_data[3136];
/* bss 4c6040 */ unsigned char _rcv_data_rpc[64];
/* bss 4c6080 */ unsigned char _rcv_data_cmd[2][1088];
/* bss 4c6900 */ _sceFsIob _iob[32];
/* bss 4c6b00 */ sceSifClientData _cd;
/* bss 4c6b28 */ char _fsversion[4];
/* bss 4c6b40 */ int _sif_FsRcv_Data[16];
/* bss 4c6b80 */ int _sif_FsPoff_Data[16];
/* bss 4c6bc0 */ void *sceCbPoff_Gp;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopheap.c
// *****************************************************************************

/* data 367b34 */ int _bind;
/* bss 4c6c00 */ sceSifClientData cd;
/* bss 4c6c40 */ unsigned int rdata[16];
/* bss 4c6c80 */ unsigned int sdata[16];
/* bss 4c6cc0 */ _sceLoadIHData _lih_data;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/eeloadfile.c
// *****************************************************************************

/* data 367b38 */ int _bind_check;
/* data 367b3c */ char *_lfwildcard;
/* bss 4c6dc0 */ _sceLoadFileData _senddata;
/* bss 4c6fc0 */ sceSifClientData cd;
/* bss 4c6fe8 */ char _lfversion[4];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopreset.c
// *****************************************************************************

/* bss 4c7000 */ sceSifCmdResetData rdata;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/tlbfunc.c
// *****************************************************************************

/* data 367b40 */ u_int tlbsrc[0];
/* data 367e70 */ void (*_kTLBRefillHandler)(/* parameters unknown */);
/* data 367e78 */ void (*_kDebugHandler[16])(/* parameters unknown */);
/* data 367eb8 */ void *_kExecArg;
/* data 367ec0 */ struct SysEntry[0]
{ // 0x8
    /* 0x000 */ int num;
    /* 0x004 */ void *func;
};
/* data 367f00 */ TLBEntry kernelTLB[0];
/* data 367fd0 */ TLBEntry defaultTLB[0];
/* data 3680f0 */ TLBEntry extendTLB[0];
/* data 368170 */ TLB TLBInfo;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/initsys.c
// *****************************************************************************

/* data 368190 */ int *_SyscallEntry;
/* data 368198 */ struct SysEntry[0]
{ // 0x8
    /* 0x000 */ int num;
    /* 0x004 */ void *func;
};
/* data 3681a8 */ int __sce_sema_id;
/* data 3681ac */ int __sce_eh_sema_id;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/libosd.c
// *****************************************************************************

/* data 3681b0 */ u_int osdsrc[0];
/* data 368958 */ SysEntry SysExecPS2Entry[0];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/exit.c
// *****************************************************************************

/* data 368970 */ struct SysEntry[0]
{ // 0x8
    /* 0x000 */ int num;
    /* 0x004 */ void *func;
};

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/alarm.c
// *****************************************************************************

/* data 368978 */ u_int srcfile[0];
/* data 3690b8 */ u_int eenull[0];
/* data 3690e0 */ struct SysEntry[0]
{ // 0x8
    /* 0x000 */ int num;
    /* 0x004 */ void *func;
};

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/timer.c
// *****************************************************************************

/* data 369120 */ struct g_Timer
{ // 0x20
    /* 0x000 */ u_long ulHighCount;
    /* 0x008 */ int hid;
    /* 0x00c */ u_int uniqkey;
    /* 0x010 */ u_int uiUsedCounters;
    /* 0x014 */ COUNTER *pFree;
    /* 0x018 */ COUNTER *pAlarm;
    /* 0x01c */ int cbcounterid;
};
/* bss 4c82c0 */ COUNTER g_CounterBuf[128];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/timeralarm.c
// *****************************************************************************

/* bss 4ca2c0 */ ALARM g_AlarmBuf[64];
/* bss 4ca6c0 */ ALARM *g_pFreeAlarm;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/iopnotify.c
// *****************************************************************************

/* data 369140 */ sceSifRebootNotifyData *g_pUserRebootBuf;
/* data 369144 */ int g_iUserRebootSize;
/* bss 4ca6c8 */ sceSifRebootNotifyData g_SysRebootBuf[32];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/glue.c
// *****************************************************************************

/* data 369148 */ int ttyinit;

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/deci2.c
// *****************************************************************************

/* bss 4ca8c8 */ char userarea[36];

// *****************************************************************************
// FILE -- /home/xokano/globe_cvs/g_28/g/ee/src/kernel/libc/tty.c
// *****************************************************************************

/* bss 4caa10 */ TTYINFO tinfo;
/* bss 4caa40 */ char wbuf[320];
/* bss 4cab80 */ char rbuf[320];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_atan.c
// *****************************************************************************

/* rdata 3eb000 */ float atanhi[0];
/* rdata 3eb010 */ float atanlo[0];
/* rdata 3eb020 */ float aT[0];
/* rdata 3eb04c */ float one;
/* rdata 3eb050 */ float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_cos.c
// *****************************************************************************

/* rdata 3eb054 */ float one;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_acos.c
// *****************************************************************************

/* rdata 3eb058 */ float one;
/* rdata 3eb05c */ float pi;
/* rdata 3eb060 */ float pio2_hi;
/* rdata 3eb064 */ float pio2_lo;
/* rdata 3eb068 */ float pS0;
/* rdata 3eb06c */ float pS1;
/* rdata 3eb070 */ float pS2;
/* rdata 3eb074 */ float pS3;
/* rdata 3eb078 */ float pS4;
/* rdata 3eb07c */ float pS5;
/* rdata 3eb080 */ float qS1;
/* rdata 3eb084 */ float qS2;
/* rdata 3eb088 */ float qS3;
/* rdata 3eb08c */ float qS4;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_atan2.c
// *****************************************************************************

/* rdata 3eb090 */ float tiny;
/* rdata 3eb094 */ float zero;
/* rdata 3eb098 */ float pi_o_4;
/* rdata 3eb09c */ float pi_o_2;
/* rdata 3eb0a0 */ float pi;
/* rdata 3eb0a4 */ float pi_lo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_fmod.c
// *****************************************************************************

/* rdata 3eb0a8 */ float one;
/* rdata 3eb0b0 */ float Zero[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_log.c
// *****************************************************************************

/* rdata 3eb0b8 */ float ln2_hi;
/* rdata 3eb0bc */ float ln2_lo;
/* rdata 3eb0c0 */ float two25;
/* rdata 3eb0c4 */ float Lg1;
/* rdata 3eb0c8 */ float Lg2;
/* rdata 3eb0cc */ float Lg3;
/* rdata 3eb0d0 */ float Lg4;
/* rdata 3eb0d4 */ float Lg5;
/* rdata 3eb0d8 */ float Lg6;
/* rdata 3eb0dc */ float Lg7;
/* rdata 3eb0e0 */ float zero;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_pow.c
// *****************************************************************************

/* rdata 3eb0e8 */ float bp[0];
/* rdata 3eb0f0 */ float dp_h[0];
/* rdata 3eb0f8 */ float dp_l[0];
/* rdata 3eb100 */ float zero;
/* rdata 3eb104 */ float one;
/* rdata 3eb108 */ float two;
/* rdata 3eb10c */ float two24;
/* rdata 3eb110 */ float huge;
/* rdata 3eb114 */ float tiny;
/* rdata 3eb118 */ float L1;
/* rdata 3eb11c */ float L2;
/* rdata 3eb120 */ float L3;
/* rdata 3eb124 */ float L4;
/* rdata 3eb128 */ float L5;
/* rdata 3eb12c */ float L6;
/* rdata 3eb130 */ float P1;
/* rdata 3eb134 */ float P2;
/* rdata 3eb138 */ float P3;
/* rdata 3eb13c */ float P4;
/* rdata 3eb140 */ float P5;
/* rdata 3eb144 */ float lg2;
/* rdata 3eb148 */ float lg2_h;
/* rdata 3eb14c */ float lg2_l;
/* rdata 3eb150 */ float ovt;
/* rdata 3eb154 */ float cp;
/* rdata 3eb158 */ float cp_h;
/* rdata 3eb15c */ float cp_l;
/* rdata 3eb160 */ float ivln2;
/* rdata 3eb164 */ float ivln2_h;
/* rdata 3eb168 */ float ivln2_l;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_rem_pio2.c
// *****************************************************************************

/* rdata 3eb170 */ __int32_t two_over_pi[0];
/* rdata 3eb488 */ __int32_t npio2_hw[0];
/* rdata 3eb508 */ float zero;
/* rdata 3eb50c */ float half;
/* rdata 3eb510 */ float two8;
/* rdata 3eb514 */ float invpio2;
/* rdata 3eb518 */ float pio2_1;
/* rdata 3eb51c */ float pio2_1t;
/* rdata 3eb520 */ float pio2_2;
/* rdata 3eb524 */ float pio2_2t;
/* rdata 3eb528 */ float pio2_3;
/* rdata 3eb52c */ float pio2_3t;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/ef_sqrt.c
// *****************************************************************************

/* rdata 3eb530 */ float one;
/* rdata 3eb534 */ float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_cos.c
// *****************************************************************************

/* rdata 3eb538 */ float one;
/* rdata 3eb53c */ float C1;
/* rdata 3eb540 */ float C2;
/* rdata 3eb544 */ float C3;
/* rdata 3eb548 */ float C4;
/* rdata 3eb54c */ float C5;
/* rdata 3eb550 */ float C6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_rem_pio2.c
// *****************************************************************************

/* rdata 3eb558 */ int init_jk[0];
/* rdata 3eb568 */ float PIo2[0];
/* rdata 3eb594 */ float zero;
/* rdata 3eb598 */ float one;
/* rdata 3eb59c */ float two8;
/* rdata 3eb5a0 */ float twon8;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_sin.c
// *****************************************************************************

/* rdata 3eb5a4 */ float half;
/* rdata 3eb5a8 */ float S1;
/* rdata 3eb5ac */ float S2;
/* rdata 3eb5b0 */ float S3;
/* rdata 3eb5b4 */ float S4;
/* rdata 3eb5b8 */ float S5;
/* rdata 3eb5bc */ float S6;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/kf_tan.c
// *****************************************************************************

/* rdata 3eb5c0 */ float one;
/* rdata 3eb5c4 */ float pio4;
/* rdata 3eb5c8 */ float pio4lo;
/* rdata 3eb5d0 */ float T[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/sf_floor.c
// *****************************************************************************

/* rdata 3eb604 */ float huge;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/common/sf_scalbn.c
// *****************************************************************************

/* rdata 3eb608 */ float two25;
/* rdata 3eb60c */ float twom25;
/* rdata 3eb610 */ float huge;
/* rdata 3eb614 */ float tiny;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb618 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb718 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb818 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* rdata 3eb918 */ UQItype __clz_tab[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/libgcc2.c
// *****************************************************************************

/* data 369560 */ void (*__terminate_func)(/* parameters unknown */);
/* data 369564 */ eh_context *(*get_eh_context)(/* parameters unknown */);
/* data 369568 */ int dwarf_reg_size_table_initialized;
/* bss 4cdc20 */ void *key_value[256];
/* bss 4cd9f0 */ __gthread_key_t eh_context_key;
/* bss 4cd9f8 */ char dwarf_reg_size_table[122];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/build/gcc/dp-bit.c
// *****************************************************************************

/* rdata 3eba18 */ fp_number_type __thenan_df;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/frame-dwarf2.c
// *****************************************************************************

/* data 369574 */ __gthread_mutex_t object_mutex;
/* bss 4cdc20 */ void *key_value[256];
/* bss 4cda78 */ object *objects;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/tinfo.cc
// *****************************************************************************

/* data 36a090 */ __vtbl_ptr_type __class_type_info virtual table[6];
/* data 36a0c0 */ __vtbl_ptr_type __si_type_info virtual table[6];
/* data 36a0f0 */ __vtbl_ptr_type __user_type_info virtual table[6];
/* data 36a120 */ __vtbl_ptr_type bad_typeid virtual table[4];
/* data 36a140 */ __vtbl_ptr_type bad_cast virtual table[4];
/* data 36a160 */ __vtbl_ptr_type type_info virtual table[3];
/* bss 3f54a8 */ unsigned char type_info type_info node[8];
/* bss 4ce030 */ unsigned char bad_cast type_info node[12];
/* bss 4ce020 */ unsigned char bad_typeid type_info node[12];
/* bss 4ce040 */ unsigned char __user_type_info type_info node[12];
/* bss 4ce050 */ unsigned char __si_type_info type_info node[12];
/* bss 4ce060 */ unsigned char __class_type_info type_info node[12];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/tinfo2.cc
// *****************************************************************************

/* data 36a178 */ __vtbl_ptr_type __array_type_info virtual table[3];
/* data 36a190 */ __vtbl_ptr_type __ptmd_type_info virtual table[3];
/* data 36a1a8 */ __vtbl_ptr_type __ptmf_type_info virtual table[3];
/* data 36a1c0 */ __vtbl_ptr_type __func_type_info virtual table[3];
/* data 36a1d8 */ __vtbl_ptr_type __builtin_type_info virtual table[3];
/* data 36a1f0 */ __vtbl_ptr_type __attr_type_info virtual table[3];
/* data 36a208 */ __vtbl_ptr_type __pointer_type_info virtual table[3];
/* bss 4ce0b0 */ unsigned char __pointer_type_info type_info node[12];
/* bss 4ce080 */ unsigned char __attr_type_info type_info node[12];
/* bss 4ce0d0 */ unsigned char __builtin_type_info type_info node[12];
/* bss 4ce070 */ unsigned char __func_type_info type_info node[12];
/* bss 4ce090 */ unsigned char __ptmf_type_info type_info node[12];
/* bss 4ce0c0 */ unsigned char __ptmd_type_info type_info node[12];
/* bss 4ce0a0 */ unsigned char __array_type_info type_info node[12];
/* data 369578 */ unsigned char void type_info node[8];
/* data 369580 */ unsigned char long long type_info node[8];
/* data 369588 */ unsigned char long type_info node[8];
/* data 369590 */ unsigned char int type_info node[8];
/* data 369598 */ unsigned char short type_info node[8];
/* data 3695a0 */ unsigned char bool type_info node[8];
/* data 3695a8 */ unsigned char char type_info node[8];
/* data 3695b0 */ unsigned char wchar_t type_info node[8];
/* data 3695b8 */ unsigned char long double type_info node[8];
/* data 3695c0 */ unsigned char double type_info node[8];
/* data 3695c8 */ unsigned char float type_info node[8];
/* data 3695d0 */ unsigned char unsigned int type_info node[8];
/* data 3695d8 */ unsigned char unsigned long type_info node[8];
/* data 3695e0 */ unsigned char unsigned long long type_info node[8];
/* data 3695e8 */ unsigned char unsigned short type_info node[8];
/* data 3695f0 */ unsigned char unsigned char type_info node[8];
/* data 3695f8 */ unsigned char signed char type_info node[8];
/* data 369600 */ unsigned char int128_t type_info node[8];
/* data 369608 */ unsigned char unsigned int128_t type_info node[8];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/gcc/cp/exception.cc
// *****************************************************************************

/* data 369610 */ void (*__unexpected_func)(/* parameters unknown */);
/* data 36a220 */ __vtbl_ptr_type bad_exception virtual table[4];
/* data 36a240 */ __vtbl_ptr_type exception virtual table[4];
/* bss 3f54b0 */ unsigned char exception type_info node[8];
/* bss 4ce0e0 */ unsigned char bad_exception type_info node[12];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/ctype/ctype_.c
// *****************************************************************************

/* rdata 3ebd08 */ char _ctype_[257];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/impure.c
// *****************************************************************************

/* data 369618 */ _reent impure_data;
/* data 369908 */ _reent *_impure_ptr;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mallocr.c
// *****************************************************************************

/* data 369910 */ mbinptr __malloc_av_[258];
/* data 369d18 */ long unsigned int __malloc_trim_threshold;
/* data 369d20 */ long unsigned int __malloc_top_pad;
/* data 369d28 */ char *__malloc_sbrk_base;
/* data 369d30 */ long unsigned int __malloc_max_sbrked_mem;
/* data 369d38 */ long unsigned int __malloc_max_total_mem;
/* data 369d40 */ mallinfo __malloc_current_mallinfo;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mlock.c
// *****************************************************************************

/* data 369d68 */ int __malloc_lock_owner;
/* data 369d6c */ int call_count;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/reent/sbrkr.c
// *****************************************************************************

/* bss 3f54b8 */ int errno;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/locale/locale.c
// *****************************************************************************

/* data 369d70 */ int __mb_cur_max;

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libc/stdlib/mprec.c
// *****************************************************************************

/* rdata 3ed0a0 */ double __mprec_tens[0];
/* rdata 3ed168 */ double __mprec_bigtens[0];
/* rdata 3ed190 */ double __mprec_tinytens[0];

// *****************************************************************************
// FILE -- /usr/local/sce/ee/gcc/src/newlib/libm/math/s_infconst.c
// *****************************************************************************

/* rdata 3ed290 */ __dmath __infinity[1];
