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


/**
 * 303 / 303 test cases passed.
 * Status: Accepted
 * Runtime: 212 ms
 */
class Solution2 {
    fun myPow(x: Double, n: Int): Double {
        return when {
            n < 0 -> (1.0 / x) * myPow(1.0 / x, Math.abs(n + 1))
            n == 0 -> 1.0
            n == 1 -> x
            n == 2 -> x * x
            n and 1 == 0 -> myPow(myPow(x, n / 2), 2)
            else -> x * myPow(myPow(x, (n - 1) / 2), 2)
        }
    }
}

fun main(args: Array<String>) {
    Solution().myPow(2.00000, 10).let(::println)
    Solution().myPow(2.10000, 3).let(::println)
    Solution().myPow(34.00515, -3).let(::println)
    Solution().myPow(1.00000, -2147483648).let(::println)
}