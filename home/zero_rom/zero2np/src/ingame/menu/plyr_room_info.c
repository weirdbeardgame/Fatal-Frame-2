// STATUS: NOT STARTED

#include "plyr_room_info.h"

struct fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]> {
protected:
	ROOM_IN_INFO m_aData[240];
	
public:
	fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ROOM_IN_INFO& operator[]();
	ROOM_IN_INFO& operator[]();
	ROOM_IN_INFO* data();
	ROOM_IN_INFO* begin();
	ROOM_IN_INFO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ROOM_IN_INFO,240> : fixed_array_base<ROOM_IN_INFO,240,ROOM_IN_INFO[240]> {
};

static fixed_array<ROOM_IN_INFO,240> room_in_info;
unsigned char ROOM_IN_INFO type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c4078;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12ROOM_IN_INFO(0x3f3aa8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12ROOM_IN_INFO(0x3f3ab0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf12ROOM_IN_INFO(0x3c40c0,_max);
  }
  return (uint **)0x0;
}

void RoomInInfoInit() {
	int i;
	
  ROOM_IN_INFO *pRVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(iVar2,0xf0);
    pRVar1 = room_in_info.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
    pRVar1->info = '\0';
  } while (iVar2 < 0xf0);
  return;
}

void RoomInCheckMain() {
	int room_label;
	
  int room_label;
  
  room_label = GetPlyrRoomLabel__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (room_label != -1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(room_label,0xf0);
    room_in_info.field0_0x0.m_aData[room_label].info = '\x01';
                    /* end of inlined section */
    HouseInCheck__Fi(room_label);
  }
  GhostSealDoorMain__Fi(room_label);
  return;
}

static void HouseInCheck(int room_label) {
	int j;
	
  int iVar1;
  HOUSE_INFO_DAT *pHVar2;
  int iVar3;
  
  pHVar2 = house_info_dat;
  if (house_info_dat[0].room_label != -1) {
    iVar3 = 0;
    do {
      for (iVar1 = pHVar2->start_room_label;
          iVar1 <= *(int *)((int)&house_info_dat[0].end_room_label + iVar3); iVar1 = iVar1 + 1) {
        if (room_label == iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar1 = *(int *)((int)&house_info_dat[0].room_label + iVar3);
          _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(iVar1,0xf0);
          room_in_info.field0_0x0.m_aData[iVar1].info = '\x01';
                    /* end of inlined section */
          break;
        }
      }
      pHVar2 = pHVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (pHVar2->room_label != -1);
  }
  return;
}

static int RoomInfoRoomHitCheck(int map_label, int area_label, float x, float y) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 82,
		/* [1] = */ 111,
		/* [2] = */ 111,
		/* [3] = */ 109,
		/* [4] = */ 73,
		/* [5] = */ 110,
		/* [6] = */ 102,
		/* [7] = */ 111,
		/* [8] = */ 82,
		/* [9] = */ 111,
		/* [10] = */ 111,
		/* [11] = */ 109,
		/* [12] = */ 72,
		/* [13] = */ 105,
		/* [14] = */ 116,
		/* [15] = */ 67,
		/* [16] = */ 104,
		/* [17] = */ 101,
		/* [18] = */ 99,
		/* [19] = */ 107,
		/* [20] = */ 0
	};
	int res;
	float target[4];
	float tri0[4];
	float tri1[4];
	float tri2[4];
	float tri3[4];
	
  int iVar1;
  long lVar2;
  MAP_AREA_DAT *pMVar3;
  long lVar4;
  float x_00;
  float target [4];
  float tri0 [4];
  float tri1 [4];
  float tri2 [4];
  float tri3 [4];
  
  lVar4 = (long)map_label;
  if (0x11 < lVar4) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! RoomInfoRoomHitCheck map_label %d");
  }
  if (lVar4 < 0) {
    printf("Error! RoomInfoRoomHitCheck map_label %d");
  }
  pMVar3 = map_area_dat;
  target[3] = 1.0;
  target[1] = 0.0;
  if (map_area_dat[0].map_label != -1) {
    lVar2 = (long)map_area_dat[0].map_label;
    target[0] = x;
    target[2] = y;
    do {
      if (lVar2 == lVar4) {
        if ((long)pMVar3->area_label == -1) {
          x_00 = pMVar3->pos[0];
        }
        else {
          if ((long)pMVar3->area_label != (long)area_label) goto LAB_002404e8;
          x_00 = pMVar3->pos[0];
        }
        RoomInfoSetPosition__FPfffi(tri0,x_00,pMVar3->pos[1],map_label);
        RoomInfoSetPosition__FPfffi(tri1,pMVar3->pos[1][0],pMVar3->pos[1][1],map_label);
        RoomInfoSetPosition__FPfffi(tri2,pMVar3->pos[2][0],pMVar3->pos[2][1],map_label);
        RoomInfoSetPosition__FPfffi(tri3,pMVar3->pos[3][0],pMVar3->pos[3][1],map_label);
        iVar1 = MenuMapHitCheck__FPfN40(target,tri0,tri1,tri2,tri3);
        if (iVar1 != 0) {
          return (int)(short)pMVar3->room_label;
        }
      }
LAB_002404e8:
      pMVar3 = pMVar3 + 1;
      lVar2 = (long)pMVar3->map_label;
    } while (lVar2 != -1);
  }
  return -1;
}

