#include <stdio.h>

int main(void) {

    int unit_no;
    float unit_price;
    int year, month, day;

    printf("Enter item number: ");
    scanf("%d", &unit_no);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%-d\t$%6.2f\t%d/%d/%d\n", unit_no, unit_price, month, day, year);

    return 0;
}