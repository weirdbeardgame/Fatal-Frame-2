#ifndef GPHASE_H
#define GPHASE_H

typedef enum
{
    GPHASE_CONTINUE = 0,
    GPHASE_END = 1,
    GPHASE_NOFRAME = 2
} GPHASE_ENUM;

typedef enum
{
    GID_SUPER = 0,
    GID_BOOT_INIT = 1,
    GID_BOOT_PADCHECK = 2,
    GID_LANGDATA_CHECK = 3,
    GID_LANGSEL_MAIN = 4,
    GID_AUTOLOAD_MAIN = 5,
    GID_UBI_MODE = 6,
    GID_OUTGAME_MAIN = 7,
    GID_STORY_MAIN = 8,
    GID_GAMEOVER_MENU = 9,
    GID_ENDING_MOVIE = 10,
    GID_GAMERESULT = 11,
    GID_CLEARMENU = 12,
    GID_SOFTRESETMAIN = 13,
    GID_DEBUG_MENU = 14,
    GID_TECMO_MODE = 15,
    GID_PROJECT_MODE = 16,
    GID_TITLE_MODE = 17,
    GID_TITLE_MOVIE_MODE = 18,
    GID_STORY_NOWLOADING = 19,
    GID_STORY_NORMAL = 20,
    GID_STORY_DAMAGE = 21,
    GID_STORY_DOOR_OPEN = 22,
    GID_STORY_DEBUG = 23,
    GID_STORY_DEBUG_CAM = 24,
    GID_STORY_PAUSE = 25,
    GID_STORY_PAUSE_MISSION = 26,
    GID_STORY_MENU = 27,
    GID_STORY_MAP = 28,
    GID_STORY_MISSION_ST = 29,
    GID_STORY_MISSION_RESULT = 30,
    GID_STORY_GAME_OVER_PRE = 31,
    GID_STORY_GAME_OVER = 32,
    GID_STORY_SCENE = 33,
    GID_STORY_MOVIE = 34,
    GID_STORY_EFFECT = 35,
    GID_EVENTMSG_DISP = 36,
    GID_EVENTFILE_DISP = 37,
    GID_STORY_PHOTO = 38,
    GID_STORY_ENE_DEAD = 39,
    GID_STORY_PUZZLE = 40,
    GID_STORY_SAVEPOINT = 41,
    GID_STORY_MOVIE_ROOM_SEL = 42,
    GID_GAMEOVER_MENU_TOP = 43,
    GID_GAMEOVER_MENU_LOAD = 44,
    GID_GAMEOVER_MENU_ALBUM = 45,
    GID_ENDING_NORMAL1 = 46,
    GID_ENDING_NORMAL2 = 47,
    GID_ENDING_HARD = 48,
    GID_GAMERESULT_TOP = 49,
    GID_CLEARMENU_TOP = 50,
    GID_CLEARMENU_SAVE = 51,
    GID_CLEARMENU_ALBUM = 52,
    GID_TITLE_TOP = 53,
    GID_TITLE_MENU = 54,
    GID_TITLE_NEWGAME = 55,
    GID_TITLE_LOADGAME = 56,
    GID_TITLE_SETUP = 57,
    GID_TITLE_ALBUM = 58,
    GID_TITLE_GALLERY = 59,
    GID_TITLE_OPTION = 60,
    GID_TITLE_FRAMERATE_SEL = 61,
    GID_TITLE_CHAPTER_SEL = 62,
    GID_TITLE_MOVE_MOVIE = 63,
    GID_STORY_LOAD_MISSION = 64,
    GID_STORY_LOAD_MISSION_EVENT = 65,
    GID_STORY_LOAD_MISSION_SAVE = 66,
    GID_STORY_GAMEOVER_EFF = 67,
    GID_STORY_GAMEOVER_FADE = 68,
    GID_STORY_GAMEOVER_MOVIE = 69,
    GID_STORY_SCENE_PRELOAD = 70,
    GID_STORY_SCENE_MAIN = 71,
    GID_STORY_MOVIE_PRELOAD = 72,
    GID_STORY_MOVIE_MAIN = 73,
    GID_PUZZLE_INCONF = 74,
    GID_PUZZLE_CROSSFADE = 75,
    GID_PUZZLE_HINA = 76,
    GID_PUZZLE_ROKU = 77,
    GID_PUZZLE_KAZA = 78,
    GID_PUZZLE_KAZA2 = 79,
    GID_PUZZLE_KAI1 = 80,
    GID_PUZZLE_KAI2 = 81,
    GID_SAVEPOINT_FADEIN = 82,
    GID_SAVEPOINT_MAIN = 83,
    GID_SAVEPOINT_FADEOUT = 84,
    GID_TITLE_SETUPMENU = 85,
    GID_TITLE_MISSION = 86,
    GID_SAVEPOINT_TOP = 87,
    GID_SAVEPOINT_SAVE = 88,
    GID_SAVEPOINT_ALBUM = 89,
    GID_MISSION_SEL = 90,
    GID_MISSION_CAM = 91,
    GID_MISSION_ALBUM = 92,
    GID_MISSION_SAVE = 93,
    GPHASE_ID_NONE = -1
} GPHASE_ID_ENUM;

