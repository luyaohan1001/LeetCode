#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        int p1 = 0; // pointer one use to store sorted.
        int temp = nums[0];

        // pointer 2 use to iterate
        for (int p2 = 0; p2 < nums.size(); ++p2) {
            if (nums[p2] != temp) {
                cnt = 0;
                temp = nums[p2];
            }
            cnt += 1;

            if (cnt <= 2) {
                nums[p1] = nums[p2];
                p1 += 1;
            }
        }
        return p1;
    }

    void print_result(const vector<int>& v) {
        for (auto element : v) {
            cout << element << " ";
        }
        cout << endl;
    }

};

int main(int argc, char const *argv[])
{
    unique_ptr<Solution> p_solution(new Solution());
    vector<int> v{0,0,1,1,1,1,2,2,3};

    p_solution->removeDuplicates(v);
    p_solution->print_result(v);
    return 0;
}
