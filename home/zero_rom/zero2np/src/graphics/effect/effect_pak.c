// STATUS: NOT STARTED

#include "effect_pak.h"

static int ndpkt = 0;
static int ndpri = 0;
static u_int draw_pri[4096][2];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a7188;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003efea8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003efeb0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void Reserve2DPacket(u_int pri) {
  return;
}

void Reserve2DPacket_Load() {
  return;
}

void SortEffectPacket() {
	int i;
	int j;
	int n;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = ndpri;
  if ((ndpri < 0x1000) && (ndpkt < 0x2000)) {
    iVar7 = 0;
    while (iVar4 = iVar7, iVar7 = iVar4 + 1, iVar4 < iVar3 + -1) {
      if (iVar7 < iVar3) {
        puVar5 = draw_pri[iVar7] + 1;
        iVar6 = iVar3 - iVar7;
        do {
          uVar1 = (*(uint (*) [2])(puVar5 + -1))[0];
          uVar2 = draw_pri[iVar4][0];
          iVar6 = iVar6 + -1;
          if (uVar2 < uVar1) {
            (*(uint (*) [2])(puVar5 + -1))[0] = uVar2;
            draw_pri[iVar4][0] = uVar1;
            uVar1 = *puVar5;
            *puVar5 = draw_pri[iVar4][1];
            draw_pri[iVar4][1] = uVar1;
          }
          puVar5 = puVar5 + 2;
        } while (iVar6 != 0);
      }
    }
  }
  else {
    printf("2D-PacketBuffer is Over!! [%d,%d]\n");
    ndpri = 0;
    ndpkt = 0;
  }
  return;
}
