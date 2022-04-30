"""
90 / 90 test cases passed.
Runtime: 36 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def projectionArea(self, grid: List[List[int]]) -> int:
        n, m = len(grid), len(grid[0])
        total = sum(1 for i in range(n) for j in range(m) if grid[i][j])
        row_sum = sum(max(i) for i in grid)
        cols = [0] * m
        for j in range(m):
            for i in range(n):
                cols[j] = max(cols[j], grid[i][j])
        return total + row_sum + sum(cols)
