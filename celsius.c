#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP  20    /* step size */

void printHeader() {
  printf("%10s %10s\n", "Fahrenheit", "Celsius");
  printf("%10s %10s\n", "----------", "-------");
}

void printConversion() {
  float fahr, celsius;
  float lower, upper, step;

  for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%10.0f %10.1f\n", fahr, celsius);
  }
}

int main() {
  printHeader();
  printConversion();
  return 0;
}
