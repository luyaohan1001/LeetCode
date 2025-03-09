#include <iostream>

class Solution {
    public:
        bool isPalindrome(string& s, int l, int r) {
            while (l < r) {
                if (s[l] != s[r]) return false;
                ++l;
                --r;
            }
            return true;
        }
        bool validPalindrome(string s) {
            int l = 0, r = s.size() - 1;
            while (l < r) {
                if (s[l] != s[r]) {
                    // Try skipping either character
                    return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
                }
                ++l;
                --r;
            }
            return true;
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
