#include "line.h"
#include <stdio.h>

int main() {
  int len; // current line length
  extern int max;
  extern char longest[];

  max = 0;
  while ((len = get_line()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}
