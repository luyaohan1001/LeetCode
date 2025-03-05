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
 using namespace std;
 class Solution {
 public:
     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         if (!l1) return l2;
         if (!l2) return l1;
 
         ListNode* new_list_head = nullptr;
         ListNode *prev = nullptr, *temp = nullptr;
         int carry = 0;
 
         // Process both lists while they have values
         while (l1 || l2 || carry) {
             int sum = carry;
             if (l1) {
                 sum += l1->val;
                 l1 = l1->next;
             }
             if (l2) {
                 sum += l2->val;
                 l2 = l2->next;
             }
             carry = sum / 10;
             sum = sum % 10;
 
             temp = new ListNode(sum);
             if (!new_list_head) {
                 new_list_head = temp;
             } else {
                 prev->next = temp;
             }
             prev = temp;
         }
 
         return new_list_head;
     }
 };;


int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
