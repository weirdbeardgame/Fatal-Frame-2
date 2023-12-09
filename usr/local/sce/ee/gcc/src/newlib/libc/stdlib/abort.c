// STATUS: NOT STARTED

#include "abort.h"

void abort() {
  raise(6);
  _exit(1);
  return;
}
