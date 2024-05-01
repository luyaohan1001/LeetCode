#include <iostream>
#include <vector>
#include <cmath>

class Solution {
public:
    // Use greedy-algorithm, no recursion needed.
    // If nums[n] has to be reached, then all nums[0] to nums[n] have to be reached.
    // At each location take greedy_max, which is decide to either jump or not jump.
    bool canJump(std::vector<int>& nums) {
        int greedy_max = 0;
        for (int curr_idx = 0; curr_idx < nums.size(); ++curr_idx) {
            if (greedy_max < curr_idx) {return false;} // if curr_idx cannot be reached, then the final index must not be reached.
            greedy_max = std::max(greedy_max, curr_jump_end_idx(curr_idx, nums[curr_idx])); // get to as max jump in each step
            dbg_steps.push_back(greedy_max);    // debug only
        }

        return true;
    }

    std::vector<int> dbg_steps;

private:
    

    inline int curr_jump_end_idx(const int curr_idx, const int length) {
        return curr_idx + length;
    }
};

int main(int argc, char const *argv[])
{
    std::unique_ptr<Solution> p_solution(new Solution());
    std::vector<int> nums1{2, 3, 1, 1, 4};

    bool res = p_solution->canJump(nums1);
    std::cout << "for nums1 index taken: ";
    for (auto idx : p_solution->dbg_steps) {
        std::cout << idx << " ";
    } 
    std::cout << "canJump: " << std::boolalpha << res << std::endl;


    std::vector<int> nums2{3, 2, 1, 0, 4};
    std::cout << "for nums2 index taken: ";

    res = p_solution->canJump(nums1);
    for (auto idx : p_solution->dbg_steps) {
        std::cout << idx << " ";
    } 
    std::cout << "canJump: " << std::boolalpha << res << std::endl;

    return 0;
}
