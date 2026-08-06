#include <stdio.h>

/*
 * Em C, uma constante de caractere (ex.: 'A' ou '\n') representa um
 * valor inteiro correspondente ao código do caractere (ASCII, por exemplo).
 *
 * Por isso, ela pode ser atribuída tanto a uma variável do tipo char
 * quanto a uma variável do tipo int.
 *
 * Exemplo:
 *   char c = 'A'; // armazena o caractere
 *   int  n = 'A'; // armazena o código inteiro (65 em ASCII)
 */

/*
 * Em C, um caractere é representado por um valor inteiro correspondente
 * ao seu código na tabela de caracteres (ex.: ASCII).
 *
 * Por isso, constantes de caractere como 'A' e '\n' podem ser usadas em
 * expressões e comparações. Por exemplo:
 *
 *     current_character == '\n'
 *
 * equivale a comparar o código inteiro do caractere de quebra de linha,
 * mas é muito mais legível e independente da codificação utilizada.
 *
 * Atenção: '\n' (aspas simples) é um caractere; "\n" (aspas duplas) é
 * uma string contendo os caracteres '\n' e o terminador '\0'.
*/

int main() {
  int current_character;
  int line_count = 0;

  while((current_character = getchar()) != EOF) {
    if (current_character == '\n') ++line_count;
  }

  printf("%d\n", line_count);

  return 0;
}
