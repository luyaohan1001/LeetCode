#include <iostream>

class Solution {
    public:
        int longestPalindrome(string s) {
            const int TOTAL_CHARS = 128;
            int freq[TOTAL_CHARS] = {0};
            bool one = false;
            uint32_t total = 0;

            // Bookkeep character freq
            for (auto it = s.begin(); it != s.end(); ++it) {
                freq[*it-'A'] += 1;
            }

            // Add even pairs, and at maximum only one can have extra one
            for (auto&i : freq) {
                if (i % 2 == 0) { // even count
                    total += i;
                } else {
                    total += i - 1;
                    one = true;
                }
            }
            return (total + one);
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
