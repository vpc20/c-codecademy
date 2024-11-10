#include <stdio.h>

void incrementAge(int* agePointer) { *agePointer = *agePointer + 1; }

int main(void) {
  int age = 52;
  incrementAge(&age);
  printf("%d\n", age);
}