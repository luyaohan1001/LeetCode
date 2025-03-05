#include <iostream>

class Solution {
    public:
    /*
    
    row
    1 -> [1]
    2 -> [1, 1]
    3 -> [1], prev[0] + prev[1], [1]
    4 -> [1], prev[0] + prev[1], prev[1] + prev[2], [1]
    
    odd (1, 3): odd number
    even (2,4): even number
    */
    
        vector<vector<int>> ans;
        vector<vector<int>> generate(int numRows) {
            if (numRows == 1) {
                ans.push_back({1});
            }
            else if (numRows == 2) {
                ans.push_back({1});
                ans.push_back({1, 1});
            } else {
                ans.push_back({1});
                ans.push_back({1, 1});
                for (int i = 3; i <= numRows; ++i) {
                    vector<int> prev = ans.back();
                    vector<int> curr;
                    curr.push_back(1);
                    for (auto j = 0; j < prev.size() - 1; ++j) {
                        curr.push_back(prev[j] + prev[j + 1]);
                    }
                    curr.push_back(1);
                    this->ans.push_back(curr);
                }
            }
            return this->ans;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
