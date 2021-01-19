"""
72 / 72 test cases passed.
Status: Accepted
Runtime: 6808 ms
"""
class Solution:
    rank, parent = [], []
    def find(self, x):
        return parent[x] if parent[x] == x else self.find(parent[x])
    def union(self, x, y):
        fx, fy = self.find(x), self.find(y)
        if fx == fy:
            return False
        if rank[fx] < rank[fy]:
            rank[fx], rank[fy] = rank[fy], rank[fx]
        rank[fx] += rank[fy]
        parent[fy] = fx
        return True

    def minCostConnectPoints(self, points: List[List[int]]) -> int:
        dist = lambda p, q: abs(p[0] - q[0]) + abs(p[1] - q[1]) 

        N = len(points)
        global rank, parent
        rank, parent = [1] * N, list(range(N))
        edges = []
        for i in range(N):
            for j in range(i + 1, N):
                edges.append( [ i, j, dist(points[i], points[j]) ] )
        edges.sort( key = lambda e: e[2] )
        ans, num = 0, 0
        for edge in edges:
            if self.union( edge[0], edge[1] ):
                ans += edge[2]
                num += 1
                if num == N:
                    break
        return ans
