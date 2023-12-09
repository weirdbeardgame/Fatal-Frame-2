// STATUS: NOT STARTED

#include "compress.h"

typedef struct {
	char row;
	char col;
} DCT_ROOT;

typedef struct {
	char *file;
	unsigned char mask;
	int rack;
} BIT_FILE;

DCT_ROOT ZigZag[64] = {
	/* [0] = */ {
		/* .row = */ 0,
		/* .col = */ 0
	},
	/* [1] = */ {
		/* .row = */ 0,
		/* .col = */ 1
	},
	/* [2] = */ {
		/* .row = */ 1,
		/* .col = */ 0
	},
	/* [3] = */ {
		/* .row = */ 2,
		/* .col = */ 0
	},
	/* [4] = */ {
		/* .row = */ 1,
		/* .col = */ 1
	},
	/* [5] = */ {
		/* .row = */ 0,
		/* .col = */ 2
	},
	/* [6] = */ {
		/* .row = */ 0,
		/* .col = */ 3
	},
	/* [7] = */ {
		/* .row = */ 1,
		/* .col = */ 2
	},
	/* [8] = */ {
		/* .row = */ 2,
		/* .col = */ 1
	},
	/* [9] = */ {
		/* .row = */ 3,
		/* .col = */ 0
	},
	/* [10] = */ {
		/* .row = */ 4,
		/* .col = */ 0
	},
	/* [11] = */ {
		/* .row = */ 3,
		/* .col = */ 1
	},
	/* [12] = */ {
		/* .row = */ 2,
		/* .col = */ 2
	},
	/* [13] = */ {
		/* .row = */ 1,
		/* .col = */ 3
	},
	/* [14] = */ {
		/* .row = */ 0,
		/* .col = */ 4
	},
	/* [15] = */ {
		/* .row = */ 0,
		/* .col = */ 5
	},
	/* [16] = */ {
		/* .row = */ 1,
		/* .col = */ 4
	},
	/* [17] = */ {
		/* .row = */ 2,
		/* .col = */ 3
	},
	/* [18] = */ {
		/* .row = */ 3,
		/* .col = */ 2
	},
	/* [19] = */ {
		/* .row = */ 4,
		/* .col = */ 1
	},
	/* [20] = */ {
		/* .row = */ 5,
		/* .col = */ 0
	},
	/* [21] = */ {
		/* .row = */ 6,
		/* .col = */ 0
	},
	/* [22] = */ {
		/* .row = */ 5,
		/* .col = */ 1
	},
	/* [23] = */ {
		/* .row = */ 4,
		/* .col = */ 2
	},
	/* [24] = */ {
		/* .row = */ 3,
		/* .col = */ 3
	},
	/* [25] = */ {
		/* .row = */ 2,
		/* .col = */ 4
	},
	/* [26] = */ {
		/* .row = */ 1,
		/* .col = */ 5
	},
	/* [27] = */ {
		/* .row = */ 0,
		/* .col = */ 6
	},
	/* [28] = */ {
		/* .row = */ 0,
		/* .col = */ 7
	},
	/* [29] = */ {
		/* .row = */ 1,
		/* .col = */ 6
	},
	/* [30] = */ {
		/* .row = */ 2,
		/* .col = */ 5
	},
	/* [31] = */ {
		/* .row = */ 3,
		/* .col = */ 4
	},
	/* [32] = */ {
		/* .row = */ 4,
		/* .col = */ 3
	},
	/* [33] = */ {
		/* .row = */ 5,
		/* .col = */ 2
	},
	/* [34] = */ {
		/* .row = */ 6,
		/* .col = */ 1
	},
	/* [35] = */ {
		/* .row = */ 7,
		/* .col = */ 0
	},
	/* [36] = */ {
		/* .row = */ 7,
		/* .col = */ 1
	},
	/* [37] = */ {
		/* .row = */ 6,
		/* .col = */ 2
	},
	/* [38] = */ {
		/* .row = */ 5,
		/* .col = */ 3
	},
	/* [39] = */ {
		/* .row = */ 4,
		/* .col = */ 4
	},
	/* [40] = */ {
		/* .row = */ 3,
		/* .col = */ 5
	},
	/* [41] = */ {
		/* .row = */ 2,
		/* .col = */ 6
	},
	/* [42] = */ {
		/* .row = */ 1,
		/* .col = */ 7
	},
	/* [43] = */ {
		/* .row = */ 2,
		/* .col = */ 7
	},
	/* [44] = */ {
		/* .row = */ 3,
		/* .col = */ 6
	},
	/* [45] = */ {
		/* .row = */ 4,
		/* .col = */ 5
	},
	/* [46] = */ {
		/* .row = */ 5,
		/* .col = */ 4
	},
	/* [47] = */ {
		/* .row = */ 6,
		/* .col = */ 3
	},
	/* [48] = */ {
		/* .row = */ 7,
		/* .col = */ 2
	},
	/* [49] = */ {
		/* .row = */ 7,
		/* .col = */ 3
	},
	/* [50] = */ {
		/* .row = */ 6,
		/* .col = */ 4
	},
	/* [51] = */ {
		/* .row = */ 5,
		/* .col = */ 5
	},
	/* [52] = */ {
		/* .row = */ 4,
		/* .col = */ 6
	},
	/* [53] = */ {
		/* .row = */ 3,
		/* .col = */ 7
	},
	/* [54] = */ {
		/* .row = */ 4,
		/* .col = */ 7
	},
	/* [55] = */ {
		/* .row = */ 5,
		/* .col = */ 6
	},
	/* [56] = */ {
		/* .row = */ 6,
		/* .col = */ 5
	},
	/* [57] = */ {
		/* .row = */ 7,
		/* .col = */ 4
	},
	/* [58] = */ {
		/* .row = */ 7,
		/* .col = */ 5
	},
	/* [59] = */ {
		/* .row = */ 6,
		/* .col = */ 6
	},
	/* [60] = */ {
		/* .row = */ 5,
		/* .col = */ 7
	},
	/* [61] = */ {
		/* .row = */ 6,
		/* .col = */ 7
	},
	/* [62] = */ {
		/* .row = */ 7,
		/* .col = */ 6
	},
	/* [63] = */ {
		/* .row = */ 7,
		/* .col = */ 7
	}
};

