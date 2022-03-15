"""
41 / 41 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m, n = len(obstacleGrid), len(obstacleGrid[0])
        if obstacleGrid[0][0] or obstacleGrid[m - 1][n - 1]:
            return 0
        dp = [[0] * n for _ in range(m)]
        for i in range(m): 
            if obstacleGrid[i][0]:
                break
            dp[i][0] = 1
            
        for i in range(n):
            if obstacleGrid[0][i]:
                break
            dp[0][i] = 1
            
        for i in range(1, m):
            for j in range(1, n):
                if not obstacleGrid[i][j]:
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1]
        return dp[m - 1][n - 1]
