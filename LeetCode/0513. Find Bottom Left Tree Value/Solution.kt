/**
 * Created by Inno Fang on 2018/2/26.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}


/**
 * 74 / 74 test cases passed.
 * Status: Accepted
 * Runtime: 264 ms
 */
class Solution {
    fun findBottomLeftValue(root: TreeNode?): Int {
        val que = java.util.LinkedList<TreeNode>()
        que.add(root!!)
        var res = 0
        while (que.isNotEmpty()) {
            val node = que.poll()
            res = node.`val`
            node.right?.let(que::add)
            node.left?.let(que::add)
        }
        return res
    }
}

fun main(args: Array<String>) {
    /*
            1
           / \
          2   3
         /   / \
        4   5   6
           /
          7
    */
    val node1 = TreeNode(1)
    val node2 = TreeNode(2)
    val node3 = TreeNode(3)
    val node4 = TreeNode(4)
    val node5 = TreeNode(5)
    val node6 = TreeNode(6)
    val node7 = TreeNode(7)

    node1.left = node2
    node1.right = node3

    node2.left = node4

    node3.left = node5
    node3.right = node6

    node5.left = node7

    Solution().findBottomLeftValue(node1).let(::println)
}