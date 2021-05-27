"""
56 / 56 test cases passed.
Runtime: 28 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def hammingDistance(self, x: int, y: int) -> int: 
        return str(bin(x ^ y)).count('1')

"""
56 / 56 test cases passed.
Runtime: 44 ms
Memory Usage: 14.7 MB
"""
class Solution2:
    def hammingDistance(self, x: int, y: int) -> int: 
        ans, n = 0, x ^ y
        while n:
            ans += n & 1
            n >>= 1
        return ans
