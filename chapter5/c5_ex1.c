#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// this program calculates how many digits a number has
int main(int argc, char *argv[]) {
  int i;

  printf("Enter a 3-digit number: ");
  scanf("%d", &i);

  if (0 <= i && i <= 9) {
    printf("One digit.\n");
  } else if (10 <= i && i <= 99) {
    printf("Two digits.\n");
  } else if (100 <= i && i <= 999) {
    printf("Three digits.\n");
  } else {
    printf("Four or more digits.\n");
  }

  return EXIT_SUCCESS;
}
