#include <stdio.h>

/**
 * Buffer e Stream
 * Stream (fluxo) → é um conceito lógico, a forma como o programa enxerga os dados.
 * Buffer → é uma área de memória usada para armazenar temporariamente esses dados.
 */

void printWithGetChar() {
  /*
   * getchar() lê apenas UM caractere por chamada.
   *
   * Em C, a entrada (stdin) é tratada como um stream (fluxo) de caracteres.
   * Quando digitamos uma linha e pressionamos Enter, o sistema coloca os
   * caracteres em um buffer de entrada, por exemplo:
   *
   * Entrada: "issac\n"
   * Buffer:  ['i']['s']['s']['a']['c']['\n']
   *
   * Cada chamada de getchar() consome (remove) o próximo caractere desse
   * buffer. Ou seja:
   *
   * 1ª chamada -> 'i'
   * Loop:
   *   imprime 'i' -> lê 's'
   *   imprime 's' -> lê 's'
   *   imprime 's' -> lê 'a'
   *   imprime 'a' -> lê 'c'
   *   imprime 'c' -> lê '\n'
   *   imprime '\n' -> espera novos dados ou EOF
   *
   * O loop termina somente quando getchar() retorna EOF (fim da entrada).
  */
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }

  /*
   * getchar() retorna um int, não um char.
   *
   * Motivo:
   * - Se houver um caractere disponível, retorna seu código (ex.: 'A', '0', '\n').
   * - Se não houver mais entrada, retorna EOF (End Of File).
   *
   * Como EOF é um valor especial que não representa um caractere válido
   * (geralmente -1), a variável precisa ser do tipo int para armazenar
   * tanto qualquer caractere quanto o valor EOF sem ambiguidades.
  */
}

int main(void) {
  printWithGetChar();
}
