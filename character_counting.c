#include <stdio.h>

/*
 * Conta a quantidade de caracteres lidos da entrada (stdin) até EOF.
 *
 * O contador é do tipo long porque a quantidade de caracteres pode ser
 * maior do que um int comporta em algumas arquiteturas. O especificador
 * "%ld" informa ao printf que a variável é um long.
*/
void countCharactersV1() {
  long nc;
  nc = 0;
  while (getchar() != EOF) {
    ++nc;
  }
  printf("%ld\n", nc);
}

/*
 * O corpo do for pode ser uma instrução vazia (';'), chamada de
 * null statement.
 *
 * Nesse exemplo, todo o trabalho é feito no cabeçalho do for:
 * - inicializa nc;
 * - getchar() lê um caractere por iteração;
 * - ++nc incrementa o contador.
 *
 * Como não há nenhuma instrução adicional para executar, o corpo
 * do loop é apenas ';'.
 */
void countCharactersV2() {
  double nc;
  for (nc = 0; getchar() != EOF; ++nc);
  printf("%.0f\n", nc);
}

int main() {
  countCharactersV2();
  return 0;
}
