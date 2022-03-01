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
       

"""
36 / 36 test cases passed.
Runtime: 148 ms
Memory Usage: 26.3 MB
"""
class Solution2:
    class UF:
        def __init__(self, n):
            self.parent = list(range(n))
            self.rank = [1] * n
            self.n = n
            self.count = n

        def find(self, i):
            if self.parent[i] != i:
                self.parent[i] = self.find(self.parent[i])
            return self.parent[i]
        
        def union(self, i, j):
            x, y = self.find(i), self.find(j)
            if x == y:
                return False
            if self.rank[x] < self.rank[y]:
                x, y = y, x
            self.parent[y] = x
            self.rank[x] += self.rank[y]
            self.count -= 1
            return True
        
        def connected(self, i, j):
            return self.find(i) == self.find(j)

    
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        if n - 1 > len(connections):
            return -1
        uf = self.UF(n)
        for x, y in connections:
            uf.union(x, y)
        return uf.count - 1
