#include <stdio.h>

int main() {
  //   int pin = 0;
  //   int tries = 0;

  //   printf("BANK OF CODECADEMY:\n");
  //   printf("Enter your PIN: ");
  //   scanf("%d", &pin);

  //   tries++;

  //   while (pin != 1234 && tries < 3) {
  //     printf("Enter your PIN: ");
  //     scanf("%d", &pin);
  //     tries++;
  //   }

  //   if (pin == 1234) {
  //     printf("PIN accepted!\n");
  //     printf("You now have access.\n");
  //   }

  //-------------------
  //   int guess;
  //   int tries = 0;

  //   printf("I’m thinking of a number in the range 1-10.\n");
  //   printf("Try to guess it: ");
  //   scanf("%d", &guess);

  //   while (guess != 8 && tries < 50) {
  //     printf("Wrong guess, try again: ");
  //     scanf("%d", &guess);
  //     tries++;
  //   }

  //   if (guess == 8) {
  //     printf("You got it!\n");
  //   }

  //-------------------
  //   int i = 0;
  //   int square = 0;

  //   while (i < 10) {
  //     printf("%d\t%d\n", i, i * i);
  //     i++;
  //   }

  //   i = 9;
  //   while (i > 0) {
  //     printf("%d\t%d\n", i, i * i);
  //     i--;
  //   }

  int i = 0;

  while (i < 10) {
    printf("%d\n", i);
    i++;
  }
  // converted to do-while loop
  do {
    printf("%d\n", i);
    i++;
  } while (i < 9);
}