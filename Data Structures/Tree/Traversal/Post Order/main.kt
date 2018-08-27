import java.util.Stack

class TreeNode(var value: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/*
The binary tree in this example is shown as follow

       1
     /   \
    2     3
   / \   /
  4   5 6
     /
    7

post-order traversal: 4 7 5 2 6 3 1
*/

fun postorderTraversalByRecursion(root: TreeNode?) {
    if (root == null) return

    postorderTraversalByRecursion(root.left)
    postorderTraversalByRecursion(root.right)
    print("${root.value} ")
}


fun postorderTraversal(root: TreeNode?) {
    if (root == null) return

    val nodeStack = Stack<TreeNode>()
    nodeStack.push(root)
    var pre: TreeNode? = null
    while (nodeStack.isNotEmpty()) {
        val cur = nodeStack.peek()
        if (cur.left != null && cur.left != pre && cur.right != pre) {
            nodeStack.push(cur.left)
        } else if (cur.right != null && cur.right != pre) {
            nodeStack.push(cur.right);
        } else {
            print("${cur.value} ")
            pre = cur
            nodeStack.pop()
        }
    }
}

fun generateBTree(nodes: Array<Int?>, index: Int): TreeNode? {
    var node: TreeNode? = null

    if (index < nodes.size && nodes[index] != null) {
        node = TreeNode(nodes[index]!!)
        node.left = generateBTree(nodes, index * 2 + 1)
        node.right = generateBTree(nodes, index * 2 + 2)
    }

    return node
}

fun main(args: Array<String>) {
    val nodes = arrayOf(1, 2, 3, 4 ,5, 6, null, null, null, 7)

    val root = generateBTree(nodes, 0)

    postorderTraversalByRecursion(root)
    println()

    postorderTraversal(root)
    println()
}