"""
28 / 28 test cases passed.
Runtime: 124 ms
Memory Usage: 15 MB
"""
class Solution:
    def change(self, amount: int, coins: List[int]) -> int:
        dp = [1] + [0] * amount
        for coin in coins:
            for i in range(coin, amount + 1):
                dp[i] += dp[i - coin]
        return dp[amount]
    