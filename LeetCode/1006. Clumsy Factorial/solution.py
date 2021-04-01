"""
84 / 84 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def clumsy(self, N: int) -> int:
        if N <= 4:
            return [1, 2, 6, 7][N - 1]
        else:
            return N + [1, 2, 2, -1][N % 4]
