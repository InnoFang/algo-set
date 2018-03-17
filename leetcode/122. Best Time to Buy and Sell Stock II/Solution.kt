/**
 * Created by Inno Fang on 2018/3/17.
 */


/**
 * 198 / 198 test cases passed.
 * Status: Accepted
 * Runtime: 264 ms
 */
class Solution {
    fun maxProfit(prices: IntArray): Int {
        var result = 0
        prices.forEachIndexed { idx, i ->
            if (idx < prices.lastIndex && prices[idx + 1] > i)
                result -= i
            if (idx > 0 && prices[idx-1] < i)
                result += i
        }
        return result
    }
}