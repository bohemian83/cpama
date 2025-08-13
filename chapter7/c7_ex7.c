#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int num1, denom1, num2, denom2, result_num, result_denom;
  char ch;

  printf("Enter two fractions separated by an operator (+, -, *, /): ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);

  switch (ch) {
  case '+':
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);
    break;
  case '-':
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
    printf("The difference is %d/%d\n", result_num, result_denom);
    break;
  case '*':
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    printf("The multiplication is %d/%d\n", result_num, result_denom);
    break;
  case '/':
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
    printf("The division is %d/%d\n", result_num, result_denom);
    break;
  default:
    printf("null");
  }

  return EXIT_SUCCESS;
}
