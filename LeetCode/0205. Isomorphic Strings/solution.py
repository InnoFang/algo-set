"""
32 / 32 test cases passed.
Status: Accepted
Runtime: 64 ms
"""
class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return sum([s.find(s[i]) != t.find(t[i]) for i in range(len(s))]) == 0

"""
32 / 32 test cases passed.
Status: Accepted
Runtime: 56 ms
"""
class Solution2:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return all([s.find(si) == t.find(ti) for si, ti in zip(s, t)])

"""
32 / 32 test cases passed.
Status: Accepted
Runtime: 40 ms
"""
class Solution3:
    def isIsomorphic(self, s: str, t: str) -> bool:
        return len(set(zip(s,t))) == len(set(s)) == len(set(t))
