"""
728 / 728 test cases passed.
Runtime: 64 ms
Memory Usage: 15.3 MB
"""
class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        ans, m, n = 0, len(grid), len(grid[0])
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 1:
                    que = collections.deque([(i, j)])
                    grid[i][j] = 0
                    count = 1
                    while que:
                        x, y = que.pop()
                        for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                            if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] == 1:
                                count += 1
                                grid[xx][yy] = 0
                                que.append([xx, yy])
                    ans = max(ans, count)
        return ans
