// STATUS: NOT STARTED

#include "FileSt.h"

static int FileStLabelList[2][2] = {
	/* [0] = */ {
		/* [0] = */ 555,
		/* [1] = */ 886
	},
	/* [1] = */ {
		/* [0] = */ 3087,
		/* [1] = */ 3380
	}
};

int FileStGetType(int label_id) {
  int iVar1;
  
  iVar1 = 1;
  if ((FileStLabelList[0][0] < label_id) && (iVar1 = 0, FileStLabelList[0][1] <= label_id)) {
    iVar1 = 1;
  }
  return iVar1;
}
