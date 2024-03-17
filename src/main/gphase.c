#include "common.h"
#include "gphase.h"
#include "main.h"

const GPHASE_DAT gphase_tbl[94] = {
    {0, GPHASE_ID_NONE, GID_BOOT_INIT, 14},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GID_TECMO_MODE, 4},
    {1, GID_SUPER, GID_STORY_NOWLOADING, 24},
    {1, GID_SUPER, GID_GAMEOVER_MENU_TOP, 3},
    {1, GID_SUPER, GID_ENDING_NORMAL1, 3},
    {1, GID_SUPER, GID_GAMERESULT_TOP, 1},
    {1, GID_SUPER, GID_CLEARMENU_TOP, 3},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {1, GID_SUPER, GPHASE_ID_NONE, 0},
    {2, GID_OUTGAME_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_OUTGAME_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_OUTGAME_MAIN, GID_TITLE_TOP, 11},
    {2, GID_OUTGAME_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GID_STORY_LOAD_MISSION, 3},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GID_STORY_GAMEOVER_EFF, 3},
    {2, GID_STORY_MAIN, GID_STORY_SCENE_PRELOAD, 2},
    {2, GID_STORY_MAIN, GID_STORY_MOVIE_PRELOAD, 2},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_STORY_MAIN, GID_PUZZLE_INCONF, 8},
    {2, GID_STORY_MAIN, GID_SAVEPOINT_FADEIN, 3},
    {2, GID_STORY_MAIN, GPHASE_ID_NONE, 0},
    {2, GID_GAMEOVER_MENU, GPHASE_ID_NONE, 0},
    {2, GID_GAMEOVER_MENU, GPHASE_ID_NONE, 0},
    {2, GID_GAMEOVER_MENU, GPHASE_ID_NONE, 0},
    {2, GID_ENDING_MOVIE, GPHASE_ID_NONE, 0},
    {2, GID_ENDING_MOVIE, GPHASE_ID_NONE, 0},
    {2, GID_ENDING_MOVIE, GPHASE_ID_NONE, 0},
    {2, GID_GAMERESULT, GPHASE_ID_NONE, 0},
    {2, GID_CLEARMENU, GPHASE_ID_NONE, 0},
    {2, GID_CLEARMENU, GPHASE_ID_NONE, 0},
    {2, GID_CLEARMENU, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GID_TITLE_SETUPMENU, 2},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_TITLE_MODE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_NOWLOADING, GPHASE_ID_NONE, 0},
    {3, GID_STORY_NOWLOADING, GPHASE_ID_NONE, 0},
    {3, GID_STORY_NOWLOADING, GPHASE_ID_NONE, 0},
    {3, GID_STORY_GAME_OVER, GPHASE_ID_NONE, 0},
    {3, GID_STORY_GAME_OVER, GPHASE_ID_NONE, 0},
    {3, GID_STORY_GAME_OVER, GPHASE_ID_NONE, 0},
    {3, GID_STORY_SCENE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_SCENE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_MOVIE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_MOVIE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_PUZZLE, GPHASE_ID_NONE, 0},
    {3, GID_STORY_SAVEPOINT, GPHASE_ID_NONE, 0},
    {3, GID_STORY_SAVEPOINT, GID_SAVEPOINT_TOP, 3},
    {3, GID_STORY_SAVEPOINT, GPHASE_ID_NONE, 0},
    {4, GID_TITLE_SETUP, GPHASE_ID_NONE, 0},
    {4, GID_TITLE_SETUP, GID_MISSION_SEL, 4},
    {4, GID_SAVEPOINT_MAIN, GPHASE_ID_NONE, 0},
    {4, GID_SAVEPOINT_MAIN, GPHASE_ID_NONE, 0},
    {4, GID_SAVEPOINT_MAIN, GPHASE_ID_NONE, 0},
    {5, GID_TITLE_MISSION, GPHASE_ID_NONE, 0},
    {5, GID_TITLE_MISSION, GPHASE_ID_NONE, 0},
    {5, GID_TITLE_MISSION, GPHASE_ID_NONE, 0},
    {5, GID_TITLE_MISSION, GPHASE_ID_NONE, 0}};

