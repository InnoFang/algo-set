"""
49 / 49 test cases passed.
Runtime: 116 ms
Memory Usage: 24.1 MB
"""
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m, n = len(grid), len(grid[0])
        def dfs(x, y):
            grid[x][y] = '0'
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] == '1':
                    dfs(xx, yy)
        ans = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    ans += 1
                    dfs(i, j)
        return ans
