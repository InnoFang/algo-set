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
 * 8 / 8 test cases passed.
 * Runtime: 20 ms
 * Memory Usage: 16 MB 
 */
class Solution {
public:
    Solution(ListNode* head) : head_(head) { }
    
    int getRandom() {
        int i = 1, ret = 0;
        for (auto cur = head_; cur; cur = cur->next) {
            if (rand() % i == 0) {
                ret = cur->val;
            }
            ++ i;
        }
        return ret;
    }

private:
    ListNode *head_;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
