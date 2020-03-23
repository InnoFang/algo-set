/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */

 /**
  * 15 / 15 test case passed
  * Status: Accepted
  * Runtime: 0 ms
  */
 func middleNode(head *ListNode) *ListNode {
    p, q := head, head
    for q != nil && q.Next != nil {
        p = p.Next
        q = q.Next.Next
    }
    return p
}
