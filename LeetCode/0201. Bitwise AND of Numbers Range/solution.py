"""
8268 / 8268 test cases passed.
Runtime: 52 ms
Memory Usage: 15 MB
"""
class Solution:
    def rangeBitwiseAnd(self, left: int, right: int) -> int:
        shift = 0
        while left < right:
            left >>= 1
            right >>= 1
            shift += 1
        return right << shift
