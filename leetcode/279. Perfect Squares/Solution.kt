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