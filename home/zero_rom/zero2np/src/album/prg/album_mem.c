// STATUS: NOT STARTED

#include "album_mem.h"

typedef struct {
	u_int mem_size;
	char step;
	void *mem_addr;
} ALBUM_MEM_CTRL;

static ALBUM_MEM_CTRL album_mem_ctrl;

void AlbumMemInit(u_int get_size, char *file, int line) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 73,
		/* [9] = */ 110,
		/* [10] = */ 105,
		/* [11] = */ 116,
		/* [12] = */ 0
	};
	
  printf("Call %s File[%s] Line[%d]\n");
  if ("21_movie.slt" < get_size) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s Size Over");
  }
  album_mem_ctrl.mem_size = get_size;
  album_mem_ctrl.mem_addr = (void *)0x0;
  album_mem_ctrl.step = '\0';
  return;
}

int AlbumMemMain() {
	int iNumTag;
	int res;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (album_mem_ctrl.step == '\0') {
    iVar1 = dmaVif1Resize__Fi((uint)("scene0121_movie.slt" + (8 - album_mem_ctrl.mem_size)) >> 5);
    if (iVar1 != 0) {
      album_mem_ctrl.step = '\x01';
      album_mem_ctrl.mem_addr = (void *)(0x1e79b00 - album_mem_ctrl.mem_size);
    }
  }
  else if (album_mem_ctrl.step == '\x01') {
    iVar1 = dmaVif1IsResizeOK__Fv();
    if (iVar1 != 0) {
      memset(album_mem_ctrl.mem_addr,0,(long)(int)album_mem_ctrl.mem_size);
      album_mem_ctrl.step = '\x02';
    }
  }
  else {
    iVar2 = 1;
  }
  return iVar2;
}

void* GetAlbumMemAddr() {
  return album_mem_ctrl.mem_addr;
}

void AlbumMemFree(char *file, int line) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 70,
		/* [9] = */ 114,
		/* [10] = */ 101,
		/* [11] = */ 101,
		/* [12] = */ 0
	};
	
  printf("Call %s File[%s] Line[%d]\n");
  album_mem_ctrl.mem_addr = (void *)0x0;
  album_mem_ctrl.step = '\0';
  album_mem_ctrl.mem_size = 0;
  return;
}
