/**
 * Created by Inno Fang on 2018/3/16.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 41 / 41 test cases passed.
 * Status: Accepted
 * Runtime: 232 ms
 */
class Solution {
    fun minDepth(root: TreeNode?): Int {
        root ?: let { return 0 }
        val (l, r) = (minDepth(root.left) to minDepth(root.right))
        return 1 + if (l == 0 || r == 0) maxOf(l, r) else minOf(l, r)
    }
}
