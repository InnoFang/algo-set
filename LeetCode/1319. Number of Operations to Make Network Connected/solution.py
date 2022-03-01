"""
36 / 36 test cases passed.
Runtime: 112 ms
Memory Usage: 44.5 MB
"""
class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        if n - 1 > len(connections):
            return -1
        used = [False] * n
        edges = [[] for _ in range(n)]
        for conn in connections:
            edges[conn[0]].append(conn[1])
            edges[conn[1]].append(conn[0])
        
        def dfs(i):
            used[i] = True
            for v in edges[i]:
                if not used[v]:
                    dfs(v)

        ans = 0
        for i in range(n):
            if not used[i]:
                dfs(i)
                ans += 1
        return ans - 1
       
