#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int ch, score = 0;

  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      score += 1;
      break;
    case 'D':
    case 'G':
      score += 2;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      score += 3;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      score += 4;
      break;
    case 'K':
      score += 5;
      break;
    case 'J':
    case 'X':
      score += 8;
      break;
    case 'Q':
    case 'Z':
      score += 10;
      break;
    default:
      /* non-letter: no points */ break;
    }
  }
  printf("The total score is: %d\n", score);
  return EXIT_SUCCESS;
}
