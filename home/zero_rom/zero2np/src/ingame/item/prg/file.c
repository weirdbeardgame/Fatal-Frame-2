// STATUS: NOT STARTED

#include "file.h"

static FILE_DAT *file_dat_tbl[5] = {
	/* [0] = */ file_pocketbook,
	/* [1] = */ file_scrap,
	/* [2] = */ file_oldbook,
	/* [3] = */ file_photograph,
	/* [4] = */ file_map
};

static PLYR_FILE plyr_file;
static char *plyr_file_tbl[5];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3adce0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f0780,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3f0788,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0x3add28,_max);
  }
  return (uint **)0x0;
}

void AllPlyrFileInit() {
	int i;
	int j;
	
  int iVar1;
  int file_id;
  int type;
  
  type = 0;
  file_id = 0;
  do {
    for (; iVar1 = GetFileTypeMaxNum__Fi(type), file_id < iVar1; file_id = file_id + 1) {
      PlyrFileInit__Fii(type,file_id);
    }
    type = type + 1;
    file_id = 0;
  } while (type < 5);
  return;
}

static void PlyrFileInit(int file_type, int file_id) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 80,
		/* [1] = */ 108,
		/* [2] = */ 121,
		/* [3] = */ 114,
		/* [4] = */ 70,
		/* [5] = */ 105,
		/* [6] = */ 108,
		/* [7] = */ 101,
		/* [8] = */ 73,
		/* [9] = */ 110,
		/* [10] = */ 105,
		/* [11] = */ 116,
		/* [12] = */ 0
	};
	
  int iVar1;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PlyrFileInit file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! PlyrFileInit file id %d");
  }
  SetPlyrFileState__Fiic(file_type,file_id,'\0');
  return;
}

void FileGet(int file_type, int file_id) {
	static char __FUNCTION__[8] = {
		/* [0] = */ 70,
		/* [1] = */ 105,
		/* [2] = */ 108,
		/* [3] = */ 101,
		/* [4] = */ 71,
		/* [5] = */ 101,
		/* [6] = */ 116,
		/* [7] = */ 0
	};
	
  char cVar1;
  int iVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileGet file type %d");
  }
  iVar2 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar2 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileGet file id %d");
  }
  cVar1 = GetPlyrFileState__Fii(file_type,file_id);
  if (cVar1 == '\0') {
    SetPlyrFileState__Fiic(file_type,file_id,'\x01');
    return;
  }
  printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
  PrintWarningReal("Warning!! File Type [%d] File ID [%d] It has already obtained it!!");
  return;
}

void FileLost(int file_type, int file_id) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 70,
		/* [1] = */ 105,
		/* [2] = */ 108,
		/* [3] = */ 101,
		/* [4] = */ 76,
		/* [5] = */ 111,
		/* [6] = */ 115,
		/* [7] = */ 116,
		/* [8] = */ 0
	};
	
  char cVar1;
  int iVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileLost file type %d");
  }
  iVar2 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar2 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileLost file id %d");
  }
  cVar1 = GetPlyrFileState__Fii(file_type,file_id);
  if (cVar1 != '\0') {
    SetPlyrFileState__Fiic(file_type,file_id,'\0');
    return;
  }
  printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
  PrintWarningReal("Warning! File Type[%d] File ID[%d] FileLost!!\n");
  return;
}

int FileRead(int file_type, int file_id) {
	static char __FUNCTION__[9] = {
		/* [0] = */ 70,
		/* [1] = */ 105,
		/* [2] = */ 108,
		/* [3] = */ 101,
		/* [4] = */ 82,
		/* [5] = */ 101,
		/* [6] = */ 97,
		/* [7] = */ 100,
		/* [8] = */ 0
	};
	int res;
	
  char cVar1;
  int iVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileRead file type %d");
  }
  iVar2 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar2 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileRead file id %d");
  }
  cVar1 = GetPlyrFileState__Fii(file_type,file_id);
  if (cVar1 == '\x01') {
    SetPlyrFileState__Fiic(file_type,file_id,'\x02');
  }
  else {
    if (cVar1 < '\x02') {
      if (cVar1 == '\0') {
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrintWarningReal("Warning! FileRead FileType [%d], FileID [%d]\n");
        return 1;
      }
    }
    else if (cVar1 == '\x02') {
      return 1;
    }
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! FileRead");
  }
  return 1;
}

static FILE_DAT* GetFileData(int file_type, int file_id) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 70,
		/* [4] = */ 105,
		/* [5] = */ 108,
		/* [6] = */ 101,
		/* [7] = */ 68,
		/* [8] = */ 97,
		/* [9] = */ 116,
		/* [10] = */ 97,
		/* [11] = */ 0
	};
	
  int iVar1;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetFileData file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetFileData file id %d");
  }
  return file_dat_tbl[file_type] + file_id;
}

