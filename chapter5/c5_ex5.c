#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  float income, tax_due;

  printf("Enter your income: ");
  scanf("%f", &income);

  if (income <= 750) {
    tax_due = 7.5;
  } else if (income <= 2250) {
    tax_due = 7.5 + (income - 750) * 0.02;
  } else if (income <= 3750) {
    tax_due = 37.5 + (income - 2250) * 0.03;
  } else if (income <= 5250) {
    tax_due = 82.5 + (income - 3750) * 0.04;
  } else if (income <= 7000) {
    tax_due = 142.5 + (income - 5250) * 0.05;
  } else {
    tax_due = 230 + (income - 7000) * 0.06;
  }

  printf("Tax due: %.2f\n", tax_due);

  return EXIT_SUCCESS;
}
