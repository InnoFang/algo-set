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
 * 39 / 39 test cases passed.
 * Runtime: 544 ms
 * Memory Usage: 247.1 MB 
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* curr = head->next;
        while (curr) {
            if (curr->next && curr->next->val == 0) {
                curr->next = curr->next->next;
                curr = curr->next;
            } else {
                while (curr->next && curr->next->val) {
                    curr->val += curr->next->val;
                    curr->next = curr->next->next;
                }
            }
        }
        return head->next;
    }
};
