#include <stdio.h>

int main(void) {

    int i;

    printf("Enter a 3-digit number: ");
    scanf("%d", &i);

    printf("The reversal is: %d%d%d\n", (i%10)%10, (i/10)%10 , (i/10)/10);

    return 0;
}