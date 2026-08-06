/**
 * Exercício 1-17. Escreva um programa para imprimir todas as linhas de entrada com mais de 80 caracteres.
*/

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */
#define LIMIT 10

int getline_k(char line[], int max);

int main() {
  int len;            /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = getline_k(line, MAXLINE)) > 0) {
    if (len > LIMIT) {
      printf("%s", line);
    }
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
