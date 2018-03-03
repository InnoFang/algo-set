/**
 * Created by Inno Fang on 2018/3/3.
 */


/**
 * 302 / 302 test cases passed.
 * Status: Accepted
 * Runtime: 520 ms
 */
class Solution {
    fun monotoneIncreasingDigits(N: Int): Int {
        val src = N.toString()
        var res = ""
        src.toCharArray().forEachIndexed { idx, c ->
            (c..'9').forEach { num ->
                if (src < res + Array(src.length - idx) { num }.joinToString("")) {
                    res += (num - 1)
                    return@forEachIndexed
                }
            }
            res += '9'
        }
        return res.toInt()
    }

}

fun main(args: Array<String>) {
    Solution().monotoneIncreasingDigits(332).let(::println)
    Solution().monotoneIncreasingDigits(1234).let(::println)
    Solution().monotoneIncreasingDigits(10).let(::println)
}