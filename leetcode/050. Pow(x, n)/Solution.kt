/**
 * Created by Inno Fang on 2018/3/18.
 */

/**
 * 303 / 303 test cases passed.
 * Status: Accepted
 * Runtime: 204 ms
 */
class Solution {
    fun myPow(x: Double, n: Int): Double {
        var ans = 1.0
        var x = x
        var m = if (n < 0) -n.toLong() else n.toLong()
        while (m != 0L) {
            if (m and 1L == 1L) ans *= x
            x *= x
            m = m shr 1
        }
        return if (n < 0) 1 / ans else ans
    }
}

fun main(args: Array<String>) {
    Solution().myPow(2.00000, 10).let(::println)
    Solution().myPow(2.10000, 3).let(::println)
    Solution().myPow(34.00515, -3).let(::println)
    Solution().myPow(1.00000, -2147483648).let(::println)
}