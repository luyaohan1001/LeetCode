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
        void helper(ListNode* curr, ListNode* prev, ListNode*& head) {
    
            // base call
            if (nullptr == curr) {
                return;
            } 
            // recursion call
            helper(curr->next, curr, head);
            
            // Now we are on the first node that's NOT null, i.e. valid node 
            if (curr->next == nullptr) head = curr;
            curr->next = prev;
        }
        ListNode* reverseList(ListNode* head) {
            helper(head, nullptr, head);
            return head;
        }
    };

int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
