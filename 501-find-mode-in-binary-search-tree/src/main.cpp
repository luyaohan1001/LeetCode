#include <iostream>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 class Solution {
    public:
        unordered_map<int, int> map;
    
        void helper(TreeNode *curr) {
            if (curr == nullptr) {
                return;
            }
            helper(curr->left);
            map[curr->val] += 1;
            helper(curr->right);
        }
    
        vector<int> findMode(TreeNode* root) {
            vector<int> ans;
            helper(root);
            int mode_num = 0;
            for (auto &e : map) {
                if (e.second > mode_num) {
                    mode_num = e.second;
                }
            }
    
            for (auto &e : map) {
                if (e.second == mode_num) {
                    ans.push_back(e.first);
                }
            }
            return std::move(ans);
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
