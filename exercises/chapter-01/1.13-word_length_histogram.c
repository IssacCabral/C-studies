/*
 * Exercício 1-13 - Histograma do tamanho das palavras
 *
 * Escreva um programa que imprima um histograma dos tamanhos das palavras
 * presentes na entrada.
 *
 * O programa deve ler palavras da entrada padrão, contar quantas palavras
 * possuem cada tamanho e exibir um histograma representando a frequência
 * de cada comprimento de palavra.
 *
 * Exemplo de entrada:
 *
 * hello world this is c
 *
 * Tamanhos das palavras:
 * hello -> 5 caracteres
 * world -> 5 caracteres
 * this  -> 4 caracteres
 * is    -> 2 caracteres
 * c     -> 1 caractere
 *
 * Saída esperada (histograma horizontal):
 *
 * 1: *
 * 2: *
 * 3:
 * 4: *
 * 5: **
 *
 * Cada '*' representa uma palavra que possui aquele tamanho.
 *
 * O exercício também menciona que desenhar o histograma na orientação
 * vertical é mais desafiador, mas a orientação horizontal é suficiente.
 */


#include <stdio.h>

#define MAXLEN 50
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main() {
  int c, state;
  int arr[MAXLEN] = {0};
  int word_length = 0;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c != ' ' && c != '\n' && c != '\t') {
      ++word_length;
      state = IN;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        arr[word_length]++;
        state = OUT;
        word_length = 0;
      }
    }
  }

  for (int i = 1; i < MAXLEN; i++) {
    int contador_de_bolinhas = arr[i];
    printf("%d: ", i);
    for (int j = 0; j < contador_de_bolinhas; j++) {
      putchar('*');
    }
    putchar('\n');
  }

  return 0;
}
