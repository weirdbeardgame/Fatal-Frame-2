#include "common.h"
#include "gphase.h"

// TODO: find a way to avoid the attribute
GPHASE_SYS gphase_sys __attribute__((section(".bss")));

void (*ini_func[94])() = {
    init_super,
    init_Boot_Init,
    init_Boot_PadCheck,
    init_LangData_Check,
    init_LangSel_Main,
    init_AutoLoad_Main,
    init_UBI_Mode,
    init_OutGame_Main,
    init_Story_Main,
    init_GameOver_Menu,
    init_Ending_Movie,
    init_GameResult,
    init_ClearMenu,
    init_SoftResetMain,
    init_Debug_Menu,
    init_Tecmo_Mode,
    init_Project_Mode,
    init_Title_Mode,
    init_Title_Movie_Mode,
    init_Story_NowLoading,
    init_Story_Normal,
    init_Story_Damage,
    init_Story_Door_Open,
    init_Story_Debug,
    init_Story_Debug_Cam,
    init_Story_Pause,
    init_Story_Pause_Mission,
    init_Story_Menu,
    init_Story_Map,
    init_Story_Mission_St,
    init_Story_Mission_Result,
    init_Story_Game_Over_Pre,
    init_Story_Game_Over,
    init_Story_Scene,
    init_Story_Movie,
    init_Story_Effect,
    init_EventMsg_Disp,
    init_EventFile_Disp,
    init_Story_Photo,
    init_Story_Ene_Dead,
    init_Story_Puzzle,
    init_Story_SavePoint,
    init_Story_Movie_Room_Sel,
    init_GameOver_Menu_Top,
    init_GameOver_Menu_Load,
    init_GameOver_Menu_Album,
    init_Ending_Normal1,
    init_Ending_Normal2,
    init_Ending_Hard,
    init_GameResult_Top,
    init_ClearMenu_Top,
    init_ClearMenu_Save,
    init_ClearMenu_Album,
    init_Title_Top,
    init_Title_Menu,
    init_Title_NewGame,
    init_Title_LoadGame,
    init_Title_Setup,
    init_Title_Album,
    init_Title_Gallery,
    init_Title_Option,
    init_Title_FrameRate_Sel,
    init_Title_Chapter_Sel,
    init_Title_Move_Movie,
    init_Story_Load_Mission,
    init_Story_Load_Mission_Event,
    init_Story_Load_Mission_Save,
    init_Story_GameOver_Eff,
    init_Story_GameOver_Fade,
    init_Story_GameOver_Movie,
    init_Story_Scene_PreLoad,
    init_Story_Scene_Main,
    init_Story_Movie_PreLoad,
    init_Story_Movie_Main,
    init_Puzzle_InConf,
    init_Puzzle_CrossFade,
    init_Puzzle_Hina,
    init_Puzzle_Roku,
    init_Puzzle_Kaza,
    init_Puzzle_Kaza2,
    init_Puzzle_Kai1,
    init_Puzzle_Kai2,
    init_SavePoint_FadeIn,
    init_SavePoint_Main,
    init_SavePoint_FadeOut,
    init_Title_SetupMenu,
    init_Title_Mission,
    init_SavePoint_Top,
    init_SavePoint_Save,
    init_SavePoint_Album,
    init_Mission_Sel,
    init_Mission_Cam,
    init_Mission_Album,
    init_Mission_Save,
};
void (*end_func[94])() = {
    end_super,
    end_Boot_Init,
    end_Boot_PadCheck,
    end_LangData_Check,
    end_LangSel_Main,
    end_AutoLoad_Main,
    end_UBI_Mode,
    end_OutGame_Main,
    end_Story_Main,
    end_GameOver_Menu,
    end_Ending_Movie,
    end_GameResult,
    end_ClearMenu,
    end_SoftResetMain,
    end_Debug_Menu,
    end_Tecmo_Mode,
    end_Project_Mode,
    end_Title_Mode,
    end_Title_Movie_Mode,
    end_Story_NowLoading,
    end_Story_Normal,
    end_Story_Damage,
    end_Story_Door_Open,
    end_Story_Debug,
    end_Story_Debug_Cam,
    end_Story_Pause,
    end_Story_Pause_Mission,
    end_Story_Menu,
    end_Story_Map,
    end_Story_Mission_St,
    end_Story_Mission_Result,
    end_Story_Game_Over_Pre,
    end_Story_Game_Over,
    end_Story_Scene,
    end_Story_Movie,
    end_Story_Effect,
    end_EventMsg_Disp,
    end_EventFile_Disp,
    end_Story_Photo,
    end_Story_Ene_Dead,
    end_Story_Puzzle,
    end_Story_SavePoint,
    end_Story_Movie_Room_Sel,
    end_GameOver_Menu_Top,
    end_GameOver_Menu_Load,
    end_GameOver_Menu_Album,
    end_Ending_Normal1,
    end_Ending_Normal2,
    end_Ending_Hard,
    end_GameResult_Top,
    end_ClearMenu_Top,
    end_ClearMenu_Save,
    end_ClearMenu_Album,
    end_Title_Top,
    end_Title_Menu,
    end_Title_NewGame,
    end_Title_LoadGame,
    end_Title_Setup,
    end_Title_Album,
    end_Title_Gallery,
    end_Title_Option,
    end_Title_FrameRate_Sel,
    end_Title_Chapter_Sel,
    end_Title_Move_Movie,
    end_Story_Load_Mission,
    end_Story_Load_Mission_Event,
    end_Story_Load_Mission_Save,
    end_Story_GameOver_Eff,
    end_Story_GameOver_Fade,
    end_Story_GameOver_Movie,
    end_Story_Scene_PreLoad,
    end_Story_Scene_Main,
    end_Story_Movie_PreLoad,
    end_Story_Movie_Main,
    end_Puzzle_InConf,
    end_Puzzle_CrossFade,
    end_Puzzle_Hina,
    end_Puzzle_Roku,
    end_Puzzle_Kaza,
    end_Puzzle_Kaza2,
    end_Puzzle_Kai1,
    end_Puzzle_Kai2,
    end_SavePoint_FadeIn,
    end_SavePoint_Main,
    end_SavePoint_FadeOut,
    end_Title_SetupMenu,
    end_Title_Mission,
    end_SavePoint_Top,
    end_SavePoint_Save,
    end_SavePoint_Album,
    end_Mission_Sel,
    end_Mission_Cam,
    end_Mission_Album,
    end_Mission_Save
};
GPHASE_ENUM(*pre_func[94])
(GPHASE_ENUM) = {
    pre_super,
    0,
    0,
    0,
    0,
    0,
    0,
    pre_OutGame_Main,
    pre_Story_Main,
    pre_GameOver_Menu,
    pre_Ending_Movie,
    pre_GameResult,
    pre_ClearMenu,
    0,
    0,
    0,
    0,
    pre_Title_Mode,
    0,
    pre_Story_NowLoading,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    pre_Story_Game_Over,
    pre_Story_Scene,
    pre_Story_Movie,
    0,
    0,
    0,
    0,
    0,
    pre_Story_Puzzle,
    pre_Story_SavePoint,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    pre_Title_Setup,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    pre_SavePoint_Main,
    0,
    0,
    pre_Title_Mission,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};