int GetFileTexId(int file_type, int file_id) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 70,
		/* [4] = */ 105,
		/* [5] = */ 108,
		/* [6] = */ 101,
		/* [7] = */ 84,
		/* [8] = */ 101,
		/* [9] = */ 120,
		/* [10] = */ 73,
		/* [11] = */ 100,
		/* [12] = */ 0
	};
	
  int iVar1;
  FILE_DAT *pFVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetFileTexId file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetFileTexId file id %d");
  }
  pFVar2 = GetFileData__Fii(file_type,file_id);
  return pFVar2->tex_id;
}

static char* GetPlyrFileData(int file_type, int file_id) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 70,
		/* [8] = */ 105,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 68,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 0
	};
	
  int iVar1;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrFileData file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrFileData file id %d");
  }
  return plyr_file_tbl[file_type] + file_id;
}

char GetPlyrFileState(int file_type, int file_id) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 70,
		/* [8] = */ 105,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 83,
		/* [12] = */ 116,
		/* [13] = */ 97,
		/* [14] = */ 116,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  int iVar1;
  char *pcVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrFileState file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrFileState file id %d");
  }
  pcVar2 = GetPlyrFileData__Fii(file_type,file_id);
  return *pcVar2;
}

int GetPlyrFileTotalNum(int file_type) {
	static char __FUNCTION__[20] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 70,
		/* [8] = */ 105,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 84,
		/* [12] = */ 111,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 108,
		/* [16] = */ 78,
		/* [17] = */ 117,
		/* [18] = */ 109,
		/* [19] = */ 0
	};
	int i;
	int total;
	
  char cVar1;
  int iVar2;
  int file_id;
  int iVar3;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetPlyrFileTotalNum file type %d");
  }
  file_id = 0;
  iVar3 = 0;
  while (iVar2 = GetFileTypeMaxNum__Fi(file_type), file_id < iVar2) {
    iVar2 = file_id + 1;
    cVar1 = GetPlyrFileState__Fii(file_type,file_id);
    file_id = iVar2;
    if (cVar1 != '\0') {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}

int GetFileTypeMaxNum(int type) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 70,
		/* [4] = */ 105,
		/* [5] = */ 108,
		/* [6] = */ 101,
		/* [7] = */ 84,
		/* [8] = */ 121,
		/* [9] = */ 112,
		/* [10] = */ 101,
		/* [11] = */ 77,
		/* [12] = */ 97,
		/* [13] = */ 120,
		/* [14] = */ 78,
		/* [15] = */ 117,
		/* [16] = */ 109,
		/* [17] = */ 0
	};
	static int file_id_max[5] = {
		/* [0] = */ 42,
		/* [1] = */ 42,
		/* [2] = */ 40,
		/* [3] = */ 26,
		/* [4] = */ 10
	};
	
  if (4 < type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetFileTypeMaxNum file type %d");
  }
  return *(int *)(file_id_max_689 + type * 4);
}

void SetPlyrFileState(int file_type, int file_id, char state) {
	static char __FUNCTION__[17] = {
		/* [0] = */ 83,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 108,
		/* [5] = */ 121,
		/* [6] = */ 114,
		/* [7] = */ 70,
		/* [8] = */ 105,
		/* [9] = */ 108,
		/* [10] = */ 101,
		/* [11] = */ 83,
		/* [12] = */ 116,
		/* [13] = */ 97,
		/* [14] = */ 116,
		/* [15] = */ 101,
		/* [16] = */ 0
	};
	
  int iVar1;
  char *pcVar2;
  
  if (4 < file_type) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrFileState file type %d");
  }
  iVar1 = GetFileTypeMaxNum__Fi(file_type);
  if (iVar1 <= file_id) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrFileState file id %d");
  }
  if ('\x02' < state) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! SetPlyrFileState state %d");
  }
  pcVar2 = GetPlyrFileData__Fii(file_type,file_id);
  *pcVar2 = state;
  return;
}

void SetSave_PlyrFile(MC_SAVE_DATA *data) {
  data->size = 0xa0;
  data->addr = (uchar *)&plyr_file;
  return;
}

void DebugAllFileGet() {
	int i;
	int j;
	
  char cVar1;
  int iVar2;
  int file_id;
  int type;
  
  type = 0;
  file_id = 0;
  do {
    for (; iVar2 = GetFileTypeMaxNum__Fi(type), file_id < iVar2; file_id = file_id + 1) {
      cVar1 = GetPlyrFileState__Fii(type,file_id);
      if (cVar1 == '\0') {
        FileGet__Fii(type,file_id);
      }
    }
    type = type + 1;
    file_id = 0;
  } while (type < 5);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x2a);
    plyr_file_tbl[0] = (char *)&plyr_file;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x2a);
    plyr_file_tbl[1] = (char *)&plyr_file.scrap;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x28);
    plyr_file_tbl[2] = (char *)&plyr_file.oldbook;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x1a);
    plyr_file_tbl[3] = (char *)&plyr_file.photograph;
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,10);
    plyr_file_tbl[4] = (char *)&plyr_file.map;
  }
  return;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (char *)v;
}

static void global constructors keyed to AllPlyrFileInit() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
