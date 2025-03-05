#include <iostream>
#include <vector>
#include <cmath>


class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int max_pos = 0;
            int len = nums.size();
            if (1 == len) {
                return true;
            }
    
            for (int i = 0; i < len-1; ++i) {
                if (i > max_pos) return false;
                max_pos = max(max_pos, i + nums[i]);
                if (max_pos >= len - 1) return true;
            }
            return false;
        }
    }

int main(int argc, char const *argv[])
{
    return 0;
}
