"""
71 / 71 test cases passed.
Runtime: 124 ms
Memory Usage: 21.6 MB
"""
class Solution:
    def findMinHeightTrees(self, n: int, edges: List[List[int]]) -> List[int]:
        if n == 1: return [0]
        graph = collections.defaultdict(list)
        out_degree = [0] * n
        for x, y in edges:
            out_degree[x] += 1
            out_degree[y] += 1
            graph[x].append(y)
            graph[y].append(x)
        que = collections.deque([i for i in range(n) if out_degree[i] == 1])    
        ans = []
        while que:
            ans = []
            for _ in range(len(que)):
                x = que.popleft()
                ans.append(x)
                for y in graph[x]:
                    out_degree[y] -= 1
                    if out_degree[y] == 1:
                        que.append(y)
        return ans
