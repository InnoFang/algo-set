"""
113 / 113 test cases passed.
Runtime: 48 ms
Memory Usage: 15.7 MB
"""
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        ans, n = 0, len(isConnected)
        vis = [False] * n
        def dfs(curr):
            for i in range(n):
                if isConnected[curr][i] and not vis[i]:
                    vis[i] = True
                    dfs(i)
        for i in range(n):
            if not vis[i]:
                dfs(i)
                ans += 1
        return ans
        