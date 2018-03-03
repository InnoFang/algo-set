/**
 * Created by Inno Fang on 2018/1/26.
 */


class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 274 ms
 */
class Solution {
    fun invertTree(root: TreeNode?): TreeNode? {
        if (root == null) return root

        invertTree(root.left)
        invertTree(root.right)
        val node = root.left
        root.left = root.right
        root.right = node
        return root
    }
}

/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 248 ms
 */
class Solution2 {
    fun invertTree(root: TreeNode?): TreeNode? = root?.apply {
        val (l, r) = Pair(left, right)
        left = invertTree(r)
        right = invertTree(l)
    }
}
