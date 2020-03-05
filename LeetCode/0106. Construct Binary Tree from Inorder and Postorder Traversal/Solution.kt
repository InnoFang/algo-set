/**
 * Created by Inno Fang on 2018/3/20.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 203 / 203 test cases passed.
 * Status: Accepted
 * Runtime: 596 ms
 */
class Solution {
    fun buildTree(inorder: IntArray, postorder: IntArray): TreeNode? {
        if (inorder.isEmpty() || postorder.isEmpty()) return null
        val node = TreeNode(postorder.last())
        val idx = inorder.lastIndexOf(node.`val`)
        node.left = buildTree(inorder.sliceArray(0 until idx), postorder.sliceArray(0 until idx))
        node.right = buildTree(inorder.sliceArray(idx + 1..inorder.lastIndex), postorder.sliceArray(idx until postorder.lastIndex))
        return node
    }
}