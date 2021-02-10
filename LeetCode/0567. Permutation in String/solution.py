"""
103 / 103 test cases passed.
Status: Accepted
Runtime: 80 ms
"""
from collections import Counter

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        k = len(s1)
        store = dict(Counter(s1))
        slide = dict(Counter(s2[:k]))
        if store == slide:
            return True
        for i, j in zip(s2[:-k], s2[k:]):
            slide[i] -= 1
            if slide[i] == 0:
                del slide[i]
            if j not in slide:
                slide[j] = 0
            slide[j] += 1
            if store == slide:
                return True
        return False
