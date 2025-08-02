#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int shares;
  float their_commision, our_commision, value, share_price;

  printf("Enter number of shares and price per share, separated by commas: ");
  scanf("%d, %f", &shares, &share_price);

  value = shares * share_price;

  if (value < 2500.00f)
    our_commision = 30.00f + .017f * value;
  else if (value < 6250.00f)
    our_commision = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    our_commision = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    our_commision = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    our_commision = 155.00f + .0011f * value;
  else
    our_commision = 255.00f + .0009f * value;
  if (our_commision < 39.00f)
    our_commision = 39.00f;

  if (shares < 2000) {
    their_commision = 33.00 + shares * 0.03;
  } else {
    their_commision = 33.00 + shares * 0.02;
  }

  printf("Our commission: $%.2f\n", our_commision);
  printf("Their commission: $%.2f\n", their_commision);
  return EXIT_SUCCESS;
}
