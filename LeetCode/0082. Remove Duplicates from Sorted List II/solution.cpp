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
 * 48 / 48 test cases passed.
 * Runtime: 68 ms
 * Memory Usage: 50.2 MB 
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto dummyNode = new ListNode(-1);
        ListNode* tail = dummyNode;
        while (head) {
            if (!head->next || head->val != head->next->val) {
                tail->next = head;
                tail = head;
            }
            while (head->next && head->val == head->next->val) {
                head = head->next;
            }
            head = head->next;
        }
        tail->next = nullptr;
        return dummyNode->next;
    }
};
