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
 * 11568 / 1568test cases passed.
 * Status: Accepted
 * Runtime: 28 ms
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *p = nullptr;
        int carry = 0;
        while ( l1 && l2 ) {
            int sum = l1->val + l2->val + carry;
            carry = sum / 10;
            if (!head) {
                head = p = new ListNode(sum % 10);
            } else {
                p->next = new ListNode(sum % 10);
                p = p->next;    
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1) {
            int sum = carry + l1->val;
            carry = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l1 = l1->next;
        }
        while (l2) {
            int sum = carry + l2->val;
            carry = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l2 = l2->next;
        }
        if (carry != 0)
            p->next = new ListNode(carry);
        return head;
    }
};

/**
 * 11568 / 1568test cases passed.
 * Status: Accepted
 * Runtime: 28 ms
 */
class Solution2 {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = nullptr, *p = nullptr;
        int carry = 0;
        while ( l1 || l2 ) {
            int v1 = l1 == nullptr ? 0 : l1->val;
            int v2 = l2 == nullptr ? 0 : l2->val;
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            if (!head) {
                head = p = new ListNode(sum % 10);
            } else {
                p->next = new ListNode(sum % 10);
                p = p->next;    
            }
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        if (carry != 0)
            p->next = new ListNode(carry);
        return head;
    }
};

