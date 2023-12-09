// STATUS: NOT STARTED

#include "assert.h"

void __assert(char *file, int line, char *failedexpr) {
  fiprintf(_impure_ptr->_stderr,"assertion \"%s\" failed: file \"%s\", line %d\n");
                    /* WARNING: Subroutine does not return */
  abort();
}