PHOTO_EXPAND photo_expand = {
	/* .sta = */ 0,
	/* .cnt = */ 0,
	/* .no = */ 0
};

static unsigned char pixelstrip[8][384];
static float C[8][8];
static float Ct[8][8];
static int InputRunLength;
static int OutputRunLength;
static int quantum[8][8];
static char repair_flg;

float CompressFile(unsigned int *input, char *output, unsigned int max_size, char quality) {
	int row;
	int col;
	int i;
	int j;
	unsigned char *input_array[8];
	int output_array[8][8];
	BIT_FILE bit_file;
	unsigned int size;
	unsigned int *addr;
	unsigned int tmp;
	
  uint *input_00;
  uchar *puVar1;
  uchar **ppuVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  uchar *input_array [8];
  int output_array [8] [8];
  BIT_FILE bit_file;
  
  piVar7 = (int *)(output + 0x10);
  iVar8 = 0;
  printf("START COMPRESS\n");
  *(undefined4 *)(output + 4) = 1;
  *(int *)(output + 0x1c) = (int)quality;
  bit_file.file = output + 0x20;
  bit_file.mask = 0x80;
  bit_file.rack = 0;
  InitCompress__Fc(quality);
  do {
    iVar6 = 0;
    OutputRunLength = 0;
    InputRunLength = 0;
    *piVar7 = (int)bit_file.file - (int)output;
    bit_file.mask = 0x80;
    bit_file.rack = 0;
    input_00 = input;
    do {
      input_00 = ReadPixelStrip__FPUiPA383_UcUc(input_00,pixelstrip,(uchar)iVar8);
      iVar4 = 0;
      do {
        iVar3 = 7;
        ppuVar2 = input_array + 7;
        puVar1 = pixelstrip[7] + iVar4;
        do {
          iVar3 = iVar3 + -1;
          *ppuVar2 = puVar1;
          ppuVar2 = ppuVar2 + -1;
          puVar1 = puVar1 + -0x180;
        } while (-1 < iVar3);
        ForwardDCT__FPPUcPA7_i(input_array,output_array);
        iVar4 = iVar4 + 8;
        WriteDCTData__FP8BIT_FILEPA7_i(&bit_file,output_array);
      } while (iVar4 < 0x180);
      iVar6 = iVar6 + 8;
    } while (iVar6 < 0x80);
    OutputCode__FP8BIT_FILEi(&bit_file,1);
    bit_file.file = bit_file.file + 1;
    if (((uint)bit_file.file & 0xf) != 0) {
      bit_file.file = bit_file.file + (0x10 - ((uint)bit_file.file & 0xf));
    }
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 1;
  } while (iVar8 < 3);
  uVar5 = (int)bit_file.file - (int)output;
  *(uint *)output = uVar5;
  printf("========= PHOTO INFORMATION =========\n");
  printf("quality    : %d\n");
  printf("size : %d\n");
  if (max_size != 0) {
    printf("Out/In : %f\n");
  }
  if ((int)uVar5 < 0) {
    fVar10 = (float)(uVar5 & 1 | uVar5 >> 1);
    fVar10 = fVar10 + fVar10;
  }
  else {
    fVar10 = (float)uVar5;
  }
  if ((int)max_size < 0) {
    fVar9 = (float)(max_size & 1 | max_size >> 1);
    fVar9 = fVar9 + fVar9;
  }
  else {
    fVar9 = (float)max_size;
  }
  return fVar10 / fVar9;
}

