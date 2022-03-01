"""
112 / 112 test cases passed.
Runtime: 132 ms
Memory Usage: 19.9 MB
"""
class Solution:
    def eventualSafeNodes(self, graph: List[List[int]]) -> List[int]:
        n = len(graph)
        rg = [[] for _ in range(n)]
        in_deg = [0] * n
        for sr, scs in enumerate(graph):
            for sc in scs:
                rg[sc].append(sr)
            in_deg[sr] = len(scs)
        
        que = collections.deque([i for i, d in enumerate(in_deg) if d == 0])

        while que:
            for x in rg[que.popleft()]:
                in_deg[x] -= 1
                if in_deg[x] == 0:
                    que.append(x)

        return [i for i, d in enumerate(in_deg) if d == 0]
        