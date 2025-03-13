#include <iostream>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
    public:
        /*
        Assume distance before entering loop covered by walker/runner is a, 
        Assume distance in the loop cover by runner/walker when they meet is b
        Assume distance in the loop after meet point is c
        2 * walker distance = runner distance
        2 * (a + b) = a + b + c + b
        a + b       = b + c
                a = c 
        Meaning if you have walker start from head, and another walker from the met point.
        They will meet at the entry of the loop.
        */
        ListNode *detectCycle(ListNode *head) {
            ListNode* r = head, *w = head;
            ListNode* m = nullptr;
            while ((w != nullptr) && (r != nullptr) && (r->next != nullptr)) {
                w = w->next;
                r = r->next->next;
                if (w == r) {
                    m = w; // met
                    break;
                }
            }
    
            if (m == nullptr) return nullptr;
            w = head;
            while (w != m) {
                w = w->next;
                m = m->next;
            }
            return w;
        }
    };

    
int main(int argc, char const *argv[])
{
    std::cout<< "Hello World!" << std::endl;
    return 0;
}
