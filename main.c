#include <stdio.h>

#define IN 1
#define OUT 0

#define BLANK ' '
#define TAB '\t'
#define NEW_LINE '\n'

/**
 * palavra -> sequência de caracteres que não contenha espaços, tabulações ou
 * quebras de linha
 */

int isInWord(int character) {
  if (character == BLANK || character == TAB || character == NEW_LINE) {
    return 0;
  }
  return 1;
}

int main() {
  int state = OUT;
  int c;
  int word_count = 0;

  while ((c = getchar()) != EOF) {
    if (isInWord(c)) {
      if (state == OUT) {
        state = IN;
        word_count++;
      }
    } else {
      state = OUT;
    }
  }

  printf("Quantidade de palavras: %d\n", word_count);

  return 0;
}
