"""
77 / 77 test cases passed.
Runtime: 204 ms
Memory Usage: 27.9 MB
"""
class Solution:
    def maximalSquare(self, matrix: List[List[str]]) -> int:
        m, n = len(matrix), len(matrix[0])
        dp = [[0] * (n + 1) for _ in range(m + 1)]
        sidelen = 0
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == '1':
                    dp[i][j] = min(dp[i - 1][j], dp[i][j -1], dp[i - 1][j - 1]) + 1
                    sidelen = max(sidelen, dp[i][j])
        return sidelen * sidelen
