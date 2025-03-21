#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int *arr, int len) {
  for (int i = 0; i < len - 1; ++i) {
    bool swapped = false;
    for (int j = 0; j < len - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(&arr[j], &arr[j + 1]);
        swapped = true;
      }
    }
    if (!swapped) break;
  }
}

void print_arr(int *arr, int len) {
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {1,4,2,6,3,7,8,6,6,2};
  int len = (sizeof(arr) / sizeof(int));
  print_arr(arr, len);
  bubble_sort(arr, len);
  print_arr(arr, len);
}