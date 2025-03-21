#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
    public:
        vector<int> nextLargerNodes(ListNode* head) {
            vector<int> ans;
            for (ListNode* p = head; p; p = p->next) {
                bool found = false;
                for (ListNode* r = p; r; r = r->next) {
                    if (r->val > p->val) {
                        ans.push_back(r->val);
                        found = true;
                        break;
                    }
                }
                if (!found) ans.push_back(0);
            }
            return ans;
        }
    };


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
