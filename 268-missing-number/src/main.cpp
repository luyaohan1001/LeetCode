#include <iostream>

class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            uint32_t temp = 0;
            for (auto i = 0; i <= nums.size(); ++i) {
                temp ^= i;
            }
    
            for (auto n : nums) {
                temp ^= n;
            }
            return temp;
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
