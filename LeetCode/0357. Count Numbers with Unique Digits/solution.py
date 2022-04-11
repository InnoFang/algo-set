"""
9 / 9 test cases passed.
Runtime: 40 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def countNumbersWithUniqueDigits(self, n: int) -> int:
        if n == 0: return 1
        if n == 1: return 10
        return 9 * math.perm(9, n - 1) + self.countNumbersWithUniqueDigits(n - 1
        