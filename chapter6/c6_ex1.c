#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float i, max;
  i = 0.0f;
  max = 0.0f;

  for (;;) {
    printf("Enter a number: ");
    scanf("%f", &i);
    if (i > max) {
      max = i;
    } else if (i <= 0) {
      break;
    }
  };

  printf("The largest number entered is %.2f.\n", max);

  return EXIT_SUCCESS;
}
