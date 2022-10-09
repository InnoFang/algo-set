"""
86 / 86 test cases passed.
Runtime: 44 ms
Memory Usage: 15 MB
"""
class Solution:
    def scoreOfParentheses(self, s: str) -> int:
        stk = [0]
        for c in s:
            if c == '(':
                stk.append(0)
            else:
                cur = stk.pop()
                stk.append(stk.pop() + max(cur * 2, 1))
        return stk[-1]
        