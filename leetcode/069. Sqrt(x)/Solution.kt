/**
 * Created by Inno Fang on 2018/1/27.
 */

class Solution {
    fun mySqrt(x: Int): Int {
        val err: Double = 1e-15
        var t = x.toDouble()
        while (Math.abs(t - x.toDouble() / t) > err * t)
            t = (x.toDouble() / t + t) / 2.0
        return t.toInt()
    }
}

fun main(args: Array<String>) {
    Solution().mySqrt(8).let(::println)
}