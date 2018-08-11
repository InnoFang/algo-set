/**
 * Created by Inno Fang on 2018/1/18.
 */
import java.util.*
import kotlin.collections.ArrayList

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Command(var s: String, var node: TreeNode?)

class Solution {
    fun postorderTraversal(root: TreeNode?): List<Int> {
        val res = ArrayList<Int>()
        if (null == root) return res

        val stack = Stack<Command>()
        stack.push(Command("go", root))

        while (!stack.isEmpty()) {
            val command = stack.pop()

            if (command.s == "print")
                res.add(command.node?.`val`!!)
            else {
                stack.push(Command("print", command.node))
                if (null != command.node?.right)
                    stack.push(Command("go", command.node?.right))
                if (null != command.node?.left)
                    stack.push(Command("go", command.node?.left))
            }
        }
        return res
    }
}