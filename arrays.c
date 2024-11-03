#include <stdio.h>

int main() {
  //   int arr[] = {3,  4,  5,  6,  7,  8,  9,  10, 11, 12,
  //                13, 14, 15, 16, 17, 20, 22, 26, 28, 29};
  //   int arr2[100];

  //   for (int i = 0; i < 20; i++) {
  //     printf("%d\n", arr[i]);
  //   }

  //   for (int i = 0; i < 100; i++) {
  //     arr2[i] = i + 4;
  //   }

  double arr[] = {1.0, 8, 2.27, 16.2, 2, 3.14, 12.6, 1.62, 6.54, 9, 11};
  int len;

  len = sizeof(arr) / sizeof(double);
  printf("%i\n", len);

  for (int i = 0; i < len; i++) {
    printf("%f\n", arr[i]);
  }

  int matrix[][4] = {
      {14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
  int sum = 0;

  printf("%d\n", matrix[3][1]);

  int rows = sizeof(matrix) / sizeof(matrix[0]);
  int cols = sizeof(matrix[0]) / sizeof(int);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum += matrix[i][j];
    }
  }

  printf("%i\n", sum);
}
