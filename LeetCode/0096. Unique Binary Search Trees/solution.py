"""
19 / 19 test cases passed.
Runtime: 32 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def numTrees(self, n: int) -> int:
        dp = [0] * (n + 1)
        dp[0] = dp[1] = 1
        for i in range(2, n + 1):
            for j in range(i + 1):
                dp[i] += dp[j - 1] * dp[i - j]
        return dp[n]
        