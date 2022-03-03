"""
113 / 113 test cases passed.
Runtime: 92 ms
Memory Usage: 16.4 MB
"""
class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        m, n = len(heights), len(heights[0])
        def dfs(used, x, y):
            used[x][y] = True
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and not used[xx][yy] and heights[xx][yy] >= heights[x][y]:
                    dfs(used, xx, yy)
        pacific_used = [[False] * n for _ in range(m)] 
        atlantic_used = [[False] * n for _ in range(m)] 
        for i in range(m):
            dfs(pacific_used, i, 0)
            dfs(atlantic_used, i, n - 1)
        for i in range(n):
            dfs(pacific_used, 0, i)
            dfs(atlantic_used, m - 1, i)
        ans = []
        for i in range(m):
            for j in range(n):
                if pacific_used[i][j] and atlantic_used[i][j]:
                    ans.append([i, j])
        return ans
        