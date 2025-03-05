#include <iostream>

class Solution {
    public:
        vector<int> grayCode(int n) {
            // n = 1 -> {0, 1}
            // n = 2 -> {00, 01, 10, 11}
            vector<int> ans = {0, 1};
            for (int i = 1; i < n; ++i) {
                auto ans_cpy = ans;
                reverse(ans_cpy.begin(), ans_cpy.end());
                for (auto & v : ans_cpy) {
                    v += 1 << i;
                }
                ans.insert(ans.end(), ans_cpy.begin(), ans_cpy.end());
            }
            return ans;
        }
    };

int main(int argc, char const *argv[])
{
    Solution solution;
    return 0;
}
