// STATUS: NOT STARTED

#include "snd_pcmstream.h"

struct _SND_PCM_STREAM_WRK {
	PCM_STREAM_PLAY p;
	PCM_STREAM_START s;
	EEIOP_STREAM_STATUS status;
	unsigned int pre_load_ok : 1;
	unsigned int play_flg : 1;
	unsigned int pause : 1;
	int file_no;
	short int vol;
	short int target_vol;
	short int spd;
};

typedef _SND_PCM_STREAM_WRK SND_PCM_STREAM_WRK;

SND_PCM_STREAM_WRK snd_pcm_stream_wrk[2] = {
	/* [0] = */ {
		/* .p = */ {
			/* .wrk_id = */ 0,
			/* .vol = */ 0
		},
		/* .s = */ {
			/* .start_sector = */ 0,
			/* .size = */ 0,
			/* .nchannel = */ 0,
			/* .wrk_id = */ 0,
			/* .offset = */ 0,
			/* .file_name = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0,
				/* [30] = */ 0,
				/* [31] = */ 0,
				/* [32] = */ 0,
				/* [33] = */ 0,
				/* [34] = */ 0,
				/* [35] = */ 0,
				/* [36] = */ 0,
				/* [37] = */ 0,
				/* [38] = */ 0,
				/* [39] = */ 0,
				/* [40] = */ 0,
				/* [41] = */ 0,
				/* [42] = */ 0,
				/* [43] = */ 0,
				/* [44] = */ 0,
				/* [45] = */ 0,
				/* [46] = */ 0,
				/* [47] = */ 0,
				/* [48] = */ 0,
				/* [49] = */ 0,
				/* [50] = */ 0,
				/* [51] = */ 0,
				/* [52] = */ 0,
				/* [53] = */ 0,
				/* [54] = */ 0,
				/* [55] = */ 0,
				/* [56] = */ 0,
				/* [57] = */ 0,
				/* [58] = */ 0,
				/* [59] = */ 0,
				/* [60] = */ 0,
				/* [61] = */ 0,
				/* [62] = */ 0,
				/* [63] = */ 0,
				/* [64] = */ 0,
				/* [65] = */ 0,
				/* [66] = */ 0,
				/* [67] = */ 0,
				/* [68] = */ 0,
				/* [69] = */ 0,
				/* [70] = */ 0,
				/* [71] = */ 0,
				/* [72] = */ 0,
				/* [73] = */ 0,
				/* [74] = */ 0,
				/* [75] = */ 0,
				/* [76] = */ 0,
				/* [77] = */ 0,
				/* [78] = */ 0,
				/* [79] = */ 0,
				/* [80] = */ 0,
				/* [81] = */ 0,
				/* [82] = */ 0,
				/* [83] = */ 0,
				/* [84] = */ 0,
				/* [85] = */ 0,
				/* [86] = */ 0,
				/* [87] = */ 0,
				/* [88] = */ 0,
				/* [89] = */ 0,
				/* [90] = */ 0,
				/* [91] = */ 0,
				/* [92] = */ 0,
				/* [93] = */ 0,
				/* [94] = */ 0,
				/* [95] = */ 0,
				/* [96] = */ 0,
				/* [97] = */ 0,
				/* [98] = */ 0,
				/* [99] = */ 0,
				/* [100] = */ 0,
				/* [101] = */ 0,
				/* [102] = */ 0,
				/* [103] = */ 0,
				/* [104] = */ 0,
				/* [105] = */ 0,
				/* [106] = */ 0,
				/* [107] = */ 0,
				/* [108] = */ 0,
				/* [109] = */ 0,
				/* [110] = */ 0,
				/* [111] = */ 0,
				/* [112] = */ 0,
				/* [113] = */ 0,
				/* [114] = */ 0,
				/* [115] = */ 0,
				/* [116] = */ 0,
				/* [117] = */ 0,
				/* [118] = */ 0,
				/* [119] = */ 0,
				/* [120] = */ 0,
				/* [121] = */ 0,
				/* [122] = */ 0,
				/* [123] = */ 0,
				/* [124] = */ 0,
				/* [125] = */ 0,
				/* [126] = */ 0,
				/* [127] = */ 0,
				/* [128] = */ 0,
				/* [129] = */ 0,
				/* [130] = */ 0,
				/* [131] = */ 0,
				/* [132] = */ 0,
				/* [133] = */ 0,
				/* [134] = */ 0,
				/* [135] = */ 0,
				/* [136] = */ 0,
				/* [137] = */ 0,
				/* [138] = */ 0,
				/* [139] = */ 0,
				/* [140] = */ 0,
				/* [141] = */ 0,
				/* [142] = */ 0,
				/* [143] = */ 0,
				/* [144] = */ 0,
				/* [145] = */ 0,
				/* [146] = */ 0,
				/* [147] = */ 0,
				/* [148] = */ 0,
				/* [149] = */ 0,
				/* [150] = */ 0,
				/* [151] = */ 0,
				/* [152] = */ 0,
				/* [153] = */ 0,
				/* [154] = */ 0,
				/* [155] = */ 0,
				/* [156] = */ 0,
				/* [157] = */ 0,
				/* [158] = */ 0,
				/* [159] = */ 0,
				/* [160] = */ 0,
				/* [161] = */ 0,
				/* [162] = */ 0,
				/* [163] = */ 0,
				/* [164] = */ 0,
				/* [165] = */ 0,
				/* [166] = */ 0,
				/* [167] = */ 0,
				/* [168] = */ 0,
				/* [169] = */ 0,
				/* [170] = */ 0,
				/* [171] = */ 0,
				/* [172] = */ 0,
				/* [173] = */ 0,
				/* [174] = */ 0,
				/* [175] = */ 0,
				/* [176] = */ 0,
				/* [177] = */ 0,
				/* [178] = */ 0,
				/* [179] = */ 0,
				/* [180] = */ 0,
				/* [181] = */ 0,
				/* [182] = */ 0,
				/* [183] = */ 0,
				/* [184] = */ 0,
				/* [185] = */ 0,
				/* [186] = */ 0,
				/* [187] = */ 0,
				/* [188] = */ 0,
				/* [189] = */ 0,
				/* [190] = */ 0,
				/* [191] = */ 0,
				/* [192] = */ 0,
				/* [193] = */ 0,
				/* [194] = */ 0,
				/* [195] = */ 0,
				/* [196] = */ 0,
				/* [197] = */ 0,
				/* [198] = */ 0,
				/* [199] = */ 0,
				/* [200] = */ 0,
				/* [201] = */ 0,
				/* [202] = */ 0,
				/* [203] = */ 0,
				/* [204] = */ 0,
				/* [205] = */ 0,
				/* [206] = */ 0,
				/* [207] = */ 0,
				/* [208] = */ 0,
				/* [209] = */ 0,
				/* [210] = */ 0,
				/* [211] = */ 0,
				/* [212] = */ 0,
				/* [213] = */ 0,
				/* [214] = */ 0,
				/* [215] = */ 0,
				/* [216] = */ 0,
				/* [217] = */ 0,
				/* [218] = */ 0,
				/* [219] = */ 0,
				/* [220] = */ 0,
				/* [221] = */ 0,
				/* [222] = */ 0,
				/* [223] = */ 0,
				/* [224] = */ 0,
				/* [225] = */ 0,
				/* [226] = */ 0,
				/* [227] = */ 0,
				/* [228] = */ 0,
				/* [229] = */ 0,
				/* [230] = */ 0,
				/* [231] = */ 0,
				/* [232] = */ 0,
				/* [233] = */ 0,
				/* [234] = */ 0,
				/* [235] = */ 0,
				/* [236] = */ 0,
				/* [237] = */ 0,
				/* [238] = */ 0,
				/* [239] = */ 0,
				/* [240] = */ 0,
				/* [241] = */ 0,
				/* [242] = */ 0,
				/* [243] = */ 0,
				/* [244] = */ 0,
				/* [245] = */ 0,
				/* [246] = */ 0,
				/* [247] = */ 0,
				/* [248] = */ 0,
				/* [249] = */ 0,
				/* [250] = */ 0,
				/* [251] = */ 0,
				/* [252] = */ 0,
				/* [253] = */ 0,
				/* [254] = */ 0,
				/* [255] = */ 0
			}
		},
		/* .status = */ ST_STREAM_NO_USE,
		/* .pre_load_ok = */ BITFIELD,
		/* .play_flg = */ BITFIELD,
		/* .pause = */ BITFIELD,
		/* .file_no = */ 0,
		/* .vol = */ 0,
		/* .target_vol = */ 0,
		/* .spd = */ 0
	},
	/* [1] = */ {
		/* .p = */ {
			/* .wrk_id = */ 0,
			/* .vol = */ 0
		},
		/* .s = */ {
			/* .start_sector = */ 0,
			/* .size = */ 0,
			/* .nchannel = */ 0,
			/* .wrk_id = */ 0,
			/* .offset = */ 0,
			/* .file_name = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0,
				/* [3] = */ 0,
				/* [4] = */ 0,
				/* [5] = */ 0,
				/* [6] = */ 0,
				/* [7] = */ 0,
				/* [8] = */ 0,
				/* [9] = */ 0,
				/* [10] = */ 0,
				/* [11] = */ 0,
				/* [12] = */ 0,
				/* [13] = */ 0,
				/* [14] = */ 0,
				/* [15] = */ 0,
				/* [16] = */ 0,
				/* [17] = */ 0,
				/* [18] = */ 0,
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0,
				/* [30] = */ 0,
				/* [31] = */ 0,
				/* [32] = */ 0,
				/* [33] = */ 0,
				/* [34] = */ 0,
				/* [35] = */ 0,
				/* [36] = */ 0,
				/* [37] = */ 0,
				/* [38] = */ 0,
				/* [39] = */ 0,
				/* [40] = */ 0,
				/* [41] = */ 0,
				/* [42] = */ 0,
				/* [43] = */ 0,
				/* [44] = */ 0,
				/* [45] = */ 0,
				/* [46] = */ 0,
				/* [47] = */ 0,
				/* [48] = */ 0,
				/* [49] = */ 0,
				/* [50] = */ 0,
				/* [51] = */ 0,
				/* [52] = */ 0,
				/* [53] = */ 0,
				/* [54] = */ 0,
				/* [55] = */ 0,
				/* [56] = */ 0,
				/* [57] = */ 0,
				/* [58] = */ 0,
				/* [59] = */ 0,
				/* [60] = */ 0,
				/* [61] = */ 0,
				/* [62] = */ 0,
				/* [63] = */ 0,
				/* [64] = */ 0,
				/* [65] = */ 0,
				/* [66] = */ 0,
				/* [67] = */ 0,
				/* [68] = */ 0,
				/* [69] = */ 0,
				/* [70] = */ 0,
				/* [71] = */ 0,
				/* [72] = */ 0,
				/* [73] = */ 0,
				/* [74] = */ 0,
				/* [75] = */ 0,
				/* [76] = */ 0,
				/* [77] = */ 0,
				/* [78] = */ 0,
				/* [79] = */ 0,
				/* [80] = */ 0,
				/* [81] = */ 0,
				/* [82] = */ 0,
				/* [83] = */ 0,
				/* [84] = */ 0,
				/* [85] = */ 0,
				/* [86] = */ 0,
				/* [87] = */ 0,
				/* [88] = */ 0,
				/* [89] = */ 0,
				/* [90] = */ 0,
				/* [91] = */ 0,
				/* [92] = */ 0,
				/* [93] = */ 0,
				/* [94] = */ 0,
				/* [95] = */ 0,
				/* [96] = */ 0,
				/* [97] = */ 0,
				/* [98] = */ 0,
				/* [99] = */ 0,
				/* [100] = */ 0,
				/* [101] = */ 0,
				/* [102] = */ 0,
				/* [103] = */ 0,
				/* [104] = */ 0,
				/* [105] = */ 0,
				/* [106] = */ 0,
				/* [107] = */ 0,
				/* [108] = */ 0,
				/* [109] = */ 0,
				/* [110] = */ 0,
				/* [111] = */ 0,
				/* [112] = */ 0,
				/* [113] = */ 0,
				/* [114] = */ 0,
				/* [115] = */ 0,
				/* [116] = */ 0,
				/* [117] = */ 0,
				/* [118] = */ 0,
				/* [119] = */ 0,
				/* [120] = */ 0,
				/* [121] = */ 0,
				/* [122] = */ 0,
				/* [123] = */ 0,
				/* [124] = */ 0,
				/* [125] = */ 0,
				/* [126] = */ 0,
				/* [127] = */ 0,
				/* [128] = */ 0,
				/* [129] = */ 0,
				/* [130] = */ 0,
				/* [131] = */ 0,
				/* [132] = */ 0,
				/* [133] = */ 0,
				/* [134] = */ 0,
				/* [135] = */ 0,
				/* [136] = */ 0,
				/* [137] = */ 0,
				/* [138] = */ 0,
				/* [139] = */ 0,
				/* [140] = */ 0,
				/* [141] = */ 0,
				/* [142] = */ 0,
				/* [143] = */ 0,
				/* [144] = */ 0,
				/* [145] = */ 0,
				/* [146] = */ 0,
				/* [147] = */ 0,
				/* [148] = */ 0,
				/* [149] = */ 0,
				/* [150] = */ 0,
				/* [151] = */ 0,
				/* [152] = */ 0,
				/* [153] = */ 0,
				/* [154] = */ 0,
				/* [155] = */ 0,
				/* [156] = */ 0,
				/* [157] = */ 0,
				/* [158] = */ 0,
				/* [159] = */ 0,
				/* [160] = */ 0,
				/* [161] = */ 0,
				/* [162] = */ 0,
				/* [163] = */ 0,
				/* [164] = */ 0,
				/* [165] = */ 0,
				/* [166] = */ 0,
				/* [167] = */ 0,
				/* [168] = */ 0,
				/* [169] = */ 0,
				/* [170] = */ 0,
				/* [171] = */ 0,
				/* [172] = */ 0,
				/* [173] = */ 0,
				/* [174] = */ 0,
				/* [175] = */ 0,
				/* [176] = */ 0,
				/* [177] = */ 0,
				/* [178] = */ 0,
				/* [179] = */ 0,
				/* [180] = */ 0,
				/* [181] = */ 0,
				/* [182] = */ 0,
				/* [183] = */ 0,
				/* [184] = */ 0,
				/* [185] = */ 0,
				/* [186] = */ 0,
				/* [187] = */ 0,
				/* [188] = */ 0,
				/* [189] = */ 0,
				/* [190] = */ 0,
				/* [191] = */ 0,
				/* [192] = */ 0,
				/* [193] = */ 0,
				/* [194] = */ 0,
				/* [195] = */ 0,
				/* [196] = */ 0,
				/* [197] = */ 0,
				/* [198] = */ 0,
				/* [199] = */ 0,
				/* [200] = */ 0,
				/* [201] = */ 0,
				/* [202] = */ 0,
				/* [203] = */ 0,
				/* [204] = */ 0,
				/* [205] = */ 0,
				/* [206] = */ 0,
				/* [207] = */ 0,
				/* [208] = */ 0,
				/* [209] = */ 0,
				/* [210] = */ 0,
				/* [211] = */ 0,
				/* [212] = */ 0,
				/* [213] = */ 0,
				/* [214] = */ 0,
				/* [215] = */ 0,
				/* [216] = */ 0,
				/* [217] = */ 0,
				/* [218] = */ 0,
				/* [219] = */ 0,
				/* [220] = */ 0,
				/* [221] = */ 0,
				/* [222] = */ 0,
				/* [223] = */ 0,
				/* [224] = */ 0,
				/* [225] = */ 0,
				/* [226] = */ 0,
				/* [227] = */ 0,
				/* [228] = */ 0,
				/* [229] = */ 0,
				/* [230] = */ 0,
				/* [231] = */ 0,
				/* [232] = */ 0,
				/* [233] = */ 0,
				/* [234] = */ 0,
				/* [235] = */ 0,
				/* [236] = */ 0,
				/* [237] = */ 0,
				/* [238] = */ 0,
				/* [239] = */ 0,
				/* [240] = */ 0,
				/* [241] = */ 0,
				/* [242] = */ 0,
				/* [243] = */ 0,
				/* [244] = */ 0,
				/* [245] = */ 0,
				/* [246] = */ 0,
				/* [247] = */ 0,
				/* [248] = */ 0,
				/* [249] = */ 0,
				/* [250] = */ 0,
				/* [251] = */ 0,
				/* [252] = */ 0,
				/* [253] = */ 0,
				/* [254] = */ 0,
				/* [255] = */ 0
			}
		},
		/* .status = */ ST_STREAM_NO_USE,
		/* .pre_load_ok = */ BITFIELD,
		/* .play_flg = */ BITFIELD,
		/* .pause = */ BITFIELD,
		/* .file_no = */ 0,
		/* .vol = */ 0,
		/* .target_vol = */ 0,
		/* .spd = */ 0
	}
};

