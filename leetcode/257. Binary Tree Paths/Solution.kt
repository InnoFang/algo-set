package algorithm._257_Binary_Tree_Paths

/**
 * Created by Inno Fang on 2018/1/28.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    val res = ArrayList<String>()
    fun binaryTreePaths(root: TreeNode?): List<String> {
        if (root == null) return res

        if (root.right == null && root.left == null)
            res.add("${root.`val`}")
        else {
            tryGetPaths(root.left, "${root.`val`}")
            tryGetPaths(root.right, "${root.`val`}")
        }

        return res
    }

    private fun tryGetPaths(node: TreeNode?, path: String) {
        if (node == null)
            return
        if (node.right == null && node.left == null)
            res.add("$path->${node.`val`}")
        else {
            tryGetPaths(node.left, "$path->${node.`val`}")
            tryGetPaths(node.right, "$path->${node.`val`}")
        }
    }
}

class Solution2 {
    fun binaryTreePaths(root: TreeNode?): List<String> {
        val res = ArrayList<String>()

        if (root == null) return res
        if (root.left == null && root.right == null) {
            res.add("${root.`val`}")
            return res
        }
        binaryTreePaths(root.left).forEach{ s -> res.add("${root.`val`}->$s") }
        binaryTreePaths(root.right).forEach{ s -> res.add("${root.`val`}->$s") }
        return res
    }
}

fun main(args: Array<String>) {
    val root = TreeNode(1)
    val node1 = TreeNode(2)
    val node2 = TreeNode(3)
    val node3 = TreeNode(5)
    root.left = node1
    root.right = node2
    node1.left = null
    node1.right = node3
    Solution2().binaryTreePaths(root).forEach(::println)
    val root2 = TreeNode(1)
    Solution2().binaryTreePaths(root2).forEach(::println)

}