extern "C" void init_super__Fv();
extern "C" void end_super__Fv();
extern "C" GPHASE_ENUM pre_super__F11GPHASE_ENUM(GPHASE_ENUM super);
extern "C" GPHASE_ENUM after_super__F11GPHASE_ENUM(GPHASE_ENUM result);

void (*ini_func[94])() = {init_super__Fv};
static void (*end_func[94])() = {end_super__Fv};
GPHASE_ENUM(*pre_func[94])
(GPHASE_ENUM) = {pre_super__F11GPHASE_ENUM, 0x0, 0x0, 0x0, 0x0, 0x0};
GPHASE_ENUM(*after_func[94])
(GPHASE_ENUM) = {after_super__F11GPHASE_ENUM};

void InitGPhaseSys()
{
  for (int i = 0; i < 6; i++)
  {
    gphase_sys.now[i] = GPHASE_ID_NONE;
  }

  SetNextGPhase(GID_SUPER);
}

void SetInitFlag()
{
  for (int i = 0; i < 6; i++)
  {
    gphase_sys.ini_flg[i] = gphase_sys.now[i] != gphase_sys.next[i];
  }
}

GPHASE_ENUM DoJobPhase(int layer)
{
  GPHASE_ENUM result;

  //assert(layer < 6 && "layer_num over 6\n");

  if (gphase_sys.ini_flg[layer] != 0
      && ini_func[gphase_sys.now[layer]] != 0x0)
  {
    (*ini_func[gphase_sys.now[layer]])();
  }

  if (pre_func[gphase_sys.now[layer]] != 0x0)
  {
    (*pre_func[gphase_sys.now[layer]])(GPHASE_CONTINUE);
  }

  if (gphase_tbl[gphase_sys.now[layer]].son_num != 0)
  {
    result = DoJobPhase(layer + 1);
  }

  if (after_func[gphase_sys.now[layer]] != 0x0)
  {
    return (*after_func[gphase_sys.now[layer]])(result);
  }

  return GPHASE_CONTINUE;
}

void GPhaseSysMain()
{
  SetInitFlag();

  for (int i = 0; i < 6; i++)
  {
    gphase_sys.now[i] = gphase_sys.next[i];
  }

  DoJobPhase(GID_SUPER);

  for (int i = 0; i < 6; i++)
  {
    if (gphase_sys.now[i] != GPHASE_ID_NONE
        && gphase_sys.now[i] != gphase_sys.next[i])
    {
      (*end_func[gphase_sys.now[i]])();
    }
  }
}

void SetNextGPhase(GPHASE_ID_ENUM id)
{
  const GPHASE_DAT *gp = &gphase_tbl[id];
  int layer = gp->layer;
  gphase_sys.next[layer] = id;

  for (int i = layer; i < 6; i++)
  {
    if (gp->son_num == 0)
    {
      for (; i < 5; i++)
      {
        gphase_sys.next[i + 1] = GPHASE_ID_NONE;
      }

      break;
    }

    gphase_sys.next[i + 1] = (GPHASE_ID_ENUM) gp->son_ID;
    gp = &gphase_tbl[gp->son_ID];
  }

  if (0 >= layer || gphase_tbl[id].superID < 0)
  {
    return;
  }

  gphase_sys.now[layer + 5] = (GPHASE_ID_ENUM) gphase_tbl[id].superID;

  layer -= 1;

  for (int i = gphase_tbl[id].superID; i > 0 && layer > 0; layer--)
  {
    i = gphase_tbl[i].superID;
    gphase_sys.now[layer + 5] = (GPHASE_ID_ENUM) i;
  }
}
