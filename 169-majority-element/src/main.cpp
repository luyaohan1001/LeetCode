class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            unordered_map<int, int> map; // mapping from integer to count
            int threshold = nums.size() / 2;
    
            // Corrected loop
            for (auto &i : nums) {
                map[i]++;  // ✅ Correct key usage
            }
    
            for (auto pair : map) {
                if (pair.second > threshold) {
                    return pair.first;
                }
            }
    
            return 0;
        }
    };;

    
#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
