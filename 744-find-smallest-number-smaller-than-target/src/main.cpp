#include <iostream>

class Solution {
    public:
        char nextGreatestLetter(vector<char>& letters, char target) {
            int l = 0, r = letters.size() - 1;  // 右边界变成 n-1
            int mid;
            while (l <= r) {  // 终止条件变成 l <= r
                mid = l + (r - l) / 2;
                if (letters[mid] <= target) {
                    l = mid + 1;
                } else {
                    r = mid - 1;  // 右边界缩小，需要减1
                }
            }
            return letters[l % letters.size()];
        }
    };

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
