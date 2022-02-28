"""
57 / 57 test cases passed.
Runtime: 636 ms
Memory Usage: 22 MB
"""
class Solution:
    def countSubIslands(self, grid1: List[List[int]], grid2: List[List[int]]) -> int:
        ans, m, n = 0, len(grid1), len(grid1[0])
        for i in range(m):
            for j in range(n):
                if grid2[i][j]:
                    que = collections.deque([(i, j)])
                    grid2[i][j] = 0
                    is_sub = True
                    while que:
                        x, y = que.pop()
                        if not grid1[x][y]:
                            is_sub = False
                        for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                            if 0 <= xx < m and 0 <= yy < n and grid2[xx][yy] == 1:
                                que.append((xx, yy))
                                grid2[xx][yy] = 0
                    if is_sub:
                        ans += 1
        return ans
