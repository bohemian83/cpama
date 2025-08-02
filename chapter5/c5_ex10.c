#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int grade;

  printf("Enter your grade (0-100): ");
  scanf("%d", &grade);

  int tens = (grade / 10);

  switch (tens) {
  case 10:
  case 9:
    printf("Letter grade: A.\n");
    break;
  case 8:
    printf("Letter grade: B.\n");
    break;
  case 7:
    printf("Letter grade: C.\n");
    break;
  case 6:
    printf("Letter grade: D.\n");
    break;
  default:
    printf("Letter grade: F.\n");
  }

  return EXIT_SUCCESS;
}
