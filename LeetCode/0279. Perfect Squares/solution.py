"""
588 / 588 test cases passed.
Runtime: 3848 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def numSquares(self, n: int) -> int:
        dp = list(range(n + 1))
        for i in range(1, n):
            if i * i > n: break
            for j in range(i * i, n + 1):
               dp[j] = min(dp[j], dp[j - i * i] + 1)
        return dp[-1]
