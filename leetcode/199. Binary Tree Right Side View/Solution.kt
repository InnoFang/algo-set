/**
 * Created by Inno Fang on 2018/3/5.
 */


class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 210 / 210 test cases passed.
 * Status: Accepted
 * Runtime: 392 ms
 */
class Solution {
    fun rightSideView(root: TreeNode?): List<Int> {
        if (root == null) return listOf()
        val que = java.util.LinkedList<TreeNode>()
        val levelOrder = mutableListOf<MutableList<Int>>()
        var level = mutableListOf<Int>()
        que.add(root)
        var start = 0
        var end = que.size
        while (que.isNotEmpty()) {
            val node = que.poll()
            level.add(node.`val`)
            start++
            node.left?.let(que::add)
            node.right?.let(que::add)

            if (start == end) {
                start = 0
                end = que.size
                levelOrder.add(level)
                level = mutableListOf()
            }
        }

        return levelOrder.map { it.last() }.toMutableList()
    }
}

/**
 * 210 / 210 test cases passed.
 * Status: Accepted
 * Runtime: 260 ms
 */
class Solution2 {
    fun rightSideView(root: TreeNode?): List<Int> {
        if (root == null) return listOf()
        val que = java.util.LinkedList<TreeNode>()
        val res = mutableListOf<Int>()
        que.add(root)
        var start = 0
        var end = que.size
        while (que.isNotEmpty()) {
            val node = que.poll()
            start++
            node.left?.let(que::add)
            node.right?.let(que::add)

            if (start == end) {
                start = 0
                end = que.size
                res.add(node.`val`)
            }
        }

        return res
    }
}


fun main(args: Array<String>) {
    val node1 = TreeNode(1)
    val node2 = TreeNode(2)
    val node3 = TreeNode(3)
    val node4 = TreeNode(4)
    val node5 = TreeNode(5)

    node1.left = node2
    node1.right = node3
    node2.right = node5
    node3.right = node4

    Solution2().rightSideView(node1).forEach { print("$it ") }; println()
}