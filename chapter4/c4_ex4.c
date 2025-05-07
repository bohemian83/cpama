#include <stdio.h>

int main(void) {

    int i, first, second, third, fourth, fifth;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &i);
    fifth = i%8;
    fourth = (i/8)%8;
    third = (i/64)%8;
    second = (i/512)%8;
    first = (i/4096)%8;
    printf("In octal your number is: %d%d%d%d%d\n", first, second, third, fourth, fifth);

    return 0;
}