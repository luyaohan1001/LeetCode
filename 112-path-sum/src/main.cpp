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
        bool helper(TreeNode* root, int targetSum, int sum) {
            if (!root) return false;
            sum += root->val;
            // we have reached the leaf
            if (sum == targetSum && !root->left && !root->right) return true;
            // go to either left subtree OR right subtree
            return (helper(root->left, targetSum, sum) || helper(root->right, targetSum, sum));
        }

        bool hasPathSum(TreeNode* root, int targetSum) {
            int sum = 0;
            return helper(root, targetSum, sum);
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
