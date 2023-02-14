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
 * Runtime: 0 ms
 * Memory Usage: 8 MB 
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        for (auto p = head; p != nullptr; p = p->next) {
            ans = ans << 1 | p->val;
        }
        return ans;
    }
};
