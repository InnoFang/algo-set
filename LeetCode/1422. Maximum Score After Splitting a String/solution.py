"""
104 / 104 test cases passed.
Runtime: 48 ms
Memory Usage: 14.9 MB
"""
class Solution:
    def maxScore(self, s: str) -> int:
        ans = score = (s[0] == '0') + s[1:].count('1')
        for c in s[1:-1]:
            score += 1 if c == '0' else -1
            ans = max(ans, score)
        return ans
