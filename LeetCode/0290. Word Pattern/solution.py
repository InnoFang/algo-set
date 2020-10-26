"""
36 / 36 test cases passed.
Status: Accepted
Runtime: 44 ms
"""
class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s = s.split()
        return list(map(pattern.index, pattern)) == list(map(s.index, s))
