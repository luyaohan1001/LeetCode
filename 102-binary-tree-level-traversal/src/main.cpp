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
 #include <queue>
 class Solution {
 public:
     vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         if (nullptr == root) {
             return ans;
         }
 
         queue<TreeNode *> q;
         q.push(root);
 
         while (!q.empty()) {
             int levelSize = q.size();
             vector<int> currentLevel; 
 
             while (levelSize > 0) {
                 TreeNode* currentNode = q.front(); // Take the front node in the queue
                 q.pop();                           // Remove that node from the queue
 
                 // Add current node's value to current level vector
                 currentLevel.push_back(currentNode->val);
 
                 // If the current node has a left child, add it to the queue
                 if (currentNode->left) {
                     q.push(currentNode->left);
                 }
                 // If the current node has a right child, add it to the queue
                 if (currentNode->right) {
                     q.push(currentNode->right);
                 }
 
                 levelSize--; // Decrement the counter for nodes remaining at current level
             }
             ans.push_back(currentLevel);
         }
         return ans;
     }
 };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
