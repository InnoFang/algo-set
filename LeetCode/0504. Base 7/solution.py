"""
241 / 241 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def convertToBase7(self, num: int) -> str:
        if num == 0: return '0'
        neg = num < 0
        num = abs(num)
        digits = ''
        while num > 0:
            digits += str(num % 7)
            num //= 7
        if neg:
            digits += '-'
        return digits[::-1]
            