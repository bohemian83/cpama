#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // rewrites the square3.c program from CPAMA
  //
  int i, n, odd, square;
  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);
  // i = 1;
  odd = 3;
  for (square = 1, i = 1; i <= n; odd += 2, ++i) {
    printf("%10d%10d\n", i, square);
    // ++i;
    square += odd;
  }
  return EXIT_SUCCESS;
}
