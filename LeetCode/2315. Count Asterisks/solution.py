"""
Runtime: 44 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def countAsterisks(self, s: str) -> int:
        open = True
        ans = 0
        for c in s:
            if c == '|':
                open = not open
            if open and c == '*':
                ans += 1
        return ans