char CheckPhotoExpandEnd() {
  return photo_expand.sta == '\x02';
}

unsigned char GetPhotoExpand() {
	unsigned char ret;
	
  uchar uVar1;
  
  uVar1 = photo_expand.sta;
  if (photo_expand.sta == '\0') {
    photo_expand.sta = '\x01';
  }
  return uVar1;
}

void InitPhotoExpand(unsigned char no) {
  photo_expand.no = no;
  photo_expand.sta = '\0';
  photo_expand.cnt = '\0';
  return;
}

void ReqPhotoExpand(unsigned char no) {
  InitPhotoExpand__FUc(no);
  return;
}

unsigned char GetPhotoExpandNo() {
  return photo_expand.no;
}

void ExpandFile(char *input, unsigned int *output2) {
	int row;
	int col;
	int i;
	int j;
	int input_array[8][8];
	unsigned char *output_array[8];
	unsigned int quality;
	static unsigned int *out_header;
	static SLIDE_ENCODE_HEADER *sheader;
	static unsigned int *top;
	static BIT_FILE bit_file;
	static unsigned int *output;
	unsigned int end;
	
  byte type;
  uint *puVar1;
  uchar (*pauVar2) [384];
  uchar (**ppauVar3) [384];
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int input_array [8] [8];
  uchar *output_array [8];
  
  if (photo_expand.sta != '\x02') {
    if (photo_expand.cnt == '\0') {
      bit_file_24 = input + 0x20;
      out_header_21 = output2;
      output_25 = output2;
      *output2 = *(uint *)input;
      puVar1 = out_header_21;
      out_header_21[1] = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      DAT_00422164 = 0x80;
      DAT_00422168 = 0;
      top_23 = output_25;
      sheader_22 = input;
      InitCompress__Fc((char)*(undefined4 *)(input + 0x1c));
    }
    type = photo_expand.cnt >> 3;
    if (type < 3) {
      if ((photo_expand.cnt & 7) == 0) {
        output_25 = top_23;
        bit_file_24 = input + *(int *)(sheader_22 + (uint)type * 4 + 0x10);
        DAT_00422164 = 0x80;
        DAT_00422168 = 0;
        OutputRunLength = 0;
        InputRunLength = 0;
      }
      uVar6 = (photo_expand.cnt & 7) * 0x10;
      uVar7 = uVar6 + 0x10;
      if (uVar6 < uVar7) {
        do {
          repair_flg = 0x77 < (int)uVar6;
          pauVar2 = pixelstrip;
          iVar5 = 0;
          while( true ) {
            iVar4 = 7;
            pauVar2 = pauVar2[7];
            ppauVar3 = (uchar (**) [384])(output_array + 7);
            do {
              iVar4 = iVar4 + -1;
              *ppauVar3 = pauVar2;
              ppauVar3 = ppauVar3 + -1;
              pauVar2 = pauVar2[-1];
            } while (-1 < iVar4);
            ReadDCTData__FP8BIT_FILEPA7_i((BIT_FILE *)&bit_file_24,input_array);
            InverseDCT__FPA7_iPPUc(input_array,output_array);
            if (0x17f < iVar5 + 8) break;
            pauVar2 = (uchar (*) [384])(iVar5 + 0x422178);
            iVar5 = iVar5 + 8;
          }
          uVar6 = uVar6 + 8;
          output_25 = WritePixelStrip__FPUiPA383_UcUc(output_25,pixelstrip,type);
        } while ((int)uVar6 < (int)uVar7);
      }
      photo_expand.cnt = photo_expand.cnt + '\x01';
    }
    if (0x17 < photo_expand.cnt) {
      photo_expand.cnt = '\0';
      photo_expand.sta = '\x02';
    }
  }
  return;
}

