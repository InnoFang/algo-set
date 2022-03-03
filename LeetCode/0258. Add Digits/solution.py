"""
1101 / 1101 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def addDigits(self, num: int) -> int:
        while num >= 10:
            tmp = 0
            while num:
                tmp += num % 10
                num //= 10 
            num = tmp
        return num
