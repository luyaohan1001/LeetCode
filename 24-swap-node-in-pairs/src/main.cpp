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
        ListNode* swapPairs(ListNode* head) {
            // edge case
            if (head == nullptr || head->next == nullptr) return head;
    
            // initialization
            ListNode* n1 = head;
            ListNode* n2 = n1->next;
            ListNode* pp = nullptr;
            head = n2;
    
            while (true) {
                ListNode* temp = n2->next;
                n2->next = n1;
                n1->next = temp;
                if (pp != nullptr) pp->next = n2;
    
                // how do we update?
                if (n1->next == nullptr || n1->next->next == nullptr) {
                    break;
                }
                pp = n1;
                n1 = pp->next;
                n2 = pp->next->next;
            }
            return head;
        }
    };


    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
