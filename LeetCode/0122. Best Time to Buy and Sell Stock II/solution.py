"""
200 / 200 test cases passed.
Runtime: 40 ms
Memory Usage: 15.9 MB
"""
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        ans = 0
        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                ans += prices[i] - prices[i - 1]
        return ans
