"""
210 / 210 test cases passed.
Runtime: 44 ms
Memory Usage: 15.7 MB
"""
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        # dp[i][0] hold the stock
        # dp[i][1] unhold stock under cooldown
        # dp[i][2] unhold stock 
        #       //状态转移图：
        #   
        #     ↙--、  卖出(+price)             一天后        ↙--、
        #   持股 -↑-----------------> 冷冻期 ----------> 不持股 -↑
        #     ↑-------------------------------------------------|
        #                       买入(-price)
        #
        dp = [[0] * 4 for _ in range(n)]
        dp[0][0] = -prices[0]
        for i in range(1, n):
            dp[i][0] = max(dp[i - 1][0], dp[i - 1][2] - prices[i]) 
            dp[i][1] = dp[i - 1][0] + prices[i]
            dp[i][2] = max(dp[i - 1][1], dp[i - 1][2])
        return max(dp[n - 1][1], dp[n - 1][2])
