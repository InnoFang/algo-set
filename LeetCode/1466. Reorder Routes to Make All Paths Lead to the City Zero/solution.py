"""
76 / 76 test cases passed.
Runtime: 292 ms
Memory Usage: 34.6 MB
"""
class Solution:
    def minReorder(self, n: int, connections: List[List[int]]) -> int:
        node2edges = collections.defaultdict(list)
        for id, edge in enumerate(connections):
            node2edges[edge[0]].append(id)
            node2edges[edge[1]].append(id)
        used = [False] * len(connections)
        que = collections.deque([0])
        ans = 0
        while que:
            node = que.pop()
            for edge_id in node2edges[node]:
                if not used[edge_id]:
                    used[edge_id] = True
                    fr = connections[edge_id][0]
                    to = connections[edge_id][1]
                    if node == fr:
                        ans += 1
                        que.append(to)
                    else:
                        que.append(fr)
        return ans
