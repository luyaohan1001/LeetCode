#include <stdio.h>
#include <stdlib.h>
static const int mostNegative = (int)(~(((unsigned int) -1) >> 1));

/**
You cannot just find the largest maximum. Because you cannot buy stock today and sell yesterday.

Solution 1: Brute Force O(n**2) --> not good when the input is large.
Solution 2: O(n) time try to maximize for the retMax;
        // Keep track of the maxProfit when you go through the array

// The submission passed leetcode online submission.
        
*/

static inline int MIN(int a, int b) {
    return a < b ? a : b;
}
/**
If use brute force you will use O(n**2) time complexity
O(n) time complexity for iterating the array only once.
When you iterate through the array, keep the min and update the retMax.
You need to avoid the "buy today and sell yesterday problem"
so it is always prices[i] (today) - min (last minimum)

*/
int maxProfit(int *prices, int priceSize) {
    if (NULL == prices) {
        return 0;
    }
    int retMax = mostNegative;
    int min = prices[0]; // keeps track of the min.
    for (int i = 0; i < priceSize; ++i) {
        min = MIN(min, prices[i]); // this will get you the min after you iterate through all the blocks.
        if (prices[i] - min > retMax) {
            retMax = prices[i] - min;
        }
    }
    return retMax;
}

void main() {

}
