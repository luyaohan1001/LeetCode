#include <stdio.h>
#include <string.h>

int atoi(char *arr, int arrSize) {
    int num = 0;
    int sign = 1;
    // Iterate over each index of the array
    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == '-') {
            sign = -1;
        } else {
            num *= 10;
            num += arr[i] - '0';
        }
        
    }
    return sign * num;
}

void main() {
    char numArray[] = "-12345";
    printf("atoi result is: %d\n", atoi(numArray, strlen(numArray)));

}