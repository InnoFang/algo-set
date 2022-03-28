"""
204 / 204 test cases passed.
Runtime: 32 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        x = (n ^ (n >> 1))
        return (x & (x + 1)) == 0

