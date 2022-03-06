"""
91 / 91 test cases passed.
Runtime: 40 ms
Memory Usage: 15 MB
"""
class Solution:
    def isValid(self, s: str) -> bool:
        stk = []
        for c in s:
            if c in ['(', '{', '[']:
                stk.append(c)
            elif c == ')':
                if stk and stk[-1] == '(':
                    stk.pop()
                else:
                    return False
            elif c == '}':
                if stk and stk[-1] == '{':
                    stk.pop()
                else:
                    return False
            elif c == ']':
                if stk and stk[-1] == '[':
                    stk.pop()
                else:
                    return False
        return len(stk) == 0


"""
91 / 91 test cases passed.
Runtime: 52 ms
Memory Usage: 15.1 MB
"""
class Solution2:
    def isValid(self, s: str) -> bool:
        dct = {')':'(', '}':'{', ']':'['}
        stk = []
        for c in s:
            if stk and c in dct:
                if stk[-1] == dct[c]:
                    stk.pop()
                else:
                    return False
            else:
                stk.append(c)
        return not stk
