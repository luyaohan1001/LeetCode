#include <iostream>

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int w = 0, r = 0;
            for (; r < nums.size(); ++r) {
                if (nums[r] == val) continue;
                nums[w++] = nums[r];
            }
            return w;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
