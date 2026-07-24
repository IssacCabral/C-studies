#include <stdio.h>

int main() {
  int num;
  float fnum;

  printf("Entre com um inteiro e um float: ");
  scanf("%d %f", &num, &fnum);
  printf("num: %d, fnum: %.2f", num, fnum);
  return 0;
}
