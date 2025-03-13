#include <iostream>

class Solution {
/*
1. Note r should be size - 1
2. Note l <= r as condition because both l/r are inclusive [l, r]
3. Note mid = (l + r) / 2 = l + (r - l) / 2
*/
    public:
        int search(vector<int>& nums, int target) {
            int l = 0, r = nums.size() - 1;
            int mid;
            while (l <= r) {
                mid = (l + r) / 2;
                if (nums[mid] == target) {
                    return mid;
                } else if (nums[mid] < target) { // look right
                    l = mid + 1;
                } else if (nums[mid] > target) { // look left
                    r = mid - 1;
                }
            }
    
            return -1;
        }
    }


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
