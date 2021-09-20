"""
126 / 126 test cases passed.
Runtime: 28 ms
Memory Usage: 15 MB
"""
class Solution:
    def minSteps(self, n: int) -> int:
        if n == 1:
            return 0
        x = n >> 1
        while n % x != 0:
            x -= 1
        return self.minSteps(x) + (n // x)
