#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
  unsigned int max_len;
  vector<vector<int>> res;

public:
  Solution(int &&length) { this->max_len = length; }
  

  // max_len const
  void traverse(vector<int> &v, vector<bool> &used_map, vector<int> &nums) {
    // In current stack frame, push if # element reached
    if (v.size() == this->max_len) {
      this->res.push_back(v);
    }

    // Attempt to generate # number of elements into v.
    for (int i = 0; i < this->max_len; ++i) {
      if (used_map[i] == false) {   // if number not in v yet
        v.push_back(nums[i]);
        used_map[i] = true;
        traverse(v, used_map, nums);    // try to record
        v.pop_back();   // go back and try another number for i + 1
        used_map[i] = false;
      }
    }
  }

  vector<vector<int>> go_permute(vector<int> &nums) {
    int max_len = nums.size();

    vector<int> v;
    vector<bool> used_map(max_len, false);

    traverse(v, used_map, nums);
    return this->res;
  }

  void print_permutation_results() {
    for (auto v : this->res) {
      for (auto e : v) {
        cout << e << " ";
      }
      cout << endl;
    }
  }
};

int main(int argc, char const *argv[]) {
  vector<int> nums{1, 2, 3};
  unique_ptr<Solution> p_solution(new Solution(nums.size()));

  p_solution->go_permute(nums);
  p_solution->print_permutation_results();
  return 0;
}