typedef struct
{
    int layer;
    int superID;
    int son_ID;
    int son_num;
} GPHASE_DAT;

typedef struct
{
    GPHASE_ID_ENUM now[6];
    GPHASE_ID_ENUM next[6];
    int ini_flg[6];
} GPHASE_SYS;

const int gphase_sys_num = 6;
const int gphase_num = 94;

extern "C" int printf(char *fmt, ...);

// init functions
void init_Boot_PadCheck();
void init_LangData_Check();
void init_LangSel_Main();
void init_AutoLoad_Main();
void init_UBI_Mode();
void init_OutGame_Main();
void init_Story_Main();
void init_GameOver_Menu();
void init_Ending_Movie();
void init_GameResult();
void init_ClearMenu();
void init_Debug_Menu();
void init_Tecmo_Mode();
void init_Project_Mode();
void init_Title_Mode();
void init_Title_Movie_Mode();
void init_Story_NowLoading();
void init_Story_Normal();
void init_Story_Damage();
void init_Story_Door_Open();
void init_Story_Debug();
void init_Story_Debug_Cam();
void init_Story_Pause();
void init_Story_Pause_Mission();
void init_Story_Menu();
void init_Story_Map();
void init_Story_Mission_St();
void init_Story_Mission_Result();
void init_Story_Game_Over_Pre();
void init_Story_Game_Over();
void init_Story_Scene();
void init_Story_Movie();
void init_Story_Effect();
void init_EventMsg_Disp();
void init_EventFile_Disp();
void init_Story_Photo();
void init_Story_Ene_Dead();
void init_Story_Puzzle();
void init_Story_SavePoint();
void init_Story_Movie_Room_Sel();
void init_GameOver_Menu_Top();
void init_GameOver_Menu_Load();
void init_GameOver_Menu_Album();
void init_Ending_Normal1();
void init_Ending_Normal2();
void init_Ending_Hard();
void init_GameResult_Top();
void init_ClearMenu_Top();
void init_ClearMenu_Save();
void init_ClearMenu_Album();
void init_Title_Top();
void init_Title_Menu();
void init_Title_NewGame();
void init_Title_LoadGame();
void init_Title_Setup();
void init_Title_Album();
void init_Title_Gallery();
void init_Title_Option();
void init_Title_FrameRate_Sel();
void init_Title_Chapter_Sel();
void init_Title_Move_Movie();
void init_Story_Load_Mission();
void init_Story_Load_Mission_Event();
void init_Story_Load_Mission_Save();
void init_Story_GameOver_Eff();
void init_Story_GameOver_Fade();
void init_Story_GameOver_Movie();
void init_Story_Scene_PreLoad();
void init_Story_Scene_Main();
void init_Story_Movie_PreLoad();
void init_Story_Movie_Main();
void init_Puzzle_InConf();
void init_Puzzle_CrossFade();
void init_Puzzle_Hina();
void init_Puzzle_Roku();
void init_Puzzle_Kaza();
void init_Puzzle_Kaza2();
void init_Puzzle_Kai1();
void init_Puzzle_Kai2();
void init_SavePoint_FadeIn();
void init_SavePoint_Main();
void init_SavePoint_FadeOut();
void init_Title_SetupMenu();
void init_Title_Mission();
void init_SavePoint_Top();
void init_SavePoint_Save();
void init_SavePoint_Album();
void init_Mission_Sel();
void init_Mission_Cam();
void init_Mission_Album();
void init_Mission_Save();

    // end functions
