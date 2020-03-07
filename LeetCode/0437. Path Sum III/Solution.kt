class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun pathSum(root: TreeNode?, sum: Int)
            : Int = if (root == null) 0 else findPath(root, sum) + pathSum(root.left, sum) + pathSum(root.right, sum)


    private fun findPath(root: TreeNode?, num: Int): Int {
        if (root == null) return 0
        var res = 0
        if (root.`val` == num) res++
        res += findPath(root.left, num - root.`val`)
        res += findPath(root.right, num - root.`val`)
        return res
    }
}
