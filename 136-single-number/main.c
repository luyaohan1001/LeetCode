
#include <stdio.h>

/**
 *  Assuming that the nums is a number array.
 *  Vector method.
 * 
 *  XOR truth table 
 *  0 0 0
 *  0 1 1
 *  1 0 1
 *  1 1 0
 * 
 * a XOR a = 0
 * a XOR 0 = a
 * 
 * a XOR b XOR a = a XOR a XOR b = 0 XOR b = b
 * 
 * Time: O(n)
 * Space: O(1)
 */
int singleNumber(int* nums, int numsSize)
{
    unsigned int vector=0;
    for (int i = 0; i < numsSize; ++i)
    {
        vector ^= nums[i];
    }

    return vector;
}

int singleNumberTest() 
{
    int testNums[3] = {2, 2, 1};
    int testNumsSize = sizeof(testNums) / sizeof(int);
    int ans = singleNumber(testNums, testNumsSize);
    printf("The single number is: %d\n", ans);


    int testNums1[] = {4, 1, 2, 1, 2};
    testNumsSize = sizeof(testNums1) / sizeof(int);
    ans = singleNumber(testNums1, testNumsSize);
    printf("The single number is: %d\n", ans);


}
void main() 
{
    singleNumberTest();
}