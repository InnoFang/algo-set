"""
600 / 600 test cases passed.
Runtime: 36 ms
Memory Usage: 14.7 MB
"""
class Solution:
    def reverseBits(self, n: int) -> int:
        ans = 0
        for i in range(32):
            ans = ans << 1 | n & 1
            n >>= 1
        return ans
