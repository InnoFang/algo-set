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
 * 231 / 231 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 11.5 MB 
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 || !head || !head->next) return head;
        ListNode* tail = head;
        int len = 1;
        while (tail->next) {
            len ++;
            tail = tail->next;
        }
        int step = len - k % len;
        tail->next = head;
        while (step--) {
            tail = tail->next;
        }
        head = tail->next;
        tail->next = nullptr;
        return head;
    }
};
