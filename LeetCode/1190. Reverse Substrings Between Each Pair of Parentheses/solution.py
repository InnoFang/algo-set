"""
38 / 38 test cases passed.
Runtime: 36 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def reverseParentheses(self, s: str) -> str:
        stk = []
        sub = ""
        for c in s:
            if c == '(':
                stk.append(sub)
                sub = ""
            elif c == ')':
                sub = stk[-1] + sub[::-1]
                stk.pop()
            else:
                sub += c
        return sub

"""
38 / 38 test cases passed.
Runtime: 44 ms
Memory Usage: 14.8 MB
"""
class Solution:
    def reverseParentheses(self, s: str) -> str:
        stk = ['']
        for c in s:
            if c == '(':
                stk.append('')
            elif c == ')':
                reversed_top = stk.pop()[::-1]
                stk[-1] += reversed_top
            else:
                stk[-1] += c
        return stk[0]
