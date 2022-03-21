"""
80 / 80 test cases passed.
Runtime: 44 ms
Memory Usage: 15.6 MB
"""
class Solution:
    def isBipartite(self, graph: List[List[int]]) -> bool:
        n = len(graph)
        nodes = [-1] * n
        def dfs(idx, color):
            if nodes[idx] != -1:
                return  nodes[idx] == color
            nodes[idx] = color
            for adj in graph[idx]:
                if not dfs(adj, not color):
                    return False
            return True
        for i in range(n):
            if nodes[i] == -1 and not dfs(i, 0):
                return False
        return True
