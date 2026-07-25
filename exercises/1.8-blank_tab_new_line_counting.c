#include <stdio.h>

#define BLANK ' '
#define TAB '\t'
#define NEW_LINE '\n'

int main() {
  int blank_count = 0;
  int tab_count = 0;
  int new_line_count = 0;
  int c;

  while((c = getchar()) != EOF) {
    switch (c) {
      case BLANK:
        blank_count++;
        break;
      case TAB:
        tab_count++;
        break;
      case NEW_LINE:
        new_line_count++;
        break;
    }
  }

  printf("Blank count: %d\n", blank_count);
  printf("Tab count: %d\n", tab_count);
  printf("New line count: %d\n", new_line_count);
}
