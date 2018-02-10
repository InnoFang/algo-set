/**
 * Created by Inno Fang on 2017/12/3.
 */

class Solution {
    fun numSquares(n: Int): Int {
        val dp = (0..n + 1).toMutableList()
        // perfect number that lower than n
        val pn = (1..n).map { it * it }.takeWhile { it <= n }.toMutableList()

        (1..n).forEach { i ->
            pn.takeWhile { it <= i }.forEach { j ->
                dp[i] = Math.min(dp[i], 1 + dp[i - j])
            }
        }
        return dp[n]
    }

}

fun main(args: Array<String>) {
    Solution().numSquares(4).let(::println) // 1
    Solution().numSquares(12).let(::println) // 3
    Solution().numSquares(13).let(::println) // 2
    Solution().numSquares(16).let(::println) // 1
    Solution().numSquares(24).let(::println) // 3
    Solution().numSquares(50).let(::println) // 2
}