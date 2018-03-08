/**
 * Created by Inno Fang on 2018/1/17.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}


/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 284 ms
 */
class Solution {
    class Command(var s: String, var node: TreeNode?)

    fun inorderTraversal(root: TreeNode?): List<Int> {
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
                stack.push(Command("print", command.node))
                if (null != command.node?.left)
                    stack.push(Command("go", command.node?.left))

            }
        }
        return res
    }
}



/**
 * 68 / 68 test cases passed.
 * Status: Accepted
 * Runtime: 276 ms
 */
class Solution2 {
    fun inorderTraversal(root: TreeNode?): List<Int> {
        val res = ArrayList<Int>()
        val stack = java.util.Stack<TreeNode>()
        var node = root
        while (null != node || stack.isNotEmpty()) {
            while(null != node) {
                stack.add(node)
                node = node.left
            }
            node = stack.pop()
            res.add(node.`val`)
            node = node.right
        }
        return res
    }
}
