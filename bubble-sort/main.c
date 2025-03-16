#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubble_sort(int *arr, int len) {
  for (int i = 0; i < len - 1; ++i) {
    for (int j = i + 1; j < len; ++j) {
      if (arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
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