static void InitCompress(char quality) {
	unsigned int i;
	unsigned int j;
	float val;
	
  float fVar1;
  int iVar2;
  float (*pafVar3) [8];
  float (*pafVar4) [8];
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar7 = 0;
  iVar2 = 0;
  do {
    uVar8 = 0;
    piVar5 = (int *)((int)quantum + iVar2);
    do {
      iVar2 = uVar8 << 1;
      uVar8 = uVar8 + 1;
      *piVar5 = ((uVar7 << 1) / 3 + iVar2 / 3) * (int)quality + (int)quality + 1;
      piVar5 = piVar5 + 1;
    } while (uVar8 < 8);
    uVar7 = uVar7 + 1;
    iVar2 = uVar7 * 0x20;
  } while (uVar7 < 8);
  pafVar4 = C;
  pafVar3 = Ct;
  uVar7 = 0;
  do {
    uVar7 = uVar7 + 1;
    *(float *)pafVar4 = 0.3535534;
    (*pafVar3)[0] = 0.3535534;
    fVar1 = DAT_003ed928;
    pafVar4 = (float (*) [8])((int)pafVar4 + 4);
    pafVar3 = pafVar3[1];
  } while (uVar7 < 8);
  fVar14 = 0.0625;
  uVar8 = 1;
  uVar7 = 0;
  while( true ) {
    pfVar11 = Ct + uVar8;
    pfVar10 = (float *)C[uVar8];
    uVar9 = 0;
    uVar6 = 1;
    do {
      if ((int)uVar6 < 0) {
        fVar12 = (float)(uVar6 & 1 | uVar6 >> 1);
        fVar12 = fVar12 + fVar12;
      }
      else {
        fVar12 = (float)uVar6;
      }
      if ((int)uVar8 < 0) {
        fVar13 = (float)(uVar8 & 1 | uVar7);
        fVar13 = fVar13 + fVar13;
      }
      else {
        fVar13 = (float)uVar8;
      }
      uVar9 = uVar9 + 1;
      uVar6 = uVar6 + 2;
      fVar12 = cosf(fVar12 * fVar1 * fVar13 * fVar14);
      *pfVar11 = fVar12 * 0.5;
      pfVar11 = pfVar11 + 8;
      *pfVar10 = fVar12 * 0.5;
      pfVar10 = pfVar10 + 1;
    } while (uVar9 < 8);
    uVar8 = uVar8 + 1;
    if (7 < uVar8) break;
    uVar7 = uVar8 >> 1;
  }
  return;
}

