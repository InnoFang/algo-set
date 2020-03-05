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
 * Runtime: 364 ms
 */
class Solution {
    fun buildTree(preorder: IntArray, inorder: IntArray): TreeNode? {
        if (preorder.isEmpty() || inorder.isEmpty()) return null
        val node = TreeNode(preorder[0])
        val idx = inorder.indexOf(preorder[0])
        node.left = buildTree(preorder.sliceArray(1..idx), inorder.sliceArray(0 until idx))
        node.right = buildTree(preorder.sliceArray(idx + 1..preorder.lastIndex), inorder.sliceArray(idx + 1..inorder.lastIndex))
        return node
    }
}