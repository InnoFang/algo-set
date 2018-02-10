/**
 * Created by Inno Fang on 2018/2/10.
 */

import java.util.*
class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}


/**
 * 34 / 34 test cases passed.
 * Status: Accepted
 * Runtime: 417 ms
 */
class Solution {
    fun levelOrder(root: TreeNode?): List<List<Int>> {
        val res = ArrayList<ArrayList<Int>>()
        if (root == null) return res

        val que = LinkedList<TreeNode>()
        que.add(root)
        var start = 0
        var end = que.size
        var level = ArrayList<Int>()
        while (que.isNotEmpty()) {
            val node = que.poll()
            level.add(node.`val`)
            if (node.left != null) que.add(node.left!!)
            if (node.right != null) que.add(node.right!!)
            start++
            if (start == end) {
                end = que.size
                start = 0
                res.add(level)
                level = ArrayList()
            }
        }
        return res
    }
}

/**
 * 34 / 34 test cases passed.
 * Status: Accepted
 * Runtime: 339 ms
 */
class Solution2 {
    fun levelOrder(root: TreeNode?): List<List<Int>> {
        val res = ArrayList<ArrayList<Int>>()
        if (root == null) return res

        val que = LinkedList<Pair<TreeNode, Int>>()
        que.add(Pair(root, 0))
        while (que.isNotEmpty()) {
            val node = que.peek().first
            val level = que.peek().second
            que.poll()

            if (level == res.size)
                res.add(ArrayList())

            res[level].add(node.`val`)

            node.left?.let { que.add(Pair(it, level + 1)) }
            node.right?.let { que.add(Pair(it, level + 1)) }
        }

        return res
    }
}


fun main(args: Array<String>) {
    val root = TreeNode(3)
    val node1 = TreeNode(9)
    val node2 = TreeNode(20)
    val node3 = TreeNode(15)
    val node4 = TreeNode(7)

    root.left = node1
    root.right = node2
    node2.left = node3
    node2.right = node4

    Solution2().levelOrder(root).forEach { it.forEach { print("$it ") }; println() }
}