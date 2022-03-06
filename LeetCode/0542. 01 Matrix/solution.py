"""
50 / 50 test cases passed.
Runtime: 236 ms
Memory Usage: 18.2 MB
"""
class Solution:
    def updateMatrix(self, mat: List[List[int]]) -> List[List[int]]:
        m, n = len(mat), len(mat[0])
        ret = [[0] * n for _ in range(m)]
        que = collections.deque()
        for i in range(m):
            for j in range(n):
                if not mat[i][j]:
                    for x, y in [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]:
                        if 0 <= x < m and 0 <= y < n and mat[x][y] and not ret[x][y]:
                            ret[x][y] = 1
                            que.append((x, y))
        while que:
            x, y = que.popleft()
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and mat[xx][yy] and not ret[xx][yy]:
                    ret[xx][yy] = ret[x][y] + 1
                    que.append((xx, yy))
        return ret
        