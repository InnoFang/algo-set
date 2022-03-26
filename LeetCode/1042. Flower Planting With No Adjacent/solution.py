"""
51 / 51 test cases passed.
Runtime: 108 ms
Memory Usage: 19.3 MB
"""
class Solution:
    def gardenNoAdj(self, n: int, paths: List[List[int]]) -> List[int]:
        graph = [[] for _ in range(n)]
        ans = [0] * n
        for x, y in paths:
            graph[x - 1].append(y - 1)
            graph[y - 1].append(x - 1)
        for i in range(n):
            ans[i] = ({1, 2, 3, 4} - {ans[adj] for adj in graph[i]}).pop()
        return ans
        