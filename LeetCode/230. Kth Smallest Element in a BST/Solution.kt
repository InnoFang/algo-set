/**
 * Created by Inno Fang on 2018/3/31.
 */


class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 91 / 91 test cases passed.
 * Status: Accepted
 * Runtime: 244 ms
 */
class Solution {
    fun kthSmallest(root: TreeNode?, k: Int): Int {
        return ArrayList<Int>().also { inorder(root, it) }[k-1]
    }

    private fun inorder(root: TreeNode?, list: ArrayList<Int>) {
        root?.let {
            inorder(root.left, list)
            list.add(root.`val`)
            inorder(root.right, list)
        }
    }
}