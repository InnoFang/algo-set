"""
30 / 30 test cases passed.
Runtime: 40 ms
Memory Usage: 16.2 MB
"""
class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        ans, path = [], [0]
        def dfs(curr, last):
            if curr == last:
                ans.append(path[:])
                return
            for nxt in graph[curr]:
                path.append(nxt)
                dfs(nxt, last)
                path.pop()
        n = len(graph)
        dfs(0, n - 1)
        return ans
