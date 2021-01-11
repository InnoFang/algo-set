"""
92 / 92 test cases passed.
Status: Accepted
Runtime: 760  ms
"""
class Solution:
    def findJudge(self, N: int, trust: List[List[int]]) -> int:
        degree = [0] * (N + 1)
        for o, i in trust:
            degree[o] -= 1
            degree[i] += 1
        for i in range(1, N + 1):
            if degree[i] == N - 1:
                return i
        return -1
