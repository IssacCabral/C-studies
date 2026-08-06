/*

* Copia a entrada para a saída, substituindo caracteres especiais por
* suas representações visíveis:
*
* '\t' -> "\t"
* '\b' -> "\b"
* '\' -> "\\"
*
* O objetivo é tornar tabs, backspaces e barras invertidas visíveis
* de forma inequívoca na saída.

*/
#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    switch (c) {
      case TAB:
        printf("\\t");
        break;
      case BACKSPACE:
        printf("\\b");
        break;
      case BACKSLASH:
        printf("\\\\");
        break;
      default:
        printf("%c", c);
    }
  }

  return 0;
}
