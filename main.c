#include <stdint.h>
#include <stdlib.h>
#include <xc.h>

#include "app/initialize.h"
#include "lib/function.h"

int main(void) {
  while (kSuccess != app_initialize()) {
    __asm("RESET");
  }
  while (1) {
  }
  exit(EXIT_SUCCESS);
}
