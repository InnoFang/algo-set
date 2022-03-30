"""
88 / 88 test cases passed.
Runtime: 304 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def shortestPathBinaryMatrix(self, grid: List[List[int]]) -> int:
        n = len(grid)
        if n == 1:
            return 1
        if grid[0][0] or grid[n - 1][n - 1]:
            return -1
        vis = [[False] * n for _ in range(n)]
        que = collections.deque([(0, 0)])
        vis[0][0] = True
        distance = 1
        while que:
            distance += 1
            for _ in range(len(que)):
                x, y = que.popleft()
                for xx, yy in [(x + 1, y + 1), (x + 1, y), (x + 1, y - 1), (x, y + 1), 
                               (x - 1, y + 1), (x - 1, y), (x - 1, y - 1), (x, y - 1)]:
                    if 0 <= xx < n and 0 <= yy < n and not grid[xx][yy] and not vis[xx][yy]:
                        if xx == n - 1 and yy == n - 1:
                            return distance
                        vis[xx][yy] = True
                        que.append((xx, yy))
        return -1
