#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a, b, c, d, max, min;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &a, &b, &c, &d);

  max = d;
  min = a;

  if (max < a) {
    max = a;
    min = a;
  }
  if (max < b) {
    max = b;
  }
  if (max < c) {
    max = c;
  }

  if (min > b) {
    min = b;
  }
  if (min > c) {
    min = c;
  }
  if (min > d) {
    min = d;
  }

  printf("Max: %d\n", max);
  printf("Min: %d\n", min);

  return EXIT_SUCCESS;
}

// More efficient implementation with just four if statements
// 1) Order (a,b) so lo1 <= hi1
// int lo1 = a, hi1 = b;
// if (a > b) { int t = lo1; lo1 = hi1; hi1 = t; }
//
// // 2) Order (c,d) so lo2 <= hi2
// int lo2 = c, hi2 = d;
// if (c > d) { int t = lo2; lo2 = hi2; hi2 = t; }
//
// // 3) Max is the larger of the pairwise maxima
// int max = hi1;
// if (hi2 > max) max = hi2;
//
// // 4) Min is the smaller of the pairwise minima
// int min = lo1;
// if (lo2 < min) min = lo2;
