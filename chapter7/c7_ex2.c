#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int n, i;
  printf("This prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d ", &n);

  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, i * i);
    if (i % 24 == 0) {
      printf("Press enter to continue...");
      getchar();
      while ((getchar()) != '\n') {
      }
    }
  }
  return EXIT_SUCCESS;
}
