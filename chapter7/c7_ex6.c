#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("sizeof(int) is %zu bytes.\n", sizeof(int));
  printf("sizeof(short) is %zu bytes.\n", sizeof(short));
  printf("sizeof(long) is %zu bytes.\n", sizeof(long));
  printf("sizeof(float) is %zu bytes.\n", sizeof(float));
  printf("sizeof(double) is %zu bytes.\n", sizeof(double));
  printf("sizeof(long double) is %zu bytes.\n", sizeof(long double));
  return EXIT_SUCCESS;
}
