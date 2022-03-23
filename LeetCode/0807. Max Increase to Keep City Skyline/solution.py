"""
133 / 133 test cases passed.
Runtime: 48 ms
Memory Usage: 15 MB
"""
class Solution:
    def maxIncreaseKeepingSkyline(self, grid: List[List[int]]) -> int:
        n = len(grid)
        max_rows, max_cols = [0] * n, [0] * n
        for i in range(n):
            for j in range(n):
                max_rows[i] = max(max_rows[i], grid[i][j])
                max_cols[j] = max(max_cols[j], grid[i][j])
        ans = 0
        for i in range(n):
            for j in range(n):
                ans += min(max_rows[i], max_cols[j]) - grid[i][j]
        return ans
