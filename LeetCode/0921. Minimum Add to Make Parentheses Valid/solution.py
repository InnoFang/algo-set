"""
115 / 115 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        ans = cnt = 0
        for c in s:
            if c == '(':
                cnt += 1
            elif cnt > 0:
                cnt -= 1
            else:
                ans += 1
        return ans + cnt
        