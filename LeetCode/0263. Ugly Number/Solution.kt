/**
 * Created by Inno Fang on 2017/12/27.
 */

/**
 * 1012 / 1012 test cases passed.
 * Status: Accepted
 * Runtime: 315 ms
 */
class Solution {
    fun isUgly(num: Int): Boolean {
        var num = num
        while (true) {
            num /= when {
                num <= 0 -> return false
                num % 2 == 0 -> 2
                num % 3 == 0 -> 3
                num % 5 == 0 -> 5
                else -> return num == 1
            }
        }
    }
}

fun main(args: Array<String>) {
    Solution().isUgly(6).let(::println)
    Solution().isUgly(8).let(::println)
    Solution().isUgly(14).let(::println)
}