"""
194 / 194 test cases passed.
Runtime: 164 ms
Memory Usage: 16.6 MB
"""
class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int:
        m, n = len(maze), len(maze[0])
        vis = [[False] * n for _ in range(m)]
        que = collections.deque([(entrance[0], entrance[1])])
        vis[entrance[0]][entrance[1]] = True
        dist = 0
        while que:
            dist += 1
            for _ in range(len(que)):
                x, y = que.popleft()
                for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                    if 0 <= xx < m and 0 <= yy < n and maze[xx][yy] != '+' and not vis[xx][yy]:
                        if xx in [0, m - 1] or yy in [0, n - 1]:
                            return dist
                        vis[xx][yy] = True
                        que.append((xx, yy))
        return -1
                        