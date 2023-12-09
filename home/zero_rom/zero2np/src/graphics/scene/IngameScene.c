// STATUS: NOT STARTED

#include "IngameScene.h"

typedef enum {
	INGAME_SCENE_STREAM_BACKUP = 0,
	INGAME_SCENE_DATA_LOAD_REQ = 1,
	INGAME_SCENE_DATA_LOAD_WAIT = 2,
	INGAME_SCENE_ROOM_LOAD = 3,
	INGAME_SCENE_PLAY = 4,
	INGAME_SCENE_PLAY_MOVIE = 5,
	INGAME_SCENE_DEBUG_SKIP = 6
} INGAME_SCENE_STATUS;

typedef enum {
	INGAME_SCENE_ROOM_LOAD_WAIT = 0,
	INGAME_SCENE_ROOM_SUB_LOAD_REQ = 1,
	INGAME_SCENE_ROOM_SUB_LOAD = 2,
	INGAME_SCENE_ROOM_MAIN_LOAD_REQ = 3,
	INGAME_SCENE_ROOM_MAIN_LOAD = 4
} INGAME_SCENE_ROOM_LOAD_STATUS;

typedef struct {
	int SceneNo;
	u_int *pLoadAdrs;
	int Status;
	int RoomLoadStatus;
} INGAME_SCENE_CTRL;

static INGAME_SCENE_CTRL ingame_scene = {
	/* .SceneNo = */ 0,
	/* .pLoadAdrs = */ NULL,
	/* .Status = */ 0,
	/* .RoomLoadStatus = */ 0
};

static u_int *pSceneMovieEffect = NULL;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39df50;
	
  g3ddbgAssert__FbPCce(false,str_735);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eec30,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eec38,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

GPHASE_ID_ENUM IngameSceneInit(int scene_no) {
  int iVar1;
  GPHASE_ID_ENUM GVar2;
  
  ingame_scene.SceneNo = scene_no;
  EvChapterDispEndRelease__Fv();
  EvDisp2DEndReq__Fi(0);
  iVar1 = SceneDecisionMovie__Fi(scene_no);
  GVar2 = GID_STORY_SCENE_PRELOAD;
  if (iVar1 != 0) {
    GVar2 = GID_STORY_MOVIE_PRELOAD;
  }
  return GVar2;
}

static int IngameSceneRoomLoadCheck(int room_no) {
	int ret;
	int i;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 1;
  if (-1 < room_no) {
    bVar1 = true;
    iVar3 = 0;
    do {
      if (!bVar1) {
        return 1;
      }
      iVar2 = MapLoadGetRoomNo4BuffID__Fi(iVar3);
      bVar1 = iVar3 + 1 < 2;
      iVar3 = iVar3 + 1;
    } while (room_no == iVar2);
    iVar3 = 0;
  }
  return iVar3;
}

static int IngameSceneLoadRoom(INGAME_SCENE_CTRL *pIngameScene) {
	int ret;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  switch(pIngameScene->RoomLoadStatus) {
  case 0:
    iVar1 = MapLoadCheckLoadNow__Fv();
    if (iVar1 != 0) break;
    pIngameScene->RoomLoadStatus = 1;
  case 1:
    iVar1 = SceneSubRoomNoGet__Fv();
    iVar1 = IngameSceneRoomLoadCheck__Fi(iVar1);
    if (iVar1 == 0) {
      iVar1 = SceneSubRoomNoGet__Fv();
      MapLoadMoveRoom__Fi(iVar1);
      pIngameScene->RoomLoadStatus = 2;
    }
    else {
      pIngameScene->RoomLoadStatus = 3;
    }
    break;
  case 2:
    iVar1 = MapLoadCheckLoadNow__Fv();
    if (iVar1 != 0) break;
    pIngameScene->RoomLoadStatus = 3;
  case 3:
    iVar1 = SceneRoomNoGet__Fv();
    iVar1 = IngameSceneRoomLoadCheck__Fi(iVar1);
    if (iVar1 == 0) {
      iVar1 = SceneRoomNoGet__Fv();
      MapLoadMoveRoom__Fi(iVar1);
      pIngameScene->RoomLoadStatus = 4;
    }
    else {
      uVar2 = 0;
    }
    break;
  case 4:
    iVar1 = MapLoadCheckLoadNow__Fv();
    uVar2 = (uint)(iVar1 != 0);
  }
  MapLoadMain__Fv();
  if ((uVar2 == 0) && (iVar1 = SceneSubRoomNoGet__Fv(), iVar1 != -1)) {
    iVar1 = SceneRoomNoGet__Fv();
    MapDoorAllPreRender__Fi(iVar1);
  }
  return uVar2;
}

