"""
69 / 69 test cases passed.
Runtime: 124 ms
Memory Usage: 18 MB
"""
class Solution:
    def shortestBridge(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        que = collections.deque()

        def dfs(x, y):
            grid[x][y] = 2
            que.append((x, y))
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] == 1:
                    dfs(xx, yy)
        
        def bfs():
            distance = -1
            while que:
                distance += 1
                for _ in range(len(que)):
                    x, y = que.popleft()
                    for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                        if 0 <= xx < m and 0 <= yy < n and grid[xx][yy] != 2:
                            if grid[xx][yy] == 1:
                                return distance
                            grid[xx][yy] = 2
                            que.append((xx, yy))
            return -1

        for i in range(m):
            for j in range(n):
                if grid[i][j]:
                    dfs(i, j)
                    return bfs()
        return -1