void end_Boot_PadCheck();
void end_LangData_Check();
void end_LangSel_Main();
void end_AutoLoad_Main();
void end_UBI_Mode();
void end_OutGame_Main();
void end_Story_Main();
void end_GameOver_Menu();
void end_Ending_Movie();
void end_GameResult();
void end_ClearMenu();
void end_SoftResetMain();
void end_Debug_Menu();
void end_Tecmo_Mode();
void end_Project_Mode();
void end_Title_Mode();
void end_Title_Movie_Mode();
void end_Story_NowLoading();
void end_Story_Normal();
void end_Story_Damage();
void end_Story_Door_Open();
void end_Story_Debug();
void end_Story_Debug_Cam();
void end_Story_Pause();
void end_Story_Pause_Mission();
void end_Story_Menu();
void end_Story_Map();
void end_Story_Mission_St();
void end_Story_Mission_Result();
void end_Story_Game_Over_Pre();
void end_Story_Game_Over();
void end_Story_Scene();
void end_Story_Movie();
void end_Story_Effect();
void end_EventMsg_Disp();
void end_EventFile_Disp();
void end_Story_Photo();
void end_Story_Ene_Dead();
void end_Story_Puzzle();
void end_Story_SavePoint();
void end_Story_Movie_Room_Sel();
void end_GameOver_Menu_Top();
void end_GameOver_Menu_Load();
void end_GameOver_Menu_Album();
void end_Ending_Normal1();
void end_Ending_Normal2();
void end_Ending_Hard();
void end_GameResult_Top();
void end_ClearMenu_Top();
void end_ClearMenu_Save();
void end_ClearMenu_Album();
void end_Title_Top();
void end_Title_Menu();
void end_Title_NewGame();
void end_Title_LoadGame();
void end_Title_Setup();
void end_Title_Album();
void end_Title_Gallery();
void end_Title_Option();
void end_Title_FrameRate_Sel();
void end_Title_Chapter_Sel();
void end_Title_Move_Movie();
void end_Story_Load_Mission();
void end_Story_Load_Mission_Event();
void end_Story_Load_Mission_Save();
void end_Story_GameOver_Eff();
void end_Story_GameOver_Fade();
void end_Story_GameOver_Movie();
void end_Story_Scene_PreLoad();
void end_Story_Scene_Main();
void end_Story_Movie_PreLoad();
void end_Story_Movie_Main();
void end_Puzzle_InConf();
void end_Puzzle_CrossFade();
void end_Puzzle_Hina();
void end_Puzzle_Roku();
void end_Puzzle_Kaza();
void end_Puzzle_Kaza2();
void end_Puzzle_Kai1();
void end_Puzzle_Kai2();
void end_SavePoint_FadeIn();
void end_SavePoint_Main();
void end_SavePoint_FadeOut();
void end_Title_SetupMenu();
void end_Title_Mission();
void end_SavePoint_Top();
void end_SavePoint_Save();
void end_SavePoint_Album();
void end_Mission_Sel();
void end_Mission_Cam();
void end_Mission_Album();
void end_Mission_Save();

    // pre externs
