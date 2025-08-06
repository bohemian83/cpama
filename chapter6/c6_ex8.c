#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  // prints a month in table format
  //
  int days, start_day;

  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter start day of the week: (1=Mon, 7=Sun): ");
  scanf("%d", &start_day);

  printf("%*s", 3 * (start_day - 1), "");
  for (int i = 1; i <= days; i++) {
    printf("%3d", i);
    if ((i + start_day - 1) % 7 == 0) {
      printf("\n");
    }
  }
  return EXIT_SUCCESS;
}
