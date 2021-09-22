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
 * 229 / 229 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.8 MB 
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int size = 0;
        for (ListNode* p = head; p; p = p->next, size++);

        int quotient = size / k, remainder = size % k; 
        vector<ListNode*> parts(k, nullptr);
        ListNode* curr = head;
        for (int i = 0; i < k && curr; i++) {
            parts[i] = curr;
            int part_size = quotient + ((i < remainder) ? 1 : 0);
            for (int j = 1; j < part_size; j++) {
                curr = curr->next;
            }
            ListNode *next = curr->next;
            curr->next = nullptr;
            curr = next;
        }
        return parts;
    }
};
