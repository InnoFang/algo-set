"""
56 / 56 test cases passed.
Runtime: 28 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def hammingDistance(self, x: int, y: int) -> int: 
        return str(bin(x ^ y)).count('1')
