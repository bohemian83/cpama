#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i = 0;

  printf("Enter an integer: ");
  scanf("%d", &i);

  printf("The reversal is: ");

  do {
    printf("%d", i % 10);
    i = i / 10;
  } while (i > 0);

  printf(".\n");

  return EXIT_SUCCESS;
}
