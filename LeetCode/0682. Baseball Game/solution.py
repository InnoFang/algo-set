"""
39 / 39 test cases passed.
Runtime: 32 ms
Memory Usage: 15.2 MB
"""
class Solution:
    def calPoints(self, ops: List[str]) -> int:
        stk = []
        for op in ops:
            if op == 'C': stk.pop()
            elif op == '+': stk.append(stk[-2] + stk[-1])
            elif op == 'D': stk.append(stk[-1] * 2)
            else: stk.append(int(op))
        return sum(stk)
