"""
10957 / 10957 test cases passed.
Runtime: 64 ms
Memory Usage: 14.9 MB
"""
class Solution:
    days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    def dayOfYear(self, date: str) -> int:
        y, m, d = list(map(int, date.split('-')))
        d += sum(self.days[:m])
        d += ((y % 4 == 0 and y % 100 != 0) or y % 400 == 0) if m > 2 else 0
        return d