GPHASE_ENUM pre_OutGame_Main(GPHASE_ENUM);
GPHASE_ENUM pre_Story_Main(GPHASE_ENUM);
GPHASE_ENUM pre_GameOver_Menu(GPHASE_ENUM);
GPHASE_ENUM pre_Ending_Movie(GPHASE_ENUM);
GPHASE_ENUM pre_GameResult(GPHASE_ENUM);
GPHASE_ENUM pre_ClearMenu(GPHASE_ENUM);
GPHASE_ENUM pre_Title_Mode(GPHASE_ENUM);
GPHASE_ENUM pre_Story_NowLoading(GPHASE_ENUM);
GPHASE_ENUM pre_Story_Game_Over(GPHASE_ENUM);
GPHASE_ENUM pre_Story_Scene(GPHASE_ENUM);
GPHASE_ENUM pre_Story_Movie(GPHASE_ENUM);
GPHASE_ENUM pre_Story_Puzzle(GPHASE_ENUM);
GPHASE_ENUM pre_Story_SavePoint(GPHASE_ENUM);
GPHASE_ENUM pre_Title_Setup(GPHASE_ENUM);
GPHASE_ENUM pre_SavePoint_Main(GPHASE_ENUM);
GPHASE_ENUM pre_Title_Mission(GPHASE_ENUM);

    // after externs
