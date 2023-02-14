/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

/**
 * Runtime: 0 ms
 * Memory Usage: 38.9 MB 
 */
class Solution {
    public int getDecimalValue(ListNode head) {
        int ans = 0;
        for (ListNode p = head; p != null; p = p.next) {
            ans = (ans << 1) | p.val;
        }
        return ans;
    }
}