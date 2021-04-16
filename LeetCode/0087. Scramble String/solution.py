"""
288 / 288 test cases passed.
Runtime: 72 ms
Memory Usage: 16.4 MB
"""
class Solution:
    @functools.lru_cache(None)
    def isScramble(self, s1: str, s2: str) -> bool:
        if s1 == s2:
            return True
        if Counter(s1) != Counter(s2):
            return False
        N = len(s1)
        for i in range(1, N):
            if self.isScramble(s1[:i], s2[:i]) and self.isScramble(s1[i:], s2[i:]):
                return True
            elif self.isScramble(s1[:i], s2[N - i:]) and self.isScramble(s1[i:], s2[:N - i]):
                return True
        return False

