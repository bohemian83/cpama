#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int m, n, remainder;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  do {
    if (n == 0) {
      break;
    }

    remainder = m % n;
    m = n;
    n = remainder;

  } while (n > 0);

  printf("The greatest common divisor is %d.\n", m);

  return EXIT_SUCCESS;
}
