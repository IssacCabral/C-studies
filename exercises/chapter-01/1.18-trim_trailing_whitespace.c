/**
 * Exercício 1-18. Limpe a entrada removendo espaços e tabulações desnecessários no
 * final de cada linha e ignore linhas completamente vazias
*/

#include <stdio.h>

#define MAXLINE 1000

int getline_k(char line[], int max);

int main() {
  int len;            /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = getline_k(line, MAXLINE)) > 0) {
    int found_valid_character = 0;

    for (int i = 0; i < len - 1; i++) {
      if (line[i] != ' ' && line[i] != '\t') {
        found_valid_character = 1;
        break;
      }
    }

    if (found_valid_character) {
      for (int i = len - 2; line[i] == ' ' || line[i] == '\t'; --i) {
        if (line[i - 1] != ' ' && line[i - 1] != '\t') {
          line[i] = '\n';
          line[i + 1] = '\0';
          break;
        }
      }
    } else continue;


    printf("%s", line);
  }

  return 0;
}

int getline_k(char line[], int max) {
  int c, i;

  for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';

  return i;
}
