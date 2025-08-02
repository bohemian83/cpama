#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int day_first, month_first, year_first, day_second, month_second, year_second;

  printf("Enter the first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month_first, &day_first, &year_first);

  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &month_second, &day_second, &year_second);

  if ((year_first * 365 + month_first * 30 + day_first) <
      (year_second * 365 + month_second * 30 + day_second)) {
    printf("Second date is later than first date.\n");
  } else {
    printf("First date later than second date.\n");
  }
  return EXIT_SUCCESS;
}
