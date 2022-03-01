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

"""
113 / 113 test cases passed.
Runtime: 48 ms
Memory Usage: 15.4 MB
"""
class Solution2:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        parent = list(range(n))

        def find(i):
            if parent[i] != i:
                parent[i] = find(parent[i])
            return parent[i]

        def union(i, j):
            parent[find(i)] = find(j)

        for i in range(n):
            for j in range(i + 1, n):
                if isConnected[i][j] == 1:
                    union(i, j)
        return sum(parent[i] == i for i in range(n))
        