static void IngameSceneDrawRoomInit() {
  int iVar1;
  
  MapObjRegSetSceneLoad__Fi(1);
  iVar1 = SceneRoomNoGet__Fv();
  MapLoadSetNowRoom__Fi(iVar1);
  iVar1 = SceneRoomNoGet__Fv();
  if (-1 < iVar1) {
    iVar1 = SceneRoomNoGet__Fv();
    MapLoadSetDrawFlg3__Fii(iVar1,1);
  }
  iVar1 = SceneSubRoomNoGet__Fv();
  if (-1 < iVar1) {
    iVar1 = SceneSubRoomNoGet__Fv();
    MapLoadSetDrawFlg3__Fii(iVar1,1);
  }
  MapObjRegSetSceneLoad__Fi(0);
  return;
}

void init_Story_Scene() {
	INGAME_SCENE_CTRL *pIngameScene;
	
  ingame_scene.pLoadAdrs = (uint *)mem_utilGetMem__Fi(0x200000);
  StreamAutoSetExclusiveMode(1,3);
  return;
}

void end_Story_Scene() {
	INGAME_SCENE_CTRL *pIngameScene;
	
  if (ingame_scene.pLoadAdrs != (uint *)0x0) {
    mem_utilFreeMem__FPv(ingame_scene.pLoadAdrs);
    ingame_scene.pLoadAdrs = (uint *)0x0;
  }
  StreamAutoSetExclusiveMode(0,3);
  return;
}

GPHASE_ENUM pre_Story_Scene(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_Scene(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

void init_Story_Scene_PreLoad() {
	INGAME_SCENE_CTRL *pIngameScene;
	
  ingame_scene.Status = 1;
  ingame_scene.RoomLoadStatus = 0;
  return;
}

void end_Story_Scene_PreLoad() {
  return;
}

GPHASE_ENUM one_Story_Scene_PreLoad(GPHASE_ENUM dummy) {
	INGAME_SCENE_CTRL *pIngameScene;
	
  int iVar1;
  
  IngameCameraMain__Fv();
  IngameDrawSub__Fv();
  if (ingame_scene.Status != 2) {
    if (2 < ingame_scene.Status) {
      if (ingame_scene.Status != 3) {
        return GPHASE_CONTINUE;
      }
      iVar1 = IngameSceneLoadRoom__FP17INGAME_SCENE_CTRL(&ingame_scene);
      if (iVar1 != 0) {
        return GPHASE_CONTINUE;
      }
      SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_SCENE_MAIN);
      return GPHASE_CONTINUE;
    }
    if (ingame_scene.Status != 1) {
      return GPHASE_CONTINUE;
    }
    InitSceneWork__Fv();
    ingame_scene.Status = 2;
  }
  iVar1 = SceneAllLoad__FiPUi(ingame_scene.SceneNo,ingame_scene.pLoadAdrs);
  if (iVar1 != 0) {
    iVar1 = SceneRoomNoGet__Fv();
    iVar1 = IngameSceneRoomLoadCheck__Fi(iVar1);
    if (iVar1 != 0) {
      iVar1 = SceneSubRoomNoGet__Fv();
      iVar1 = IngameSceneRoomLoadCheck__Fi(iVar1);
      if (iVar1 != 0) {
        SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_SCENE_MAIN);
        return GPHASE_CONTINUE;
      }
    }
    ingame_scene.Status = 3;
  }
  return GPHASE_CONTINUE;
}

