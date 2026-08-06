/*

* Em C, uma string é representada por um array de caracteres terminado pelo
* caractere nulo ('\0'). O array por si só NÃO recebe automaticamente esse
* terminador quando é preenchido manualmente; ele apenas reserva espaço na
* memória. Por isso, após ler todos os caracteres da linha, é necessário
* inserir explicitamente o '\0' para indicar onde a string termina.
*
* Exemplo:
* Entrada: "hi"
*
* Antes do terminador:
* +---+---+----+----+
* | h | i | ?  | ?  |
* +---+---+----+----+
*
* Depois de s[i] = '\0':
* +---+---+----+----+
* | h | i | \0 | ?  |
* +---+---+----+----+
*
* Funções como printf, strlen, strcpy e strcmp dependem desse terminador
* para saber onde a string termina. O caractere '\0' possui valor numérico
* zero (0). Por isso, uma inicialização como:
*
* ```
  char s[10] = {0};
  ```
*
* preenche todas as posições do array com o valor zero, que para um char
* corresponde exatamente ao caractere nulo '\0'.
*/


#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int getline(char line[], int maxLine);
void copy(char to[], char from[]);

int main() {
  int len;                 /* current line length */
  int max;                 /* maximum length seen so far */
  char line[MAXLINE];      /* current input line */
  char longest[MAXLINE];   /* longest line saved here */

  max = 0;
  while((len = getline(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    printf("%s", longest);
  }

  return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
  int i = 0;
  i = 0;
  while ((to[i] = from[i]) != '\0') {
    i++;
  }
}
