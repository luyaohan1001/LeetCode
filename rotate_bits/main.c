#include <stdio.h>
#include <stdlib.h>

#define BITS_PER_BYTE 8 

char *intToCharArray(int num) {
    unsigned int mask = ~(((unsigned int)-1) >> 1);
    int numOfBits = sizeof(num) * BITS_PER_BYTE;

    char *retCharArray = (char *)calloc(sizeof(char), numOfBits + 1);
    retCharArray[numOfBits] = '\0'; // null terminated

    for (int i = 0; i < numOfBits; ++i) { // higher bits goes to lower indexes (print from [0] to [numOfBits-1])
        retCharArray[i] = !!(mask & num) + '0'; 
        mask = mask >> 1;
    }
    return retCharArray;
}

// Example 10011 = 11000 | 00100 = 10011 << 3 | 10011 >> 2;
int rotateBitRight(int num, int bitsToShift) {
    int numOfBits = sizeof(int) * BITS_PER_BYTE;
    return (num >> bitsToShift) | (num << (numOfBits - bitsToShift));
}

int main() {
    char *retCharArray = NULL;
    
    retCharArray = intToCharArray(238);
    printf("Print binary of 238: %s\n", retCharArray);

    // Now do shift right.
    retCharArray = intToCharArray(rotateBitRight(238, 2));
    printf("Print binary of right shifted 238: %s\n", retCharArray);
    free(retCharArray);

    return 0;
}