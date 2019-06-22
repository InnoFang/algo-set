#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * 55 / 55 test cases passed
 * Status: Accepted.
 * Runtime: 8 ms
 */
class Solution1 {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* H = new ListNode(-1);
        H->next = head;
        ListNode* pre = H;
        ListNode* cur = head;
        ListNode* nxt = head->next;
        
        while (cur && nxt) {
            cur->next = nxt->next;
            nxt->next = cur;
            pre->next = nxt;
            pre = cur;
            cur = cur->next;
            nxt = cur ? cur->next : NULL;
        }
        return H->next;
    }
};

/**
 * 55 / 55 test cases passed
 * Status: Accepted.
 * Runtime: 0 ms
 */
class Solution2 {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* pre = head;
        ListNode* nxt = head;
        ListNode* cur = head;
        head = head->next;
        if (cur->next) {
            cur = cur->next->next;
            pre = pre->next;
            pre->next = nxt;
            nxt->next = swapPairs(cur);
        }
        return head;
    }
};

int main () {
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);
    ListNode node5(5);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;
    node5.next = NULL;

    ListNode* head = Solution2().swapPairs(&node1);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
} 
