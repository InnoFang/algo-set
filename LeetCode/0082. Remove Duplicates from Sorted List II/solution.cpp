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
 * 166 / 166 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.8 MB 
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

/**
 * 166 / 166 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 10.9 MB 
 */
class Solution2 {
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
            return deleteDuplicates(head->next);
        }
        return head;
    }
};
