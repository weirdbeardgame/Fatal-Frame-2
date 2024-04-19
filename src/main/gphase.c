#include "common.h"
#include "gphase.h"

GPHASE_SYS gphase_sys;

GPHASE_DAT gphase_tbl[94] = {
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

void end_super();
GPHASE_ENUM after_super(GPHASE_ENUM result);
void init_super();
GPHASE_ENUM pre_super(GPHASE_ENUM super);

void (*ini_func[94])() = {init_super};
static void (*end_func[94])() = {end_super};
GPHASE_ENUM(*pre_func[94])
(GPHASE_ENUM) = {pre_super, 0x0, 0x0, 0x0, 0x0, 0x0};
GPHASE_ENUM(*after_func[94])
(GPHASE_ENUM) = {after_super};

void SetNextGPhase(/* a1 5 */ GPHASE_ID_ENUM id)
{
    int layer;
    int i;
    GPHASE_DAT *gp;
    GPHASE_DAT *gpbak;

    gpbak = &gphase_tbl[id];
    gp = &gphase_tbl[id];
    layer = gp->layer;

    gphase_sys.next[layer] = id;

    for (i = layer; i < gphase_sys_num; i++)
    {
        if (gp->son_num != 0)
        {
            id = (GPHASE_ID_ENUM)gp->son_ID;
            gphase_sys.next[i + 1] = id;
            gp = &gphase_tbl[id];
        }
        else
        {
            for (; i < 5; i++)
            {
                gphase_sys.next[i + 1] = GPHASE_ID_NONE;
            }
            break;
        }
    }

    gp = gpbak;
    for (i = layer; i > 0; i--)
    {
        if (gp->superID >= 0)
        {
            id = (GPHASE_ID_ENUM)gp->superID;
            gphase_sys.next[i - 1] = id;
            gp = &gphase_tbl[id];
        }
        else
        {
            break;
        }
    }
}

void InitGPhaseSys(void)
{
    for (int i = 0; i < gphase_sys_num; i++)
    {
        gphase_sys.now[i] = GPHASE_ID_NONE;
    }

    SetNextGPhase(GID_SUPER);
}

void SetInitFlag(void)
{
    for (int i = 0; i < 6; i++)
    {
        if (gphase_sys.next[i] != gphase_sys.now[i])
        {
            gphase_sys.ini_flg[i] = 1;
        }
        else
        {
            gphase_sys.ini_flg[i] = 0;
        }
    }
}

GPHASE_ENUM DoJobPhase(int layer)
{
    GPHASE_ENUM result = GPHASE_CONTINUE;

    if (layer >= 6)
    {
        printf("layer_num over %d\n", 6);
        while (true)
            ;
    }

    if (gphase_sys.ini_flg[layer] != 0)
    {
        ini_func[gphase_sys.now[layer]]();
    }

    if (pre_func[gphase_sys.now[layer]] != 0x0)
    {
        pre_func[gphase_sys.now[layer]]((GPHASE_ENUM)0);
    }

    if (gphase_tbl[gphase_sys.now[layer]].son_num != 0)
    {
        result = DoJobPhase(layer + 1);
    }

    return after_func[gphase_sys.now[layer]](result);
}

void GPhaseSysMain(void)
{
    int i = 0;

    SetInitFlag();

    do
    {
        gphase_sys.now[i] = gphase_sys.next[i];
        i++;
    } while (i < 6);

    DoJobPhase(0);
    i = 5;

    do
    {
        if (
            (gphase_sys.now[i] != GPHASE_ID_NONE) &&
            (gphase_sys.now[i] != gphase_sys.next[i]))
        {
            (end_func[gphase_sys.now[i]])();
        }

        i--;
    } while (-1 < i);
}