void SndPCMStreamInit() {
	int i;
	
  _SND_PCM_STREAM_WRK *p_Var1;
  int iVar2;
  
  iopCommandRegister(REQ_PCM_STREAMCREATE,(char *)0x0,0);
  iVar2 = 0;
  p_Var1 = snd_pcm_stream_wrk;
  do {
    (p_Var1->s).wrk_id = (ushort)iVar2;
    (p_Var1->p).wrk_id = (ushort)iVar2;
    iVar2 = iVar2 + 1;
    p_Var1->status = ST_STREAM_NO_USE;
    p_Var1 = p_Var1 + 1;
  } while (iVar2 < 2);
  return;
}

SND_PCM_STREAM_ERR SndPCMStreamStart(int wrk_id, int file_no, int offset) {
	SND_PCM_STREAM_WRK *wrk;
	
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  SndPCMStreamInitWrk(snd_pcm_stream_wrk + wrk_id,file_no);
  iVar2 = GetFileStartSector(snd_pcm_stream_wrk[wrk_id].file_no);
  iVar4 = snd_pcm_stream_wrk[wrk_id].file_no;
  snd_pcm_stream_wrk[wrk_id].s.start_sector = iVar2;
  GetFileNameBuffer(iVar4,snd_pcm_stream_wrk[wrk_id].s.file_name);
  uVar3 = GetFileSize(snd_pcm_stream_wrk[wrk_id].file_no);
  uVar1 = *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118;
  snd_pcm_stream_wrk[wrk_id].s.size = uVar3;
  *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 = uVar1 & 0xfffffffb;
  SetCDReadMode(0);
  iVar4 = iopCommandRegister(REQ_PCM_STREAMSTART,(char *)&snd_pcm_stream_wrk[wrk_id].s,0x110);
  if (iVar4 != 0) {
    printf("PCMStream[%d] IOP_WRK START\n");
  }
  return (uint)(iVar4 == 0);
}

