"""
98 / 98 test cases passed.
Runtime: 60 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def removeDuplicates(self, S: str) -> str:
        stk = []
        for c in S:
            if stk and stk[-1] == c:
                stk.pop()
            else:
                stk.append(c)
        return ''.join(stk)
