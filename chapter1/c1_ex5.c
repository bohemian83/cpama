#include <stdio.h>

int main(void) {
    // Calculates the the polynomial 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6 for a given x
    float x;

    printf("Enter a value for x: ");
    scanf("%f", &x);
    float result = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("The result of the polynomial is: %.2f\n", result);
    return 0;
}