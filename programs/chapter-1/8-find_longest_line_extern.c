/*
 * VARIÁVEIS EXTERNAS
 *
 * Uma variável definida fora de qualquer função é uma variável externa
 * (global) e pode ser utilizada por diferentes funções.
 *
 * DEFINIÇÃO:
 *     int max;
 *
 * Cria a variável e reserva espaço de memória.
 *
 * DECLARAÇÃO:
 *     extern int max;
 *
 * Apenas informa ao compilador que a variável existe em outro lugar.
 * Não cria uma nova variável nem reserva armazenamento.
 *
 * Se a definição da variável externa aparece antes de seu uso,
 * o extern pode ser omitido.
 *
 * Em programas divididos em vários arquivos, normalmente usamos
 * extern para informar aos outros arquivos sobre variáveis definidas
 * em outro arquivo. Essas declarações podem ser colocadas em um
 * arquivo .h (header).
 *
 * CUIDADO:
 * Variáveis externas facilitam o compartilhamento de dados, mas seu
 * uso excessivo aumenta o acoplamento. Qualquer função pode alterar
 * esses dados, tornando o programa mais difícil de entender,
 * testar e modificar.
 *
 * Sempre que possível, passar dados por parâmetros torna as
 * dependências da função mais explícitas e mantém as funções mais
 * genéricas e reutilizáveis.
 */

#include <stdio.h>

#define MAXLINE 1000      /* maximum input line size */

int max;                    /* maximum length seen so far */
char line[MAXLINE];         /* current input line */
char longest[MAXLINE];      /* longest line saved here */

int getline(void);
void copy(void);

/* print longest input line; specialized version */
int main() {
  int len;                 /* current line length */
  extern int max;
  extern char longest[];

  max = 0;
  while((len = getline()) > 0) {
    if (len > max) {
      max = len;
      copy();
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}

/* getline: specialized version */
int getline(void) {
  int c, i;
  extern char line[];

  for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    line[i] = c;
  }

  if (c == '\n') {
    line[i] = c;
    i++;
  }

  line[i] = '\0';
  return i;
}

/* copy: specialized version */
void copy(void) {
  int i;
  extern char line[], longest[];

  i = 0;
  while((longest[i] = line[i]) != '\0') {
    i++;
  }
}
