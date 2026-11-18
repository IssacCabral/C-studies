#include <stdio.h>

/* Ver: notes/concepts/character-constants.md */

int main() {
  int current_character;
  int line_count = 0;

  while((current_character = getchar()) != EOF) {
    if (current_character == '\n') ++line_count;
  }

  printf("%d\n", line_count);

  return 0;
}
