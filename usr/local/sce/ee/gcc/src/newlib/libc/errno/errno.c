// STATUS: NOT STARTED

#include "errno.h"

int* __errno() {
  return &_impure_ptr->_errno;
}