static void ForwardDCT(unsigned char **input, int *output[8]) {
	float temp[8][8];
	float temp1;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	
  uchar *puVar1;
  byte *pbVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float temp [8] [8];
  
  uVar9 = 0;
  do {
    puVar1 = *input;
    pfVar3 = (float *)temp[uVar9];
    uVar7 = 0;
    do {
      *pfVar3 = 0.0;
      pfVar6 = Ct + uVar7;
      uVar5 = 0;
      do {
        pbVar2 = puVar1 + uVar5;
        uVar5 = uVar5 + 1;
        fVar12 = *pfVar6;
        pfVar6 = pfVar6 + 8;
        *pfVar3 = *pfVar3 + (float)(*pbVar2 - 0x80) * fVar12;
      } while (uVar5 < 8);
      uVar7 = uVar7 + 1;
      pfVar3 = pfVar3 + 1;
    } while (uVar7 < 8);
    uVar9 = uVar9 + 1;
    input = input + 1;
  } while (uVar9 < 8);
  uVar9 = 0;
  iVar8 = 0;
  do {
    uVar7 = 0;
    piVar4 = *output + iVar8;
    do {
      fVar12 = 0.0;
      pfVar6 = temp + uVar7;
      uVar5 = 0;
      pfVar3 = C + iVar8;
      do {
        fVar11 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        fVar10 = *pfVar6;
        pfVar6 = pfVar6 + 8;
        uVar5 = uVar5 + 1;
        fVar12 = fVar12 + fVar11 * fVar10;
      } while (uVar5 < 8);
      if (fVar12 < 0.0) {
        fVar12 = fVar12 - 0.5;
      }
      else {
        fVar12 = fVar12 + 0.5;
      }
      uVar7 = uVar7 + 1;
      *piVar4 = (int)fVar12;
      piVar4 = piVar4 + 1;
    } while (uVar7 < 8);
    uVar9 = uVar9 + 1;
    iVar8 = iVar8 + 8;
  } while (uVar9 < 8);
  return;
}

