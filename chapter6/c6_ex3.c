#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int nom, dem, rem, m, n;

  printf("Enter a fraction: ");
  scanf("%d/%d", &nom, &dem);

  m = nom;
  n = dem;

  do {
    if (n == 0) {
      break;
    }

    rem = m % n;
    m = n;
    n = rem;

  } while (n > 0);

  printf("GCD: %d.\n", m);
  printf("In lowest terms: %d/%d.\n", nom / m, dem / m);

  return EXIT_SUCCESS;
}
