#include <stdio.h>
#include <stdlib.h>

const static unsigned int BIT_PER_BYTE = 8;
/**
 * @brief Write a function that finds the index (bit position) of the leftmost bit number in a number.
 * @param num The number number
 * @return The leftmost position index.
 * @note Takeaway: number of bits = sizeof(x) * bits / byte
 *       This binary search algorithm is going to search in log(n) time.
 *        
 */
int getLeftmostBitIndex(int num) {
    int bitCount = sizeof(num) * BIT_PER_BYTE;
    int l = 0;
    int r = bitCount - 1; // if you have 32 bits, the leftmost one will be 1 << 31;
    int mid = (l + r) / 2;
    int retIndex = 0xDEAD0001; // Known return code for traceability.
    while (l < r) {
        if ((1 << mid) < num) { // too small, search right
            l = mid;
        } else if ((1 << mid) > num) { // too large, search left
            r = mid;
        } else {
            retIndex = mid;
            break;
        }
        mid = (l + r) / 2;

        printf("l: %d r: %d\n", l, r);
        
        if (abs(l - r) == 1) {
            retIndex = l;
            break;
        }
        
    }
    return retIndex;
}

int main() {
    int leftmostBitIndex = getLeftmostBitIndex(0b10001000100100);
    printf("leftmostBitIndex is: %d\n", leftmostBitIndex);
    return 0;
}