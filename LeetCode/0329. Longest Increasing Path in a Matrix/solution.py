"""
138 / 138 test cases passed.
Runtime: 256 ms
Memory Usage: 16 MB
"""
class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        m, n = len(matrix), len(matrix[0])
        memo = [[0] * n for _ in range(m)]
        def dfs(x, y):
            if memo[x][y]:
                return memo[x][y]
            memo[x][y] += 1
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and matrix[xx][yy] > matrix[x][y]:
                    memo[x][y] = max(memo[x][y], dfs(xx, yy) + 1)
            return memo[x][y]
        ans = 0
        for i in range(m):
            for j in range(n):
                ans = max(ans, dfs(i, j))
        return ans
