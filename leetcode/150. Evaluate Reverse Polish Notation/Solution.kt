package algorithm._150_Evaluate_Reverse_Polish_Notation

/**
 * Created by Inno Fang on 2018/2/3.
 */

/**
 *
 * 20 / 20 test cases passed.
 * Status: Accepted
 * Runtime: 346 ms
 */
class Solution {
    fun evalRPN(tokens: Array<String>): Int {
        val vals = java.util.Stack<Int>()
        tokens.forEach {
            when (it) {
                "+" -> {
                    val v = vals.pop()
                    vals.push(vals.pop() + v)
                }
                "-" -> {
                    val v = vals.pop()
                    vals.push(vals.pop() - v)
                }
                "*" -> {
                    val v = vals.pop()
                    vals.push(vals.pop() * v)
                }"/" -> {
                    val v = vals.pop()
                    vals.push(vals.pop() / v)
                }
                else -> vals.push(it.toInt())
            }
        }
        return vals.pop()
    }
}

fun main(args: Array<String>) {
    Solution().evalRPN(arrayOf("2", "1", "+", "3", "*")).let(::println)
    Solution().evalRPN(arrayOf("4", "13", "5", "/", "+")).let(::println)
}