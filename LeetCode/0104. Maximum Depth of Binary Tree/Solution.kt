/**
 * Definition for a binary tree node.
 * class TreeNode(var `val`: Int = 0) {
 *     var left: TreeNode? = null
 *     var right: TreeNode? = null
 * }
 */

/**
 * 38 / 38 test case passed
 * Status: Accepted
 * Runtime: 394 ms
 */
class Solution {
    fun maxDepth(root: TreeNode?): Int {
        if (null == root) return 0
        return maxOf(maxDepth(root.left), maxDepth(root.right)) + 1
    }
}
