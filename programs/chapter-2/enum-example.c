#include <stdio.h>

enum order_status { PENDING, PROCESSING, SHIPPED, DELIVERED, CANCELED };

int main() {
  enum order_status status = SHIPPED;

  printf("Order status: ");

  switch (status) {
  case PENDING:
    printf("Pending\n");
    break;

  case PROCESSING:
    printf("Processing\n");
    break;

  case SHIPPED:
    printf("Shipped\n");
    break;

  case DELIVERED:
    printf("Delivered\n");
    break;

  case CANCELED:
    printf("Canceled\n");
    break;
  }

  return 0;
}
