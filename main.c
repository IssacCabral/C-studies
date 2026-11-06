// #include <stdio.h>

// // Symbolic constants
// #define LOWER 0
// #define UPPER 300
// #define STEP 20

// void printHeader() {

// }

// void printConversion() {

// }

// int main() {
//   int fahr, celsius;
//   int lower, upper, step;

//   lower = 0;
//   upper = 300;
//   step = 20;

//   fahr = lower;
//   while (fahr <= upper) {
//     celsius = 5 * (fahr - 32) / 9;
//     printf("%d\t%d\n", fahr, celsius);
//     fahr += step;
//   }

//   return 0;
// }

#include <stdio.h>

int main() {
  int num1 = 1;

  printf("Tamanho do Int: %zu\n", sizeof(int));
  printf("Tamanho do Float: %zu\n", sizeof(float));
  printf("Tamanho do char: %zu\n", sizeof(char));
  printf("Tamanho do short: %zu\n", sizeof(short));
  printf("Tamanho do long: %zu\n", sizeof(long));
  printf("Tamanho do double: %zu\n", sizeof(double));

  unsigned int num2 = -2;

  printf("%d\n", num2);
}
