"""
51 / 51 test cases passed.
Runtime: 128 ms
Memory Usage: 15.8 MB
"""
class Solution:
    def shortestPathLength(self, graph: List[List[int]]) -> int:
        n = len(graph)
        que = collections.deque([(i, 1 << i, 0) for i in range(n)])
        vis = [[False] * (1 << n) for _ in range(n)]
        for i in range(n):
            vis[i][1 << i] = True
        while que:
            cur, mask, dist = que.popleft()
            if mask == (1 << n) - 1:
                return dist
            for x in graph[cur]:
                next_mask = mask | (1 << x);
                if not vis[x][next_mask]:
                    vis[x][next_mask] = True
                    que.append((x, next_mask, dist + 1))
        return 0
