"""
Runtime: 112 ms
Memory Usage: 15.4 MB
"""
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        def max_pooling_kernel(x, y):
            mx = 0
            for i in range(x, x + 3):
                for j in range(y, y + 3):
                    mx = max(mx, grid[i][j])
            return mx
        n = len(grid)
        ans = [[0] * (n - 2) for _ in range(n - 2)]
        for i in range(n - 2):
            for j in range(n - 2):
                ans[i][j] = max_pooling_kernel(i, j)
        return ans
