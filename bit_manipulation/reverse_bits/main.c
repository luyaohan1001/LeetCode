#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *binary(int num) {
    int numOfBits = sizeof(num) * 8;
    unsigned int mask = ~(((unsigned int)-1) >> 1);
    char *retCharArray = (char *) malloc ((numOfBits + 1) * sizeof(char)); // n bits = n chars
    // char *retCharArray = (char *) calloc(numOfBits + 1, sizeof(char));
    memset(retCharArray, '\0', (numOfBits + 1) * sizeof(char));

    for (int i = numOfBits; i > 0; --i) {
        retCharArray[numOfBits - i] = ((mask & num) ? 1 : 0) + '0';  // 32 - 1 = 31
        mask >>= 1;
    }

    retCharArray[32] = '\0';
    return retCharArray;
}

int reverse_bits(int num) {
    num |= (num & 0b10101010101010101010101010101010) | (num & 0b01010101010101010101010101010101);
    num |= (num & 0b11001100110011001100110011001100) | (num & 0b00110011001100110011001100110011);
    num |= (num & 0b11110000111100001111000011110000) | (num & 0b00001111000011110000111100001111);
    num |= (num & 0b11111111000000001111111100000000) | (num & 0b00000000111111110000000011111111);
    return num;
}

int main() {
    char *binaryForm = binary(123);
    printf("%s\n", binaryForm);
    int reversed = reverse_bits(123);
    binaryForm = binary(reversed);
    printf("%s\n", binaryForm);
    free(binaryForm);
    return 0;
}