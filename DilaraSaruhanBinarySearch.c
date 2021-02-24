#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

   
    if (array[mid] == x)
      return mid;

   
    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    
    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main(void) {
  int array[] = {11, 13, 15, 17, 19, 21, 23};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 15;
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
}