static void InverseDCT(int *input[8], unsigned char **output) {
	float temp[8][8];
	float temp1;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	
  int iVar1;
  int *piVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float temp [8] [8];
  
  uVar8 = 0;
  iVar1 = 0;
  do {
    uVar7 = 0;
    pfVar6 = (float *)((int)temp + iVar1);
    pfVar5 = pfVar6;
    do {
      *pfVar5 = 0.0;
      pfVar3 = C + uVar7;
      uVar4 = 0;
      fVar12 = *pfVar5;
      piVar2 = (int *)((int)*input + iVar1);
      do {
        iVar10 = *piVar2;
        piVar2 = piVar2 + 1;
        fVar9 = *pfVar3;
        pfVar3 = pfVar3 + 8;
        uVar4 = uVar4 + 1;
        fVar12 = fVar12 + (float)iVar10 * fVar9;
      } while (uVar4 < 8);
      uVar7 = uVar7 + 1;
      *pfVar6 = fVar12;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (uVar7 < 8);
    uVar8 = uVar8 + 1;
    iVar1 = uVar8 * 0x20;
  } while (uVar8 < 8);
  uVar8 = 0;
  iVar1 = 0;
  do {
    uVar7 = 0;
    iVar10 = 0;
    do {
      fVar12 = 0.0;
      pfVar6 = (float *)((int)temp + iVar10);
      uVar4 = 0;
      pfVar5 = Ct + iVar1;
      do {
        fVar11 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar9 = *pfVar6;
        pfVar6 = pfVar6 + 8;
        uVar4 = uVar4 + 1;
        fVar12 = fVar12 + fVar11 * fVar9;
      } while (uVar4 < 8);
      fVar12 = fVar12 + 128.0;
      if (fVar12 < 0.0) {
        (*output)[uVar7] = '\0';
      }
      else if (255.0 < fVar12) {
        (*output)[uVar7] = 0xff;
      }
      else {
        if (fVar12 < 0.0) {
          fVar12 = fVar12 - 0.5;
        }
        else {
          fVar12 = fVar12 + 0.5;
        }
        (*output)[uVar7] = (uchar)(int)fVar12;
      }
      uVar7 = uVar7 + 1;
      iVar10 = uVar7 * 4;
    } while (uVar7 < 8);
    uVar8 = uVar8 + 1;
    output = output + 1;
    iVar1 = iVar1 + 8;
  } while (uVar8 < 8);
  return;
}

static void WriteDCTData(BIT_FILE *output_file, int *output_data[8]) {
	int i;
	int row;
	int col;
	float result;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  iVar2 = 0;
  iVar1 = 0;
  do {
    fVar3 = (float)output_data[(&ZigZag[0].row)[iVar1]][(&ZigZag[0].col)[iVar1]] /
            (float)quantum[(&ZigZag[0].row)[iVar1]][(&ZigZag[0].col)[iVar1]];
    iVar2 = iVar2 + 1;
    if (fVar3 < fVar4) {
      fVar3 = fVar3 - 0.5;
    }
    else {
      fVar3 = fVar3 + 0.5;
    }
    OutputCode__FP8BIT_FILEi(output_file,(int)fVar3);
    iVar1 = iVar2 * 2;
  } while (iVar2 < 0x40);
  return;
}

static unsigned int* ReadPixelStrip(unsigned int *input, unsigned char *strip[384], unsigned char type) {
	int row;
	int col;
	unsigned int c;
	
  uchar uVar1;
  uint uVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  do {
    iVar4 = 0x17f;
    puVar3 = *strip + (iVar6 + iVar5) * 0x80;
    do {
      uVar2 = *input;
      input = input + 1;
      if (type == '\0') {
        uVar2 = uVar2 >> 0x10;
LAB_00131798:
        *puVar3 = (uchar)uVar2;
        uVar1 = *puVar3;
      }
      else {
        if (type == '\x01') {
          uVar2 = uVar2 >> 8;
          goto LAB_00131798;
        }
        if (type == '\x02') goto LAB_00131798;
        uVar1 = *puVar3;
      }
      if (uVar1 == '\0') {
        *puVar3 = '\x01';
      }
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (-1 < iVar4);
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 2;
    if (7 < iVar5) {
      return input;
    }
  } while( true );
}

static int InputCode(BIT_FILE *input_file) {
	int bit_count;
	int result;
	
  int iVar1;
  int iVar2;
  uint bit_count;
  
  if (InputRunLength < 1) {
    iVar1 = InputBits__FP8BIT_FILEi(input_file,2);
    if (iVar1 == 0) {
      InputRunLength = InputBits__FP8BIT_FILEi(input_file,4);
      iVar1 = 0;
    }
    else {
      if (iVar1 == 1) {
        iVar1 = InputBits__FP8BIT_FILEi(input_file,1);
        bit_count = iVar1 + 1;
      }
      else {
        iVar2 = InputBits__FP8BIT_FILEi(input_file,2);
        bit_count = (iVar2 + iVar1 * 4) - 5;
      }
      iVar1 = InputBits__FP8BIT_FILEi(input_file,bit_count);
      if ((iVar1 >> (bit_count - 1 & 0x1f) & 1U) == 0) {
        iVar1 = (iVar1 - (1 << (bit_count & 0x1f))) + 1;
      }
    }
  }
  else {
    iVar1 = 0;
    InputRunLength = InputRunLength + -1;
  }
  return iVar1;
}

static void ReadDCTData(BIT_FILE *input_file, int *input_data[8]) {
	int i;
	int row;
	int col;
	
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    cVar1 = ZigZag[iVar3].row;
    cVar2 = ZigZag[iVar3].col;
    iVar3 = InputCode__FP8BIT_FILE(input_file);
    input_data[cVar1][cVar2] = iVar3 * quantum[cVar1][cVar2];
    iVar3 = iVar4;
  } while (iVar4 < 0x40);
  return;
}

static void OutputCode(BIT_FILE *output_file, int code) {
	int top_of_range;
	int abs_code;
	int bit_count;
	
  int iVar1;
  int iVar2;
  int count;
  
  if (code == 0) {
    OutputRunLength = OutputRunLength + 1;
  }
  else {
    if ((OutputRunLength != 0) && (0 < OutputRunLength)) {
      do {
        OutputBits__FP8BIT_FILEUii(output_file,0,2);
        if (OutputRunLength < 0x11) {
          OutputBits__FP8BIT_FILEUii(output_file,OutputRunLength - 1,4);
          OutputRunLength = 0;
        }
        else {
          OutputBits__FP8BIT_FILEUii(output_file,0xf,4);
          OutputRunLength = OutputRunLength + -0x10;
        }
      } while (0 < OutputRunLength);
    }
    count = 1;
    iVar1 = code;
    if (code < 0) {
      iVar1 = -code;
    }
    iVar2 = 1;
    if (1 < iVar1) {
      do {
        iVar2 = iVar2 * 2 + 1;
        count = count + 1;
      } while (iVar2 < iVar1);
    }
    if (count < 3) {
      OutputBits__FP8BIT_FILEUii(output_file,count + 1,3);
    }
    else {
      OutputBits__FP8BIT_FILEUii(output_file,count + 5,4);
    }
    if (code < 1) {
      OutputBits__FP8BIT_FILEUii(output_file,code + iVar2,count);
    }
    else {
      OutputBits__FP8BIT_FILEUii(output_file,code,count);
    }
  }
  return;
}

static unsigned int* WritePixelStrip(unsigned int *output, unsigned char *strip[384], unsigned char type) {
	int row;
	int col;
	
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar4 = 0;
  do {
    puVar2 = *strip + iVar4;
    iVar3 = 0x17f;
    do {
      if (type == '\0') {
        *output = 0x1000000;
        uVar1 = (uint)*puVar2 << 0x10 | 0x1000000;
LAB_00131b34:
        *output = uVar1;
      }
      else if (type == '\x01') {
        *output = *output | (uint)*puVar2 << 8;
      }
      else if (type == '\x02') {
        uVar1 = *output | (uint)*puVar2;
        goto LAB_00131b34;
      }
      iVar3 = iVar3 + -1;
      output = output + 1;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar3);
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 0x180;
    if (7 < iVar5) {
      return output;
    }
  } while( true );
}

static void OutputBits(BIT_FILE *bit_file, unsigned int code, int count) {
	unsigned int mask;
	
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1 << (count - 1U & 0x1f);
  while (uVar3 != 0) {
    uVar2 = uVar3 & code;
    uVar3 = uVar3 >> 1;
    if (uVar2 != 0) {
      bit_file->rack = bit_file->rack | (uint)bit_file->mask;
    }
    bVar1 = bit_file->mask >> 1;
    bit_file->mask = bVar1;
    if (bVar1 == 0) {
      *bit_file->file = *(char *)&bit_file->rack;
      bit_file->rack = 0;
      bit_file->mask = 0x80;
      bit_file->file = bit_file->file + 1;
    }
  }
  return;
}

static int InputBits(BIT_FILE *bit_file, int bit_count) {
	unsigned int mask;
	int return_value;
	
  char cVar1;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1 << (bit_count - 1U & 0x1f);
  uVar6 = 0;
  if (uVar5 != 0) {
    uVar2 = bit_file->mask;
    while( true ) {
      if (uVar2 == 0x80) {
        cVar1 = *bit_file->file;
        bit_file->file = bit_file->file + 1;
        bit_file->rack = (int)cVar1;
        bVar3 = bit_file->mask;
      }
      else {
        bVar3 = bit_file->mask;
      }
      uVar4 = uVar6 | uVar5;
      uVar5 = uVar5 >> 1;
      bit_file->mask = bVar3 >> 1;
      if ((bit_file->rack & (uint)bVar3) != 0) {
        uVar6 = uVar4;
      }
      if (bVar3 >> 1 == 0) {
        bit_file->mask = 0x80;
      }
      if (uVar5 == 0) break;
      uVar2 = bit_file->mask;
    }
  }
  return uVar6;
}
