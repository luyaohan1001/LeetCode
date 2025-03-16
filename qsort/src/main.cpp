#include <cstdint>
#include <cassert>
#include <cstring>
#include <iostream>

using namespace std;

void swap(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int l, int r) {
    int pivot_idx = r;
    int i = l, j = l - 1;
    for (; i < r; ++i) {
        if (arr[i] <= arr[pivot_idx]) {
            ++j; // move index to place where the sorted element belong
            swap(&arr[i], &arr[j]);
        }
    }
    // now place pivot to where it should belong
    swap(&arr[pivot_idx], &arr[++j]); // j is the location of the pivot
    return j;
}


void qsort(int* arr, int l, int r) {
    if (l > r) {
        return;
    }
    int pivot = partition(arr, l, r); // impl partition
    qsort(arr, l, pivot - 1);
    qsort(arr, pivot + 1, r);
}

int main(int argc, char const *argv[])
{
    int arr[] = {8,2,4,10,84,1,3,0};
    qsort(&arr[0], 0, (sizeof(arr)/sizeof(uint32_t) - 1));
    for (int i = 0; i < 8; ++i) {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
