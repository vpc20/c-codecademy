#include <stdbool.h>
#include <stdio.h>

// A leap year has to be divisible by 4 and
// NOT divisible by 100 except when the year is divisible by 400.

// bool is_leap_year(int year) {
//   if (year % 4 == 0) {
//     if (year % 100 == 0) {
//       if (year % 400 == 0)
//         return true;
//       else
//         return false;
//     } else
//       return true;
//   } else
//     return false;
// }

bool is_leap_year(int year) {
  if (year % 4 == 0) {
    if (year % 100 == 0)
      return year % 400 == 0 ? true : false;
    else
      return true;
  } else
    return false;
}

int main() {
  int year;
  printf("Input a year between 1800 and 10000 : ");
  scanf("%d", &year);
  printf("%s", is_leap_year(year) == 1 ? "Leap year" : "Not leap year");
}