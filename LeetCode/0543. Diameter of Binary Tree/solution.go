/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */

/**
 * 106 / 106 test case pass
 * Status: Accepted
 * Runtime: 4 ms
 */
func diameterOfBinaryTree(root *TreeNode) int {
    ans := 1
    depth(root, &ans)
    return ans - 1
}

func depth(root *TreeNode, maxDepth *int) int {
    if root == nil {
        return 0
    }
    l := depth(root.Left, maxDepth)
    r := depth(root.Right, maxDepth)
    if *maxDepth < l + r + 1 {
        *maxDepth = l + r + 1
    }
    if l > r {
        return l + 1
    } else {
        return r + 1
    }
}
