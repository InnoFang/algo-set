"""
Runtime: 36 ms
Memory Usage: 15 MB
"""
class Solution:
    def alternateDigitSum(self, n: int) -> int:
        total, sign = 0, 1
        while n:
            total += (n % 10) * sign
            sign = -sign
            n //= 10
        return total * -sign
    