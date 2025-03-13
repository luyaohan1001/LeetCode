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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode* itr = head;
            while (itr && itr->next) {
                if (itr->val == itr->next->val) {
                    itr->next = itr->next->next;
                } else {
                    itr= itr->next;
                }
            }
            return head;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
