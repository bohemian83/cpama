#include <stdio.h>

int main(void) {

    int gs1_prefix;
    int group_id;
    int publisher_code;
    int item_no;
    int check_digit;

    printf("Enter ISBN number: ");
    scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publisher_code, &item_no, &check_digit);

    printf("GS1 prefix: %d\n", gs1_prefix);
    printf("Group identifier: %d\n", group_id);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_no);
    printf("Check digit: %d\n", check_digit);

    return 0;
}