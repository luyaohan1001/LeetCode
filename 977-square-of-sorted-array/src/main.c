#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int* ans = (int *)malloc(sizeof(int) * numsSize);
    int w = numsSize - 1;

    int l = 0, r = numsSize - 1;

    while (l <= r) {
        int l_sqr = nums[l] * nums[l];
        int r_sqr = nums[r] * nums[r];
        if (l_sqr > r_sqr) {
            ans[w--] = l_sqr;
            ++l;
        } else {
            ans[w--] = r_sqr;
            --r;
        }
    }
    *returnSize = numsSize;
    return ans;
    // transfer owner ship of *ans to owner to free.
}


int main(int argc, char const *argv[])
{
    printf("Hello World!\n");
    return 0;
}
