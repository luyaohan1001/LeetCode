#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static inline int MAX(int a, int b) {
    return (a > b) ? a : b;
}

/**
 * @brief Find length of the longest substring within a string.
 * @note Linear time solution o(n) with sliding window mechanism. Window formed [j..i]
 */
int lengthOfLongestSubstring(char *s) {
    if (NULL == s) {
        return 0;
    }

    int sLen = strlen(s);
    int retMax = 0;

    int lastIndex[256];
    memset(lastIndex, -1, sizeof(lastIndex));  // chars haven't encountered should have -1 index.

    int i = 0; // start of window (left pointer)

    for (int j = 0; j < sLen; ++j) { // j denotes end of window (right pointer.)

        if (lastIndex[s[j]] >= i) { // if lastInde[s[j]] >= i it means we already have repeated characters in the window.
            i = lastIndex[s[j]] + 1; // reset the window
        }

        // record max.
        retMax = MAX(retMax, j - i + 1);

        // update lastIndex.
        lastIndex[s[j]] = j;
    }
    return retMax;
}

void main() {
    // char exampleString[] = "abcabcbb";
    char exampleString[] = "dvdf";
    int retLength = lengthOfLongestSubstring(exampleString);
    printf("returned length: %d\n", retLength);

}