SND_PCM_STREAM_ERR SndPCMStreamPlay(int wrk_id, int loop2, int vol, int in_time) {
	SND_PCM_STREAM_WRK *wrk;
	
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  _SND_PCM_STREAM_ERR _Var4;
  int iVar5;
  
  if (snd_pcm_stream_wrk[wrk_id].status == ST_STREAM_NO_USE) {
    printf("SndPCMStreamPlay() This Wrk Is Not Used\n");
    _Var4 = SND_PCM_STREAM_ERR_NOT_USE;
  }
  else {
    uVar3 = (ushort)vol;
    if (in_time == 0) {
      snd_pcm_stream_wrk[wrk_id].target_vol = uVar3;
      snd_pcm_stream_wrk[wrk_id].vol = uVar3;
    }
    else {
      snd_pcm_stream_wrk[wrk_id].vol = 0;
      uVar2 = SndGetFrameAddVol(vol,0,in_time);
      uVar1 = snd_pcm_stream_wrk[wrk_id].vol;
      snd_pcm_stream_wrk[wrk_id].spd = uVar2;
      snd_pcm_stream_wrk[wrk_id].target_vol = uVar3;
      uVar3 = SndGetFrameAddVol((int)(short)uVar3,(int)(short)uVar1,in_time);
      snd_pcm_stream_wrk[wrk_id].spd = uVar3;
    }
    snd_pcm_stream_wrk[wrk_id].p.vol = snd_pcm_stream_wrk[wrk_id].vol;
    iVar5 = iopCommandRegister(REQ_PCM_STREAMPLAY,(char *)(snd_pcm_stream_wrk + wrk_id),4);
    _Var4 = SND_PCM_STREAM_OK;
    if (iVar5 == 0) {
      _Var4 = SND_PCM_STREAM_ERR_IOPSEND;
    }
    else {
      *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 =
           *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 | 2;
    }
  }
  return _Var4;
}

