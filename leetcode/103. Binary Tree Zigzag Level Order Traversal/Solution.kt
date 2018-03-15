/**
 * Created by Inno Fang on 2018/3/15.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun zigzagLevelOrder(root: TreeNode?): List<List<Int>> {
        if (root == null) return emptyList()
        val que = java.util.LinkedList<TreeNode>()
        que.add(root)
        val result = ArrayList<ArrayList<Int>>()
        var level = 0
        while (que.isNotEmpty()) {
            val rows = ArrayList<Int>()
            (0 until que.size).forEach {
                val node = que.poll()
                rows.add(node.`val`)
                node.left?.let(que::add)
                node.right?.let(que::add)
            }
            if (level % 2 == 1) rows.reverse()
            result.add(rows)
            level++
        }
        return result
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

    node2.left = node4
    node3.right = node5

    // input [1,2,3,4,null,null,5]
    Solution().zigzagLevelOrder(node1).forEach {
        it.forEach {
            print("$it ")
        }
        println()
    }
    // output [[1],[3,2],[4,5]]
}