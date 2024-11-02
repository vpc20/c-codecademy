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

  //   switch statement
  int number = 7;

  switch (number) {
    case 1:
      printf("Bulbasaur\n");
      break;
    case 2:
      printf("Ivysaur\n");
      break;
    case 3:
      printf("Venusaur\n");
      break;
    case 4:
      printf("Charmander\n");
      break;
    case 5:
      printf("Charmeleon\n");
      break;
    case 6:
      printf("Charizard\n");
      break;
    case 7:
      printf("Squirtle\n");
      break;
    case 8:
      printf("Wartortle\n");
      break;
    case 9:
      printf("Blastoise\n");
      break;
    default:
      printf("Unknown\n");
      break;
  }

  // Ternary Operators
  a = 10;
  b = 5;
  int min;

  // Print out the smaller number with return
  min = a < b ? a : b;
  printf("%d\n", min);

  // Print out the smaller number without return
  a < b ? printf("%d\n", a) : printf("%d\n", b);

  printf("%d\n", a < b ? a : b);

  //------------
  double weight;
  int x;

  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight);

  printf("\nI have information for the following planets:\n\n");
  printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
  printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

  printf("Which planet are you visiting? ");
  scanf("%d", &x);

  // if (x == 1) {
  //   weight = weight * 0.38;
  // } else if (x == 2) {
  //   weight = weight * 0.91;
  // } else if (x == 3) {
  //   weight = weight * 0.38;
  // } else if (x == 4) {
  //   weight = weight * 2.34;
  // } else if (x == 5) {
  //   weight = weight * 1.06;
  // } else if (x == 6) {
  //   weight = weight * 0.92;
  // } else if (x == 7) {
  //   weight = weight * 1.19;
  // }

  switch (x)
  {
  case 1:
    weight *= 0.38;
    break;
  case 2:
    weight *= 0.91;
    break;
  case 3:
    weight *= 0.38;
    break;
  case 4:
    weight *= 2.34;
    break;
  case 5:
    weight *= 1.06;
    break;
  case 6:
    weight *= 0.92;
    break;
  case 7:
    weight *= 1.19;
    break;
  // default:
  //   break;
  }
  printf("\nYour weight: %lf\n", weight);

}