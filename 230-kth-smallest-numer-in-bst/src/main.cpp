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
        int cnt; // count to track the nth smallest element now in the BST.
        int ans;
        Solution() : cnt(0) {}
        void helper(TreeNode* curr, const int& target) {
            if (curr == nullptr) {
                return;
            }
            
            helper(curr->left, target);
            ++cnt;
            if (cnt == target) {
                ans = curr->val;
            }
            helper(curr->right, target);
    
            // In order traversal gives an sorted order numbers from smallest to largest, we increment count every time a new node is visited.
        }
    
        int kthSmallest(TreeNode* root, int k) {
            helper(root, k);
            return this->ans;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
