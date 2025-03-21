#include <stdio.h>

/**
 * insertionSort:
 *  Space complexity: O(n)
 *  Time complexity Worst: O(n**2)
 *  Time complexity Best/Average: O(n) --> when array is almost sorted.
 * 
 */

void insertionSort(char *array, int len) {
    if (len == 1) return;
    for (int t_idx = 1; t_idx < len; ++t_idx) {
        int t_key = array[t_idx];
        int j = t_idx - 1;
        while (j >= 0 && array[j] > t_key) { 
            // condition 1: j must be bigger than 0
            // condition 2: any elements bigger than the key should be moved to the right
            array[j + 1] = array[j];
            --j;
        }
        // at the end of the loop j < 0
        array[++j] = t_key;
    }
}

void printArray(char *array, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    char initArray[] = {4,7,23,9,2,4,0,8};
    int length = sizeof(initArray) / sizeof(initArray[0]);
    printArray(initArray, length);
    insertionSort(initArray, length);
    printArray(initArray, length);
    return 0;
}