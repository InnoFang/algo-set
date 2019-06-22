#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * 16 / 16 test cases passed.
 * Status: Accepted
 * Runtime: 16 ms
 */
class Solution {
public:
    ListNode* detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return NULL;
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                while (head != slow) {
                    head = head->next;
                    slow = slow->next;
                }
                return head;
            }
        }
        return NULL;
    }
};

int main () {
    ListNode node1(1);
    ListNode node2(2);
    ListNode node3(3);
    ListNode node4(4);

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node2;
    // node4.next = NULL;

    cout << Solution().detectCycle(&node1)->val << endl;

    return 0;
}
