#include <stdio.h>
#include <stdbool.h>
#include <string.h>

static inline int MAX(int a, int b) {
    return (a > b) ? a : b;
}

/**
 * @brief Find length of the longest substring within a string.
 * @note Strategy: O(n**2): Iterate through each char in the string, use that one as starting character, 
 *      and find longest string of it until another character in the inner loop duplicate with this starting character.
 *      Takeaway: Initilize a set to check for duplicates each time for each outer loop.
 *      Takeaway: when you have a string string with i and stopping with j, its length will be j - i + 1
 *      Takeaway: Specify a table of 256 entries because there are 256 ascii letters.
 *      This solution has passed leetcode online submission.
 */
int lengthOfLongestSubstring(char *s) {
    if (NULL == s) {
        return 0;
    }

    int sLen = strlen(s);
    int retMax = 0;

    // for all the letters at i, search forward until repeat has been discovered.
    for (int i = 0; i < sLen; ++i) {

        // initialize a set
        bool visited[256];
        memset(visited, 0, sizeof(visited));
        for (int j = i; j < sLen; ++j) {
            if (visited[s[j]] == true) {
                break;
            } else {
                retMax = MAX(retMax, j - i + 1); // the new length will be j - i + 1
                visited[s[j]] = true;
            }
        }
        visited[s[i]] = false;
    }
    return retMax;
}

void main() {
    // char exampleString[] = "abcabcbb";
    char exampleString[] = "dvdf";
    int retLength = lengthOfLongestSubstring(exampleString);
    printf("returned length: %d\n", retLength);

}