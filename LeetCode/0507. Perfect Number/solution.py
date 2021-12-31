"""
98 / 98 test cases passed.
Runtime: 36 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def checkPerfectNumber(self, num: int) -> bool:
        return num in [6, 28, 496, 8128, 33550336]
