#include <iostream>

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> ans;
            unordered_map<int, int> map; // storing value -> index
            // Achieve by LUT
            // Iterate this and make it into a LUT
    
            // 2, 7, 11, 15
            // 7, 2, -2, -6
    
            for (auto i = 0; i < nums.size(); ++i) {
                // find complementary
                auto found = map.find(target - nums[i]);
                if (found != map.end()) {
                    return {i, found->second};
                }
                map[nums[i]] = i;
            }
    
            return ans;
    
        }
    };



int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
