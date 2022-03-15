"""
61 / 61 test cases passed.
Runtime: 40 ms
Memory Usage: 16.4 MB
"""
class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        for i in range(1, n): grid[0][i] += grid[0][i - 1]
        for i in range(1, m): grid[i][0] += grid[i - 1][0]
        for i in range(1, m):
            for j in range(1, n):
                grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]) 
        return grid[m - 1][n - 1]
                