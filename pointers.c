#include <stdio.h>
#include <string.h>

int main() {
  //   double dblVar;
  //   double *dblPtr = &dblVar;
  //   printf("%p", dblPtr);

  //-------------------------------------------------------------
  // double g = 9.81;
  // double pi = 3.14;

  // double* dblPtr = &g;
  // printf("%p\n", dblPtr);

  // dblPtr = &pi;

  //-------------------------------------------------------------

  // int k = 2000;
  // int* ptr = &k;

  // // print the value at address ptr
  // printf("%i\n", *ptr);

  // // change the value at address ptr
  // *ptr = 961;
  // printf("%i\n", k);

  //-------------------------------------------------------------
  // double* ptr1;

  // // increment pointer
  // ptr1 += 5;
  // // decrement pointer
  // ptr1 -= 4;

  //-------------------------------------------------------------
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

  int* ptr = &arr[9];

  for (int i = 0; i < sizeof(arr) / __SIZEOF_INT__; i++) {
    printf("%i at address %p\n", *ptr, ptr);
    ptr--;
  }

  char* ptr2 = &s[0];

  for (int i = 0; i < strlen(s); i++) {
    *ptr2 = '#';
    ptr2++;
  }

  printf("%s\n", s);
  printf("%i\n", __SIZEOF_INT__);
}