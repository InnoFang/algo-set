"""
1108 / 1108 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    larger = 2 << 30
    def isPowerOfTwo(self, n: int) -> bool:
        return n > 0 and Solution.larger % n == 0
