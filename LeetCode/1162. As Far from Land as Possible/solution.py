"""
37 / 37 test cases passed.
Runtime: 248 ms
Memory Usage: 15.7 MB
"""
class Solution:
    def maxDistance(self, grid: List[List[int]]) -> int:
        n = len(grid)
        que = collections.deque([(i, j) for i in range(n) for j in range(n) if grid[i][j]]);
        if not que or len(que) == n * n:
            return -1 
        ans = -1
        while que:
            ans += 1
            for _ in range(len(que)):
                x, y = que.popleft()
                for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                    if 0 <= xx < n and 0 <= yy < n and grid[xx][yy] == 0:
                        grid[xx][yy] = 1
                        que.append((xx, yy))
        return ans
            