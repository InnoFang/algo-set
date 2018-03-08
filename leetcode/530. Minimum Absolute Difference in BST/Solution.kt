import sun.applet.Main

/**
 * Created by Inno Fang on 2018/3/8.
 */

class TreeNode(var `val`: Int = 0) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

/**
 * 186 / 186 test cases passed.
 * Status: Accepted
 * Runtime: 336 ms
 */
class Solution {
    fun getMinimumDifference(root: TreeNode?): Int {
        val inOrder = mutableListOf<Int>()
        val difference = intArrayOf(Int.MAX_VALUE)
        inOrderTraversal(root, inOrder, difference)
        return difference[0]
    }

    private fun inOrderTraversal(root: TreeNode?, inOrder: MutableList<Int>, difference: IntArray) {
        root?.let {
            root.left?.let { inOrderTraversal(it, inOrder, difference) }
            if (inOrder.size > 0) {
                val diff = Math.abs(inOrder[inOrder.lastIndex] - root.`val`)
                if (diff < difference[0])
                    difference[0] = diff
            }
            inOrder.add(root.`val`)
            root.right?.let { inOrderTraversal(it, inOrder, difference) }
        }
    }
}

