"""
54 / 54 test cases passed.
Runtime: 8708 ms
Memory Usage: 37.1 MB
"""
class Solution:
    def minimumObstacles(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        dp = [[float('inf')] * n for _ in range(m)] 
        dp[0][0] = 0
        que = collections.deque([(0, 0)])
        while que:
            x, y = que.popleft()
            for xx, yy in [(x + 1, y), (x - 1, y), (x, y + 1), (x, y - 1)]:
                if 0 <= xx < m and 0 <= yy < n and dp[x][y] <= dp[xx][yy]: 
                    old = dp[xx][yy]
                    if grid[xx][yy] == 0:
                        dp[xx][yy] = min(dp[xx][yy], dp[x][y]) 
                    else:    
                        dp[xx][yy] = min(dp[xx][yy], dp[x][y] + 1) 
                    if dp[xx][yy] != old:    
                        que.append((xx, yy))     
        return dp[m - 1][n - 1]
                    