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
 * 165 / 165 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 11.2 MB 
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) {
            return head;
        }
        if (head->val != head->next->val) {
            head->next = deleteDuplicates(head->next);
        } else {
            while (head->next && head->val == head->next->val) {
                head = head->next;
            }
            return deleteDuplicates(head);
        }
        return head;
    }
};

/**
 * 165 / 165 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 11.2 MB 
 */
class Solution2 {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tail = head;
        while (tail) {
            while (tail->next && tail->val == tail->next->val) {
                tail->next = tail->next->next;
            }
            tail = tail->next;
        }
        return head;
    }
};