void SndPCMStreamMain() {
	int wi;
	SND_PCM_STREAM_WRK *wrk;
	PCM_STREAM_SETVOL sts;
	PCM_STREAM_INIT sts;
	
  short sVar1;
  short sVar2;
  uint uVar3;
  _IOP_STREAM_RET *p_Var4;
  int iVar5;
  int wrk_id;
  int iVar6;
  undefined2 local_60;
  undefined2 local_5e;
  _PCM_STREAM_INIT sts;
  
  wrk_id = 0;
  iVar6 = 0;
  do {
    iVar5 = *(int *)((int)&snd_pcm_stream_wrk[0].status + iVar6);
    if (iVar5 != 0) {
      if (iVar5 == 6) {
        p_Var4 = GetPCMStreamWrkRet(wrk_id);
        if ((p_Var4->status == ST_STREAM_PLAYING) &&
           (uVar3 = *(uint *)(&snd_pcm_stream_wrk[0].field_0x118 + iVar6),
           *(uint *)(&snd_pcm_stream_wrk[0].field_0x118 + iVar6) = uVar3 | 1, (uVar3 >> 1 & 1) != 0)
           ) {
          *(undefined4 *)((int)&snd_pcm_stream_wrk[0].status + iVar6) = 3;
        }
      }
      else if (iVar5 == 3) {
        sVar1 = *(short *)((int)&snd_pcm_stream_wrk[0].target_vol + iVar6);
        sVar2 = *(short *)((int)&snd_pcm_stream_wrk[0].vol + iVar6);
        if (sVar1 != sVar2) {
          iVar5 = SndAddFadeVol((int)sVar2,(int)sVar1,
                                (int)*(short *)((int)&snd_pcm_stream_wrk[0].spd + iVar6));
          local_5e = (undefined2)iVar5;
          *(undefined2 *)((int)&snd_pcm_stream_wrk[0].vol + iVar6) = local_5e;
          local_60 = (undefined2)wrk_id;
          iopCommandRegister(REQ_PCM_STREAMSETVOL,(char *)&local_60,4);
        }
        p_Var4 = GetPCMStreamWrkRet(wrk_id);
        if (p_Var4->status == ST_STREAM_END) {
          *(undefined4 *)((int)&snd_pcm_stream_wrk[0].status + iVar6) = 5;
        }
      }
      else if (iVar5 == 5) {
        sts.wrk_id = wrk_id;
        iopCommandRegister(REQ_PCM_STREAMINIT,(char *)&sts,4);
        SetCDReadMode(1);
        *(undefined4 *)((int)&snd_pcm_stream_wrk[0].status + iVar6) = 0;
      }
    }
    wrk_id = wrk_id + 1;
    iVar6 = iVar6 + 0x128;
  } while (wrk_id < 2);
  return;
}

