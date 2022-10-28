#include <stdio.h>
#include <stdlib.h>

#define BITS_PER_BYTE 8UL
char *binaryForm(int num) {
    int numOfBits = sizeof(num) * BITS_PER_BYTE;
    char *retCharArray = (char *)malloc((numOfBits+1) * sizeof(char));
    memset(retCharArray, '\0', (numOfBits + 1) * sizeof(char));
    unsigned int mask = ~(((unsigned int)-1) >> 1);
    for (int i = 0; i < numOfBits; ++i) {
        retCharArray[i] = ((mask & num) ? 1 : 0) + '0';
    }
    return retCharArray;
}

unsigned int crc32(unsigned int diviend, unsigned int divisor) {

}


int main() {
    return 0;
}