
// checks if a Universal Product Code is valid

#include <stdio.h>

int main(void) {

  int d, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, first_sum, second_sum,
      total_sum, check_digit;

  printf("Enter the UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5,
        &i6, &i7, &i8, &i9, &i10, &i11);

  first_sum = d + i2 + i4 + i6 + i8 + i10;
  second_sum = i1 + i3 + i5 + i7 + i9;
  total_sum = 3 * first_sum + second_sum;
  check_digit = 10 - ((total_sum % 10) % 10);

  if (check_digit == i11) {
    printf("VALID\n");
  } else {
    printf("NOT VALID\n");
  }

  return 0;
}
