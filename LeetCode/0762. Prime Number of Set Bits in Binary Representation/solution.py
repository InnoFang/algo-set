"""
202 / 202 test cases passed.
Runtime: 104 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        return sum((1 << x.bit_count()) & 0b10100010100010101100 != 0 for x in range(left, right + 1))
