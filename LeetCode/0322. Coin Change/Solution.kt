/**
 * Created by Inno Fang on 2018/3/4.
 */


/**
 * 182 / 182 test cases passed.
 * Status: Accepted
 * Runtime: 388 ms
 */
class Solution {
    fun coinChange(coins: IntArray, amount: Int): Int {
        val dp = IntArray(amount + 1) { amount + 1 }
        dp[0] = 0
        (1..amount).forEach { i ->
            for (j in coins) {
                if (j <= i) dp[i] = minOf(dp[i], dp[i - j] + 1)
            }
        }
        return if (dp[amount] > amount) -1 else dp[amount]
    }
}


fun main(args: Array<String>) {
    Solution().coinChange(intArrayOf(1, 2, 5), 11).let(::println)
    Solution().coinChange(intArrayOf(2), 3).let(::println)
    Solution().coinChange(intArrayOf(474,83,404,3), 264).let(::println)
}