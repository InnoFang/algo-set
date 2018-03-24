/**
 * Created by Inno Fang on 2018/3/24.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 176 / 176 test cases passed.
 * Status: Accepted
 * Runtime: 340 ms
 */
class Solution {
    fun isSubtree(s: TreeNode?, t: TreeNode?): Boolean {
        if (null == s || null == t) return s == t
        val que = java.util.LinkedList<TreeNode>()
        que.offer(s)
        while (que.isNotEmpty()) {
            val node = que.poll()
            if (isSame(node, t)) return true
            node.left?.let(que::offer)
            node.right?.let(que::offer)
        }
        return false
    }

    private fun isSame(node: TreeNode?, t: TreeNode?): Boolean {
        if (node == null || t == null) return node == t
        return node.`val` == t.`val` && isSame(node.left, t.left) && isSame(node.right, t.right)
    }
}