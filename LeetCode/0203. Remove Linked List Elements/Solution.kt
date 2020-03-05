/**
 * Created by Inno Fang on 2017/12/18.
 */

class ListNode(var `val`: Int = 0) {
    var next: ListNode? = null
}

class Solution {
    fun removeElements(head: ListNode?, `val`: Int): ListNode? {
        var root = head

        // delete the same head node
        while (root != null && root.`val` == `val`)
            root = root.next

        var last: ListNode? = root
        var curr = root?.next
        var next: ListNode? = curr?.next
        while (curr != null) {
            if (curr.`val` == `val`) {

                //delete last node
                if (next == null) {
                    last?.next = next
                    curr.next = null
                    curr = next
                    continue
                }
                // delete current node
                curr.next = null
                last?.next = next
                curr = next
                next = next.next
                continue
            }
            // move
            curr = curr.next
            last = last?.next
            next = next?.next
        }
        return root
    }
}

fun main(args: Array<String>) {
    val head = ListNode(1)
    val node1 = ListNode(1)
    val node2 = ListNode(1)
    val node3 = ListNode(2)
    val node4 = ListNode(3)
    val node4_ = ListNode(2)
    val node5 = ListNode(4)
    val node5_ = ListNode(2)
    val node6 = ListNode(5)
    val node7 = ListNode(6)
    val node8 = ListNode(7)
    val node9 = ListNode(7)
    val node10 = ListNode(7)

    head.next = node1
    node1.next = node2
    node2.next = node3
    node3.next = node4
    node4.next = node4_
    node4_.next = node5
    node5.next = node5_
    node5_.next = node6
    node6.next = node7
    node7.next = node8
    node8.next = node9
    node9.next = node10
    node10.next = null

    printList(Solution().removeElements(head, 7))
}

fun printList(head: ListNode?) {
    var h = head
    while (h != null) {
        print("${h.`val`} ")
        h = h.next
    }
    println()
}