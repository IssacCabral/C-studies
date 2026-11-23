
#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void) {
  printf("CHAR:\n");
  printf("  signed:   %d a %d\n", SCHAR_MIN, SCHAR_MAX);
  printf("  unsigned: 0 a %u\n\n", UCHAR_MAX);

  printf("SHORT:\n");
  printf("  signed:   %d a %d\n", SHRT_MIN, SHRT_MAX);
  printf("  unsigned: 0 a %u\n\n", USHRT_MAX);

  printf("INT:\n");
  printf("  signed:   %d a %d\n", INT_MIN, INT_MAX);
  printf("  unsigned: 0 a %u\n\n", UINT_MAX);

  printf("LONG:\n");
  printf("  signed:   %ld a %ld\n", LONG_MIN, LONG_MAX);
  printf("  unsigned: 0 a %lu\n\n", ULONG_MAX);

  printf("FLOAT:\n");
  printf("  %e a %e\n\n", FLT_MIN, FLT_MAX);

  printf("DOUBLE:\n");
  printf("  %e a %e\n\n", DBL_MIN, DBL_MAX);

  printf("LONG DOUBLE:\n");
  printf("  %Le a %Le\n", LDBL_MIN, LDBL_MAX);

  return 0;
}
