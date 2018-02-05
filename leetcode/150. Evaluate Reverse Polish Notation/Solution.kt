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
                }
                "/" -> {
                    val v = vals.pop()
                    vals.push(vals.pop() / v)
                }
                else -> vals.push(it.toInt())
            }
        }
        return vals.pop()
    }
}

class Solution2 {
    fun evalRPN(tokens: Array<String>): Int {
        val ops = mapOf(
                "+" to fun(x: Int, y: Int) = y + x,
                "-" to fun(x: Int, y: Int) = y - x,
                "*" to fun(x: Int, y: Int) = y * x,
                "/" to fun(x: Int, y: Int) = y / x)
        val vals = java.util.Stack<Int>()
        tokens.forEach { t ->
            ops[t]?.let { vals.push(it(vals.pop(), vals.pop())) }
                    ?: let { vals.push(t.toInt()) }
        }
        return vals.pop()
    }
}

fun main(args: Array<String>) {
    Solution2().evalRPN(arrayOf("2", "1", "+", "3", "*")).let(::println)
    Solution2().evalRPN(arrayOf("4", "13", "5", "/", "+")).let(::println)
    Solution2().evalRPN(arrayOf("10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+")).let(::println)
}