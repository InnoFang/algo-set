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

in-order traversal: 4 2 7 5 1 6 3
*/

fun inorderTraversalByRecursion(root: TreeNode?) {
    if (root == null) return

    inorderTraversalByRecursion(root.left)
    print("${root.value} ")
    inorderTraversalByRecursion(root.right)
}


fun inorderTraversal(root: TreeNode?) {
    if (root == null) return

    val nodeStack = Stack<TreeNode>()
    var node = root
    while (node != null || nodeStack.isNotEmpty()) {
        while (node != null) {
            nodeStack.push(node)
            node = node.left
        }
        node = nodeStack.pop()
        print("${node.value} ")
        node = node.right

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

    inorderTraversalByRecursion(root)
    println()

    inorderTraversal(root)
    println()
}