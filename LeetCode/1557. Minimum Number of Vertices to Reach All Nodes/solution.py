"""
66 / 66 test cases passed.
Runtime: 140 ms
Memory Usage: 36 MB
"""
class Solution:
    def findSmallestSetOfVertices(self, n: int, edges: List[List[int]]) -> List[int]:
        indegree = [0] * n
        for edge in edges:
            indegree[edge[1]] = True
        ans = []
        for i, d in enumerate(indegree):
            if d == 0:
                ans.append(i)
        return ans

