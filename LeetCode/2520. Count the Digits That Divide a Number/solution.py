"""
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def countDigits(self, num: int) -> int:
        return sum(num % i == 0 for i in map(int, str(num)))
