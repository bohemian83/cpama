#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int day, month, year, day_min = 31, month_min = 12, year_min = 9999;

  do {
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    if (day + month + year == 0) {
      break;
    } else if ((year * 365 + month * 30 + day) <
               (year_min * 365 + month_min * 30 + day_min)) {
      day_min = day;
      month_min = month;
      year_min = year;
    }
  } while (day + month + year != 0);

  printf("%d/%d/%d is the earliest date.\n", month_min, day_min, year_min);
  return EXIT_SUCCESS;
}
