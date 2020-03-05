
/**
 * Created by Inno Fang on 2018/3/21.
 */


class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 57 / 57 test cases passed.
 * Status: Accepted
 * Runtime: 228 ms
 */
class Solution {
    fun isSameTree(p: TreeNode?, q: TreeNode?): Boolean {
        if (null == p && null == q) return true
        if (null == q || null == p) return false
        return p.`val` == q.`val` && isSameTree(p.left, q.left) && isSameTree(p.right, q.right)
    }
}