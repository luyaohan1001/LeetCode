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
        ListNode* swapPairs(ListNode* head) {
            // edge case
            if (nullptr == head || nullptr == head->next) {
                return head;
            }
            // from above, list has at least two nodes in the list
            ListNode* prev = head, *curr = head->next;
            ListNode* old_next, *new_prev = nullptr;
            // [prev] -> [curr] -> [old_next]
            while (true) {
                old_next = curr->next;
                curr->next = prev;
                prev->next = old_next;
                if (prev == head) head = curr;
                if (new_prev) new_prev->next = curr;
    
                // Now the update condition
                new_prev = prev;
                prev = prev->next;
                if (!prev || !prev->next) break;
                curr = prev->next;
            }
            return head;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
