package leetcode._206_Reverse_Linked_List

/**
 * Created by Inno Fang on 2017/12/16.
 */
/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int = 0) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun reverseList(head: ListNode?): ListNode? {
        var p = head
        var q = head?.next
        var h = head
        h?.next = null
        while (q != null) {
            p = q
            q = q.next
            p.next = h
            h = p
        }
        return h
    }
}

class Solution2 {
    fun reverseList(head: ListNode?): ListNode? {
        if (head == null) return head
        var curr = head
        var last: ListNode? = null
        var next: ListNode? = null
        while (curr != null) {
            next = curr.next
            curr.next = last
            last = curr
            curr = next
        }
        return last
    }
}

class ListNode(var `val`: Int = 0) {
    var next: ListNode? = null
}

fun main(args: Array<String>) {
    val head = ListNode(4)
    val node1 = ListNode(3)
    val node2 = ListNode(2)
    val node3 = ListNode(1)
    head.next = node1
    node1.next = node2
    node2.next = node3
    node3.next = null
    var h = Solution2().reverseList(head)
    while (h != null) {
        print("${h.`val`} ")
        h = h.next
    }
    println()
}