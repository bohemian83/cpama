#include <stdio.h>

int main(void) {
    // calculates the remaining balance on a loan after the first, second, and third monthly payments:

    float loan_amount;
    float interest_rate;
    float monthly_payment;
    float remaining_balance;

    printf("Enter the loan amount: ");
    scanf("%f", &loan_amount);
    printf("Enter the interest rate in percent: ");
    scanf("%f", &interest_rate);
    printf("Enter the monthly payment: ");
    scanf("%f", &monthly_payment);

    remaining_balance = loan_amount * (1 + interest_rate / (100 * 12)) - monthly_payment;
    printf("Remaining balance after first payment: %.2f\n", remaining_balance);
    remaining_balance = remaining_balance * (1 + interest_rate / (100 * 12)) - monthly_payment;
    printf("Remaining balance after second payment: %.2f\n", remaining_balance);
    remaining_balance = remaining_balance * (1 + interest_rate / (100 * 12)) - monthly_payment;
    printf("Remaining balance after third payment: %.2f\n", remaining_balance);
    return 0;
}