static void RoomInfoSetPosition(float *pos, float x, float y, int map_label) {
  float fVar1;
  
  fVar1 = map_scall_dat[map_label].normal;
  pos[1] = 0.0;
  *pos = x * fVar1;
  fVar1 = map_scall_dat[map_label].normal;
  pos[3] = 1.0;
  pos[2] = y * fVar1;
  return;
}

int GetPlyrRoomLabel() {
  int iVar1;
  int floor_label;
  
  iVar1 = GetPlyrAreaNo__Fv();
  floor_label = GetPlyrFloor__Fv();
  iVar1 = GetRoomLabel__FiiPf(iVar1,floor_label,plyr_wrk.cmn_wrk.mbox.pos);
  return iVar1;
}

int GetRoomLabel(int area_label, int floor_label, float *pos) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 82,
		/* [4] = */ 111,
		/* [5] = */ 111,
		/* [6] = */ 109,
		/* [7] = */ 76,
		/* [8] = */ 97,
		/* [9] = */ 98,
		/* [10] = */ 101,
		/* [11] = */ 108,
		/* [12] = */ 0
	};
	int map_label;
	int room_label;
	float pos_x;
	float pos_y;
	
  int map_label;
  int iVar1;
  float pos_x;
  float pos_y;
  
  if (0x41 < area_label) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetRoomLabel area_label %d");
  }
  if (4 < floor_label - 10U) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetRoomLabel floor_label %d");
  }
  pos_x = 0.0;
  iVar1 = -1;
  pos_y = 0.0;
  map_label = GetMapLabelFromAreaLabel__Fii(area_label,floor_label);
  if (map_label != -1) {
    ChangeWorldPosToWinPos__FPfT0iT0i(&pos_x,&pos_y,map_label,pos,0);
    iVar1 = RoomInfoRoomHitCheck__Fiiff(map_label,area_label,pos_x,pos_y);
  }
  return iVar1;
}

