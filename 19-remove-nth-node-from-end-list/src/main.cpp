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
    
        int count = 1; // by default we are on the last node when we use this variable
        int target = 0;
        ListNode* head;
    
        Solution() {
        }
    
        void helper(ListNode* curr, ListNode* prev) {
            // Go to the last Node
            if (nullptr == curr) {
                return;
            }
            helper(curr->next, curr);
    
            // We roll back
            if (count == this->target) {
                if (!prev) { // this is head
                    head = curr->next;
                } else {
                    prev->next = curr->next;
                }
            }
            count++;
        }
    
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            this->target = n;
            this->head = head;
            helper(head, nullptr);
            return this->head;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
