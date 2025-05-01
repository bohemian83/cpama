#include <stdio.h>

int main(void) {

    float amount;
    float tax_rate;

    printf("Enter the amount of money in dollars and cents (e.g. 10.00): ");
    scanf("%f", &amount);

    printf("Enter the tax rate in percent (e.g. 5.0): ");
    scanf("%f", &tax_rate);

    float total = amount + (amount * tax_rate / 100);

    printf("Total amount after %.1f tax: $%.2f\n", tax_rate, total);

    return 0;
}