/**
 * Created by Inno Fang on 2018/1/27.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun hasPathSum(root: TreeNode?, sum: Int): Boolean {
        if (root == null) return false
        // leaf
        if (root.left == null && root.right == null)
            return root.`val` == sum
        return hasPathSum(root.left, sum - root.`val`) ||
                hasPathSum(root.right, sum - root.`val`)
    }
}