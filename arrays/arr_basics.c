#include <stdio.h>

int main() {
  // array declaration and initialization
  int arr[51] = {0};

  // Accessing elements outside the array bounds will cause a segmentation fault
  for (int i = 0; i <=50; i++) {
    arr[i] = i;
  }

  // traversing array using for loop
  printf("Elements in Array: \n");
  for (int i = 0; i <=50; i++) {
    printf("%d \t", arr[i]);
  }
  printf("\n");
  return 0;
}
