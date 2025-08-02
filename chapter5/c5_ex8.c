
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int hours, minutes, min_since_midnight;

  printf("Enter a 24 hour time: ");
  scanf("%d:%d", &hours, &minutes);

  min_since_midnight = hours * 60 + minutes;

  if (min_since_midnight <= 8 * 60) {
    printf("Closest departure time is 8:00am, arriving at 10:16am.\n");
  } else if (min_since_midnight <= 9 * 60 + 43) {
    printf("Closest departure time is 9:43am, arriving at 11:52am.\n");
  } else if (min_since_midnight <= 11 * 60 + 19) {
    printf("Closest departure time is 11:19am, arriving at 1:31pm.\n");
  } else if (min_since_midnight <= 12 * 60 + 47) {
    printf("Closest departure time is 12:47pm, arriving at 3:00pm.\n");
    // etc
  }

  return EXIT_SUCCESS;
}
