#include <iostream>


class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            sort(nums.begin(), nums.end(), greater<int>());
            int cnt = 1;
            int temp = nums[0];
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] != temp) {
                    cnt += 1;
                    temp = nums[i];
                }
                if (cnt == 3) {
                    break;
                }
            }
            if (cnt !=3 ) {
                return nums[0];
            }
            return temp;
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