GPHASE_ENUM one_Boot_PadCheck(GPHASE_ENUM);
GPHASE_ENUM one_LangData_Check(GPHASE_ENUM);
GPHASE_ENUM one_LangSel_Main(GPHASE_ENUM);
GPHASE_ENUM one_AutoLoad_Main(GPHASE_ENUM);
GPHASE_ENUM one_UBI_Mode(GPHASE_ENUM);
GPHASE_ENUM after_OutGame_Main(GPHASE_ENUM);
GPHASE_ENUM after_Story_Main(GPHASE_ENUM);
GPHASE_ENUM after_GameOver_Menu(GPHASE_ENUM);
GPHASE_ENUM after_Ending_Movie(GPHASE_ENUM);
GPHASE_ENUM after_GameResult(GPHASE_ENUM);
GPHASE_ENUM after_ClearMenu(GPHASE_ENUM);
GPHASE_ENUM one_Debug_Menu(GPHASE_ENUM);
GPHASE_ENUM one_Tecmo_Mode(GPHASE_ENUM);
GPHASE_ENUM one_Project_Mode(GPHASE_ENUM);
GPHASE_ENUM after_Title_Mode(GPHASE_ENUM);
GPHASE_ENUM one_Title_Movie_Mode(GPHASE_ENUM);
GPHASE_ENUM after_Story_NowLoading(GPHASE_ENUM);
GPHASE_ENUM one_Story_Normal(GPHASE_ENUM);
GPHASE_ENUM one_Story_Damage(GPHASE_ENUM);
GPHASE_ENUM one_Story_Door_Open(GPHASE_ENUM);
GPHASE_ENUM one_Story_Debug(GPHASE_ENUM);
GPHASE_ENUM one_Story_Debug_Cam(GPHASE_ENUM);
GPHASE_ENUM one_Story_Pause(GPHASE_ENUM);
GPHASE_ENUM one_Story_Pause_Mission(GPHASE_ENUM);
GPHASE_ENUM one_Story_Menu(GPHASE_ENUM);
GPHASE_ENUM one_Story_Map(GPHASE_ENUM);
GPHASE_ENUM one_Story_Mission_St(GPHASE_ENUM);
GPHASE_ENUM one_Story_Mission_Result(GPHASE_ENUM);
GPHASE_ENUM one_Story_Game_Over_Pre(GPHASE_ENUM);
GPHASE_ENUM after_Story_Game_Over(GPHASE_ENUM);
GPHASE_ENUM after_Story_Scene(GPHASE_ENUM);
GPHASE_ENUM after_Story_Movie(GPHASE_ENUM);
GPHASE_ENUM one_Story_Effect(GPHASE_ENUM);
GPHASE_ENUM one_EventMsg_Disp(GPHASE_ENUM);
GPHASE_ENUM one_EventFile_Disp(GPHASE_ENUM);
GPHASE_ENUM one_Story_Photo(GPHASE_ENUM);
GPHASE_ENUM one_Story_Ene_Dead(GPHASE_ENUM);
GPHASE_ENUM after_Story_Puzzle(GPHASE_ENUM);
GPHASE_ENUM after_Story_SavePoint(GPHASE_ENUM);
GPHASE_ENUM one_Story_Movie_Room_Sel(GPHASE_ENUM);
GPHASE_ENUM one_GameOver_Menu_Top(GPHASE_ENUM);
GPHASE_ENUM one_GameOver_Menu_Load(GPHASE_ENUM);
GPHASE_ENUM one_GameOver_Menu_Album(GPHASE_ENUM);
GPHASE_ENUM one_Ending_Normal1(GPHASE_ENUM);
GPHASE_ENUM one_Ending_Normal2(GPHASE_ENUM);
GPHASE_ENUM one_Ending_Hard(GPHASE_ENUM);
GPHASE_ENUM one_GameResult_Top(GPHASE_ENUM);
GPHASE_ENUM one_ClearMenu_Top(GPHASE_ENUM);
GPHASE_ENUM one_ClearMenu_Save(GPHASE_ENUM);
GPHASE_ENUM one_ClearMenu_Album(GPHASE_ENUM);
GPHASE_ENUM one_Title_Top(GPHASE_ENUM);
GPHASE_ENUM one_Title_Menu(GPHASE_ENUM);
GPHASE_ENUM one_Title_NewGame(GPHASE_ENUM);
GPHASE_ENUM one_Title_LoadGame(GPHASE_ENUM);
GPHASE_ENUM after_Title_Setup(GPHASE_ENUM);
GPHASE_ENUM one_Title_Album(GPHASE_ENUM);
GPHASE_ENUM one_Title_Gallery(GPHASE_ENUM);
GPHASE_ENUM one_Title_Option(GPHASE_ENUM);
GPHASE_ENUM one_Title_FrameRate_Sel(GPHASE_ENUM);
GPHASE_ENUM one_Title_Chapter_Sel(GPHASE_ENUM);
GPHASE_ENUM one_Title_Move_Movie(GPHASE_ENUM);
GPHASE_ENUM one_Story_Load_Mission(GPHASE_ENUM);
GPHASE_ENUM one_Story_Load_Mission_Event(GPHASE_ENUM);
GPHASE_ENUM one_Story_Load_Mission_Save(GPHASE_ENUM);
GPHASE_ENUM one_Story_GameOver_Eff(GPHASE_ENUM);
GPHASE_ENUM one_Story_GameOver_Fade(GPHASE_ENUM);
GPHASE_ENUM one_Story_GameOver_Movie(GPHASE_ENUM);
GPHASE_ENUM one_Story_Scene_PreLoad(GPHASE_ENUM);
GPHASE_ENUM one_Story_Scene_Main(GPHASE_ENUM);
GPHASE_ENUM one_Story_Movie_PreLoad(GPHASE_ENUM);
GPHASE_ENUM one_Story_Movie_Main(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_InConf(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_CrossFade(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Hina(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Roku(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Kaza(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Kaza2(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Kai1(GPHASE_ENUM);
GPHASE_ENUM one_Puzzle_Kai2(GPHASE_ENUM);
GPHASE_ENUM one_SavePoint_FadeIn(GPHASE_ENUM);
GPHASE_ENUM after_SavePoint_Main(GPHASE_ENUM);
GPHASE_ENUM one_SavePoint_FadeOut(GPHASE_ENUM);
GPHASE_ENUM one_Title_SetupMenu(GPHASE_ENUM);
GPHASE_ENUM after_Title_Mission(GPHASE_ENUM);
GPHASE_ENUM one_SavePoint_Top(GPHASE_ENUM);
GPHASE_ENUM one_SavePoint_Save(GPHASE_ENUM);
GPHASE_ENUM one_SavePoint_Album(GPHASE_ENUM);
GPHASE_ENUM one_Mission_Sel(GPHASE_ENUM);
GPHASE_ENUM one_Mission_Cam(GPHASE_ENUM);
GPHASE_ENUM one_Mission_Album(GPHASE_ENUM);
GPHASE_ENUM one_Mission_Save(GPHASE_ENUM);

    void InitGPhaseSys();
    void SetInitFlag();
    GPHASE_ENUM DoJobPhase(int layer);
    void GPhaseSysMain();
    void SetNextGPhase(GPHASE_ID_ENUM id);
#endif //GPHASE_H
