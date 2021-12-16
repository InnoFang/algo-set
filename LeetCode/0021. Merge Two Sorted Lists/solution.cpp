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
 * 208 / 208 test cases passed.
 * Runtime: 12 ms
 * Memory Usage: 14.6 MB 
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode *head = new ListNode(INT_MIN);
       ListNode *curr = head, *l1 = list1, *l2 = list2;
       int next;
       while (l1 && l2) {
            if (l1->val > l2->val) {
                next = l2->val;
                l2 = l2->next;
            }  else {
                next = l1->val;
                l1 = l1->next;
            }
           curr->next = new ListNode(next);
           curr = curr->next;
        } 
        if (!l1 && l2) curr->next = l2;
        if (l1 && !l2) curr->next = l1;
        return head->next;
    }
};


/**
 * 208 / 208 test cases passed.
 * Runtime: 8 ms
 * Memory Usage: 14.4 MB 
 */
class Solution2 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       ListNode *head = new ListNode(INT_MIN);
       ListNode *curr = head, *l1 = list1, *l2 = list2;
       while (l1 && l2) {
            if (l1->val > l2->val) {
                curr->next = l2;
                l2 = l2->next;
            }  else {
                curr->next = l1;
                l1 = l1->next;
            }
           curr = curr->next;
        }
        curr->next = l1 == nullptr ? l2 : l1; 
        return head->next;
    }
};


/**
 * 208 / 208 test cases passed.
 * Runtime: 0 ms
 * Memory Usage: 14.4 MB 
 */
class Solutiou3 {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        else if (!list2) return list1;
        else if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        } else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};
