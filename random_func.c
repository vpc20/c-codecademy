#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int a, int b) {
  int randomNumber = rand() % (b - a + 1) + a;
  return randomNumber;
}

void main() {
  srand(time(NULL));
  printf("getRandomNumber\n");
  printf("%d\n", getRandomNumber(1, 5));
}
