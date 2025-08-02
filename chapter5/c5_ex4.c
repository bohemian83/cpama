#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int knots;
  printf("Give the wind speed in knots: ");
  scanf("%d", &knots);

  if (knots < 1) {
    printf("Calm.\n");
  } else if (knots <= 3) {
    printf("Light air.\n");
  } else if (knots <= 27) {
    printf("Breeze.\n");
  } else if (knots <= 47) {
    printf("Gale.\n");
  } else if (knots <= 63) {
    printf("Storm.\n");
  } else {
    printf("Hurricane\n");
  }

  return EXIT_SUCCESS;
}
