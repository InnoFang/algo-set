"""
1061 / 1061 test cases passed.
Runtime: 32 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0:
            return False
        res = math.log(n) / math.log(4)
        return (res - int(res)) < 1e-6
