"""
50 / 50 test cases passed.
Runtime: 500 ms
Memory Usage: 53.3 MB
"""
class Solution:
    def networkBecomesIdle(self, edges: List[List[int]], patience: List[int]) -> int:
        n = len(patience)
        g = collections.defaultdict(list)
        for x, y in edges:
            g[x].append(y)
            g[y].append(x)
        vis = [False] * n
        vis[0] = True
        que = collections.deque([0])
        ans = dist = 0
        while que:
            dist += 1
            for _ in range(len(que)):
                x = que.popleft()
                for y in g[x]:
                    if not vis[y]:
                        vis[y] = True
                        que.append(y)
                        ans = max(ans, (2 * dist - 1) // patience[y] * patience[y] + 2 * dist + 1)
        return ans
        