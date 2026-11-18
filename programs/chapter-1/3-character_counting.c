#include <stdio.h>

/* count characters from stdin until EOF
 * Ver: notes/concepts/integer-types-for-counting.md */
void countCharactersV1() {
  long nc;
  nc = 0;
  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
}

/* Ver: notes/concepts/null-statement.md */
void countCharactersV2() {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}

int main() {
  countCharactersV2();
  return 0;
}
