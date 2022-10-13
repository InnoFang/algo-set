"""
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        return n << 1 if n & 1 == 1 else n 
    