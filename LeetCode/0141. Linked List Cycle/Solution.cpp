#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/**
 * 17 / 17 test cases passed.
 * Status: Accepted
 * Runtime: 12 ms
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) return false;
        ListNode *slow, *fast;
        slow = head;
        fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            if (slow == fast) return true;
            slow = slow->next;
            fast = fast->next->next;
        }
        return false;
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
    // node4.next = &node2;
    node4.next = NULL;

    cout << Solution().hasCycle(&node1) << endl;

    return 0;
}