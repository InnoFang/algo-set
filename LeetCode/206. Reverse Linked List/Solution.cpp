#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * 27 / 27 test cases passed.
 * Status: Accepted
 * Runtime: 20 ms
 */
class Solution1 {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL) return NULL;
        ListNode *h, *p, *q;
        h = new ListNode(-1);
        h->next = NULL;
        p = head;
        q = head->next;
        while (p) {
            p->next = h->next;
            h->next = p;
            p = q;
            q = q == NULL ? NULL : q->next;  
        }
        return h->next;
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

    ListNode* head = Solution1().reverseList(&node1);
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}