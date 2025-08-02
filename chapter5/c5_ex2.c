#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// the program asks the user for a 24-hour time, then displays the time in
// 12-hour
int main(int argc, char *argv[]) {
  int hours, minutes;
  printf("Enter the time in 24 hour format: ");
  scanf("%d:%d", &hours, &minutes);

  if (hours == 12 && minutes == 0) {
    printf("The time is 12:00 am.\n");
  } else if (hours == 0 && minutes == 0) {
    printf("The time is: 12:00 pm.\n");
  } else if (hours < 12 && minutes <= 59) {
    printf("The time is: %d:%2.2d am.\n", hours, minutes);
  } else if (hours == 12 && minutes <= 59) {
    printf("The time is: %d:%2.2d pm.\n", hours, minutes);
  } else {
    printf("The time is %d:%2.2d pm.\n", hours - 12, minutes);
  }

  return EXIT_SUCCESS;
}
