/**
 * Created by Inno Fang on 2018/1/27.
 */


/**
 * 1017 / 1017 test cases passed.
 * Status: Accepted
 * Runtime: 204 ms
 */
class Solution {
    fun mySqrt(x: Int): Int {
        val err: Double = 1e-10
        var t = x.toDouble()
        while (Math.abs(t - x.toDouble() / t) > err)
            t = (x.toDouble() / t + t) / 2.0
        return t.toInt()
    }
}

fun main(args: Array<String>) {
    Solution().mySqrt(8).let(::println)
}