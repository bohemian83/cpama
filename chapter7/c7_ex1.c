#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n;
  long i;

  printf("This prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    printf("%18ld%25ld\n", i, i * i);
  }

  return EXIT_SUCCESS;
}
