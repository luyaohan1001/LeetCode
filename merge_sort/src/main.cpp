#include <iostream>

#define ARR_SIZE 9

void print_arr(int* arr, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void merge_and_copy(int *arr, int* aux, int l, int mid, int r) {
    // [l ... mid][mid + 1 ... r]
    int lp = l, ap = l, rp = mid + 1;
    while (lp <= mid && rp <= r) {
        if (arr[lp] < arr[rp]) {
            aux[ap++] = arr[lp++];
        } else {
            aux[ap++] = arr[rp++];
        }
    }


    while (lp <= mid) {
        aux[ap++] = arr[lp++];
    }

    while (rp <= r) {
        aux[ap++] = arr[rp++];
    }

    for (int i = l; i <= r; ++i) {
        arr[i] = aux[i];
    }
}

/*
[l ... mid][mid + 1 ... r]
*/
void merge_sort(int *arr, int* aux, int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        merge_sort(arr, aux, l, mid);
        merge_sort(arr, aux, mid + 1, r);
        merge_and_copy(arr, aux, l, mid, r);
    }
}


int main(int argc, char const *argv[])
{
    int unsorted[ARR_SIZE] = {2,4,1,5,8,6,1,0,7};
    int aux[ARR_SIZE]; // create auxiliary array needed to store intermediate results

    print_arr(unsorted, ARR_SIZE);
    merge_sort(unsorted, aux, 0, ARR_SIZE - 1);
    print_arr(unsorted, ARR_SIZE);
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
