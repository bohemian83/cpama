#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // prints all even squares up to the integer the user entered
  //
  int n, sq;

  printf("Enter an integer: ");
  scanf("%d", &n);

  for (sq = 2; sq * sq <= n; sq += 2) {
    printf("%d\n", sq * sq);
  }
  return EXIT_SUCCESS;
}
