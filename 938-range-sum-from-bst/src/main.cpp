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
        int sum;
    
        Solution() {
            sum = 0;
        }
        void helper(TreeNode *curr, const int& low, const int& high) {
            if (curr == nullptr) {
                return;
            }
            helper(curr->left, low, high);
            int val = curr->val;
            if (val <= high && val >= low) {
                sum += val;
            }
            helper(curr->right, low, high);
        }
    
        int rangeSumBST(TreeNode* root, int low, int high) {
            helper(root, low, high);
            return sum;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
