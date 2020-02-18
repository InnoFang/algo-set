import java.util.LinkedList

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

level-order traversal: 1 2 3 4 5 6 7
*/

fun levelOrderTraversal(root: TreeNode?) {
    if (root == null) return

    val que = LinkedList<TreeNode>()
    que.push(root)
    while (que.isNotEmpty()) {
        val node = que.poll()
        print("${node.value} ")
        if (node.left != null) que.add(node.left!!)
        if (node.right != null) que.add(node.right!!)
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

    levelOrderTraversal(root)
    println()
}