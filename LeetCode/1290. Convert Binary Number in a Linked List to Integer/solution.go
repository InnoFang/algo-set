/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

/**
 * Runtime: 0 ms
 * Memory Usage: 1.9 MB 
 */
func getDecimalValue(head *ListNode) (ans int) {
    for p := head; p != nil; p = p.Next {
        ans = (ans << 1) | p.Val
    }
    return 
}