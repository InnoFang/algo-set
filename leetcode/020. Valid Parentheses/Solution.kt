/**
 * Created by Inno Fang on 2018/1/15.
 */

/**
 * 73 / 73 test cases passed.
 * Status: Accepted
 * Runtime: 307 ms
 */
class Solution {
    fun isValid(s: String): Boolean {
        val t = java.util.Stack<Char>()
        (s.toCharArray()).forEach { c ->
            when (c) {
                '{', '[', '(' -> t.push(c)
                else -> {
                    if (t.isEmpty()) return false
                    when(c) {
                        ')' -> if (t.pop() != '(') return false
                        ']' -> if (t.pop() != '[') return false
                        '}' -> if (t.pop() != '{') return false
                    }
                }
            }
        }
        return t.isEmpty()
    }
}

fun main(args: Array<String>) {
    Solution().isValid("[").let(::println)
    Solution().isValid("()[]{}").let(::println)
    Solution().isValid("([)]").let(::println)
    Solution().isValid("(]").let(::println)
    Solution().isValid("()))))").let(::println)
    Solution().isValid("[[[[[[[[[]").let(::println)
}