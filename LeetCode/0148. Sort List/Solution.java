
/**
 * Created by Inno Fang on 2018/3/15.
 */

class ListNode {
    int val;
    ListNode next;

    ListNode(int x) {
        val = x;
    }
}

/**
 * 15 / 15 test cases passed.
 * Status: Accepted
 * Runtime: 7 ms
 */
class Solution {
    public ListNode sortList(ListNode head) {
        return mergeSort(head);
    }
    private ListNode mergeSort(ListNode head) {
        if (head == null || head.next == null) return head;
        ListNode slow = head;
        ListNode fast = head.next;
        while (fast != null && fast.next != null) {
            slow = slow.next;

            fast = fast.next;
            if (fast.next != null) {
                fast = fast.next;
            }
        }

        ListNode ptr = slow.next;
        slow.next = null;
        ListNode node1 = mergeSort(head);
        ListNode node2 = mergeSort(ptr);
        return merge(node1, node2);
    }

    private ListNode merge(ListNode node1, ListNode node2) {
        ListNode head = new ListNode(-1);
        ListNode cur = head;
        ListNode ptr1 = node1;
        ListNode ptr2 = node2;
        while (null != ptr1 && null != ptr2) {
            if (ptr1.val > ptr2.val) {
                cur.next = ptr2;
                ptr2 = ptr2.next;
                cur = cur.next;
            } else {
                cur.next = ptr1;
                ptr1 = ptr1.next;
                cur = cur.next;
            }
        }

        while (null != ptr1) {
            cur.next = ptr1;
            cur = cur.next;
            ptr1 = ptr1.next;
        }
        while (null != ptr2) {
            cur.next = ptr2;
            cur = cur.next;
            ptr2 = ptr2.next;
        }
        return head.next;
    }
}