"""
596 / 596 test cases passed.
Runtime: 128 ms
Memory Usage: 14.6 MB
"""
class Solution:
    def nthUglyNumber(self, n: int) -> int:
        dp = [1] * n
        p2, p3, p5 = 0, 0, 0
        for i in range(1, n):
            n2, n3, n5 = dp[p2] * 2, dp[p3] * 3, dp[p5] * 5
            dp[i] = min(n2, n3, n5)
            if n2 == dp[i]:
                p2 += 1
            if n3 == dp[i]:
                p3 += 1
            if n5 == dp[i]:
                p5 += 1
        return dp[n - 1]
