"""
103 / 103 test cases passed.
Runtime: 32 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def generateTheString(self, n: int) -> str:
        if n % 2 == 1: 
            return 'a' * n
        return 'a' * (n - 1) + 'b'
