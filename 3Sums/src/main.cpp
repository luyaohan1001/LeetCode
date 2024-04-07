#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    public:
        vector<vector<int>> answer;

        vector<vector<int>> threeSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());

            set<vector<int>> st;
            for (auto it = nums.begin(); it < nums.end() - 2; ++it) {
                int nsum = -(*it);
                for (auto li = nums.begin() + 1, ri = nums.end(); li < ri; li++, ri--) {    // left index and right index
                    if (((*li + *ri) == nsum)) {
                        st.insert(vector<int>{*it, *li, *ri});
                    }
                }
            }

            this->answer = vector<vector<int>>{st.begin(), st.end()};
            return this->answer;
        }

        void print_vector() {
            for (auto vec : this->answer) {
                for (auto element : vec) {
                    cout << element << " ";
                }
                cout << endl;
            }
        }

};

int main(int argc, char const *argv[])
{
    // Solution solution;
    Solution *p_solution = new Solution();
    // vector<int> input {-1, 0, 1, 2, -1, -4};
    vector<int> input {0, 0, 0};
    p_solution->threeSum(input);
    p_solution->print_vector();
    free(p_solution);
    return 0;
}
