"""
90 / 90 test cases passed.
Runtime: 32 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def shortestAlternatingPaths(self, n: int, redEdges: List[List[int]], blueEdges: List[List[int]]) -> List[int]:
        rg = collections.defaultdict(list)
        bg = collections.defaultdict(list)
        for x, y in redEdges:
            rg[x].append(y)
        for x, y in blueEdges:
            bg[x].append(y)
        
        que = collections.deque([(0, 0), (0, 1)])
        ans = [111] * n
        steps = 0
        ans[0] = 0
        while que:
            steps += 1 
            for _ in range(len(que)):
                cur, color = que.popleft()
                g = rg if color == 0 else bg
                for nxt in g[cur]:
                    ans[nxt] = min(ans[nxt], steps)
                    que.append((nxt, 1 ^ color))
                g[cur] = []
        return [-1 if x == 111 else x for x in ans]
                