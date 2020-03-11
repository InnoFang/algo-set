"""
200 / 200 test cases passed.
Status: Accepted
Runtime: 36 ms
"""
class Solution:
    def maxProfit(self, prices: List[int]) -> int: 
        minP, profit = float('inf'), 0
        for i in range(len(prices)):
            minP = min(minP, prices[i])
            profit = max(profit, prices[i] - minP)
        return profit