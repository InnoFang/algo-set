"""
40 / 40 test cases passed.
Runtime: 0 ms
Memory Usage: 35.9 MB
"""
class Solution:
    def balancedStringSplit(self, s: str) -> int:
        ans, total = 0, 0
        for c in s:
            total += 1 if c == 'R' else -1
            ans += 1 if total == 0 else 0
        return ans
