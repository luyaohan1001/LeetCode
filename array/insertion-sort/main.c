#include <stdio.h>

/**
 * insertionSort:
 *  Space complexity: O(n)
 *  Time complexity Worst: O(n**2)
 *  Time complexity Best/Average: O(n) --> when array is almost sorted.
 * 
 */

void insertionSort(char *array, int len) {
    for (int i = 0; i < len; ++i) { // left to right.
        int curr = array[i]; 
        int leftIndex = i - 1; // all the index left to curr.

        // "Shifting" nonsmaller elements to right.
        while (array[leftIndex] > curr) {
            array[leftIndex + 1] = array[leftIndex];
            leftIndex --;

            // You cannot just keep decrementing the leftIndex.
            if (leftIndex < 0) {
                break;
            }
        }
        array[leftIndex+1] = curr;  // The essense of the insertion sort is at this. 
                                    // When 0 shifting happened, leftIndex = currIndex - 1, and leftIndex + 1 writes it back
                                    // When multiple shifting happened but not exceeding low range, then leftIndex + 1 place it to the right spot.
                                    // When leftIndex < 0 triggered, you expect leftIndex = -1, and +1 adds it back to the [0] index position.
    }
}

void printArray(char *array, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void main() {
    char initArray[] = {4,7,23,9,2,4,0,8};
    int length = sizeof(initArray) / sizeof(initArray[0]);
    printArray(initArray, length);
    insertionSort(initArray, length);
    printArray(initArray, length);
}