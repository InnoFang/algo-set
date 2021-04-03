"""
44 / 44 test cases passed.
Runtime: 468 ms
Memory Usage: 22.4 MB
"""
class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        sz1, sz2 = len(text1), len(text2)
        dp = [[0] * (sz2 + 1) for _ in range(sz1 + 1)]
        for i in range(1, sz1 + 1):
            for j in range(1, sz2 + 1):
                dp[i][j] = dp[i-1][j-1] + 1 if text1[i-1] == text2[j-1] else max(dp[i-1][j], dp[i][j-1])
        return dp[-1][-1]