GPHASE_ENUM(*after_func[94])
(GPHASE_ENUM) = {
    after_super,
    one_Boot_Init,
    one_Boot_PadCheck,
    one_LangData_Check,
    one_LangSel_Main,
    one_AutoLoad_Main,
    one_UBI_Mode,
    after_OutGame_Main,
    after_Story_Main,
    after_GameOver_Menu,
    after_Ending_Movie,
    after_GameResult,
    after_ClearMenu,
    one_SoftResetMain,
    one_Debug_Menu,
    one_Tecmo_Mode,
    one_Project_Mode,
    after_Title_Mode,
    one_Title_Movie_Mode,
    after_Story_NowLoading,
    one_Story_Normal,
    one_Story_Damage,
    one_Story_Door_Open,
    one_Story_Debug,
    one_Story_Debug_Cam,
    one_Story_Pause,
    one_Story_Pause_Mission,
    one_Story_Menu,
    one_Story_Map,
    one_Story_Mission_St,
    one_Story_Mission_Result,
    one_Story_Game_Over_Pre,
    after_Story_Game_Over,
    after_Story_Scene,
    after_Story_Movie,
    one_Story_Effect,
    one_EventMsg_Disp,
    one_EventFile_Disp,
    one_Story_Photo,
    one_Story_Ene_Dead,
    after_Story_Puzzle,
    after_Story_SavePoint,
    one_Story_Movie_Room_Sel,
    one_GameOver_Menu_Top,
    one_GameOver_Menu_Load,
    one_GameOver_Menu_Album,
    one_Ending_Normal1,
    one_Ending_Normal2,
    one_Ending_Hard,
    one_GameResult_Top,
    one_ClearMenu_Top,
    one_ClearMenu_Save,
    one_ClearMenu_Album,
    one_Title_Top,
    one_Title_Menu,
    one_Title_NewGame,
    one_Title_LoadGame,
    after_Title_Setup,
    one_Title_Album,
    one_Title_Gallery,
    one_Title_Option,
    one_Title_FrameRate_Sel,
    one_Title_Chapter_Sel,
    one_Title_Move_Movie,
    one_Story_Load_Mission,
    one_Story_Load_Mission_Event,
    one_Story_Load_Mission_Save,
    one_Story_GameOver_Eff,
    one_Story_GameOver_Fade,
    one_Story_GameOver_Movie,
    one_Story_Scene_PreLoad,
    one_Story_Scene_Main,
    one_Story_Movie_PreLoad,
    one_Story_Movie_Main,
    one_Puzzle_InConf,
    one_Puzzle_CrossFade,
    one_Puzzle_Hina,
    one_Puzzle_Roku,
    one_Puzzle_Kaza,
    one_Puzzle_Kaza2,
    one_Puzzle_Kai1,
    one_Puzzle_Kai2,
    one_SavePoint_FadeIn,
    after_SavePoint_Main,
    one_SavePoint_FadeOut,
    one_Title_SetupMenu,
    after_Title_Mission,
    one_SavePoint_Top,
    one_SavePoint_Save,
    one_SavePoint_Album,
    one_Mission_Sel,
    one_Mission_Cam,
    one_Mission_Album,
    one_Mission_Save,
};

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
    {5, GID_TITLE_MISSION, GPHASE_ID_NONE, 0}
};

// TODO: match graphics/gra3d.c
int pad[2] __attribute__((section(".data")));

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
