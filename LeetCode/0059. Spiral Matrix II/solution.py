"""
20 / 20 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        dx = [0, 1, 0, -1]
        dy = [1, 0, -1, 0]
        x, y, d = 0, 0, 0
        grid = [[0] * n for _ in range(n)]
        for k in range(1, n * n + 1):
            grid[x][y] = k
            xx, yy = x + dx[d], y + dy[d]
            if xx < 0 or xx == n or yy < 0 or yy == n or grid[xx][yy]:
                d = (d + 1) % 4
                xx, yy = x + dx[d], y + dy[d]
            x, y = xx, yy
        return grid
