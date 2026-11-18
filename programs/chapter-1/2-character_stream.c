#include <stdio.h>

/* Ver: notes/concepts/stream-and-buffer.md
 *      notes/concepts/getchar-and-eof.md */

void printWithGetChar() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}

int main(void) { printWithGetChar(); }
