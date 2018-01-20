package solution._083_Remove_Duplicates_from_Sorted_List

/**
 * Created by Inno Fang on 2017/12/13.
 */
/**
 * Definition for singly-linked list.
 * class ListNode(var `val`: Int = 0) {
 *     var next: ListNode? = null
 * }
 */
class Solution {
    fun deleteDuplicates(head: ListNode?): ListNode? {

        if (head == null) return null

        var p = head
        var q = head.next
        while (q != null) {
            if (q.`val` == p?.`val`) {
                while (q?.`val` == q?.next?.`val`) {
                    q = q?.next
                }
                p.next = q?.next
                q?.next = null
                q = p.next
            } else {
                p = p?.next
                q = q.next
            }
        }
        return head
    }
}

class ListNode(var `val`: Int = 0) {
    var next: ListNode? = null
}

class Solution2 {
    fun deleteDuplicates(head: ListNode?): ListNode? {
        if (head == null)
            return null

        var node = head
        while (node != null) {
            if (node.next?.`val` == node.`val`) {
                node.next = nextNonDuplicate(node)
            }

            node = node.next
        }

        return head
    }

    private fun nextNonDuplicate(node: ListNode): ListNode? {
        var searcher = node?.next
        while (searcher != null && searcher.`val` == node.`val`) {
            searcher = searcher.next
        }
        return searcher
    }
}

class Solution3 {
    fun deleteDuplicates(head: ListNode?): ListNode? {
        var node = head
        while (node != null && node.next != null) {
            if (node.`val` == node.next!!.`val`) {
                val tmp = node.next
                node.next = tmp!!.next
                tmp.next = null
            } else {
                node = node.next
            }
        }
        return head
    }
}

fun main(args: Array<String>) {
    var head = ListNode(1)
    val node1 = ListNode(1)
    val node2 = ListNode(2)
    val node3 = ListNode(3)
    val node4 = ListNode(3)
    head.next = node1
    node1.next = node2
    node2.next = node3
    node3.next = node4
    head = Solution().deleteDuplicates(head)!!
    var p: ListNode? = head
    while (p != null) {
        print("${p.`val`} ")
        p = p.next
    }
    println()
}