void ChangeWorldPosToWinPos(float *pos_x, float *pos_y, int map_label, float *pos, int scall) {
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (scall == 0) {
    if ((map_label == 0) || (map_label == 0xd)) {
      fVar2 = map_scall_dat[map_label].normal;
      *pos_x = (*pos / 100.0) * fVar2 + map_world_point[map_label].x * fVar2;
      fVar3 = map_scall_dat[map_label].normal;
      fVar2 = pos[2] / 100.0;
      fVar1 = map_world_point[map_label].y;
    }
    else {
      fVar2 = map_scall_dat[map_label].normal;
      *pos_x = (*pos / 50.0) * fVar2 + map_world_point[map_label].x * fVar2;
      fVar3 = map_scall_dat[map_label].normal;
      fVar2 = pos[2] / 50.0;
      fVar1 = map_world_point[map_label].y;
    }
  }
  else {
    if (scall != 1) {
      return;
    }
    if ((map_label == 0) || (map_label == 0xd)) {
      fVar2 = 100.0;
    }
    else {
      fVar2 = 50.0;
    }
    fVar1 = map_scall_dat[map_label].big;
    *pos_x = (*pos / fVar2) * fVar1 + map_world_point[map_label].x * fVar1;
    fVar3 = map_scall_dat[map_label].big;
    fVar2 = pos[2] / fVar2;
    fVar1 = map_world_point[map_label].y;
  }
  *pos_y = fVar1 * fVar3 - fVar2 * fVar3;
  return;
}

int GetMapLabelToRoomLabel(int room_label) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 77,
		/* [4] = */ 97,
		/* [5] = */ 112,
		/* [6] = */ 76,
		/* [7] = */ 97,
		/* [8] = */ 98,
		/* [9] = */ 101,
		/* [10] = */ 108,
		/* [11] = */ 84,
		/* [12] = */ 111,
		/* [13] = */ 82,
		/* [14] = */ 111,
		/* [15] = */ 111,
		/* [16] = */ 109,
		/* [17] = */ 76,
		/* [18] = */ 97,
		/* [19] = */ 98,
		/* [20] = */ 101,
		/* [21] = */ 108,
		/* [22] = */ 0
	};
	int i;
	
  ROOM_INFO_DAT *pRVar1;
  int iVar2;
  int iVar3;
  
  if (room_label < 0xf0) {
    if (room_label < 0) {
      printf("Error! GetMapLabelToRoomLabel room_label %d");
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetMapLabelToRoomLabel room_label %d");
  }
  iVar3 = 0;
  iVar2 = 0;
  if ((room_info_dat[0].map_label == -1) || (room_info_dat[0].room_label == room_label)) {
LAB_00240938:
    iVar2 = iVar2 + iVar3;
  }
  else {
    iVar2 = 0;
    pRVar1 = room_info_dat;
    do {
      pRVar1 = pRVar1 + 1;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      if (pRVar1->map_label == -1) goto LAB_00240938;
    } while (pRVar1->room_label != room_label);
    iVar2 = iVar2 + iVar3;
  }
  return (&room_info_dat[0].map_label)[iVar2];
}

int GetRoomInfo(int room_label) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 82,
		/* [4] = */ 111,
		/* [5] = */ 111,
		/* [6] = */ 109,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 102,
		/* [10] = */ 111,
		/* [11] = */ 0
	};
	
  if (room_label < 0xf0) {
    if (room_label < 0) {
      printf("Error! GetRoomInfo room_label %d");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    }
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetRoomInfo room_label %d");
  }
  _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(room_label,0xf0);
  return (int)room_in_info.field0_0x0.m_aData[room_label].info;
}

void SetSave_RoomInInfo(MC_SAVE_DATA *data) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(0,0xf0);
                    /* end of inlined section */
  data->size = 0xf0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)&room_in_info;
  return;
}

void DebugAllMapDisp() {
	int i;
	
  ROOM_IN_INFO *pRVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z12ROOM_IN_INFO_UiUi_PX01(iVar2,0xf0);
    pRVar1 = room_in_info.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
    iVar2 = iVar2 + 1;
                    /* end of inlined section */
    pRVar1->info = '\x01';
  } while (iVar2 < 0xf0);
  return;
}

ROOM_IN_INFO* ROOM_IN_INFO * _fixed_array_verifyrange<ROOM_IN_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& ROOM_IN_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to RoomInInfoInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
