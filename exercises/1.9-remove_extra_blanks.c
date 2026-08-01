#include <stdio.h>

#define BLANK ' '

/*
 * Copia a entrada para a saída, substituindo qualquer sequência de
 * um ou mais espaços consecutivos por um único espaço.
 *
 * ENTRADA:
 * Hello   world
 * SAIDA:
 * Hello world
*/

int main() {
  int c;
  int previous;

  while ((c = getchar()) != EOF) {
    if (c != BLANK) {
      printf("%c", c);
      previous = c;
      continue;
    }
    if (c == BLANK && previous != BLANK) {
      printf("%c", c);
      previous = c;
      continue;
    }
    previous = c;
  }

  return 0;
}
