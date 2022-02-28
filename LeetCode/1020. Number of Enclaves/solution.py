"""
57 / 57 test cases passed.
Runtime: 80 ms
Memory Usage: 17 MB
"""
class Solution:
    def numEnclaves(self, grid: List[List[int]]) -> int:
        ans, m, n = 0, len(grid), len(grid[0])
        def dfs(x, y):
            grid[x][y] = 0
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] == 1:
                    dfs(xx, yy)
        
        for i in range(m):
            if grid[i][0]: dfs(i, 0)
            if grid[i][n - 1]: dfs(i, n - 1)
        for i in range(1, n - 1):
            if grid[0][i]: dfs(0, i)
            if grid[m - 1][i]: dfs(m - 1, i)
        for i in range(1, m - 1):
            for j in range(1, n - 1):
                if grid[i][j]:
                    ans += 1
        return ans
