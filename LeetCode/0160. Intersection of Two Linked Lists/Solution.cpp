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
 * status: Accepted
 * runtime: 44ms
 */
class Solution2 {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (NULL == headA || NULL == headB) return NULL;
        ListNode *pA = headA;
        ListNode *pB = headB;
        while (pA != pB) {
            pA = pA == NULL ? headB : pA->next;
            pB = pB == NULL ? headA : pB->next;
        }
        return pA;
    }
};
