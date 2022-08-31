"""
151 / 151 test cases passed.
Runtime: 40 ms
Memory Usage: 15.1 MB
"""
class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        s = []
        i = 0
        for num in pushed:
            s.append(num)
            while s and s[-1] == popped[i]:
                i += 1
                s.pop()
        return len(s) == 0
