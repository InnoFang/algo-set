/**
 * 200 / 200 test cases passed.
 * Status: Accepted
 * Runtime: 224 ms
 */
class Solution {
    fun maxProfit(prices: IntArray): Int {
        if (prices.isEmpty()) return 0
        var profit = 0
        var min = prices[0]
        for (i in 1 until prices.size) {
            if (min > prices[i]) min = prices[i]
            else {
                val diff = prices[i] - min
                profit = if (diff > profit) diff else profit
            }
        }
        return profit
    }
} 
