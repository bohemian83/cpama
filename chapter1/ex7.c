#include <stdio.h>

int main(void) {

    int dollars;
    int twenties;
    int tens;
    int fives;
    int ones;

    printf("Enter the dollar amount: ");
    scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars = dollars - twenties * 20;
    tens = dollars / 10;
    dollars = dollars - tens * 10;
    fives = dollars / 5;
    dollars = dollars - fives * 5;
    ones = dollars;

    printf("The amount can be given as:\n");
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);

    return 0;
}