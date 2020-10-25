"""
32 / 32 test cases passed.
Status: Accepted
Runtime: 64 ms
"""
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return sum([s.find(s[i]) != t.find(t[i]) for i in range(len(s))]) == 0
