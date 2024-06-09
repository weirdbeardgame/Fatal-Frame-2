#ifndef MMANGE_H
#define MMANGE_H

typedef enum
{
  OL_LOAD_ERR_OK = 0,
  OL_LOAD_ERR_MEMORY_LACK = 1,
  OL_LOAD_ERR_WORK_LACK = 2,
  OL_LOAD_ERR_FORCE_DWORD = -1
} OL_LOAD_ERR;

typedef OL_LOAD_ERR MMANAGE_ERR;

MMANAGE_ERR mmanageReqItemMdl(/* a0 4 */ int mdl_no);

#endif// MMANGE_H
