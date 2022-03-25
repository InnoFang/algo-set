"""
500 / 500 test cases passed.
Runtime: 40 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def trailingZeroes(self, n: int) -> int:
        ans = 0
        while n > 0:
            ans += n // 5
            n //= 5
        return ans
