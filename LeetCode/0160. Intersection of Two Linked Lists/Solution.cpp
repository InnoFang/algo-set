/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 /**
 * 39 / 39 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 14.2 MB 
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA;
        ListNode* pB = headB; 
        bool flagA = false, flagB = false;
        while (pA != pB) {
            if (pA->next) pA = pA->next;
            else if (flagA) break;
            else {
                pA = headB;
                flagA = true;
            }

            if (pB->next) pB = pB->next;
            else if (flagB) break;
            else {
                pB = headA;
                flagB = true;
            }
        }
        return pA == pB ? pA : nullptr;
    }
};

 /**
 * 39 / 39 test cases passed.
 * Runtime: 48 ms
 * Memory Usage: 14.1 MB 
 */
class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* pA = headA, *pB = headB;  
        while (pA != pB) {
            pA = pA ? pA->next : headB;
            pB = pB ? pB->next : headA;
        }
        return pA;
    }
};
