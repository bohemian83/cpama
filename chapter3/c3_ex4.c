#include <stdio.h>

int main(void) {

    int area_code, first_part, second_part;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d", &area_code, &first_part, &second_part);

    printf("You entered: %d.%d.%d\n", area_code, first_part, second_part);

    return 0;
}