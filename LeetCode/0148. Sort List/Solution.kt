/**
 * Created by Inno Fang on 2018/3/15.
 */

class ListNode(var `val`: Int = 0) {
    var next: ListNode? = null
}

/**
 * 15 / 15 test cases passed.
 * Status: Accepted
 * Runtime: 272 ms
 */
class Solution {
    fun sortList(head: ListNode?): ListNode? {
        return mergeSort(head)
    }

    private fun mergeSort(head: ListNode?): ListNode? {
        if (head?.next == null) return head
        var slow = head
        var fast = head.next
        while (null != fast && null != fast.next) {
            slow = slow!!.next
            fast = fast.next!!
            fast.next?.let { fast = it }
        }
        val ptr = slow!!.next
        slow.next = null
        val node1 = mergeSort(head)
        val node2 = mergeSort(ptr)
        return merge(node1, node2)
    }

    private fun merge(node1: ListNode?, node2: ListNode?): ListNode? {
        val head= ListNode(1)
        var cur: ListNode?  = head
        var ptr1 = node1
        var ptr2 = node2
        while (null != ptr1 && null != ptr2) {
            if (ptr1.`val` > ptr2.`val`) {
                cur!!.next = ptr2
                cur = cur.next
                ptr2 = ptr2.next
            } else {
                cur!!.next = ptr1
                cur = cur.next
                ptr1 = ptr1.next
            }
        }

        while (null != ptr1) {
            cur!!.next = ptr1
            cur = cur.next
            ptr1 = ptr1.next
        }

        while (null != ptr2) {
            cur!!.next = ptr2
            cur = cur.next
            ptr2 = ptr2.next
        }

        return head.next
    }
}