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
 * Runtime: 16 ms
 * Memory Usage: 11.5 MB 
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next) return head;
        ListNode* tail = head;
        int len = 0;
        while (tail->next) {
            len ++;
            tail = tail->next;
        }
        len ++;
        int step = len - k % len;
        tail->next = head;
        while (tail && step) {
            tail = tail->next;
            step--;
        }
        head = tail->next;
        tail->next = nullptr;
        return head;
    }
};