void SndPCMStreamStop(int wrk_id) {
	PCM_STREAM_STOP stop;
	
  _PCM_STREAM_STOP stop;
  
  if (snd_pcm_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    stop.wrk_id = wrk_id;
    iopCommandRegister(REQ_PCM_STREAMSTOP,(char *)&stop,4);
  }
  return;
}

void SndPCMStreamAllStop() {
  SndPCMStreamStop(0);
  SndPCMStreamStop(1);
  return;
}

void SndPCMStreamPause(int wrk_id) {
	SND_PCM_STREAM_WRK *wrk;
	PCM_STREAM_PAUSE pause;
	
  _PCM_STREAM_PAUSE pause;
  
  if ((snd_pcm_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) &&
     ((*(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 >> 2 & 1) == 0)) {
    *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 =
         *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 | 4;
    pause.wrk_id = wrk_id;
    iopCommandRegister(REQ_PCM_STREAMPAUSE,(char *)&pause,4);
  }
  return;
}

void SndPCMStreamRestart(int wrk_id) {
	SND_PCM_STREAM_WRK *wrk;
	PCM_STREAM_RESTART restart;
	
  _PCM_STREAM_RESTART restart;
  
  if ((snd_pcm_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) &&
     ((*(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 >> 2 & 1) != 0)) {
    *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 =
         *(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 & 0xfffffffb;
    restart.wrk_id = wrk_id;
    iopCommandRegister(REQ_PCM_STREAMRESTART,(char *)&restart,4);
  }
  return;
}

int SndPCMStreamIsUse(int wrk_id) {
  return (int)(snd_pcm_stream_wrk[wrk_id].status != ST_STREAM_NO_USE);
}

int SndPCMStreamIsPreload(int wrk_id) {
	SND_PCM_STREAM_WRK *wrk;
	
  if (snd_pcm_stream_wrk[wrk_id].status != ST_STREAM_NO_USE) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("SndPCMStreamPreLoad() This Wrk Is Not Used");
  }
  return (int)((*(uint *)&snd_pcm_stream_wrk[wrk_id].field_0x118 & 1) != 0);
}

SND_PCM_STREAM_ERR SndPCMStreamInitWrk(SND_PCM_STREAM_WRK *wrk, int file_no) {
  _SND_PCM_STREAM_ERR _Var1;
  
  if (wrk->status == ST_STREAM_NO_USE) {
    wrk->file_no = file_no;
    wrk->status = ST_STREAM_START;
    *(uint *)&wrk->field_0x118 = *(uint *)&wrk->field_0x118 & 0xfffffffc;
    _Var1 = SND_PCM_STREAM_OK;
  }
  else {
    printf("This PCMStream File Is Used!\n");
    _Var1 = SND_PCM_STREAM_ERR_IN_USE;
  }
  return _Var1;
}

void SndPCMStreamFade(int wrk_id, int target_vol, int time) {
	SND_PCM_STREAM_WRK *wrk;
	
  ushort uVar1;
  
  uVar1 = snd_pcm_stream_wrk[wrk_id].vol;
  snd_pcm_stream_wrk[wrk_id].target_vol = (ushort)target_vol;
  uVar1 = SndGetFrameAddVol((int)(short)(ushort)target_vol,(int)(short)uVar1,time);
  snd_pcm_stream_wrk[wrk_id].spd = uVar1;
  return;
}
