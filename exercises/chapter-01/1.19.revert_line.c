#include <stdio.h>

#define MAXLINE 1000

int getline_k(char line[], int max);
void revert(char line[], int len);

int main() {
  int len;              /* current line length */
  char line[MAXLINE];   /* current input line */

  while ((len = getline_k(line, MAXLINE)) > 0) {
    revert(line, len);
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

void revert(char line[], int len) {
  int left = 0, right = len - 2;

  while(left < right) {
    int previousLeft = line[left];

    line[left] = line[right];
    line[right] = previousLeft;

    left++;
    right--;
  }
}
