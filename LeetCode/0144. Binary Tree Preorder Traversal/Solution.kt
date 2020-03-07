/**
 * Created by Inno Fang on 2018/1/16.
 */
import java.util.*
import kotlin.collections.ArrayList

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    class Command(var s: String, var node: TreeNode?)

    fun preorderTraversal(root: TreeNode?): List<Int> {
        val res = ArrayList<Int>()
        if (null == root) return res

        val stack = java.util.Stack<Command>()
        stack.push(Command("go", root))

        while (!stack.isEmpty()) {
            val command = stack.pop()

            if (command.s == "print")
                res.add(command.node?.`val`!!)
            else {
                if (null != command.node?.right)
                    stack.push(Command("go", command.node?.right))
                if (null != command.node?.left)
                    stack.push(Command("go", command.node?.left))
                stack.push(Command("print", command.node))
            }
        }
        return res
    }
}

/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 248 ms
 */
class Solution2 {
    fun preorderTraversal(root: TreeNode?): List<Int> {
        val res = LinkedList<Int>()
        val stack = Stack<TreeNode>()
        var node = root
        while (null != node || !stack.isEmpty()) {
            node = if (null != node) {
                res.add(node.`val`)
                stack.push(node.right)
                node.left
            } else {
                stack.pop()
            }
        }
        return res
    }
}

class Solution3 {
    val res = ArrayList<Int>()
    fun preorderTraversal(root: TreeNode?): List<Int> {
        preorder(root)
        return res
    }

    private fun preorder(root: TreeNode?) {
        if (null != root) {
            res.add(root.`val`)
            preorderTraversal(root.left)
            preorderTraversal(root.right)
        }
    }
}

fun main(args: Array<String>) {
    val root = TreeNode(1)
    root.left = null
    val node1 = TreeNode(2)
    root.right = node1
    val node2 = TreeNode(3)
    node1.left = node2
    node2.right = null
    Solution2().preorderTraversal(root).forEach { print("$it ") }; println()
}
/*
    1
     \
      2
     /
    3

pre: 123
in: 132
post:321
 */
 