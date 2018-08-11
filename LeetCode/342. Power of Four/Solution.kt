/**
 * Created by Inno Fang on 2017/12/5.
 */

/**
 * 1060 / 1060 test cases passed.
 * Status: Accepted
 * Runtime: 352 ms
 */
class Solution {
    fun isPowerOfFour(num: Int): Boolean {
        if (num == 0) return false
        val res = Math.log10(num.toDouble()) / Math.log10(4.0)
        return (res - res.toInt()) < 1e-10
    }
}


fun main(args: Array<String>) {
    Solution().isPowerOfFour(0).let(::println)
    Solution().isPowerOfFour(16).let(::println)
    Solution().isPowerOfFour(1073741824).let(::println)
}
