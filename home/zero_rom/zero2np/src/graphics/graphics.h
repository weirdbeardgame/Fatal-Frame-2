// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPHICS_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPHICS_H

typedef unsigned char u_char;

typedef struct {
	long unsigned int TBP0 : 14;
	long unsigned int TBW : 6;
	long unsigned int PSM : 6;
	long unsigned int TW : 4;
	long unsigned int TH : 4;
	long unsigned int TCC : 1;
	long unsigned int TFX : 2;
	long unsigned int CBP : 14;
	long unsigned int CPSM : 4;
	long unsigned int CSM : 1;
	long unsigned int CSA : 5;
	long unsigned int CLD : 3;
} sceGsTex0;


void DrawHitCircle(float *mpos, float rot_y, int adj_y, u_char col, u_char alp, float rad);
void SetLine2DPacket(float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a);
void SetLine2D(float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a);
void DrawHitCircle2D(float *mpos, float rot_y, int adj_y, u_char col, u_char alp, float rad);
void Draw3DSquare(float *mpos1, float *mpos2, float *mpos3, float *mpos4, u_char r, u_char g, u_char b, u_char a);
void DrawCrossLineA(float *bpos, u_char alp);
void DrawCrossLine(float *bpos);
void DrawLine(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2);
void DrawLineTestOff(float *mpos1, u_char r1, u_char g1, u_char b1, u_char a1, float *mpos2, u_char r2, u_char g2, int b2, int a2);
void DrawCrossLineLast(float *bpos);
void DrawCrossLineLastReal();
void SetSquareS(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a);
void SetSquare(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a);
void SetSquare2s(int pri, float x1, float y1, float x4, float y4, u_char r1, u_char g1, u_char b1, u_char r2, u_char g2, u_char b2, u_char a);
void SetSquareZ(int pri, float x1, float y1, float x4, float y4, int z);
void SetSquareSN(int pri, float x1, float y1, float x4, float y4, u_char r, u_char g, u_char b, u_char a);
void SetSquareN(int pri, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, u_char r, u_char g, u_char b, u_char a);
void SetTriangle(int pri, float x1, float y1, float x2, float y2, float x3, float y3, u_char r, u_char g, u_char b, u_char a);
void SetTriangleZ(int pri, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, u_char r, u_char g, u_char b, u_char a);
void SetLine(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a);
void SetLine2(int pri, float x1, float y1, float x2, float y2, u_char r, u_char g, u_char b, u_char a);
void SetLine2PC(int pri, float x1, float y1, u_char r1, u_char g1, u_char b1, float x2, float y2, u_char r2, u_char g2, u_char b2, u_char a);
void DrawPoint(float *mpos, int no);
void DrawPoint2(float *mpos, u_char r, u_char g, u_char b, u_char a);
void DrawSphere(float f, float x, float y, float z, u_char r, u_char g, u_char b, u_char a, float *vScale);
void DrawTube(float *p1, float *p2, float rad, u_char r, u_char g, u_char b, u_char a);
void CaptureScreen(u_int addr);
void DrawScreen(u_int pri, u_int addr, u_char r, u_char g, u_char b, u_char a);
void MakePacket3D(float *pa3DPos[4], int iNum, int iR, int iG, int iB, int iA, float fUX, float fUY, float fUW, float fUH, sceGsTex0 Tex0, int iZOffset);
void MakeBillBoardPacket(float *Pos, float fWidth, float fHeight, int iR, int iG, int iB, int iA, float fUX, float fUY, float fUW, float fUH, sceGsTex0 Tex0, int iZOffset);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPHICS_H
