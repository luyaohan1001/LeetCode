#include <cstdint>
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

void swap(uint32_t *a, uint32_t *b) {
    uint32_t temp = *a;
    *a = *b;
    *b = temp;
}

uint32_t partition(uint32_t arr[], uint32_t s, uint32_t e) {
    uint32_t pivot = arr[e]; // Using last element as pivot
    uint32_t i = s - 1;

    // Find all the smaller ones to the left of the pivot
    for (uint32_t j = s; j < e; ++j) {
        if (arr[j] < pivot) {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[e]);
    return i + 1;
}

void qsort(uint32_t arr[], uint32_t s, uint32_t e) {
    if (s >= e) {
        return;
    }
    uint32_t pivot = partition(arr, s, e);
    if (pivot > 0) qsort(arr, s, pivot - 1); // Ensure pivot - 1 does not underflow
    qsort(arr, pivot + 1, e);
}


int main(int argc, char const *argv[])
{
    uint32_t arr[] = {8,2,4,10,84,1,3,0};
    qsort(arr, 0, (sizeof(arr)/sizeof(uint32_t) - 1));
    for (int i = 0; i < 8; ++i) {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
