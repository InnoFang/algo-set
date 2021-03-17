"""
62 / 62 test cases passed.
Runtime: 64 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def numDistinct(self, s: str, t: str) -> int:
        dp = [[0] * (len(t) + 1) for _ in range(len(s) + 1)]
        for i in range(len(dp)):
            dp[i][0] = 1 
        for i in range(1, len(dp)):
            for j in range(1, len(dp[0])):
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] if s[i - 1] == t[j - 1] else dp[i - 1][j]
        return dp[-1][-1]
