#include <iostream>

class Solution {
    public:
        int singleNumber(vector<int>& nums) {
            int temp = 0;
            for (auto& n : nums) {
                temp ^= n;
            }
            return temp;
        }
    }


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
