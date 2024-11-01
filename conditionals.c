#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  // Create a number that’s 0 or 1
  srand(time(NULL));
  int coin = rand() % 2;

  // If number is 0: Heads
  // If it is not 0: Tails
  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }

  int grade1 = 90;
  int grade2 = 59;

  if (grade1 > 60) {
    printf("Pass\n");
  }

  if (grade2 < 60) {
    printf("Fail\n");
  }

  if (grade1 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  if (grade2 > 60) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  int a = 10;
  int b = -5;

  if (a > 0 || b > 0) {
    printf("One of the integers is positive\n");
  }

  if (a > 0 && !(b > 0)) {
    printf("One is positive and another is negative or zero\n");
  }

  double ph = 7.9;

  if (ph > 7) {
    printf("Basic\n");
  } else if (ph < 7) {
    printf("Acidic\n");
  } else {
    printf("Neutral\n");
  }
  
}