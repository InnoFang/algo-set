# [122. Best Time to Buy and Sell Stock II](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/)

![](https://img.shields.io/badge/Difficulty-Easy-green.svg)

<details>
<summary style="color:#4FC3F7">Topics</summary>

* [`Array`](https://leetcode.com/tag/array/)
* [`Greedy`](https://leetcode.com/tag/greedy/)

</details>
<br />


Say you have an array for which the i_th_ element is the price of a given stock on day _i_.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).

## Solution

**题目大意**

给定一个非负数组，第 i 个元素表示这一天股票的价格，每天只能买入或卖出或不操作，不能同时买入或卖出，请问如何安排能使最终收益最大

**解题思路**

保证结果最大，其实把只要把股票收益为正的都算上就可以了，即根据第二天的情况，第二天比第一天涨了即在第一天买入，第二天卖出，否则不操作，这题没有想的那么复杂

kotlin 代码如下

```kotlin
/**
 * 198 / 198 test cases passed.
 * Status: Accepted
 * Runtime: 268 ms
 */
class Solution {
    fun maxProfit(prices: IntArray): Int {
        var result = 0
        for (i in (1..prices.lastIndex)) {
            if (prices[i] > prices[i - 1]) {
                result += prices[i] - prices[i - 1]
            }
        }
        return result
    }
}
```