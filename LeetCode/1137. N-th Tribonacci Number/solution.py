"""
39 / 39 test cases passed.
Runtime: 44 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 2:
            return n;
        a, b, c = 0, 1, 1
        for i in range(3, n + 1):
            a, b, c = b, c, a + b + c
        return c
    
