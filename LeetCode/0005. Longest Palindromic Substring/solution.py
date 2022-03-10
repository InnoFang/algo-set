"""
180 / 180 test cases passed.
Runtime: 4420 ms
Memory Usage: 180 MB
"""
class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        dp = [[False] * n for _ in range(n)]
        for i in range(n): dp[i][i] = True
        lo = hi = 0
        for i in range(n - 1, -1, -1):
            for j in range(i, n):
                if s[i] == s[j]:
                    if j - i <= 1:
                        dp[i][j] = True
                    else:
                        dp[i][j] = dp[i + 1][j - 1]
                if dp[i][j] and j - i > hi - lo:
                    lo, hi = i, j
        return s[lo:hi+1]
    