void init_Story_Scene_Main() {
  IngameSceneDrawRoomInit__Fv();
  SceneInitializeIngame__Fv();
  SetDebugMenuSwitch__Fi(0);
  IngameLoopSEPause__Fv();
  return;
}

void end_Story_Scene_Main() {
  int iVar1;
  uint uVar2;
  
  SceneEndProc__Fv();
  SetDebugMenuSwitch__Fi(1);
  IngameLoopSERestart__Fv();
  iVar1 = MhCtlGetRoomNo__FiPf((int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  if (iVar1 != -2) {
    iVar1 = GetPlyrAreaNo__Fv();
    uVar2 = MapLoadGetBuffID__Fi(iVar1);
    MapLoadSetDrawFlg2__Fii(uVar2 ^ 1,2);
  }
  return;
}

GPHASE_ENUM one_Story_Scene_Main(GPHASE_ENUM dummy) {
	INGAME_SCENE_CTRL *pIngameScene;
	
  int iVar1;
  GPHASE_ID_ENUM id;
  
  SceneDraw__Fi(ingame_scene.SceneNo);
  iVar1 = SceneIsEnd__Fv();
  if (iVar1 != 0) {
    if (((ingame_scene.SceneNo == 0xf) || (ingame_scene.SceneNo == 0x36)) ||
       (ingame_scene.SceneNo == 9)) {
      SetPlyrFinderQEnd__Fv();
    }
    IngameSceneReq__Fi(-1);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Movie() {
  StreamAutoSetPlayNum(0,3);
  return;
}

void end_Story_Movie() {
  StreamAutoSetPlayNum(2,100);
  return;
}

GPHASE_ENUM pre_Story_Movie(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

GPHASE_ENUM after_Story_Movie(GPHASE_ENUM dummy) {
  return GPHASE_CONTINUE;
}

void init_Story_Movie_PreLoad() {
	int FileNo;
	
  int file_no;
  _HEAP_WRK *wrk;
  uint size;
  
  file_no = SceneEffectDataFileNoGet__Fi(ingame_scene.SceneNo);
  wrk = GetSystemHeapWrkP__Fv();
  size = GetFileSize(file_no);
  pSceneMovieEffect = (uint *)SAFE_MALLOC(wrk,(void *)0x0,size);
  if (pSceneMovieEffect != (uint *)0x0) {
    LoadReq__FiUi(file_no,(uint)pSceneMovieEffect);
  }
  return;
}

void end_Story_Movie_PreLoad() {
  return;
}

GPHASE_ENUM one_Story_Movie_PreLoad(GPHASE_ENUM dummy) {
  int iVar1;
  
  IngameCameraMain__Fv();
  IngameDrawSub__Fv();
  iVar1 = StreamAutoIsAllStop();
  if ((iVar1 != 0) && (iVar1 = IsLoadEndAll__Fv(), iVar1 != 0)) {
    SetNextGPhase__F14GPHASE_ID_ENUM(GID_STORY_MOVIE_MAIN);
  }
  return GPHASE_CONTINUE;
}

void init_Story_Movie_Main() {
  InitMovieWithTitle__Fii(ingame_scene.SceneNo,1);
  SetDebugMenuSwitch__Fi(0);
  IngameLoopSEPause__Fv();
  return;
}

void end_Story_Movie_Main() {
  _HEAP_WRK *wrk;
  
  EndMovieWithTitle__Fv();
  SetDebugMenuSwitch__Fi(1);
  IngameLoopSERestart__Fv();
  if (pSceneMovieEffect != (uint *)0x0) {
    wrk = GetSystemHeapWrkP__Fv();
    heapCtrlFree(wrk,pSceneMovieEffect);
  }
  pSceneMovieEffect = (uint *)0x0;
  SceneEffectEnd__Fv();
  return;
}

GPHASE_ENUM one_Story_Movie_Main(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  iVar1 = PlayMovieWithTitle__Fv();
  if (iVar1 != 0) {
    IngameSceneReq__Fi(-1);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  iVar1 = MovieCountGet__Fv();
  SceneMovieEffectMain__FiPUi(iVar1,pSceneMovieEffect);
  return GPHASE_CONTINUE;
}
