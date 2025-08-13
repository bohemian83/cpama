#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // i

  int payments;
  float interest, amount, monthly_rate;

  printf("Enter the amount: ");
  scanf("%f", &amount);
  printf("Enter the interest rate: ");
  scanf("%f", &interest);
  interest /= 100;
  printf("Enter the number of payments: ");
  scanf("%d", &payments);
  printf("Enter the monthly rate: ");
  scanf("%f", &monthly_rate);

  int i = 1;
  do {
    amount -= monthly_rate;
    amount += amount * interest / 12;
    if (amount <= 0) {
      printf("Amount repaid in full with payment %d.\n", i);
      break;
    }
    printf("Amount after %d payments, %.2f.\n", i, amount);
    i++;
  } while (i < payments);

  return EXIT_SUCCESS;
}
