"""
47 / 47 test cases passed.
Runtime: 64 ms
Memory Usage: 15.5 MB
"""
class Solution:
    def closedIsland(self, grid: List[List[int]]) -> int:
        ans, m, n = 0, len(grid), len(grid[0])
        def dfs(x, y):
            grid[x][y] = 1
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] == 0:
                    dfs(xx, yy)
        
        for i in range(m):
            if not grid[i][0]: dfs(i, 0)
            if not grid[i][n - 1]: dfs(i, n - 1)
        for i in range(1, n - 1):
            if not grid[0][i]: dfs(0, i)
            if not grid[m - 1][i]: dfs(m - 1, i)
        for i in range(1, m - 1):
            for j in range(1, n - 1):
                if not grid[i][j]:
                    ans += 1
                    dfs(i, j)
        return ans
