// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_MESSAGE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_MESSAGE_H

typedef struct {
	u_char *str;
	int pos_x;
	int pos_y;
	int type;
	u_int r;
	u_int g;
	u_int b;
	int alpha;
	int pri;
	int x_wide;
	int y_wide;
	int brnch_num;
	int csr;
	int st;
} DISP_STR;

typedef struct {
	u_char *str;
	int pos_x;
	int pos_y;
	int type;
	u_int r;
	u_int g;
	u_int b;
	int alpha;
	int pri;
} STR_DAT;

typedef struct {
	float x;
	float y;
	float w;
	float h;
} MSG_WIN_DAT;

extern u_short ascii_font_tbl[223];
extern u_short ascii_font_tbl2[223];
extern int wbyte_font_tbl0[8];
extern int wbyte_font_tbl1[10];
extern int wbyte_font_tbl2[26];
extern int wbyte_font_tbl3[26];
extern int wbyte_font_tbl4[83];
extern int wbyte_font_tbl5[85];
extern SPRT_DAT mesbox[8];
extern u_char *save_mes_addr;

void InitMessage();
void InitMessageEF();
void SetInteger(float x, float y, int num);
void SetInteger2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, int num);
void SetInteger3(int pri, float x, float y, int type, u_char r, u_char g, u_char b, u_char a, int num);
void SetASCIIString(float x, float y, char *str);
void SetASCIIString2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, char *str);
void MessageChangeDrawEnv(DRAW_ENV_5 *p_change_env);
void SetASCIIString3(int pri, float x, float y, int type, u_char r, u_char g, u_char b, u_char a, char *str);
void SetASCIIString4(int pri, float x, float y, int type, u_char r, u_char g, u_char b, char *str);
void SetWString2(int pri, float x, float y, u_char r, u_char g, u_char b, char *str);
void SetString(float x, float y, char *fmt);
void SetString2(int pri, float x, float y, int type, u_char r, u_char g, u_char b, char *fmt);
void SetFontEnv();
int GetStrLength(u_char *str);
int GetStrWidthMain(u_char *str, int type);
int GetStrWidth(u_char *str);
void CopyStrDToStr(DISP_STR *s, STR_DAT *d);
int SetMessageV2_2(DISP_STR *s);
void MsgDispCtrlInit();
void PrintMsgDef_W(int msg_type, int msg_id);
void SetMsgDefData(DISP_STR *msg_data, int msg_type);
void SetMsgWinDefData(MSG_WIN_DAT *win_data, int msg_type);
int PrintMsg(int msg_type, int msg_id, int x, int y, int col_label, int alpha, int pri);
int PrintMsg(int msg_type, int msg_id, int x, int y, int col_label, int alpha, int pri, int x_wide, int y_wide);
int PrintMsgOneLine(DISP_STR *disp_addr, MSG_EXE_CTRL *pCtrl, Q_WORDDATA **ppbuf);
int PrintMsg(DISP_STR *disp_addr, int one_line_flg);
int PrintMsg_ArrangeOneLine(u_char *pAdrs, int x, int y, int col_label, int alpha, int pri, int x_wide, int y_wide, int arrange);
int PrintMsg_T(int msg_type, int msg_id, int x, int y, int col_label, int alpha, int pri);
int PrintMsg_T(DISP_STR *disp_addr);
int PrintMsg_P(int msg_type, int msg_id, int x, int y, int col_label, int alpha, int pri, int x_wide, int y_wide);
int PrintMsg_W(DISP_STR *disp_addr, MSG_WIN_DAT *win_ctrl);
int PrintMsg_TW(DISP_STR *disp_addr, MSG_WIN_DAT *win_ctrl);
int PrintMsg_Arrange(int msg_type, int msg_id, int x, int y, int col_label, int alpha, int pri, int x_wide, int y_wide, int arrange);
void PrintChoice(DISP_STR *msg, MSG_WIN_DAT *win, int choice_msg, int *choice, int csr);
u_char GetMsgWinData(DISP_STR disp_wrk, MSG_WIN_DAT win, int *win_x, int *win_y);
int GetMsgPageNum(int msg_type, int msg_id);
int GetNowMsgPageNum();
void SetMsgFirstPage();
void SetMsgPage(char page);
void MsgColChange(DISP_STR *disp, u_char col_label);
void DrawSelItemMsg(int type, int no, int x, int y, int alpha, int bWithCsr, int col_id, int pri);
int GetMsgLineLength(u_char *msg_addr, u_char **pp_next_addr);
u_char GetFontSize(u_char bank_label, u_char nfn);
int SetMessageV2(DISP_STR *s);
int SubMessageV3(u_char *s, int pri, int delflg);
int SetMessageV3(u_char *s, int pri);
int SetMessageV3_2(u_char *s, int pri);
void MesPassCheck();
int MesStatusCheck();
void MesSetNextPage();
void MesSetBeforePage();
u_char* GetMsgDataAddr(int msg_type, int msg_id);
void PrintNumber(int data, int x, int y, u_char col_label, u_char alpha, int pri, u_char type);
void PrintNumber_N(int data, int num, int x, int y, u_char col_label, u_char alpha, int pri, u_char type, int zero_flg);
void PrintNumber_One(int data, int x, int y, u_char col_label, u_char alpha, int pri, u_char type);
int GetMsgIDNumMax(int msg_type);
void FontDispSample();
void DebugPrintMsgDef_W(int msg_type, int msg_id, u_char win_flg);
void DebugMsgCtrlInit();
void DebugMsgDataCheck();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH2D_MESSAGE_H
