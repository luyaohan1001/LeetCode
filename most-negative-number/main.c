#include <stdio.h>

// Write a line of code that get most negative number in a system.
// takeaway: signed int 0b11111111 >> 1 does arithmetic shift, the result will still be 0xb11111111
//          unsigned int 0b11111111 >> 1 does logic shift, the result will be 0b01111111
void main() {

    // decompoased:
    unsigned int unsignedPositiveMax = (unsigned int)-1; // 0xffffffff 32 bit system 0xffffffff fffffff on 64 bit system
    unsigned int unsignedPositiveMaxShifted = unsignedPositiveMax >> 1; // 0b0111111....
    int mostNegative = (int)~unsignedPositiveMaxShifted;
    printf("mostNegitive: %d\n", mostNegative);

    // now condense in one line:
    mostNegative = (int)~(((unsigned int)-1)>>1);
    printf("mostNegitive: %d\n", mostNegative);

}