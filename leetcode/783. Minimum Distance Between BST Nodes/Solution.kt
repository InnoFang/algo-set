package algorithm._783_Minimum_Distance_Between_BST_Nodes

/**
 * Created by Inno Fang on 2018/2/11.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {

    var arr = ArrayList<Int>()
    fun minDiffInBST(root: TreeNode?): Int {
        inOrderedTraversal(root)
        var min = Int.MAX_VALUE
        for (i in 1 until arr.size) {
            min = minOf(min, arr[i] - arr[i-1])
        }
        return min
    }

    private fun inOrderedTraversal(node: TreeNode?) {
        if (node != null) {
            inOrderedTraversal(node.left)
            arr.add(node.`val`)
            inOrderedTraversal(node.right)
        }
    }
}

fun main(args: Array<String>) {
    val root = TreeNode(4)
    val node1 = TreeNode(2)
    val node2 = TreeNode(6)
    val node3 = TreeNode(1)
    val node4 = TreeNode(3)

    root.left = node1
    root.right = node2
    node1.left = node3
    node1.right = node4
    Solution().minDiffInBST(root).let(::println)
}