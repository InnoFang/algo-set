"""
59 / 59 test cases passed.
Runtime: 44 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        count = 0
        ans = ''
        for c in s:
            if c == ')':
                count -= 1
            if count != 0:
                ans += c
            if c == '(':
                count += 1
        return ans
