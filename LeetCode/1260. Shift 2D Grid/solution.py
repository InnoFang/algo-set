"""
107 / 107 test cases passed.
Runtime: 60 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def shiftGrid(self, grid: List[List[int]], k: int) -> List[List[int]]:
        m, n = len(grid), len(grid[0])
        ans = [[0] * n for _ in range(m)]
        for i, row in enumerate(grid):
            for j, v in enumerate(row):
                index = (i * n + j + k) % (m * n)
                ans[index // n][index % n] = v
        return ans
