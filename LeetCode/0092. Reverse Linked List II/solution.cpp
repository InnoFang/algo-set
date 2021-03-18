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
 * 44 / 44 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 7.2 MB 
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummyNode = new ListNode(-1);
        dummyNode->next = head;
        ListNode* pre = dummyNode;
        for (int i = 0; i < left - 1; ++ i) {
            pre = pre->next;
        }
        ListNode* cur = pre->next;
        ListNode* next;
        for (int i = 0; i < right - left; ++ i) {
            next = cur->next;
            cur->next = next->next;
            next->next = pre->next;
            pre->next = next;
        }
        return dummyNode->next;
    }
};

/**
 * 44 / 44 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 7.3 MB 
 */
class Solution2 {
public:
    ListNode* successor;
    ListNode* reverseN(ListNode* head, int n) {
        if (n == 1) {
            successor = head->next;
            return head;
        }
        ListNode* last = reverseN(head->next, n - 1);
        head->next->next = head;
        head->next = successor;
        return last;
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == 1) {
            return reverseN(head, right);
        }
        head->next = reverseBetween(head->next, left - 1, right - 1);
        return head;
    }
};
