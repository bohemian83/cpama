#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n;
  double e = 1, e_prev, factorial = 1, epsilon;

  printf("Enter an integer: ");
  scanf("%d", &n);
  printf("Enter epsilon: ");
  scanf("%lf", &epsilon);

  for (int i = 1; i <= n; i++) {
    factorial = 1;
    for (int j = 1; j <= i; j++) {
      factorial *= j;
    }
    e_prev = e;
    e += 1 / factorial;
    if ((e - e_prev) < epsilon) {
      break;
    }
  }

  printf("The approximation of e is: %lf\n", e);
  return EXIT_SUCCESS;
}
